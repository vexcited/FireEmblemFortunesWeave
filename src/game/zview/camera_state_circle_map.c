#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a7fda0(_QWORD, _QWORD);
__int64 GameRoutine_d21160(_QWORD);
__int64 GameRoutine_d470a0(void);
extern __int64 GameData_212dc38[7];
extern __int64 GameData_220b6f0;
float CameraStateCircleMap_Unknown2(__int64 a1);
__int64 CameraStateCircleMap_Unknown3(__int64 a1);

float CameraStateCircleMap_Unknown2(__int64 a1)
{
  __int64 v2;
  __int128 v3;
  __int128 v4;
  float result;

  GameRoutine_a7fda0(a1 + 80, *(_QWORD*)GameData_212dc38[0] + 16LL);
  v2 = *(_QWORD*)(a1 + 912);
  v3 = *(_OWORD*)(*(_QWORD*)(v2 + 8) + 112LL);
  *(_QWORD*)(v2 + 16) = v3;
  v4 = *(_OWORD*)(v2 + 16);
  *((_QWORD*)&v4 + 1) = DWORD2(v3);
  *(_OWORD*)(v2 + 16) = v4;
  *(_QWORD*)(a1 + 516) = 0x42440000C1200000LL;
  LODWORD(v4) = *(_DWORD*)(a1 + 164);
  result = *(float*)(a1 + 168);
  *(_DWORD*)(a1 + 524) = 1065353216;
  *(_QWORD*)(a1 + 612) = 0x3F80000040000000LL;
  *(_DWORD*)(a1 + 604) = 1036831949;
  *(_DWORD*)(a1 + 596) = 1045220557;
  *(float*)(a1 + 836) = result;
  *(_DWORD*)(a1 + 832) = v4;
  *(_BYTE*)(a1 + 608) = 1;
  *(_BYTE*)(a1 + 600) = 1;
  return result;
}

__int64 CameraStateCircleMap_Unknown3(__int64 a1)
{
  __int64 v2;
  float v3;
  float v4;
  float v5;
  float v6;

  GameRoutine_d470a0();
  v2 = *(_QWORD*)(GameData_220b6f0 + 56);
  if (v2 == 0 || (*(_BYTE*)(v2 + 387) & 0x80) != 0) {
    *(_DWORD*)(a1 + 588) = 1056964608;
    *(_BYTE*)(a1 + 592) = 1;
  }
  v3 = (float)(*(float*)(a1 + 836) + 37.0) / 86.0;
  if (v3 <= 1.0) {
    v4 = (float)(*(float*)(a1 + 836) + 37.0) / 86.0;
  }
  else {
    v4 = 1.0;
  }
  v5 = (float)(fminf(fmaxf(v4, 0.0), 1.0) * 5.5) + 2.5;
  if (v3 >= 0.0) {
    v6 = v5;
  }
  else {
    v6 = 2.5;
  }
  *(float*)(a1 + 544) = v6;
  return GameRoutine_d21160(a1);
}

#pragma GCC visibility pop
