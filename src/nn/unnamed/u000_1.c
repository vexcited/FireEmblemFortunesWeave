#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern int SdkData_1042070;
extern __int64 SdkData_10420b8;
extern __int64 (*SdkData_e76558[])();
__int64 SdkRoutine_6589a0(_QWORD, _QWORD);
__int64 SdkRoutine_66d330(void);
__int64 SdkRoutine_66db20(void);
__int64 SdkRoutine_66dba0(void);
__int64 SdkRoutine_66dd40(void);
__int64 SdkRoutine_858d70(_QWORD);
__int64 SdkRoutine_875df0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkHr_644ce0(__int64 a1, int a2)
{
  return SdkRoutine_875df0(a1, a2 & 0xC000FFFF, 0, 0);
}

bool SdkHr_6457c0(__int64 a1) { return a1 == 0 || a1 == 3221225473LL; }

__int64 SdkHr_645820(__int64 a1, _QWORD* a2)
{
  *a2 = a1;
  return 0;
}

__int64 SdkHr_645b30(__int64 a1, __int64 a2) { return *(_QWORD*)(a2 + 120); }

__int64 SdkHr_645b40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD*)(a2 + 120) = a3;
  *(_QWORD*)(a2 + 128) = a4;
  return 0;
}

__int64 SdkHr_646610(__int64 a1) { return *(_QWORD*)(a1 + 368) >> 3; }

__int64 SdkHr_6468a0(__int64 a1, _QWORD* a2)
{
  *a2 = a1;
  return 0;
}

__int64 SdkHr_646b60(__int64 a1)
{
  return *(_QWORD*)(a1 + 8LL * *(unsigned int*)(a1 + 236) + 216);
}

__int64 SdkHr_647010(__int64 a1, int a2)
{
  *(_DWORD*)(a1 + 292) = a2;
  return 0;
}

__int64 SdkHr_647020(__int64 a1, _DWORD* a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 292);
  *a2 = v2;
  return 0;
}

__int64 SdkHr_647030(__int64 a1)
{
  return *(
      unsigned int*)(*(_QWORD*)(a1 + 8LL * *(unsigned int*)(a1 + 236) + 216) +
                     100LL);
}

_QWORD* SdkHr_6496c0(_QWORD* result)
{
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  return result;
}

_QWORD* SdkHr_6496d0(_QWORD* result, __int64 a2, __int64 a3, __int64 a4)
{
  result[2] = a2;
  result[3] = a3;
  result[4] = a4;
  return result;
}

__int64 SdkHr_6497e0(__int64 a1)
{
  return *(_QWORD*)(a1 + 24) + *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL);
}

__int64 SdkHr_6497f0(__int64 a1, __int64 a2)
{
  return SdkRoutine_6589a0(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 24) + a2);
}

__int64 SdkHr_649800(__int64 a1, __int64 a2)
{
  return SdkRoutine_6589a0(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 24) + a2);
}

__int64 SdkHr_64a190(__int64 result)
{
  *(_DWORD*)(result + 16) = 2;
  return result;
}

__int64 SdkHr_64b3a0(__int64 a1)
{
  return *(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 56);
}

__int64 SdkHr_64b3b0(_QWORD* a1) { return *a1 - a1[7]; }

__int64 SdkHr_64b3c0(_QWORD* a1) { return a1[4] - *a1; }

__int64 SdkHr_64b3d0(__int64 a1)
{
  return *(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 64) + 16LL;
}

__int64 SdkHr_64b3f0(__int64 a1)
{
  return *(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 64);
}

__int64 SdkHr_64b400(__int64 a1)
{
  return *(_QWORD*)(a1 + 48) - *(_QWORD*)(a1 + 40) + 16LL;
}

_DWORD* SdkHr_64eda0(_DWORD* result, int a2, int a3, int a4, int a5)
{
  result[24] = a5;
  result[25] = a2;
  result[10] = a3;
  result[23] = a4;
  return result;
}

__int64 SdkHr_64edb0(__int64 result, __int64 a2, int a3, int a4, __int64 a5)
{
  *(_QWORD*)(result + 48) = a2;
  *(_DWORD*)(result + 56) = a3;
  *(_DWORD*)(result + 60) = a4;
  *(_QWORD*)(result + 64) = a5;
  return result;
}

