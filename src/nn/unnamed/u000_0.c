#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_103b040)(__int64, __int64, _QWORD);
extern __int64 SdkData_103f140;
extern int SdkData_10406ac;
extern __int64 SdkData_1040738;
extern _QWORD SdkData_c2d1c0[8];
extern __int64 (*SdkData_e68388[])();
extern __int64 (*SdkData_e727e0[])();
extern __int64 (*SdkData_e72870[])();
extern __int64 (*SdkData_e728f0[])();
extern _UNKNOWN SdkData_e72d18;
extern __int64 (*SdkData_e73090)();
extern __int64 (*SdkData_e740d8[])();
extern __int64 (*SdkData_e748a0[])();
extern __int64 (*SdkData_e74ce0[])();
extern __int64 SdkData_e86c58;
extern __int64 SdkData_e86d10;
extern __int64 SdkData_e86e10;
extern __int64 SdkData_e86e18;
extern __int64 SdkData_e86ff0;
extern __int64 SdkData_e88398;
extern __int64 SdkData_e883a0;
extern __int64 SdkData_e883a8;
extern __int64 SdkData_e883b0;
extern __int64 SdkData_e883b8;
extern __int64 SdkData_e883c0;
extern __int64 SdkData_e883c8;
extern __int64 SdkData_e883d0;
extern __int64 SdkData_e883d8;
extern __int64 SdkData_e883e0;
extern __int64 SdkData_e883e8;
extern __int64 SdkData_e883f0;
extern __int64 SdkData_e883f8;
extern __int64 SdkData_e88400;
extern __int64 SdkData_e88408;
extern __int64 SdkData_e88410;
extern __int64 SdkData_e88520;
extern __int64 SdkData_e88540;
extern __int64 SdkData_e88708;
extern __int64 SdkData_e88740;
extern __int64 SdkData_e88c38;
extern __int64 SdkData_e88c40;
extern __int64 SdkData_efeec8;
__int64 SdkRoutine_12c0c0(void);
__int64 SdkRoutine_133fc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1345d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_134890(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_134d30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_146ed0();
__int64 SdkRoutine_14d4b0();
unsigned int* SdkRoutine_1a5700(unsigned int* result);
__int64 SdkRoutine_1b6ce0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1b7890(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_409fc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_40a180(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_5a3610(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_5a3f20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_5f8f80(_QWORD);
__int64 SdkRoutine_5f8f90(_QWORD);
__int64 SdkRoutine_5f8fa0(_QWORD);
__int64 SdkRoutine_6197b0(_QWORD);
__int64 SdkRoutine_619800(_QWORD);
__int64 SdkRoutine_629ca0(void);
__int64 SdkRoutine_629e00(_QWORD);
__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_856170(_QWORD);
__int64 SdkRoutine_859220(void);
__int64 SdkRoutine_859960(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85be70(_QWORD);
__int64 SdkRoutine_85c080(void);
__int64 SdkRoutine_85c800(_QWORD);
__int64 SdkRoutine_85c990(void);
__int64 SdkRoutine_85e1b0(_QWORD, _QWORD);
__int64 SdkRoutine_85e360(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_860a00(_QWORD);
__int64 SdkRoutine_871520(_QWORD);
__int64 SdkRoutine_875b30(void);
__int64 SdkRoutine_b83c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_e3e40(_QWORD);
__int64 SdkRoutine_ea6b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_f0d50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_f1290(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 SdkRoutine_f1c50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_f1f70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) SdkHr_0() { __udf(1u); }

__int64 SdkHr_3aa50(__int64 result)
{
  *(_DWORD*)(*(_QWORD*)(result + 48) + 72LL) = 1;
  return result;
}

__int64 SdkHr_90540(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = SdkRoutine_856170(a1);
  if ((*(_BYTE*)(v1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)v1;
    v4 = *(_QWORD*)(v1 + 8);
    v6 = v4 + v3;
    if ((unsigned __int64)(v4 + v3) <= *(_QWORD*)v1) {
      v7 = v1;
      v8 = v3;
      SdkRoutine_856130(v2, *(_QWORD*)(v1 + 24) + v4, v3);
      *(_QWORD*)(v7 + 8) += v8;
    }
    return v6 <= v5;
  }
  else {
    result = SdkRoutine_856170(v1);
    if (*(_BYTE*)(result + 16) == 1) {
      v12 = SdkRoutine_856170(result);
      if ((*(_BYTE*)(v12 + 16) & 1) == 0) {
        SdkRoutine_856170(v12);
        __udf(0);
      }
      v16 = *(_QWORD*)v12;
      v15 = *(_QWORD*)(v12 + 8);
      v17 = v15 + v14;
      if ((unsigned __int64)(v15 + v14) <= *(_QWORD*)v12) {
        v18 = v12;
        v19 = v14;
        SdkRoutine_856130(*(_QWORD*)(v12 + 24) + v15, v13, v14);
        *(_QWORD*)(v18 + 8) += v19;
      }
      return v17 <= v16;
    }
    else {
      *(_QWORD*)(result + 24) = v10;
      *(_QWORD*)result = v11;
      *(_QWORD*)(result + 8) = 0;
      *(_BYTE*)(result + 16) = 1;
    }
  }
  return result;
}

__int64 SdkHr_ae000(_QWORD* a1)
{
  *a1 = SdkData_e86c58 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_b5990(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                    __int64 a5, unsigned int a6)
{
  return SdkRoutine_859960(a1, a2, a3, a4, a5, a6);
}

__int64 SdkHr_b8390(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_b83c0(a1 + 8, *a2, a2[1], 0);
}

__int64 SdkHr_b9220(__int64 result)
{
  if ((unsigned int)result >= 3) {
    return 3;
  }
  else {
    return (unsigned int)result;
  }
}

__int64 SdkHr_cea00(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 32) + 64LL))(
      *(_QWORD*)(a1 + 32));
}

__int64 SdkHr_cebd0() { return 1536514; }

__int64 SdkHr_cebe0(_QWORD* a1)
{
  *a1 = SdkData_e86d10 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_de160(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 SdkHr_de170() { return 3225602; }

__int64 SdkHr_e31a0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_f0d50(a1 + 8, a2, *a3, a3[1], 602);
}

__int64 SdkHr_e3220(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                    unsigned __int8 a5)
{
  return SdkRoutine_f1290(a1 + 8, a2, a3, a4, 769, a5, 610);
}

__int64 SdkHr_e32c0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  return SdkRoutine_f1c50(a1 + 8, a2, a3, 769, a4, 618);
}

__int64 SdkHr_e3340(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  return SdkRoutine_f1f70(a1 + 8, a2, a3, 769, a4, 660);
}

__int64 SdkHr_e3e30(__int64 a1)
{
  __int64 v1;

  v1 = SdkRoutine_856170(a1);
  return SdkRoutine_e3e40(v1);
}

__int64 SdkHr_eb570(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_ea6b0(a1 + 8, *a2, a2[1], 1);
}

__int64 SdkHr_eb6d0(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_ea6b0(a1 + 8, *a2, a2[1], 67);
}

__int64 SdkHr_eb740(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_ea6b0(a1 + 8, *a2, a2[1], 75);
}

__int64 SdkHr_ecaf0(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_ea6b0(a1 + 8, *a2, a2[1], 35);
}

__int64 SdkHr_12f390() { return 0; }

__int64 SdkHr_12f3a0(_QWORD* a1)
{
  *a1 = SdkData_e86e10 + 16;
  return SdkRoutine_12c0c0();
}

__int64 SdkHr_12f5a0(_QWORD* a1)
{
  *a1 = SdkData_e86e18 + 16;
  return SdkRoutine_12c0c0();
}

void SdkHr_12f6a0(__int64 a1, __int64 a2) { *(_DWORD*)(a2 + 56) = 0; }

__int64 SdkHr_133b80(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_133fc0(a1 + 8, a2, *a3, a3[1], 1);
}

__int64 SdkHr_133be0(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_b83c0(a1 + 8, *a2, a2[1], 6);
}

__int64 SdkHr_133c00(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_b83c0(a1 + 8, *a2, a2[1], 7);
}

__int64 SdkHr_133c30(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_b83c0(a1 + 8, *a2, a2[1], 9);
}

__int64 SdkHr_133c50(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_b83c0(a1 + 8, *a2, a2[1], 10);
}

__int64 SdkHr_133ca0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  return SdkRoutine_1345d0(a1 + 8, a2, a3, *a4, a4[1], 13);
}

__int64 SdkHr_133cd0(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_134890(a1 + 8, *a2, a2[1], 15);
}

__int64 SdkHr_133cf0(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_134890(a1 + 8, *a2, a2[1], 16);
}

__int64 SdkHr_133d10(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_134890(a1 + 8, *a2, a2[1], 17);
}

__int64 SdkHr_133d30(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_b83c0(a1 + 8, *a2, a2[1], 18);
}

__int64 SdkHr_133d80(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_133fc0(a1 + 8, a2, *a3, a3[1], 22);
}

__int64 SdkHr_133dc0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_134d30(a1 + 8, a2, *a3, a3[1], 25);
}

__int64 SdkHr_133de0(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_134890(a1 + 8, *a2, a2[1], 26);
}

__int64 SdkHr_146f40() { return SdkRoutine_85c800(SdkRoutine_146ed0); }

__int64 SdkHr_14d4a0() { return SdkRoutine_85c800(SdkRoutine_14d4b0); }

_DWORD* SdkHr_16cb60(_DWORD* result)
{
  *result = 0;
  return result;
}

__int64 SdkHr_16d180(__int64 a1, __int64 (*a2)(void)) { return a2(); }

__int64 SdkHr_179690(__int64 a1, unsigned int a2)
{
  return SdkRoutine_85e1b0(a1 - 8, a2);
}

__int64 SdkHr_17b300(__int64 result, int a2)
{
  *(_BYTE*)(result + 68) = 0;
  *(_DWORD*)(result + 72) = a2;
  *(_DWORD*)(result + 64) = 1;
  return result;
}

_QWORD* SdkHr_17bb30(_QWORD* result)
{
  *result = SdkData_e86ff0 + 16;
  result[1] = 0;
  return result;
}

_QWORD* SdkHr_17c490(_QWORD* result, __int64 a2, __int64 a3)
{
  *result = a2;
  result[1] = a3;
  return result;
}

__int64 SdkHr_17c6f0(__int64 a1, _WORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8);
  *a2 = *(_QWORD*)(v2 + 88);
  return 0;
}

__int64 SdkHr_17e5d0(__int64 a1, __int64 a2)
{
  return SdkRoutine_85e360(a1 + 8, a2, *(_QWORD*)(a1 + 8));
}

__int64 SdkHr_17e5e0(__int64 a1, _WORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 16);
  *a2 = *(_QWORD*)(v2 + 88);
  return 0;
}

__int64 SdkHr_17fa80(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 80LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 SdkHr_1b7620(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_1b6ce0(a1 + 8, a2, *a3, a3[1], 3);
}

__int64 SdkHr_1b7660(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  return SdkRoutine_1b7890(a1 + 8, a2, a3, 104, *a4, a4[1], 130);
}

__int64 SdkHr_1b8e10(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  return SdkRoutine_1b7890(a1 + 8, a2, a3, 592, *a4, a4[1], 130);
}

__int64 SdkHr_1b90d0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  return SdkRoutine_1b7890(a1 + 8, a2, a3, 624, *a4, a4[1], 136);
}

void SdkHr_1c965c() { SdkData_efeec8 = 0; }

__int64 SdkHr_1e96e0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_134d30(a1 + 8, a2, *a3, a3[1], 1);
}

