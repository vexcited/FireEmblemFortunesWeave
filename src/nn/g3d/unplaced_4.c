#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5fb240(__int64 result);
__int64 GameRoutine_603fb0(_QWORD, _QWORD);
__int64 GameRoutine_604160(_QWORD, _QWORD);
__int64 GameRoutine_604160_alt1(__int64, __int64*,
                                char*) __asm__("GameRoutine_604160");
__int64 GameRoutine_604da0(_QWORD, _QWORD);
__int64 nn_util_BinaryFileHeader_GetFirstBlock_1a0c2d0(__int64);
__int64 nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(_QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a83510;
extern __int128 GameData_1a837f0;
extern __int64* GameData_2134fd0[5];
__int64 nn_g3d_5f8720(__int64 result, float32x4_t* a2);
float32x4_t nn_g3d_5f8c60(__int64 a1, float32x4_t* a2, float32x4_t result);
__int64 nn_g3d_5f9420(__int64 result, float32x4_t* a2);
float32x4_t nn_g3d_5f96c0(__int64 a1, float32x4_t* a2, float32x4_t result);
float32x4_t nn_g3d_5f9fe0(__int64 a1, float32x4_t* a2, float32x4_t result);
_WORD* nn_g3d_5fa6a0(_WORD* result, double a2, double a3, double a4, double a5,
                     double a6, double a7, double a8, double a9);
__int64 nn_g3d_5fb140(__int64 a1, __int64 a2);
__int64 nn_g3d_5fb980(__int64 a1, __int64 a2);
__int64 nn_g3d_5fbf30(__int64* a1, _QWORD* a2, int a3);

__int64 nn_g3d_5f8720(__int64 result, float32x4_t* a2)
{
  __int64 v2;
  float32x4_t* v3;
  unsigned int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  __int64 v17;
  __int64 v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float32x4_t* v30;
  float32x4_t* v31;
  float32x4_t* v32;
  unsigned __int32 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;

  v2 = *(_QWORD*)(result + 24);
  v3 = *(float32x4_t**)(result + 32);
  v4 = *(unsigned __int16*)(result + 80);
  if ((~*(_DWORD*)v2 & 0xC000000) != 0) {
    v9 = *a2;
    v10 = a2[1];
    v11 = a2[2];
    v12 = a2[3];
    v13 = *(float32x4_t*)(v2 + 64);
    v14 = *(float32x4_t*)(v2 + 80);
    v15 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v2 + 48))), v10,
                       *(float32x2_t*)(v2 + 48), 1),
        v11, *(float32x4_t*)(v2 + 48), 2);
    v16 = vmlaq_lane_f32(vmulq_n_f32(*a2, LANES128(v13).n128_f32[0]), v10,
                         COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]), 1);
    *v3 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v2 + 32))), v10,
                       *(float32x2_t*)(v2 + 32), 1),
        v11, *(float32x4_t*)(v2 + 32), 2);
    v3[1] = v15;
    v3[2] = vmlaq_laneq_f32(v16, v11, v13, 2);
    v3[3] =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v9, LANES128(v14).n128_f32[0]), v10,
                          COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]), 1),
                      v11, v14, 2),
                  v12);
  }
  else {
    v5 = LANES128(a2[3]).n128_u64[1];
    LANES128(v3[2]).n128_u64[1] = LANES128(a2[2]).n128_u64[1];
    LANES128(v3[3]).n128_u64[1] = v5;
    v6 = LANES128(a2[1]).n128_u64[1];
    LANES128(*(v3)).n128_u64[1] = LANES128(*(a2)).n128_u64[1];
    LANES128(v3[1]).n128_u64[1] = v6;
    v7 = LANES128(*(a2)).n128_u64[0];
    LANES128(v3[1]).n128_u64[0] = LANES128(a2[1]).n128_u64[0];
    LANES128(*(v3)).n128_u64[0] = v7;
    v8 = LANES128(a2[2]).n128_u64[0];
    LANES128(v3[3]).n128_u64[0] = LANES128(a2[3]).n128_u64[0];
    LANES128(v3[2]).n128_u64[0] = v8;
  }
  *(_DWORD*)v2 = *(_DWORD*)v2 & 0xFFFFFFF | ((HIBYTE(*(_DWORD*)v2) & 3) << 28);
  if (v4 >= 2) {
    v17 = 0;
    v18 = 96LL * v4 - 96;
    do {
      while (1) {
        v27 = *(_QWORD*)(result + 16) + v17;
        v28 = *(unsigned __int16*)(v27 + 136);
        v29 = *(unsigned __int16*)(v27 + 138);
        v30 = &v3[4 * v28];
        v31 = (float32x4_t*)(v2 + 96LL * (unsigned int)v28);
        v32 = &v3[4 * v29];
        v33 = LANES128(*(v31)).n128_u32[0];
        LANES128(*(v31)).n128_u32[0] =
            *(_DWORD*)(v2 + 96LL * (unsigned int)v29) &
                (16 * LANES128(*(v31)).n128_u32[0]) & 0xF0000000 |
            LANES128(*(v31)).n128_u32[0] & 0xFFFFFFF;
        if ((~v33 & 0xC000000) == 0) {
          break;
        }
        v19 = *v32;
        v20 = v32[1];
        v21 = v32[2];
        v22 = v32[3];
        v23 = v31[4];
        v24 = v31[5];
        v25 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*v32, COERCE_FLOAT(*(_OWORD*)&v31[3])), v20,
                COERCE_AS(float32x2_t, LANES128(v31[3]).n128_u64[0]), 1),
            v21, v31[3], 2);
        v26 = vmlaq_lane_f32(vmulq_n_f32(*v32, LANES128(v23).n128_f32[0]), v20,
                             COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                             1);
        *v30 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*v32, COERCE_FLOAT(*(_OWORD*)&v31[2])), v20,
                COERCE_AS(float32x2_t, LANES128(v31[2]).n128_u64[0]), 1),
            v21, v31[2], 2);
        v30[1] = v25;
        v30[2] = vmlaq_laneq_f32(v26, v21, v23, 2);
        v30[3] = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v19, LANES128(v24).n128_f32[0]), v20,
                    COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]), 1),
                v21, v24, 2),
            v22);
        v17 += 96;
        if (v18 == v17) {
          return result;
        }
      }
      v34 = LANES128(v32[3]).n128_u64[1];
      LANES128(v30[2]).n128_u64[1] = LANES128(v32[2]).n128_u64[1];
      LANES128(v30[3]).n128_u64[1] = v34;
      v35 = LANES128(v32[1]).n128_u64[1];
      LANES128(*(v30)).n128_u64[1] = LANES128(*(v32)).n128_u64[1];
      LANES128(v30[1]).n128_u64[1] = v35;
      v36 = LANES128(*(v32)).n128_u64[0];
      LANES128(v30[1]).n128_u64[0] = LANES128(v32[1]).n128_u64[0];
      LANES128(*(v30)).n128_u64[0] = v36;
      v37 = LANES128(v32[2]).n128_u64[0];
      LANES128(v30[3]).n128_u64[0] = LANES128(v32[3]).n128_u64[0];
      LANES128(v30[2]).n128_u64[0] = v37;
      v17 += 96;
    } while (v18 != v17);
  }
  return result;
}

