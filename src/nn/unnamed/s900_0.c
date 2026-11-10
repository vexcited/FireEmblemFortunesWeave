#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern char SdkData_10406d1;
extern char SdkData_10406d2;
extern char SdkData_10406d3;
extern __int64 (*SdkData_1042258)(__int64, _QWORD);
extern __int128 SdkData_bb3620;
extern _UNKNOWN SdkData_bcbe90;
extern _BYTE SdkData_c7798b[62];
extern _DWORD SdkData_c77cb8[5];
extern _DWORD SdkData_c77cf4[5];
extern __int64 (*SdkData_e50098[])();
extern __int64 (*SdkData_e50118)();
extern __int64 (*SdkData_e5df00[])();
extern __int64 (*SdkData_e5dfe0)();
extern __int64 (*SdkData_e739b8[])();
extern __int64 (*SdkData_e7f638[])();
extern __int64 SdkData_e86d80;
extern __int64 SdkData_e87068;
extern __int64 SdkData_e89320;
extern __int64 SdkData_e893e8;
extern __int64 SdkData_e894d0;
extern __int64 SdkData_e894d8;
extern __int64 SdkData_e894e0;
extern __int64 SdkData_e894e8;
extern __int64 (*SdkData_e89908[2])();
extern __int64* SdkData_e899d8[2];
extern _BYTE* SdkData_e89a10;
extern _BYTE* SdkData_e89a28;
extern _UNKNOWN* SdkData_e89ba0;
extern _UNKNOWN* SdkData_e89bd8;
extern __int64 SdkData_e89c78;
extern _UNKNOWN SdkData_eadc5c;
extern _UNKNOWN SdkData_eadc60;
extern __int64 SdkData_eadc68;
extern char SdkData_eaf441;
extern char SdkData_eaf442;
extern char SdkData_eaf443;
extern _UNKNOWN SdkData_eaf4a0;
extern _UNKNOWN SdkData_eaf520;
extern _UNKNOWN SdkData_eaf5a0;
extern __int64 SdkData_efd2b8;
extern __int64 SdkData_efd2d8;
extern __int64 SdkData_efd2f8;
extern __int64 SdkData_efd318;
extern __int64 SdkData_efd338;
extern __int64 SdkData_efd358;
extern __int64 SdkData_efd378;
extern __int64 SdkData_f17e90;
extern _UNKNOWN SdkData_f17e98;
extern __int64 SdkData_f53ed0;
extern _UNKNOWN SdkData_f53ed8;
extern _UNKNOWN SdkData_f66708;
extern _UNKNOWN SdkData_f66740;
extern __int64 SdkData_f72e80;
__int64 SdkRoutine_1ba250(_QWORD);
__int64 SdkRoutine_1c6b88(_QWORD);
__int64 SdkRoutine_1deeb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1df160(_QWORD, _QWORD);
__int64 SdkRoutine_2b1ac0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_2b2fa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_2c7a24(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _DWORD);
__int64 SdkRoutine_2d0();
__int64 SdkRoutine_2e2790(_QWORD);
__int64 SdkRoutine_2e28a0(_QWORD);
__int64 SdkRoutine_326780(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_433470(_QWORD);
__int64 SdkRoutine_492c10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD);
__int64 SdkRoutine_4bd950(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_4c19c0(_QWORD, _QWORD);
__int64 SdkRoutine_4c1bd0(_QWORD, _QWORD);
__int64 SdkRoutine_57efe0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_5932b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_5f47a0(_QWORD);
__int64 SdkRoutine_5fb210(_QWORD);
__int64 SdkRoutine_5fbb10(_QWORD);
__int64 SdkRoutine_5fbb80(_QWORD, _QWORD);
__int64 SdkRoutine_625f80(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6261a0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_627be0(_QWORD, _QWORD);
__int64 SdkRoutine_627cd0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6280e0(_QWORD, _QWORD);
__int64 SdkRoutine_628160(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_628dc0(_QWORD, _QWORD);
__int64 SdkRoutine_628f50(void);
__int64 SdkRoutine_628fd0(_QWORD, _QWORD);
__int64 SdkRoutine_62f120(_QWORD);
__int64 SdkRoutine_62fe00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_630140(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6302e0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_630440(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_630700(_QWORD, _QWORD);
__int64 SdkRoutine_644da0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_64ac60(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_64b750(_QWORD);
__int64 SdkRoutine_64b9e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_64d7a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD, _DWORD, _DWORD);
__int64 SdkRoutine_64f5d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD);
__int64 SdkRoutine_660f20(void);
__int64 SdkRoutine_6638a0(void);
__int64 SdkRoutine_66a6d0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_683d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_68660(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6892f0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6a0860(_QWORD);
__int64 SdkRoutine_6f58e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_6faad0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_7cd5d0(_QWORD, _QWORD);
void __attribute__((noreturn)) SdkRoutine_7d5830(_QWORD);
__int64 SdkRoutine_817f20(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8183c0(_QWORD, _QWORD);
__int64 SdkRoutine_818500(_QWORD, _QWORD);
__int64 SdkRoutine_818640(_QWORD, _QWORD);
__int64 SdkRoutine_818780(_QWORD, _QWORD);
__int64 SdkRoutine_8188c0(_QWORD, _QWORD);
__int64 SdkRoutine_818a00(_QWORD, _QWORD);
__int64 SdkRoutine_818b40(_QWORD, _QWORD);
__int64 SdkRoutine_818c80(_QWORD, _QWORD);
__int64 SdkRoutine_818dc0(_QWORD, _QWORD);
__int64 SdkRoutine_818f00(_QWORD, _QWORD);
__int64 SdkRoutine_819040(_QWORD, _QWORD);
__int64 SdkRoutine_819180(_QWORD, _QWORD);
__int64 SdkRoutine_8192c0(_QWORD, _QWORD);
__int64 SdkRoutine_819400(_QWORD, _QWORD);
__int64 SdkRoutine_819540(_QWORD, _QWORD);
__int64 SdkRoutine_819680(_QWORD, _QWORD);
__int64 SdkRoutine_8197c0(_QWORD, _QWORD);
__int64 SdkRoutine_819900(_QWORD, _QWORD);
__int64 SdkRoutine_819a40(_QWORD, _QWORD);
__int64 SdkRoutine_819b80(_QWORD, _QWORD);
__int64 SdkRoutine_819cc0(_QWORD, _QWORD);
__int64 SdkRoutine_819e00(_QWORD, _QWORD);
__int64 SdkRoutine_819f40(_QWORD, _QWORD);
__int64 SdkRoutine_81a080(_QWORD, _QWORD);
__int64 SdkRoutine_81a1c0(_QWORD, _QWORD);
__int64 SdkRoutine_81a300(_QWORD, _QWORD);
__int64 SdkRoutine_81a440(_QWORD, _QWORD);
__int64 SdkRoutine_81a580(_QWORD, _QWORD);
__int64 SdkRoutine_81a6c0(_QWORD, _QWORD);
__int64 SdkRoutine_81a800(_QWORD, _QWORD);
__int64 SdkRoutine_82da50(_QWORD);
void __attribute__((noreturn)) SdkRoutine_84c1f0(_QWORD);
__int64 SdkRoutine_853d90(long double, long double);
__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_856170(_QWORD);
__int64 SdkRoutine_8571c0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_8572f0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8574b0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8574f0(_QWORD, _QWORD);
__int64 SdkRoutine_857810(void);
__int64 SdkRoutine_8584b0(_QWORD);
__int64 SdkRoutine_8584c0(_QWORD);
__int64 SdkRoutine_858a50(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_858b30(_QWORD, _QWORD, _QWORD, long double);
__int64 SdkRoutine_858b60(_QWORD);
__int64 SdkRoutine_858b80(_QWORD);
__int64 SdkRoutine_858d00(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_858d40(_QWORD);
__int64 SdkRoutine_858d50(_QWORD);
__int64 SdkRoutine_858db0(_QWORD);
__int64 SdkRoutine_8592b0(_QWORD);
__int64 SdkRoutine_859510(_QWORD);
__int64 SdkRoutine_859610(_QWORD);
__int64 SdkRoutine_859620(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_859a00(_QWORD, _QWORD);
__int64 SdkRoutine_859a60(_QWORD);
__int64 SdkRoutine_859a70(_QWORD, _QWORD);
__int64 SdkRoutine_859a80(void);
__int64 SdkRoutine_859a90(_QWORD, _QWORD);
__int64 SdkRoutine_859ab0(_QWORD);
__int64 SdkRoutine_859af0(_QWORD, _QWORD);
__int64 SdkRoutine_85a1a0(_QWORD);
__int64 SdkRoutine_85a3e0(void);
__int64 SdkRoutine_85a3f0(_QWORD);
__int64 SdkRoutine_85a420(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, const char*,
                          ...);
__int64 SdkRoutine_85a890(_QWORD, _QWORD);
__int64 SdkRoutine_85b140(_QWORD);
__int64 SdkRoutine_85c330(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85c340(_QWORD);
__int64 SdkRoutine_85d390(void);
__int64 SdkRoutine_860ee0(float, float);
__int64 SdkRoutine_864550(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8647e0(_QWORD, _QWORD);
__int64 SdkRoutine_864800(_QWORD, _QWORD);
__int64 SdkRoutine_869560(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_869570(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86a300(_QWORD);
__int64 SdkRoutine_86a590(void);
__int64 SdkRoutine_86a5a0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_86a5b0(_QWORD, _QWORD);
__int64 SdkRoutine_86a5e0(_QWORD, _QWORD);
__int64 SdkRoutine_86a5f0(_QWORD, _QWORD);
__int64 SdkRoutine_86a610(_QWORD, _QWORD);
__int64 SdkRoutine_86a640(void);
__int64 SdkRoutine_86a7c0(_QWORD);
__int64 SdkRoutine_86d7a0(_QWORD, _QWORD);
__int64 SdkRoutine_86d7c0(_QWORD);
__int64 SdkRoutine_86d7f0(_QWORD, _QWORD);
__int64 SdkRoutine_86dc70(_QWORD);
__int64 SdkRoutine_86dc80(_QWORD, _QWORD);
__int64 SdkRoutine_86e110(_QWORD, _QWORD);
__int64 SdkRoutine_86e120(_QWORD);
__int64 SdkRoutine_86ee60(_QWORD);
__int64 SdkRoutine_86ee70(_QWORD, _QWORD);
__int64 SdkRoutine_86ee80(_QWORD);
__int64 SdkRoutine_872c00(void);
__int64 SdkRoutine_872c10(void);
__int64 SdkRoutine_875b00(_QWORD);
__int64 SdkRoutine_875b30(_QWORD);
__int64 SdkRoutine_875bc0(_QWORD, _QWORD);
__int64 SdkRoutine_875c00(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_875df0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_875e00(_QWORD);
__int64 SdkRoutine_876780(_QWORD);
__int64 SdkRoutine_8767f0(_QWORD, _QWORD);
__int64 SdkRoutine_876870(void);
__int64 SdkRoutine_876e10(_QWORD);
__int64 SdkRoutine_876eb0(void);
__int64 SdkRoutine_876ec0(_QWORD);
__int64 SdkRoutine_87c790(_QWORD);
__int64 SdkRoutine_87c8f0(_QWORD);
__int64 SdkRoutine_87c910(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87c920(_QWORD);
__int64 SdkRoutine_87cc20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87ce40(_QWORD, _QWORD);
__int64 SdkRoutine_87cfe0(_QWORD);
__int64 SdkRoutine_bd9c0(_QWORD);
__int64 SdkRoutine_dc120(_QWORD, _QWORD);
void __attribute__((noreturn)) SdkRoutine_dc4d0(void);
void __attribute__((noreturn)) SdkRoutine_dc820(void);
__int64 SdkRoutine_e3830(__int64 result);
__int64 SdkRoutine_e3b70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_e3d60(_QWORD);
__int64 SdkRoutine_e4870(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 SdkRoutine_e4ad0(_QWORD);
__int64 SdkRoutine_e5df0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _DWORD);
__int64 SdkRoutine_f0520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD, _DWORD);
__int64 SdkRoutine_f3b00(__int64, int);
__int64 SdkRoutine_f3dd0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);

__int64 SdkHr_682200(__int64 result, int a2)
{
  unsigned int* v3;
  unsigned int** v4;

  v3 = *(unsigned int**)result;
  v4 = (unsigned int**)result;
  if ((unsigned __int64)(*(_QWORD*)result + 4LL) > *(_QWORD*)(result + 8)) {
    result = SdkRoutine_64b750(result);
    v3 = *v4;
  }
  *v3 = (a2 << 16) | 0x80000373;
  *v4 = v3 + 1;
  return result;
}

__int64 SdkHr_5e7890(__int64 result, unsigned __int16 a2, int a3)
{
  __int64 v3;
  unsigned __int64 v4;

  if ((*(_BYTE*)(result + 40) & 8) != 0) {
    v3 = *(_QWORD*)(result + 16);
    v4 = a2 | ((unsigned __int64)*(unsigned int*)(v3 + 92) << 32) |
         (unsigned int)(a3 << 16);
    *(_QWORD*)(v3 + 80) |= 1uLL;
    *(_QWORD*)(v3 + 88) = v4;
  }
  return result;
}

_DWORD* SdkHr_173ec0(_DWORD* result)
{
  if (*result != 0) {
    SdkRoutine_858db0(result);
    __udf(0);
  }
  return result;
}

__int64 SdkHr_6b9790(__int64 a1, unsigned __int64 a2)
{
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  _QWORD* v8;

  v8 = nullptr;
  result = SdkRoutine_876e10(&v8);
  if ((_DWORD)result == 0) {
    v5 = v8;
    v6 = SdkRoutine_876eb0();
    result = (*(__int64 (**)(_QWORD*, __int64))(*v5 + 40LL))(v5, v6);
    if ((_DWORD)result == 0) {
      atomic_store(a2, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v8 != nullptr) {
    v7 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v8 + 8LL))(
        (void*)v8, v8);
    return v7;
  }
  return result;
}

__int64 SdkHr_4bd660(__int64* a1, _QWORD** a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  _QWORD* v19;
  _QWORD* v20;
  unsigned int v21;

  v2 = *a1;
  SdkRoutine_858b60(*a1 + 8);
  v5 = *(_DWORD*)(v2 + 12);
  if (v5 != 0) {
    *(_DWORD*)(v2 + 12) = v5 + 1;
    SdkRoutine_858b80(v2 + 8);
    if (a1[2] != 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v14 = SdkRoutine_85c330(v2 + 176, 1024, 64, 4, 16, v2 + 16);
  v15 = SdkData_e87068;
  *(_QWORD*)v2 = v2 + 16;
  *(_QWORD*)(v2 + 160) = v15 + 16;
  *(_QWORD*)(v2 + 168) = v14;
  *(_DWORD*)(v2 + 12) = 1;
  SdkRoutine_858b80(v2 + 8);
  if (a1[2] == 0) {
  LABEL_3:
    a1[2] = *(_QWORD*)v2 + 144LL;
  }
LABEL_4:
  v6 = SdkData_e86d80;
  *(_DWORD*)(v2 + 1224) = 0;
  *(_QWORD*)(v2 + 1200) = v6 + 16;
  *(_QWORD*)(v2 + 1216) = v2 + 1272;
  v7 = SdkRoutine_85b140(v2 + 1228);
  v8 = *(_QWORD*)(v2 + 1216);
  *(_QWORD*)(v2 + 1232) = 0;
  *(_QWORD*)(v2 + 1248) = v2 + 1200;
  *(_QWORD*)(v2 + 1240) = v8;
  *(_QWORD*)(v8 + 8) = v8 + 16;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 24LL) = *(_QWORD*)(v2 + 1216) + 32LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 40LL) = *(_QWORD*)(v2 + 1216) + 48LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 56LL) = *(_QWORD*)(v2 + 1216) + 64LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 72LL) = *(_QWORD*)(v2 + 1216) + 80LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 88LL) = *(_QWORD*)(v2 + 1216) + 96LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 104LL) = *(_QWORD*)(v2 + 1216) + 112LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 120LL) = *(_QWORD*)(v2 + 1216) + 128LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 136LL) = *(_QWORD*)(v2 + 1216) + 144LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 152LL) = *(_QWORD*)(v2 + 1216) + 160LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 168LL) = *(_QWORD*)(v2 + 1216) + 176LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 184LL) = *(_QWORD*)(v2 + 1216) + 192LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 200LL) = *(_QWORD*)(v2 + 1216) + 208LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 216LL) = *(_QWORD*)(v2 + 1216) + 224LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 232LL) = *(_QWORD*)(v2 + 1216) + 240LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 248LL) = 0;
  *(_DWORD*)(v2 + 1264) = 0;
  *(_DWORD*)(v2 + 1272) = 0;
  *(_DWORD*)(v2 + 1288) = 0;
  *(_DWORD*)(v2 + 1304) = 0;
  *(_DWORD*)(v2 + 1320) = 0;
  *(_DWORD*)(v2 + 1336) = 0;
  *(_DWORD*)(v2 + 1352) = 0;
  *(_DWORD*)(v2 + 1368) = 0;
  *(_DWORD*)(v2 + 1384) = 0;
  *(_DWORD*)(v2 + 1400) = 0;
  *(_DWORD*)(v2 + 1416) = 0;
  *(_DWORD*)(v2 + 1432) = 0;
  *(_DWORD*)(v2 + 1448) = 0;
  *(_DWORD*)(v2 + 1464) = 0;
  *(_DWORD*)(v2 + 1480) = 0;
  *(_DWORD*)(v2 + 1496) = 0;
  *(_DWORD*)(v2 + 1512) = 0;
  v20 = nullptr;
  *(_QWORD*)(v2 + 1256) = 16;
  v11 = a1 + 1;
  v9 = a1[1];
  v10 = v11[1];
  SdkRoutine_859a60(v7);
  v21 = 0;
  v12 = SdkRoutine_859a70(&v21, v9);
  if (v12 == 0) {
    v13 = SdkRoutine_4bd950(v2 + 1200, &v20, v10, v21);
    SdkRoutine_859a80();
    v16 = v20;
    if (v13 != 0) {
      if (v20 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v19 = *a2;
      v20 = nullptr;
      *a2 = v16;
      if (v19 == nullptr) {
        return 0;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v19 + 8LL))(
          (void*)v19, v19);
      v16 = v20;
      if (v20 == nullptr) {
      LABEL_11:
        if (v13 == 0) {
          return v13;
        }
        goto LABEL_12;
      }
    }
    (*(void (**)(_QWORD*))(*v16 + 8LL))(v16);
    goto LABEL_11;
  }
  v13 = v12;
  SdkRoutine_859a80();
LABEL_12:
  *(_QWORD*)(v2 + 1200) = v6 + 16;
  SdkRoutine_858b60(v2 + 1264);
  SdkRoutine_f3b00(v2 + 1200, 0);
  SdkRoutine_858b80(v2 + 1264);
  SdkRoutine_858b60(v2 + 8);
  v17 = *(_DWORD*)(v2 + 12) - 1;
  *(_DWORD*)(v2 + 12) = v17;
  if (v17 == 0) {
    SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)v2 + 152LL));
    *(_QWORD*)v2 = 0;
  }
  SdkRoutine_858b80(v2 + 8);
  return v13;
}

__int64* SdkHr_685980(__int64* result, __int64 a2, __int64 a3, int a4, char a5)
{
  int v5;
  __int64 v6;

  if ((a5 & 1) != 0) {
    v5 = -1610404218;
  }
  else {
    v5 = -1610404222;
  }
  *(_DWORD*)*result = v5;
  *(_DWORD*)(*result + 4) = a4;
  *(_DWORD*)(*result + 8) = HIDWORD(a3);
  *(_DWORD*)(*result + 12) = a3;
  v6 = *result;
  *result += 16;
  *(_DWORD*)(v6 + 16) = ((a4 << 14) + 49152) & 0x9FFF1F92 | 0x6000206D;
  *result += 4;
  return result;
}