__int64 SdkHr_235b60() { return 1079395666; }

__int64 SdkHr_235b70() { return 1062618450; }

__int64 SdkHr_235b80() { return 1045841234; }

__int64 SdkHr_235b90() { return 1029064018; }

__int64 SdkHr_235ba0() { return 1012286802; }

__int64 SdkHr_235bb0() { return 995509586; }

__int64 SdkHr_235bc0() { return 978732370; }

__int64 SdkHr_235bd0() { return 961955154; }

__int64 SdkHr_235be0() { return 945177938; }

__int64 SdkHr_235bf0() { return 928400722; }

__int64 SdkHr_235c00() { return 911623506; }

__int64 SdkHr_235c10() { return 894846290; }

__int64 SdkHr_235c20() { return 878069074; }

__int64 SdkHr_235c30() { return 827737426; }

__int64 SdkHr_235c40() { return 844514642; }

__int64 SdkHr_235c50() { return 861291858; }

__int64 SdkHr_23b420(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 176);
  *a2 = v2;
  return 0;
}

__int64 SdkHr_23b430(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 172);
  *a2 = v2;
  return 0;
}

__int64 SdkHr_23b440(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 168);
  *a2 = v2;
  return 0;
}

__int64 SdkHr_23b450(__int64 a1, int* a2)
{
  int v2;

  v2 = *(unsigned __int8*)(a1 + 129);
  *a2 = v2 ^ 1;
  return 0;
}

