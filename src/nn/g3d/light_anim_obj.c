#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void GameRoutine_5e81c0(__int64, _DWORD*, long double);
void GameRoutine_5e82a0(__int64, _DWORD*, __int64, long double);
float LightAnimObj_Unknown3(__int64 a1, long double a2);

float LightAnimObj_Unknown3(__int64 a1, long double a2)
{
  int v2;
  _DWORD* v5;

  LODWORD(a2) = **(_DWORD**)(a1 + 8);
  if (*(float*)(a1 + 64) != *(float*)&a2) {
    v2 = *(_DWORD*)(a1 + 60);
    if (v2 >= 1 && v2 <= *(_DWORD*)(a1 + 56)) {
      GameRoutine_5e82a0(*(_QWORD*)(a1 + 96), *(_DWORD**)(a1 + 72),
                         *(_QWORD*)(a1 + 48), a2);
    }
    else {
      GameRoutine_5e81c0(*(_QWORD*)(a1 + 96), *(_DWORD**)(a1 + 72), a2);
    }
    v5 = *(_DWORD**)(a1 + 8);
    LODWORD(a2) = *v5;
    *(_DWORD*)(a1 + 64) = *v5;
  }
  return *(float*)&a2;
}

#pragma GCC visibility pop