__int64 SdkHr_64a680(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v10;
  int v11;
  __int64 v12;

  v4 = *(_QWORD*)(a1 + 200);
  v10 = a4;
  v5 = *(_DWORD*)(v4 + 328);
  v6 = *(_QWORD*)(v4 + 11240);
  v12 = v6;
  if (v5 == 52928) {
    v7 = 2;
  }
  else {
    v7 = 0;
  }
  if (v5 == 51648) {
    v8 = 1;
  }
  else {
    v8 = v7;
  }
  v11 = v8;
  if (*(_BYTE*)(v4 + 11136) == 1) {
    if ((unsigned __int64)(v6 + 12) > *(_QWORD*)(v4 + 11248)) {
      SdkRoutine_64b750(v4 + 11240);
      v12 = *(_QWORD*)(v4 + 11240);
    }
    SdkRoutine_6892f0(v4 + 11128, &v12, &v10);
    *(_QWORD*)(v4 + 11240) = v12;
  }
  else {
    SdkRoutine_6892f0(v4 + 11128, &v12, &v10);
  }
  return 0;
}

__int64 SdkHr_6808d0(__int64 result, int a2, int a3, int a4)
{
  _DWORD* v5;
  _DWORD** v8;

  v5 = *(_DWORD**)result;
  v8 = (_DWORD**)result;
  if ((unsigned __int64)(*(_QWORD*)result + 16LL) > *(_QWORD*)(result + 8)) {
    result = SdkRoutine_64b750(result);
    v5 = *v8;
  }
  v5[2] = a3;
  v5[3] = a4;
  *v5 = -1610412344;
  v5[1] = a2;
  *v8 = v5 + 4;
  return result;
}

__int64 SdkHr_685290(__int64 a1, char a2)
{
  __int64 result;
  _BYTE* v4;

  result = SdkRoutine_64ac60(a1, &v4, 16);
  *v4 = 35;
  v4[8] = v4[8] & 0xFE | a2 & 1;
  return result;
}

__int64 SdkHr_64ef60(__int64 result, __int64 a2, __int64* a3, int* a4,
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
        SdkRoutine_64d7a0(v83, v91, v86, v68, v67, v79, v84, v16, v48, v65,
                          v60);
      }
      else {
        SdkRoutine_64f5d0(v83, v91, v73, v86, v78, (v75 >> 12) + 16 * v77,
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

__int64 SdkHr_2b2ec0(__int64 result)
{
  _QWORD* v1;

  if (*(_BYTE*)(result + 16) == 1 && (**(_BYTE**)result & 1) == 0) {
    v1 = *(_QWORD**)(result + 8);
    SdkRoutine_864550(v1[2], 0, v1[5] + v1[3]);
    SdkRoutine_864550(v1[6], 0, v1[11] + v1[7] + v1[9]);
    SdkRoutine_864800(v1[2], v1[5] + v1[3]);
    result = SdkRoutine_864800(v1[6], v1[11] + v1[7] + v1[9]);
    v1[13] = 0;
    v1[14] = 0;
    v1[11] = 0;
    v1[12] = 0;
    v1[9] = 0;
    v1[10] = 0;
    v1[7] = 0;
    v1[8] = 0;
    v1[5] = 0;
    v1[6] = 0;
    v1[3] = 0;
    v1[4] = 0;
    v1[1] = 0;
    v1[2] = 0;
    *v1 = 0;
  }
  return result;
}

bool SdkHr_66e600(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v4;
  __int64 v8;
  int v9;
  _BOOL4 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v15;
  _QWORD v16[2];

  if ((a4 & 0x200) != 0) {
    return false;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v15 = 0;
  SdkRoutine_8767f0(*(_QWORD*)(v4 + 2528), &v15);
  v8 = SdkRoutine_876780(v15);
  v16[0] = a2;
  v16[1] = a3;
  v9 = SdkRoutine_875df0(v8, 3222291480LL, v16, 16);
  v10 = v9 == 0;
  if (v9 == 0) {
    if (*(_QWORD*)(a1 + 120) != 0) {
      v11 = SdkRoutine_6a0860(48);
      if (v11 == 0) {
        goto LABEL_9;
      }
      v12 = (_QWORD*)(v11 + 32);
      *(_QWORD*)v11 = a2;
      *(_QWORD*)(v11 + 8) = a3;
      *(_BYTE*)(v11 + 16) = 0;
      *(_QWORD*)(v11 + 24) = 0;
    }
    else {
      *(_QWORD*)(a1 + 176) = a2;
      *(_QWORD*)(a1 + 184) = a3;
      v11 = a1 + 176;
      *(_BYTE*)(a1 + 192) = 0;
      *(_QWORD*)(a1 + 200) = 0;
      v12 = (_QWORD*)(a1 + 208);
    }
    *v12 = 0;
    v12[1] = 0;
    v13 = *(_QWORD*)(a1 + 168);
    *(_QWORD*)(v11 + 32) = a1 + 128;
    *(_QWORD*)(v11 + 40) = v13;
    *(_QWORD*)(a1 + 168) = v11;
    *(_QWORD*)(*(_QWORD*)(v11 + 40) + 32LL) = v11;
    ++*(_QWORD*)(a1 + 120);
  }
LABEL_9:
  if (v15 != 0) {
    SdkRoutine_876870();
  }
  return v10;
}

__int64 SdkHr_818060(_QWORD* a1, _QWORD* a2, __int64 a3, char a4)
{
  _QWORD* v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned __int64 v13;
  __int64 v14;

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
  result = SdkRoutine_817f20(a1 + 36, a2 + 36, a3 + 288);
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
    SdkRoutine_8183c0(a1, a3);
    result = SdkRoutine_818500(a1, a3);
  }
  if ((a4 & 1) != 0) {
    SdkRoutine_818640(a1, a3);
    SdkRoutine_818780(a1, a3);
    SdkRoutine_8188c0(a1, a3);
    SdkRoutine_818a00(a1, a3);
    SdkRoutine_818b40(a1, a3);
    SdkRoutine_818c80(a1, a3);
    SdkRoutine_818dc0(a1, a3);
    result = SdkRoutine_818f00(a1, a3);
  }
  if ((a4 & 0x10) != 0) {
    SdkRoutine_819040(a1, a3);
    SdkRoutine_819180(a1, a3);
    SdkRoutine_8192c0(a1, a3);
    SdkRoutine_819400(a1, a3);
    SdkRoutine_819540(a1, a3);
    SdkRoutine_819680(a1, a3);
    SdkRoutine_8197c0(a1, a3);
    result = SdkRoutine_819900(a1, a3);
  }
  if ((a4 & 2) != 0) {
    SdkRoutine_819a40(a1, a3);
    SdkRoutine_819b80(a1, a3);
    SdkRoutine_819cc0(a1, a3);
    SdkRoutine_819e00(a1, a3);
    SdkRoutine_819f40(a1, a3);
    result = SdkRoutine_81a080(a1, a3);
  }
  if ((a4 & 4) != 0) {
    SdkRoutine_81a1c0(a1, a3);
    SdkRoutine_81a300(a1, a3);
    SdkRoutine_81a440(a1, a3);
    result = SdkRoutine_81a580(a1, a3);
  }
  if ((a4 & 0x20) != 0) {
    SdkRoutine_81a6c0(a1, a3);
    return SdkRoutine_81a800(a1, a3);
  }
  return result;
}

__int64 SdkHr_b71a0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  int v4;
  _QWORD* v5;
  _QWORD* i;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;

  SdkRoutine_858b60(&SdkData_eadc60);
  while (1) {
    v2 = *(_QWORD**)(a1 + 320);
    if (v2 == nullptr) {
      break;
    }
    *(_QWORD*)(a1 + 320) = *v2;
    v3 = v2[3];
    v4 = *(_DWORD*)(v3 + 24);
    **(_QWORD**)(v3 + 40) = *(_QWORD*)(v3 + 56);
    if (v4 == 1031) {
      *(_QWORD*)(*(_QWORD*)(v3 + 40) + 8LL) = *(_QWORD*)(v3 + 64);
    }
    v5 = *(_QWORD**)(v3 + 48);
    if (v5 != nullptr) {
      *v5 = 0;
      *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8LL) = 0;
    }
    *(_BYTE*)(v3 + 28) = 0;
    *(_QWORD*)(v3 + 72) = 0;
    *(_QWORD*)(v3 + 80) = 0;
    SdkRoutine_859a00(v2, 32);
  }
  for (i = *(_QWORD**)(a1 + 312); i != nullptr; i = *(_QWORD**)(a1 + 312)) {
    *(_QWORD*)(a1 + 312) = *i;
    v9 = (_QWORD*)i[10];
    if (v9 != nullptr) {
      v10 = (_QWORD*)v9[1];
      if (*v9 != 0) {
        *(_QWORD*)(*v9 + 8LL) = v10;
      }
      if (v10 != nullptr) {
        *v10 = *v9;
      }
      else {
        v7 = i[9];
        SdkRoutine_858b60(&SdkData_eadc5c);
        v8 = *(_QWORD*)(SdkData_eadc68 + 8 * v7);
        SdkRoutine_858b80(&SdkData_eadc5c);
        *(_QWORD*)(v8 + 320) = *v9;
      }
      SdkRoutine_859a00(v9, 32);
    }
    SdkRoutine_859a00(i, 88);
  }
  return SdkRoutine_858b80(&SdkData_eadc60);
}

void __attribute__((noreturn)) SdkHr_7cd5b4(__int64 a1)
{
  __int64 v1;

  SdkRoutine_7cd5d0(v1, 0);
  SdkRoutine_87c790(a1);
  __udf(0);
}

__int64 SdkHr_841800(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 16);
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v2);
  if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v2);
  }
  v4 = a2[2];
  v5 = a2[3];
  if (v4 + 1 <= v5) {
    result = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v4 + 993;
    v8 = 2 * v5;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    result = SdkRoutine_859610(v6);
    a2[1] = result;
    if (result == 0) {
      SdkRoutine_857810();
      __udf(0);
    }
    v4 = a2[2];
  }
  *(_BYTE*)(result + v4) = 32;
  ++a2[2];
  return result;
}

__int64 SdkHr_2c6d84(__int64 a1, __int64 a2, _QWORD* a3, unsigned __int8 a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  return SdkRoutine_2c7a24(a1 + 8, a2, *a3, 48LL * a3[1], a4, a5, a6, a7, a8,
                           141);
}

_QWORD* SdkHr_f0930(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD** v3;

  if (result[1] != 0) {
    v1 = &SdkData_eaf4a0;
    if ((SdkData_eaf441 & 1) == 0) {
      v1 = &SdkData_eaf520;
      if ((SdkData_eaf442 & 1) == 0) {
        if ((SdkData_eaf443 & 1) != 0) {
          v1 = &SdkData_eaf5a0;
        }
        else {
          v2 = result;
          v1 = (_QWORD*)SdkRoutine_85a1a0(48);
          result = v2;
          if (v1 == nullptr) {
            v2[1] = 0;
            return result;
          }
        }
      }
    }
    v1[2] = 0;
    v1[3] = 0;
    *((_DWORD*)v1 + 10) = 1;
    *v1 = SdkData_e50098;
    v1[1] = 0;
    v1[4] = &SdkData_e50118;
    v3 = (_QWORD**)result[1];
    result = *v3;
    *v3 = v1;
    if (result != nullptr) {
      return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
    }
  }
  return result;
}

__int64 SdkHr_843b80(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 result;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 10 <= v3) {
    v10 = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 1002;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v6);
    a2[1] = v10;
    if (v10 == 0) {
      goto LABEL_18;
    }
    v2 = a2[2];
  }
  v11 = v10 + v2;
  *(_QWORD*)v11 = *(_QWORD*)" requires ";
  *(_WORD*)(v11 + 8) = 8307;
  v12 = *(_QWORD*)(a1 + 16);
  a2[2] += 10LL;
  (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v12);
  if ((*(_WORD*)(v12 + 9) & 0xC0) != 0x40) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v12);
  }
  v13 = a2[2];
  v14 = a2[3];
  v15 = v13 + 1;
  if (v13 + 1 <= v14) {
    result = a2[1];
    goto LABEL_17;
  }
  v16 = a2[1];
  v17 = v13 + 993;
  if (2 * v14 <= v17) {
    v18 = v17;
  }
  else {
    v18 = 2 * v14;
  }
  a2[3] = v18;
  result = SdkRoutine_859610(v16);
  a2[1] = result;
  if (result == 0) {
  LABEL_18:
    SdkRoutine_857810();
    __udf(0);
  }
  v13 = a2[2];
  v15 = v13 + 1;
LABEL_17:
  a2[2] = v15;
  *(_BYTE*)(result + v13) = 59;
  return result;
}

__int64 SdkHr_de3c0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  bool v15;
  signed __int64 v16;
  unsigned __int8* v17;
  signed __int64 v18;
  unsigned int v19;
  unsigned __int64 v20;
  signed __int64 v21;
  __int64 v22;
  __int64 v23;
  signed __int64 v24;
  bool v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  char* v32;
  char v33;
  int v34;
  int v35;
  bool v36;
  char v37;
  char* v38;
  char* v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
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
  int v54;
  _BYTE* v55;
  __int64 v57;
  unsigned __int8* v58;
  __int64 v59;
  unsigned __int64 v60;
  char* v61;
  __int64 v62;

  v4 = result;
  v57 = result;
  v58 = (unsigned __int8*)(result + 9);
  while (1) {
    v5 = *(_QWORD**)a3;
    v6 = *(_QWORD**)(*(_QWORD*)a3 + 8LL);
    if (v6 != nullptr) {
      do {
        v7 = v6;
        v6 = (_QWORD*)*v6;
      } while (v6 != nullptr);
    }
    else {
      do {
        v7 = (_QWORD*)v5[2];
        v10 = v5 == (_QWORD*)*v7;
        v5 = v7;
      } while (!v10);
    }
    *(_QWORD*)a3 = v7;
    v8 = *(_QWORD**)(v4 + 56);
    if (v7 == v8) {
      return result;
    }
    v9 = *((unsigned __int8*)v7 + 32);
    v10 = (v9 & 1) == 0;
    v11 = v9 >> 1;
    if (v10) {
      v12 = v11;
    }
    else {
      v12 = v7[5];
    }
    v13 = *(unsigned __int8*)(v4 + 8);
    if (v10) {
      v14 = (__int64)v7 + 33;
    }
    else {
      v14 = v7[6];
    }
    v15 = (v13 & 1) == 0;
    v16 = v13 >> 1;
    if (v15) {
      v17 = v58;
    }
    else {
      v17 = *(unsigned __int8**)(v4 + 24);
    }
    if (v15) {
      v18 = v16;
    }
    else {
      v18 = *(_QWORD*)(v4 + 16);
    }
    if (v18 != 0) {
      if ((__int64)v12 >= v18) {
        v19 = *v17;
        v20 = v14 + v12;
        v21 = v12;
        result = v14;
        do {
          result = SdkRoutine_8571c0(result, v19, v21 - v18 + 1);
          if (result == 0) {
            break;
          }
          v22 = result;
          result = SdkRoutine_8572f0(result, v17, v18);
          if ((_DWORD)result == 0) {
            if (v22 == v20 || v22 != v14) {
              break;
            }
            goto LABEL_29;
          }
          result = v22 + 1;
          v21 = v20 - (v22 + 1);
        } while (v21 >= v18);
      }
      *(_QWORD*)a3 = v8;
      return result;
    }
  LABEL_29:
    v4 = v57;
    if (*(_BYTE*)(v14 + v18) == 47) {
      v23 = v7[7];
      v24 = v18 + 1;
      v59 = 0;
      v60 = 0;
      v25 = v12 >= v18 + 1;
      v26 = v12 - (v18 + 1);
      v61 = nullptr;
      v62 = v23;
      if (!v25) {
        SdkRoutine_dc820();
      }
      if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
        SdkRoutine_dc4d0();
      }
      if (v26 >= 0x17) {
        if ((v26 | 7) == 0x17) {
          v28 = 26;
        }
        else {
          v28 = (v26 | 7) + 1;
        }
        v29 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v23 +
                                                          16LL))(v23, v28, 16);
        if (v29 == 0) {
          SdkRoutine_856170(0);
          __udf(0);
        }
        v27 = (char*)v29;
        v60 = v26;
        v61 = (char*)v29;
        v59 = v28 | 1;
      LABEL_41:
        SdkRoutine_858a50(v27, v14 + v24, v26);
        goto LABEL_42;
      }
      v27 = (char*)&v59 + 1;
      LOBYTE(v59) = 2 * v26;
      if (v12 != v24) {
        goto LABEL_41;
      }
    LABEL_42:
      v27[v26] = 0;
      v30 = v59 & 1;
      if (v30 != 0) {
        v31 = v60;
      }
      else {
        v31 = (unsigned __int64)(unsigned __int8)v59 >> 1;
      }
      if ((v59 & 1) != 0) {
        v32 = v61;
      }
      else {
        v32 = (char*)&v59 + 1;
      }
      result = SdkRoutine_8571c0(v32, 47, v31);
      if (result == 0 || result - (_QWORD)v32 == -1) {
        v34 = *(_DWORD*)(v57 + 64);
        v35 = *((_DWORD*)v7 + 20);
        if ((v34 & 1) == 0 || v35 != 0) {
          v36 = (v34 & 2) != 0 && v35 == 1;
          v37 = !v36;
          v33 = v37 ^ 1;
          if (!v36 || a2 == 0) {
            goto LABEL_119;
          }
        }
        else if (a2 == 0) {
        LABEL_118:
          v33 = 1;
          goto LABEL_119;
        }
        *(_QWORD*)(a2 + 776) = v7[9];
        *(_BYTE*)(a2 + 772) = *((_DWORD*)v7 + 20);
        result = SdkRoutine_85a890(v32, 768);
        v38 = &v32[result];
        do {
          v39 = v38;
          if (v38 <= v32) {
            break;
          }
          --v38;
        } while (*(v39 - 1) != 47);
        v40 = 0;
        while (1) {
          v41 = &v39[v40];
          if (v39[v40] == 0) {
          LABEL_93:
            v55 = (_BYTE*)(a2 + v40);
            goto LABEL_117;
          }
          v42 = a2 + v40;
          *(_BYTE*)(a2 + v40) = v39[v40];
          if (v41[1] == 0) {
            v55 = (_BYTE*)(v42 + 1);
            goto LABEL_117;
          }
          *(_BYTE*)(v42 + 1) = v41[1];
          if (v41[2] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 2);
            goto LABEL_117;
          }
          *(_BYTE*)(v42 + 2) = v41[2];
          v43 = a2 + v40;
          if (v41[3] == 0) {
            v55 = (_BYTE*)(v43 + 3);
            goto LABEL_117;
          }
          *(_BYTE*)(v43 + 3) = v41[3];
          if (v41[4] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 4);
            goto LABEL_117;
          }
          *(_BYTE*)(v43 + 4) = v41[4];
          v44 = a2 + v40;
          if (v41[5] == 0) {
            v55 = (_BYTE*)(v44 + 5);
            goto LABEL_117;
          }
          *(_BYTE*)(v44 + 5) = v41[5];
          if (v41[6] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 6);
            goto LABEL_117;
          }
          *(_BYTE*)(v44 + 6) = v41[6];
          v45 = a2 + v40;
          if (v41[7] == 0) {
            v55 = (_BYTE*)(v45 + 7);
            goto LABEL_117;
          }
          *(_BYTE*)(v45 + 7) = v41[7];
          if (v41[8] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 8);
            goto LABEL_117;
          }
          *(_BYTE*)(v45 + 8) = v41[8];
          v46 = a2 + v40;
          if (v41[9] == 0) {
            v55 = (_BYTE*)(v46 + 9);
            goto LABEL_117;
          }
          *(_BYTE*)(v46 + 9) = v41[9];
          if (v41[10] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 10);
            goto LABEL_117;
          }
          *(_BYTE*)(v46 + 10) = v41[10];
          v47 = a2 + v40;
          if (v41[11] == 0) {
            v55 = (_BYTE*)(v47 + 11);
            goto LABEL_117;
          }
          *(_BYTE*)(v47 + 11) = v41[11];
          if (v41[12] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 12);
            goto LABEL_117;
          }
          *(_BYTE*)(v47 + 12) = v41[12];
          v48 = a2 + v40;
          if (v41[13] == 0) {
            v55 = (_BYTE*)(v48 + 13);
            goto LABEL_117;
          }
          *(_BYTE*)(v48 + 13) = v41[13];
          if (v41[14] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 14);
            goto LABEL_117;
          }
          *(_BYTE*)(v48 + 14) = v41[14];
          v49 = a2 + v40;
          if (v41[15] == 0) {
            v55 = (_BYTE*)(v49 + 15);
            goto LABEL_117;
          }
          *(_BYTE*)(v49 + 15) = v41[15];
          if (v41[16] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 16);
            goto LABEL_117;
          }
          *(_BYTE*)(v49 + 16) = v41[16];
          v50 = a2 + v40;
          if (v41[17] == 0) {
            v55 = (_BYTE*)(v50 + 17);
            goto LABEL_117;
          }
          *(_BYTE*)(v50 + 17) = v41[17];
          if (v41[18] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 18);
            goto LABEL_117;
          }
          *(_BYTE*)(v50 + 18) = v41[18];
          v51 = a2 + v40;
          if (v41[19] == 0) {
            v55 = (_BYTE*)(v51 + 19);
            goto LABEL_117;
          }
          *(_BYTE*)(v51 + 19) = v41[19];
          if (v41[20] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 20);
            goto LABEL_117;
          }
          *(_BYTE*)(v51 + 20) = v41[20];
          v52 = a2 + v40;
          if (v41[21] == 0) {
            v55 = (_BYTE*)(v52 + 21);
            goto LABEL_117;
          }
          *(_BYTE*)(v52 + 21) = v41[21];
          if (v41[22] == 0) {
            v55 = (_BYTE*)(a2 + v40 + 22);
            goto LABEL_117;
          }
          *(_BYTE*)(v52 + 22) = v41[22];
          v53 = a2 + v40;
          v54 = (unsigned __int8)v41[23];
          if (v54 == 0) {
            break;
          }
          v40 += 24;
          *(_BYTE*)(v53 + 23) = v54;
          if ((_DWORD)v40 == 768) {
            goto LABEL_93;
          }
        }
        v55 = (_BYTE*)(v53 + 23);
      LABEL_117:
        *v55 = 0;
        v30 = v59 & 1;
        goto LABEL_118;
      }
      v33 = 0;
    LABEL_119:
      if (v30 != 0) {
        result = (*(__int64 (**)(__int64, char*, unsigned __int64, __int64))(
            *(_QWORD*)v62 + 24LL))(v62, v61, v59 & 0xFFFFFFFFFFFFFFFELL, 16);
      }
      if ((v33 & 1) != 0) {
        return result;
      }
    }
  }
}

