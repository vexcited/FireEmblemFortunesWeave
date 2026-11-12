#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_488980(void);
__int64 SdkRoutine_488a80(void);
__int64 SdkRoutine_488b80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_488ca0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_gs_4881d0(void);
__int64 nn_gs_4880b0(_QWORD* a1);

__int64 nn_gs_4880b0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE v7[4];
  char* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD v11[2];
  _BYTE* v12;
  char** v13;

  nn_gs_4881d0();
  v2 = *a1;
  v7[0] = 0;
  v8 = (char*)a1 + 399;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 29;
  v10 = v2;
  SdkRoutine_488980();
  v3 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v8 = (char*)a1 + 398;
  v9 = a1 + 25;
  v10 = v3;
  SdkRoutine_488a80();
  v4 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 21;
  v10 = v4;
  v8 = (char*)a1 + 397;
  SdkRoutine_488b80(a1 + 21, a1 + 24, 0, v11);
  v5 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v8 = (char*)a1 + 396;
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 17;
  v10 = v5;
  return SdkRoutine_488ca0(a1 + 17, a1 + 20, 0, v11);
}

#pragma GCC visibility pop