float32x4_t nn_g3d_5f8c60(__int64 a1, float32x4_t* a2, float32x4_t result)
{
  float32x4_t* v3;
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float32x4_t* v26;
  float32x2_t* v27;
  float32x4_t* v28;
  float32x4_t* v29;
  unsigned __int32 v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  __int64 v59;
  float32x2_t* v60;
  float32x4_t* v61;
  __int64 v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t* v68;
  float32x4_t* v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;

  v4 = *(_QWORD*)(a1 + 24);
  v3 = *(float32x4_t**)(a1 + 32);
  v5 = *(unsigned __int16*)(a1 + 80);
  if ((~*(_DWORD*)v4 & 0xC000000) != 0) {
    v10 = *a2;
    v11 = a2[1];
    v12 = a2[2];
    v13 = a2[3];
    v14 = *(float32x4_t*)(v4 + 64);
    v15 = *(float32x4_t*)(v4 + 80);
    v16 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v4 + 48))), v11,
                       *(float32x2_t*)(v4 + 48), 1),
        v12, *(float32x4_t*)(v4 + 48), 2);
    v17 = vmlaq_lane_f32(vmulq_n_f32(*a2, LANES128(v14).n128_f32[0]), v11,
                         COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]), 1);
    *v3 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v4 + 32))), v11,
                       *(float32x2_t*)(v4 + 32), 1),
        v12, *(float32x4_t*)(v4 + 32), 2);
    v3[1] = v16;
    result =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v10, LANES128(v15).n128_f32[0]), v11,
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]), 1),
                      v12, v15, 2),
                  v13);
    v3[2] = vmlaq_laneq_f32(v17, v12, v14, 2);
    v3[3] = result;
  }
  else {
    v6 = LANES128(a2[3]).n128_u64[1];
    LANES128(v3[2]).n128_u64[1] = LANES128(a2[2]).n128_u64[1];
    LANES128(v3[3]).n128_u64[1] = v6;
    v7 = LANES128(a2[1]).n128_u64[1];
    LANES128(*(v3)).n128_u64[1] = LANES128(*(a2)).n128_u64[1];
    LANES128(v3[1]).n128_u64[1] = v7;
    v8 = LANES128(*(a2)).n128_u64[0];
    LANES128(v3[1]).n128_u64[0] = LANES128(a2[1]).n128_u64[0];
    LANES128(*(v3)).n128_u64[0] = v8;
    v9 = LANES128(a2[2]).n128_u64[0];
    LANES128(v3[3]).n128_u64[0] = LANES128(a2[3]).n128_u64[0];
    LANES128(v3[2]).n128_u64[0] = v9;
  }
  *(_DWORD*)v4 = *(_DWORD*)v4 & 0xFFFFFFF | ((HIBYTE(*(_DWORD*)v4) & 3) << 28);
  if (v5 >= 2) {
    v18 = 0;
    while (1) {
      v23 = *(_QWORD*)(a1 + 16) + v18;
      v24 = *(unsigned __int16*)(v23 + 136);
      v25 = *(unsigned __int16*)(v23 + 138);
      v26 = &v3[4 * v24];
      v27 = (float32x2_t*)(v4 + 96LL * (unsigned int)v24);
      v28 = &v3[4 * v25];
      v29 = (float32x4_t*)(v4 + 96LL * (unsigned int)v25);
      v30 = LANES64(*(v27)).n64_u32[0];
      LANES64(*(v27)).n64_u32[0] = LANES128(*(v29)).n128_u32[0] &
                                       (16 * LANES64(*(v27)).n64_u32[0]) &
                                       0xF0000000 |
                                   LANES64(*(v27)).n64_u32[0] & 0xFFFFFFF;
      if ((~v30 & 0xC000000) == 0) {
        if ((v30 & 0x800000) != 0 ||
            (~LANES128(*(v29)).n128_u32[0] & 0x3000000) == 0) {
          v19 = LANES128(v28[3]).n128_u64[1];
          LANES128(v26[2]).n128_u64[1] = LANES128(v28[2]).n128_u64[1];
          LANES128(v26[3]).n128_u64[1] = v19;
          v20 = LANES128(v28[1]).n128_u64[1];
          LANES128(*(v26)).n128_u64[1] = LANES128(*(v28)).n128_u64[1];
          LANES128(v26[1]).n128_u64[1] = v20;
          v21 = LANES128(*(v28)).n128_u64[0];
          LANES128(v26[1]).n128_u64[0] = LANES128(v28[1]).n128_u64[0];
          LANES128(*(v26)).n128_u64[0] = v21;
          v22 = LANES128(v28[2]).n128_u64[0];
          LANES128(v26[3]).n128_u64[0] = LANES128(v28[3]).n128_u64[0];
          LANES128(v26[2]).n128_u64[0] = v22;
        }
        else {
          v31 = v29[1];
          v32 = v28[2];
          v33 = v28[3];
          v34 = vmulq_lane_f32(
              v28[1], COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]), 1);
          *v26 = vmulq_n_f32(*v28, LANES128(v31).n128_f32[0]);
          v26[1] = v34;
          result = vmulq_laneq_f32(v32, v31, 2);
          v26[2] = result;
          v26[3] = v33;
        }
        goto LABEL_7;
      }
      if ((~LANES128(*(v29)).n128_u32[0] & 0x3000000) == 0) {
        break;
      }
      if ((v30 & 0x800000) != 0) {
        v48 = LANES64(v27[7]).n64_u64[0];
        *(float32x2_t*)&LANES128(*(v26)).n128_i8[8] = v27[5];
        v49 = LANES64(v27[6]).n64_u64[0];
        LANES128(*(v26)).n128_u64[0] = LANES64(v27[4]).n64_u64[0];
        LANES128(v26[1]).n128_u64[0] = v49;
        LANES128(v26[1]).n128_u64[1] = v48;
        v50 = LANES64(v27[11]).n64_u64[0];
        v35 = *v26;
        v36 = v26[1];
        *(float32x2_t*)&LANES128(v26[2]).n128_i8[8] = v27[9];
        v51 = LANES64(v27[10]).n64_u64[0];
        LANES128(v26[2]).n128_u64[0] = LANES64(v27[8]).n64_u64[0];
        LANES128(v26[3]).n128_u64[0] = v51;
        LANES128(v26[3]).n128_u64[1] = v50;
        v37 = v26[2];
        v38 = vmulq_f32(v26[3], v29[1]);
        v26[3] = v38;
        goto LABEL_17;
      }
      v39 = v28[3];
      v40 = v29[1];
      v41 = vmulq_n_f32(*v28, LANES128(v40).n128_f32[0]);
      v42 = vmulq_lane_f32(
          v28[1], COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]), 1);
      v43 = vmulq_laneq_f32(v28[2], v40, 2);
      *v26 = v41;
      v26[1] = v42;
      v26[2] = v43;
      v26[3] = v39;
      v44 = *(float32x4_t*)LANES64(v27[8]).n64_u64;
      v45 = *(float32x4_t*)LANES64(v27[10]).n64_u64;
      v46 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v41, COERCE_FLOAT(*(_OWORD*)LANES64(v27[6]).n64_u64)),
              v42, v27[6], 1),
          v43, *(float32x4_t*)LANES64(v27[6]).n64_u64, 2);
      v47 = vmulq_n_f32(v41, LANES128(v44).n128_f32[0]);
      *v26 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v41, COERCE_FLOAT(*(_OWORD*)LANES64(v27[4]).n64_u64)),
              v42, v27[4], 1),
          v43, *(float32x4_t*)LANES64(v27[4]).n64_u64, 2);
      v26[1] = v46;
      result = vaddq_f32(
          v39, vmlaq_laneq_f32(
                   vmlaq_lane_f32(
                       vmulq_n_f32(v41, LANES128(v45).n128_f32[0]), v42,
                       COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]), 1),
                   v43, v45, 2));
      v26[2] = vmlaq_laneq_f32(
          vmlaq_lane_f32(v47, v42,
                         COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]), 1),
          v43, v44, 2);
    LABEL_18:
      v26[3] = result;
    LABEL_7:
      v18 += 96;
      if (96LL * v5 - 96 == v18) {
        goto LABEL_19;
      }
    }
    v35 = *(float32x4_t*)LANES64(v27[4]).n64_u64;
    v36 = *(float32x4_t*)LANES64(v27[6]).n64_u64;
    v37 = *(float32x4_t*)LANES64(v27[8]).n64_u64;
    v38 = *(float32x4_t*)LANES64(v27[10]).n64_u64;
  LABEL_17:
    v52 = *v28;
    v53 = v28[1];
    v54 = v28[2];
    v55 = v28[3];
    v56 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*v28, LANES128(v35).n128_f32[0]), v53,
                       COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]), 1),
        v54, v35, 2);
    v57 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*v28, LANES128(v36).n128_f32[0]), v53,
                       COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1),
        v54, v36, 2);
    v58 = vmlaq_lane_f32(vmulq_n_f32(*v28, LANES128(v37).n128_f32[0]), v53,
                         COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]), 1);
    *v26 = v56;
    v26[1] = v57;
    v26[2] = vmlaq_laneq_f32(v58, v54, v37, 2);
    result =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v52, LANES128(v38).n128_f32[0]), v53,
                          COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]), 1),
                      v54, v38, 2),
                  v55);
    goto LABEL_18;
  }