__int64 SdkHr_23b550(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 244);
  *a2 = v2;
  return 0;
}

__int64 SdkHr_23b590(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 248);
  *a2 = v2;
  return 0;
}

__int64 SdkHr_24bb10(__int64 a1, int a2)
{
  return *(unsigned __int8*)(a1 + a2 + 340);
}

__int64 SdkHr_24bba0(__int64 a1, int a2)
{
  return *(unsigned __int8*)(a1 + a2 + 108);
}

bool SdkHr_27ced0(__int64 a1)
{
  unsigned int v1;

  v1 = atomic_load((unsigned int*)(a1 + 8));
  return v1 != 1;
}

bool SdkHr_27cef0(__int64 a1)
{
  unsigned int v1;

  v1 = atomic_load((unsigned int*)(a1 + 8));
  return v1 == 2;
}

unsigned int* SdkHr_336a90(unsigned __int8* a1)
{
  unsigned int* result;
  int v2;

  v2 = *a1;
  result = (unsigned int*)(a1 + 4);
  if (v2 == 1) {
    return SdkRoutine_1a5700(result);
  }
  return result;
}

__int64 SdkHr_36267c() { return 253624; }

__int64 SdkHr_362688(__int64 a1, int a2) { return SdkData_c2d1c0[a2 - 1]; }