__int64 SdkHr_7f6c50(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  v1 = (_QWORD*)((char*)a1 + *(_QWORD*)(*a1 - 24LL));
  v2 = SdkData_e894e0 + 64;
  *v1 = SdkData_e894e0 + 24;
  v1[22] = v2;
  SdkRoutine_87cfe0(v1 + 1);
  SdkRoutine_86ee70(v1, SdkData_e894e8 + 8);
  return SdkRoutine_86ee80(v1 + 22);
}

__int64 SdkHr_5fcb40(_DWORD* a1)
{
  if (*a1 != 0) {
    SdkRoutine_86a640();
    *a1 = 0;
  }
  if (a1[1] != 0) {
    SdkRoutine_86a640();
    a1[1] = 0;
  }
  return SdkRoutine_5fb210(a1);
}

__int64 SdkHr_849f30(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;

  v2 = a2[2];
  if (v2 == 0) {
  LABEL_29:
    SdkRoutine_84c1f0("libc++abi: ");
  }
  v4 = a2[1];
  if (*(_BYTE*)(v4 + v2 - 1) != 93) {
    v6 = a2[3];
    if (v2 + 1 > v6) {
      v7 = v2 + 993;
      v8 = 2 * v6;
      if (v8 <= v7) {
        v9 = v7;
      }
      else {
        v9 = v8;
      }
      a2[3] = v9;
      v4 = SdkRoutine_859610(v4);
      a2[1] = v4;
      if (v4 == 0) {
        goto LABEL_28;
      }
      v2 = a2[2];
    }
    *(_BYTE*)(v4 + v2) = 32;
    v2 = a2[2] + 1LL;
    a2[2] = v2;
  }
  v10 = a2[3];
  if (v2 + 1 <= v10) {
    v15 = a2[1];
    goto LABEL_17;
  }
  v11 = a2[1];
  v12 = v2 + 993;
  v13 = 2 * v10;
  if (v13 <= v12) {
    v14 = v12;
  }
  else {
    v14 = v13;
  }
  a2[3] = v14;
  v15 = SdkRoutine_859610(v11);
  a2[1] = v15;
  if (v15 == 0) {
  LABEL_28:
    SdkRoutine_857810();
    goto LABEL_29;
  }
  v2 = a2[2];
LABEL_17:
  *(_BYTE*)(v15 + v2) = 91;
  v16 = *(_QWORD*)(a1 + 24);
  ++a2[2];
  if (v16 != 0) {
    (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v16);
    if ((*(_WORD*)(v16 + 9) & 0xC0) != 0x40) {
      (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v16);
    }
  }
  v17 = a2[2];
  v18 = a2[3];
  if (v17 + 1 <= v18) {
    v23 = a2[1];
    goto LABEL_27;
  }
  v19 = a2[1];
  v20 = v17 + 993;
  v21 = 2 * v18;
  if (v21 <= v20) {
    v22 = v20;
  }
  else {
    v22 = v21;
  }
  a2[3] = v22;
  v23 = SdkRoutine_859610(v19);
  a2[1] = v23;
  if (v23 == 0) {
    goto LABEL_28;
  }
  v17 = a2[2];
LABEL_27:
  *(_BYTE*)(v23 + v17) = 93;
  v24 = *(_QWORD*)(a1 + 16);
  ++a2[2];
  return (*(__int64 (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v24);
}

__int64 SdkHr_62cf40(__int64 a1, __int64 a2, int* a3)
{
  int v3;

  if (*(_BYTE*)(a2 + 6) == 1) {
    if (*(_BYTE*)(*(_QWORD*)(a1 + 24) + 7LL) != 0) {
      v3 = 9;
    }
    else {
      v3 = 8;
    }
    *a3 = v3;
    return 0;
  }
  else {
    *a3 = 9;
    return 0;
  }
}

__int64 SdkHr_605f60(int a1, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  char v6;

  if (a3 != 0) {
    v3 = 32;
  }
  else {
    v3 = 64;
  }
  if (a3 != 0) {
    v4 = 192;
  }
  else {
    v4 = 128;
  }
  if (a3 != 0) {
    v5 = 16;
  }
  else {
    v5 = 48;
  }
  if (a3 != 0) {
    v6 = 1;
  }
  else {
    v6 = 2;
  }
  return a1 & 0xF | (((a1 & 0x20) != 0) << 8) | (a1 << v6) & v3 |
         v5 & (16 * a2) | v4 & (unsigned int)(32 * a2);
}

__int64 SdkHr_6391b0(__int64* a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v7;
  int v8;
  _QWORD v10[2];
  _QWORD v11[2];
  __int64 v12;
  __int64 v13;
  int v14;

  v4 = *a1;
  v11[0] = 0;
  v11[1] = 0;
  v10[0] = 0;
  v10[1] = 0;
  v5 = 2;
  v14 = a2;
  v12 = 0;
  v13 = 0x100000000LL;
  if (*(_DWORD*)(*(_QWORD*)(v4 + 928) + 52LL) >= 4u &&
      (SdkData_10406d1 & 1) == 0) {
    v7 = SdkRoutine_644da0(*(unsigned int*)(v4 + 920), 3224651524LL, v10, 52);
    if (v7 != 0) {
      v5 = v7;
    }
    else {
      v5 = 0;
    }
  }
  SdkRoutine_856130(a4, v11, 16);
  SdkRoutine_856130(a4 + 16, v10, 16);
  v8 = HIDWORD(v12);
  *(_DWORD*)(a4 + 32) = v13;
  *(_DWORD*)(a4 + 36) = v8;
  return v5;
}

__int64 SdkHr_1b93e0(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  SdkRoutine_1ba250(&v7);
  if (v8 == nullptr) {
    v4 = 5642;
    v5 = v9;
    if (v9 == 0) {
      return v4;
    }
    goto LABEL_3;
  }
  v7 = *a2;
  v4 = SdkRoutine_e3b70(a1 + 8, &v7, 181, &v9);
  v5 = v9;
  if (v9 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v4;
}

__int64 SdkHr_e3ef0(__int64 a1, __int64* a2, __int64 a3, unsigned int a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_e4ad0(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a2;
  v8 = SdkRoutine_e4870(a1 + 8, &v11, a3, 769, a4, 8, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 SdkHr_439030(__int64 result, __int16* a2, __int16* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;

  v3 = *(__int16*)(result + 80);
  if (*(_WORD*)(result + 80) != 0) {
    LODWORD(v3) = *(unsigned __int16*)(*(_QWORD*)(result + 64) + 2 * v3 - 2) -
                  **(unsigned __int16**)(result + 56) + 1;
  }
  v4 = 4LL * (int)v3;
  v5 = v4 + 16;
  v6 = v4 + 20;
  v7 = v4 + 4;
  v8 = *a2 - a3[8];
  v9 = a3[19];
  *(_DWORD*)(*(_QWORD*)(result + 40) + v4) = 0;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v5) = 0;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v6) = 0;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v7) = 0;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v4) = v8;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v5) = v8;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v6) = *a2;
  v10 = v4 + 12;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v7) = v8 + a3[9];
  v11 = *(_QWORD*)(result + 32);
  v12 = v4 + 24;
  v13 = *(_DWORD*)(v11 + v4 + 4) + *(_DWORD*)(v11 + v4);
  v14 = v4 + 8;
  v4 += 28;
  v13 /= 2;
  *(_DWORD*)(v11 + v14) = v13;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v10) = v13;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v12) = v13;
  *(_DWORD*)(*(_QWORD*)(result + 32) + v4) = v13;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v14) = v9;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v10) = a3[19] + v9;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v12) = v9;
  *(_DWORD*)(*(_QWORD*)(result + 40) + v4) = a2[3];
  return result;
}

__int64 SdkHr_5144b0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = (unsigned int)SdkRoutine_859510(*(unsigned int*)(a3 + 4));
  if (v3 > v5) {
    v6 = 0;
  LABEL_3:
    result = SdkRoutine_859510(v6);
    *(_DWORD*)(a3 + 4) = result;
    return result;
  }
  if (v3 < 0) {
    v6 = 0xFFFFFFFFLL;
    if (v3 + 0xFFFFFFFFLL < v5) {
      goto LABEL_3;
    }
  }
  result = SdkRoutine_859510((unsigned int)(v5 - v3));
  *(_DWORD*)(a3 + 4) = result;
  return result;
}

__int64 SdkHr_62ac20(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (*a3 != 0) {
    return 8;
  }
  v7 = SdkRoutine_875b00(168);
  if (v7 != 0) {
    v8 = v7;
    SdkRoutine_628fd0(v7, a1);
    *(_QWORD*)(v8 + 96) = 0;
    *(_QWORD*)(v8 + 104) = 0;
    *(_WORD*)(v8 + 112) = 0;
    *(_QWORD*)(v8 + 136) = 0;
    *(_QWORD*)(v8 + 144) = 0;
    *(_WORD*)(v8 + 152) = 0;
    *(_DWORD*)(v8 + 40) = 0;
    *(_QWORD*)(v8 + 64) = 0;
    *(_QWORD*)(v8 + 120) = 0;
    *(_QWORD*)(v8 + 128) = 0;
    *(_BYTE*)(v8 + 154) = 0;
    *(_DWORD*)(v8 + 156) = 0;
    *(_QWORD*)v8 = SdkData_e739b8;
    v9 = *(_QWORD*)(a2 + 8);
    v10 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v8 + 160) = 0;
    *a3 = v8;
    *(_QWORD*)(v8 + 48) = v9;
    *(_QWORD*)(v8 + 56) = v10;
    *(_BYTE*)(v8 + 72) = *(_BYTE*)(a2 + 25);
    *(_QWORD*)(v8 + 80) = *(_QWORD*)(a2 + 32);
    *(_QWORD*)(v8 + 88) = 0;
    return 0;
  }
  else {
    v11 = *a3;
    if (*a3 != 0) {
      (**(void (***)(__int64))v11)(*a3);
      v12 = *a3;
      *(_BYTE*)(v11 + 17) = 1;
      if (v12 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
        SdkRoutine_875b30(*a3);
        *a3 = 0;
      }
    }
    return 6;
  }
}

__int64 SdkHr_666fd0(__int64 result, int* a2, int* a3)
{
  *a2 = (int)(*(_DWORD*)(result + 52) << 6) >> 30;
  *a3 = *(int*)(result + 52) >> 26;
  return result;
}

__int64 SdkHr_5fc080(_DWORD* a1, __int64 a2, int a3, unsigned int* a4,
                     __int64 a5, _BYTE* a6)
{
  __int64 v7;
  __int64 result;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v19[2];
  __int128 v20;
  __int64 v21;
  __int64 v22;

  if (a3 != -1072151545) {
    if (a3 != 1074807850) {
      if (a3 != -1072151511) {
        *a6 = 1;
        return 0;
      }
      *a6 = 0;
      v22 = 0;
      v7 = *a4;
      v21 = 0;
      v20 = 0u;
      result = SdkRoutine_5fbb80(v7, &v22);
      if ((_DWORD)result != 0) {
        goto LABEL_10;
      }
      v9 = SdkRoutine_86a300(v22);
      v10 = SdkRoutine_86a590();
      LODWORD(v20) = (unsigned __int64)(v10 + 0xFFFF) >> 16;
      *(_QWORD*)((char*)&v20 + 4) = 0x10000;
      v21 = 0x10000;
      result = SdkRoutine_86a5e0(v22 + 32, &v20);
      if ((_DWORD)result != 0) {
        goto LABEL_10;
      }
      v11 = v21;
      if ((unsigned int)SdkRoutine_86a5a0(v9, v21, v10 + v21 - 1) == 0) {
        SdkRoutine_5fbb10(v22);
        *((_QWORD*)a4 + 1) = v11;
        *((_QWORD*)a4 + 2) = v10;
        return 0;
      }
      if (v11 == 0 || (v19[0] = v11, v19[1] = 0,
                       (_DWORD)(v12 = SdkRoutine_86a5f0(v22 + 32, v19)) == 0)) {
        result = 327680;
      LABEL_10:
        if (v22 != 0) {
          v13 = result;
          SdkRoutine_5fbb10(v22);
          return v13;
        }
        return result;
      }
    LABEL_26:
      SdkRoutine_856170(v12);
      __udf(0);
    }
    *a6 = 0;
    v19[0] = 0;
    v14 = *a4;
    *((_QWORD*)&v20 + 1) = 0;
    v15 = SdkRoutine_5fbb80(v14, v19);
    if ((_DWORD)v15 != 0) {
      SdkRoutine_856170(v15);
    }
    else {
      v16 = SdkRoutine_86a300(v19[0]);
      LODWORD(v22) = SdkRoutine_86a5b0(v16, *((_QWORD*)a4 + 1));
      if ((_DWORD)v22 == 0) {
        *(_QWORD*)&v20 = *((_QWORD*)a4 + 1);
        v17 = SdkRoutine_86a5f0(v19[0] + 32LL, &v20);
        if ((_DWORD)v17 == 0) {
          SdkRoutine_5fbb10(v19[0]);
          return 0;
        }
        goto LABEL_25;
      }
    }
    v17 = SdkRoutine_858db0(&v22);
  LABEL_25:
    v12 = SdkRoutine_856170(v17);
    goto LABEL_26;
  }
  LODWORD(v20) = 0;
  *a6 = 1;
  if (*a1 != 0) {
    return 13;
  }
  result = SdkRoutine_86a610(*a4, &v20);
  if ((_DWORD)result == 0) {
    *a4 = SdkRoutine_86a7c0((unsigned int)v20);
    *a1 = v20;
    return 0;
  }
  return result;
}

void* SdkHr_5a85f0()
{
  void* result;
  int v1;

  result = (void*)SdkRoutine_85d390();
  v1 = (int)result;
  if ((_DWORD)result != 0) {
    SdkRoutine_858db0(&v1);
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f66708,
                              memory_order_acquire) &
         1) != 0) {
      return &SdkData_f66740;
    }
    else {
      if ((unsigned int)SdkRoutine_8584b0(&SdkData_f66708) != 0) {
        SdkHr_5a85f0(&SdkData_f66740, 0, 0);
        SdkRoutine_2d0();
        SdkRoutine_8584c0(&SdkData_f66708);
      }
      return &SdkData_f66740;
    }
  }
  return result;
}

bool SdkHr_6a4c30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                  char a6)
{
  char v8;

  v8 = SdkRoutine_6638a0();
  if (v8 != 0) {
    *(_BYTE*)(a1 + 7994) = a6 & 1;
  }
  return v8 != 0;
}

bool SdkHr_6a4ae0() { return (unsigned __int8)SdkRoutine_660f20() != 0; }

__int64 SdkHr_4dcb20(__int64 a1)
{
  _QWORD** v1;
  _QWORD* v2;
  unsigned int v4;

  v1 = *(_QWORD***)(a1 + 40);
  if (v1 != nullptr) {
    v2 = *v1;
    if (v2 != nullptr) {
      v4 = (unsigned int)X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD))(
              *v2 + 48LL))((void*)v2, v2, *(_QWORD*)(a1 + 48)));
      SdkRoutine_86e110(a1, v4);
      SdkRoutine_86e120(a1);
    }
  }
  return 0;
}

__int64 SdkHr_6b9820(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  _QWORD* v4;

  v4 = nullptr;
  result = SdkRoutine_876ec0(&v4);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*))(*v4 + 32LL))(v4);
    if ((_DWORD)result == 0) {
      atomic_store(0, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v4 != nullptr) {
    v3 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 8LL))(
        (void*)v4, v4);
    return v3;
  }
  return result;
}