LABEL_19:
  if (v5 == 0) {
    return result;
  }
  if (v5 != 1) {
    v60 = (float32x2_t*)(v4 + 112);
    v61 = v3 + 4;
    v62 = 0;
    while (1) {
      if ((~LANES64(v60[-14]).n64_u32[0] & 0x3000000) != 0) {
        v63 = *(float32x4_t*)LANES64(v60[-12]).n64_u64;
        result = vmulq_n_f32(v61[-4], LANES128(v63).n128_f32[0]);
        v64 = vmulq_lane_f32(
            v61[-3], COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]), 1);
        v65 = vmulq_laneq_f32(v61[-2], v63, 2);
        v61[-4] = result;
        v61[-3] = v64;
        v61[-2] = v65;
        if ((~LANES64(v60[-2]).n64_u32[0] & 0x3000000) != 0) {
        LABEL_29:
          result = vmulq_n_f32(*v61,
                               COERCE_FLOAT(*(_OWORD*)LANES64(*(v60)).n64_u64));
          v66 = vmulq_lane_f32(
              v61[1], COERCE_AS(float32x2_t, LANES64(*(v60)).n64_u64[0]), 1);
          v67 = vmulq_laneq_f32(v61[2], *(float32x4_t*)LANES64(*(v60)).n64_u64,
                                2);
          *v61 = result;
          v61[1] = v66;
          v61[2] = v67;
        }
      }
      else if ((~LANES64(v60[-2]).n64_u32[0] & 0x3000000) != 0) {
        goto LABEL_29;
      }
      v60 += 24;
      v62 -= 2;
      v61 += 8;
      if (-(__int64)((unsigned __int16)v5 & 0xFFFE) == v62) {
        v59 = -v62;
        if ((v5 & 1) != 0) {
          goto LABEL_31;
        }
        return result;
      }
    }
  }
  v59 = 0;
LABEL_31:
  v68 = (float32x4_t*)(v4 + 96 * v59);
  if ((~LANES128(*(v68)).n128_u32[0] & 0x3000000) != 0) {
    v69 = &v3[4 * v59];
    v70 = v68[1];
    result = vmulq_n_f32(*v69, LANES128(v70).n128_f32[0]);
    v71 = vmulq_lane_f32(v69[1],
                         COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]), 1);
    v72 = vmulq_laneq_f32(v69[2], v70, 2);
    *v69 = result;
    v69[1] = v71;
    v69[2] = v72;
  }
  return result;
}

__int64 nn_g3d_5f9420(__int64 result, float32x4_t* a2)
{
  __int64 v2;
  float32x4_t* v3;
  int v4;
  _QWORD* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float32x4_t* v24;
  float32x4_t* v25;
  float32x4_t* v26;
  unsigned __int32 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  __int64 v40;
  __int64 v41;
  _QWORD v42[2];
  __int64 v43;
  int* v44;
  __int64 v45;
  int v46;

  v2 = *(_QWORD*)(result + 24);
  v3 = *(float32x4_t**)(result + 32);
  v4 = *(unsigned __int16*)(result + 80);
  v5 = (_QWORD*)result;
  if ((~*(_DWORD*)v2 & 0xC000000) != 0) {
    v10 = *a2;
    v11 = a2[1];
    v12 = a2[2];
    v13 = a2[3];
    v14 = *(float32x4_t*)(v2 + 64);
    v15 = *(float32x4_t*)(v2 + 80);
    v16 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v2 + 48))), v11,
                       *(float32x2_t*)(v2 + 48), 1),
        v12, *(float32x4_t*)(v2 + 48), 2);
    v17 = vmlaq_lane_f32(vmulq_n_f32(*a2, LANES128(v14).n128_f32[0]), v11,
                         COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]), 1);
    *v3 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v2 + 32))), v11,
                       *(float32x2_t*)(v2 + 32), 1),
        v12, *(float32x4_t*)(v2 + 32), 2);
    v3[1] = v16;
    v3[2] = vmlaq_laneq_f32(v17, v12, v14, 2);
    v3[3] =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v10, LANES128(v15).n128_f32[0]), v11,
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]), 1),
                      v12, v15, 2),
                  v13);
  }
  else {
    v6 = LANES128(a2[3]).n128_u64[1];
    LANES128(v3[2]).n128_u64[1] = LANES128(a2[2]).n128_u64[1];
    LANES128(v3[3]).n128_u64[1] = v6;
    v7 = LANES128(a2[1]).n128_u64[1];
    LANES128(*(v3)).n128_u64[1] = LANES128(*(a2)).n128_u64[1];
    LANES128(v3[1]).n128_u64[1] = v7;
    v8 = LANES128(*(a2)).n128_u64[0];
    LANES128(v3[1]).n128_u64[0] = LANES128(a2[1]).n128_u64[0];
    LANES128(*(v3)).n128_u64[0] = v8;
    v9 = LANES128(a2[2]).n128_u64[0];
    LANES128(v3[3]).n128_u64[0] = LANES128(a2[3]).n128_u64[0];
    LANES128(v3[2]).n128_u64[0] = v9;
  }
  *(_DWORD*)v2 = *(_DWORD*)v2 & 0xFFFFFFF | ((HIBYTE(*(_DWORD*)v2) & 3) << 28);
  v46 = 0;
  v44 = &v46;
  v45 = 0;
  LODWORD(v45) = *(unsigned __int16*)(result + 82);
  if ((_DWORD)v45 == 0) {
    v19 = *(_QWORD*)(result + 24);
    v20 = *(_QWORD*)(result + 88);
    v42[0] = v5[4];
    v42[1] = 0;
    v43 = v19;
    result = (*(__int64 (**)(__int64, int**, _QWORD*))(*(_QWORD*)v20 + 16LL))(
        v20, &v44, v42);
    v18 = v46 + 1;
    v46 = v18;
    if (v18 >= v4) {
      return result;
    }
    while (1) {
    LABEL_10:
      v21 = v5[2] + 96LL * v18;
      v22 = *(unsigned __int16*)(v21 + 40);
      v23 = *(unsigned __int16*)(v21 + 42);
      v24 = &v3[4 * v22];
      v25 = (float32x4_t*)(v2 + 96LL * (unsigned int)v22);
      v26 = &v3[4 * v23];
      v27 = LANES128(*(v25)).n128_u32[0];
      LANES128(*(v25)).n128_u32[0] = *(_DWORD*)(v2 + 96LL * (unsigned int)v23) &
                                         (16 * LANES128(*(v25)).n128_u32[0]) &
                                         0xF0000000 |
                                     LANES128(*(v25)).n128_u32[0] & 0xFFFFFFF;
      if ((~v27 & 0xC000000) != 0) {
        v32 = *v26;
        v33 = v26[1];
        v34 = v26[2];
        v35 = v26[3];
        v36 = v25[4];
        v37 = v25[5];
        v38 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*v26, COERCE_FLOAT(*(_OWORD*)&v25[3])), v33,
                COERCE_AS(float32x2_t, LANES128(v25[3]).n128_u64[0]), 1),
            v34, v25[3], 2);
        v39 = vmlaq_lane_f32(vmulq_n_f32(*v26, LANES128(v36).n128_f32[0]), v33,
                             COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                             1);
        *v24 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*v26, COERCE_FLOAT(*(_OWORD*)&v25[2])), v33,
                COERCE_AS(float32x2_t, LANES128(v25[2]).n128_u64[0]), 1),
            v34, v25[2], 2);
        v24[1] = v38;
        v24[2] = vmlaq_laneq_f32(v39, v34, v36, 2);
        v24[3] = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v32, LANES128(v37).n128_f32[0]), v33,
                    COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]), 1),
                v34, v37, 2),
            v35);
        if ((_DWORD)v45 == v18) {
        LABEL_14:
          v40 = v5[3];
          v41 = v5[11];
          v42[0] = v5[4] + ((__int64)v18 << 6);
          v42[1] = 0;
          v43 = v40 + 96LL * v18;
          result = (*(__int64 (**)(__int64, int**, _QWORD*))(
              *(_QWORD*)v41 + 16LL))(v41, &v44, v42);
          v18 = v46;
        }
      }
      else {
        v28 = LANES128(v26[3]).n128_u64[1];
        LANES128(v24[2]).n128_u64[1] = LANES128(v26[2]).n128_u64[1];
        LANES128(v24[3]).n128_u64[1] = v28;
        v29 = LANES128(v26[1]).n128_u64[1];
        LANES128(*(v24)).n128_u64[1] = LANES128(*(v26)).n128_u64[1];
        LANES128(v24[1]).n128_u64[1] = v29;
        v30 = LANES128(*(v26)).n128_u64[0];
        LANES128(v24[1]).n128_u64[0] = LANES128(v26[1]).n128_u64[0];
        LANES128(*(v24)).n128_u64[0] = v30;
        v31 = LANES128(v26[2]).n128_u64[0];
        LANES128(v24[3]).n128_u64[0] = LANES128(v26[3]).n128_u64[0];
        LANES128(v24[2]).n128_u64[0] = v31;
        if ((_DWORD)v45 == v18) {
          goto LABEL_14;
        }
      }
      v46 = ++v18;
      if (v18 >= v4) {
        return result;
      }
    }
  }
  v18 = 1;
  v46 = 1;
  if (v4 > 1) {
    goto LABEL_10;
  }
  return result;
}

