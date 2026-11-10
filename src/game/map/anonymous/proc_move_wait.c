#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212cfc8[9];
void ProcMoveWait_Unknown2(__int64 a1);

void ProcMoveWait_Unknown2(__int64 a1)
{
  __int64 v2;
  float v3;
  int v4;
  float v5;
  float v6;
  unsigned __int8* v7;
  unsigned int v8;
  bool v9;
  int v10;
  unsigned __int64 v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;

  v2 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  v3 = *(float*)(v2 + 252);
  if (v3 == *(float*)(v2 + 248)) {
    goto LABEL_5;
  }
  v4 = *(unsigned __int8*)(a1 + 152);
  v5 = v3 + (**(float (***)(__int64))(v2 + 240))(v2 + 240);
  v6 = *(float*)(v2 + 248);
  if (v6 < v5) {
    v5 = *(float*)(v2 + 248);
  }
  if (v5 == v6) {
    goto LABEL_5;
  }
  if (v4 != 0) {
    if (*(float*)(v2 + 252) == v6) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v2 + 240) + 16LL))((void*)(&v15), v2 + 240);
    }
    else {
      v12 = *(_QWORD*)(v2 + 296);
      LANES128(v15).n128_u64[0] = *(_QWORD*)(v2 + 288);
      LANES128(v15).n128_u64[1] = v12;
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(v2 + 240) + 16LL))((void*)(&v14), v2 + 240);
    v13 = vsubq_f32(v15, v14);
    if ((float)(LANES128_OF(vmulq_f32(v13, v13)).n128_f32[2] +
                (float)(LANES128(v13).n128_f32[0] *
                        LANES128(v13).n128_f32[0])) < 0x1.9000000000000p+4f) {
    LABEL_5:
      v7 = *(unsigned __int8**)(a1 + 16);
      if (v7 != nullptr) {
        v8 = *v7;
        v9 = v8 > 0x10;
        v10 = (1 << v8) & 0x1CE00;
        if (!v9 && v10 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(a1 + 136) |= 8u;
    }
  }
}

#pragma GCC visibility pop