bool SdkHr_7cca80(long double* a1, long double* a2)
{
  __int64 v4;
  long double v6;
  long double v7;
  long double v8;
  long double v9;
  long double* v10;
  long double* v11;
  __int64 v12;
  int v13;
  long double v14;
  __int64 v15;
  __int64 v16;
  int v17;
  long double v18;
  long double v19;
  long double v20;
  long double v21;
  long double v22;
  long double v23;
  long double v24;
  long double v25;
  long double v26;
  long double v27;
  long double v28;
  long double v29;
  long double v30;
  long double v31;
  long double v32;
  long double v33;
  long double v34;
  long double v35;
  long double v36;
  long double v37;
  long double v38;
  long double v39;
  long double v40;
  long double v41;
  long double v42;
  long double v43;
  long double v44;
  long double v45;
  long double v46;
  long double v47;
  long double v48;
  long double v49;

  v4 = a2 - a1;
  if (v4 > 2) {
    if (v4 == 3) {
      v25 = *a1;
      v30 = *(a2 - 1);
      v42 = a1[1];
      if ((((__int64 (*)(void))SdkRoutine_853d90)() & 0x80000000) != 0) {
        if ((int)SdkRoutine_853d90(v30, v42) >= 0) {
          *a1 = v42;
          a1[1] = v25;
          v46 = *(a2 - 1);
          if ((int)SdkRoutine_853d90(v46, v25) >= 0) {
            return true;
          }
          a1[1] = v46;
        }
        else {
          *a1 = v30;
        }
        *(a2 - 1) = v25;
        return true;
      }
      if ((int)SdkRoutine_853d90(v30, v42) >= 0) {
        return true;
      }
      a1[1] = v30;
      *(a2 - 1) = v42;
      v9 = *a1;
      v8 = a1[1];
      v45 = v8;
    LABEL_76:
      v39 = v9;
      if ((int)SdkRoutine_853d90(v8, v9) < 0) {
        *a1 = v45;
        a1[1] = v39;
      }
      return true;
    }
    if (v4 != 4) {
      if (v4 != 5) {
        goto LABEL_16;
      }
      v24 = *a1;
      v28 = a1[2];
      v40 = a1[1];
      if ((SdkRoutine_853d90(v40, *a1) & 0x80000000) != 0) {
        if ((int)SdkRoutine_853d90(v28, v40) < 0) {
          v6 = v24;
          *a1 = v28;
          v22 = v28;
          v7 = v40;
          a1[2] = v24;
        LABEL_62:
          v23 = v7;
          goto LABEL_63;
        }
        *a1 = v40;
        a1[1] = v24;
        if ((int)SdkRoutine_853d90(v28, v24) < 0) {
          v22 = v40;
          v23 = v28;
          v6 = v24;
          a1[1] = v28;
          a1[2] = v24;
          goto LABEL_63;
        }
        v22 = v40;
        v7 = v24;
      }
      else {
        if ((int)SdkRoutine_853d90(v28, v40) < 0) {
          a1[1] = v28;
          a1[2] = v40;
          if ((int)SdkRoutine_853d90(v28, v24) >= 0) {
            v6 = v40;
            v22 = v24;
            v7 = v28;
            goto LABEL_62;
          }
          *a1 = v28;
          a1[1] = v24;
          v22 = v28;
          v23 = v24;
          v6 = v40;
        LABEL_63:
          v35 = a1[3];
          v49 = v6;
          if ((int)SdkRoutine_853d90(v35, v6) >= 0) {
            v19 = v35;
            v36 = *(a2 - 1);
            v49 = v19;
            if ((int)SdkRoutine_853d90(v36, v19) >= 0) {
              return true;
            }
          }
          else {
            a1[2] = v35;
            a1[3] = v49;
            if ((int)SdkRoutine_853d90(v35, v23) < 0) {
              a1[1] = v35;
              a1[2] = v23;
              if ((int)SdkRoutine_853d90(v35, v22) < 0) {
                *a1 = v35;
                a1[1] = v22;
              }
            }
            v36 = *(a2 - 1);
            if ((int)SdkRoutine_853d90(v36, v49) >= 0) {
              return true;
            }
          }
          a1[3] = v36;
          *(a2 - 1) = v49;
          v37 = a1[2];
          v45 = a1[3];
          if ((int)SdkRoutine_853d90(v45, v37) >= 0) {
            return true;
          }
          v20 = v45;
          a1[2] = v45;
          a1[3] = v37;
          v21 = a1[1];
          goto LABEL_74;
        }
        v22 = v24;
        v7 = v40;
      }
      v6 = v28;
      goto LABEL_62;
    }
    v27 = *a1;
    v32 = a1[2];
    v44 = a1[1];
    if ((SdkRoutine_853d90(v44, *a1) & 0x80000000) != 0) {
      if ((int)SdkRoutine_853d90(v32, v44) < 0) {
        *a1 = v32;
        goto LABEL_55;
      }
      *a1 = v44;
      a1[1] = v27;
      if ((int)SdkRoutine_853d90(v32, v27) < 0) {
        a1[1] = v32;
      LABEL_55:
        a1[2] = v27;
        v33 = *(a2 - 1);
        v44 = v27;
        if ((int)SdkRoutine_853d90(v33, v27) >= 0) {
          return true;
        }
        goto LABEL_73;
      }
    }
    else if ((int)SdkRoutine_853d90(v32, v44) < 0) {
      a1[1] = v32;
      a1[2] = v44;
      if ((int)SdkRoutine_853d90(v32, v27) >= 0) {
        v33 = *(a2 - 1);
        if ((int)SdkRoutine_853d90(v33, v44) >= 0) {
          return true;
        }
      }
      else {
        *a1 = v32;
        a1[1] = v27;
        v33 = *(a2 - 1);
        if ((int)SdkRoutine_853d90(v33, v44) >= 0) {
          return true;
        }
      }
      goto LABEL_73;
    }
    v18 = v32;
    v33 = *(a2 - 1);
    v44 = v18;
    if ((int)SdkRoutine_853d90(v33, v18) >= 0) {
      return true;
    }
  LABEL_73:
    a1[2] = v33;
    *(a2 - 1) = v44;
    v21 = a1[1];
    v20 = a1[2];
    v45 = v20;
  LABEL_74:
    v38 = v21;
    if ((int)SdkRoutine_853d90(v20, v21) >= 0) {
      return true;
    }
    v8 = v45;
    a1[1] = v45;
    a1[2] = v38;
    v9 = *a1;
    goto LABEL_76;
  }
  if ((unsigned __int64)v4 < 2) {
    return true;
  }
  if (v4 == 2) {
    v29 = *a1;
    v41 = *(a2 - 1);
    if ((int)SdkRoutine_853d90(v41, *a1) < 0) {
      *a1 = v41;
      *(a2 - 1) = v29;
    }
    return true;
  }
LABEL_16:
  v26 = *a1;
  v31 = a1[1];
  v43 = a1[2];
  if ((SdkRoutine_853d90(v31, *a1) & 0x80000000) != 0) {
    if ((int)SdkRoutine_853d90(v43, v31) >= 0) {
      *a1 = v31;
      a1[1] = v26;
      if ((int)SdkRoutine_853d90(v43, v26) >= 0) {
        goto LABEL_40;
      }
      a1[1] = v43;
    }
    else {
      *a1 = v43;
    }
    a1[2] = v26;
  }
  else if ((int)SdkRoutine_853d90(v43, v31) < 0) {
    a1[1] = v43;
    a1[2] = v31;
    if ((int)SdkRoutine_853d90(v43, v26) < 0) {
      *a1 = v43;
      a1[1] = v26;
    }
  }
LABEL_40:
  v10 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v11 = a1 + 2;
  v12 = 48;
  v13 = 0;
  while (1) {
    v34 = *v10;
    v47 = *v11;
    if ((int)SdkRoutine_853d90(*v10, *v11) < 0) {
      break;
    }
  LABEL_43:
    v11 = v10++;
    v12 += 16;
    if (v10 == a2) {
      return true;
    }
  }
  v14 = v47;
  v15 = v12;
  do {
    v16 = v15 - 16;
    *(long double*)((char*)a1 + v15) = v14;
    if (v15 == 16) {
      ++v13;
      *a1 = v34;
      if (v13 != 8) {
        goto LABEL_43;
      }
      return v10 + 1 == a2;
    }
    v48 = *(long double*)((char*)a1 + v15 - 32);
    v17 = SdkRoutine_853d90(v34, v48);
    v14 = v48;
    v15 = v16;
  } while (v17 < 0);
  ++v13;
  *(long double*)((char*)a1 + v16) = v34;
  if (v13 != 8) {
    goto LABEL_43;
  }
  return v10 + 1 == a2;
}

__int64 SdkHr_2e9300(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int16* v10;
  __int16* v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  __int16* v29;
  __int16* v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int16 v35;
  __int16 v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
  char v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;

  if (a3 == 0) {
    v7 = SdkRoutine_326780(a1, a1, a4) + 1;
    v6 = SdkRoutine_326780(a2, a2, a4) + 1;
    goto LABEL_13;
  }
  if ((int)a4 < 1) {
    v7 = 1;
    v6 = 1;
    goto LABEL_13;
  }
  v4 = a4 & 3;
  if (a4 < 4) {
    v5 = 0;
    v6 = 1;
    v7 = 1;
    if ((a4 & 3) == 0) {
      goto LABEL_13;
    }
    goto LABEL_11;
  }
  v10 = (__int16*)(a1 + 4);
  v11 = (__int16*)(a2 + 4);
  v6 = 1;
  v12 = 0;
  v7 = 1;
  do {
    v12 -= 4;
    v13 = *(v10 - 2) >> 1;
    v14 = *(v11 - 2) >> 1;
    v15 = *(v11 - 1) >> 1;
    v16 = v14 + v13;
    v17 = v13 - v14;
    v18 = v7 + v16 * v16;
    v19 = *(v10 - 1) >> 1;
    v20 = v6 + v17 * v17 + (v19 - v15) * (v19 - v15);
    v21 = v18 + (v15 + v19) * (v15 + v19);
    v22 = *v11 >> 1;
    v23 = *v10 >> 1;
    v24 = v22 + v23;
    v25 = v23 - v22;
    v26 = v11[1];
    v11 += 4;
    v27 = v20 + v25 * v25;
    v28 = v10[1];
    v10 += 4;
    v26 >>= 1;
    v28 >>= 1;
    v7 = v21 + v24 * v24 + (v26 + v28) * (v26 + v28);
    v6 = v27 + (v28 - v26) * (v28 - v26);
  } while (-(__int64)(a4 & 0x7FFFFFFC) != v12);
  v5 = -v12;
  if ((a4 & 3) != 0) {
  LABEL_11:
    v29 = (__int16*)(a2 + 2 * v5);
    v30 = (__int16*)(a1 + 2 * v5);
    do {
      v32 = *v30++;
      v31 = v32;
      v33 = *v29++;
      --v4;
      v31 >>= 1;
      v34 = v33 >> 1;
      v7 += (v34 + v31) * (v34 + v31);
      v6 += (v31 - v34) * (v31 - v34);
    } while (v4 != 0);
  }
LABEL_13:
  v35 = SdkRoutine_2e28a0(v7);
  v36 = SdkRoutine_2e28a0(v6);
  v37 = v36;
  if (v36 >= v35) {
    v45 = v35 >> 1;
    v46 = v45 * ((int)SdkRoutine_2e2790((unsigned int)v36) >> 16);
    v47 = (((unsigned __int16)SdkRoutine_2e2790(v37) * v45) >> 15) + 2 * v46;
    v48 =
        v47 + ((((int)SdkRoutine_2e2790(v37) >> 16) * ((v35 & 1) << 15)) >> 15);
    if (v48 >= 0x7FFF) {
      LOWORD(v48) = 0x7FFF;
    }
    v44 = 25736 - ((__int16)((((((((9872 * (__int16)v48 - 782663680) >> 16) *
                                      2 * (__int16)v48 -
                                  1343488) >>
                                 16) *
                                    2 * (__int16)v48 +
                                2147450880) >>
                               16) *
                                  (__int16)v48 +
                              0x4000) >>
                             15) >>
                   1);
  }
  else {
    v38 = v35;
    v39 = v36 >> 1;
    v40 = v36;
    v41 = v39 * ((int)SdkRoutine_2e2790(v38) >> 16);
    v42 = (((unsigned __int16)SdkRoutine_2e2790(v38) * v39) >> 15) + 2 * v41;
    v43 =
        v42 + ((((int)SdkRoutine_2e2790(v38) >> 16) * ((v40 & 1) << 15)) >> 15);
    if (v43 >= 0x7FFF) {
      LOWORD(v43) = 0x7FFF;
    }
    v44 =
        (__int16)((unsigned int)(((((((9872 * (__int16)v43 - 782663680) >> 16) *
                                         2 * (__int16)v43 -
                                     1343488) >>
                                    16) *
                                       2 * (__int16)v43 +
                                   2147450880) >>
                                  16) *
                                     (__int16)v43 +
                                 0x4000) >>
                  15) >>
        1;
  }
  return (unsigned int)((20861 * (__int16)v44) >> 15);
}

__int64 SdkHr_1c6b2c()
{
  SdkRoutine_1c6b88(&SdkData_efd378);
  SdkRoutine_1c6b88(&SdkData_efd358);
  SdkRoutine_1c6b88(&SdkData_efd338);
  SdkRoutine_1c6b88(&SdkData_efd318);
  SdkRoutine_1c6b88(&SdkData_efd2f8);
  SdkRoutine_1c6b88(&SdkData_efd2d8);
  return SdkRoutine_1c6b88(&SdkData_efd2b8);
}

__int64 SdkHr_430760(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int16 v3;
  __int16 v4;
  _DWORD* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;

  v1 = *(_QWORD*)(result + 64);
  v2 = result;
  v3 = *(_WORD*)(v1 + 156);
  v4 = *(_WORD*)(v1 + 154) + 16;
  v5 = (_DWORD*)(*(_QWORD*)(result + 40) - 4LL);
  *(_QWORD*)(result + 40) = v5;
  v6 = 2 * *v5;
  *(_QWORD*)(result + 40) = &v5[-v6];
  v7 = *(unsigned __int16*)(v1 + 34);
  if (*(_BYTE*)(v1 + 276) != 0) {
    v8 = v7 - v4;
    if (v8 > 0xF) {
      return result;
    }
  }
  else {
    v9 = SdkRoutine_433470(result);
    result = SdkRoutine_869570(v7, v9, 16);
    v8 = result - v4;
    if (v8 > 0xF) {
      return result;
    }
  }
  v10 = 16 * v8;
  v11 = v6 >> 1;
  v12 = (v6 >> 1) & 0xFFFFFFFE;
  if (v12 < 3) {
    v13 = 0;
    if (v6 > 0) {
      goto LABEL_20;
    }
  }
  else {
    v13 = 0;
    do {
      v14 = v13 + v12;
      v11 >>= 1;
      if ((int)(*(_DWORD*)(*(_QWORD*)(v2 + 40) + 4LL * v14) & 0xFFFFFFF0) <
          v10) {
        v13 = v14;
      }
      v12 = v11 & 0x7FFFFFFE;
    } while ((v11 & 0x7FFFFFFE) > 2);
    if ((int)v13 < v6) {
      while (1) {
      LABEL_20:
        v16 = *(_QWORD*)(v2 + 40);
        v17 = *(_DWORD*)(v16 + 4LL * v13);
        if ((v17 & 0xFFFFFFF0) == v10) {
          v18 = *(_DWORD*)(v16 + 4LL * v13) & 0xF;
          v19 = v16 + 4LL * (int)v13;
          if (v18 <= 7) {
            v20 = -8;
          }
          else {
            v20 = -7;
          }
          v21 = *(int*)(v19 + 4);
          v22 = (int)((v20 + v18) << 6) >> v3;
          v23 = SdkRoutine_433470(v2);
          result = SdkRoutine_869560(v22, v23, 16);
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 64) + 24LL) + 4 * v21) +=
              result;
          if ((int)(v13 + 2) >= v6) {
            return result;
          }
        }
        else if ((int)(v17 & 0xFFFFFFF0) > v10 || (int)(v13 + 2) >= v6) {
          return result;
        }
        v13 += 2;
      }
    }
  }
  return result;
}

__int64 SdkHr_656610(__int64 a1)
{
  char v1;
  __int64 v2;
  _DWORD* v4;

  v1 = *(_BYTE*)(a1 + 20);
  *(_WORD*)(a1 + 24) = 0;
  v2 = a1 + 24;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_DWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 28) = 0;
  *(_DWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_DWORD*)(a1 + 48) = 0;
  *(_BYTE*)(a1 + 20) = v1 & 0xFC;
  SdkRoutine_858d00(a1 + 24, 1, 0);
  SdkRoutine_858d40(v2);
  if (*(_QWORD*)a1 == 0) {
    v4 = (_DWORD*)(*(__int64 (**)(__int64))SdkData_e89bd8)(16);
    *(_QWORD*)a1 = v4;
    if (v4 != nullptr) {
      *v4 = 0;
      if (*(_QWORD*)a1 != 0) {
        *(_DWORD*)(*(_QWORD*)a1 + 4LL) = 0;
        if (*(_QWORD*)a1 != 0) {
          *(_DWORD*)(*(_QWORD*)a1 + 8LL) = 0;
          if (*(_QWORD*)a1 != 0) {
            *(_DWORD*)(*(_QWORD*)a1 + 12LL) = 0;
          }
        }
      }
      *(_BYTE*)(a1 + 20) |= 3u;
      *(_QWORD*)(a1 + 12) = 0x2000000004LL;
    }
  }
  return SdkRoutine_858d50(v2);
}

__int64 SdkHr_657b60(__int64 result, _QWORD* a2, int a3, __int64 a4,
                     long double a5)
{
  int v5;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  float* v11;
  unsigned __int64 v12;
  int v13;
  unsigned __int64 v14;
  float* v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;

  v5 = a3 - 1;
  *(_BYTE*)((__PAIR128__(a2[1], a2[2]) - 1) >> 64) = 0;
  if (a3 >= 1) {
    v8 = result;
    v9 = 0;
    if (a3 != 1) {
      do {
        v11 = *(float**)(a4 + 8);
        v12 = *(_QWORD*)(a4 + 16);
        if ((unsigned __int64)(v11 + 1) <= v12) {
          *(_QWORD*)(a4 + 8) = v11 + 1;
          *(double*)&a5 = *v11;
        }
        else {
          *(_QWORD*)(a4 + 8) = v12;
          *(_BYTE*)(a4 + 24) = 1;
          *(_QWORD*)&a5 = 0;
        }
        v13 =
            SdkRoutine_858b30(*(_QWORD*)(v8 + 8), *(_QWORD*)(v8 + 16), *a2, a5);
        if (v13 < 1) {
          v14 = *(_QWORD*)(v8 + 16);
          if (v14 > 1) {
          LABEL_13:
            v14 = 2;
            goto LABEL_5;
          }
        }
        else {
          v14 = *(_QWORD*)(v8 + 16) - (unsigned int)v13;
          *(_QWORD*)(v8 + 8) += (unsigned int)v13;
          *(_QWORD*)(v8 + 16) = v14;
          if (v14 > 1) {
            goto LABEL_13;
          }
        }
        *(_BYTE*)(v8 + 24) = 1;
      LABEL_5:
        SdkRoutine_856130(*(_QWORD*)(v8 + 8), ", ", v14);
        ++v9;
        v10 = *(_QWORD*)(v8 + 16) - v14;
        *(_QWORD*)(v8 + 8) += v14;
        *(_QWORD*)(v8 + 16) = v10;
      } while (v5 != v9);
    }
    v15 = *(float**)(a4 + 8);
    v16 = *(_QWORD*)(a4 + 16);
    if ((unsigned __int64)(v15 + 1) <= v16) {
      *(_QWORD*)(a4 + 8) = v15 + 1;
      *(double*)&a5 = *v15;
    }
    else {
      *(_QWORD*)&a5 = 0;
      *(_QWORD*)(a4 + 8) = v16;
      *(_BYTE*)(a4 + 24) = 1;
    }
    result =
        SdkRoutine_858b30(*(_QWORD*)(v8 + 8), *(_QWORD*)(v8 + 16), *a2, a5);
    if ((int)result >= 1) {
      v17 = *(_QWORD*)(v8 + 16) - (unsigned int)result;
      *(_QWORD*)(v8 + 8) += (unsigned int)result;
      *(_QWORD*)(v8 + 16) = v17;
    }
    if (v9 != v5) {
      v18 = *(_QWORD*)(v8 + 16);
      if (v18 > 1) {
        v18 = 2;
      }
      else {
        *(_BYTE*)(v8 + 24) = 1;
      }
      result = SdkRoutine_856130(*(_QWORD*)(v8 + 8), ", ", v18);
      v19 = *(_QWORD*)(v8 + 16) - v18;
      *(_QWORD*)(v8 + 8) += v18;
      *(_QWORD*)(v8 + 16) = v19;
    }
  }
  return result;
}

