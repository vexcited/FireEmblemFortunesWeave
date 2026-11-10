#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e40be0(_QWORD, _QWORD);
__int64 LegionStackMoveTo_Unknown4(__int64 a1);
bool LegionStackMoveTo_Unknown5(__int64 a1);
void GameRoutine_e3f8b0(_QWORD*, double, double, double, double);
void LegionStackMoveTo_Unknown2(__int64 a1, double a2, double a3, double a4,
                                double a5);

void LegionStackMoveTo_Unknown2(__int64 a1, double a2, double a3, double a4,
                                double a5)
{
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  _QWORD* v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;

  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 120LL);
  if ((*(_BYTE*)(v6 + 96) & 1) == 0) {
    *(_BYTE*)(v6 + 96) = 1;
    v6 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 120LL);
  }
  v7 = *(float*)(a1 + 60);
  v8 = *(float*)(v6 + 16);
  v9 = *(float*)(v6 + 20);
  *(_QWORD*)(v6 + 120) = 0;
  if (v7 <= 0x0.0p+0f) {
    *(_DWORD*)(v6 + 116) = 0;
    *(_QWORD*)(v6 + 40) = 0;
    v12 = *(_QWORD**)(v6 + 8);
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)(v6 + 88) = 0;
    LODWORD(a2) = *(_DWORD*)(a1 + 52);
    *(_DWORD*)(v6 + 24) = LODWORD(a2);
    LODWORD(a3) = *(_DWORD*)(a1 + 56);
    *(_DWORD*)(v6 + 28) = LODWORD(a3);
    *(_DWORD*)(v6 + 16) = LODWORD(a2);
    *(_DWORD*)(v6 + 20) = LODWORD(a3);
    GameRoutine_e3f8b0(v12, a2, a3, a4, a5);
  }
  else {
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)(v6 + 88) = 0;
    *(float*)(v6 + 40) = v8;
    *(float*)(v6 + 44) = v9;
    *(_DWORD*)(v6 + 116) = 3;
    v10 = *(float*)(a1 + 52);
    *(float*)(v6 + 24) = v10;
    v11 = *(float*)(a1 + 56);
    *(float*)(v6 + 80) = v7;
    *(_DWORD*)(v6 + 84) = 0;
    *(float*)(v6 + 28) = v11;
    *(float*)(v6 + 32) =
        (float)(0x1.0000000000000p+0f / v7) * (float)(v10 - v8);
    *(float*)(v6 + 36) =
        (float)(0x1.0000000000000p+0f / v7) * (float)(v11 - v9);
  }
  v13 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 128LL);
  v14 = *(float*)(a1 + 56) - v9;
  v15 = *(float*)(a1 + 52) - v8;
  v16 = (float)(PSEUDO_UNFUSED(v14 * v14)) + (float)(v15 * v15);
  if (v16 >= 0x1.0000000000000p-23f) {
    v19 = 0x1.0000000000000p+0f / sqrtf(v16);
    v18 = v15 * v19;
    v17 = v14 * v19;
  }
  else {
    v17 = 0x1.0000000000000p+0f;
    v18 = 0x0.0p+0f;
  }
  if (*(_DWORD*)(v13 + 84) != 1) {
    *(_DWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_DWORD*)(v13 + 84) = 1;
    if (*(_BYTE*)(v13 + 64) == 1) {
      *(_BYTE*)(v13 + 64) = 0;
    }
  }
  *(float*)(v13 + 24) = v18;
  *(float*)(v13 + 28) = v17;
  *(_DWORD*)(v13 + 104) = 1065353216;
}

__int64 LegionStackMoveTo_Unknown4(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  int v8;

  v1 = *(_QWORD*)(a1 + 40);
  v3 = *(_QWORD*)(v1 + 120);
  if (*(_BYTE*)(v3 + 96) != 0) {
    v4 = *(_QWORD*)(v3 + 8);
    *(_BYTE*)(v3 + 96) = 0;
    GameRoutine_e40be0(*(_QWORD*)(v4 + 104), 0);
    v1 = *(_QWORD*)(a1 + 40);
  }
  result = GameRoutine_e40be0(*(_QWORD*)(v1 + 104), 0);
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 120LL);
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_DWORD*)(v6 + 116) = 0;
  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 128LL);
  if (*(_DWORD*)(v7 + 84) != 0) {
    *(_QWORD*)(v7 + 84) = 0;
    *(_QWORD*)(v7 + 92) = 0;
    *(_DWORD*)(v7 + 100) = 0;
    v8 = *(unsigned __int8*)(v7 + 64);
    *(_DWORD*)(v7 + 32) = 0;
    if (v8 == 1) {
      *(_BYTE*)(v7 + 64) = 0;
    }
  }
  return result;
}

bool LegionStackMoveTo_Unknown5(__int64 a1)
{
  return *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 120LL) + 116LL) == 0;
}

#pragma GCC visibility pop
