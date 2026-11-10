#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*gfx_render_DecalObject_vtable[])();
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64 DecalObject_Destructor(__int64 a1);
__int64 GameRoutine_5de60(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212e3b0[2];
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e4e0;
struct PseudoSret GameRoutine_53bd0(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 DecalObject_a91100(__int64* a1, __int64 a2, __int64 a3, __int64 a4);
void gfx_render_DecalObject_DecalObject_lambda0_Invoke(__int64 a1, _WORD* a2);
__int64 gfx_render_DecalObject_CollectElements_lambda0_Invoke(__int64 a1,
                                                              _QWORD* a2);
__int64 DecalObject_Unknown2(__int64 a1);

__int64 DecalObject_a91100(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v18 = a4;
  v19 = a2;
  v17 = 3;
  *(struct PseudoSret*)(&v20) = GameRoutine_53bd0(&v17);
  v6 = v20;
  v7 = *a1;
  v20 = 0;
  *a1 = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    v8 = v20;
    v20 = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    }
  }
  *(struct PseudoSret*)(&v20) = GameRoutine_53bd0(&v17);
  v9 = v20;
  v10 = a1[1];
  v20 = 0;
  a1[1] = v9;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    v11 = v20;
    v20 = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
  }
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 80LL))(a3);
  a1[4] = v13;
  v14 = *a1;
  a1[3] = v12;
  GameRoutine_5de60(a1 + 3, v14);
  a1[5] = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 80LL))(a3);
  a1[6] = v15;
  return GameRoutine_5de60(a1 + 5, a1[1]);
}

__int64 DecalObject_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = gfx_render_DecalObject_vtable;
  GameRoutine_6040f0(a1 + 288, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_604050(a1 + 288);
  v2 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  result = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v4 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)a1 = gfx_render_Object_vtable;
  if (v4 != 0) {
    *(_QWORD*)(a1 + 88) = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 24);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