__int64 SdkHr_64edc0(__int64 result, __int64 a2, int a3, int a4, __int64 a5)
{
  *(_DWORD*)(result + 44) = a3;
  *(_DWORD*)(result + 88) = a4;
  *(_QWORD*)(result + 72) = a2;
  *(_QWORD*)(result + 80) = a5;
  return result;
}

__int64 SdkHr_64edd0(__int64 result, int a2, int a3)
{
  *(_DWORD*)(result + 104) = a2;
  *(_DWORD*)(result + 108) = a3;
  return result;
}

_BYTE* SdkHr_64ede0(_BYTE* result, char a2, char a3, char a4, char a5)
{
  result[112] = a2;
  result[113] = a3;
  result[114] = a4;
  result[115] = a5;
  return result;
}

_QWORD* SdkHr_650070(_QWORD* result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  return result;
}

__int64 SdkHr_6509f0()
{
  return atomic_fetch_add((atomic_uint* volatile)&SdkData_1042070, 1u);
}

__int64 SdkHr_650bb0(__int64 a1, int a2) { return a2; }

__int64 SdkHr_650c10(__int64 a1, int a2) { return (__int64)a2 << 20; }

__int64 SdkHr_650c20(__int64 a1, int a2) { return a2; }

__int64 SdkHr_650c30(__int64 a1, int a2) { return a2; }

__int64 SdkHr_654100(__int64 result, int a2, __int64 a3)
{
  *(_DWORD*)(result + 8) = a2;
  *(_QWORD*)(result + 16) = a3;
  return result;
}

__int64 SdkHr_654110(__int64 a1, _QWORD* a2)
{
  *a2 = *(_QWORD*)(a1 + 16);
  return *(unsigned int*)(a1 + 8);
}

__int64 SdkHr_6559c0(__int64 result)
{
  SdkData_10420b8 = result;
  return result;
}

__int64 SdkHr_656170() { return SdkData_10420b8; }

void SdkHr_6566f0() { SdkData_1042070 = 0; }

long double SdkHr_656850(__int64 a1)
{
  long double result;

  *(_QWORD*)(a1 + 40) = 0;
  *(_OWORD*)(a1 + 24) = 0u;
  *(_OWORD*)(a1 + 8) = 0u;
  *(_OWORD*)&result = 0u;
  return result;
}

_QWORD* SdkHr_656880(_QWORD* result, __int64 a2, __int64 a3, __int64 a4)
{
  result[1] = a2;
  result[2] = a3;
  result[3] = a4;
  return result;
}

long double SdkHr_6570d0(__int64 a1)
{
  long double result;

  *(_QWORD*)(a1 + 40) = 0;
  *(_OWORD*)(a1 + 24) = 0u;
  *(_OWORD*)(a1 + 8) = 0u;
  *(_OWORD*)&result = 0u;
  return result;
}

__int64 SdkHr_657100(__int64 result, __int64 a2, int a3, int a4)
{
  *(_QWORD*)(result + 8) = a2;
  *(_DWORD*)(result + 16) = a3;
  *(_DWORD*)(result + 20) = a4;
  return result;
}

__int64 SdkHr_6571b0(__int64 result)
{
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  return result;
}

__int64 SdkHr_658380(_QWORD* a1)
{
  *a1 = SdkData_e76558;
  return SdkRoutine_858d70(a1 + 1);
}

__int64 SdkHr_659bf0(__int64 result, int a2, int a3)
{
  *(_DWORD*)(result + 44) = a2;
  *(_DWORD*)(result + 48) = a3;
  return result;
}

__int64 SdkHr_659c00(__int64 result, _DWORD* a2, _DWORD* a3)
{
  *a2 = *(_DWORD*)(result + 44);
  *a3 = *(_DWORD*)(result + 48);
  return result;
}

__int64 SdkHr_659c60(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  return result;
}

_QWORD* SdkHr_659d80(_QWORD* result, __int64 a2, __int64 a3)
{
  *result = a2;
  result[1] = a3;
  return result;
}

__int64 SdkHr_659d90(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  return result;
}

__int64 SdkHr_659de0(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 32) = a2;
  *(_QWORD*)(result + 40) = a3;
  return result;
}

