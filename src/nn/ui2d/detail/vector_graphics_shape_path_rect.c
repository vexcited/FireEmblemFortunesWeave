#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float GameRoutine_5a3700(unsigned __int16*, float);
float acosf(float);
void VectorGraphicsShapePathRect_Unknown5(__int64 a1, float a2);
__int64 VectorGraphicsShapePathRect_Unknown7(__int64 a1);
__int64 VectorGraphicsShapePathRect_Unknown8(__int64 a1);
__int64 VectorGraphicsShapePathRect_Unknown9(__int64 a1);
bool VectorGraphicsShapePathRect_Unknown14(__int64 a1);
__int64 VectorGraphicsShapePathRect_Unknown4(__int64 a1);
float VectorGraphicsShapePathRect_Unknown6(__int64 a1);

void VectorGraphicsShapePathRect_Unknown5(__int64 a1, float a2)
{
  float v4;
  __int64 v5;
  float v6;
  __int64 v7;
  float v8;
  __int64 v9;
  float v10;
  __int64 v11;
  float v12;
  int v13;

  v4 = GameRoutine_5a3700((unsigned __int16*)(*(_QWORD*)(a1 + 32) + 56LL), a2);
  v5 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 48) = v4;
  v6 = GameRoutine_5a3700((unsigned __int16*)(v5 + 72), a2);
  v7 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 52) = v6;
  v8 = GameRoutine_5a3700((unsigned __int16*)(v7 + 24), a2);
  v9 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 40) = v8;
  v10 = GameRoutine_5a3700((unsigned __int16*)(v9 + 40), a2);
  v11 = *(_QWORD*)(a1 + 32);
  *(float*)(a1 + 44) = v10;
  v12 = GameRoutine_5a3700((unsigned __int16*)(v11 + 88), a2);
  v13 = *(unsigned __int8*)(a1 + 20);
  *(float*)(a1 + 56) = v12;
  if (v13 == 1) {
    *(_DWORD*)(a1 + 16) = 0;
  }
}

__int64 VectorGraphicsShapePathRect_Unknown7(__int64 a1)
{
  if (*(float*)(a1 + 56) > 0.0) {
    return 1;
  }
  else {
    return 4;
  }
}

__int64 VectorGraphicsShapePathRect_Unknown8(__int64 a1)
{
  float v1;
  float v2;

  v1 = *(float*)(a1 + 56);
  if (v1 <= 0.0f) {
    return 1;
  }
  v2 = acosf((float)(-2.0f / v1) + 1.0f);
  if (v2 <= 0.0f) {
    return 8;
  }
  else {
    return (unsigned int)(4 * (int)(float)(3.1416f / v2) + 8);
  }
}

__int64 VectorGraphicsShapePathRect_Unknown9(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;

  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1) == 0) {
    return 1;
  }
  v2 = 1;
  v3 = 0;
  do {
    v2 += (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 64LL))(a1, v3++);
  } while (v3 < (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1));
  return v2;
}

bool VectorGraphicsShapePathRect_Unknown14(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 1LL) & 2) == 0;
}

__int64 VectorGraphicsShapePathRect_Unknown4(__int64 a1)
{
  return **(unsigned __int8**)(a1 + 32);
}

float VectorGraphicsShapePathRect_Unknown6(__int64 a1)
{
  return *(float*)(a1 + 40);
}

#pragma GCC visibility pop