__int64 SdkHr_592fc0(__int64* a1, _QWORD** a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  _QWORD* v19;
  _QWORD* v20;
  unsigned int v21;

  v2 = *a1;
  SdkRoutine_858b60(*a1 + 8);
  v5 = *(_DWORD*)(v2 + 12);
  if (v5 != 0) {
    *(_DWORD*)(v2 + 12) = v5 + 1;
    SdkRoutine_858b80(v2 + 8);
    if (a1[2] != 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v14 = SdkRoutine_85c330(v2 + 176, 64, 64, 4, 16, v2 + 16);
  v15 = SdkData_e87068;
  *(_QWORD*)v2 = v2 + 16;
  *(_QWORD*)(v2 + 160) = v15 + 16;
  *(_QWORD*)(v2 + 168) = v14;
  *(_DWORD*)(v2 + 12) = 1;
  SdkRoutine_858b80(v2 + 8);
  if (a1[2] == 0) {
  LABEL_3:
    a1[2] = *(_QWORD*)v2 + 144LL;
  }
LABEL_4:
  v6 = SdkData_e86d80;
  *(_QWORD*)(v2 + 240) = SdkData_e86d80 + 16;
  *(_DWORD*)(v2 + 264) = 0;
  *(_QWORD*)(v2 + 256) = v2 + 312;
  v7 = SdkRoutine_85b140(v2 + 268);
  v8 = *(_QWORD*)(v2 + 256);
  *(_QWORD*)(v2 + 272) = 0;
  *(_QWORD*)(v2 + 280) = v8;
  *(_QWORD*)(v2 + 288) = v2 + 240;
  *(_QWORD*)(v8 + 8) = v8 + 16;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 24LL) = *(_QWORD*)(v2 + 256) + 32LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 40LL) = *(_QWORD*)(v2 + 256) + 48LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 56LL) = *(_QWORD*)(v2 + 256) + 64LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 72LL) = *(_QWORD*)(v2 + 256) + 80LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 88LL) = *(_QWORD*)(v2 + 256) + 96LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 104LL) = *(_QWORD*)(v2 + 256) + 112LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 120LL) = *(_QWORD*)(v2 + 256) + 128LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 136LL) = *(_QWORD*)(v2 + 256) + 144LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 152LL) = *(_QWORD*)(v2 + 256) + 160LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 168LL) = *(_QWORD*)(v2 + 256) + 176LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 184LL) = *(_QWORD*)(v2 + 256) + 192LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 200LL) = *(_QWORD*)(v2 + 256) + 208LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 216LL) = *(_QWORD*)(v2 + 256) + 224LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 232LL) = *(_QWORD*)(v2 + 256) + 240LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 256) + 248LL) = 0;
  *(_DWORD*)(v2 + 304) = 0;
  *(_DWORD*)(v2 + 312) = 0;
  *(_DWORD*)(v2 + 328) = 0;
  *(_DWORD*)(v2 + 344) = 0;
  *(_DWORD*)(v2 + 360) = 0;
  *(_DWORD*)(v2 + 376) = 0;
  *(_DWORD*)(v2 + 392) = 0;
  *(_DWORD*)(v2 + 408) = 0;
  *(_DWORD*)(v2 + 424) = 0;
  *(_DWORD*)(v2 + 440) = 0;
  *(_DWORD*)(v2 + 456) = 0;
  *(_DWORD*)(v2 + 472) = 0;
  *(_DWORD*)(v2 + 488) = 0;
  *(_DWORD*)(v2 + 504) = 0;
  *(_DWORD*)(v2 + 520) = 0;
  *(_DWORD*)(v2 + 536) = 0;
  *(_DWORD*)(v2 + 552) = 0;
  v20 = nullptr;
  *(_QWORD*)(v2 + 296) = 16;
  v11 = a1 + 1;
  v9 = a1[1];
  v10 = v11[1];
  SdkRoutine_859a60(v7);
  v21 = 0;
  v12 = SdkRoutine_859a70(&v21, v9);
  if (v12 == 0) {
    v13 = SdkRoutine_5932b0(v2 + 240, &v20, v10, v21);
    SdkRoutine_859a80();
    v16 = v20;
    if (v13 != 0) {
      if (v20 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v19 = *a2;
      v20 = nullptr;
      *a2 = v16;
      if (v19 == nullptr) {
        return 0;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v19 + 8LL))(
          (void*)v19, v19);
      v16 = v20;
      if (v20 == nullptr) {
      LABEL_11:
        if (v13 == 0) {
          return v13;
        }
        goto LABEL_12;
      }
    }
    (*(void (**)(_QWORD*))(*v16 + 8LL))(v16);
    goto LABEL_11;
  }
  v13 = v12;
  SdkRoutine_859a80();
LABEL_12:
  *(_QWORD*)(v2 + 240) = v6 + 16;
  SdkRoutine_858b60(v2 + 304);
  SdkRoutine_f3b00(v2 + 240, 0);
  SdkRoutine_858b80(v2 + 304);
  SdkRoutine_858b60(v2 + 8);
  v17 = *(_DWORD*)(v2 + 12) - 1;
  *(_DWORD*)(v2 + 12) = v17;
  if (v17 == 0) {
    SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)v2 + 152LL));
    *(_QWORD*)v2 = 0;
  }
  SdkRoutine_858b80(v2 + 8);
  return v13;
}

__int64 SdkHr_623ab0(__int64 a1, float* a2)
{
  return SdkRoutine_860ee0(2.0,
                           (float)(*a2 - *(float*)(*(_QWORD*)(a1 + 8) + 4LL)) /
                               **(float**)(a1 + 8));
}

__int64 SdkHr_2b18e0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  bool v10;
  unsigned int v11;
  int v12;
  __int64 result;
  _DWORD* v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  _DWORD* v19;
  int v20;

  v3 = 819353;
  if (*(_BYTE*)(a1 + 128) != 1) {
    return v3;
  }
  if (*(_BYTE*)(a1 + 129) != 1) {
    return 823961;
  }
  if (a2 == 0) {
    return 821401;
  }
  v4 = a3;
  if ((a3 & 0x80000000) != 0) {
    return 823449;
  }
  if (a3 != 0) {
    return (unsigned int)SdkRoutine_2b2fa0(a1, a2, 0, *(_QWORD*)(a1 + 96), v4,
                                           1);
  }
  v5 = a2;
  v6 = a1;
  SdkRoutine_8647e0(*(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 40));
  v7 = *(_DWORD*)(*(_QWORD*)(v6 + 48) + 4LL);
  if ((v7 & 0x80000000) != 0 ||
      (v8 = *(_DWORD*)(v6 + 116), a1 = v6, (int)v7 >= v8) ||
      ((v9 = *(_DWORD*)(*(_QWORD*)(v6 + 32) + 4LL)) & 0x80000000) != 0 ||
      (int)v9 >= v8) {
    v20 = 1177;
    a1 = SdkRoutine_858db0(&v20);
  }
  else {
    v10 = v7 >= v9;
    v11 = v7 - v9;
    if (v10) {
      v12 = 0;
    }
    else {
      v12 = *(_DWORD*)(v6 + 116);
    }
    if ((*(_BYTE*)(v6 + 128) & 1) != 0) {
      a2 = v5;
      v4 = v8 + ~(v11 + v12);
      return (unsigned int)SdkRoutine_2b2fa0(a1, a2, 0, *(_QWORD*)(a1 + 96), v4,
                                             1);
    }
  }
  v14 = (_DWORD*)SdkRoutine_856170(a1);
  *v14 = 0;
  if ((*(_BYTE*)(v15 + 464) & 1) == 0) {
    result = SdkRoutine_856170(v14);
    goto LABEL_32;
  }
  v17 = v16;
  v18 = v15;
  v19 = v14;
  if ((*(_BYTE*)(v15 + 465) & 1) != 0) {
    result = (*(__int64 (**)(_QWORD, _DWORD*, _QWORD))(
        **(_QWORD**)(v15 + 32) + 120LL))(*(_QWORD*)(v15 + 32), v14, v16);
    if ((_DWORD)result != 0) {
      return result;
    }
    goto LABEL_26;
  }
  result = SdkRoutine_2b1ac0(v15 + 336, v14, v16);
  if ((_DWORD)result == 0) {
  LABEL_26:
    if (v17 == 0) {
      v17 = *(_DWORD*)(v18 + 24);
    }
    if ((*v19 & 0x80000000) == 0 && *v19 <= v17) {
      return 0;
    }
  LABEL_32:
    SdkRoutine_856170(result);
    __udf(0);
  }
  return result;
}

bool SdkHr_bd990(__int64 a1) { return (SdkRoutine_bd9c0(a1) & 1) == 0; }

__int64 SdkHr_4f4ea0(__int64 result, __int64 a2)
{
  __int64 v3;

  if (a2 != 0) {
    v3 = result;
    SdkHr_4f4ea0(result, *(_QWORD*)a2);
    SdkHr_4f4ea0(v3, *(_QWORD*)(a2 + 8));
    if ((*(_BYTE*)(a2 + 88) & 1) != 0) {
      SdkRoutine_857220(*(_QWORD*)(a2 + 104),
                        *(_QWORD*)(a2 + 88) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(a2 + 64) & 1) == 0) {
        return SdkRoutine_4c1bd0(a2, *(_QWORD*)(v3 + 16));
      }
    }
    else if ((*(_BYTE*)(a2 + 64) & 1) == 0) {
      return SdkRoutine_4c1bd0(a2, *(_QWORD*)(v3 + 16));
    }
    SdkRoutine_857220(*(_QWORD*)(a2 + 80),
                      *(_QWORD*)(a2 + 64) & 0xFFFFFFFFFFFFFFFELL);
    return SdkRoutine_4c1bd0(a2, *(_QWORD*)(v3 + 16));
  }
  return result;
}

__int64 SdkHr_62cfe0(__int64 a1, _DWORD* a2, int* a3)
{
  __int64 result;
  __int64* v7;
  int v8;
  int v9;
  __int64 v10;
  int v12;

  result = SdkRoutine_628f50();
  v7 = SdkData_e899d8[0];
  *(_DWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 28) = 0;
  *(_DWORD*)(a1 + 24) = -1;
  *(_QWORD*)a1 = v7 + 2;
  *(_QWORD*)(a1 + 32) = a2 + 70;
  v8 = *a3;
  if (*a3 != 0) {
    if ((v8 & (v8 - 1)) != 0) {
      v9 = 0;
    }
    else {
      v9 = a2[98] & v8;
    }
  }
  else {
    v10 = *((_QWORD*)a3 + 2);
    v9 = a2[99];
    if (*((_QWORD*)a3 + 3) == v10 && v10 != 0) {
      v9 = 0;
    }
  }
  v12 = a2[100];
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_DWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 40) = v9;
  *(_DWORD*)(a1 + 44) = v12;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = -1;
  *(_QWORD*)(a1 + 80) = -1;
  *(_QWORD*)(a1 + 88) = 0;
  return result;
}

__int64 SdkHr_627b10(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  __int64 v5;
  unsigned int v9;
  unsigned int v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *(_QWORD*)(a1 + 40);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v9 = SdkRoutine_627be0(&v14, v5);
  if (v9 != 0 || (v9 = SdkRoutine_625f80(a1, a2, &v14)) != 0) {
    v10 = v9;
  }
  else {
    v12 = SdkRoutine_859620(v14, v15, 12, SdkData_e89908[0]);
    v10 = SdkRoutine_6261a0(v12, a4, &v14);
    if (v10 == 0) {
      v13 = a4[1];
      *(_QWORD*)(a3 + 664) = *a4;
      *(_QWORD*)(a3 + 672) = v13;
    }
  }
  SdkRoutine_628dc0(&v14, 0);
  SdkRoutine_875b30(v14);
  return v10;
}

__int64 SdkHr_1ded00(__int64 a1, __int64 a2, __int64* a3, __int64 a4,
                     __int64 a5, __int64* a6)
{
  __int64 v6;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v18;
  __int64* v19;
  __int64 v20;

  v6 = *(_QWORD*)(a1 + 32);
  v20 = 0;
  v18 = v6;
  v19 = &v20;
  SdkRoutine_1df160(&v18, 0);
  if (v19 == nullptr) {
    v15 = 5642;
    v16 = v20;
    if (v20 == 0) {
      return v15;
    }
    goto LABEL_3;
  }
  v13 = *a6;
  v14 = a6[1];
  v18 = *a3;
  v15 = SdkRoutine_1deeb0(a1 + 8, a2, &v18, a4, a5, v13, v14, 0, &v20);
  v16 = v20;
  if (v20 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  return v15;
}

__int64 SdkHr_f3ce0(__int64 a1, __int64* a2, __int64* a3, unsigned __int8 a4,
                    __int64 a5, unsigned __int8 a6)
{
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v17;
  __int64* v18;
  __int64 v19;

  v19 = 0;
  v17 = 0;
  v18 = &v19;
  SdkRoutine_e3d60(&v17);
  if (v18 == nullptr) {
    v14 = 5642;
    v15 = v19;
    if (v19 == 0) {
      return v14;
    }
    goto LABEL_3;
  }
  v12 = *a3;
  v13 = a3[1];
  v17 = *a2;
  v14 = SdkRoutine_f3dd0(a1 + 8, &v17, v12, v13, a4, a5, a6, 0, &v19);
  v15 = v19;
  if (v19 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  return v14;
}

__int64 SdkHr_6f46b0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  return SdkRoutine_6f58e0(a1 + 8, a2, *a3, 16LL * a3[1], a4, 212);
}

void __attribute__((noreturn)) SdkHr_830194(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
  __udf(0);
}

unsigned __int64 SdkHr_5f3a80(__int64 a1, unsigned __int64 a2,
                              unsigned __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v26;
  unsigned __int64* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  _QWORD* v49;

  v3 = *(_QWORD*)(a2 + 8);
  v4 = *(_QWORD*)(a1 + 24);
  v5 = v3 & 0xFFFFFFFFFFFFFFF8LL;
  v7 = a2 < v4 || (v3 & 3) == 1 || v5 == 0;
  if (v7 ||
      (v8 = a2 + v5, v9 = a2, ((v10 = *(_QWORD*)(a2 + v5 + 8)) & 1) == 0)) {
    SdkRoutine_875c00("D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                      "hos\\utils\\nvos\\hos\\dlmalloc.c",
                      4920, 0);
    return 0;
  }
  if ((v3 & 3) != 0) {
    v11 = v5 - a3;
    if (v5 >= a3) {
      if (v11 >= 0x20) {
        *(_QWORD*)(a2 + 8) = a3 | v3 & 1 | 2;
        *(_QWORD*)(a2 + a3 + 8) = v11 | 3;
        *(_QWORD*)(v8 + 8) |= 1uLL;
        ((void (*)(void))SdkRoutine_5f47a0)();
      }
    }
    else {
      if (v8 == *(_QWORD*)(a1 + 40)) {
        v20 = *(_QWORD*)(a1 + 16) + v5;
        v21 = v20 > a3;
        v22 = v20 - a3;
        if (v21) {
          *(_QWORD*)(a1 + 16) = v22;
          *(_QWORD*)(a1 + 40) = a2 + a3;
          *(_QWORD*)(a2 + 8) = a3 | v3 & 1 | 2;
          *(_QWORD*)(a2 + a3 + 8) = v22 | 1;
          return v9;
        }
        return 0;
      }
      if (v8 != *(_QWORD*)(a1 + 32)) {
        if ((v10 & 2) == 0) {
          v12 = (v10 & 0xFFFFFFFFFFFFFFF8LL) + v5;
          v13 = v12 - a3;
          if (v12 >= a3) {
            if (v10 <= 0xFF) {
              v14 = *(_QWORD*)(v8 + 16);
              v15 = *(_QWORD*)(v8 + 24);
              v16 = v10 >> 3;
              v17 = a1 + 16 * (v10 >> 3) + 72;
              if (v14 == v17 || v14 >= v4 && *(_QWORD*)(v14 + 24) == v8) {
                if (v15 == v14) {
                  *(_DWORD*)a1 &= ~(1 << v16);
                  goto LABEL_69;
                }
                if (v15 == v17 || v15 >= v4 && *(_QWORD*)(v15 + 16) == v8) {
                  *(_QWORD*)(v14 + 24) = v15;
                  *(_QWORD*)(v15 + 16) = v14;
                  goto LABEL_69;
                }
              }
            LABEL_22:
              v18 = a1;
              v19 = a3;
              SdkRoutine_875c00(
                  "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                  "hos\\utils\\nvos\\hos\\dlmalloc.c",
                  4904, 0);
              a3 = v19;
              a1 = v18;
              goto LABEL_69;
            }
            v29 = *(_QWORD*)(v8 + 48);
            v30 = *(_QWORD**)(v8 + 24);
            if (v30 == (_QWORD*)v8) {
              v32 = (_QWORD*)(v8 + 40);
              v33 = *(_QWORD**)(v8 + 40);
              if (v33 == nullptr) {
                v32 = (_QWORD*)(v8 + 32);
                v33 = *(_QWORD**)(v8 + 32);
                if (v33 == nullptr) {
                  v30 = nullptr;
                  goto LABEL_50;
                }
              }
              do {
                do {
                  v30 = v33;
                  v34 = v32;
                  v32 = v33 + 5;
                  v33 = (_QWORD*)v33[5];
                } while (v33 != nullptr);
                v32 = v30 + 4;
                v33 = (_QWORD*)v30[4];
              } while (v33 != nullptr);
              if ((unsigned __int64)v34 >= v4) {
                *v34 = 0;
                goto LABEL_50;
              }
            }
            else {
              v31 = *(_QWORD*)(v8 + 16);
              if (v31 >= v4 && *(_QWORD*)(v31 + 24) == v8 && v30[2] == v8) {
                *(_QWORD*)(v31 + 24) = v30;
                v30[2] = v31;
                goto LABEL_50;
              }
            }
            v42 = *(_QWORD*)(v8 + 48);
            v44 = a1;
            v47 = v30;
            v39 = a3;
            SdkRoutine_875c00(
                "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                "hos\\utils\\nvos\\hos\\dlmalloc.c",
                4904, 0);
            v29 = v42;
            a1 = v44;
            v30 = v47;
            a3 = v39;
          LABEL_50:
            if (v29 == 0) {
              goto LABEL_69;
            }
            v35 = *(unsigned int*)(v8 + 56);
            if (v8 == *(_QWORD*)(a1 + 600 + 8 * v35)) {
              *(_QWORD*)(a1 + 600 + 8 * v35) = v30;
              if (v30 == nullptr) {
                *(_DWORD*)(a1 + 4) &= ~(1 << v35);
                goto LABEL_69;
              }
            }
            else if (v29 < *(_QWORD*)(a1 + 24)) {
              v43 = v29;
              v45 = a1;
              v48 = v30;
              v40 = a3;
              SdkRoutine_875c00(
                  "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                  "hos\\utils\\nvos\\hos\\dlmalloc.c",
                  4904, 0);
              v29 = v43;
              a1 = v45;
              v30 = v48;
              a3 = v40;
              if (v48 == nullptr) {
                goto LABEL_69;
              }
            }
            else if (*(_QWORD*)(v29 + 32) == v8) {
              *(_QWORD*)(v29 + 32) = v30;
              if (v30 == nullptr) {
                goto LABEL_69;
              }
            }
            else {
              *(_QWORD*)(v29 + 40) = v30;
              if (v30 == nullptr) {
                goto LABEL_69;
              }
            }
            v36 = *(_QWORD*)(a1 + 24);
            if ((unsigned __int64)v30 < v36) {
              goto LABEL_22;
            }
            v30[6] = v29;
            v37 = *(_QWORD*)(v8 + 32);
            if (v37 == 0) {
              goto LABEL_64;
            }
            if (v37 >= v36) {
              v30[4] = v37;
              *(_QWORD*)(v37 + 48) = v30;
            LABEL_64:
              v38 = *(_QWORD*)(v8 + 40);
              if (v38 == 0) {
                goto LABEL_69;
              }
            LABEL_65:
              if (v38 >= *(_QWORD*)(a1 + 24)) {
                v30[5] = v38;
                *(_QWORD*)(v38 + 48) = v30;
                goto LABEL_69;
              }
              goto LABEL_22;
            }
            v49 = v30;
            v46 = a1;
            v41 = a3;
            SdkRoutine_875c00(
                "D:\\home\\teamcity\\work\\sdk\\Externals\\Gimle\\core-"
                "hos\\utils\\nvos\\hos\\dlmalloc.c",
                4904, 0);
            v30 = v49;
            a1 = v46;
            a3 = v41;
            v38 = *(_QWORD*)(v8 + 40);
            if (v38 != 0) {
              goto LABEL_65;
            }
          LABEL_69:
            if (v13 > 0x1F) {
              *(_QWORD*)(v9 + 8) = a3 | *(_QWORD*)(v9 + 8) & 1LL | 2;
              *(_QWORD*)(v9 + a3 + 8) = v13 | 3;
              *(_QWORD*)(v9 + v12 + 8) |= 1uLL;
              SdkRoutine_5f47a0(a1);
            }
            else {
              *(_QWORD*)(v9 + 8) = v12 | *(_QWORD*)(v9 + 8) & 1LL | 2;
              *(_QWORD*)(v9 + v12 + 8) |= 1uLL;
            }
            return v9;
          }
        }
        return 0;
      }
      v23 = *(_QWORD*)(a1 + 8) + v5;
      v24 = v23 - a3;
      if (v23 < a3) {
        return 0;
      }
      if (v24 < 0x20) {
        v24 = 0;
        v26 = 0;
        *(_QWORD*)(a2 + 8) = v3 & 1 | v23 | 2;
        *(_QWORD*)(a2 + v23 + 8) |= 1uLL;
      }
      else {
        v26 = a2 + a3;
        v27 = (unsigned __int64*)(a2 + v23);
        *(_QWORD*)(a2 + 8) = a3 | v3 & 1 | 2;
        *(_QWORD*)(a2 + a3 + 8) = v24 | 1;
        v28 = v27[1] & 0xFFFFFFFFFFFFFFFELL;
        *v27 = v24;
        v27[1] = v28;
      }
      *(_QWORD*)(a1 + 8) = v24;
      *(_QWORD*)(a1 + 32) = v26;
    }
  }
  else if (a3 < 0x100 || v5 < a3 + 8 || v5 - a3 > 2 * SdkData_f72e80) {
    return 0;
  }
  return v9;
}

__int64 SdkHr_7f6b00(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  v1 = (_QWORD*)((char*)a1 + *(_QWORD*)(*a1 - 24LL));
  v2 = SdkData_e894d0 + 64;
  *v1 = SdkData_e894d0 + 24;
  v1[23] = v2;
  SdkRoutine_87cfe0(v1 + 2);
  SdkRoutine_87ce40(v1, SdkData_e894d8 + 8);
  SdkRoutine_86ee80(v1 + 23);
  return SdkRoutine_857220(v1, 336);
}

long double SdkHr_666c30(__int64 a1)
{
  *(_QWORD*)(a1 + 36) = 0;
  *(_QWORD*)(a1 + 28) = 0;
  *(_DWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 44) = 135332113;
  *(_OWORD*)(a1 + 8) = SdkData_bb3620;
  return *(long double*)&SdkData_bb3620;
}

__int64 SdkHr_e40a0(__int64 a1, _QWORD* a2, _QWORD* a3, unsigned int a4,
                    __int64 a5)
{
  return SdkRoutine_e5df0(a1 + 8, *a2, a2[1], *a3, a3[1], a4, a5, 769, 15);
}

__int64 SdkHr_681a0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3;
  __int16 v4;
  __int64 v5;
  const char* v6;
  __int16 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  double v13;
  bool v14;
  bool v15;
  __int64 v16;

  v3 = *(__int16*)(a2 + 74);
  if (v3 < 0) {
    return 0;
  }
  v4 = a3;
  if (a3 >= 4) {
    v5 = (int)a3;
    v6 = "invalid sRGB rendering intent";
  LABEL_4:
    SdkRoutine_683d0(a1, a2, "sRGB", v5, v6);
    return 0;
  }
  v8 = *(_WORD*)(a2 + 74);
  if ((v3 & 4) != 0 && a3 != *(unsigned __int16*)(a2 + 72)) {
    v5 = a3;
    v6 = "inconsistent rendering intents";
    goto LABEL_4;
  }
  if ((v3 & 0x20) != 0) {
    SdkRoutine_8574f0(a1, "duplicate sRGB information ignored");
    return 0;
  }
  else {
    if ((v3 & 2) != 0) {
      v9 = a2;
      v10 = a1;
      v11 = SdkRoutine_68660(&SdkData_bcbe90, a2 + 4, 100);
      a2 = v9;
      v12 = v11;
      a1 = v10;
      if (v12 == 0) {
        SdkRoutine_8574b0(v10, "cHRM chunk does not match sRGB", 2);
        a1 = v10;
        a2 = v9;
      }
    }
    if ((v8 & 1) != 0) {
      if (*(_DWORD*)a2 == 0 ||
          ((v13 = floor((double)*(int*)a2 * 100000.0 / 45455.0 + 0.5)) <=
                   2147483650.0
               ? (v14 = v13 < -2147483650.0)
               : (v14 = true),
           !v14 ? (v15 = (unsigned int)((int)v13 - 95000) >= 0x2711)
                : (v15 = true),
           v15)) {
        v16 = a2;
        SdkRoutine_8574b0(a1, "gamma value does not match sRGB", 2);
        a2 = v16;
      }
    }
    *(_WORD*)(a2 + 72) = v4;
    *(_QWORD*)(a2 + 4) = 0x80E80000FA00LL;
    *(_QWORD*)(a2 + 12) = 257698037790000LL;
    *(_QWORD*)(a2 + 20) = 0x177000003A98LL;
    *(_QWORD*)(a2 + 28) = 0x808400007A26LL;
    *(_QWORD*)(a2 + 36) = 0x53100000A117LL;
    *(_QWORD*)(a2 + 44) = 0x8BAE0000078DLL;
    *(_QWORD*)(a2 + 52) = 0x2E8F0001175DLL;
    *(_QWORD*)(a2 + 60) = 0x1C3300004680LL;
    *(_DWORD*)(a2 + 68) = 95053;
    *(_DWORD*)a2 = 45455;
    *(_WORD*)(a2 + 74) = v8 | 0xE7;
    return 1;
  }
}

