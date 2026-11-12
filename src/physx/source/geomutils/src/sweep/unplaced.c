#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

int8x16_t physx_source_geomutils_src_sweep_50aa00(_QWORD* a1, unsigned int a2,
                                                  __int64 a3, unsigned int* a4);

int8x16_t physx_source_geomutils_src_sweep_50aa00(_QWORD* a1, unsigned int a2,
                                                  __int64 a3, unsigned int* a4)
{

#pragma clang fp contract(off)
  _OWORD* v4;
  int32x4_t v5;
  int8x16_t v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned int* v10;
  __int64 v11;
  float32x4_t v12;
  float32x4_t v13;
  __int64 v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  __int64 v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  __int64 v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  __int64 v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  __int64 v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  __int64 v38;
  unsigned int* v39;
  unsigned int v40;
  __int64 v41;
  int32x4_t v42;
  int8x16_t result;

  v4 = (_OWORD*)(a3 + 24LL * *a4);
  v5 = *(int32x4_t*)v4;
  v6 = *(int8x16_t*)((char*)v4 + 12);
  if (a2 >= 2) {
    v7 = ((_BYTE)a2 - 1) & 7;
    if ((unsigned __int64)a2 - 2 >= 7) {
      v9 = (a2 - 1LL) & 0xFFFFFFFFFFFFFFF8LL;
      v10 = a4 + 4;
      v8 = 1;
      do {
        v8 += 8;
        v9 -= 8LL;
        v11 = a3 + 24LL * *(v10 - 3);
        v12 = vminq_f32(v5, *(float32x4_t*)v11);
        v13 = *(float32x4_t*)(v11 + 12);
        v14 = a3 + 24LL * *(v10 - 2);
        v15 = vmaxq_f32(v6, v13);
        v16 = vminq_f32(v12, *(float32x4_t*)v14);
        v17 = *(float32x4_t*)(v14 + 12);
        v18 = a3 + 24LL * *(v10 - 1);
        v19 = vmaxq_f32(v15, v17);
        v20 = vminq_f32(v16, *(float32x4_t*)v18);
        v21 = *(float32x4_t*)(v18 + 12);
        v22 = a3 + 24LL * *v10;
        v23 = vmaxq_f32(v19, v21);
        v24 = vminq_f32(v20, *(float32x4_t*)v22);
        v25 = *(float32x4_t*)(v22 + 12);
        v26 = a3 + 24LL * v10[1];
        v27 = vmaxq_f32(v23, v25);
        v28 = vminq_f32(v24, *(float32x4_t*)v26);
        v29 = *(float32x4_t*)(v26 + 12);
        v30 = a3 + 24LL * v10[2];
        v31 = vmaxq_f32(v27, v29);
        v32 = vminq_f32(v28, *(float32x4_t*)v30);
        v33 = *(float32x4_t*)(v30 + 12);
        v34 = a3 + 24LL * v10[3];
        v35 = vmaxq_f32(v31, v33);
        v36 = vminq_f32(v32, *(float32x4_t*)v34);
        v37 = *(float32x4_t*)(v34 + 12);
        LODWORD(v34) = v10[4];
        v10 += 8;
        v38 = a3 + 24LL * (unsigned int)v34;
        v5 = vminq_f32(v36, *(float32x4_t*)v38);
        v6 = vmaxq_f32(vmaxq_f32(v35, v37), *(float32x4_t*)(v38 + 12));
      } while (v9 != 0);
    }
    else {
      v8 = 1;
    }
    if ((((_BYTE)a2 - 1) & 7) != 0) {
      v39 = &a4[v8];
      do {
        v40 = *v39++;
        --v7;
        v41 = a3 + 24LL * v40;
        v5 = vminq_f32(v5, *(float32x4_t*)v41);
        v6 = vmaxq_f32(v6, *(float32x4_t*)(v41 + 12));
      } while (v7 != 0);
    }
  }
  v42 = vuzp1q_s32(v5, v6);
  result = vextq_s8(v6, v6, 4u);
  a1[2] = LANES128(result).n128_u64[0];
  *a1 = LANES128(v5).n128_u64[0];
  a1[1] = LANES128_OF(vzip2q_s32(v5, v42)).n128_u64[0];
  return result;
}

#pragma GCC visibility pop