__int64 SdkHr_659df0(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 48) = a2;
  *(_QWORD*)(result + 56) = a3;
  return result;
}

__int64 SdkHr_659e00(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 64) = a2;
  *(_QWORD*)(result + 72) = a3;
  return result;
}

__int64 SdkHr_659e10(__int64 result, float a2, float a3)
{
  *(float*)(result + 80) = a2;
  *(float*)(result + 84) = a3;
  return result;
}

float SdkHr_659e20(__int64 a1, _DWORD* a2, float* a3)
{
  float result;

  *a2 = *(_DWORD*)(a1 + 80);
  result = *(float*)(a1 + 84);
  *a3 = result;
  return result;
}

__int64 SdkHr_659e60(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 104) = a2;
  *(_QWORD*)(result + 112) = a3;
  return result;
}

__int64 SdkHr_659e90(__int64 result, float a2, float a3)
{
  *(float*)(result + 88) = a2;
  *(float*)(result + 92) = a3;
  return result;
}

float SdkHr_659ea0(__int64 a1, _DWORD* a2, float* a3)
{
  float result;

  *a2 = *(_DWORD*)(a1 + 88);
  result = *(float*)(a1 + 92);
  *a3 = result;
  return result;
}

__int64 SdkHr_659ee0(__int64 result, int a2, int a3)
{
  *(_DWORD*)(result + 128) = a2;
  *(_DWORD*)(result + 132) = a3;
  return result;
}

__int64 SdkHr_659ef0(__int64 result, _DWORD* a2, _DWORD* a3)
{
  *a2 = *(_DWORD*)(result + 128);
  *a3 = *(_DWORD*)(result + 132);
  return result;
}

__int64 SdkHr_659f10(__int64 result, int a2, int a3)
{
  *(_DWORD*)(result + 136) = a2;
  *(_DWORD*)(result + 140) = a3;
  return result;
}

__int64 SdkHr_659f20(__int64 result, _DWORD* a2, _DWORD* a3)
{
  *a2 = *(_DWORD*)(result + 136);
  *a3 = *(_DWORD*)(result + 140);
  return result;
}

__int64 SdkHr_659f40(__int64 result, int a2, int a3)
{
  *(_DWORD*)(result + 144) = a2;
  *(_DWORD*)(result + 148) = a3;
  return result;
}

__int64 SdkHr_659f50(__int64 result, _DWORD* a2, _DWORD* a3)
{
  *a2 = *(_DWORD*)(result + 144);
  *a3 = *(_DWORD*)(result + 148);
  return result;
}

__int64 SdkHr_659f70(__int64 result, int a2, int a3)
{
  *(_DWORD*)(result + 152) = a2;
  *(_DWORD*)(result + 156) = a3;
  return result;
}

__int64 SdkHr_659f80(__int64 result, _DWORD* a2, _DWORD* a3)
{
  *a2 = *(_DWORD*)(result + 152);
  *a3 = *(_DWORD*)(result + 156);
  return result;
}

__int64 SdkHr_659fa0(__int64 result, int a2, int a3)
{
  *(_DWORD*)(result + 160) = a2;
  *(_DWORD*)(result + 164) = a3;
  return result;
}

__int64 SdkHr_659fb0(__int64 result, _DWORD* a2, _DWORD* a3)
{
  *a2 = *(_DWORD*)(result + 160);
  *a3 = *(_DWORD*)(result + 164);
  return result;
}

__int64 SdkHr_659fd0(__int64 result, int a2, int a3)
{
  *(_DWORD*)(result + 168) = a2;
  *(_DWORD*)(result + 172) = a3;
  return result;
}

__int64 SdkHr_659fe0(__int64 result, _DWORD* a2, _DWORD* a3)
{
  *a2 = *(_DWORD*)(result + 168);
  *a3 = *(_DWORD*)(result + 172);
  return result;
}

__int64 SdkHr_65a180(__int64 a1, __int64 (***a2)(_QWORD)) { return (**a2)(a2); }

__int64 SdkHr_65a3b0(__int64 a1, __int64 a2)
{
  return *(unsigned int*)(a2 + 184);
}

__int64 SdkHr_65a400(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 80LL))(a2);
}

