#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern unsigned __int64 SdkData_105bf80[2048];
extern _UNKNOWN SdkData_105ff98;
extern _UNKNOWN SdkData_1060830;
extern _UNKNOWN SdkData_1060b80;
extern _UNKNOWN SdkData_1060b90;
extern _UNKNOWN SdkData_1060ba0;
extern _UNKNOWN SdkData_bd123c;
extern _UNKNOWN SdkData_bd12a8;
extern _WORD SdkData_cfff70[];
extern __int64 SdkData_e893c8;
extern __int64 SdkData_e893d0;
extern __int64 SdkData_e89548;
extern __int64 SdkData_e89760;
__int64 SdkRoutine_4f61b0(_QWORD, _QWORD);
void __attribute__((noreturn)) SdkRoutine_7cd620();
__int64 SdkRoutine_7e42f0(_QWORD, _QWORD);
void __attribute__((noreturn)) SdkRoutine_7e62a0(unsigned int);
void __attribute__((noreturn)) SdkRoutine_7f6090();
__int64 SdkRoutine_812100(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_815340(_QWORD);
__int64 SdkRoutine_818060(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8225a0(_QWORD);
__int64 SdkRoutine_82dd20(_QWORD);
__int64 SdkRoutine_830290(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_857400(_QWORD);
__int64 SdkRoutine_85df80(_QWORD);
__int64 SdkRoutine_85df90(_QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_8605f0(_QWORD, _QWORD);
__int64 SdkRoutine_86ee40(_QWORD);
__int64 SdkRoutine_86ee60(_QWORD);
__int64 SdkRoutine_86ee80(_QWORD);
__int64 SdkRoutine_87b920(_QWORD, _QWORD, _QWORD, double);
__int64 SdkRoutine_87c2e0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87c2f0(_QWORD);
__int64 SdkRoutine_87c450(_QWORD, _QWORD, _QWORD);
double SdkRoutine_87c790(_QWORD);
__int64 SdkRoutine_87c8e0(_QWORD);
__int64 SdkRoutine_87c8f0(_QWORD);
__int64 SdkRoutine_87c910(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87c920(_QWORD);
__int64 SdkRoutine_87c940(_QWORD, _QWORD);
__int64 SdkRoutine_87c9c0(_QWORD);
__int64 SdkRoutine_87cb10(_QWORD);
__int64 SdkRoutine_87cb80(_QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_87cb90(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_87cba0(_QWORD);
__int64 SdkRoutine_87cbb0(_QWORD);
__int64 SdkRoutine_87cc40(_QWORD);
__int64 SdkRoutine_87cd10(_QWORD, double);
__int64 SdkRoutine_87cd30(_QWORD);
__attribute__((swiftcall)) void SdkRoutine_87cd90(PSEUDO_X8);
__int64 SdkRoutine_87cda0(_QWORD);
__int64 SdkRoutine_87cdc0(void);
__int64 SdkRoutine_87ce70(_QWORD, _QWORD);
__int64 SdkRoutine_87ce80(_QWORD);
__int64 SdkRoutine_87cef0(_QWORD);
__int64 SdkRoutine_87d0a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_87d320(double);

__int64 SdkHr_7e3d24(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10)
{
  __int64 v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  double v15;
  __int64 v16;
  double v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  char v21;
  unsigned __int64 v22;
  __int64* v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  SdkRoutine_87cbb0(&a10);
  v13 = ((__int64 (*)(__int64))SdkRoutine_87c790)(a1);
  SdkRoutine_87cbb0(&a10);
  v14 = ((__int64 (*)(__int64))SdkRoutine_87c790)(v13);
  SdkRoutine_87cbb0(&a10);
  v15 = SdkRoutine_87c790(v14);
  v32 = v11;
  v33 = v10;
  v34 = v16;
  v35 = v14;
  v17 = v15;
  v19 = v18;
  v20 = SdkRoutine_85e050(0x58u);
  *(_QWORD*)v20 = 0;
  *(_QWORD*)(v20 + 8) = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)(v20 + 24) = 0;
  *(_QWORD*)(v20 + 32) = 0;
  *(_QWORD*)(v20 + 40) = 0;
  *(_QWORD*)(v20 + 48) = 0;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  *(_DWORD*)(v20 + 80) = 0;
  v29 = 23;
  v30 = 20;
  v31 = (__int64*)v20;
  SdkRoutine_87cb80(&v29, 21, 0);
  v21 = v29;
  if ((v29 & 1) != 0) {
    v22 = v30;
  }
  else {
    v22 = (unsigned __int64)(unsigned __int8)v29 >> 1;
  }
  while (1) {
    v23 = (v21 & 1) != 0 ? v31 : (__int64*)((char*)&v29 + 4);
    v24 = SdkRoutine_87b920(v23, v22 + 1, &SdkData_bd123c, v17);
    if ((v24 & 0x80000000) == 0) {
      break;
    }
    v22 = (2 * v22) | 1;
  LABEL_11:
    SdkRoutine_87cb80(&v29, v22, 0);
    v21 = v29;
  }
  if (v22 < v24) {
    v22 = v24;
    goto LABEL_11;
  }
  SdkRoutine_87cb80(&v29, v24, 0);
  v25 = v29;
  v26 = v30;
  v29 = 0;
  v30 = 0;
  *v19 = v25;
  v19[1] = v26;
  v27 = v31;
  v31 = nullptr;
  v19[2] = (__int64)v27;
  return SdkRoutine_87cbb0(&v29);
}

__int64 SdkHr_7e3ea4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9, char a10)
{
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  double v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  char v21;
  unsigned __int64 v22;
  __int64* v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  double v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  SdkRoutine_87cbb0(&a10);
  SdkRoutine_87c790(a1);
  v13 = v12;
  SdkRoutine_87cbb0(&a10);
  SdkRoutine_87c790(v13);
  v15 = v14;
  SdkRoutine_87cbb0(&a10);
  v16 = SdkRoutine_87c790(v15);
  v33 = v10;
  v34 = v17;
  v35 = v15;
  v29 = v16;
  v19 = v18;
  v20 = SdkRoutine_85e050(0x58u);
  *(_QWORD*)v20 = 0;
  *(_QWORD*)(v20 + 8) = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)(v20 + 24) = 0;
  *(_QWORD*)(v20 + 32) = 0;
  *(_QWORD*)(v20 + 40) = 0;
  *(_QWORD*)(v20 + 48) = 0;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  *(_DWORD*)(v20 + 80) = 0;
  v30 = 23;
  v31 = 20;
  v32 = (__int64*)v20;
  SdkRoutine_87cb80(&v30, 21, 0);
  v21 = v30;
  if ((v30 & 1) != 0) {
    v22 = v31;
  }
  else {
    v22 = (unsigned __int64)(unsigned __int8)v30 >> 1;
  }
  while (1) {
    v23 = (v21 & 1) != 0 ? v32 : (__int64*)((char*)&v30 + 4);
    v24 = SdkRoutine_87b920(v23, v22 + 1, &SdkData_bd12a8, v29);
    if ((v24 & 0x80000000) == 0) {
      break;
    }
    v22 = (2 * v22) | 1;
  LABEL_11:
    SdkRoutine_87cb80(&v30, v22, 0);
    v21 = v30;
  }
  if (v22 < v24) {
    v22 = v24;
    goto LABEL_11;
  }
  SdkRoutine_87cb80(&v30, v24, 0);
  v25 = v30;
  v26 = v31;
  v30 = 0;
  v31 = 0;
  *v19 = v25;
  v19[1] = v26;
  v27 = v32;
  v32 = nullptr;
  v19[2] = (__int64)v27;
  return SdkRoutine_87cbb0(&v30);
}

void __attribute__((noreturn)) SdkHr_7e4000(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  SdkRoutine_87cbb0(&a12);
  SdkRoutine_87c790(a1);
  v14 = v13;
  SdkRoutine_87cbb0(&a12);
  SdkRoutine_87c790(v14);
  v16 = v15;
  SdkRoutine_87cbb0(&a12);
  SdkRoutine_87c790(v16);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7e4264(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  __int64 v11;
  __int64 v12;

  SdkRoutine_87cba0(&a10);
  SdkRoutine_87c790(a1);
  v12 = v11;
  SdkRoutine_87cba0(&a10);
  SdkRoutine_87c790(v12);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7e4290(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = SdkRoutine_87c8f0(16);
  SdkRoutine_7e42f0(v2, a1);
  v3 = SdkRoutine_87c910(v2, SdkData_e893c8, SdkData_e893d0);
  SdkRoutine_87c920(v2);
  SdkRoutine_87c790(v3);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7e455c(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  __int64 v11;
  __int64 v12;

  SdkRoutine_87cba0(&a10);
  SdkRoutine_87c790(a1);
  v12 = v11;
  SdkRoutine_87cba0(&a10);
  SdkRoutine_87c790(v12);
  __udf(0);
}

void __attribute__((noreturn))
SdkHr_7e4988(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  if ((a12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(a14, a12 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7e4ac8(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn))
SdkHr_7e4c08(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  if ((a12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(a14, a12 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7e4d08(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7e4dfc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11)
{
  __int64 v11;

  if ((*(_BYTE*)(v11 - 24) & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v11 - 8),
                      *(_QWORD*)(v11 - 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7e4f8c(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11)
{
  __int64 v11;

  if ((*(_BYTE*)(v11 - 24) & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v11 - 8),
                      *(_QWORD*)(v11 - 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7e5698(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  SdkRoutine_87cc40(&a9);
  SdkRoutine_87c790(a1);
  __udf(0);
}

__int64 SdkHr_7e5900(__int64 a1)
{
  __int64 result;
  unsigned __int64 v3;
  __int64 v4;

  v4 = a1;
  result = SdkRoutine_87c940(&v4, 8);
  v3 = atomic_load(
      &SdkData_105bf80[8 * (unsigned __int64)(unsigned __int8)result]);
  if (v3 != 0) {
    return SdkRoutine_85df80(a1);
  }
  return result;
}

__int64 SdkHr_7e5960(__int64 a1)
{
  __int64 result;
  unsigned __int64 v3;
  __int64 v4;

  v4 = a1;
  result = SdkRoutine_87c940(&v4, 8);
  v3 = atomic_load(
      &SdkData_105bf80[8 * (unsigned __int64)(unsigned __int8)result]);
  if (v3 != 0) {
    return SdkRoutine_85df90(a1);
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_7e5e9c(__int64 a1)
{
  __int64 v1;

  SdkRoutine_857220(v1, 8);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7e6194(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7e68c8(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

__int64 SdkHr_7e6b4c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v13;
  double v14;
  _QWORD* v15;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  v14 = SdkRoutine_87c790(a1);
  if (*v15 == 0) {
    SdkRoutine_7e62a0(3u);
  }
  return SdkRoutine_87cd10(v13, v14);
}

void __attribute__((noreturn)) SdkHr_7e7cd4(__int64 a1)
{
  SdkRoutine_87cd30(&SdkData_105ff98);
  SdkRoutine_87c790(a1);
  __udf(0);
}

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

void __attribute__((noreturn)) SdkHr_7e97a4(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cda0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7e9ad0(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7eb13c(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7eb3dc(__int64 a1)
{
  __int64 v1;

  SdkRoutine_86ee60(v1 + 24);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7eb61c(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7ec534(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cda0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
}

_QWORD* SdkHr_7ee168(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  _BYTE v23[16];
  __int64 v24;
  __int64 v25;
  __int64 v26;

  SdkRoutine_87ce80(&a9);
  SdkRoutine_87c790(a1);
  v12 = v11;
  SdkRoutine_87ce80(&a9);
  SdkRoutine_87c790(v12);
  v24 = v9;
  v25 = v13;
  v26 = v12;
  v15 = v14;
  v17 = v16;
  v19 = v18;
  SdkRoutine_87ce70(v23, v14);
  v20 = (char*)v15 + *(_QWORD*)(*v15 - 24LL);
  if ((v20[32] & 5) == 0) {
    (*(void (**)(_QWORD, __int64, _QWORD, __int64))(
        **((_QWORD**)v20 + 5) + 32LL))(*((_QWORD*)v20 + 5), v19, v17, 16);
    if (v21 == -1) {
      SdkRoutine_87cdc0();
    }
  }
  SdkRoutine_87ce80(v23);
  return v15;
}

__int64 SdkHr_7ee238(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 result;
  __int64 v21;
  __int64 v22;

  SdkRoutine_87ce80(&a9);
  SdkRoutine_87c790(a1);
  v11 = v10;
  SdkRoutine_87ce80(&a9);
  SdkRoutine_87c790(v11);
  v13 = v12[1];
  v14 = v12;
  v16 = v15;
  *v15 = v13;
  v17 = v12[2];
  v18 = *(_QWORD*)(v13 - 24);
  v15[1] = 0;
  *(__int64*)((char*)v15 + v18) = v17;
  v19 = (char*)v15 + *(_QWORD*)(*v15 - 24);
  result = SdkRoutine_86ee40(v19);
  *((_QWORD*)v19 + 17) = 0;
  *((_DWORD*)v19 + 36) = -1;
  v21 = v14[3];
  v16[2] = v21;
  *(__int64*)((char*)v16 + *(_QWORD*)(v21 - 24) + 16) = v14[4];
  v22 = *v14;
  *v16 = *v14;
  *(__int64*)((char*)v16 + *(_QWORD*)(v22 - 24)) = v14[5];
  v16[2] = v14[6];
  return result;
}

void __attribute__((noreturn)) SdkHr_7ee370(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cda0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7eedf4(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cda0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7ef144(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7f07bc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7f0a5c(__int64 a1)
{
  __int64 v1;

  SdkRoutine_86ee60(v1 + 24);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7f0c9c(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7f1bb4(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cda0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7f3d74(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, char a11)
{
  SdkRoutine_86ee60(&a11);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7f5604(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;

  SdkRoutine_86ee60(v3 + 24);
  *v1 = v2 + 16;
  SdkRoutine_86ee60(v1 + 1);
  SdkRoutine_87c790(a1);
  v6 = v5;
  *v1 = v2 + 16;
  SdkRoutine_86ee60(v1 + 1);
  SdkRoutine_87c790(v6);
  SdkRoutine_7cd620();
}

__int64 SdkHr_7f6570(_QWORD* a1, __int64 a2, unsigned int a3)
{
  __int64 v4;
  int v7;
  int v8;
  int v9;
  __int64 result;
  __int64 v11;

  v4 = a1[16];
  if (v4 == 0) {
    SdkRoutine_7f6090();
  }
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  if (a1[15] == 0 || a2 != 0 && v7 < 1) {
    return 0;
  }
  v8 = v7;
  v9 = (*(__int64 (**)(_QWORD*))(*a1 + 48LL))(a1);
  result = 0;
  if (a3 <= 2 && v9 == 0) {
    if (v8 <= 0) {
      v11 = 0;
    }
    else {
      v11 = a2 * (unsigned int)v8;
    }
    if ((unsigned int)SdkRoutine_87c2e0(a1[15], v11, a3) == 0) {
      SdkRoutine_87c2f0(a1[15]);
      return a1[17];
    }
    return 0;
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_7f6fd0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  SdkRoutine_87cef0(v4 + 8);
  SdkRoutine_87c790(a1);
  v8 = v7;
  SdkRoutine_87cef0(v1 + 8);
  SdkRoutine_87c790(v8);
  v10 = v9;
  SdkRoutine_87cef0(v2 + 8);
  SdkRoutine_87c790(v10);
  v12 = v11;
  SdkRoutine_86ee80(v5 + 8);
  SdkRoutine_87c790(v12);
  v14 = v13;
  SdkRoutine_86ee80(v4 + 8);
  SdkRoutine_87c790(v14);
  v16 = v15;
  SdkRoutine_86ee80(v3 + 8);
  SdkRoutine_87c790(v16);
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

void __attribute__((noreturn)) SdkHr_7f7354(__int64 a1)
{
  SdkRoutine_87cd30(&SdkData_1060830);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7f801c(__int64 a1, __int64 a2, __int64 a3,
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

void __attribute__((noreturn))
SdkHr_7f8960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if ((a12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a9 & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(a14, a12 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  SdkRoutine_87c790(v16);
  v18 = v17;
  SdkRoutine_86ee60(v14 - 32);
  SdkRoutine_87c790(v18);
  v20 = v19;
  SdkRoutine_86ee60(v14 - 32);
  SdkRoutine_87c790(v20);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7f9500(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7f9bc0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fa280(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fa940(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fb000(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fb6c0(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 64) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 40) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 48),
                      *(_QWORD*)(v1 - 64) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 24),
                    *(_QWORD*)(v1 - 40) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fbce4(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fc304(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fc924(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 96) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 72) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fcecc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12, __int64 a13)
{
  SdkRoutine_87cd30(&SdkData_1060b80);
  if ((a11 & 1) != 0) {
    SdkRoutine_857220(a13, a11 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fd170(__int64 a1)
{
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fd3d8(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  SdkRoutine_87cb10(v9 + 24);
  SdkRoutine_87cb10(&a9);
  SdkRoutine_87c790(a1);
  v13 = v12;
  SdkRoutine_87cb10(&a9);
  SdkRoutine_87c790(v13);
  SdkRoutine_87c790(v14);
  v16 = v15;
  SdkRoutine_86ee60(v10 - 32);
  SdkRoutine_87c790(v16);
  v18 = v17;
  SdkRoutine_86ee60(v10 - 32);
  SdkRoutine_87c790(v18);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fdf3c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fe5fc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7fecbc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7ff37c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7ffa3c(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8000fc(__int64 a1)
{
  __int64 v1;

  if ((*(_BYTE*)(v1 - 168) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v1 - 144) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v1 - 152),
                      *(_QWORD*)(v1 - 168) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(*(_QWORD*)(v1 - 128),
                    *(_QWORD*)(v1 - 144) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_800720(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_800d40(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_801360(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  if ((*(_BYTE*)(v2 - 176) & 1) != 0) {
    goto LABEL_4;
  }
  while ((*(_BYTE*)(v2 - 152) & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(v1[3], v1[1] & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(v1[6], v1[4] & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

__int64 SdkHr_801910(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, _DWORD** a9,
                     __int64 a10, __int64 a11, __int64 a12)
{
  unsigned int v13;
  unsigned int v14;
  char* v15;
  char** v16;
  _DWORD* v17;
  int v18;
  unsigned __int8* v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _DWORD* v24;
  __int64 result;
  char v26;
  char* v27;
  unsigned int v28;
  char** v29;
  _DWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  char* v35;
  char* v36;
  char v37;

  SdkRoutine_87cd30(&SdkData_1060b80);
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  v21 = *v16;
  if (*v16 == v15) {
    if (v13 == *(_DWORD*)(a10 + 96)) {
      v26 = 43;
    }
    else {
      if (v13 != *(_DWORD*)(a10 + 100)) {
        goto LABEL_4;
      }
      v26 = 45;
    }
    *v16 = v21 + 1;
    *v21 = v26;
    *v17 = 0;
    return 0;
  }
LABEL_4:
  v22 = *v19;
  if ((v22 & 1) != 0) {
    v23 = *((_QWORD*)v19 + 1);
  }
  else {
    v23 = v22 >> 1;
  }
  if (v13 == v18 && v23 != 0) {
    v24 = *a9;
    if ((__int64)*a9 - v20 > 159) {
      return 0;
    }
    result = 0;
    *v24 = *v17;
    *v17 = 0;
    *a9 = v24 + 1;
    return result;
  }
  v27 = v15;
  v28 = v14;
  v29 = v16;
  v30 = v17;
  v31 = SdkRoutine_87c450(a10, v13, 26);
  if (v31 != 0) {
    v32 = v31;
  }
  else {
    v32 = a10 + 104;
  }
  v33 = (v32 - a10) >> 2;
  if (v33 > 23) {
    return 0xFFFFFFFFLL;
  }
  if (v28 == 8) {
  LABEL_25:
    if (v33 >= v28) {
      return 0xFFFFFFFFLL;
    }
  LABEL_29:
    v34 = *(_BYTE*)(SdkData_e89548 + v33);
    v35 = (*v29)++;
    *v35 = v34;
    ++*v30;
    return 0;
  }
  if (v28 != 16) {
    if (v28 != 10) {
      goto LABEL_29;
    }
    goto LABEL_25;
  }
  if (v33 < 22) {
    goto LABEL_29;
  }
  v36 = *v29;
  result = 0xFFFFFFFFLL;
  if (*v29 != v27 && *v29 - v27 <= 2 && *(v36 - 1) == 48) {
    *v30 = 0;
    v37 = *(_BYTE*)(SdkData_e89548 + v33);
    *v29 = v36 + 1;
    *v36 = v37;
    return 0;
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_801cfc(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;

  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
  v11 = v10;
  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(v11);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8020f4(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  __int64 v11;
  __int64 v12;

  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  v12 = v11;
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(v12);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_80229c(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;

  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
  v11 = v10;
  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(v11);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_802684(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  __int64 v11;
  __int64 v12;

  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  v12 = v11;
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(v12);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8028c4(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11, char a12)
{
  __int64 v13;
  __int64 v14;

  SdkRoutine_86ee60(&a12);
  SdkRoutine_87c790(a1);
  v14 = v13;
  if ((a9 & 1) != 0) {
    SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(v14);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_803258(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_803538(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_803960(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(a1);
  v5 = v4;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v5);
  v7 = v6;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v7);
  v9 = v8;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v9);
  SdkRoutine_87c790(v10);
  SdkRoutine_87c790(v11);
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      SdkRoutine_87c790(v13);
      SdkRoutine_857400(v2);
    }
  }
  SdkRoutine_857400(v1);
  SdkRoutine_87c790(v13);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_803e3c(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(a1);
  v5 = v4;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v5);
  v7 = v6;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v7);
  v9 = v8;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v9);
  SdkRoutine_87c790(v10);
  SdkRoutine_87c790(v11);
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      SdkRoutine_87c790(v13);
      SdkRoutine_857400(v2);
    }
  }
  SdkRoutine_857400(v1);
  SdkRoutine_87c790(v13);
  __udf(0);
}

__int64 SdkHr_804104(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9,
                     __int64 a10, __int64 a11, char a12)
{
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 i;
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
  char* v45;
  __int64 v47;
  __int64 v48;
  _BYTE v49[180];
  char v50;
  unsigned __int8 v51;
  _BYTE v52[6];
  _QWORD v53[2];
  _QWORD v54[7];

  SdkRoutine_86ee60(&a12);
  SdkRoutine_87c790(a1);
  v15 = v14;
  if ((a9 & 1) != 0) {
    SdkRoutine_857220(a11, (4 * a9) & 0xFFFFFFFFFFFFFFF8LL);
  }
  SdkRoutine_87c790(v15);
  v53[0] = v12;
  v53[1] = v17;
  v54[6] = v15;
  v19 = *(_DWORD*)(v18 + 8);
  v21 = v20;
  v22 = &v50;
  v23 = v18;
  v25 = v24;
  v26 = v19 & 0x4A;
  if (v26 == 8) {
    v27 = 16;
  }
  else {
    v27 = 10;
  }
  if (v26 == 64) {
    v28 = 8;
  }
  else {
    v28 = v27;
  }
  if (v16 < 0) {
    if (v26 == 8) {
      goto LABEL_17;
    }
    v29 = v16;
    if (v26 != 64) {
      v29 = -v16;
      v22 = (char*)&v51;
      v50 = 45;
    }
  }
  else {
    if ((v19 & 0x800) == 0 || v26 == 8) {
      goto LABEL_17;
    }
    v29 = v16;
    if (v26 != 64) {
      v22 = (char*)&v51;
      v50 = 43;
    LABEL_17:
      v29 = v16;
    }
  }
  if (v16 != 0 && (v19 & 0x200) != 0) {
    if (v26 == 64) {
      *v22++ = 48;
    }
    else if (v26 == 8) {
      *v22 = 48;
      if ((v19 & 0x4000) != 0) {
        v30 = 88;
      }
      else {
        v30 = 120;
      }
      v22[1] = v30;
      v22 += 2;
    }
  }
  v31 = SdkRoutine_830290(v22, v53, v29, v28);
  v32 = v31;
  if ((~v19 & 0x4008) == 0) {
    v33 = (unsigned __int64)&v22[-v31];
    if (v22 != (char*)v31) {
      for (i = ((_BYTE)v31 - (_BYTE)v22) & 7; i != 0; *v22++ = v35) {
        v35 = (unsigned __int8)*v22;
        if ((unsigned int)(v35 - 97) < 6) {
          LOBYTE(v35) = v35 - 32;
        }
        --i;
      }
      if (v33 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v36 = (unsigned __int8)*v22;
          if ((unsigned int)(v36 - 97) < 6) {
            LOBYTE(v36) = v36 - 32;
          }
          *v22 = v36;
          v37 = (unsigned __int8)v22[1];
          if ((unsigned int)(v37 - 97) < 6) {
            LOBYTE(v37) = v37 - 32;
          }
          v22[1] = v37;
          v38 = (unsigned __int8)v22[2];
          if ((unsigned int)(v38 - 97) < 6) {
            LOBYTE(v38) = v38 - 32;
          }
          v22[2] = v38;
          v39 = (unsigned __int8)v22[3];
          if ((unsigned int)(v39 - 97) < 6) {
            LOBYTE(v39) = v39 - 32;
          }
          v22[3] = v39;
          v40 = (unsigned __int8)v22[4];
          if ((unsigned int)(v40 - 97) < 6) {
            LOBYTE(v40) = v40 - 32;
          }
          v22[4] = v40;
          v41 = (unsigned __int8)v22[5];
          if ((unsigned int)(v41 - 97) < 6) {
            LOBYTE(v41) = v41 - 32;
          }
          v22[5] = v41;
          v42 = (unsigned __int8)v22[6];
          if ((unsigned int)(v42 - 97) < 6) {
            LOBYTE(v42) = v42 - 32;
          }
          v22[6] = v42;
          v43 = (unsigned __int8)v22[7];
          if ((unsigned int)(v43 - 97) < 6) {
            LOBYTE(v43) = v43 - 32;
          }
          v22[7] = v43;
          v22 += 8;
        } while (v22 != (char*)v31);
      }
    }
  }
  v44 = *(_DWORD*)(v23 + 8) & 0xB0;
  if (v44 == 32) {
    v45 = (char*)v31;
    goto LABEL_62;
  }
  if (v44 != 16) {
  LABEL_61:
    v45 = &v50;
    goto LABEL_62;
  }
  if (v50 != 45 && v50 != 43) {
    if (v31 - (__int64)&v50 >= 2 && v50 == 48 && (v51 | 0x20) == 0x78) {
      v45 = v52;
      goto LABEL_62;
    }
    goto LABEL_61;
  }
  v45 = (char*)&v51;
LABEL_62:
  SdkRoutine_87cd90((void*)&v47);
  SdkRoutine_87d0a0(&v50, v45, v32, v49, v54, &v48, &v47);
  SdkRoutine_86ee60(&v47);
  return SdkRoutine_812100(v25, v49, v54[0], v48, v23, v21);
}

void __attribute__((noreturn)) SdkHr_804ab4(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_804db4(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8051e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(a1);
  v5 = v4;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v5);
  v7 = v6;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v7);
  v9 = v8;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v9);
  SdkRoutine_87c790(v10);
  SdkRoutine_87c790(v11);
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      SdkRoutine_87c790(v13);
      SdkRoutine_857400(v2);
    }
  }
  SdkRoutine_857400(v1);
  SdkRoutine_87c790(v13);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8056bc(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(a1);
  v5 = v4;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v5);
  v7 = v6;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v7);
  v9 = v8;
  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c790(v9);
  SdkRoutine_87c790(v10);
  SdkRoutine_87c790(v11);
  v13 = v12;
  if (v1 == 0) {
    while (1) {
      SdkRoutine_87c790(v13);
      SdkRoutine_857400(v2);
    }
  }
  SdkRoutine_857400(v1);
  SdkRoutine_87c790(v13);
  __udf(0);
}

void __attribute__((noreturn))
SdkHr_805b9c(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16)
{
  if ((a14 & 1) != 0) {
    SdkRoutine_857220(a16, a14 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn))
SdkHr_8061d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16)
{
  SdkRoutine_87cd30(&SdkData_1060b80);
  if ((a14 & 1) != 0) {
    SdkRoutine_857220(a16, a14 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn))
SdkHr_806634(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16)
{
  if ((a14 & 1) != 0) {
    SdkRoutine_857220(a16, a14 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8071d0(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_807414(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_807628(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8077f4(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8090a8(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_809304(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_809518(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_86ee60(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8096e4(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  SdkRoutine_86ee60(&a9);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_809df4(__int64 a1)
{
  __int64 v1;

  SdkRoutine_86ee60(v1 - 32);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_80ad90(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, char a11)
{
  SdkRoutine_86ee60(&a11);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_80b1a4(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, char a11)
{
  SdkRoutine_86ee60(&a11);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_80b358(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 - 8);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn))
SdkHr_80d338(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, __int64 a19,
             void (*a20)(__int64), __int64 a21, __int64 a22, __int64 a23,
             __int64 a24, __int64 a25, __int64 a26, __int64 a27, __int64 a28,
             __int64 a29, __int64 a30, __int64 a31, __int64 a32, __int64 a33,
             __int64 a34, __int64 a35, __int64 a36, __int64 a37, __int64 a38,
             __int64 a39, __int64 a40, __int64 a41, __int64 a42, __int64 a43)
{
  if ((a29 & 1) != 0) {
    SdkRoutine_857220(a31, a29 & 0xFFFFFFFFFFFFFFFELL);
    if ((a32 & 1) == 0) {
    LABEL_3:
      if ((a35 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_10;
    }
  }
  else if ((a32 & 1) == 0) {
    goto LABEL_3;
  }
  SdkRoutine_857220(a34, a32 & 0xFFFFFFFFFFFFFFFELL);
  if ((a35 & 1) == 0) {
  LABEL_4:
    if ((a38 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_11;
  }
LABEL_10:
  SdkRoutine_857220(a37, a35 & 0xFFFFFFFFFFFFFFFELL);
  if ((a38 & 1) == 0) {
  LABEL_5:
    if ((a41 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_12;
  }
LABEL_11:
  SdkRoutine_857220(a40, a38 & 0xFFFFFFFFFFFFFFFELL);
  if ((a41 & 1) == 0) {
  LABEL_6:
    if (a24 == 0) {
    LABEL_14:
      SdkRoutine_87c790(a1);
      SdkRoutine_7cd620();
    }
  LABEL_13:
    a20(a24);
    goto LABEL_14;
  }
LABEL_12:
  SdkRoutine_857220(a43, a41 & 0xFFFFFFFFFFFFFFFELL);
  if (a24 == 0) {
    goto LABEL_14;
  }
  goto LABEL_13;
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

void __attribute__((noreturn)) SdkHr_80dae4(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn))
SdkHr_80f6d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14, __int64 a15,
             __int64 a16, __int64 a17, __int64 a18, void (*a19)(__int64),
             __int64 a20, __int64 a21, __int64 a22, __int64 a23, __int64 a24,
             __int64 a25, __int64 a26, __int64 a27, __int64 a28, __int64 a29,
             __int64 a30, __int64 a31, __int64 a32, __int64 a33, __int64 a34,
             __int64 a35, __int64 a36, __int64 a37, __int64 a38, __int64 a39,
             __int64 a40, __int64 a41)
{
  __int64 v41;

  if ((a27 & 1) != 0) {
    SdkRoutine_857220(a29, (4 * a27) & 0xFFFFFFFFFFFFFFF8LL);
    if ((a30 & 1) == 0) {
    LABEL_3:
      if ((a33 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_10;
    }
  }
  else if ((a30 & 1) == 0) {
    goto LABEL_3;
  }
  SdkRoutine_857220(a32, (4 * a30) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a33 & 1) == 0) {
  LABEL_4:
    if ((a36 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_11;
  }
LABEL_10:
  SdkRoutine_857220(a35, (4 * a33) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a36 & 1) == 0) {
  LABEL_5:
    if ((a39 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_12;
  }
LABEL_11:
  SdkRoutine_857220(a38, (4 * a36) & 0xFFFFFFFFFFFFFFF8LL);
  if ((a39 & 1) == 0) {
  LABEL_6:
    if (v41 == 0) {
    LABEL_14:
      SdkRoutine_87c790(a1);
      SdkRoutine_7cd620();
    }
  LABEL_13:
    a19(v41);
    goto LABEL_14;
  }
LABEL_12:
  SdkRoutine_857220(a41, a39 & 0xFFFFFFFFFFFFFFFELL);
  if (v41 == 0) {
    goto LABEL_14;
  }
  goto LABEL_13;
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

void __attribute__((noreturn))
SdkHr_80fdbc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  if ((a12 & 1) != 0) {
    SdkRoutine_857220(a14, (4 * a12) & 0xFFFFFFFFFFFFFFF8LL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_811078(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_812e88(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  SdkRoutine_87cd30(v3);
  SdkRoutine_87c9c0(v3 + 760);
  if ((*(_BYTE*)(v1 + 288) & 1) != 0) {
    SdkRoutine_857220(*(_QWORD*)(v1 + 304),
                      *(_QWORD*)(v1 + 288) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_815340(v2);
  SdkRoutine_87c9c0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
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

void __attribute__((noreturn)) SdkHr_815acc(__int64 a1)
{
  SdkRoutine_87cd30(&SdkData_1060b90);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_816ad0(__int64 a1)
{
  __int64 v1;
  _BYTE* v2;

  if ((*(_BYTE*)(v1 + 96) & 1) != 0) {
    goto LABEL_6;
  }
  if ((*(_BYTE*)(v1 + 72) & 1) != 0) {
    goto LABEL_7;
  }
LABEL_3:
  if ((*(_BYTE*)(v1 + 48) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v1 + 64),
                        *(_QWORD*)(v1 + 48) & 0xFFFFFFFFFFFFFFFELL);
      if ((*v2 & 1) != 0) {
        break;
      }
    LABEL_5:
      SdkRoutine_87c9c0(v1);
      SdkRoutine_87c790(a1);
    LABEL_6:
      SdkRoutine_857220(*(_QWORD*)(v1 + 112),
                        *(_QWORD*)(v1 + 96) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 72) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_7:
      SdkRoutine_857220(*(_QWORD*)(v1 + 88),
                        *(_QWORD*)(v1 + 72) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 48) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*v2 & 1) == 0) {
      goto LABEL_5;
    }
  }
  SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                    *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c9c0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_816d10(__int64 a1)
{
  __int64 v1;
  _BYTE* v2;

  if ((*(_BYTE*)(v1 + 96) & 1) != 0) {
    goto LABEL_6;
  }
  if ((*(_BYTE*)(v1 + 72) & 1) != 0) {
    goto LABEL_7;
  }
LABEL_3:
  if ((*(_BYTE*)(v1 + 48) & 1) != 0) {
    while (1) {
      SdkRoutine_857220(*(_QWORD*)(v1 + 64),
                        *(_QWORD*)(v1 + 48) & 0xFFFFFFFFFFFFFFFELL);
      if ((*v2 & 1) != 0) {
        break;
      }
    LABEL_5:
      SdkRoutine_87c9c0(v1);
      SdkRoutine_87c790(a1);
    LABEL_6:
      SdkRoutine_857220(*(_QWORD*)(v1 + 112),
                        *(_QWORD*)(v1 + 96) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 72) & 1) == 0) {
        goto LABEL_3;
      }
    LABEL_7:
      SdkRoutine_857220(*(_QWORD*)(v1 + 88),
                        *(_QWORD*)(v1 + 72) & 0xFFFFFFFFFFFFFFFELL);
      if ((*(_BYTE*)(v1 + 48) & 1) == 0) {
        goto LABEL_4;
      }
    }
  }
  else {
  LABEL_4:
    if ((*v2 & 1) == 0) {
      goto LABEL_5;
    }
  }
  SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                    *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c9c0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_816f40(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cb10(v1 + 96);
  SdkRoutine_87cb10(v1 + 72);
  SdkRoutine_87cb10(v1 + 48);
  if ((*(_BYTE*)(v1 + 24) & 1) != 0) {
    SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                      *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c9c0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_817120(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cb10(v1 + 96);
  SdkRoutine_87cb10(v1 + 72);
  SdkRoutine_87cb10(v1 + 48);
  if ((*(_BYTE*)(v1 + 24) & 1) != 0) {
    SdkRoutine_857220(*(_QWORD*)(v1 + 40),
                      *(_QWORD*)(v1 + 24) & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c9c0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
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

void __attribute__((noreturn)) SdkHr_8184d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_818610(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_818750(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_818890(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8189d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_818b10(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_818c50(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_818d90(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_818ed0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_819010(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_819150(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_819290(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8193d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_819510(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_819650(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_819790(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_8198d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_819a10(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_819b50(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_819c90(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_819dd0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_819f10(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81a050(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81a190(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81a2d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81a410(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81a550(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81a690(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81a7d0(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81a910(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81b084(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12)
{
  __int64 v12;
  __int64 v14;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
    SdkRoutine_857220(v12, 312);
    SdkRoutine_87c790(a1);
    a1 = v14;
  }
  SdkRoutine_857220(v12, 312);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81b124(__int64 a1)
{
  __int64 v1;

  SdkRoutine_857220(v1, 312);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81b25c(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12)
{
  __int64 v12;
  __int64 v14;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
    SdkRoutine_857220(v12, 312);
    SdkRoutine_87c790(a1);
    a1 = v14;
  }
  SdkRoutine_857220(v12, 312);
  SdkRoutine_87c790(a1);
  __udf(0);
}

__int64 SdkHr_81b318(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  unsigned int v5;
  unsigned int v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 result;

  SdkRoutine_857220(v1, 312);
  SdkRoutine_87c790(a1);
  v4 = v3;
  v6 = v5;
  v8 = v7;
  v10 = v9;
  v11 = SdkRoutine_85e050(0x138u);
  result = SdkRoutine_818060(v11, *v10, *v8, v6);
  *v4 = v11;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                            memory_order_relaxed);
  return result;
}

void SdkHr_81b398(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  SdkRoutine_857220(v1, 312);
  SdkRoutine_87c790(a1);
  v5 = *(_QWORD**)v4;
  if ((*(_BYTE*)(*(_QWORD*)v4 + 288LL) & 1) != 0) {
    SdkRoutine_4f61b0(v3, v5[38]);
  }
  else {
    v6 = v5[36];
    v7 = v5[37];
    v8 = v5[38];
    v3[1] = v7;
    v3[2] = v8;
    *v3 = v6;
  }
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

void __attribute__((noreturn))
SdkHr_81bde0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  if ((a9 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a12 & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(a11, a9 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a14, a12 & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81bfd8(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12)
{
  __int64 v12;

  if ((*(_BYTE*)v12 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a10 & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(*(_QWORD*)(v12 + 16),
                      *(_QWORD*)v12 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn))
SdkHr_81c4a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
             __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10,
             __int64 a11, __int64 a12, __int64 a13, __int64 a14)
{
  if ((a9 & 1) != 0) {
    goto LABEL_4;
  }
  while ((a12 & 1) == 0) {
    SdkRoutine_87c790(a1);
  LABEL_4:
    SdkRoutine_857220(a11, (4 * a9) & 0xFFFFFFFFFFFFFFF8LL);
  }
  SdkRoutine_857220(a14, (4 * a12) & 0xFFFFFFFFFFFFFFF8LL);
  SdkRoutine_87c790(a1);
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

__int64 SdkHr_81ca70(__int64 result, __int64 a2, char a3, __int64 a4)
{
  __int64 v4;

  v4 = SdkData_e89760;
  *(_QWORD*)(result + 16) = a2;
  *(_BYTE*)(result + 24) = a3;
  *(_QWORD*)result = v4 + 16;
  *(_QWORD*)(result + 8) = a4 - 1;
  if (a2 == 0) {
    *(_QWORD*)(result + 16) = SdkData_cfff70;
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_81dbf8(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_82dd20(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81dcc0(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_82dd20(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81dd40(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 + 24);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81de08(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 + 24);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81df4c(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87cd30(&SdkData_1060b80);
  SdkRoutine_87c9c0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
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

void __attribute__((noreturn)) SdkHr_81e488(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 - 8);
  SdkRoutine_87c790(a1);
  __udf(0);
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

void __attribute__((noreturn)) SdkHr_81e83c(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 - 8);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81ea20(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            char a10)
{
  SdkRoutine_82dd20(&a10);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_81ec28(__int64 a1)
{
  __int64 v1;

  SdkRoutine_82dd20(v1 + 24);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_822928(__int64 a1)
{
  __int64 v1;

  SdkRoutine_8225a0(v1);
  SdkRoutine_87c790(a1);
  __udf(0);
}

#pragma GCC visibility pop