float32x4_t nn_g3d_5f96c0(__int64 a1, float32x4_t* a2, float32x4_t result)
{
  float32x4_t* v3;
  __int64 v4;
  int v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float32x4_t* v25;
  float32x4_t* v26;
  float32x4_t* v27;
  float32x4_t* v28;
  unsigned __int32 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  float32x2_t* v53;
  float32x4_t* v54;
  __int64 v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t* v61;
  float32x4_t* v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  struct {
    _QWORD v66[2];
    __int64 v67;
  } v66_;
  struct {
    int* v68;
    __int64 v69;
  } v68_;
  int v70;

  v4 = *(_QWORD*)(a1 + 24);
  v3 = *(float32x4_t**)(a1 + 32);
  v5 = *(unsigned __int16*)(a1 + 80);
  if ((~*(_DWORD*)v4 & 0xC000000) != 0) {
    v11 = *a2;
    v12 = a2[1];
    v13 = a2[2];
    v14 = a2[3];
    v15 = *(float32x4_t*)(v4 + 64);
    v16 = *(float32x4_t*)(v4 + 80);
    v17 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v4 + 48))), v12,
                       *(float32x2_t*)(v4 + 48), 1),
        v13, *(float32x4_t*)(v4 + 48), 2);
    v18 = vmlaq_lane_f32(vmulq_n_f32(*a2, LANES128(v15).n128_f32[0]), v12,
                         COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]), 1);
    *v3 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v4 + 32))), v12,
                       *(float32x2_t*)(v4 + 32), 1),
        v13, *(float32x4_t*)(v4 + 32), 2);
    v3[1] = v17;
    result =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v11, LANES128(v16).n128_f32[0]), v12,
                          COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1),
                      v13, v16, 2),
                  v14);
    v3[2] = vmlaq_laneq_f32(v18, v13, v15, 2);
    v3[3] = result;
  }
  else {
    v7 = LANES128(a2[3]).n128_u64[1];
    LANES128(v3[2]).n128_u64[1] = LANES128(a2[2]).n128_u64[1];
    LANES128(v3[3]).n128_u64[1] = v7;
    v8 = LANES128(a2[1]).n128_u64[1];
    LANES128(*(v3)).n128_u64[1] = LANES128(*(a2)).n128_u64[1];
    LANES128(v3[1]).n128_u64[1] = v8;
    v9 = LANES128(*(a2)).n128_u64[0];
    LANES128(v3[1]).n128_u64[0] = LANES128(a2[1]).n128_u64[0];
    LANES128(*(v3)).n128_u64[0] = v9;
    v10 = LANES128(a2[2]).n128_u64[0];
    LANES128(v3[3]).n128_u64[0] = LANES128(a2[3]).n128_u64[0];
    LANES128(v3[2]).n128_u64[0] = v10;
  }
  *(_DWORD*)v4 = *(_DWORD*)v4 & 0xFFFFFFF | ((HIBYTE(*(_DWORD*)v4) & 3) << 28);
  v70 = 0;
  v68_.v68 = &v70;
  v68_.v69 = 0;
  LODWORD(v68_.v69) = *(unsigned __int16*)(a1 + 82);
  if ((_DWORD)v68_.v69 == 0) {
    v20 = *(_QWORD*)(a1 + 24);
    v21 = *(_QWORD*)(a1 + 88);
    v66_.v66[0] = *(_QWORD*)(a1 + 32);
    v66_.v66[1] = v4 + 16;
    v66_.v67 = v20;
    (*(void (**)(__int64, int**, _QWORD*))(*(_QWORD*)v21 + 16LL))(
        v21, &v68_.v68, v66_.v66);
    v19 = v70 + 1;
    v70 = v19;
    if (v19 >= v5) {
      goto LABEL_21;
    }
    while (1) {
    LABEL_10:
      v22 = *(_QWORD*)(a1 + 16) + 96LL * v19;
      v23 = *(unsigned __int16*)(v22 + 40);
      v24 = *(unsigned __int16*)(v22 + 42);
      v25 = &v3[4 * v23];
      v26 = (float32x4_t*)(v4 + 96LL * (unsigned int)v23);
      v27 = &v3[4 * v24];
      v28 = (float32x4_t*)(v4 + 96LL * (unsigned int)v24);
      v29 = LANES128(*(v26)).n128_u32[0];
      LANES128(*(v26)).n128_u32[0] = LANES128(*(v28)).n128_u32[0] &
                                         (16 * LANES128(*(v26)).n128_u32[0]) &
                                         0xF0000000 |
                                     LANES128(*(v26)).n128_u32[0] & 0xFFFFFFF;
      if ((~LANES128(*(v28)).n128_u32[0] & 0x3000000) != 0) {
        result = v27[3];
        v34 = v28[1];
        v35 = vmulq_n_f32(*v27, LANES128(v34).n128_f32[0]);
        v36 = vmulq_lane_f32(
            v27[1], COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]), 1);
        v37 = vmulq_laneq_f32(v27[2], v34, 2);
        *v25 = v35;
        v25[1] = v36;
        v25[2] = v37;
        v25[3] = result;
        if ((~LANES128(*(v26)).n128_u32[0] & 0xC000000) != 0) {
          v46 = v26[4];
          v47 = v26[5];
          v48 = vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v35, COERCE_FLOAT(*(_OWORD*)&v26[3])), v36,
                  COERCE_AS(float32x2_t, LANES128(v26[3]).n128_u64[0]), 1),
              v37, v26[3], 2);
          *v25 = vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v35, COERCE_FLOAT(*(_OWORD*)&v26[2])), v36,
                  COERCE_AS(float32x2_t, LANES128(v26[2]).n128_u64[0]), 1),
              v37, v26[2], 2);
          v25[1] = v48;
          result = vaddq_f32(
              result,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v35, LANES128(v47).n128_f32[0]), v36,
                      COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]), 1),
                  v37, v47, 2));
          v25[2] = vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v35, LANES128(v46).n128_f32[0]), v36,
                             COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]),
                             1),
              v37, v46, 2);
          v25[3] = result;
          if ((_DWORD)v68_.v69 == v19) {
          LABEL_20:
            v49 = *(_QWORD*)(a1 + 88);
            v50 = *(_QWORD*)(a1 + 32) + ((__int64)v19 << 6);
            v51 = 96LL * v19;
            v66_.v67 = *(_QWORD*)(a1 + 24) + v51;
            v66_.v66[0] = v50;
            v66_.v66[1] = v4 + v51 + 16;
            (*(void (**)(__int64, int**, _QWORD*))(*(_QWORD*)v49 + 16LL))(
                v49, &v68_.v68, v66_.v66);
            v19 = v70;
          }
        }
        else if ((_DWORD)v68_.v69 == v19) {
          goto LABEL_20;
        }
      }
      else if ((~v29 & 0xC000000) != 0) {
        v38 = *v27;
        v39 = v27[1];
        v40 = v27[2];
        v41 = v27[3];
        v42 = v26[4];
        v43 = v26[5];
        v44 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*v27, COERCE_FLOAT(*(_OWORD*)&v26[3])), v39,
                COERCE_AS(float32x2_t, LANES128(v26[3]).n128_u64[0]), 1),
            v40, v26[3], 2);
        v45 = vmlaq_lane_f32(vmulq_n_f32(*v27, LANES128(v42).n128_f32[0]), v39,
                             COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                             1);
        *v25 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*v27, COERCE_FLOAT(*(_OWORD*)&v26[2])), v39,
                COERCE_AS(float32x2_t, LANES128(v26[2]).n128_u64[0]), 1),
            v40, v26[2], 2);
        v25[1] = v44;
        result = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v38, LANES128(v43).n128_f32[0]), v39,
                    COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]), 1),
                v40, v43, 2),
            v41);
        v25[2] = vmlaq_laneq_f32(v45, v40, v42, 2);
        v25[3] = result;
        if ((_DWORD)v68_.v69 == v19) {
          goto LABEL_20;
        }
      }
      else {
        v30 = LANES128(v27[3]).n128_u64[1];
        LANES128(v25[2]).n128_u64[1] = LANES128(v27[2]).n128_u64[1];
        LANES128(v25[3]).n128_u64[1] = v30;
        v31 = LANES128(v27[1]).n128_u64[1];
        LANES128(*(v25)).n128_u64[1] = LANES128(*(v27)).n128_u64[1];
        LANES128(v25[1]).n128_u64[1] = v31;
        v32 = LANES128(*(v27)).n128_u64[0];
        LANES128(v25[1]).n128_u64[0] = LANES128(v27[1]).n128_u64[0];
        LANES128(*(v25)).n128_u64[0] = v32;
        v33 = LANES128(v27[2]).n128_u64[0];
        LANES128(v25[3]).n128_u64[0] = LANES128(v27[3]).n128_u64[0];
        LANES128(v25[2]).n128_u64[0] = v33;
        if ((_DWORD)v68_.v69 == v19) {
          goto LABEL_20;
        }
      }
      v70 = ++v19;
      if (v19 >= v5) {
        goto LABEL_21;
      }
    }
  }
  v19 = 1;
  v70 = 1;
  if (v5 > 1) {
    goto LABEL_10;
  }
