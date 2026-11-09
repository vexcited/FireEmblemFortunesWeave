#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a7fda0(_QWORD, _QWORD);
extern __int64 GameData_212dc38[7];
float CameraStateSpot_Unknown2(__int64 a1);

float CameraStateSpot_Unknown2(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int128 v6;
  __int128 v7;
  float result;

  v2 = *(_QWORD*)GameData_212dc38[0];
  v3 = *(_DWORD*)(*(_QWORD*)GameData_212dc38[0] + 104LL);
  v4 = *(_QWORD*)GameData_212dc38[0] + 16LL;
  *(_BYTE*)(v2 + 1032) = 1;
  *(_DWORD*)(v2 + 1028) = v3;
  GameRoutine_a7fda0(a1 + 80, v4);
  v5 = *(_QWORD*)(a1 + 912);
  v6 = *(_OWORD*)(*(_QWORD*)(v5 + 8) + 112LL);
  *(_QWORD*)(v5 + 16) = v6;
  v7 = *(_OWORD*)(v5 + 16);
  *((_QWORD*)&v7 + 1) = DWORD2(v6);
  *(_OWORD*)(v5 + 16) = v7;
  *(_BYTE*)(a1 + 992) = 0;
  LODWORD(v7) = *(_DWORD*)(a1 + 164);
  result = *(float*)(a1 + 168);
  *(float*)(a1 + 836) = result;
  *(_DWORD*)(a1 + 832) = v7;
  return result;
}

#pragma GCC visibility pop
