#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN SdkData_1060ba0;

void __attribute__((noreturn)) SdkRoutine_7cd620();

__int64 SdkRoutine_815340(_QWORD);

__int64 SdkRoutine_82dd20(_QWORD);

__int64 SdkRoutine_857220(_QWORD, _QWORD);

__int64 SdkRoutine_8605f0(_QWORD, _QWORD);

__int64 SdkRoutine_86ee60(_QWORD);

__int64 SdkRoutine_86ee80(_QWORD);

double SdkRoutine_87c790(_QWORD);

__int64 SdkRoutine_87c8e0(_QWORD);

__int64 SdkRoutine_87c9c0(_QWORD);

__int64 SdkRoutine_87cb10(_QWORD);

__attribute__((swiftcall)) void SdkRoutine_87cb90(PSEUDO_X8, _QWORD);

__int64 SdkRoutine_87cd30(_QWORD);

__int64 SdkRoutine_87cef0(_QWORD);

__int64 SdkRoutine_87d320(double);

void SdkHr_7e8090(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  bool v6;
  char* v7;
  __int64 v8;
  _QWORD v9[2];
  char* v10;

  v2 = *(_QWORD*)(a2 + 8);
  if ((*(_BYTE*)a2 & 1) == 0) {
    v2 = *(_BYTE*)a2 >> 1;
  }
  if (v2 != 12 ||
      ((*(_BYTE*)a2 & 1) == 0 ? (v3 = (__int64*)(a2 + 1))
                              : (v3 = *(__int64**)(a2 + 16)),
       (v4 = *v3, v5 = *((_DWORD*)v3 + 2), v4 == 0x6172752F7665642FLL)
           ? (v6 = v5 == 1836016750)
           : (v6 = false),
       !v6)) {
    SdkRoutine_87cb90((void*)v9, "random device not supported ");
    if ((v9[0] & 1) != 0) {
      v7 = v10;
    }
    else {
      v7 = (char*)v9 + 1;
    }
    v8 = SdkRoutine_8605f0(2, v7);
    if ((v9[0] & 1) != 0) {
      SdkRoutine_857220(v10, v9[0] & 0xFFFFFFFFFFFFFFFELL);
    }
    SdkRoutine_87c790(v8);
    __udf(0);
  }
}

void __attribute__((noreturn)) SdkHr_7e8458(__int64 a1)
{
  __int64 v1;

  SdkRoutine_86ee60(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7f7134(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  SdkRoutine_86ee80(v2);
  SdkRoutine_87c790(a1);
  v7 = v6;
  SdkRoutine_86ee60(v4 + 24);
  *v1 = v3;
  SdkRoutine_86ee60(v1 + 1);
  SdkRoutine_87c790(v7);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7f7254(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  SdkRoutine_87cef0(v2);
  SdkRoutine_87c790(a1);
  v7 = v6;
  SdkRoutine_86ee60(v4 + 24);
  *v1 = v3;
  SdkRoutine_86ee60(v1 + 1);
  SdkRoutine_87c790(v7);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_80d850(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12, char a13, __int64 a14,
                                            __int64 a15, void (*a16)(void))
{
  __int64 v17;

  SdkRoutine_86ee60(&a13);
  v17 = a15;
  a15 = 0;
  if (v17 != 0) {
    a16();
  }
  SdkRoutine_87c790(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn))
SdkHr_80fb04(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, char a12, __int64 a13, __int64 a14, void (*a15)(void))
{
  __int64 v16;

  SdkRoutine_86ee60(&a12);
  v16 = a14;
  a14 = 0;
  if (v16 != 0) {
    a15();
  }
  SdkRoutine_87c790(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) SdkHr_815a08(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  SdkRoutine_87c8e0(a1);
  if ((*(_BYTE*)(v1 + 288) & 1) != 0) {
    SdkRoutine_857220(*(_QWORD*)(v1 + 304),
                      *(_QWORD*)(v1 + 288) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_815340(v2);
  SdkRoutine_87c9c0(v1);
  SdkRoutine_87c790(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) SdkHr_818300(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  if ((*(_BYTE*)(v1 + 288) & 1) != 0) {
    SdkRoutine_857220(*(_QWORD*)(v1 + 304),
                      *(_QWORD*)(v1 + 288) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_815340(v2);
  SdkRoutine_87c9c0(v1);
  SdkRoutine_87c790(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) SdkHr_81b650(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  SdkRoutine_87cd30(&SdkData_1060ba0);
  SdkRoutine_87c790(a1);
  v4 = v3;
  SdkRoutine_86ee60(v1);
  SdkRoutine_87c790(v4);
  __udf(0);
}

__int64 SdkHr_81c6c8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v12;
  double v14;
  __int64 v15;
  __int64 v16;

  SdkRoutine_87cb10(v12);
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, (4 * a10) & 0xFFFFFFFFFFFFFFF8LL);
  }
  v14 = SdkRoutine_87c790(a1);
  v16 = v15;
  SdkRoutine_87d320(v14);
  return SdkRoutine_857220(v16, 16);
}

void __attribute__((noreturn)) SdkHr_81e458(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 - 8);
  SdkRoutine_87c790(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) SdkHr_81e470(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 - 8);
  SdkRoutine_87c790(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) SdkHr_81e80c(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 - 8);
  SdkRoutine_87c790(a1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) SdkHr_81e824(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 - 8);
  SdkRoutine_87c790(a1);
  SdkRoutine_7cd620();
}

#pragma GCC visibility pop