LABEL_21:
  if (v5 == 0) {
    return result;
  }
  if (v5 != 1) {
    v53 = (float32x2_t*)(v4 + 112);
    v54 = v3 + 4;
    v55 = 0;
    while (1) {
      if ((~LANES64(v53[-14]).n64_u32[0] & 0x3000000) != 0) {
        v56 = *(float32x4_t*)LANES64(v53[-12]).n64_u64;
        result = vmulq_n_f32(v54[-4], LANES128(v56).n128_f32[0]);
        v57 = vmulq_lane_f32(
            v54[-3], COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]), 1);
        v58 = vmulq_laneq_f32(v54[-2], v56, 2);
        v54[-4] = result;
        v54[-3] = v57;
        v54[-2] = v58;
        if ((~LANES64(v53[-2]).n64_u32[0] & 0x3000000) != 0) {
        LABEL_30:
          result = vmulq_n_f32(*v54,
                               COERCE_FLOAT(*(_OWORD*)LANES64(*(v53)).n64_u64));
          v59 = vmulq_lane_f32(
              v54[1], COERCE_AS(float32x2_t, LANES64(*(v53)).n64_u64[0]), 1);
          v60 = vmulq_laneq_f32(v54[2], *(float32x4_t*)LANES64(*(v53)).n64_u64,
                                2);
          *v54 = result;
          v54[1] = v59;
          v54[2] = v60;
        }
      }
      else if ((~LANES64(v53[-2]).n64_u32[0] & 0x3000000) != 0) {
        goto LABEL_30;
      }
      v53 += 24;
      v55 -= 2;
      v54 += 8;
      if (-(__int64)((unsigned __int16)v5 & 0xFFFE) == v55) {
        v52 = -v55;
        if ((v5 & 1) != 0) {
          goto LABEL_32;
        }
        return result;
      }
    }
  }
  v52 = 0;
LABEL_32:
  v61 = (float32x4_t*)(v4 + 96 * v52);
  if ((~LANES128(*(v61)).n128_u32[0] & 0x3000000) != 0) {
    v62 = &v3[4 * v52];
    v63 = v61[1];
    result = vmulq_n_f32(*v62, LANES128(v63).n128_f32[0]);
    v64 = vmulq_lane_f32(v62[1],
                         COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]), 1);
    v65 = vmulq_laneq_f32(v62[2], v63, 2);
    *v62 = result;
    v62[1] = v64;
    v62[2] = v65;
  }
  return result;
}