__int64 SdkHr_3626d8(int a1) { return 2LL * (a1 << 10); }

__int64 SdkHr_402cf0(__int64 a1, __int64 a2) { return (a2 << 32) | 0xA3D; }

__int64 SdkHr_409fb0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  return SdkRoutine_409fc0(a1, a2, a3, a4);
}

__int64 SdkHr_40a170(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  return SdkRoutine_40a180(a1, a2, a3, a4);
}

__int64 SdkHr_42d8b0(__int64 result)
{
  *(_QWORD*)(result + 40) = *(_QWORD*)(*(_QWORD*)(result + 64) + 8LL);
  return result;
}

__int64 SdkHr_42d8c0(__int64 result)
{
  __int64 v1;
  int v2;

  v1 = *(_QWORD*)(result + 40);
  v2 = *(_DWORD*)(v1 - 8);
  *(_DWORD*)(v1 - 8) = *(_DWORD*)(v1 - 4);
  *(_DWORD*)(v1 - 4) = v2;
  return result;
}

__int64 SdkHr_430120(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 64) + 162LL) = 1;
  return result;
}

__int64 SdkHr_430130(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 64) + 162LL) = 0;
  return result;
}

__int64 SdkHr_430140(__int64 result)
{
  *(_QWORD*)(result + 40) -= 4LL;
  return result;
}

__int64 SdkHr_4320c0(__int64 result)
{
  *(_QWORD*)(result + 40) -= 12LL;
  return result;
}

