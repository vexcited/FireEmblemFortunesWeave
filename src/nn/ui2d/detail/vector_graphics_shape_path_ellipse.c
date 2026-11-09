#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*nn_ui2d_Window_vtable[])();
float GameRoutine_5a3700(unsigned __int16*, float);
float acosf(float);
void VectorGraphicsShapePathEllipse_Unknown5(__int64 a1, float a2);
__int64 VectorGraphicsShapePathEllipse_Unknown8(__int64 a1);
bool VectorGraphicsShapePathEllipse_Unknown14(__int64 a1);
__int64 VectorGraphicsShapePathEllipse_Unknown9(__int64 a1);

__int64 VectorGraphicsShapePathEllipse_Unknown4(__int64 a1)
{
  return **(unsigned __int8**)(a1 + 32);
}

void VectorGraphicsShapePathEllipse_Unknown5(__int64 a1, float a2)
{
  float v4;
  __int64 v5;
  float v6;
  __int64 v7;
  float v8;
  __int64 v9;
  float v10;
  int v11;

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
  v11 = *(unsigned __int8*)(a1 + 20);
  *(float*)(a1 + 44) = v10;
  if (v11 == 1) {
    *(_DWORD*)(a1 + 16) = 0;
  }
}

__int64 VectorGraphicsShapePathEllipse_Unknown8(__int64 a1)
{
  float v1;
  float v2;

  v1 = *(float*)(a1 + 48);
  if (*(float*)(a1 + 52) > v1) {
    v1 = *(float*)(a1 + 52);
  }
  v2 = acosf((float)(-2.0f / (float)(v1 * 0.5f)) + 1.0f);
  if (v2 <= 0.0f) {
    return 4;
  }
  else {
    return (unsigned int)(4 * (int)(float)(3.1416f / v2) + 4);
  }
}

bool VectorGraphicsShapePathEllipse_Unknown14(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 1LL) & 2) != 0;
}

__int64 VectorGraphicsShapePathEllipse_Unknown9(__int64 a1)
{
  return (*(unsigned int (**)(__int64, _QWORD))(*(_QWORD*)a1 + 64LL))(a1, 0) +
         1;
}

#pragma GCC visibility pop
