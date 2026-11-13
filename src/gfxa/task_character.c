#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a738c0(__int64, __int64, int);
__int64 GameRoutine_a73e50(__int64 result, __int64);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e770[3];
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
extern __int128 GameData_1a83750;
extern __int64 (*GameData_1fc5920[])();
extern __int64 (*GameData_1fc59a0[])();
extern __int64 (*GameData_1fc5a20[])();
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf10;
extern int GameData_21fdf14;
float GameRoutine_652ba0(float32x4_t*, float, float);
__int64 gfxa_TaskCharacter_Impl_draw(_DWORD* a1, _QWORD* a2, _QWORD* a3,
                                     __int64* a4, __int64 a5);

__int64 gfxa_TaskCharacter_Impl_draw(_DWORD* a1, _QWORD* a2, _QWORD* a3,
                                     __int64* a4, __int64 a5)
{

#pragma clang fp contract(off)
  int v5;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  float32x4_t v25;
  int8x16_t v26;
  int8x16_t v27;
  int8x16_t v28;
  unsigned __int32 v29;
  __int64 v30;
  float v31;
  float32x4_t v32;
  float v33;
  int8x16_t v34;
  float v35;
  float32x4_t v36;
  __int64 v37;
  int v38;
  __int64 v39;
  float32x4_t v40;
  int8x16_t v41;
  int8x16_t v42;
  int8x16_t v43;
  unsigned __int32 v44;
  __int64 v45;
  float v46;
  float v47;
  int8x16_t v48;
  float v49;
  float32x4_t v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _DWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  char v87;
  void (**v88)(__int64, __int64);
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  int v115;
  _QWORD* v116;
  void (**v117)(__int64, __int64);
  __int64 v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  __int64 v123;
  int v125;
  __int64 v126;
  __int64 v127;
  _QWORD* v128;
  struct {
    float32x4_t v129;
    __int64 v130;
    __int64 v131;
    float32x4_t* v132;
    __int64 v133;
    __int64 v134;
    __int64 v135;
  } v129_;
  struct {
    _QWORD v136[2];
    char gap128_[8];
    __int64 v137;
  } v136_;

  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = a1[28];
  v11 = v5 < -1;
  v12 = ((_BYTE)v5 + 1) & 1;
  if (v11) {
    v12 = -v12;
  }
  a1[28] = v12;
  v13 = *(_QWORD*)&a1[2 * v12 + 24];
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = v14;
  *(_QWORD*)v14 = 0x3FD625C13A83126FLL;
  *(_QWORD*)(v14 + 8) = 1098907648;
  v16 = *(_DWORD*)(a5 + 8);
  v17 = v16 + 31;
  v11 = v16 < -31;
  v18 = v16 + 62;
  if (!v11) {
    v18 = v17;
  }
  *(_DWORD*)(v14 + 16) = v18 >> 5;
  v19 = *(_DWORD*)(a5 + 12);
  v20 = v19 + 31;
  v11 = v19 < -31;
  v21 = v19 + 62;
  if (!v11) {
    v21 = v20;
  }
  *(_DWORD*)(v14 + 20) = v21 >> 5;
  *(_QWORD*)(v14 + 24) = 16;
  v22 = *(_QWORD*)(a5 + 64);
  v23 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  v24 = 256;
  if (*(_BYTE*)(v22 + 208) != 0) {
    v24 = 192;
  }
  v25 = *(float32x4_t*)(v22 + v24);
  v129_.v129 = v25;
  if ((unsigned int)(v23 - 3) <= 3) {
    if ((unsigned int)(v23 - 5) > 1) {
      v26 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v26).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
              .n64_u64[0];
      v27 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v27).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
              .n64_u64[0];
      v28 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v28).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
              .n64_u64[0];
      v29 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                .n64_u32[0];
      LANES128(v25).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v25).n128_u64[1] = v29;
    }
    else {
      LANES128(v25).n128_f32[0] = GameRoutine_652ba0(
          &v129_.v129, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v22 = *(_QWORD*)(a5 + 64);
    }
  }
  v30 = 128;
  if (*(_BYTE*)(v22 + 96) != 0) {
    v30 = 92;
  }
  v31 = *(float*)(v22 + v30);
  *(_DWORD*)(v15 + 44) = 0;
  v32 = COERCE_AS(float32x4_t, GameData_1a83750);
  v33 = v31 / 0x1.921fb40000000p+1f;
  v34 = vmulq_f32(v25, COERCE_AS(float32x4_t, GameData_1a83750));
  LANES128(v34).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
          .n64_u64[0];
  v35 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
            .n64_f32[0];
  if (v35 < 0x1.0624de0000000p-10f) {
    v35 = 0x1.0624de0000000p-10f;
  }
  v36 = vmulq_n_f32(vmulq_n_f32(v25, 0x1.0000000000000p+0f / v35),
                    v33 / 0x1.9000000000000p+6f);
  *(_QWORD*)(v15 + 32) = LANES128(v36).n128_u64[0];
  *(_DWORD*)(v15 + 40) = LANES128(v36).n128_u32[2];
  v37 = *(_QWORD*)(a5 + 64);
  v38 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
  v39 = 464;
  if (*(_BYTE*)(v37 + 416) != 0) {
    v39 = 400;
  }
  v40 = *(float32x4_t*)(v37 + v39);
  v129_.v129 = v40;
  if ((unsigned int)(v38 - 3) <= 3) {
    if ((unsigned int)(v38 - 5) > 1) {
      v41 = vmulq_f32(v40, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v41).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v41, v41, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
              .n64_u64[0];
      v42 = vmulq_f32(v40, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v42).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
              .n64_u64[0];
      v43 = vmulq_f32(v40, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v43).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
              .n64_u64[0];
      v44 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
                .n64_u32[0];
      LANES128(v40).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v40).n128_u64[1] = v44;
    }
    else {
      LANES128(v40).n128_f32[0] = GameRoutine_652ba0(
          &v129_.v129, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v32 = COERCE_AS(float32x4_t, GameData_1a83750);
      v37 = *(_QWORD*)(a5 + 64);
    }
  }
  v45 = 344;
  if (*(_BYTE*)(v37 + 312) != 0) {
    v45 = 308;
  }
  v46 = *(float*)(v37 + v45);
  *(_DWORD*)(v15 + 60) = 0;
  v47 = v46 / 0x1.921fb40000000p+1f;
  v48 = vmulq_f32(v40, v32);
  LANES128(v48).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
          .n64_u64[0];
  v49 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
            .n64_f32[0];
  if (v49 < 0x1.0624de0000000p-10f) {
    v49 = 0x1.0624de0000000p-10f;
  }
  v50 = vmulq_n_f32(vmulq_n_f32(v40, 0x1.0000000000000p+0f / v49),
                    v47 / 0x1.9000000000000p+6f);
  *(_QWORD*)(v15 + 48) = LANES128(v50).n128_u64[0];
  *(_DWORD*)(v15 + 56) = LANES128(v50).n128_u32[2];
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 49),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v51 = *a4;
  v52 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v53 = v52 + 16LL * *(int*)(v52 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v51 + 224LL))(v51, 3, 0, *(_QWORD*)(v53 + 24),
                              *(_QWORD*)(v53 + 32)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v54 = *a4;
  v55 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v56 = v55 + 16LL * *(int*)(v55 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v54 + 224LL))(v54, 3, 1, *(_QWORD*)(v56 + 24),
                              *(_QWORD*)(v56 + 32)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v57 = *a4;
  v58 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[4] + 16LL))(a2[4]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v59 = v58 + 16LL * *(int*)(v58 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v57 + 224LL))(v57, 3, 2, *(_QWORD*)(v59 + 24),
                              *(_QWORD*)(v59 + 32)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v60 = *(_QWORD*)(a5 + 16) + 16LL * *(int*)(*(_QWORD*)(a5 + 16) + 16LL);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 3, *(_QWORD*)(v60 + 24),
                              *(_QWORD*)(v60 + 32)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v61 = *a4;
  v62 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v63 = v62 + 16LL * *(int*)(v62 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v61 + 224LL))(v61, 3, 9, *(_QWORD*)(v63 + 24),
                              *(_QWORD*)(v63 + 32)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v64 = &a1[4 * a1[28]];
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 8, *((_QWORD*)v64 + 15),
                              *((_QWORD*)v64 + 16)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v65 = *a4;
  v66 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v67 = v66 + 16LL * *(int*)(v66 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v65 + 224LL))(v65, 3, 11, *(_QWORD*)(v67 + 24),
                              *(_QWORD*)(v67 + 32)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v68 = *(_QWORD*)(a5 + 24);
  if (v68 != 0) {
    v69 = v68 + 16LL * *(int*)(v68 + 16);
    (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 3, 12, *(_QWORD*)(v69 + 24),
                                *(_QWORD*)(v69 + 32)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v70 = *(_QWORD*)(a5 + 72);
  if (v70 != 0) {
    v71 = v70 + 16LL * *(int*)(v70 + 112);
    (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 3, 13, *(_QWORD*)(v71 + 120),
                                *(_QWORD*)(v71 + 128)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v72 = *a4;
  v73 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[5] + 16LL))(a2[5]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v74 = v73 + 16LL * *(int*)(v73 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v72 + 232LL))(v72, 2, 0, *(_QWORD*)(v74 + 24),
                              *(_QWORD*)(v74 + 32)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v75 = *a4;
  v76 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[6] + 16LL))(a2[6]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v77 = v76 + 16LL * *(int*)(v76 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v75 + 232LL))(v75, 2, 4, *(_QWORD*)(v77 + 24),
                              *(_QWORD*)(v77 + 32)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v78 = *a4;
  v79 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[7] + 16LL))(a2[7]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v121 = COERCE_AS(__typeof__(v121),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v86 = COERCE_AS(__typeof__(v86),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v92 = COERCE_AS(__typeof__(v92),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v80 = v79 + 16LL * *(int*)(v79 + 8);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v78 + 232LL))(v78, 2, 5, *(_QWORD*)(v80 + 16),
                              *(_QWORD*)(v80 + 24)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v81 = a4[1];
  gxc_NvnStateCache_BindBlendState(v81, GameData_21fdee0),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v81, GameData_21fdf10),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v81, GameData_21fdf14),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v121 = COERCE_AS(__typeof__(v121),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v86 = COERCE_AS(__typeof__(v86),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v92 = COERCE_AS(__typeof__(v92),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v82 = *(_QWORD*)a5;
  if (*(_QWORD*)a5 != 0) {
    v83 = *a4;
    v84 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[5] + 16LL))(a3[5]),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v121 = COERCE_AS(__typeof__(v121),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v85 = (*(__int64 (**)(__int64))(*(_QWORD*)v84 + 32LL))(v84),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v121 = COERCE_AS(__typeof__(v121),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v87 = *(_BYTE*)(a5 + 32);
    v88 = (void (**)(__int64, __int64))GameData_212e770[0],
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v121 = COERCE_AS(__typeof__(v121),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v136_.v137 = v83;
    v126 = v86;
    v127 = v85;
    if ((v87 & 1) == 0) {
      v125 = 0;
      goto LABEL_41;
    }
    v89 = v85;
    v90 = v86;
    v91 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v121 = COERCE_AS(__typeof__(v121),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v136_.v136[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v91 + 32LL))(v91),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v121 = COERCE_AS(__typeof__(v121),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v136_.v136[1] = v92;
    (*(void (**)(__int64, __int64, _QWORD*, __int64, __int64))(
        *(_QWORD*)*a4 + 128LL))(*a4, 1, v136_.v136, v89, v90),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, *(unsigned int*)(a5 + 8),
                               *(unsigned int*)(a5 + 12)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, *(unsigned int*)(a5 + 8),
                               *(unsigned int*)(a5 + 12)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v93 = *a4;
    v129_.v129 = (__typeof__(v129_.v129)){0};
    (*(void (**)(__int64, _QWORD, float32x4_t*))(*(_QWORD*)v93 + 144LL))(
        v93, 0, &v129_.v129),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v129_.v132 = &v129_.v129;
    LANES128(v129_.v129).n128_u64[0] = (unsigned __int64)GameData_1fc5920;
    LANES128(v129_.v129).n128_u64[1] = (unsigned __int64)a1;
    v94 = GameRoutine_a738c0(v82, (__int64)&v129_.v129, 1),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v121 = COERCE_AS(__typeof__(v121),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v86 = COERCE_AS(__typeof__(v86),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v92 = COERCE_AS(__typeof__(v92),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v129_.v132 == &v129_.v129) {
      v95 = 32;
    }
    else {
      if (v129_.v132 == nullptr) {
      LABEL_40:
        (*v88)(v83 + 8, (__int64)(a1 + 20));
        GameRoutine_a73e50(v82, (__int64)a4),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v125 = v94;
      LABEL_41:
        v97 = (unsigned __int64)a1;
        v98 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v99 = (*(__int64 (**)(__int64))(*(_QWORD*)v98 + 32LL))(v98),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v101 = v100;
        v102 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[2] + 16LL))(a3[2]),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v103 = (*(__int64 (**)(__int64))(*(_QWORD*)v102 + 32LL))(v102),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v105 = v104;
        v106 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v107 = (*(__int64 (**)(__int64))(*(_QWORD*)v106 + 32LL))(v106),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v108 = a3[1];
        v128 = a3;
        v110 = v109;
        v111 = (*(__int64 (**)(__int64))(*(_QWORD*)v108 + 16LL))(v108),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v129_.v134 = (*(__int64 (**)(__int64))(*(_QWORD*)v111 + 32LL))(v111),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v129_.v135 = v112;
        v113 = *a4;
        LANES128(v129_.v129).n128_u64[0] = v99;
        LANES128(v129_.v129).n128_u64[1] = v101;
        v129_.v130 = v103;
        v129_.v131 = v105;
        v129_.v132 = (float32x4_t*)v107;
        v129_.v133 = v110;
        (*(void (**)(__int64, __int64, float32x4_t*, __int64, __int64))(
            *(_QWORD*)v113 + 128LL))(v113, 4, &v129_.v129, v127, v126),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, *(unsigned int*)(a5 + 8),
                                   *(unsigned int*)(a5 + 12)),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, *(unsigned int*)(a5 + 8),
                                   *(unsigned int*)(a5 + 12)),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v114 = *a4;
        v136_.v136[0] = 0;
        v136_.v136[1] = 0x447A000000000000LL;
        (*(void (**)(__int64, __int64, _QWORD*))(*(_QWORD*)v114 + 144LL))(
            v114, 1, v136_.v136),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v129_.v132 = &v129_.v129;
        LANES128(v129_.v129).n128_u64[0] = (unsigned __int64)GameData_1fc59a0;
        LANES128(v129_.v129).n128_u64[1] = v97;
        v115 = GameRoutine_a738c0(v82, (__int64)&v129_.v129, 2) + v125,
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v129_.v132 == &v129_.v129) {
          v116 = v128;
          v118 = 32;
          v117 = (void (**)(__int64, __int64))GameData_212e770[0],
          v100 = COERCE_AS(__typeof__(v100),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v104 = COERCE_AS(__typeof__(v104),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v109 = COERCE_AS(__typeof__(v109),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v112 = COERCE_AS(__typeof__(v112),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v121 = COERCE_AS(__typeof__(v121),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v92 = COERCE_AS(__typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v116 = v128;
          v117 = (void (**)(__int64, __int64))GameData_212e770[0],
          v100 = COERCE_AS(__typeof__(v100),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v104 = COERCE_AS(__typeof__(v104),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v109 = COERCE_AS(__typeof__(v109),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v112 = COERCE_AS(__typeof__(v112),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v121 = COERCE_AS(__typeof__(v121),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v86 = COERCE_AS(__typeof__(v86),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v92 = COERCE_AS(__typeof__(v92),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v129_.v132 == nullptr) {
            goto LABEL_46;
          }
          v118 = 40;
        }
        (*(void (**)(void*))(LANES128(*(v129_.v132)).n128_u64[0] + v118))(
            (void*)v129_.v132),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LABEL_46:
        gxc_NvnStateCache_Reset(a4[1]),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_SetCommandList(a4[1], *a4),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v119 = 6;
        if (*(_BYTE*)(a5 + 33) != 0) {
          v119 = 7;
        }
        gxc_NvnStateCache_BindDepthStencilState(a4[1], GameData_21fdeb8[v119]),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_ClearCommandList(a4[1]),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        GameRoutine_a73e50(v82, (__int64)a4),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v120 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v116[3] + 16LL))(v116[3]),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LANES128(v129_.v129).n128_u64[0] =
            (*(__int64 (**)(__int64))(*(_QWORD*)v120 + 32LL))(v120),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LANES128(v129_.v129).n128_u64[1] = v121;
        (*(void (**)(__int64, __int64, float32x4_t*, __int64, __int64))(
            *(_QWORD*)*a4 + 128LL))(*a4, 1, &v129_.v129, v127, v126),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a4 + 72LL))(*a4, 0, 0, *(unsigned int*)(a5 + 8),
                                   *(unsigned int*)(a5 + 12)),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a4 + 88LL))(*a4, 0, 0, *(unsigned int*)(a5 + 8),
                                   *(unsigned int*)(a5 + 12)),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v129_.v132 = &v129_.v129;
        LANES128(v129_.v129).n128_u64[0] = (unsigned __int64)GameData_1fc5a20;
        LANES128(v129_.v129).n128_u64[1] = v97;
        v96 = v115 +
              (unsigned int)GameRoutine_a738c0(v82, (__int64)&v129_.v129, 2),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v129_.v132 == &v129_.v129) {
          v122 = v136_.v137;
          v123 = 32;
        }
        else {
          v122 = v136_.v137;
          if (v129_.v132 == nullptr) {
          LABEL_53:
            (*v117)(v122 + 8, v97 + 88);
            GameRoutine_a73e50(v82, (__int64)a4),
                v100 =
                    COERCE_AS(__typeof__(v100),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v104 =
                    COERCE_AS(__typeof__(v104),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v109 =
                    COERCE_AS(__typeof__(v109),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v112 =
                    COERCE_AS(__typeof__(v112),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v121 =
                    COERCE_AS(__typeof__(v121),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v86 =
                    COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v92 =
                    COERCE_AS(__typeof__(v92),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            return v96;
          }
          v123 = 40;
        }
        (*(void (**)(void*))(LANES128(*(v129_.v132)).n128_u64[0] + v123))(
            (void*)v129_.v132),
            v100 = COERCE_AS(__typeof__(v100),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v104 = COERCE_AS(__typeof__(v104),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v109 = COERCE_AS(__typeof__(v109),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v112 = COERCE_AS(__typeof__(v112),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v86 = COERCE_AS(__typeof__(v86),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v92 = COERCE_AS(__typeof__(v92),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_53;
      }
      v95 = 40;
    }
    (*(void (**)(void*))(LANES128(*(v129_.v132)).n128_u64[0] + v95))(
        (void*)v129_.v132),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v121 = COERCE_AS(__typeof__(v121),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v86 = COERCE_AS(__typeof__(v86),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v92 = COERCE_AS(__typeof__(v92),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_40;
  }
  return 0;
}

#pragma GCC visibility pop