__int64 SdkHr_61ea60(_QWORD* a1, char a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v6;
  __int64 v7;

  if ((a2 & 1) != 0) {
    v2 = 128;
    if (a1[16] == 0) {
      v2 = 352;
    }
    v3 = 72;
    if (a1[9] == 0) {
      v3 = v2;
    }
    v4 = *(_DWORD*)(*(_QWORD*)((char*)a1 + v3) + 12LL) & 0x3F;
    if (*(_DWORD*)(a1[1] + 3912LL) != 0) {
      if ((((unsigned int)(v4 - 11) < 0xC) &
           (unsigned __int8)(0xE07u >> (v4 - 11))) != 0) {
        return 12;
      }
    }
    else if ((((unsigned int)(v4 - 11) < 0xC) &
              (unsigned __int8)(0xE07u >> (v4 - 11))) != 0) {
      return 12;
    }
    if ((unsigned int)(v4 - 9) >= 2) {
      return 6;
    }
    else {
      return 9;
    }
  }
  else {
    v6 = 128;
    if (a1[16] == 0) {
      v6 = 352;
    }
    v7 = 72;
    if (a1[9] == 0) {
      v7 = v6;
    }
    return *(_DWORD*)(*(_QWORD*)((char*)a1 + v7) + 12LL) & 0x3F;
  }
}

__int64* SdkHr_4efb00(__int64** a1, unsigned int* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned int v6;
  __int64* v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64* v12;

  v3 = (__int64*)(a1 + 1);
  v2 = (__int64)a1[1];
  if (v2 != 0) {
    v6 = *a2;
    while (1) {
      while (1) {
        v7 = (__int64*)v2;
        v8 = *(_DWORD*)(v2 + 28);
        if (v6 >= v8) {
          break;
        }
        v2 = *v7;
        v3 = v7;
        if (*v7 == 0) {
          goto LABEL_9;
        }
      }
      if (v8 >= v6) {
        break;
      }
      v2 = v7[1];
      if (v2 == 0) {
        v3 = v7 + 1;
        goto LABEL_9;
      }
    }
  }
  else {
    v7 = (__int64*)(a1 + 1);
  LABEL_9:
    v9 = SdkRoutine_4c19c0(32, a1[2]);
    v10 = *a2;
    *(_QWORD*)v9 = 0;
    *(_QWORD*)(v9 + 8) = 0;
    *(_QWORD*)(v9 + 16) = v7;
    v7 = (__int64*)v9;
    v11 = v9;
    *(_DWORD*)(v9 + 28) = v10;
    *v3 = v9;
    v12 = (__int64*)**a1;
    if (v12 != nullptr) {
      *a1 = v12;
      v11 = *v3;
    }
    SdkRoutine_dc120(a1[1], v11);
    a1[3] = (__int64*)((char*)a1[3] + 1);
  }
  return v7;
}

double SdkHr_6de730(_DWORD* a1, int a2, int a3)
{
  float v3;
  float v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  double result;

  if (a2 != 1920 || a3 != 1080) {
    v3 = (float)a2;
    v4 = (float)a3;
    v5 = (int)((float)((float)((float)a3 * (float)(int)a1[9]) / 1080.0) + 0.5);
    v6 = a1[10];
    v7 = a1[11];
    a1[8] =
        (int)((float)((float)((float)a2 * (float)(int)a1[8]) / 1920.0) + 0.5);
    a1[9] = v5;
    v8 = (int)((float)((float)((float)a2 * (float)v6) / 1920.0) + 0.5);
    v9 = (int)((float)((float)((float)a3 * (float)v7) / 1080.0) + 0.5);
    v10 = a1[18];
    v11 = a1[19];
    a1[10] = v8;
    a1[11] = v9;
    v12 = (int)((float)((float)((float)a2 * (float)v10) / 1920.0) + 0.5);
    v13 = (int)((float)((float)((float)a3 * (float)v11) / 1080.0) + 0.5);
    v14 = a1[20];
    v15 = a1[21];
    a1[18] = v12;
    a1[19] = v13;
    v16 = (int)((float)((float)((float)a2 * (float)v14) / 1920.0) + 0.5);
    v17 = (int)((float)((float)((float)a3 * (float)v15) / 1080.0) + 0.5);
    v18 = a1[28];
    v19 = a1[29];
    a1[20] = v16;
    a1[21] = v17;
    v20 = (int)((float)((float)((float)a2 * (float)v18) / 1920.0) + 0.5);
    v21 = (int)((float)((float)((float)a3 * (float)v19) / 1080.0) + 0.5);
    v22 = a1[30];
    v23 = a1[31];
    a1[28] = v20;
    a1[29] = v21;
    v24 = (int)((float)((float)((float)a2 * (float)v22) / 1920.0) + 0.5);
    v25 = (int)((float)((float)((float)a3 * (float)v23) / 1080.0) + 0.5);
    v26 = a1[38];
    v27 = a1[39];
    a1[30] = v24;
    a1[31] = v25;
    v28 = (int)((float)((float)(v3 * (float)v26) / 1920.0) + 0.5);
    v29 = (int)((float)((float)(v4 * (float)v27) / 1080.0) + 0.5);
    v30 = a1[40];
    v31 = a1[41];
    a1[38] = v28;
    a1[39] = v29;
    v32 = (int)((float)((float)(v3 * (float)v30) / 1920.0) + 0.5);
    v33 = (int)((float)((float)(v4 * (float)v31) / 1080.0) + 0.5);
    v34 = a1[48];
    v35 = a1[49];
    a1[40] = v32;
    a1[41] = v33;
    v36 = (int)((float)((float)(v3 * (float)v34) / 1920.0) + 0.5);
    v37 = (int)((float)((float)(v4 * (float)v35) / 1080.0) + 0.5);
    v38 = a1[50];
    v39 = a1[51];
    a1[48] = v36;
    a1[49] = v37;
    v40 = (int)((float)((float)(v3 * (float)v38) / 1920.0) + 0.5);
    v41 = (int)((float)((float)(v4 * (float)v39) / 1080.0) + 0.5);
    v42 = a1[58];
    v43 = a1[59];
    a1[50] = v40;
    a1[51] = v41;
    v44 = (int)((float)((float)(v3 * (float)v42) / 1920.0) + 0.5);
    v45 = (int)((float)((float)(v4 * (float)v43) / 1080.0) + 0.5);
    v46 = a1[60];
    v47 = a1[61];
    a1[58] = v44;
    a1[59] = v45;
    v48 = (int)((float)((float)(v3 * (float)v46) / 1920.0) + 0.5);
    v49 = a1[68];
    a1[60] = v48;
    a1[61] = (int)((float)((float)(v4 * (float)v47) / 1080.0) + 0.5);
    v50 = (int)((float)((float)(v3 * (float)v49) / 1920.0) + 0.5);
    v51 = a1[69];
    a1[68] = v50;
    v52 = (int)((float)((float)(v4 * (float)v51) / 1080.0) + 0.5);
    v53 = a1[70];
    a1[69] = v52;
    v54 = (int)((float)((float)(v3 * (float)v53) / 1920.0) + 0.5);
    v55 = a1[71];
    a1[70] = v54;
    result = (float)((float)(v4 * (float)v55) / 1080.0) + 0.5;
    a1[71] = (int)result;
  }
  return result;
}

__int64 SdkHr_4cd2c0(__int64 result, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;

  if (a2 != nullptr) {
    v2 = (_QWORD*)result;
    SdkRoutine_858b60(result + 40);
    v4 = (_QWORD*)v2[2];
    if (v4 == v2 + 1) {
      return SdkRoutine_858b80(v2 + 5);
    }
    while (v4 + 2 != a2) {
      v4 = (_QWORD*)v4[1];
      if (v4 == v2 + 1) {
        return SdkRoutine_858b80(v2 + 5);
      }
    }
    SdkRoutine_8592b0(v4 + 2);
    v5 = (_QWORD*)v4[1];
    *(_QWORD*)(*v4 + 8LL) = v5;
    *v5 = *v4;
    v6 = v2[4];
    --v2[3];
    SdkRoutine_4c1bd0(v4, v6);
    v7 = (_QWORD*)v2[45];
    if (v7 == v2 + 44) {
      return SdkRoutine_858b80(v2 + 5);
    }
    else {
      while (1) {
        v8 = (_QWORD*)v7[1];
        if (a2 == (_QWORD*)v7[5]) {
          break;
        }
        v7 = (_QWORD*)v7[1];
        if (v8 == v2 + 44) {
          return SdkRoutine_858b80(v2 + 5);
        }
      }
      *(_QWORD*)(*v7 + 8LL) = v8;
      *v8 = *v7;
      v9 = v2[47];
      --v2[46];
      SdkRoutine_4c1bd0(v7, v9);
      return SdkRoutine_858b80(v2 + 5);
    }
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_7e5110(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;

  v6 = SdkRoutine_87c8f0(32);
  SdkRoutine_87cc20(v6, a1, a2, a3);
  v7 = SdkRoutine_87c910(v6, SdkData_e89320, SdkData_e893e8);
  SdkRoutine_87c920(v6);
  SdkRoutine_87c790(v7);
  __udf(0);
}

__int64 SdkHr_efeb0(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4, __int64 a5,
                    __int64 a6, unsigned int a7)
{
  return SdkRoutine_f0520(a1 + 8, a2, *a3, a3[1], *a4, a4[1], a5, a6, a7, 20);
}

__int64 SdkHr_57f7e0(__int64 a1)
{
  __int64 result;

  result = SdkRoutine_859ab0(a1 + 40);
  if ((result & 1) != 0) {
    SdkRoutine_e3830(a1 + 8);
    SdkRoutine_858d40(&SdkData_f53ed8);
    SdkRoutine_859af0(SdkData_f53ed0, a1);
    return SdkRoutine_858d50(&SdkData_f53ed8);
  }
  return result;
}

_QWORD* SdkHr_234f00(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_f17e98);
    v2 = SdkRoutine_859a90(SdkData_f17e90, 32);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_f17e98);
    if (v2 != 0) {
      *(_DWORD*)(v2 + 24) = 1;
      *(_QWORD*)v2 = SdkData_e5df00;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 16) = &SdkData_e5dfe0;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

unsigned __int16* SdkHr_5f1150(unsigned __int16* result, _DWORD* a2,
                               __int64* a3)
{
  __int64 v3;
  int v4;
  unsigned __int16 v6;

  v3 = *a3;
  if ((unsigned __int64)*a3 > 1) {
    v4 = *result;
    *a3 = v3 - 2;
    if ((unsigned __int64)(v3 - 2) >= 2 && (v4 & 0xFC00) == 55296) {
      v6 = result[1];
      *a3 = v3 - 4;
      *a2 = (v6 & 0x3FF | ((v4 & 0x3FF) << 10)) + 0x10000;
      result += 2;
    }
    else {
      *a2 = v4;
      ++result;
    }
  }
  else {
    *a2 = 0;
    *a3 = 0;
  }
  return result;
}

__int64 SdkHr_643550()
{
  __int64 result;
  unsigned __int64 v1;
  char v2;
  char v3;
  char v4;
  char v5;
  bool v6;
  char v7;
  _QWORD v8[2];
  __int16 v9;
  int v10;

  v10 = 0;
  result = SdkRoutine_875bc0("NVRM_GPU_NVGPU_NO_ZBC", &v10);
  if ((_DWORD)result != 0) {
    v9 = 0;
    v8[0] = 0;
    v8[1] = 0;
    v1 = SdkRoutine_628160("NVRM_GPU_NVGPU_NO_ZBC", 21, 0, 0);
    SdkRoutine_856130(v8, "NVRM_GPU_", 9);
    HIBYTE(v9) = 0;
    v2 = SdkData_c7798b
        [v1 / 0xF04 -
         62 * ((v1 / 0xF04 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    v3 = SdkData_c7798b[v1 % 0x3E];
    v4 = SdkData_c7798b[v1 / 0xE17810 -
                        62 * ((v1 / 0xE17810 *
                               (unsigned __int128)0x421084210842109uLL) >>
                              64)];
    BYTE2(v8[1]) = SdkData_c7798b
        [v1 / 0x3E -
         62 * ((unsigned __int64)((v1 / 0x3E *
                                   (unsigned __int128)0x842108421084211uLL) >>
                                  64) >>
               1)];
    BYTE3(v8[1]) = v2;
    v5 = SdkData_c7798b
        [v1 / 0x3A2F8 -
         62 * ((v1 / 0x3A2F8 * (unsigned __int128)0x421084210842109uLL) >> 64)];
    BYTE1(v8[1]) = v3;
    BYTE5(v8[1]) = v4;
    BYTE4(v8[1]) = v5;
    BYTE6(v8[1]) = SdkData_c7798b
        [v1 / 0x369B13E0 -
         62LL * (unsigned int)((v1 / 0x369B13E0 *
                                (unsigned __int128)0x421084210842109uLL) >>
                               64)];
    HIBYTE(v8[1]) = SdkData_c7798b
        [v1 / 0xD398ED040LL -
         62 * ((unsigned int)((554189329 * (v1 / 0xD398ED040LL)) >> 32) >> 3)];
    LOBYTE(v9) = SdkData_c7798b[(
        unsigned int)(v1 / 0x333F0966F80LL -
                      62 * ((69273667 * (v1 / 0x333F0966F80LL)) >> 32))];
    result = SdkRoutine_875bc0(v8, &v10);
    v6 = (_DWORD)result != 0 || v10 == 0;
  }
  else {
    v6 = v10 == 0;
  }
  v7 = !v6;
  *SdkData_e89a10 = v7;
  return result;
}

_QWORD* SdkHr_66c760(__int64 a1, float a2, float a3, float a4, float a5,
                     float a6, float a7, float a8, float a9, __int64 a10,
                     __int64 a11, __int64 a12, __int64 a13, __int64 a14,
                     __int64 a15, __int64 a16, int a17, int a18)
{
  *(float*)(a1 + 76) = a3;
  *(float*)(a1 + 80) = a4;
  *(float*)(a1 + 84) = a5;
  *(float*)(a1 + 88) = a6;
  *(float*)(a1 + 92) = a7;
  *(float*)(a1 + 96) = a8;
  *(float*)(a1 + 72) = a2;
  *(float*)(a1 + 100) = a9;
  *(_DWORD*)(a1 + 104) = a17;
  *(_DWORD*)(a1 + 108) = a18;
  return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                PSEUDO_X8, _QWORD, __int64, __int64))(
                                **(_QWORD**)SdkData_e89c78 + 48LL))(
                                (void*)*(_QWORD**)SdkData_e89c78,
                                *(_QWORD*)SdkData_e89c78, a1, a1 + 72));
}

