#include "decomp/pseudo_types.h"
#pragma GCC visibility push(hidden)

extern __int64 SdkData_e86d80;
extern __int64 (*SdkData_f01320)(__int64);
__int64 SdkRoutine_1c96e4(__int64);
__int64 SdkRoutine_1c9760(__int64, __int64);
__int64 SdkRoutine_1c9854(__int64, int);
__int64 SdkRoutine_1d3d5c(__int64);
__int64 SdkRoutine_1d3d98(_DWORD*);
__int64 SdkRoutine_1d6910(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1d69e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1db7d8(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1db8a8(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1e2e20(__int64);
__int64 SdkRoutine_1e3100(__int64 result);
__int64 SdkRoutine_858b60(_QWORD);
__int64 SdkRoutine_858b80(_QWORD);
__int64 SdkRoutine_858db0(_QWORD);
__int64 SdkRoutine_859720(_QWORD);
__int64 SdkRoutine_860790(_QWORD);

__int64 SdkHr_1d3de8(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
}

__int64 SdkHr_1d5464(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
}

__int64 SdkHr_1d5a68(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
}

__int64 SdkHr_1d6444(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
}

__int64 SdkHr_1d67c0(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
}

__int64 SdkHr_1d6804(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
  int v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;

  SdkRoutine_858b60(a1 + 8);
  v8 = *(_DWORD*)(a1 + 12);
  if (v8 != 0) {
    if (*(_QWORD*)(a1 + 16) == 0) {
      *(_QWORD*)(a1 + 16) = a3;
      *(_QWORD*)(a1 + 24) = a4;
    }
    v9 = v8 + 1;
    v10 = 0;
    goto LABEL_5;
  }
  v11 = *a2;
  SdkRoutine_1c96e4(*a2);
  if (a2[2] == 0) {
    a2[2] = *(_QWORD*)v11 + 144LL;
  }
  SdkRoutine_1c9760(v11 + 6576, v11 + 6576);
  v13 = a2[1];
  v12 = a2[2];
  v15 = 0;
  v10 = SdkRoutine_1d6910(v11 + 6576, &v15, v12, v13);
  if (v10 == 0) {
    v9 = 1;
    *(_QWORD*)a1 = v15;
    *(_QWORD*)(a1 + 16) = a3;
    *(_QWORD*)(a1 + 24) = a4;
  LABEL_5:
    *(_DWORD*)(a1 + 12) = v9;
    goto LABEL_12;
  }
  if (v15 != 0) {
    (*(void (**)(void))(*(_QWORD*)v15 + 8LL))();
  }
  *(_QWORD*)(v11 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(v11 + 6576);
  SdkRoutine_1d3d98((_DWORD*)v11);
LABEL_12:
  SdkRoutine_858b80(a1 + 8);
  return v10;
}

__int64 SdkHr_1d6988(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6;

  v6 = SdkRoutine_1d69e0(a1, a2, a3, a4);
  if (v6 == 0) {
    SdkRoutine_1c9854(a1 + 16, a4);
    ++*(_DWORD*)(a1 + 60);
  }
  return v6;
}

__int64 SdkHr_1db500(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
}

__int64 SdkHr_1db688(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
}

__int64 SdkHr_1db6cc(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
  int v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;

  SdkRoutine_858b60(a1 + 8);
  v8 = *(_DWORD*)(a1 + 12);
  if (v8 != 0) {
    if (*(_QWORD*)(a1 + 16) == 0) {
      *(_QWORD*)(a1 + 16) = a3;
      *(_QWORD*)(a1 + 24) = a4;
    }
    v9 = v8 + 1;
    v10 = 0;
    goto LABEL_5;
  }
  v11 = *a2;
  SdkRoutine_1c96e4(*a2);
  if (a2[2] == 0) {
    a2[2] = *(_QWORD*)v11 + 144LL;
  }
  SdkRoutine_1c9760(v11 + 6576, v11 + 6576);
  v13 = a2[1];
  v12 = a2[2];
  v15 = 0;
  v10 = SdkRoutine_1db7d8(v11 + 6576, &v15, v12, v13);
  if (v10 == 0) {
    v9 = 1;
    *(_QWORD*)a1 = v15;
    *(_QWORD*)(a1 + 16) = a3;
    *(_QWORD*)(a1 + 24) = a4;
  LABEL_5:
    *(_DWORD*)(a1 + 12) = v9;
    goto LABEL_12;
  }
  if (v15 != 0) {
    (*(void (**)(void))(*(_QWORD*)v15 + 8LL))();
  }
  *(_QWORD*)(v11 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(v11 + 6576);
  SdkRoutine_1d3d98((_DWORD*)v11);
LABEL_12:
  SdkRoutine_858b80(a1 + 8);
  return v10;
}

__int64 SdkHr_1db850(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6;

  v6 = SdkRoutine_1db8a8(a1, a2, a3, a4);
  if (v6 == 0) {
    SdkRoutine_1c9854(a1 + 16, a4);
    ++*(_DWORD*)(a1 + 60);
  }
  return v6;
}

__int64 SdkHr_1dcb20(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
}

__int64 SdkHr_1e3420(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  void (***v4)(_QWORD);
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  void (***v10)(_QWORD);

  SdkRoutine_1e2e20(a1);
  if (SdkData_f01320 != nullptr) {
    SdkData_f01320(a1);
  }
  *(_BYTE*)(a1 + 185) = 1;
  v2 = SdkRoutine_1e3100(a1 + 80);
  v3 = SdkRoutine_860790(v2);
  v4 = *(void (****)(_QWORD))(a1 + 16);
  if (v4 != nullptr) {
    v5 = v3;
    (**v4)(v4);
    v3 = v5;
  }
  v10 = v4;
  v6 = (*(__int64 (**)(__int64, void (****)(_QWORD)))(*(_QWORD*)v3 + 88LL))(
      v3, &v10);
  v7 = (__int64)v10;
  if (v10 != nullptr) {
    v7 = ((__int64 (*)(_QWORD))(*v10)[1])(v10);
  }
  LODWORD(v10) = v6;
  if (v6 != 0) {
    SdkRoutine_858db0(&v10);
  }
  else {
    v8 = SdkRoutine_860790(v7);
    LODWORD(v10) = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
    if ((_DWORD)v10 == 0) {
      while (1) {
        SdkRoutine_859720(86400000000000LL);
      }
    }
  }
  return SdkRoutine_858db0(&v10) + 32;
}

#pragma GCC visibility pop
