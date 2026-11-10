#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 VectorGraphicsShapePathStar_Unknown9(int* a1);
bool VectorGraphicsShapePathStar_Unknown14(__int64 a1);
__int64 VectorGraphicsShapePathStar_Unknown4(__int64 a1);
float VectorGraphicsShapePathStar_Unknown6(__int64 a1);

__int64 VectorGraphicsShapePathStar_Unknown9(int* a1)
{
  unsigned int v1;
  int v3;
  int v4;

  if (a1[12] < 1) {
    return 1;
  }
  v1 = 1;
  v3 = 0;
  do {
    v4 = (*(__int64 (**)(int*, _QWORD))(*(_QWORD*)a1 + 64LL))(
        a1, (unsigned int)v3++);
    v1 += v4 + 1;
  } while (v3 < a1[12]);
  return v1;
}

bool VectorGraphicsShapePathStar_Unknown14(__int64 a1)
{
  return (*(_BYTE*)(*(_QWORD*)(a1 + 32) + 1LL) & 2) != 0;
}

__int64 VectorGraphicsShapePathStar_Unknown4(__int64 a1)
{
  return **(unsigned __int8**)(a1 + 32);
}

float VectorGraphicsShapePathStar_Unknown6(__int64 a1)
{
  return *(float*)(a1 + 56);
}

#pragma GCC visibility pop