__int64 SdkHr_4320d0(__int64 result)
{
  *(_QWORD*)(result + 40) -= 12LL;
  return result;
}

__int64 SdkHr_432de0(__int64 a1, unsigned int a2) { return a2; }

__int64 SdkHr_432df0(__int64 a1, int a2)
{
  return *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 64) + 24LL) + 4LL * a2);
}

__int64 SdkHr_4335a0(__int64 a1, __int64 a2, unsigned int a3) { return a3; }

__int64 SdkHr_456880(__int64 a1)
{
  return (*(__int64 (**)(__int64, __int64))(a1 + 8))(a1 + 16, a1 + 24);
}

__int64 SdkHr_4c4850(__int64* a1)
{
  __int64 result;

  result = *a1;
  if (result != 0) {
    return SdkRoutine_85c080();
  }
  return result;
}

__int64 SdkHr_4cd2b0() { return 266496; }

__int64 SdkHr_4cd3d0(_QWORD* a1)
{
  *a1 = SdkData_e88398 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd510(_QWORD* a1)
{
  *a1 = SdkData_e883a0 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd580(_QWORD* a1)
{
  *a1 = SdkData_e883a8 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd5e0(_QWORD* a1)
{
  *a1 = SdkData_e883b0 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd640(_QWORD* a1)
{
  *a1 = SdkData_e883b8 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd6a0(_QWORD* a1)
{
  *a1 = SdkData_e883c0 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd700(_QWORD* a1)
{
  *a1 = SdkData_e883c8 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd760(_QWORD* a1)
{
  *a1 = SdkData_e883d0 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd7c0(_QWORD* a1)
{
  *a1 = SdkData_e883d8 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd820(_QWORD* a1)
{
  *a1 = SdkData_e883e0 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd880(_QWORD* a1)
{
  *a1 = SdkData_e883e8 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd8e0(_QWORD* a1)
{
  *a1 = SdkData_e883f0 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd940(_QWORD* a1)
{
  *a1 = SdkData_e883f8 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cd9a0(_QWORD* a1)
{
  *a1 = SdkData_e88400 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cda00(_QWORD* a1)
{
  *a1 = SdkData_e88408 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cda60(_QWORD* a1)
{
  *a1 = SdkData_e88410 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4cdf40() { return 263936; }

__int64 SdkHr_4cdf50() { return 263936; }

__int64 SdkHr_4d9c90(_QWORD* a1)
{
  *a1 = SdkData_e88540 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4d9ff0(_QWORD* a1)
{
  *a1 = SdkData_e88520 + 16;
  return SdkRoutine_859220();
}

__int64 SdkHr_4e66d0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 8LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 SdkHr_4e66e0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 16LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 SdkHr_4e66f0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 24LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 SdkHr_4e6700(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 32LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 SdkHr_4e6710(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 40LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 SdkHr_4e6720(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 48LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 SdkHr_4e6730(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 56LL))(
      **(_QWORD**)(a1 + 8));
}

__int64 SdkHr_4e6810(__int64 a1)
{
  return (**(__int64 (***)(_QWORD))(a1 + 8))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL));
}

__int64 SdkHr_4e6820(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 8LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL));
}

__int64 SdkHr_4e6830(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)(a1 + 8) + 16LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL));
}

__int64 SdkHr_4e6990(__int64 result)
{
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 SdkHr_4e6a40(__int64 result)
{
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

void SdkHr_4e7460(__int64 a1, _QWORD* a2) { *a2 = SdkData_e88708 + 16; }

__int64 SdkHr_4e7540() { return SdkData_e88740; }

void SdkHr_4f5e80(__int64 a1, _QWORD* a2) { *a2 = SdkData_e68388; }

__int64 SdkHr_55d7c0(_QWORD* a1)
{
  *a1 = SdkData_e88c38 + 16;
  return SdkRoutine_871520(a1 + 3);
}

__int64 SdkHr_55d880(_QWORD* a1)
{
  *a1 = SdkData_e88c40 + 16;
  return SdkRoutine_871520(a1 + 3);
}

__int64 SdkHr_563f40(__int64 result, __int64 a2)
{
  *(_DWORD*)(a2 + 20) = *(_DWORD*)(result + 48);
  *(_DWORD*)(a2 + 24) = *(_DWORD*)(result + 52);
  return result;
}

__int64 SdkHr_564000(__int64 result, __int64 a2)
{
  *(_DWORD*)(a2 + 20) = *(_DWORD*)(result + 16);
  *(_DWORD*)(a2 + 24) = *(_DWORD*)(result + 20);
  return result;
}

__int64 SdkHr_5643c0(__int64 result, __int64 a2)
{
  *(_DWORD*)(a2 + 28) = 90 * *(unsigned __int8*)(result + 40);
  return result;
}

__int64 SdkHr_564470(__int64 result, __int64 a2)
{
  *(_DWORD*)(a2 + 28) = 90 * *(unsigned __int8*)(result + 16);
  return result;
}

__int64 SdkHr_596ee4() { return SdkRoutine_860a00(1); }

__int64 SdkHr_597fe0(__int64 result)
{
  if (*(_BYTE*)(result + 48) != 0) {
    return SdkRoutine_85be70(result + 8);
  }
  return result;
}

__int64 SdkHr_5a31a0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                     unsigned __int8 a5)
{
  return SdkRoutine_5a3610(a1 + 8, a2, a3, a4, a5, 107);
}

__int64 SdkHr_5a3a00(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4,
                     char a5)
{
  return SdkRoutine_5a3f20(a1 + 8, a2, a3, a4, a5 & 1, 2010);
}

__int64 SdkHr_5a44c0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4,
                     char a5)
{
  return SdkRoutine_5a3f20(a1 + 8, a2, a3, a4, a5 & 1, 0);
}

unsigned __int64 SdkHr_5d26a0(__int64 a1, unsigned int a2, __int64 a3,
                              unsigned __int8 a4)
{
  return a2 | ((unsigned __int64)a4 << 32);
}

unsigned __int64 SdkHr_5d26c0(__int64 a1, unsigned int a2, __int64 a3,
                              unsigned __int8 a4)
{
  return a2 | ((unsigned __int64)a4 << 32);
}

__int64 SdkHr_5d4240(__int64 a1, int a2) { return (unsigned int)~a2; }

__int64 SdkHr_5d4250(__int64 a1, int a2) { return (unsigned int)~a2; }

__int64 SdkHr_5d4260(__int64 a1, int a2) { return (unsigned int)~a2; }

__int64 SdkHr_5d45b0(__int64 a1) { return *(_QWORD*)a1; }

__int64 SdkHr_5d4c10(__int64 a1)
{
  return *(unsigned int*)(a1 + 8) | 0x100000000LL;
}

void SdkHr_5e7320(__int64 a1)
{
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  atomic_store(0, (unsigned __int8*)(a1 + 24));
}

__int64 SdkHr_5e7a60(__int64 result, _WORD* a2, _WORD* a3)
{
  *a2 = *(_WORD*)(result + 48);
  *a3 = *(_WORD*)(result + 50);
  return result;
}

__int64 SdkHr_5e7af0(__int64 result, __int16 a2)
{
  *(_WORD*)(result + 56) = a2;
  return result;
}

__int64 SdkHr_5f72e0(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8);
  *a2 = v2;
  return 0;
}

__int64 SdkHr_5f8a20(__int64 a1, __int64 a2, __int64 a3)
{
  return SdkData_103b040(a3, a2, 0);
}

__int64 SdkHr_5f8f70(__int64 a1)
{
  __int64 v1;

  v1 = SdkRoutine_856170(a1);
  return SdkRoutine_5f8f80(v1);
}

__int64 SdkHr_5f8f80(__int64 a1)
{
  __int64 v1;

  v1 = SdkRoutine_856170(a1);
  return SdkRoutine_5f8f90(v1);
}

__int64 SdkHr_5f8f90(__int64 a1)
{
  __int64 v1;

  v1 = SdkRoutine_856170(a1);
  return SdkRoutine_5f8fa0(v1);
}

__int64 SdkHr_5f8fa0(__int64 a1) { return SdkRoutine_856170(a1); }

__int64 SdkHr_5f9010(__int64 a1, __int64 a2)
{
  __int64 result;

  if (a2 != 0) {
    return SdkRoutine_85c990();
  }
  return result;
}

__int64 SdkHr_5fb0b0()
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)SdkData_103f140 + 64LL))(
      SdkData_103f140);
}

__int64 SdkHr_6022e0(__int64 result)
{
  *(_DWORD*)(result + 142728) = 0;
  return result;
}

__int64 SdkHr_6074c0(int a1) { return (a1 + 63) & 0xFFFFFFC0; }

unsigned int* SdkHr_6078c0(unsigned int* result)
{
  if (result != nullptr) {
    return (unsigned int*)*result;
  }
  return result;
}

__int64 SdkHr_617770(__int64 a1) { return a1 + 4744; }

__int64 SdkHr_617a50(__int64 result)
{
  if (result != 0) {
    return SdkRoutine_875b30();
  }
  return result;
}

__int64 SdkHr_617a60(_QWORD* a1) { return *a1 + 8LL; }

__int64 SdkHr_617a70(_QWORD* a1) { return *a1 + 64LL; }

__int64 SdkHr_617a80(_QWORD* a1) { return *a1 + 1120LL; }

__int64 SdkHr_617a90(_QWORD* a1) { return *a1 + 1128LL; }

__int64 SdkHr_617aa0(_QWORD* a1) { return *a1 + 1192LL; }

__int64 SdkHr_617ab0(_QWORD* a1) { return *a1 + 1256LL; }

__int64 SdkHr_617ac0(_QWORD* a1) { return *a1 + 1288LL; }

__int64 SdkHr_617ad0(_QWORD* a1) { return *a1 + 1352LL; }

__int64 SdkHr_617ef0(__int64 result, __int64 a2)
{
  if (a2 != 0) {
    return SdkRoutine_6197b0(result + 8);
  }
  return result;
}

__int64 SdkHr_617f00(__int64 result, __int64 a2)
{
  if (a2 != 0) {
    return SdkRoutine_619800(result + 8);
  }
  return result;
}

__int64 SdkHr_61ec10(char a1)
{
  if ((a1 & 1) != 0) {
    return 0;
  }
  else {
    return 2;
  }
}

__int64 SdkHr_623a90(__int64 result, _QWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 8);
  *a2 = SdkData_e727e0;
  a2[1] = v2;
  return result;
}

__int64 SdkHr_623c80(__int64 result, _QWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 8);
  *a2 = SdkData_e72870;
  a2[1] = v2;
  return result;
}

void SdkHr_623da0(__int64 a1, _QWORD* a2) { *a2 = SdkData_e728f0; }

float SdkHr_623db0(__int64 a1, __int64 a2) { return *(float*)a2; }

atomic_ullong* SdkHr_6240f0(atomic_ullong* result, atomic_ullong** a2)
{
  atomic_fetch_add_explicit(result, 1u, memory_order_relaxed);
  *a2 = result;
  return result;
}

__int64 SdkHr_629010(_QWORD* a1)
{
  *a1 = &SdkData_e72d18;
  return SdkRoutine_629ca0();
}

__int64 SdkHr_629320(__int64 a1, _DWORD* a2)
{
  *a2 = 0;
  return 0;
}

__int64 SdkHr_629330(_QWORD* a1)
{
  *a1 = &SdkData_e73090;
  return SdkRoutine_629e00(a1 + 1);
}

__int64 SdkHr_6296b0(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v3;

  v3 = a1 + 88;
  result = *(_QWORD*)(a1 + 88);
  *a2 = *(_QWORD*)(v3 + 8);
  return result;
}

__int64 SdkHr_629c90(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24LL))(
      *(_QWORD*)(a1 + 8));
}

_QWORD* SdkHr_62b2e0(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = result[3];
  v3 = result[4];
  v4 = result[6];
  a2[2] = result[5];
  a2[3] = v4;
  *a2 = v2;
  a2[1] = v3;
  return result;
}

_QWORD* SdkHr_62b3e0(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  v2 = result[3];
  v3 = result[5];
  a2[1] = result[4];
  a2[2] = v3;
  *a2 = v2;
  return result;
}

void SdkHr_62b4d0(__int64 a1, _QWORD* a2)
{
  a2[2] = 0;
  a2[3] = 0;
  *a2 = 0;
  a2[1] = 0;
}

__int64 SdkHr_62b660() { return (unsigned int)SdkData_10406ac; }

bool SdkHr_62b670(int a1) { return a1 == 33 || a1 == 24; }

bool SdkHr_62b7f0(int a1) { return a1 == 35; }

__int64 SdkHr_62b800(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  *a2 = 0;
  *a3 = 0;
  return 0;
}

void SdkHr_62b870(__int64 a1, _QWORD* a2) { *a2 = 0x8000D1F10LL; }

__int64 SdkHr_62b9a0(__int64 a1, __int64 a2) { return 8 * a2; }

__int64 SdkHr_62baa0(__int64 a1, int a2)
{
  if ((a2 & 0xFFFEFFFF) != 0) {
    return 27;
  }
  else {
    return 26;
  }
}

__int64 SdkHr_62c6f0(__int64 a1, __int64 a2, _DWORD* a3)
{
  *a3 = 254;
  return 0;
}

__int64 SdkHr_62ca30(__int64 a1, __int64 a2, _DWORD* a3)
{
  *a3 = 0;
  return 0;
}

__int64 SdkHr_62ca40(__int64 a1, __int64 a2, _DWORD* a3)
{
  *a3 = 202;
  return 0;
}

__int64 SdkHr_62cad0() { return 200704; }

void SdkHr_62cae0(__int64 a1, __int64 a2)
{
  *(_WORD*)a2 = 0;
  *(_BYTE*)(a2 + 2) = 0;
  *(_DWORD*)(a2 + 4) = 0;
}

__int64 SdkHr_62caf0(__int64 a1, __int64 a2)
{
  *(_QWORD*)a2 = 0;
  *(_DWORD*)(a2 + 8) = 1;
  return 0;
}

__int64 SdkHr_62cb20() { return 2166784; }

__int64 SdkHr_62cf30(__int64 a1, __int64 a2, _DWORD* a3)
{
  *a3 = 6;
  return 0;
}

__int64 SdkHr_62cfa0(__int64 a1, __int64 a2, _DWORD* a3)
{
  *a3 = 15;
  return 0;
}

__int64 SdkHr_62ed30(_QWORD* a1)
{
  *a1 = SdkData_e740d8;
  return SdkRoutine_629ca0();
}

__int64 SdkHr_6355c0(__int64 result, _QWORD* a2)
{
  *a2 = *(_QWORD*)(result + 48);
  return result;
}

__int64 SdkHr_6355d0(__int64 a1, unsigned int a2)
{
  if (a2 >= 2) {
    return 11;
  }
  else {
    return 2;
  }
}

__int64 SdkHr_639710(__int64 a1)
{
  int v1;

  v1 = *(unsigned __int8*)(a1 + 24);
  *(_BYTE*)(a1 + 24) = 0;
  return (unsigned int)(2 * v1);
}

__int64 SdkHr_639730(_QWORD* a1)
{
  *a1 = SdkData_e748a0;
  return SdkRoutine_629ca0();
}

__int64 SdkHr_63d8f0(__int64 a1, _DWORD* a2)
{
  *a2 = 0;
  return 2;
}

__int64 SdkHr_63e170(_QWORD* a1)
{
  *a1 = SdkData_e74ce0;
  return SdkRoutine_629ca0();
}

_BYTE* SdkHr_644970(_BYTE* result, _BYTE* a2)
{
  *result = *a2;
  *a2 = 0;
  return result;
}

__int64 SdkHr_644c60() { return SdkData_1040738; }

#pragma GCC visibility pop
