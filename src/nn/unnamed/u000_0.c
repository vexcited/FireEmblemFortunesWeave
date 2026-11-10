#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 SdkData_e86c58;

extern __int64 SdkData_e86d10;

extern __int64 SdkData_e88520;

extern __int64 SdkData_e88540;

extern __int64 SdkData_efeec8;

__int64 SdkRoutine_133fc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_134890(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_134d30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_5a3610(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_5a3f20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_6197b0(_QWORD);

__int64 SdkRoutine_619800(_QWORD);

__int64 SdkRoutine_856170(_QWORD);

__int64 SdkRoutine_859220(void);

__int64 SdkRoutine_85c990(void);

__int64 SdkRoutine_b83c0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_e3e40(_QWORD);

__int64 SdkRoutine_ea6b0(_QWORD, _QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) SdkHr_0() { __udf(1u); }

__int64 SdkHr_ae000(_QWORD* a1)
{
  *a1 = SdkData_e86c58 + 16;
  return SdkRoutine_859220();
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

__int64 SdkHr_e3e30(__int64 a1)
{
  __int64 v1;

  v1 = SdkRoutine_856170(a1);
  return SdkRoutine_e3e40(v1);
}

__int64 SdkHr_eb740(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_ea6b0(a1 + 8, *a2, a2[1], 75);
}

__int64 SdkHr_ecaf0(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_ea6b0(a1 + 8, *a2, a2[1], 35);
}

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

__int64 SdkHr_133dc0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_134d30(a1 + 8, a2, *a3, a3[1], 25);
}

__int64 SdkHr_133de0(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_134890(a1 + 8, *a2, a2[1], 26);
}

void SdkHr_1c965c() { SdkData_efeec8 = 0; }

__int64 SdkHr_1e96e0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_134d30(a1 + 8, a2, *a3, a3[1], 1);
}

__int64 SdkHr_402cf0(__int64 a1, __int64 a2) { return (a2 << 32) | 0xA3D; }

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

__int64 SdkHr_5a31a0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                     unsigned __int8 a5)
{
  return SdkRoutine_5a3610(a1 + 8, a2, a3, a4, a5, 107);
}

__int64 SdkHr_5a44c0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4,
                     char a5)
{
  return SdkRoutine_5a3f20(a1 + 8, a2, a3, a4, a5 & 1, 0);
}

__int64 SdkHr_5f9010(__int64 a1, __int64 a2)
{
  __int64 result;

  if (a2 != 0) {
    return SdkRoutine_85c990();
  }
  return result;
}

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

#pragma GCC visibility pop
