#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void GameRoutine_5e7fc0(__int64, __int64, long double);
void GameRoutine_5e8060(__int64, __int64, __int64, long double);
float CameraAnimObj_Unknown3(__int64 a1, long double a2);

float CameraAnimObj_Unknown3(__int64 a1, long double a2)
{
  int v2;
  _DWORD* v5;

  LODWORD(a2) = **(_DWORD**)(a1 + 8);
  if (*(float*)(a1 + 64) != *(float*)&a2) {
    v2 = *(_DWORD*)(a1 + 60);
    if (v2 >= 1 && v2 <= *(_DWORD*)(a1 + 56)) {
      GameRoutine_5e8060(*(_QWORD*)(a1 + 96), *(_QWORD*)(a1 + 72),
                         *(_QWORD*)(a1 + 48), a2);
    }
    else {
      GameRoutine_5e7fc0(*(_QWORD*)(a1 + 96), *(_QWORD*)(a1 + 72), a2);
    }
    v5 = *(_DWORD**)(a1 + 8);
    LODWORD(a2) = *v5;
    *(_DWORD*)(a1 + 64) = *v5;
  }
  return *(float*)&a2;
}

#pragma GCC visibility pop