_QWORD* SdkHr_65b990(_QWORD* result)
{
  *result = 0;
  result[1] = 0;
  return result;
}

_QWORD* SdkHr_65b9a0(_QWORD* result, __int64 a2, __int64 a3)
{
  *result = a2;
  result[1] = a3;
  return result;
}

__int64 SdkHr_65b9b0(_QWORD* a1, _QWORD* a2)
{
  *a2 = a1[1];
  return *a1;
}

__int64 SdkHr_65c280(__int64 a1, unsigned int a2) { return a2; }

bool SdkHr_65c670(int a1, int a2) { return a1 == a2; }

__int64 SdkHr_65cf70(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  *(_DWORD*)(result + 32) = 0;
  return result;
}

__int64 SdkHr_65cf80(__int64 result, int a2)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_DWORD*)(result + 32) = a2;
  return result;
}

__int64 SdkHr_65cfe0(__int64 result, _QWORD* a2, _QWORD* a3)
{
  *a2 = *(_QWORD*)(result + 40);
  *a3 = *(_QWORD*)(result + 48);
  return result;
}

__int64 SdkHr_65d500(__int64 a1) { return *(_DWORD*)(a1 + 16) & 0x1FFFFF; }

__int64 SdkHr_65d5c0(__int64 a1, __int64 a2, __int16 a3)
{
  if ((a3 & 0x200) != 0) {
    return SdkRoutine_66dba0();
  }
  else {
    return SdkRoutine_66d330();
  }
}

__int64 SdkHr_65d5d0(_DWORD* a1)
{
  if (*a1 == 1) {
    return SdkRoutine_66dd40();
  }
  else {
    return SdkRoutine_66db20();
  }
}

__int64 SdkHr_660dc0(__int64 result, int a2, __int64 a3)
{
  *(_DWORD*)(result + 28) = a2;
  *(_QWORD*)(result + 32) = a3;
  return result;
}

__int64 SdkHr_660e00(__int64 result, int a2, __int64 a3)
{
  *(_DWORD*)(result + 40) = a2;
  *(_QWORD*)(result + 48) = a3;
  return result;
}

__int64 SdkHr_660e30(__int64 result, int a2, __int64 a3)
{
  *(_DWORD*)(result + 56) = a2;
  *(_QWORD*)(result + 64) = a3;
  return result;
}

__int64 SdkHr_660e60(__int64 result, int a2, __int64 a3)
{
  *(_DWORD*)(result + 72) = a2;
  *(_QWORD*)(result + 80) = a3;
  return result;
}

__int64 SdkHr_662db0(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 12LL);
}

__int64 SdkHr_662dc0(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 14LL);
}

__int64 SdkHr_662ea0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 84LL);
}

__int64 SdkHr_662eb0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 85LL);
}

__int64 SdkHr_662ec0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 86LL);
}

__int64 SdkHr_662f30(__int64 a1) { return *(_QWORD*)(a1 + 8) + 88LL; }

__int64 SdkHr_662f60(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 88LL);
}

__int64 SdkHr_662f70(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 89LL);
}

__int64 SdkHr_662f80(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 90LL);
}

__int64 SdkHr_662f90(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 91LL);
}

__int64 SdkHr_662fa0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 92LL);
}

__int64 SdkHr_662fb0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 93LL);
}

__int64 SdkHr_662fc0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 94LL);
}

__int64 SdkHr_662fd0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 95LL);
}

__int64 SdkHr_662fe0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 96LL);
}

__int64 SdkHr_662ff0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 97LL);
}

__int64 SdkHr_663000(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 98LL);
}

__int64 SdkHr_663010(__int64 a1) { return *(_QWORD*)(a1 + 8) + 100LL; }

__int64 SdkHr_663020(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 88LL);
}

__int64 SdkHr_663030(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 90LL);
}

__int64 SdkHr_663040(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 92LL);
}

__int64 SdkHr_663050(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 96LL);
}

__int64 SdkHr_663060(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 98LL);
}

__int64 SdkHr_663070(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 104LL);
}

__int64 SdkHr_663080(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 108LL);
}

__int64 SdkHr_663090(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 109LL);
}

__int64 SdkHr_6630a0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 110LL);
}

