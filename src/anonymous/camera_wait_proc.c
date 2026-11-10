#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212cfc8[9];
void CameraWaitProc_Unknown2(__int64 a1);

void CameraWaitProc_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  float v6;
  unsigned __int64 v7;
  float32x4_t v8;
  __int64 v9;
  float v10;
  __int64 v11;
  float (**v12)(__int64);
  float v13;
  float v14;
  float v15;
  unsigned __int8* v16;
  unsigned int v17;
  bool v18;
  int v19;
  float32x4_t v21;
  float32x4_t v22;

  v2 = *GameData_212cfc8[0];
  if (*GameData_212cfc8[0] == 0) {
    goto LABEL_14;
  }
  v3 = *(_QWORD*)(v2 + 432);
  v4 = *(float*)(v3 + 252);
  if (v4 == *(float*)(v3 + 248)) {
    goto LABEL_13;
  }
  v5 = v4 + (**(float (***)(__int64))(v3 + 240))(v3 + 240);
  v6 = *(float*)(v3 + 248);
  if (v6 < v5) {
    v5 = *(float*)(v3 + 248);
  }
  if (v5 == v6) {
    goto LABEL_13;
  }
  if (*(float*)(v3 + 252) == v6) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(v3 + 240) + 16LL))((void*)(&v22), v3 + 240);
  }
  else {
    v7 = *(_QWORD*)(v3 + 296);
    LANES128(v22).n128_u64[0] = *(_QWORD*)(v3 + 288);
    LANES128(v22).n128_u64[1] = v7;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(v3 + 240) + 16LL))((void*)(&v21), v3 + 240);
  v8 = vsubq_f32(v22, v21);
  if ((float)(LANES128_OF(vmulq_f32(v8, v8)).n128_f32[2] +
              (float)(LANES128(v8).n128_f32[0] * LANES128(v8).n128_f32[0])) <
      0x1.9000000000000p+4f) {
  LABEL_13:
    v9 = *(_QWORD*)(v2 + 432);
    v10 = *(float*)(v9 + 68);
    if (v10 == *(float*)(v9 + 64)) {
      goto LABEL_14;
    }
    v12 = *(float (***)(__int64))(v9 + 56);
    v11 = v9 + 56;
    v13 = (*v12)(v11);
    v14 = *(float*)(v11 + 8);
    v15 = v10 + v13;
    if (v14 < v15) {
      v15 = *(float*)(v11 + 8);
    }
    if (v15 == v14) {
    LABEL_14:
      v16 = *(unsigned __int8**)(a1 + 16);
      if (v16 != nullptr) {
        v17 = *v16;
        v18 = v17 > 0x10;
        v19 = (1 << v17) & 0x1CE00;
        if (!v18 && v19 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(a1 + 136) |= 8u;
    }
  }
}

#pragma GCC visibility pop
