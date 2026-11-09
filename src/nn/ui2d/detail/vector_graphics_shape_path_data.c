#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
float GameRoutine_5a3700(unsigned __int16*, float);
__int64 VectorGraphicsShapePathData_Unknown2(__int64 result, __int64 a2,
                                             __int64 a3, __int64 a4, __int64 a5,
                                             __int64 a6);
__int64 VectorGraphicsShapePathData_Unknown3(__int64 result);
void VectorGraphicsShapePathData_Unknown5(__int64 a1, float a2);
__int64 VectorGraphicsShapePathData_Unknown9(_QWORD* a1);
bool VectorGraphicsShapePathData_Unknown14(__int64 a1);
__int64 VectorGraphicsShapePathData_Unknown10(__int64 a1);
bool VectorGraphicsShapePathData_5ae140(__int64 a1);

double VectorGraphicsShapePathData_Unknown6() { return 0.0; }

__int64 VectorGraphicsShapePathData_Unknown4(__int64 a1)
{
  return **(unsigned __int8**)(a1 + 32);
}

__int64 VectorGraphicsShapePathData_Unknown2(__int64 result, __int64 a2,
                                             __int64 a3, __int64 a4, __int64 a5,
                                             __int64 a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;

  v6 = *(_QWORD*)(result + 24);
  v7 = result;
  v8 = *(int*)(*(_QWORD*)(result + 32) + 24LL);
  v9 = *(_QWORD*)(v6 + 16);
  v10 = (int)v8 < 1 || v9 == 0;
  *(_QWORD*)(v6 + 16) = v9 + 24LL * (int)v8;
  if (!v10) {
    result = memset(v9, 0, 24 * v8, a4, a5, a6);
  }
  *(_QWORD*)(v7 + 40) = v9;
  return result;
}

__int64 VectorGraphicsShapePathData_Unknown3(__int64 result)
{
  if (*(_QWORD*)(result + 40) != 0) {
    *(_QWORD*)(result + 40) = 0;
  }
  return result;
}

void VectorGraphicsShapePathData_Unknown5(__int64 a1, float a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int16* v8;
  float v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 32);
  if (*(_DWORD*)(v2 + 24) != 0) {
    v5 = 80;
    v6 = 0;
    v7 = 0;
    do {
      v8 = (unsigned __int16*)(*(_QWORD*)(v2 + 32) + v5);
      *(float*)(*(_QWORD*)(a1 + 40) + v6) = GameRoutine_5a3700(v8 - 40, a2);
      *(float*)(*(_QWORD*)(a1 + 40) + v6 + 4) = GameRoutine_5a3700(v8 - 32, a2);
      *(float*)(*(_QWORD*)(a1 + 40) + v6 + 8) = GameRoutine_5a3700(v8 - 24, a2);
      *(float*)(*(_QWORD*)(a1 + 40) + v6 + 12) =
          GameRoutine_5a3700(v8 - 16, a2);
      *(float*)(*(_QWORD*)(a1 + 40) + v6 + 16) = GameRoutine_5a3700(v8 - 8, a2);
      v9 = GameRoutine_5a3700(v8, a2);
      ++v7;
      v5 += 96;
      v10 = *(_QWORD*)(a1 + 40) + v6;
      v6 += 24;
      *(float*)(v10 + 20) = v9;
      v2 = *(_QWORD*)(a1 + 32);
    } while (v7 < *(unsigned int*)(v2 + 24));
  }
  if ((*(_BYTE*)(a1 + 20) & 1) != 0) {
    *(_DWORD*)(a1 + 16) = 0;
  }
}

__int64 VectorGraphicsShapePathData_Unknown9(_QWORD* a1)
{
  unsigned int v1;
  unsigned int v3;

  if (*(_DWORD*)(a1[4] + 24LL) == 0) {
    return 1;
  }
  v1 = 1;
  v3 = 0;
  do {
    v1 += (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 64LL))(a1, v3++);
  } while (v3 < *(_DWORD*)(a1[4] + 24LL));
  return v1;
}

bool VectorGraphicsShapePathData_Unknown14(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 1LL) & 2) != 0;
}

__int64 VectorGraphicsShapePathData_Unknown10(__int64 a1)
{
  return *(_BYTE*)(*(_QWORD*)(a1 + 32) + 28LL) & 1;
}

bool VectorGraphicsShapePathData_5ae140(__int64 a1)
{
  return *(float*)(a1 + 12) < 1.0 || *(float*)(a1 + 8) > 0.0;
}

#pragma GCC visibility pop