__int64 SdkHr_6630b0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 111LL);
}

__int64 SdkHr_6630c0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 112LL);
}

__int64 SdkHr_6630d0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 113LL);
}

__int64 SdkHr_6630e0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 114LL);
}

__int64 SdkHr_6630f0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 115LL);
}

__int64 SdkHr_663100(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 116LL);
}

__int64 SdkHr_663110(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 117LL);
}

__int64 SdkHr_663120(__int64 a1) { return *(_QWORD*)(a1 + 8) + 92LL; }

__int64 SdkHr_663130(__int64 a1, unsigned int a2)
{
  return *(unsigned int*)(*(_QWORD*)(a1 + 8) + 4LL * a2 + 124);
}

__int64 SdkHr_663150(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 144LL);
}

__int64 SdkHr_663160(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 145LL);
}

__int64 SdkHr_663170(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 146LL);
}

__int64 SdkHr_663180(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 147LL);
}

__int64 SdkHr_663190(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 148LL);
}

bool SdkHr_6631c0(__int64 a1)
{
  return *(_BYTE*)(*(_QWORD*)(a1 + 8) + 160LL) != 0;
}

__int64 SdkHr_663230(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 162LL);
}

__int64 SdkHr_663240(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 163LL);
}

__int64 SdkHr_663250(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 164LL);
}

__int64 SdkHr_663260(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 165LL);
}

__int64 SdkHr_663270(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 166LL);
}

__int64 SdkHr_663280(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 167LL);
}

__int64 SdkHr_663290(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 168LL);
}

__int64 SdkHr_6632a0(__int64 a1, unsigned int a2)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + a2 + 169LL);
}

__int64 SdkHr_6632b0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 177LL);
}

__int64 SdkHr_6632c0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 178LL);
}

__int64 SdkHr_6632d0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 179LL);
}

__int64 SdkHr_6632e0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 180LL);
}

__int64 SdkHr_6632f0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 181LL);
}

__int64 SdkHr_663300(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 182LL);
}

__int64 SdkHr_663310(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 183LL);
}

__int64 SdkHr_663320(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 186LL);
}

__int64 SdkHr_663380(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 118LL);
}

__int64 SdkHr_6633a0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 208LL);
}

__int64 SdkHr_6633b0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 209LL);
}

__int64 SdkHr_6633c0(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 106LL);
}

__int64 SdkHr_663400(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 210LL);
}

__int64 SdkHr_663410(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 211LL);
}

__int64 SdkHr_663430(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 185LL);
}

__int64 SdkHr_663440(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 107LL);
}

__int64 SdkHr_663450(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 120LL);
}

__int64 SdkHr_6634b0(__int64 result, int a2)
{
  *(_DWORD*)(result + 44) = a2;
  *(_BYTE*)(result + 36) = 1;
  return result;
}

__int64 SdkHr_6634c0(__int64 result, int a2)
{
  *(_DWORD*)(result + 48) = a2;
  *(_BYTE*)(result + 37) = 1;
  return result;
}

__int64 SdkHr_6634d0(__int64 result, int a2)
{
  *(_DWORD*)(result + 52) = a2;
  *(_BYTE*)(result + 38) = 1;
  return result;
}

__int64 SdkHr_6634e0(__int64 result, int a2)
{
  *(_DWORD*)(result + 56) = a2;
  *(_BYTE*)(result + 39) = 1;
  return result;
}

__int64 SdkHr_6634f0(__int64 result, int a2)
{
  *(_DWORD*)(result + 64) = a2;
  *(_BYTE*)(result + 40) = 1;
  return result;
}

__int64 SdkHr_663500(__int64 result, __int64 a2, int a3)
{
  *(_DWORD*)(result + 60) = a3;
  *(_QWORD*)(result + 16) = a2;
  return result;
}

__int64 SdkHr_6637d0(__int64 a1, _DWORD* a2)
{
  *a2 = *(_DWORD*)(a1 + 44);
  return *(unsigned __int8*)(a1 + 36);
}

__int64 SdkHr_6637e0(__int64 a1, _DWORD* a2)
{
  *a2 = *(_DWORD*)(a1 + 48);
  return *(unsigned __int8*)(a1 + 37);
}