__int64 SdkHr_5fc320(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, _BYTE* a8)
{
  *a8 = 1;
  if (a3 == -1072151538) {
    *(_DWORD*)(a4 + 4) = SdkRoutine_86a7c0(*(unsigned int*)(a4 + 4));
  }
  return 0;
}

__int64 SdkHr_666f50(__int64 result, int* a2, int* a3)
{
  *a2 = (int)(*(_DWORD*)(result + 52) << 12) >> 28;
  *a3 = (int)(*(_DWORD*)(result + 52) << 8) >> 28;
  return result;
}

__int64 SdkHr_4d3bc0(__int64 a1, __int64 a2)
{
  __int64 v3;

  v3 = SdkRoutine_86dc70(a2);
  return SdkRoutine_86dc80(a1, v3);
}

__int64 SdkHr_6308c0(__int64 result, __int64 a2, _QWORD* a3, __int64 a4,
                     __int64 a5, _DWORD* a6, __int64 a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v13;
  __int64 v15;
  unsigned int v16;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  bool v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  _DWORD* v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  __int64 v84;
  int v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  unsigned int v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  unsigned __int64* v108;
  unsigned __int64 v109;
  unsigned int v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  _QWORD* v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  unsigned int v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  unsigned __int64* v132;
  unsigned __int64 v133;
  unsigned int v134;
  int v135;
  __int64 v136;
  int v137;
  int v138;
  unsigned __int64 v139;
  __int64 v140;
  int v141;
  int v142;
  int v143;
  __int64 v144;
  int v145;
  __int64 v146;
  unsigned int v147;
  int v148;
  char v149;
  __int64 v150;
  char v151;
  __int64 v152;
  char v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  int v157;
  __int64 v158;
  int v159;
  int v160;
  __int64* v161;
  __int64 v162;
  int v163;
  int v164;
  int v165;
  int v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  char v172;
  char v173;
  __int64 v174;
  __int64* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;

  if (*(_DWORD*)result != 0) {
    return result;
  }
  v180 = v8;
  v13 = result;
  v15 = *(_QWORD*)(a3[1] + 48LL);
  v16 = *(_DWORD*)(v15 + 4);
  *(_QWORD*)(a4 + 248) = v15;
  if (v16 > 0x20 || *(_DWORD*)(v15 + 8) >= 0x21u) {
    *(_BYTE*)(result + 4) = 1;
    *(_DWORD*)result = 2;
  }
  *(_QWORD*)(a4 + 256) = *(unsigned int*)(a5 + 56);
  *(_QWORD*)(a4 + 288) = *(unsigned int*)(a5 + 136);
  SdkRoutine_62fe00(result, a2, a3, a4);
  v18 =
      SdkRoutine_6280e0(a3 + 41, *(unsigned int*)(*(_QWORD*)(a4 + 248) + 8LL));
  *(_BYTE*)(v13 + 4) = 1;
  v19 = *(_DWORD*)v13;
  if (v18 != 0) {
    if (v19 == 0) {
      *(_DWORD*)v13 = v18;
    }
  }
  else if (v19 == 0) {
    v31 = *(_QWORD*)(a4 + 248);
    v32 = *(_DWORD*)(v31 + 8);
    if (v32 != 0) {
      v33 = a3[41];
      if (v32 == 1) {
        v34 = 0;
      }
      else {
        v45 = (__int64*)(v33 + 8);
        v34 = 0;
        do {
          v46 = 1LL << v34;
          v47 = 0;
          if (v34 >= 0x40) {
            v46 = 0;
          }
          if ((v46 & ~*(_QWORD*)(a4 + 256)) == 0) {
            if ((unsigned int)(*(_DWORD*)(v31 + 36) - 1) >= 0x40) {
              v47 = -1;
            }
            else {
              v47 = (1LL << (*(_BYTE*)(v31 + 36) - 1)) |
                    ~(-1LL << (*(_BYTE*)(v31 + 36) - 1));
            }
          }
          *(v45 - 1) = v47;
          v48 = 2LL << v34;
          v49 = 0;
          if (v34 >= 0x40) {
            v48 = 0;
          }
          if ((v48 & ~*(_QWORD*)(a4 + 256)) == 0) {
            v49 = (1LL << (*(_BYTE*)(v31 + 36) - 1)) |
                  ~(-1LL << (*(_BYTE*)(v31 + 36) - 1));
            if ((unsigned int)(*(_DWORD*)(v31 + 36) - 1) >= 0x40) {
              v49 = -1;
            }
          }
          *v45 = v49;
          v45 += 2;
          v34 += 2LL;
        } while ((v32 & 0xFFFFFFFE) != v34);
      }
      if ((v32 & 1) != 0) {
        v35 = 0;
        v36 = 1LL << v34;
        if (v34 >= 0x40) {
          v36 = 0;
        }
        if ((v36 & ~*(_QWORD*)(a4 + 256)) == 0) {
          v37 = *(_DWORD*)(v31 + 36) - 1;
          v35 = (1LL << v37) | ~(-1LL << v37);
          if (v37 >= 0x40) {
            v35 = -1;
          }
        }
        *(_QWORD*)(v33 + 8 * v34) = v35;
      }
    }
  }
  v20 =
      SdkRoutine_6280e0(a3 + 44, *(unsigned int*)(*(_QWORD*)(a4 + 248) + 8LL));
  *(_BYTE*)(v13 + 4) = 1;
  v21 = *(_DWORD*)v13;
  if (v20 != 0) {
    if (v21 == 0) {
      *(_DWORD*)v13 = v20;
    }
  }
  else if (v21 == 0) {
    v38 = *(_QWORD*)(a4 + 248);
    v39 = *(_DWORD*)(v38 + 64);
    if (v39 != 0) {
      v40 = *(_DWORD*)(v38 + 8);
      if (v40 != 0) {
        v41 = v40 & 3;
        if (v39 >= 0x41) {
          v42 = -1;
        }
        else {
          v42 = (1LL << ((unsigned __int8)v39 - 1)) |
                ~(-1LL << ((unsigned __int8)v39 - 1));
        }
        v43 = a3[44];
        if (v40 >= 4) {
          v50 = v40 & 0xFFFFFFFC;
          v51 = (__int64*)(v43 + 16);
          v44 = 0;
          do {
            v52 = 1LL << v44;
            v53 = v44 >= 0x40;
            v54 = 2LL << v44;
            v55 = 4LL << v44;
            v56 = 8LL << v44;
            v44 += 4LL;
            if (v53) {
              v52 = 0;
            }
            if (v53) {
              v54 = 0;
            }
            if (v53) {
              v55 = 0;
            }
            if (v53) {
              v56 = 0;
            }
            if ((v52 & ~*(_QWORD*)(a4 + 256)) != 0) {
              v57 = 0;
            }
            else {
              v57 = v42;
            }
            *(v51 - 2) = v57;
            if ((v54 & ~*(_QWORD*)(a4 + 256)) != 0) {
              v58 = 0;
            }
            else {
              v58 = v42;
            }
            *(v51 - 1) = v58;
            if ((v55 & ~*(_QWORD*)(a4 + 256)) != 0) {
              v59 = 0;
            }
            else {
              v59 = v42;
            }
            *v51 = v59;
            if ((v56 & ~*(_QWORD*)(a4 + 256)) != 0) {
              v60 = 0;
            }
            else {
              v60 = v42;
            }
            v51[1] = v60;
            v51 += 4;
          } while (v50 != v44);
        }
        else {
          v44 = 0;
        }
        for (; v41 != 0; ++v44) {
          v61 = 1LL << v44;
          if (v44 >= 0x40) {
            v61 = 0;
          }
          if ((v61 & ~*(_QWORD*)(a4 + 256)) != 0) {
            v62 = 0;
          }
          else {
            v62 = v42;
          }
          --v41;
          *(_QWORD*)(v43 + 8 * v44) = v62;
        }
      }
    }
  }
  v22 =
      SdkRoutine_6280e0(a3 + 47, *(unsigned int*)(*(_QWORD*)(a4 + 248) + 4LL));
  *(_BYTE*)(v13 + 4) = 1;
  v23 = *(_DWORD*)v13;
  if (v22 != 0) {
    if (v23 == 0) {
      *(_DWORD*)v13 = v22;
    }
  }
  else if (v23 == 0 && (*(_BYTE*)(a3[11] + 169LL) & 1) == 0) {
    v24 = *(_QWORD*)(a4 + 248);
    v25 = *(_DWORD*)(v24 + 68);
    if (v25 != 0) {
      v26 = *(_DWORD*)(v24 + 4);
      if (v26 != 0) {
        v27 = v26 & 3;
        if (v25 >= 0x41) {
          v28 = -1;
        }
        else {
          v28 = (1LL << ((unsigned __int8)v25 - 1)) |
                ~(-1LL << ((unsigned __int8)v25 - 1));
        }
        v29 = a3[47];
        if (v26 >= 4) {
          v63 = v26 & 0xFFFFFFFC;
          v64 = (__int64*)(v29 + 16);
          v30 = 0;
          do {
            v65 = 1LL << v30;
            v66 = v30 >= 0x40;
            v67 = 2LL << v30;
            v68 = 4LL << v30;
            v69 = 8LL << v30;
            v30 += 4LL;
            if (v66) {
              v65 = 0;
            }
            if (v66) {
              v67 = 0;
            }
            if (v66) {
              v68 = 0;
            }
            if (v66) {
              v69 = 0;
            }
            if ((v65 & ~*(_QWORD*)(a4 + 288)) != 0) {
              v70 = 0;
            }
            else {
              v70 = v28;
            }
            *(v64 - 2) = v70;
            if ((v67 & ~*(_QWORD*)(a4 + 288)) != 0) {
              v71 = 0;
            }
            else {
              v71 = v28;
            }
            *(v64 - 1) = v71;
            if ((v68 & ~*(_QWORD*)(a4 + 288)) != 0) {
              v72 = 0;
            }
            else {
              v72 = v28;
            }
            *v64 = v72;
            if ((v69 & ~*(_QWORD*)(a4 + 288)) != 0) {
              v73 = 0;
            }
            else {
              v73 = v28;
            }
            v64[1] = v73;
            v64 += 4;
          } while (v63 != v30);
        }
        else {
          v30 = 0;
        }
        for (; v27 != 0; ++v30) {
          v74 = 1LL << v30;
          if (v30 >= 0x40) {
            v74 = 0;
          }
          if ((v74 & ~*(_QWORD*)(a4 + 288)) != 0) {
            v75 = 0;
          }
          else {
            v75 = v28;
          }
          --v27;
          *(_QWORD*)(v29 + 8 * v30) = v75;
        }
      }
    }
  }
  SdkRoutine_630140(v13, a3, a4);
  v76 =
      SdkRoutine_6280e0(a3 + 53, *(unsigned int*)(*(_QWORD*)(a4 + 248) + 4LL));
  *(_BYTE*)(v13 + 4) = 1;
  v77 = *(_DWORD*)v13;
  if (v76 != 0) {
    if (v77 == 0) {
      *(_DWORD*)v13 = v76;
    }
  }
  else if (v77 == 0) {
    v84 = *(_QWORD*)(a4 + 248);
    v85 = *(_DWORD*)(v84 + 4);
    if (v85 != 0) {
      v86 = a3[53];
      if (v85 == 1) {
        v87 = 0;
      }
      else {
        v175 = (__int64*)(v86 + 8);
        v87 = 0;
        do {
          v176 = 1LL << v87;
          v177 = 0;
          if (v87 >= 0x40) {
            v176 = 0;
          }
          if ((v176 & ~*(_QWORD*)(a4 + 288)) == 0) {
            if ((unsigned int)(*(_DWORD*)(v84 + 60) - 1) >= 0x40) {
              v177 = -1;
            }
            else {
              v177 = (1LL << (*(_BYTE*)(v84 + 60) - 1)) |
                     ~(-1LL << (*(_BYTE*)(v84 + 60) - 1));
            }
          }
          *(v175 - 1) = v177;
          v178 = 2LL << v87;
          v179 = 0;
          if (v87 >= 0x40) {
            v178 = 0;
          }
          if ((v178 & ~*(_QWORD*)(a4 + 288)) == 0) {
            v179 = (1LL << (*(_BYTE*)(v84 + 60) - 1)) |
                   ~(-1LL << (*(_BYTE*)(v84 + 60) - 1));
            if ((unsigned int)(*(_DWORD*)(v84 + 60) - 1) >= 0x40) {
              v179 = -1;
            }
          }
          *v175 = v179;
          v175 += 2;
          v87 += 2LL;
        } while ((v85 & 0xFFFFFFFE) != v87);
      }
      if ((v85 & 1) != 0) {
        v88 = 0;
        v89 = 1LL << v87;
        if (v87 >= 0x40) {
          v89 = 0;
        }
        if ((v89 & ~*(_QWORD*)(a4 + 288)) == 0) {
          v90 = *(_DWORD*)(v84 + 60) - 1;
          v88 = (1LL << v90) | ~(-1LL << v90);
          if (v90 >= 0x40) {
            v88 = -1;
          }
        }
        *(_QWORD*)(v86 + 8 * v87) = v88;
      }
    }
  }
  SdkRoutine_6302e0(v13, a3, a4);
  if (*(_DWORD*)v13 == 0) {
    v78 = *(_DWORD**)(a4 + 248);
    v79 = v78[1];
    if (v79 != 0) {
      v80 = a3[53];
      v81 = v79 & 7;
      if (v79 >= 8) {
        v91 = (_QWORD*)(v80 + 32);
        v92 = 0;
        v83 = 0;
        v93 = -(__int64)(v79 & 0xFFFFFFF8);
        do {
          v92 -= 8;
          v94 = *(v91 - 3) - ((*(v91 - 3) >> 1) & 0x5555555555555555LL);
          v95 = *(v91 - 4) - ((*(v91 - 4) >> 1) & 0x5555555555555555LL);
          v96 = *(v91 - 2) - ((*(v91 - 2) >> 1) & 0x5555555555555555LL);
          v97 = (v96 & 0x3333333333333333LL) +
                ((v96 >> 2) & 0x3333333333333333LL);
          v98 = *(v91 - 1) - ((*(v91 - 1) >> 1) & 0x5555555555555555LL);
          v99 = *v91 - ((*v91 >> 1) & 0x5555555555555555LL);
          v100 = v83 +
                 ((unsigned int)((0x101010101010101LL *
                                  (((v95 & 0x3333333333333333LL) +
                                    ((v95 >> 2) & 0x3333333333333333LL) +
                                    (((v95 & 0x3333333333333333LL) +
                                      ((v95 >> 2) & 0x3333333333333333LL)) >>
                                     4)) &
                                   0xF0F0F0F0F0F0F0FLL)) >>
                                 32) >>
                  24) +
                 ((unsigned int)((0x101010101010101LL *
                                  (((v94 & 0x3333333333333333LL) +
                                    ((v94 >> 2) & 0x3333333333333333LL) +
                                    (((v94 & 0x3333333333333333LL) +
                                      ((v94 >> 2) & 0x3333333333333333LL)) >>
                                     4)) &
                                   0xF0F0F0F0F0F0F0FLL)) >>
                                 32) >>
                  24) +
                 ((unsigned int)((0x101010101010101LL *
                                  ((v97 + (v97 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                                 32) >>
                  24);
          LODWORD(v94) =
              ((unsigned int)((0x101010101010101LL *
                               (((v98 & 0x3333333333333333LL) +
                                 ((v98 >> 2) & 0x3333333333333333LL) +
                                 (((v98 & 0x3333333333333333LL) +
                                   ((v98 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24) +
              ((unsigned int)((0x101010101010101LL *
                               (((v99 & 0x3333333333333333LL) +
                                 ((v99 >> 2) & 0x3333333333333333LL) +
                                 (((v99 & 0x3333333333333333LL) +
                                   ((v99 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24);
          v101 = ((v91[1] - ((v91[1] >> 1) & 0x5555555555555555LL)) &
                  0x3333333333333333LL) +
                 (((v91[1] - ((v91[1] >> 1) & 0x5555555555555555uLL)) >> 2) &
                  0x3333333333333333LL);
          v103 = v91[2];
          v102 = v91[3];
          v91 += 8;
          v104 = v103 - ((v103 >> 1) & 0x5555555555555555LL);
          v105 = v104 & 0x3333333333333333LL;
          LODWORD(v101) =
              v94 +
              ((unsigned int)((0x101010101010101LL *
                               ((v101 + (v101 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24);
          v106 = v104 >> 2;
          v107 = v102 - ((v102 >> 1) & 0x5555555555555555LL);
          v83 = v100 + v101 +
                ((unsigned int)((0x101010101010101LL *
                                 ((v105 + (v106 & 0x3333333333333333LL) +
                                   ((v105 + (v106 & 0x3333333333333333LL)) >>
                                    4)) &
                                  0xF0F0F0F0F0F0F0FLL)) >>
                                32) >>
                 24) +
                ((unsigned int)((0x101010101010101LL *
                                 (((v107 & 0x3333333333333333LL) +
                                   ((v107 >> 2) & 0x3333333333333333LL) +
                                   (((v107 & 0x3333333333333333LL) +
                                     ((v107 >> 2) & 0x3333333333333333LL)) >>
                                    4)) &
                                  0xF0F0F0F0F0F0F0FLL)) >>
                                32) >>
                 24);
        } while (v93 != v92);
        v82 = -v92;
      }
      else {
        v82 = 0;
        v83 = 0;
      }
      if (v81 != 0) {
        v108 = (unsigned __int64*)(v80 + 8 * v82);
        do {
          v109 = *v108++;
          --v81;
          v83 +=
              (unsigned int)((0x101010101010101LL *
                              ((((v109 - ((v109 >> 1) & 0x5555555555555555LL)) &
                                 0x3333333333333333LL) +
                                (((v109 -
                                   ((v109 >> 1) & 0x5555555555555555LL)) >>
                                  2) &
                                 0x3333333333333333LL) +
                                ((((v109 -
                                    ((v109 >> 1) & 0x5555555555555555LL)) &
                                   0x3333333333333333LL) +
                                  (((v109 -
                                     ((v109 >> 1) & 0x5555555555555555LL)) >>
                                    2) &
                                   0x3333333333333333LL)) >>
                                 4)) &
                               0xF0F0F0F0F0F0F0FLL)) >>
                             32) >>
              24;
        } while (v81 != 0);
      }
    }
    else {
      v83 = 0;
    }
    v110 = v78[2];
    *(_DWORD*)(a4 + 576) = v83;
    if (v110 != 0) {
      v111 = a3[38];
      v112 = v110 & 7;
      if (v110 >= 8) {
        v115 = (_QWORD*)(v111 + 32);
        v116 = 0;
        v114 = 0;
        v117 = -(__int64)(v110 & 0xFFFFFFF8);
        do {
          v116 -= 8;
          v118 = *(v115 - 3) - ((*(v115 - 3) >> 1) & 0x5555555555555555LL);
          v119 = *(v115 - 4) - ((*(v115 - 4) >> 1) & 0x5555555555555555LL);
          v120 = *(v115 - 2) - ((*(v115 - 2) >> 1) & 0x5555555555555555LL);
          v121 = (v120 & 0x3333333333333333LL) +
                 ((v120 >> 2) & 0x3333333333333333LL);
          v122 = *(v115 - 1) - ((*(v115 - 1) >> 1) & 0x5555555555555555LL);
          v123 = *v115 - ((*v115 >> 1) & 0x5555555555555555LL);
          v124 =
              v114 +
              ((unsigned int)((0x101010101010101LL *
                               (((v119 & 0x3333333333333333LL) +
                                 ((v119 >> 2) & 0x3333333333333333LL) +
                                 (((v119 & 0x3333333333333333LL) +
                                   ((v119 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24) +
              ((unsigned int)((0x101010101010101LL *
                               (((v118 & 0x3333333333333333LL) +
                                 ((v118 >> 2) & 0x3333333333333333LL) +
                                 (((v118 & 0x3333333333333333LL) +
                                   ((v118 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24) +
              ((unsigned int)((0x101010101010101LL *
                               ((v121 + (v121 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24);
          LODWORD(v118) =
              ((unsigned int)((0x101010101010101LL *
                               (((v122 & 0x3333333333333333LL) +
                                 ((v122 >> 2) & 0x3333333333333333LL) +
                                 (((v122 & 0x3333333333333333LL) +
                                   ((v122 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24) +
              ((unsigned int)((0x101010101010101LL *
                               (((v123 & 0x3333333333333333LL) +
                                 ((v123 >> 2) & 0x3333333333333333LL) +
                                 (((v123 & 0x3333333333333333LL) +
                                   ((v123 >> 2) & 0x3333333333333333LL)) >>
                                  4)) &
                                0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24);
          v125 = ((v115[1] - ((v115[1] >> 1) & 0x5555555555555555LL)) &
                  0x3333333333333333LL) +
                 (((v115[1] - ((v115[1] >> 1) & 0x5555555555555555uLL)) >> 2) &
                  0x3333333333333333LL);
          v127 = v115[2];
          v126 = v115[3];
          v115 += 8;
          v128 = v127 - ((v127 >> 1) & 0x5555555555555555LL);
          v129 = v128 & 0x3333333333333333LL;
          LODWORD(v125) =
              v118 +
              ((unsigned int)((0x101010101010101LL *
                               ((v125 + (v125 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24);
          v130 = v128 >> 2;
          v131 = v126 - ((v126 >> 1) & 0x5555555555555555LL);
          v114 = v124 + v125 +
                 ((unsigned int)((0x101010101010101LL *
                                  ((v129 + (v130 & 0x3333333333333333LL) +
                                    ((v129 + (v130 & 0x3333333333333333LL)) >>
                                     4)) &
                                   0xF0F0F0F0F0F0F0FLL)) >>
                                 32) >>
                  24) +
                 ((unsigned int)((0x101010101010101LL *
                                  (((v131 & 0x3333333333333333LL) +
                                    ((v131 >> 2) & 0x3333333333333333LL) +
                                    (((v131 & 0x3333333333333333LL) +
                                      ((v131 >> 2) & 0x3333333333333333LL)) >>
                                     4)) &
                                   0xF0F0F0F0F0F0F0FLL)) >>
                                 32) >>
                  24);
        } while (v117 != v116);
        v113 = -v116;
      }
      else {
        v113 = 0;
        v114 = 0;
      }
      if (v112 != 0) {
        v132 = (unsigned __int64*)(v111 + 8 * v113);
        do {
          v133 = *v132++;
          --v112;
          v114 +=
              (unsigned int)((0x101010101010101LL *
                              ((((v133 - ((v133 >> 1) & 0x5555555555555555LL)) &
                                 0x3333333333333333LL) +
                                (((v133 -
                                   ((v133 >> 1) & 0x5555555555555555LL)) >>
                                  2) &
                                 0x3333333333333333LL) +
                                ((((v133 -
                                    ((v133 >> 1) & 0x5555555555555555LL)) &
                                   0x3333333333333333LL) +
                                  (((v133 -
                                     ((v133 >> 1) & 0x5555555555555555LL)) >>
                                    2) &
                                   0x3333333333333333LL)) >>
                                 4)) &
                               0xF0F0F0F0F0F0F0FLL)) >>
                             32) >>
              24;
        } while (v112 != 0);
      }
    }
    else {
      v114 = 0;
    }
    v134 = v78[14] * v114;
    *(_DWORD*)(a4 + 528) = v134;
    if (v134 <= 0x80) {
      if (*((_DWORD*)a3 + 17) < 0x13u) {
        goto LABEL_155;
      }
      v135 = SdkRoutine_630440(a2, a3, a4, a5, a6, a7);
      *(_BYTE*)(v13 + 4) = 1;
      if (v135 == 0 || *(_DWORD*)v13 != 0) {
        goto LABEL_155;
      }
    }
    else {
      v135 = 2;
      *(_BYTE*)(v13 + 4) = 1;
    }
    *(_DWORD*)v13 = v135;
  }
LABEL_155:
  if (a3[60] != 0) {
    v136 = a3[59];
  }
  else {
    v136 = 0;
  }
  *(_QWORD*)(a4 + 568) = v136;
  SdkRoutine_630700(v13, a3);
  v137 = a6[34];
  if (v137 == 0) {
    if (*(_DWORD*)(a5 + 36) != 32) {
      *(_DWORD*)(a4 + 440) = 0;
      goto LABEL_162;
    }
    v137 = 1;
  }
  *(_DWORD*)(a4 + 440) = v137;
LABEL_162:
  *(_DWORD*)(a4 + 444) = a6[35];
  v138 = *(_DWORD*)(a3[2] + 144LL);
  *(_QWORD*)(a4 + 448) = 0;
  *(_DWORD*)(a4 + 224) = v138;
  v139 = *(_QWORD*)(a5 + 16);
  if (HIDWORD(v139) != 0) {
    if (*(_DWORD*)v13 == 0) {
      *(_DWORD*)v13 = 11;
    }
  }
  else {
    *(_DWORD*)(a4 + 344) = v139;
  }
  v140 = a3[1];
  *(_BYTE*)(a4 + 848) = 0;
  *(_DWORD*)(a4 + 852) = 0;
  *(_DWORD*)(a4 + 348) = *(_DWORD*)(v140 + 88);
  *(_BYTE*)(v13 + 4) = 1;
  *(_DWORD*)(a4 + 352) = 4096;
  LODWORD(v140) = *((_DWORD*)a3 + 34);
  *(_DWORD*)(a4 + 356) = *((_DWORD*)a3 + 33);
  *(_DWORD*)(a4 + 880) = v140;
  if (*((_BYTE*)a3 + 160) != 0) {
    v141 = *(_DWORD*)(a5 + 44);
  }
  else {
    v141 = 0;
  }
  *(_DWORD*)(a4 + 376) = v141;
  v142 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 96LL))(*a3);
  v143 = *(_DWORD*)(a4 + 376);
  *(_DWORD*)(a4 + 384) = v142;
  if (v143 != 0) {
    *(_DWORD*)(a4 + 380) =
        (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 104LL))(*a3);
  }
  v144 = *a3;
  *(_BYTE*)(a4 + 176) = 0;
  v145 = (*(__int64 (**)(__int64))(*(_QWORD*)v144 + 120LL))(v144);
  v146 = a3[1];
  *(_DWORD*)(a4 + 388) = v145;
  v147 = *(_DWORD*)(v146 + 124);
  if (v147 == 0) {
    v147 = (*(_DWORD*)(v146 + 16) << 23) & 0x80000000 |
           ((unsigned __int8)*(_DWORD*)(v146 + 16) << 20) & 0xFFFFFFF |
           ((unsigned __int8)*(_DWORD*)(a4 + 216) >> 4 << 16) |
           ((*(_DWORD*)(a4 + 216) & 7) << 28) | 0x3D7;
  }
  v148 = *(unsigned __int8*)(v146 + 169);
  *(_DWORD*)(a4 + 464) = v147;
  *(_QWORD*)(a4 + 480) = 0;
  v149 = 0;
  v150 = a3[12];
  *(_DWORD*)(a4 + 220) = v148 ^ 1;
  LOBYTE(v148) = *((_DWORD*)a3 + 13) > 0xDu;
  *(_BYTE*)(a4 + 84) = v148;
  *(_BYTE*)(a4 + 85) = v148;
  v151 = SdkData_10406d2;
  *(_BYTE*)(a4 + 163) = (SdkData_10406d2 ^ 1) & ((v150 & 0x100000) != 0);
  if ((v150 & 0x100000) != 0 && (v151 & 1) == 0) {
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 32LL))(a3[4]) & 1) != 0) {
      v149 = 0;
    }
    else {
      v149 = SdkData_10406d3 ^ 1;
    }
  }
  v152 = a3[4];
  *(_BYTE*)(a4 + 164) = v149 & 1;
  v153 = (*(__int64 (**)(__int64))(*(_QWORD*)v152 + 40LL))(v152) & 1;
  v154 = a3[1];
  v155 = *(unsigned int*)(a4 + 440);
  v156 = (unsigned int)a6[36];
  *(_BYTE*)(a4 + 165) = v153;
  v157 = *((_DWORD*)a3 + 24);
  *(_BYTE*)(a4 + 40) = 1;
  *(_BYTE*)(a4 + 39) = (v157 & 0x800000) != 0;
  v159 = SdkRoutine_627cd0(v154, v155, a4 + 444, a4 + 464, v156, a6 + 37, a4,
                           v158, v7, v180);
  *(_BYTE*)(v13 + 4) = 1;
  if (v159 != 0 && *(_DWORD*)v13 == 0) {
    *(_DWORD*)v13 = v159;
  }
  v160 = *(_DWORD*)(a5 + 64);
  *(_DWORD*)(a4 + 532) = *(_DWORD*)(a5 + 60);
  v161 = (__int64*)*a3;
  v162 = a3[1];
  *(_DWORD*)(a4 + 536) = v160;
  v163 = *(_DWORD*)(v162 + 96);
  *(_DWORD*)(a4 + 544) = *(_DWORD*)(v162 + 92);
  v164 = *((_DWORD*)a3 + 37);
  *(_DWORD*)(a4 + 540) = v163;
  *(_DWORD*)(a4 + 548) = v164;
  v165 = *(_DWORD*)(v162 + 112);
  *(_DWORD*)(a4 + 744) = *(_DWORD*)(v162 + 116);
  v166 = *(_DWORD*)(v162 + 120);
  v167 = *(_QWORD*)(v162 + 128);
  *(_DWORD*)(a4 + 556) = v165;
  *(_QWORD*)(a4 + 752) = v167;
  v168 = *v161;
  *(_DWORD*)(a4 + 748) = v166;
  *(_DWORD*)(a4 + 560) = (*(__int64 (**)(__int64*))(v168 + 184))(v161);
  *(_BYTE*)(a4 + 564) =
      (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 192LL))(*a3) & 1;
  SdkRoutine_62f120(a4);
  v169 = *a3;
  *(_BYTE*)(a4 + 840) =
      ((a3[12] & 0x2000000000LL) != 0) & (*SdkData_e89a28 ^ 1);
  v170 = (*(__int64 (**)(__int64))(*(_QWORD*)v169 + 48LL))(v169);
  v171 = a3[11];
  *(_QWORD*)(a4 + 184) = v170;
  if (*(_BYTE*)(v171 + 168) == 1) {
    v172 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 48LL))(a3[4]);
  }
  else {
    v172 = 0;
  }
  *(_WORD*)(a4 + 842) = 0;
  v173 = v172 & 1;
  v174 = a3[3];
  *(_BYTE*)(a4 + 166) = v173;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v174 + 320LL))(v174);
  *(_BYTE*)(a4 + 167) = result & 1;
  return result;
}

void __attribute__((noreturn)) SdkHr_7f780c(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  _QWORD* v10;
  __int64 v11;

  SdkRoutine_86ee60(&a10);
  *v10 = v11;
  SdkRoutine_86ee60(v10 + 1);
  SdkRoutine_87c790(a1);
  __udf(0);
}

__int64 SdkHr_635560(__int64 a1)
{
  int v3;

  if (*(_DWORD*)(a1 + 24) != -1) {
    return 8;
  }
  v3 = SdkRoutine_875e00(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 128LL));
  *(_DWORD*)(a1 + 24) = v3;
  if (v3 == -1) {
    return 196625;
  }
  else {
    return 2;
  }
}

__int64 SdkHr_66cf80(__int64 result)
{
  if (SdkData_1042258 != nullptr) {
    return SdkData_1042258(result, *(_QWORD*)(result + 8));
  }
  return result;
}

__int64 SdkHr_57e5a0(__int64 a1, _QWORD* a2, __int64 a3, _QWORD* a4)
{
  return SdkRoutine_57efe0(a1 + 8, *a2, 24LL * a2[1], a3, *a4, 24LL * a4[1],
                           1000);
}

__int64 SdkHr_a7480(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3;
  __int64 v4;

  v3 = *(_DWORD*)(a3 + 28);
  if ((*(_BYTE*)(a2 + 1) & 8) != 0) {
    if ((v3 & 0x80000000) == 0 ||
        (*(_DWORD*)(a3 + 28) = v3 + 16, v3 >= 0xFFFFFFF1)) {
      v4 = ((*(_QWORD*)a3 + 15LL) & 0xFFFFFFFFFFFFFFF0LL) + 16;
      goto LABEL_8;
    }
  }
  else if ((v3 & 0x80000000) == 0 ||
           (*(_DWORD*)(a3 + 28) = v3 + 16, v3 >= 0xFFFFFFF1)) {
    v4 = *(_QWORD*)a3 + 8LL;
  LABEL_8:
    *(_QWORD*)a3 = v4;
  }
  return 0;
}

__int64 SdkHr_6a2b70(__int64 a1, unsigned int a2, _DWORD* a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;

  result = 0;
  if (a1 != 0 && a3 != nullptr) {
    v5 = *(_QWORD*)(a1 + 152);
    if (v5 != 0 && (v6 = *(_QWORD*)(v5 + 72)) != 0 &&
        a2 < *(_DWORD*)(v5 + 64)) {
      *a3 = *(_QWORD*)(v6 + 40LL * a2);
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 SdkHr_6f8ac0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  return SdkRoutine_6faad0(a1 + 8, a2, *a3, 16LL * a3[1], a4, 313);
}

__int64 SdkHr_6a7f70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  result = 0;
  if (a1 != 0 && a2 != 0) {
    SdkRoutine_64b9e0(a1, 0, a3, a2);
    return 1;
  }
  return result;
}

__int64 SdkHr_564720(__int64 result, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  v2 = (_QWORD*)(a2 + 56);
  v3 = *(_QWORD*)(a2 + 56);
  v4 = *(_QWORD*)(result + 16);
  if (v4 != 0) {
    result = SdkRoutine_86d7f0(*(_QWORD*)(result + 16), a2 + 56);
  }
  if (v3 != 0) {
    result = SdkRoutine_86d7a0(v3, v2);
  }
  if (v3 != *v2) {
    result = SdkRoutine_86d7c0(result);
  }
  *v2 = v4;
  return result;
}

__int64 SdkHr_5acd1c(__int64 a1)
{
  SdkRoutine_872c00();
  SdkRoutine_872c10();
  return a1;
}

void __attribute__((noreturn)) SdkHr_7d5810()
{
  SdkRoutine_7d5830("basic_string");
}

__int64 SdkHr_65b9e0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *a2;
  *(_QWORD*)(a1 + 32) = 0;
  *(_OWORD*)a1 = 0u;
  *(_OWORD*)(a1 + 16) = 0u;
  if ((*(_BYTE*)(v2 + 16) & 1) == 0) {
    *(_QWORD*)(a1 + 8) = *(_QWORD*)(v2 + 48) + a2[1];
  }
  v3 = *(_QWORD*)(v2 + 24);
  v4 = a2[1];
  *(_QWORD*)(a1 + 16) = v2;
  *(_QWORD*)a1 = v4 + v3;
  *(_QWORD*)(a1 + 24) = a2[1];
  return 1;
}

__int64 SdkHr_c3900(_QWORD** a1)
{
  unsigned int** v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  _QWORD* v7;

  if ((SdkRoutine_85a3e0() & 1) != 0 && (SdkRoutine_85a3f0(**a1) & 1) != 0) {
    v2 = (unsigned int**)(a1 + 1);
    v3 = *(unsigned int*)a1[1];
    v4 = (__int64*)*a1[6];
    if ((_DWORD)v3 != 0 || v4 == nullptr) {
      v6 = 0;
    }
    else {
      v6 = *v4;
    }
    v7 = a1[7];
    SdkRoutine_85a420(
        v3, *a1[2], *a1[3], "ReadFile", **a1,
        ", offset: %ld, size: %zu, read_size: %zu, fetched: [{ offset: %ld, "
        "size: %lu }, { offset: %ld, size: %lu }, { offs"
        "et: %ld, size: %lu }, { offset: %ld, size: %lu }, { offset: %ld, "
        "size: %lu }]",
        *a1[4], *a1[5], v6, v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v7[7],
        v7[8], v7[9], v7[10]);
  }
  else {
    v2 = (unsigned int**)(a1 + 1);
  }
  return **v2;
}

__int64 SdkHr_6a8f00(__int64 a1, _BYTE* a2)
{
  __int64 result;

  result = 0;
  if (a1 != 0 && a2 != nullptr) {
    result = 1;
    if (*(_QWORD*)(a1 + 7920) != 0) {
      a1 = *(_QWORD*)(a1 + 7920);
    }
    *a2 = *(_BYTE*)(a1 + 7896);
  }
  return result;
}

__int64 SdkHr_5e75b0(__int64 a1, _DWORD* a2, unsigned int a3)
{
  __int64 v3;

  v3 = *(_QWORD*)(a1 + 16);
  *a2 = *(_DWORD*)(v3 + 32LL * a3 + 180);
  return 0;
}

__int64 SdkHr_491e70(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                     unsigned int a5, __int64 a6, __int64 a7, unsigned int a8)
{
  return SdkRoutine_492c10(a1 + 8, a2, a3, a4, a5, a6, a7, a8, 13);
}

__int64 SdkHr_63e140(__int64 result, _QWORD* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;

  a2[2] = 0;
  a2[3] = 0;
  *a2 = 0;
  a2[1] = 0;
  v2 = *(_DWORD*)(result + 32);
  v3 = *(_QWORD*)(result + 8);
  *(_DWORD*)a2 = *(_DWORD*)(result + 36);
  v4 = *(_QWORD*)(result + 24);
  *((_DWORD*)a2 + 6) = v2;
  a2[1] = v4;
  a2[2] = v3;
  return result;
}

#pragma GCC visibility pop
