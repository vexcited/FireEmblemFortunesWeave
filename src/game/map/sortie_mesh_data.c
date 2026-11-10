#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c958;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
float SortieMeshData_ResetMatrix(__int64 a1);

float SortieMeshData_ResetMatrix(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int128 v4;
  float result;
  float v6;
  float v7;
  bool v8;
  float v9;
  __int128 v10;
  float32x2_t v11;

  v1 = GameData_212c958;
  v2 = *((_QWORD*)GameData_212c958 + 1);
  *(_QWORD*)(a1 + 80) = *(_QWORD*)GameData_212c958;
  *(_QWORD*)(a1 + 88) = v2;
  v3 = a1 + 80;
  v4 = *(_OWORD*)(v3 + 96);
  *(_OWORD*)(v3 - 64) = GameData_1a82dd0;
  *(_OWORD*)(v3 - 48) = GameData_1a83610;
  *(_OWORD*)(v3 - 32) = GameData_1a83090;
  *(_OWORD*)(v3 - 16) = v4;
  result = *(float*)(v3 + 112);
  if (result < 0.15f) {
    v6 = result / 0.15f;
    v7 = 1.0f;
    if (v6 <= 1.0f) {
      v7 = v6;
    }
    v8 = v6 < 0.0f;
    v9 = 0.0f;
    if (!v8) {
      v9 = v7;
    }
    *(_QWORD*)&v10 = *v1;
    ((uint64_t*)&v11)[0] = v1[1];
    result = vmuls_lane_f32(v9, v11, 1);
    ((float*)&v11)[1] = result;
    *((float32x2_t*)&v10 + 1) = v11;
    *(_OWORD*)v3 = v10;
  }
  return result;
}

#pragma GCC visibility pop