__int64 SdkHr_6637f0(__int64 a1, _DWORD* a2)
{
  *a2 = *(_DWORD*)(a1 + 52);
  return *(unsigned __int8*)(a1 + 38);
}

__int64 SdkHr_663800(__int64 a1, _DWORD* a2)
{
  *a2 = *(_DWORD*)(a1 + 56);
  return *(unsigned __int8*)(a1 + 39);
}

__int64 SdkHr_663810(__int64 a1, _DWORD* a2)
{
  *a2 = *(_DWORD*)(a1 + 64);
  return *(unsigned __int8*)(a1 + 40);
}

__int64 SdkHr_666a40(__int64 result, int a2)
{
  *(_QWORD*)(result + 40) = *(_QWORD*)(*(_QWORD*)(result + 80) + 8LL * a2);
  return result;
}

__int64 SdkHr_666a50(__int64 result, int a2)
{
  *(_QWORD*)(*(_QWORD*)(result + 80) + 8LL * a2) = *(_QWORD*)(result + 48);
  return result;
}

__int64 SdkHr_666c60(__int64 result, char a2, int a3)
{
  *(_BYTE*)(result + 46) =
      (((a2 & 0xF) << 16) | (unsigned int)(a3 << 20)) >> 16;
  return result;
}

__int64 SdkHr_666ca0(__int64 result, float a2, float a3)
{
  *(float*)(result + 8) = a2;
  *(float*)(result + 12) = a3;
  return result;
}

__int64 SdkHr_666d80(__int64 result, char a2)
{
  *(_DWORD*)(result + 44) =
      *(_DWORD*)(result + 44) & 0xFFFF0FFF | ((a2 & 0xF) << 12);
  return result;
}

float SdkHr_666e00(__int64 a1, _DWORD* a2, float* a3)
{
  float result;

  *a2 = *(_DWORD*)(a1 + 8);
  result = *(float*)(a1 + 12);
  *a3 = result;
  return result;
}

__int64 SdkHr_666ef0(__int64 a1)
{
  return (unsigned int)((__int16)*(_DWORD*)(a1 + 44) >> 12);
}

float SdkHr_666fa0(__int64 a1, _DWORD* a2, float* a3)
{
  float result;

  *a2 = *(_DWORD*)(a1 + 16);
  result = *(float*)(a1 + 20);
  *a3 = result;
  return result;
}

__int64 SdkHr_667090(__int64 a1)
{
  return (unsigned int)((__int16)*(_DWORD*)(a1 + 52) >> 12);
}

_QWORD* SdkHr_667510(_QWORD* result)
{
  *result = 0x1020102110C0000LL;
  return result;
}

unsigned int* SdkHr_667530(unsigned int* result, int a2)
{
  *result = *result & 0xFFFFFFF8 | a2;
  return result;
}

unsigned int* SdkHr_6675c0(unsigned int* result, int a2)
{
  *result = *result & 0xFFFFC0FF | (a2 << 8);
  return result;
}

unsigned int* SdkHr_6675e0(unsigned int* result, int a2)
{
  *result = *result & 0xFFFCFFFF | (a2 << 16);
  return result;
}

__int64 SdkHr_667640(_DWORD* a1) { return *a1 & 7; }

__int64 SdkHr_6676b0(_DWORD* a1) { return (*a1 >> 8) & 0x3F; }

__int64 SdkHr_6676c0(__int64 a1) { return *(_WORD*)(a1 + 2) & 3; }

bool SdkHr_6676d0(_DWORD* a1) { return (*a1 & 0x40000) != 0; }

bool SdkHr_6676e0(_DWORD* a1) { return (*a1 & 0x80000) != 0; }

_DWORD* SdkHr_6676f0(_DWORD* result)
{
  *result = -1;
  return result;
}

_DWORD* SdkHr_667790(_DWORD* result)
{
  *result = 134414336;
  return result;
}

unsigned int* SdkHr_6677e0(unsigned int* result, int a2)
{
  *result = *result & 0xFF00FFFF | (a2 << 16);
  return result;
}

unsigned int* SdkHr_667800(unsigned int* result, int a2)
{
  *result = *result & 0xF0FFFFFF | (a2 << 24);
  return result;
}

