#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1ff00();
__int64 forward_DCT();
__int64 forward_DCT_float();
extern __int64 SdkData_e86908;
extern __int64 SdkData_e86910;
extern __int64 SdkData_e86918;
extern __int64 SdkData_e86920;
extern __int64 SdkData_e86928;
extern __int64 SdkData_e86930;
extern __int64 SdkData_e86938;
__int64 nndetailImageJpeg_jinit_forward_dct(__int64 a1);

__int64 nndetailImageJpeg_jinit_forward_dct(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  int v4;
  __int64 v5;
  unsigned int v6;
  bool v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;

  v2 = (_QWORD*)(**(__int64 (***)(void))(a1 + 8))();
  *(_QWORD*)(a1 + 560) = v2;
  v3 = v2;
  *v2 = SdkRoutine_1ff00;
  v4 = *(_DWORD*)(a1 + 320);
  switch (v4) {
  case 2:
    v2[1] = forward_DCT_float;
    v2[10] = SdkData_e86928;
    break;
  case 1:
    v8 = SdkData_e86910;
    v2[1] = forward_DCT;
    v2[2] = v8;
    v9 = *(_DWORD*)(a1 + 320);
    v7 = v9 == 2;
    if (v9 >= 2) {
      goto LABEL_7;
    }
    goto LABEL_12;
  case 0:
    v5 = SdkData_e86908;
    v2[1] = forward_DCT;
    v2[2] = v5;
    v6 = *(_DWORD*)(a1 + 320);
    v7 = v6 == 2;
    if (v6 < 2) {
      goto LABEL_12;
    }
  LABEL_7:
    if (v7) {
      v10 = SdkData_e86920;
      v3[11] = SdkData_e86918;
      v3[12] = v10;
    }
    else {
      *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 49;
      (**(void (***)(__int64))a1)(a1);
    }
    goto LABEL_13;
  default:
    break;
  }
  *(_DWORD*)(*(_QWORD*)a1 + 40LL) = 49;
  (**(void (***)(__int64))a1)(a1);
  v11 = *(_DWORD*)(a1 + 320);
  v7 = v11 == 2;
  if (v11 >= 2) {
    goto LABEL_7;
  }
LABEL_12:
  v12 = SdkData_e86938;
  v3[3] = SdkData_e86930;
  v3[4] = v12;
LABEL_13:
  if (*(_DWORD*)(a1 + 320) == 2) {
    v13 = 256;
  }
  else {
    v13 = 128;
  }
  if (*(_DWORD*)(a1 + 320) == 2) {
    v14 = 17;
  }
  else {
    v14 = 9;
  }
  result = (**(__int64 (***)(__int64, __int64, __int64))(a1 + 8))(a1, 1, v13);
  v3[v14] = result;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  v3[15] = 0;
  v3[16] = 0;
  v3[13] = 0;
  v3[14] = 0;
  return result;
}

#pragma GCC visibility pop
