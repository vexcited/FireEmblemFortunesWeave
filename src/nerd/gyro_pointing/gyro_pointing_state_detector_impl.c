#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float exp2f_plt(float);
float nerd_gyro_pointing_GyroPointingStateDetector_AddCorrectedGlobalAcc(
    __int64 a1, float* a2, float a3);
__attribute__((swiftcall)) void
nerd_gyro_pointing_GyroPointingStateDetector_GetSensorCovariance(PSEUDO_X8 x8_,
                                                                 __int64 this_);

float nerd_gyro_pointing_GyroPointingStateDetector_AddCorrectedGlobalAcc(
    __int64 a1, float* a2, float a3)
{

#pragma clang fp contract(off)
  float v4;
  float v5;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  __int64 v21;
  float v22;
  __int64 v23;
  float v24;
  __int64 v25;
  float v26;
  __int64 v27;
  float v28;
  __int64 v29;
  float v30;
  __int64 v31;
  float v32;
  __int64 v33;
  float v34;
  __int64 v35;
  float v36;
  float result;

  v4 = *(float*)(a1 + 4536);
  v5 = *(float*)(a1 + 4540);
  v7 = *(float*)(a1 + 4544);
  v8 = (float)((float)(v4 * v4) + (float)(v5 * v5)) + (float)(v7 * v7);
  if (v8 <= 0x0.0p+0f) {
    v9 = 0x1.fffffe0000000p+127f;
  }
  else {
    v9 = 0x1.9000000000000p+5f / sqrtf(v8);
  }
  v10 = a3 * a2[1];
  v11 = a3 * a2[2];
  *(float*)(a1 + 4536) = v4 + (float)(a3 * *a2);
  *(float*)(a1 + 4540) = v5 + v10;
  *(float*)(a1 + 4544) = v7 + v11;
  v12 = exp2f_plt((float)-a3 / v9);
  v13 = v12 * *(float*)(a1 + 4536);
  v14 = v12 * *(float*)(a1 + 4540);
  v15 = v12 * *(float*)(a1 + 4544);
  *(_DWORD*)(a1 + 4556) = 1092616192;
  *(float*)(a1 + 4536) = v13;
  *(float*)(a1 + 4540) = v14;
  *(float*)(a1 + 4544) = v15;
  v16 = (float)((float)(v13 * v13) + (float)(v14 * v14)) + (float)(v15 * v15);
  v17 = 0x1.4000000000000p+3f;
  v18 = sqrtf(v16);
  if (v18 >= 0x1.4000000000000p+3f) {
    v20 = 0x1.4000000000000p+4f;
    *(_DWORD*)(a1 + 4560) = 1084227584;
    if (v18 >= 0x1.4000000000000p+4f) {
      *(_DWORD*)(a1 + 4564) = 1075838976;
      v20 = 0x1.4000000000000p+5f;
      if (v18 >= 0x1.4000000000000p+5f) {
        *(_DWORD*)(a1 + 4568) = 1067450368;
        v20 = 0x1.4000000000000p+6f;
        if (v18 >= 0x1.4000000000000p+6f) {
          *(_DWORD*)(a1 + 4572) = 1059061760;
          v20 = 0x1.4000000000000p+7f;
          if (v18 >= 0x1.4000000000000p+7f) {
            *(_DWORD*)(a1 + 4576) = 1050673152;
            v20 = 0x1.4000000000000p+8f;
            if (v18 >= 0x1.4000000000000p+8f) {
              *(_DWORD*)(a1 + 4580) = 1042284544;
              v20 = 0x1.4000000000000p+9f;
              if (v18 >= 0x1.4000000000000p+9f) {
                v20 = 0x1.4000000000000p+10f;
                v17 = 0x1.4000000000000p-4f;
                *(_DWORD*)(a1 + 4584) = 1033895936;
                if (v18 >= 0x1.4000000000000p+10f) {
                  goto LABEL_51;
                }
                v19 = 7;
              }
              else {
                v17 = 0x1.4000000000000p-3f;
                v19 = 6;
              }
            }
            else {
              v17 = 0x1.4000000000000p-2f;
              v19 = 5;
            }
          }
          else {
            v17 = 0x1.4000000000000p-1f;
            v19 = 4;
          }
        }
        else {
          v17 = 0x1.4000000000000p+0f;
          v19 = 3;
        }
      }
      else {
        v17 = 0x1.4000000000000p+1f;
        v19 = 2;
      }
    }
    else {
      v17 = 0x1.4000000000000p+2f;
      v19 = 1;
    }
  }
  else {
    v19 = 0;
    v20 = 0x1.4000000000000p+3f;
  }
  v21 = a1 + 4556;
  v22 = *(float*)(a1 + 4556 + 4 * v19) - a3;
  *(float*)(a1 + 4556 + 4 * v19) = v22;
  if (v22 <= 0x0.0p+0f) {
    *(_DWORD*)(v21 + 4 * v19) = 0;
    v23 = v19 + 1;
    if (v19 == 7) {
      goto LABEL_51;
    }
  }
  else {
    v20 = (float)(unsigned __int64)(10LL << v19);
    v17 = 0x1.9000000000000p+6f / v20;
    v23 = v19 + 1;
    if (v19 == 7) {
      goto LABEL_51;
    }
  }
  v24 = *(float*)(v21 + 4 * v23) - a3;
  *(float*)(v21 + 4 * v23) = v24;
  if (v24 <= 0x0.0p+0f) {
    *(_DWORD*)(v21 + 4 * v23) = 0;
    v25 = v19 + 2;
    if (v19 == 6) {
      goto LABEL_51;
    }
  }
  else {
    v20 = (float)(unsigned __int64)(20LL << v19);
    v17 = 0x1.9000000000000p+6f / v20;
    v25 = v19 + 2;
    if (v19 == 6) {
      goto LABEL_51;
    }
  }
  v26 = *(float*)(v21 + 4 * v25) - a3;
  *(float*)(v21 + 4 * v25) = v26;
  if (v26 <= 0x0.0p+0f) {
    *(_DWORD*)(v21 + 4 * v25) = 0;
    v27 = v19 + 3;
    if (v19 == 5) {
      goto LABEL_51;
    }
  }
  else {
    v20 = (float)(unsigned __int64)(40LL << v19);
    v17 = 0x1.9000000000000p+6f / v20;
    v27 = v19 + 3;
    if (v19 == 5) {
      goto LABEL_51;
    }
  }
  v28 = *(float*)(v21 + 4 * v27) - a3;
  *(float*)(v21 + 4 * v27) = v28;
  if (v28 <= 0x0.0p+0f) {
    *(_DWORD*)(v21 + 4 * v27) = 0;
    v29 = v19 + 4;
    if (v19 == 4) {
      goto LABEL_51;
    }
  }
  else {
    v20 = (float)(unsigned __int64)(80LL << v19);
    v17 = 0x1.9000000000000p+6f / v20;
    v29 = v19 + 4;
    if (v19 == 4) {
      goto LABEL_51;
    }
  }
  v30 = *(float*)(v21 + 4 * v29) - a3;
  *(float*)(v21 + 4 * v29) = v30;
  if (v30 <= 0x0.0p+0f) {
    *(_DWORD*)(v21 + 4 * v29) = 0;
  }
  else {
    v20 = (float)(unsigned __int64)(160LL << v19);
    v17 = 0x1.9000000000000p+6f / v20;
  }
  v31 = v19 + 5;
  if (v19 != 3) {
    v32 = *(float*)(v21 + 4 * v31) - a3;
    *(float*)(v21 + 4 * v31) = v32;
    if (v32 <= 0x0.0p+0f) {
      *(_DWORD*)(v21 + 4 * v31) = 0;
    }
    else {
      v20 = (float)(unsigned __int64)(320LL << v19);
      v17 = 0x1.9000000000000p+6f / v20;
    }
    v33 = v19 + 6;
    if (v19 != 2) {
      v34 = *(float*)(v21 + 4 * v33) - a3;
      *(float*)(v21 + 4 * v33) = v34;
      if (v34 <= 0x0.0p+0f) {
        *(_DWORD*)(v21 + 4 * v33) = 0;
      }
      else {
        v20 = (float)(unsigned __int64)(640LL << v19);
        v17 = 0x1.9000000000000p+6f / v20;
      }
      v35 = v19 + 7;
      if (v19 != 1) {
        v36 = *(float*)(v21 + 4 * v35) - a3;
        *(float*)(v21 + 4 * v35) = v36;
        if (v36 <= 0x0.0p+0f) {
          *(_DWORD*)(v21 + 4 * v35) = 0;
        }
        else {
          v20 = (float)(unsigned __int64)(1280LL << v19);
          v17 = 0x1.9000000000000p+6f / v20;
        }
      }
    }
  }
LABEL_51:
  result = v20 * v20;
  *(float*)(a1 + 4552) = v17;
  *(float*)(a1 + 4548) = result;
  return result;
}

__attribute__((swiftcall)) void

nerd_gyro_pointing_GyroPointingStateDetector_GetSensorCovariance(PSEUDO_X8 x8_,
                                                                 __int64 this_)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;

  if ((*(_BYTE*)(this_ + 4456) & 1) != 0) {
    v2 = *(_QWORD*)(this_ + 4440);
    *a2 = *(_QWORD*)(this_ + 4432);
    a2[1] = v2;
    a2[2] = *(_QWORD*)(this_ + 4448);
  }
  else {
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
  }
  {
    this_;
    return;
  }
}

#pragma GCC visibility pop
