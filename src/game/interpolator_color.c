#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float GameRoutine_734120(_QWORD, _QWORD, float, float);
__n128 InterpolatorColor_Unknown2(__int64 a1);
__int64 InterpolatorColor_Unknown3(__int64 result, long double a2,
                                   long double a3);

__n128 InterpolatorColor_Unknown2(__int64 a1)
{
  float v1;
  float v2;
  __int128 v3;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __n128 result;
  float v13;
  float v14;
  unsigned int v15;

  v2 = *(float*)(a1 + 8);
  v1 = *(float*)(a1 + 12);
  v3 = *(_OWORD*)(a1 + 48);
  if (v1 >= v2) {
    LODWORD(v6) = HIDWORD(*(_QWORD*)(a1 + 48));
  }
  else {
    v5 =
        GameRoutine_734120(*(unsigned int*)(a1 + 16), *(unsigned int*)(a1 + 20),
                           *(float*)(a1 + 32), *(float*)&v3);
    v6 = *(float*)(a1 + 52);
    v2 = *(float*)(a1 + 8);
    v1 = *(float*)(a1 + 12);
    *(float*)&v3 = v5;
  }
  v15 = v3;
  if (v1 < v2) {
    v7 = GameRoutine_734120(*(unsigned int*)(a1 + 16),
                            *(unsigned int*)(a1 + 20), *(float*)(a1 + 36), v6);
    v2 = *(float*)(a1 + 8);
    v1 = *(float*)(a1 + 12);
    v6 = v7;
  }
  v8 = *(float*)(a1 + 56);
  v14 = v6;
  if (v1 < v2) {
    v9 = GameRoutine_734120(*(unsigned int*)(a1 + 16),
                            *(unsigned int*)(a1 + 20), *(float*)(a1 + 40), v8);
    v2 = *(float*)(a1 + 8);
    v1 = *(float*)(a1 + 12);
    v8 = v9;
  }
  v10 = *(float*)(a1 + 60);
  if (v1 < v2) {
    v13 = v8;
    v11 =
        GameRoutine_734120(*(unsigned int*)(a1 + 16), *(unsigned int*)(a1 + 20),
                           *(float*)(a1 + 44), v10);
    v8 = v13;
    v10 = v11;
  }
  ((uint64_t*)&result)[0] = __PAIR64__(LODWORD(v14), v15);
  ((uint64_t*)&result)[1] = __PAIR64__(LODWORD(v10), LODWORD(v8));
  return result;
}

__int64 InterpolatorColor_Unknown3(__int64 result, long double a2,
                                   long double a3)
{
  *(long double*)(result + 32) = a2;
  *(long double*)(result + 48) = a3;
  return result;
}

#pragma GCC visibility pop
