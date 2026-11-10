#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
__int64 TaskCapsuleAO_18dfe10(_QWORD* a1);
void gfxa_TaskCapsuleAO_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2);
void gfxa_TaskCapsuleAO_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern _UNKNOWN** GameData_212e7a8[31];
extern _UNKNOWN** GameData_212e870[6];
extern _UNKNOWN** GameData_212e888[3];
extern _UNKNOWN** GameData_212e890[2];
extern _UNKNOWN** GameData_212e898;
extern int GameData_21fdeb8;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
long double GameRoutine_b3bca0(_QWORD, _QWORD);
__int64 TaskCapsuleAO_18dff40(__int64* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                              __int64 a5);

__int64 TaskCapsuleAO_18dfe10(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 29, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 45, *v2 + 568);
  GameRoutine_604050(a1 + 45);
  GameRoutine_604050(a1 + 29);
  v3 = a1[13];
  a1[13] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[12];
  a1[12] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[6];
  a1[6] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = a1[5];
  a1[5] = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v7 = a1[4];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
    v8 = a1[2];
    if (v8 == 0) {
      return result;
    }
  }
  else {
    v8 = a1[2];
    if (v8 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 TaskCapsuleAO_18dff40(__int64* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                              __int64 a5)
{
  int v5;
  bool v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float32x2_t** v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float32x2_t* v19;
  float32x4_t v20;
  float32x4_t v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  float32x4_t v24;
  float v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  float v28;
  unsigned __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  unsigned __int64 v36;
  float32x4_t v37;
  int32x4_t v38;
  int8x16_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  int32x4_t v49;
  int32x4_t v50;
  int32x4_t v51;
  int8x16_t v52;
  int8x16_t v53;
  int8x16_t v54;
  float32x4_t v55;
  float32x4_t v56;
  unsigned __int64 v57;
  int8x16_t v58;
  float32x4_t v59;
  int8x16_t v60;
  int8x16_t v61;
  int8x16_t v62;
  int8x16_t v63;
  int32x4_t v64;
  int32x4_t v65;
  int32x4_t v66;
  int32x4_t v67;
  int32x4_t v68;
  int32x4_t v69;
  float32x2_t* v70;
  int v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 (**v77)(__int64);
  _QWORD* v78;
  __int64 v79;
  __int64 v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 (**v95)(__int64);
  __int64 (**v96)(__int64);
  unsigned __int32 v97;
  __int64 (*v98)(__int64);
  __int64 v99;
  void (**v100)(__int64, __int64);
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  unsigned int v123;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  float32x2x2_t v137;
  float32x2x2_t v138;

  v5 = *((_DWORD*)a1 + 14);
  v9 = v5 < -1;
  v10 = ((_BYTE)v5 + 1) & 1;
  if (v9) {
    v10 = -v10;
  }
  *((_DWORD*)a1 + 14) = v10;
  v11 = a1[v10 + 5];
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
  v13 = *(_QWORD*)(a5 + 32);
  if (v13 != 0) {
    v14 = *(float32x2_t***)(a5 + 24);
    v15 = v12 + 48;
    v16 = 80 * v13 - 80;
    v17 = 255;
    do {
      v18 = v17;
      v19 = *v14;
      v20 = *(float32x4_t*)LANES64((*v14)[10]).n64_u64;
      v21 = *(float32x4_t*)LANES64((*v14)[12]).n64_u64;
      v22 = LANES64((*v14)[7]).n64_u64[0];
      v133 = LANES64((*v14)[6]).n64_u64[0];
      v134 = v22;
      v23 = LANES64(v19[9]).n64_u64[0];
      v24 = vsubq_f32(v21, v20);
      v135 = LANES64(v19[8]).n64_u64[0];
      v136 = v23;
      v25 = LANES128(v24).n128_f32[1];
      v26 = LANES64(v19[3]).n64_u64[0];
      LANES128(v130).n128_u64[0] = LANES64(v19[2]).n64_u64[0];
      LANES128(v130).n128_u64[1] = v26;
      v27 = LANES64(v19[5]).n64_u64[0];
      if (LANES128(v24).n128_f32[1] >= LANES128(v24).n128_f32[0]) {
        v25 = LANES128(v24).n128_f32[0];
      }
      v131 = LANES64(v19[4]).n64_i64[0];
      v132 = v27;
      if (LANES128(v24).n128_f32[2] >= v25) {
        v28 = v25;
      }
      else {
        v28 = LANES128(v24).n128_f32[2];
      }
      v29 = COERCE_UNSIGNED_INT(v28 * 0x1.0000000000000p-1);
      LANES128(v30).n128_u64[0] = v29 | (v29 << 32);
      LANES128(v30).n128_u64[1] = v29;
      v31 = vmulq_n_f32(v30, LANES64(v19[15]).n64_f32[0]);
      v129 = vaddq_f32(v21, v31);
      v127 = v24;
      v128 = vsubq_f32(v20, v31);
      *(long double*)&v32 = GameRoutine_b3bca0(&v128, &v130);
      LANES128(v34).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v34).n128_u64[1] = 0x3F0000003F000000LL;
      v35 = vaddq_f32(v32, vmulq_f32(vsubq_f32(v33, v32), v34));
      v36 = LANES128(v35).n128_u32[2] |
            ((unsigned __int64)LANES64((*v14)[15]).n64_u32[0] << 32);
      *(_QWORD*)(v15 - 48) = LANES128(v35).n128_u64[0];
      *(_QWORD*)(v15 - 40) = v36;
      LANES128(v35).n128_u64[0] =
          LODWORD(v28) | ((unsigned __int64)LODWORD(v28) << 32);
      LANES128(v35).n128_u64[1] = LODWORD(v28);
      v37 = vmulq_f32(vsubq_f32(v127, v35), v34);
      *(_QWORD*)(v15 - 32) = LANES128(v37).n128_u64[0];
      *(_QWORD*)(v15 - 24) = LANES128(v37).n128_u32[2] |
                             ((unsigned __int64)(unsigned int)v29 << 32);
      v38 = *(int32x4_t*)LANES64((*v14)[2]).n64_u64;
      v39 = *(int8x16_t*)LANES64((*v14)[4]).n64_u64;
      v40 = *(int8x16_t*)LANES64((*v14)[6]).n64_u64;
      LANES128(v33).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v33).n128_i8[8] =
          vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v41).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v41).n128_i8[8] =
          vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v42 = vmulq_f32(vmulq_f32(v38, v33), v41);
      LANES128(v41).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v41).n128_i8[8] =
          vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v43).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v43).n128_i8[8] =
          vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v44 = vsubq_f32(v42, vmulq_f32(vmulq_f32(v38, v41), v43));
      LANES128(v44).n128_u64[0] = LANES128_OF(vpaddq_f32(v44, v44)).n128_u64[0];
      v45 = vaddq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0]), 0),
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0]), 1));
      v46 = vrecpeq_f32(v45);
      v47 = vmulq_f32(v46, vrecpsq_f32(v46, v45));
      v48 = vmulq_f32(v47, vrecpsq_f32(v47, v45));
      v49 = vzip1q_s32(v38, v40);
      v50 = vzip2q_s32(v38, v40);
      v51 = vzip1q_s32(v39, COERCE_AS(int32x4_t, 0));
      v52 = vzip2q_s32(v49, v51);
      v53 = vzip1q_s32(v50, vzip2q_s32(v39, COERCE_AS(int32x4_t, 0)));
      v54 = vzip1q_s32(v49, v51);
      LANES128(v55).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v39).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v56).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v49).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v55).n128_i8[8] =
          vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v57 = LANES64_OF(vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                .n64_u64[0];
      *(int8x8_t*)&LANES128(v56).n128_i8[8] =
          vqtbl1_s8(v53, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v53).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v39).n128_u64[1] = v57;
      *(int8x8_t*)&LANES128(v53).n128_i8[8] =
          vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v58 = vmulq_f32(v48, vmlsq_f32(vmulq_f32(v55, v39), v53, v56));
      *(int8x8_t*)&LANES128(v49).n128_i8[8] =
          vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v59 = vmulq_f32(v56, v49);
      LANES128(v56).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v56).n128_i8[8] =
          vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v60 = vmulq_f32(v48, vmlsq_f32(v59, v39, v56));
      v61 = vmulq_f32(v48, vmlsq_f32(vmulq_f32(v53, v56), v49, v55));
      v62 = vmlsq_laneq_f32(
          vmlsq_lane_f32(
              vmulq_n_f32(vnegq_f32(v58),
                          COERCE_FLOAT(*(_OWORD*)LANES64((*v14)[8]).n64_u64)),
              v60, (*v14)[8], 1),
          v61, *(float32x4_t*)LANES64((*v14)[8]).n64_u64, 2);
      v63 = vceqzq_f32(v45);
      v64 = vbicq_s8(v58, v63);
      v65 = vbicq_s8(v60, v63);
      v66 = vbicq_s8(v61, v63);
      v67 = vbicq_s8(v62, v63);
      v68 = vzip1q_s32(v64, v66);
      v69 = vzip1q_s32(v65, v67);
      LANES64(v137.val[0]).n64_u64[0] = LANES128(v68).n128_u64[0];
      LANES64(v137.val[1]).n64_u64[0] = LANES128(v69).n128_u64[0];
      vst2_f32((float*)(v15 - 16), v137);
      LANES64(v138.val[0]).n64_u64[0] =
          LANES128_OF(vzip2q_s32(v64, v66)).n128_u64[0];
      LANES64(v138.val[1]).n64_u64[0] =
          LANES128_OF(vzip2q_s32(v65, v67)).n128_u64[0];
      vst2_f32((float*)(v15 + 16), v138);
      *(int32x4_t*)v15 = vzip2q_s32(v68, v69);
      v70 = *v14;
      v14 += 10;
      LANES128(v67).n128_u32[0] = LANES64(v70[14]).n64_u32[0];
      *(_QWORD*)(v15 + 36) = 1065353216;
      *(_DWORD*)(v15 + 44) = 0;
      *(_DWORD*)(v15 + 32) = LANES128(v67).n128_u32[0];
      if (v16 == 0) {
        break;
      }
      v16 -= 80;
      v17 = v18 - 1;
      v15 += 96;
    } while (v18 != 0);
  }
  (*(void (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
  v71 = *((_DWORD*)a1 + 28);
  v72 = *a1;
  v9 = v71 < -1;
  v73 = ((_BYTE)v71 + 1) & 1;
  if (v9) {
    v73 = -v73;
  }
  *((_DWORD*)a1 + 28) = v73;
  v74 = a1[v73 + 12];
  v75 = (*(__int64 (**)(__int64))(*(_QWORD*)v74 + 56LL))(v74);
  v76 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  (*(void (**)(__int64))(*(_QWORD*)v76 + 40LL))(v76);
  v77 = (__int64 (**)(__int64))GameData_212e4d8[0];
  *(_QWORD*)(v75 + 56) = (*(__int64 (**)(__int64))GameData_212e4d8[0])(
      *(_QWORD*)(v72 + 256) + 8LL);
  if (*(_BYTE*)a5 != 0) {
    v78 = a3;
  }
  else {
    v78 = a2;
  }
  v79 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v78[1] + 16LL))(v78[1]);
  (*(void (**)(__int64))(*(_QWORD*)v79 + 40LL))(v79);
  *(_QWORD*)(v75 + 48) = (*v77)(*(_QWORD*)(v72 + 256) + 8LL);
  v80 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  (*(void (**)(__int64))(*(_QWORD*)v80 + 40LL))(v80);
  *(_QWORD*)(v75 + 64) = (*(__int64 (**)(__int64))GameData_212e7a8[0])(
      *(_QWORD*)(v72 + 256) + 8LL);
  v81 = *(_DWORD*)(a5 + 40);
  *(_QWORD*)(v75 + 36) = 0;
  *(_DWORD*)(v75 + 44) = 0;
  *(_QWORD*)v75 = 0x3FD625C13A83126FLL;
  *(_QWORD*)(v75 + 8) = 1098907648;
  *(_DWORD*)(v75 + 32) = v81;
  v82 = *(_DWORD*)(a5 + 4);
  v83 = v82 + 31;
  v9 = v82 < -31;
  v84 = v82 + 62;
  if (!v9) {
    v84 = v83;
  }
  *(_DWORD*)(v75 + 16) = v84 >> 5;
  v85 = *(_DWORD*)(a5 + 8);
  v86 = v85 + 31;
  v9 = v85 < -31;
  v87 = v85 + 62;
  if (!v9) {
    v87 = v86;
  }
  *(_DWORD*)(v75 + 20) = v87 >> 5;
  *(_QWORD*)(v75 + 24) = 16;
  (*(void (**)(__int64))(*(_QWORD*)v74 + 64LL))(v74);
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v88 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v88, (unsigned int)GameData_21fdeb8);
  gxc_NvnStateCache_BindPolygonState(v88, (unsigned int)GameData_21fdf08);
  gxc_NvnStateCache_BindMultisampleState(v88, (unsigned int)GameData_21fdf14);
  v89 = *a4;
  v90 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v91 = (*(__int64 (**)(__int64))(*(_QWORD*)v90 + 40LL))(v90);
  v92 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]);
  v93 = (*(__int64 (**)(__int64))(*(_QWORD*)v92 + 40LL))(v92);
  LANES128(v130).n128_u32[2] = 0;
  LANES128(v130).n128_u64[0] = 0;
  v94 = v93;
  v95 = (__int64 (**)(__int64))GameData_212e778[0];
  LANES128(v130).n128_u32[3] =
      (*(__int64 (**)(__int64))GameData_212e778[0])(v91);
  v96 = (__int64 (**)(__int64))GameData_212e780;
  v131 = ((unsigned int (*)(__int64))*GameData_212e780)(v91) | 0x100000000LL;
  v128 = v130;
  LANES128(v129).n128_u64[0] = v131;
  v97 = (*v95)(v94);
  v98 = *v96;
  LANES128(v128).n128_u32[3] = v97;
  LANES128(v129).n128_u32[0] = v98(v94);
  (*(void (**)(__int64, __int64, _QWORD, float32x4_t*, __int64, _QWORD,
               float32x4_t*, _QWORD))GameData_212e870[0])(
      v89 + 8, v91, 0, &v130, v94, 0, &v128, 0);
  v99 = *a4;
  v100 = (void (**)(__int64, __int64))GameData_212e738;
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 50);
  (*(void (**)(__int64, __int64*))GameData_212e888[0])(v99 + 8, a1 + 20);
  (*(void (**)(__int64, __int64))GameData_212e890[0])(v99 + 8,
                                                      (__int64)a1 + 228);
  ((void (*)(__int64, __int64*))*GameData_212e898)(v99 + 8, a1 + 28);
  v101 = *a4;
  v102 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]);
  v103 = (*(__int64 (**)(__int64))(*(_QWORD*)v102 + 32LL))(v102);
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v101 + 96LL))(v101, v103,
                                                                   v104);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 12), *(unsigned int*)(a5 + 16));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 12), *(unsigned int*)(a5 + 16));
  v105 = *a4;
  v106 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]);
  v107 = v106 + 16LL * *(int*)(v106 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v105 + 224LL))(v105, 2, 0, *(_QWORD*)(v107 + 24),
                               *(_QWORD*)(v107 + 32));
  v108 = *a4;
  v109 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[4] + 16LL))(a2[4]);
  v110 = v109 + 16LL * *(int*)(v109 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v108 + 224LL))(v108, 2, 1, *(_QWORD*)(v110 + 24),
                               *(_QWORD*)(v110 + 32));
  v111 = &a1[2 * *((int*)a1 + 28)];
  (*(void (**)(_QWORD, __int64, __int64, __int64, __int64))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 2, v111[15], v111[16]);
  v112 = *a4;
  v113 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[5] + 16LL))(a2[5]);
  v114 = v113 + 16LL * *(int*)(v113 + 8);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v112 + 232LL))(v112, 2, 0, *(_QWORD*)(v114 + 16),
                               *(_QWORD*)(v114 + 24));
  v115 = &a1[2 * *((int*)a1 + 14)];
  (*(void (**)(_QWORD, __int64, __int64, __int64, __int64))(
      *(_QWORD*)*a4 + 232LL))(*a4, 2, 1, v115[8], v115[9]);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(a1[1] + 144));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0);
  (*v100)(*a4 + 8LL, 50);
  v116 = *a4;
  v117 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v118 = (*(__int64 (**)(__int64))(*(_QWORD*)v117 + 32LL))(v117);
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v116 + 96LL))(v116, v118,
                                                                   v119);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 4), *(unsigned int*)(a5 + 8));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 4), *(unsigned int*)(a5 + 8));
  v120 = *a4;
  v121 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]);
  v122 = (*(__int64 (**)(__int64))(*(_QWORD*)v121 + 40LL))(v121);
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v120 + 248LL))(v120, 2, 0, v122, v123,
                               *((unsigned int*)a1 + 88));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(a1[3] + 144));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0);
  return gxc_NvnStateCache_ClearCommandList(a4[1]);
}

void gfxa_TaskCapsuleAO_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void gfxa_TaskCapsuleAO_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 21;
}

#pragma GCC visibility pop