float32x4_t nn_g3d_5f9fe0(__int64 a1, float32x4_t* a2, float32x4_t result)
{
  float32x4_t* v3;
  float32x4_t* v4;
  int v5;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  unsigned __int32 v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  float32x4_t* v29;
  float32x4_t* v30;
  float32x4_t* v31;
  float32x4_t* v32;
  unsigned __int32 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  float32x4_t* v38;
  float32x4_t* v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float32x4_t* v58;
  float32x2_t* v59;
  __int64 v60;
  float32x4_t* v61;
  float32x4_t* v62;
  unsigned __int32 v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t* v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  struct {
    _QWORD v73[2];
    __int64 v74;
  } v73_;
  struct {
    int* v75;
    int v76;
    int v77;
  } v75_;
  int v78;

  v4 = *(float32x4_t**)(a1 + 24);
  v3 = *(float32x4_t**)(a1 + 32);
  v5 = *(unsigned __int16*)(a1 + 80);
  v7 = *(_QWORD*)(a1 + 40);
  if ((~LANES128(*(v4)).n128_u32[0] & 0xC000000) != 0) {
    v12 = *a2;
    v13 = a2[1];
    v14 = a2[2];
    v15 = a2[3];
    v16 = v4[4];
    v17 = v4[5];
    v18 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)&v4[3])), v13,
                       COERCE_AS(float32x2_t, LANES128(v4[3]).n128_u64[0]), 1),
        v14, v4[3], 2);
    v19 = vmlaq_lane_f32(vmulq_n_f32(*a2, LANES128(v16).n128_f32[0]), v13,
                         COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1);
    *v3 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)&v4[2])), v13,
                       COERCE_AS(float32x2_t, LANES128(v4[2]).n128_u64[0]), 1),
        v14, v4[2], 2);
    v3[1] = v18;
    result =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v12, LANES128(v17).n128_f32[0]), v13,
                          COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]), 1),
                      v14, v17, 2),
                  v15);
    v3[2] = vmlaq_laneq_f32(v19, v14, v16, 2);
    v3[3] = result;
  }
  else {
    v8 = LANES128(a2[3]).n128_u64[1];
    LANES128(v3[2]).n128_u64[1] = LANES128(a2[2]).n128_u64[1];
    LANES128(v3[3]).n128_u64[1] = v8;
    v9 = LANES128(a2[1]).n128_u64[1];
    LANES128(*(v3)).n128_u64[1] = LANES128(*(a2)).n128_u64[1];
    LANES128(v3[1]).n128_u64[1] = v9;
    v10 = LANES128(*(a2)).n128_u64[0];
    LANES128(v3[1]).n128_u64[0] = LANES128(a2[1]).n128_u64[0];
    LANES128(*(v3)).n128_u64[0] = v10;
    v11 = LANES128(a2[2]).n128_u64[0];
    LANES128(v3[3]).n128_u64[0] = LANES128(a2[3]).n128_u64[0];
    LANES128(v3[2]).n128_u64[0] = v11;
  }
  v20 = LANES128(*(v4)).n128_u32[0];
  LANES128(*(v4)).n128_u32[0] =
      LANES128(*(v4)).n128_u32[0] & 0xFFFFFFF |
      ((HIBYTE(LANES128(*(v4)).n128_u32[0]) & 3) << 28);
  if ((~v20 & 0x3000000) == 0) {
    result = COERCE_AS(float32x4_t, GameData_1a837f0);
    *(_OWORD*)v7 = GameData_1a837f0;
    v21 = *(unsigned __int16*)(a1 + 82);
    v78 = 0;
    v75_.v75 = &v78;
    v75_.v77 = 0;
    v75_.v76 = v21;
    if (v21 != 0) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  *(_QWORD*)(v7 + 8) = LANES128(v4[1]).n128_u64[1];
  *(_QWORD*)v7 = LANES128(v4[1]).n128_u64[0];
  v23 = *(unsigned __int16*)(a1 + 82);
  v78 = 0;
  v75_.v75 = &v78;
  v75_.v77 = 0;
  v75_.v76 = v23;
  if (v23 == 0) {
  LABEL_9:
    v24 = *(_QWORD*)(a1 + 24);
    v25 = *(_QWORD*)(a1 + 88);
    v73_.v73[0] = *(_QWORD*)(a1 + 32);
    v73_.v73[1] = v7;
    v73_.v74 = v24;
    (*(void (**)(__int64, int**, _QWORD*))(*(_QWORD*)v25 + 16LL))(
        v25, &v75_.v75, v73_.v73);
    v22 = v78 + 1;
    v78 = v22;
    if (v22 >= v5) {
      goto LABEL_22;
    }
    while (1) {
    LABEL_12:
      v26 = *(_QWORD*)(a1 + 16) + 96LL * v22;
      v27 = *(unsigned __int16*)(v26 + 40);
      v28 = *(unsigned __int16*)(v26 + 42);
      v29 = &v4[6 * v27];
      v30 = &v4[6 * (unsigned int)v28];
      v31 = &v3[4 * v27];
      v32 = &v3[4 * v28];
      v33 = LANES128(*(v29)).n128_u32[0];
      LANES128(*(v29)).n128_u32[0] = LANES128(*(v30)).n128_u32[0] &
                                         (16 * LANES128(*(v29)).n128_u32[0]) &
                                         0xF0000000 |
                                     LANES128(*(v29)).n128_u32[0] & 0xFFFFFFF;
      if ((~v33 & 0xC000000) != 0) {
        if ((~LANES128(*(v30)).n128_u32[0] & 0x30000000) != 0) {
          v44 = LANES128(v29[3]).n128_u64[1];
          LANES128(*(v31)).n128_u64[1] = LANES128(v29[2]).n128_u64[1];
          v45 = LANES128(v29[3]).n128_u64[0];
          LANES128(*(v31)).n128_u64[0] = LANES128(v29[2]).n128_u64[0];
          LANES128(v31[1]).n128_u64[0] = v45;
          LANES128(v31[1]).n128_u64[1] = v44;
          v46 = LANES128(v29[5]).n128_u64[1];
          v40 = *v31;
          v41 = v31[1];
          LANES128(v31[2]).n128_u64[1] = LANES128(v29[4]).n128_u64[1];
          v47 = LANES128(v29[5]).n128_u64[0];
          LANES128(v31[2]).n128_u64[0] = LANES128(v29[4]).n128_u64[0];
          LANES128(v31[3]).n128_u64[0] = v47;
          LANES128(v31[3]).n128_u64[1] = v46;
          v42 = v31[2];
          v43 = vmulq_f32(v31[3], v30[1]);
          v31[3] = v43;
        }
        else {
          v40 = v29[2];
          v41 = v29[3];
          v42 = v29[4];
          v43 = v29[5];
        }
        v48 = *v32;
        v49 = v32[1];
        v50 = v32[2];
        v51 = v32[3];
        v52 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(*v32, LANES128(v40).n128_f32[0]), v49,
                           COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                           1),
            v50, v40, 2);
        v53 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(*v32, LANES128(v41).n128_f32[0]), v49,
                           COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                           1),
            v50, v41, 2);
        v54 = vmlaq_lane_f32(vmulq_n_f32(*v32, LANES128(v42).n128_f32[0]), v49,
                             COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                             1);
        *v31 = v52;
        v31[1] = v53;
        result = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v48, LANES128(v43).n128_f32[0]), v49,
                    COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]), 1),
                v50, v43, 2),
            v51);
        v31[2] = vmlaq_laneq_f32(v54, v50, v42, 2);
        v31[3] = result;
        v38 = (float32x4_t*)(v7 + 16 * v27);
        v39 = (float32x4_t*)(v7 + 16 * v28);
        if ((~LANES128(*(v29)).n128_u32[0] & 0x3000000) != 0) {
        LABEL_14:
          result = vmulq_f32(*v39, v29[1]);
          *v38 = result;
          if (v75_.v76 == v22) {
            goto LABEL_21;
          }
          goto LABEL_11;
        }
      }
      else {
        v34 = LANES128(v32[3]).n128_u64[1];
        LANES128(v31[2]).n128_u64[1] = LANES128(v32[2]).n128_u64[1];
        LANES128(v31[3]).n128_u64[1] = v34;
        v35 = LANES128(v32[1]).n128_u64[1];
        LANES128(*(v31)).n128_u64[1] = LANES128(*(v32)).n128_u64[1];
        LANES128(v31[1]).n128_u64[1] = v35;
        v36 = LANES128(*(v32)).n128_u64[0];
        LANES128(v31[1]).n128_u64[0] = LANES128(v32[1]).n128_u64[0];
        LANES128(*(v31)).n128_u64[0] = v36;
        v37 = LANES128(v32[2]).n128_u64[0];
        LANES128(v31[3]).n128_u64[0] = LANES128(v32[3]).n128_u64[0];
        LANES128(v31[2]).n128_u64[0] = v37;
        v38 = (float32x4_t*)(v7 + 16 * v27);
        v39 = (float32x4_t*)(v7 + 16 * v28);
        if ((~LANES128(*(v29)).n128_u32[0] & 0x3000000) != 0) {
          goto LABEL_14;
        }
      }
      LANES128(*(v38)).n128_u64[1] = LANES128(*(v39)).n128_u64[1];
      LANES128(*(v38)).n128_u64[0] = LANES128(*(v39)).n128_u64[0];
      if (v75_.v76 == v22) {
      LABEL_21:
        v55 = *(_QWORD*)(a1 + 24);
        v56 = *(_QWORD*)(a1 + 88);
        v73_.v73[0] = *(_QWORD*)(a1 + 32) + ((__int64)v22 << 6);
        v73_.v73[1] = v7 + 16LL * v22;
        v73_.v74 = v55 + 96LL * v22;
        (*(void (**)(__int64, int**, _QWORD*))(*(_QWORD*)v56 + 16LL))(
            v56, &v75_.v75, v73_.v73);
        v22 = v78;
      }
    LABEL_11:
      v78 = ++v22;
      if (v22 >= v5) {
        goto LABEL_22;
      }
    }
  }
LABEL_6:
  v22 = 1;
  v78 = 1;
  if (v5 > 1) {
    goto LABEL_12;
  }
LABEL_22:
  if (v5 == 0) {
    return result;
  }
  if (v5 != 1) {
    v58 = v3 + 4;
    v59 = (float32x2_t*)(v7 + 16);
    v60 = 0;
    v61 = v4;
    v62 = v4;
    while (1) {
      v63 = LANES128(*(v62)).n128_u32[0];
      v62 += 12;
      if ((~v63 & 0x30000000) != 0) {
        v64 = *(float32x4_t*)LANES64(v59[-2]).n64_u64;
        result = vmulq_n_f32(v58[-4], LANES128(v64).n128_f32[0]);
        v65 = vmulq_lane_f32(
            v58[-3], COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]), 1);
        v66 = vmulq_laneq_f32(v58[-2], v64, 2);
        v58[-4] = result;
        v58[-3] = v65;
        v58[-2] = v66;
        if ((~LANES128(v61[6]).n128_u32[0] & 0x30000000) != 0) {
        LABEL_31:
          result = vmulq_n_f32(*v58,
                               COERCE_FLOAT(*(_OWORD*)LANES64(*(v59)).n64_u64));
          v67 = vmulq_lane_f32(
              v58[1], COERCE_AS(float32x2_t, LANES64(*(v59)).n64_u64[0]), 1);
          v68 = vmulq_laneq_f32(v58[2], *(float32x4_t*)LANES64(*(v59)).n64_u64,
                                2);
          *v58 = result;
          v58[1] = v67;
          v58[2] = v68;
        }
      }
      else if ((~LANES128(v61[6]).n128_u32[0] & 0x30000000) != 0) {
        goto LABEL_31;
      }
      v60 -= 2;
      v58 += 8;
      v59 += 4;
      v61 = v62;
      if (-(__int64)((unsigned __int16)v5 & 0xFFFE) == v60) {
        v57 = -v60;
        if ((v5 & 1) != 0) {
          goto LABEL_33;
        }
        return result;
      }
    }
  }
  v57 = 0;
