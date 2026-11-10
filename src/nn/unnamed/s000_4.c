#include "decomp/pseudo_types.h"

#pragma GCC visibility push(hidden)

extern __int64 SdkData_e86d80;

__int64 SdkRoutine_1c96e4(__int64);

__int64 SdkRoutine_1c9760(__int64, __int64);

__int64 SdkRoutine_1c9854(__int64, int);

__int64 SdkRoutine_1d3d5c(__int64);

__int64 SdkRoutine_1d3d98(_DWORD*);

__int64 SdkRoutine_1db7d8(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_1db8a8(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_858b60(_QWORD);

__int64 SdkRoutine_858b80(_QWORD);

__int64 SdkHr_1d3de8(__int64 a1)
{
  *(_QWORD*)(a1 + 6576) = SdkData_e86d80 + 16;
  SdkRoutine_1d3d5c(a1 + 6576);
  return SdkRoutine_1d3d98((_DWORD*)a1);
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
    (*(void (**)(void*))(*(_QWORD*)v15 + 8))((void*)v15);
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

#pragma GCC visibility pop