__int64 SdkHr_667820(__int64 a1, char a2)
{
  return (*(unsigned __int8*)(a1 + 1) >> a2) & 1;
}

__int64 SdkHr_667840(__int64 a1) { return *(_BYTE*)(a1 + 3) & 0xF; }

_DWORD* SdkHr_667850(_DWORD* result)
{
  *result = 0;
  return result;
}

unsigned int* SdkHr_667880(unsigned int* result, int a2)
{
  *result = *result & 0xFFFFFFE0 | a2;
  return result;
}

__int64 SdkHr_6678c0(_DWORD* a1) { return *a1 & 0x1F; }

_QWORD* SdkHr_667920(_QWORD* result)
{
  *result = 0x1118111800000022LL;
  return result;
}

unsigned int* SdkHr_667980(unsigned int* result, int a2)
{
  *result = *result & 0xFFFFFF0F | (16 * a2);
  return result;
}

__int64 SdkHr_667a50(_BYTE* a1) { return *a1 & 1; }

bool SdkHr_667a60(_BYTE* a1) { return (*a1 & 2) != 0; }

__int64 SdkHr_667a70(_DWORD* a1) { return (unsigned __int8)*a1 >> 4; }

bool SdkHr_667a80(_BYTE* a1) { return (*a1 & 4) != 0; }

_DWORD* SdkHr_667b00(_DWORD* result)
{
  *result = 20;
  return result;
}

unsigned int* SdkHr_667b10(unsigned int* result, int a2)
{
  *result = *result & 0xFFFFFFFC | a2;
  return result;
}

unsigned int* SdkHr_667b30(unsigned int* result, int a2)
{
  *result = *result & 0xFFFFFFFB | (4 * a2);
  return result;
}

unsigned int* SdkHr_667b50(unsigned int* result, int a2)
{
  *result = *result & 0xFFFFFFE7 | (8 * a2);
  return result;
}

unsigned int* SdkHr_667b70(unsigned int* result, int a2)
{
  *result = *result & 0xFFF87FFF | (a2 << 15);
  return result;
}

__int64 SdkHr_667b90(_DWORD* a1) { return *a1 & 3; }

bool SdkHr_667ba0(_DWORD* a1) { return (*a1 & 4) != 0; }

__int64 SdkHr_667bb0(_DWORD* a1) { return (*a1 >> 3) & 3; }

__int64 SdkHr_667bc0(_DWORD* a1) { return (*a1 >> 15) & 0xF; }

unsigned int* SdkHr_667c50(unsigned int* result, int a2)
{
  *result = *result & 0xFFFFE0FF | (a2 << 8);
  return result;
}

__int64 SdkHr_667c70(_BYTE* a1) { return *a1 & 1; }

__int64 SdkHr_667c80(_DWORD* a1) { return (*a1 >> 8) & 0x1F; }

bool SdkHr_667c90(_BYTE* a1) { return (*a1 & 2) != 0; }

bool SdkHr_667ca0(_BYTE* a1) { return (*a1 & 4) != 0; }

unsigned int* SdkHr_667cb0(unsigned int* result, int a2)
{
  *result = *result & 0xFFF07FFF | (a2 << 15);
  return result;
}

__int64 SdkHr_667cd0(_DWORD* a1) { return (*a1 >> 15) & 0x1F; }

unsigned int* SdkHr_667ce0(unsigned int* result, int a2)
{
  *result = *result & 0xFFFF9FFF | (a2 << 13);
  return result;
}

__int64 SdkHr_667d00(_DWORD* a1) { return (*a1 >> 13) & 3; }

bool SdkHr_667d30(_BYTE* a1) { return (*a1 & 0x20) != 0; }

bool SdkHr_667d60(_DWORD* a1) { return (*a1 & 0x100000) != 0; }

unsigned int* SdkHr_667d70(unsigned int* result, int a2)
{
  *result = *result & 0xFF1FFFFF | (a2 << 21);
  return result;
}

__int64 SdkHr_667d90(_DWORD* a1) { return (*a1 >> 21) & 7; }

bool SdkHr_667dc0(_BYTE* a1) { return (*a1 & 8) != 0; }

bool SdkHr_667e60(_BYTE* a1) { return (*a1 & 0x10) != 0; }

#pragma GCC visibility pop