__int64 DecalObject_Unknown2(__int64 a1)
{
  int v1;
  bool v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int8x16_t v7;
  int32x4_t v8;
  int32x4_t v9;
  int8x16_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int8x16_t v25;
  int8x16_t v26;
  int8x16_t v27;
  float32x4_t v28;
  unsigned __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  int8x16_t v35;
  int8x16_t v36;
  int32x4_t v37;
  int32x4_t v38;
  float32x4_t v39;
  int32x4_t v40;
  int32x4_t v41;
  int32x4_t v42;
  int32x4_t v43;
  int32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  int8x16_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int8x16_t v54;
  int8x16_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  int32x4_t v59;
  int32x4_t v60;
  int32x4_t v61;

  v1 = *(_DWORD*)(a1 + 128);
  v3 = v1 < -1;
  v4 = ((_BYTE)v1 + 1) & 1;
  if (v3) {
    v4 = -v4;
  }
  *(_DWORD*)(a1 + 128) = v4;
  v5 = *(_QWORD*)(a1 + 8LL * v4 + 112);
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 56LL))(v5);
  v8 = *(int32x4_t*)(a1 + 176);
  v7 = *(int8x16_t*)(a1 + 192);
  v10 = *(int8x16_t*)(a1 + 208);
  v9 = *(int32x4_t*)(a1 + 224);
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v11).n128_i8[8] =
      vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v13 = vmulq_f32(vmulq_f32(v8, v11), v12);
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v7, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v15 = vsubq_f32(v13, vmulq_f32(vmulq_f32(v8, v12), v14));
  LANES128(v15).n128_u64[0] = LANES128_OF(vpaddq_f32(v15, v15)).n128_u64[0];
  v16 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v15).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v15).n128_u64[0]), 1));
  v17 = vrecpeq_f32(v16);
  v18 = vmulq_f32(v17, vrecpsq_f32(v17, v16));
  v19 = vrecpsq_f32(v18, v16);
  v20 = vceqzq_f32(v16);
  v21 = vmulq_f32(v18, v19);
  v22 = vzip1q_s32(v8, v10);
  v23 = vzip2q_s32(v8, v10);
  v24 = vzip1q_s32(v7, COERCE_AS(int32x4_t, 0));
  v25 = vzip2q_s32(v22, v24);
  v26 = vzip1q_s32(v23, vzip2q_s32(v7, COERCE_AS(int32x4_t, 0)));
  v27 = vzip1q_s32(v22, v24);
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v29 = LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v30).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v32).n128_u64[1] = v29;
  *(int8x8_t*)&LANES128(v31).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v33).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v26).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v34 = vmulq_f32(v21, vmlsq_f32(vmulq_f32(v28, v32), v26, v30));
  v35 = vmulq_f32(v21, vmlsq_f32(vmulq_f32(v30, v33), v32, v31));
  v36 = vmulq_f32(v21, vmlsq_f32(vmulq_f32(v26, v31), v33, v28));
  v37 = vbicq_s8(v34, v20);
  v38 = vbicq_s8(v35, v20);
  v39 =
      vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v34), LANES128(v9).n128_f32[0]), v35,
                     COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]), 1);
  v40 = vbicq_s8(v36, v20);
  v41 = vbicq_s8(vmlsq_laneq_f32(v39, v36, v9, 2), v20);
  v42 = vzip1q_s32(v37, v40);
  v43 = vzip1q_s32(v38, COERCE_AS(int32x4_t, 0));
  v44 = vzip2q_s32(v37, v40);
  v45 = vzip1q_s32(v42, v43);
  v46 = vzip2q_s32(v42, v43);
  v47 = vzip1q_s32(v44, vzip2q_s32(v38, COERCE_AS(int32x4_t, 0)));
  v48 = vmulq_f32(v45, COERCE_AS(float32x4_t, 0));
  v49 = vmlaq_f32(vmlaq_f32(v45, COERCE_AS(float32x4_t, 0), v46),
                  COERCE_AS(float32x4_t, 0), v47);
  v50 = vmlaq_f32(vaddq_f32(v46, v48), COERCE_AS(float32x4_t, 0), v47);
  v51 = vmulq_f32(v50, v50);
  LANES128(v51).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
          .n64_u64[0];
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
          .n64_u64[0];
  LANES128(v51).n128_u64[1] = LANES128(v51).n128_u64[0];
  v52 = vrsqrteq_f32(v51);
  v53 = vmulq_f32(v52, vrsqrtsq_f32(v52, vmulq_f32(v51, v52)));
  v54 = vbicq_s8(
      vmulq_f32(vmulq_f32(v53, vrsqrtsq_f32(v53, vmulq_f32(v51, v53))), v50),
      vceqzq_f32(v51));
  v55 = vmulq_f32(v49, v49);
  LANES128(v55).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v55, v55, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
          .n64_u64[0];
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
          .n64_u64[0];
  LANES128(v55).n128_u64[1] = LANES128(v55).n128_u64[0];
  v56 = vrsqrteq_f32(v55);
  v57 = vmulq_f32(v56, vrsqrtsq_f32(v56, vmulq_f32(v55, v56)));
  v58 = vbicq_s8(
      vmulq_f32(vmulq_f32(v57, vrsqrtsq_f32(v57, vmulq_f32(v55, v57))), v49),
      vceqzq_f32(v55));
  v59 = vzip1q_s32(v7, v9);
  v60 = vzip1q_s32(v23, vzip2q_s32(v7, v9));
  *(int32x4_t*)v6 = vzip1q_s32(v22, v59);
  *(int32x4_t*)(v6 + 16) = vzip2q_s32(v22, v59);
  v61 = vzip1q_s32(v38, v41);
  *(int32x4_t*)(v6 + 32) = v60;
  *(int32x4_t*)(v6 + 48) = vzip1q_s32(v42, v61);
  *(int32x4_t*)(v6 + 64) = vzip2q_s32(v42, v61);
  *(int32x4_t*)(v6 + 80) = vzip1q_s32(v44, vzip2q_s32(v38, v41));
  *(_OWORD*)(v6 + 96) = *(_OWORD*)(a1 + 272);
  LANES128(v60).n128_u64[0] = LANES128(v54).n128_u64[0];
  LANES128(v60).n128_u64[1] =
      LANES128(v54).n128_u32[2] |
      ((unsigned __int64)*(unsigned int*)(a1 + 416) << 32);
  LANES128(v61).n128_u64[0] = LANES128(v58).n128_u64[0];
  LANES128(v61).n128_u64[1] = LANES128(v58).n128_u32[2] | 0x3F80000000000000LL;
  *(int32x4_t*)(v6 + 112) = v60;
  *(int32x4_t*)(v6 + 128) = v61;
  return (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5);
}

void gfx_render_DecalObject_DecalObject_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

__int64 gfx_render_DecalObject_CollectElements_lambda0_Invoke(__int64 a1,
                                                              _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (**v8)(__int64, __int64, __int64, __int64, __int64);
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  int v13;
  unsigned int v14;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v5 = v2 + 16LL * *(int*)(v2 + 128);
  v6 = *(_QWORD*)(v5 + 136);
  v7 = *(_QWORD*)(v5 + 144);
  v8 = (__int64 (**)(__int64, __int64, __int64, __int64,
                     __int64))GameData_212e3b0[0];
  (*(void (**)(__int64, _QWORD, __int64, __int64, __int64))GameData_212e3b0[0])(
      *a2 + 8LL, 0, 2, v6, v7);
  v9 = (*v8)(v3 + 8, 1, 2, v6, v7);
  if ((*(_BYTE*)(v2 + 264) & 1) == 0) {
    GameRoutine_8123d0(v9);
  }
  v10 = *a2;
  v11 = (*(__int64 (**)(__int64, _QWORD, _QWORD))GameData_212e4d8[0])(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 256) + 8LL,
      *(unsigned int*)(v2 + 256), *(unsigned int*)(v2 + 408));
  result = ((__int64 (*)(__int64, __int64, _QWORD, __int64))*GameData_212e4e0)(
      v10 + 8, 1, 0, v11);
  v13 = *(_DWORD*)(v2 + 424);
  if (v13 == 0) {
    v14 = 14;
    v15 = 2;
    goto LABEL_6;
  }
  if (v13 == 1) {
    v14 = 3;
    v15 = 1;
  LABEL_6:
    (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, v15);
    return (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 272LL))(
        *a2, v14, 0);
  }
  return result;
}

#pragma GCC visibility pop
