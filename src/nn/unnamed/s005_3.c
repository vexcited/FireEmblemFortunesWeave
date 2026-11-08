#include "decomp/pseudo_types.h"
#pragma GCC visibility push(hidden)

extern __int64 SdkData_e888e8;
extern __int64 SdkData_e888f0;
__int64 SdkRoutine_7f39a0(_QWORD, _QWORD);
__int64 SdkRoutine_86ee50(_QWORD, double);
double SdkRoutine_87c790(_QWORD);
__int64 SdkRoutine_87cdc0(void);
__int64 SdkRoutine_87cf30(_QWORD, _QWORD);
__int64 SdkRoutine_87cf40(_QWORD);

_QWORD* SdkHr_7f37f8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
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

  SdkRoutine_87cf40(&a9);
  SdkRoutine_87c790(a1);
  v12 = v11;
  SdkRoutine_87cf40(&a9);
  SdkRoutine_87c790(v12);
  v24 = v9;
  v25 = v13;
  v26 = v12;
  v15 = v14;
  v17 = v16;
  v19 = v18;
  SdkRoutine_87cf30(v23, v14);
  v20 = (char*)v15 + *(_QWORD*)(*v15 - 24LL);
  if ((v20[32] & 5) == 0) {
    (*(void (**)(_QWORD, __int64, _QWORD, __int64))(
        **((_QWORD**)v20 + 5) + 32LL))(*((_QWORD*)v20 + 5), v19, v17, 16);
    if (v21 == -1) {
      SdkRoutine_87cdc0();
    }
  }
  SdkRoutine_87cf40(v23);
  return v15;
}

__int64 SdkHr_7f38c8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v10;
  __int64 v11;
  double v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  SdkRoutine_87cf40(&a9);
  SdkRoutine_87c790(a1);
  v11 = v10;
  SdkRoutine_87cf40(&a9);
  v12 = SdkRoutine_87c790(v11);
  v14 = v13;
  v16 = v15;
  *v13 = SdkData_e888e8 + 16;
  SdkRoutine_86ee50(v13 + 1, v12);
  v14[6] = 0;
  v14[7] = 0;
  v14[4] = 0;
  v14[5] = 0;
  v14[2] = 0;
  v14[3] = 0;
  v17 = SdkData_e888f0;
  v14[8] = 0;
  v14[9] = 0;
  v14[10] = 0;
  *v14 = v17 + 16;
  *((_DWORD*)v14 + 24) = *(_DWORD*)(v16 + 96);
  return SdkRoutine_7f39a0(v14, v16);
}

#pragma GCC visibility pop
