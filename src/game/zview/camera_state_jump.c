#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a7fda0(_QWORD, _QWORD);
extern __int64 GameData_212dc38[7];
float CameraStateJump_Unknown2(__int64 a1);

float CameraStateJump_Unknown2(__int64 a1)
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
  *(_QWORD*)(a1 + 516) = 0x4270000041A00000LL;
  LODWORD(v4) = *(_DWORD*)(a1 + 164);
  LODWORD(v3) = *(_DWORD*)(a1 + 168);
  *(_DWORD*)(a1 + 544) = 1091567616;
  *(_DWORD*)(a1 + 584) = 1094713344;
  *(_DWORD*)(a1 + 836) = v3;
  LODWORD(v3) = *(_DWORD*)(a1 + 500);
  *(_DWORD*)(a1 + 832) = v4;
  *(float*)(a1 + 500) = *(float*)&v3 * 0.5;
  result = *(float*)(a1 + 512) * 0.5;
  *(float*)(a1 + 512) = result;
  return result;
}

#pragma GCC visibility pop