LABEL_33:
  if ((~LANES128(v4[6 * v57]).n128_u32[0] & 0x30000000) != 0) {
    v69 = &v3[4 * v57];
    v70 = *(float32x4_t*)(v7 + 16 * v57);
    result = vmulq_n_f32(*v69, LANES128(v70).n128_f32[0]);
    v71 = vmulq_lane_f32(v69[1],
                         COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]), 1);
    v72 = vmulq_laneq_f32(v69[2], v70, 2);
    *v69 = result;
    v69[1] = v71;
    v69[2] = v72;
  }
  return result;
}

_WORD* nn_g3d_5fa6a0(_WORD* result, double a2, double a3, double a4, double a5,
                     double a6, double a7, double a8, double a9)
{
  int32x2_t v9;
  int32x2_t v10;
  __int64 v11;
  __int64 v12;
  float32x4_t v13;
  __int64 v14;
  __int64 v15;
  int32x4_t v16;
  int32x4_t v17;
  float v18;
  int32x4_t v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  float v23;
  int32x4_t v24;
  int32x4_t v25;
  int32x4_t v26;
  int32x4_t v27;
  int32x4_t v28;
  int32x4_t v29;
  int32x4_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  __int64 v34;
  __int64 v35;
  __int128 v36;
  float32x4_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  int8x16_t v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  int8x16_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int128 v55;
  float32x4_t v56;
  unsigned __int64 v57;
  float32x4_t v58;
  float32x4_t v59;
  unsigned __int64 v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  int8x16x2_t v67;
  int8x16x2_t v68;
  int8x16x2_t v69;

  v11 = *((_QWORD*)result + 3);
  v12 = *(unsigned __int16*)(*(_QWORD*)result + 56LL);
  if ((result[4] & 0x7000) != 0) {
    if (*(_WORD*)(*(_QWORD*)result + 56LL) != 0) {
      LANES128(v13).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v13).n128_u64[1] = 0x3F8000003F800000LL;
      v14 = 0;
      v15 = 96 * v12;
      v16 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
      v17 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
      v18 = -*(float*)GameData_212c190;
      v19 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v16).n128_u64[0]), 0);
      v20 = vdupq_laneq_s32(v16, 2);
      v21 = vdupq_n_s32(0x3E22F983u);
      v22 = vdupq_n_s32(0xC0C90FDB);
      *(float*)&a8 = -COERCE_FLOAT(HIDWORD(
          *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190)));
      *(float*)&a9 = -COERCE_FLOAT(HIDWORD(
          *(_OWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190)));
      v23 = -*(float*)GameData_212c188;
      v24 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v17).n128_u64[0]), 0);
      v25 = vdupq_laneq_s32(v17, 2);
      v26 = vdupq_n_s32(0x3FC90FDBu);
      v27 = vdupq_lane_s32(*(int32x2_t*)&a8, 0);
      v28 = vdupq_lane_s32(*(int32x2_t*)&a9, 0);
      v29 = vdupq_n_s32(0x40490FDBu);
      PSEUDO_LOW_LANE64(
          v9, n64_f32,
          -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c188))));
      PSEUDO_LOW_LANE64(
          v10, n64_f32,
          -COERCE_FLOAT(HIDWORD(*(_OWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c188))));
      v30 = vdupq_n_s32(0xBFC90FDB);
      v31 = vdupq_lane_s32(v9, 0);
      v32 = vdupq_lane_s32(v10, 0);
      v33 = vdupq_n_s32(0xC0490FDB);
      do {
        v34 = v11 + v14;
        v35 = *(_QWORD*)(*(_QWORD*)result + 16LL) + v14;
        v14 += 96;
        *(_DWORD*)v34 = *(_DWORD*)(v35 + 52) & 0xF870000;
        *(_QWORD*)&v36 = *(_QWORD*)(v35 + 56);
        *((_QWORD*)&v36 + 1) = *(unsigned int*)(v35 + 64);
        *(_OWORD*)(v34 + 16) = v36;
        LANES128(v37).n128_u64[0] = *(_QWORD*)(v35 + 68);
        LANES128(v37).n128_u64[1] = *(unsigned int*)(v35 + 76);
        *(_QWORD*)&v36 = *(_QWORD*)(v35 + 84);
        *((_QWORD*)&v36 + 1) = *(unsigned int*)(v35 + 92);
        v38 = vmlaq_f32(v37, v22, vrndnq_f32(vmulq_f32(v37, v21)));
        v39 = vcgtq_f32(v38, v26);
        v40 = vbslq_s8(v39, vsubq_f32(v29, v38), v38);
        v41 = vmvnq_s8(v39);
        v42 = vcgtq_f32(v30, v40);
        v43 = vbslq_s8(v42, vsubq_f32(v33, v40), v40);
        v44 = vmulq_f32(v43, v43);
        v45 = vmulq_f32(
            v43,
            vmlaq_f32(
                v13, v44,
                vmlaq_f32(v28, v44,
                          vmlaq_f32(v20, v44,
                                    vmlaq_f32(v27, v44,
                                              vmlaq_n_f32(v19, v44, v18))))));
        v46 = vmlaq_f32(
            v13, v44,
            vmlaq_f32(
                v32, v44,
                vmlaq_f32(v25, v44,
                          vmlaq_f32(v31, v44, vmlaq_n_f32(v24, v44, v23)))));
        v47 = vbslq_s8(vbicq_s8(v41, v42), v46, vnegq_f32(v46));
        LANES128(v48).n128_u32[0] = LANES128(v47).n128_u32[2];
        LANES128(v48).n128_u32[1] = LANES128(v45).n128_u32[2];
        LANES128(v46).n128_u64[0] = LANES128(v48).n128_u64[0];
        LANES128(v44).n128_u64[0] =
            LANES128(v47).n128_u32[1] |
            ((unsigned __int64)LANES128(v47).n128_u32[1] << 32);
        LANES128(v48).n128_u64[1] = 1065353216;
        LANES128(v44).n128_u64[1] = 3212836864LL;
        LANES128(v46).n128_u64[1] = LANES128(v45).n128_u32[1];
        v49 = vmulq_f32(v46, v44);
        LANES128(v44).n128_u64[0] =
            LANES128(v45).n128_u32[1] |
            ((unsigned __int64)LANES128(v45).n128_u32[1] << 32);
        LANES128(v44).n128_u64[1] = LANES128(v47).n128_u32[1];
        v50 = vmulq_f32(v44, v48);
        LANES128(v44).n128_u64[0] =
            __ROR8__(LANES128(v47).n128_u32[2] |
                         ((unsigned __int64)LANES128(v45).n128_u32[2] << 32),
                     32);
        *(float32x4_t*)(v34 + 32) = v49;
        *(float32x4_t*)(v34 + 48) =
            vaddq_f32(vmulq_n_f32(v50, LANES128(v45).n128_f32[0]),
                      vmulq_f32(vmulq_n_f32(v44, LANES128(v47).n128_f32[0]),
                                COERCE_AS(float32x4_t, GameData_1a82940)));
        *(float32x4_t*)(v34 + 64) =
            vaddq_f32(vmulq_n_f32(v50, LANES128(v47).n128_f32[0]),
                      vmulq_f32(vmulq_n_f32(v44, LANES128(v45).n128_f32[0]),
                                COERCE_AS(float32x4_t, GameData_1a83510)));
        *(_OWORD*)(v34 + 80) = v36;
      } while (v15 != v14);
    }
  }
  else if (*(_WORD*)(*(_QWORD*)result + 56LL) != 0) {
    v51 = 0;
    v52 = 96 * v12;
    do {
      v53 = v11 + v51;
      v54 = *(_QWORD*)(*(_QWORD*)result + 16LL) + v51;
      v51 += 96;
      *(_DWORD*)v53 = *(_DWORD*)(v54 + 52) & 0xF870000;
      *(_QWORD*)&v55 = *(_QWORD*)(v54 + 56);
      *((_QWORD*)&v55 + 1) = *(unsigned int*)(v54 + 64);
      *(_OWORD*)(v53 + 16) = v55;
      v56 = *(float32x4_t*)(v54 + 68);
      *(_QWORD*)&v55 = *(_QWORD*)(v54 + 84);
      *((_QWORD*)&v55 + 1) = *(unsigned int*)(v54 + 92);
      v67.val[1] = v56;
      LANES128(v67.val[1]).n128_u32[3] = 0;
      v57 = LANES64_OF(
                vqtbl1_s8(v67.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                .n64_u64[0];
      LANES128(v58).n128_u64[0] =
          LANES64_OF(
              vrev64_s32(COERCE_AS(int32x2_t, LANES128(v56).n128_u64[0])))
              .n64_u64[0];
      LANES128(v59).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v67.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
              .n64_u64[0];
      v60 = LANES64_OF(
                vqtbl1_s8(v67.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                .n64_u64[0];
      LANES128(v58).n128_u64[1] = v57;
      LANES128(v59).n128_u64[1] = v60;
      v61 = vmulq_f32(v58, v58);
      v68.val[1] = vmulq_f32(v59, v59);
      v62 = vaddq_f32(vaddq_f32(v61, v61), vaddq_f32(v68.val[1], v68.val[1]));
      LANES128(v68.val[1]).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v67.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v68.val[1]).n128_u64[1] = v57;
      v63 = vmulq_f32(v68.val[1], v67.val[1]);
      LANES128(v67.val[1]).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v67.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v68.val[0] = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0), v62);
      v64 = vaddq_f32(v63, v63);
      LANES128(v67.val[1]).n128_u64[1] = v60;
      v65 = vmulq_laneq_f32(v67.val[1], v56, 3);
      v66 = vaddq_f32(v65, v65);
      v69.val[0] = vaddq_f32(v64, v66);
      v69.val[1] = vsubq_f32(v64, v66);
      LANES128(v67.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v69, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
              .n64_u64[0];
      LANES128(v68.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v69, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v68.val[1]).n128_i8[8] =
          vqtbl2_s8(v69, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
      *(int8x8_t*)&LANES128(v67.val[1]).n128_i8[8] =
          vqtbl2_s8(v69, COERCE_AS(int8x8_t, 0x706050413121110LL));
      v67.val[0] = v68.val[0];
      LANES128(v64).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v67, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v64).n128_i8[8] =
          vqtbl2_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
      LANES128(v69.val[0]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v67, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v69.val[0]).n128_i8[8] =
          vqtbl2_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
      LANES128(v67.val[0]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v68, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v67.val[0]).n128_i8[8] =
          vqtbl2_s8(v68, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
      *(float32x4_t*)(v53 + 32) = v64;
      *(int8x16_t*)(v53 + 48) = v69.val[0];
      *(int8x16_t*)(v53 + 64) = v67.val[0];
      *(_OWORD*)(v53 + 80) = v55;
    } while (v52 != v51);
  }
  return result;
}

__int64 nn_g3d_5fb140(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  __int16 v7;
  __int64 v8;

  v4 = GameData_2134fd0[0];
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + *GameData_2134fd0[0]);
  if (v5 != 0 &&
      (unsigned int)GameRoutine_604160(*(_QWORD*)(v5 + 104), a2) == 0) {
    v6 = 1;
    v7 = *(_WORD*)(a1 + 52) | 6;
    *(_WORD*)(a1 + 52) = v7;
    if ((v7 & 2) == 0) {
      goto LABEL_10;
    }
  }
  else {
    v6 = 0;
    v7 = *(_WORD*)(a1 + 52);
    if ((v7 & 2) == 0) {
      goto LABEL_10;
    }
  }
  v8 = *(_QWORD*)(a1 + 32);
  if ((v7 & 4) == 0) {
    if ((v7 & 0x10) == 0) {
      goto LABEL_8;
    }
  LABEL_12:
    GameRoutine_604da0(
        *(_QWORD*)(*(_QWORD*)(*(char**)((char*)((_UNKNOWN**)0x8LL) +
                                        (_QWORD)v4) +
                              v8) +
                   104LL),
        a2);
    if ((*(_WORD*)(a1 + 52) & 8) == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  GameRoutine_604da0(*(_QWORD*)(*(_QWORD*)(v8 + *v4) + 104LL), a2);
  v7 = *(_WORD*)(a1 + 52);
  if ((v7 & 0x10) != 0) {
    goto LABEL_12;
  }
LABEL_8:
  if ((v7 & 8) != 0) {
  LABEL_9:
    GameRoutine_604da0(
        *(_QWORD*)(*(_QWORD*)(v8 + *(_QWORD*)((char*)((__int128*)0x10LL) +
                                              (_QWORD)v4)) +
                   104LL),
        a2);
  }
LABEL_10:
  *(_WORD*)(a1 + 52) = 0;
  return v6;
}

__int64 nn_g3d_5fb980(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int16 v8;
  __int64 v9;
  __int64 FirstBlockEv;
  __int64 result;

  if (*(_WORD*)(a1 + 232) != 0) {
    v4 = (unsigned __int64)*(unsigned __int16*)(a1 + 232) << 6;
    v5 = 0;
    v6 = GameData_2134fd0[0];
    do {
      v7 = *(_QWORD*)(a1 + 136) + v5;
      v8 = *(_WORD*)(v7 + 52);
      if ((v8 & 2) == 0) {
        goto LABEL_3;
      }
      v9 = *(_QWORD*)(v7 + 32);
      if ((v8 & 4) != 0) {
        GameRoutine_604da0(*(_QWORD*)(*(_QWORD*)(v9 + *v6) + 104LL), a2);
        v8 = *(_WORD*)(v7 + 52);
        if ((v8 & 0x10) == 0) {
        LABEL_7:
          if ((v8 & 8) != 0) {
            goto LABEL_11;
          }
          goto LABEL_3;
        }
      }
      else if ((v8 & 0x10) == 0) {
        goto LABEL_7;
      }
      GameRoutine_604da0(
          *(_QWORD*)(*(_QWORD*)(*(char**)((char*)((_UNKNOWN**)0x8LL) +
                                          (_QWORD)v6) +
                                v9) +
                     104LL),
          a2);
      if ((*(_WORD*)(v7 + 52) & 8) != 0) {
      LABEL_11:
        GameRoutine_604da0(
            *(_QWORD*)(*(_QWORD*)(v9 + *(_QWORD*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)v6)) +
                       104LL),
            a2);
      }
    LABEL_3:
      v5 += 64;
      *(_WORD*)(v7 + 52) = 0;
    } while (v4 != v5);
  }
  FirstBlockEv =
      nn_util_BinaryFileHeader_GetFirstBlock_1a0cef0(*(_QWORD*)(a1 + 168));
  result = GameRoutine_603fb0(FirstBlockEv, a2);
  *(_QWORD*)(a1 + 176) = 0;
  return result;
}

__int64 nn_g3d_5fbf30(__int64* a1, _QWORD* a2, int a3)
{
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int16 v11;
  __int64 result;

  v5 = a2[17] + ((__int64)a3 << 6);
  v6 = GameData_2134fd0[0];
  if ((*(_WORD*)(a2[19] + 66LL) & 8) != 0) {
    v7 = *(_QWORD*)(*(_QWORD*)(v5 + 32) + *GameData_2134fd0[0]);
    if (v7 != 0 && (unsigned int)GameRoutine_604160_alt1(*(_QWORD*)(v7 + 104),
                                                         a1, (char*)v7) == 0) {
      v11 = 6;
      goto LABEL_12;
    }
  }
  v8 = *(_QWORD*)(v5 + 32);
  v9 = *(_QWORD*)(*(char**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6) + v8);
  if (v9 != 0) {
    if ((unsigned int)GameRoutine_604160_alt1(*(_QWORD*)(v9 + 104), a1,
                                              (char*)v9) == 0) {
      v11 = 18;
      goto LABEL_12;
    }
    v8 = *(_QWORD*)(v5 + 32);
  }
  v10 = *(_QWORD*)(v8 + *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6));
  if (v10 != 0 && (unsigned int)GameRoutine_604160_alt1(*(_QWORD*)(v10 + 104),
                                                        a1, (char*)v10) == 0) {
    v11 = 10;
  LABEL_12:
    *(_WORD*)(v5 + 52) |= v11;
  }
  result = nn_util_BinaryFileHeader_GetFirstBlock_1a0c2d0(a2[21]);
  if (*(_WORD*)(result + 16) == 1) {
    result = GameRoutine_5fb240(v5);
  }
  __builtin_arm_dmb(0xAu);
  *(_WORD*)(v5 + 52) &= ~1u;
  return result;
}

#pragma GCC visibility pop
