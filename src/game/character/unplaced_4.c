#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10fdef0(float32x4_t*, float32x4_t*, float32x4_t*,
                            float32x4_t*, _DWORD*);
__int64 GameRoutine_11188c0(__int64 result, int*, __int64**, __int64, char);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a83610;
extern __int128 GameData_21a6180;
int __cxa_guard_acquire(__int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void __cxa_guard_release(__int64);
__int64 game_character_10fd8d0(_QWORD* a1, float32x4_t* a2, float32x4_t* a3,
                               float32x4_t* a4, float32x4_t* a5, _DWORD* a6);
__attribute__((swiftcall)) void
game_character_1116460(PSEUDO_X8 x8_, __int128* a1, __int64 a2, float* a3,
                       _DWORD* a4, unsigned __int64 a5, int a6, float a8);

__int64 game_character_10fd8d0(_QWORD* a1, float32x4_t* a2, float32x4_t* a3,
                               float32x4_t* a4, float32x4_t* a5, _DWORD* a6)
{
  float32x4_t* v6;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  int8x16_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  int8x16_t v28;
  unsigned __int32 v29;
  int8x16_t v30;
  unsigned __int32 v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  int8x16_t v35;
  __int64 v36;
  __int64 v37;
  float32x4_t v38;
  float32x4_t v39;
  float v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  int8x16_t v51;
  int8x16_t v52;
  int8x16_t v53;
  int8x16_t v54;
  int8x16_t v55;
  int8x16_t v56;
  int8x16_t v57;
  int8x16_t v58;
  char v59;
  _QWORD* v61;
  int v62;
  int v63;
  __int64 v64;
  unsigned __int64 v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;

  v6 = (float32x4_t*)a1[1];
  v12 = v6[29];
  LANES128(v12).n128_u32[1] = 0;
  v13 = vmulq_f32(v12, v12);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v13).n128_f32[0] != 0x0.0p+0f ||
      (LANES128(v14).n128_u64[0] = 0x3F0000003F000000LL,
       LANES128(v14).n128_u64[1] = 0x3F0000003F000000LL,
       v12 = vtrn2q_s32(
           vrev64q_s32(vsubq_f32(vmulq_f32(vaddq_f32(*a3, *a2), v14),
                                 vmulq_f32(vaddq_f32(*a5, *a4), v14))),
           COERCE_AS(int32x4_t, 0)),
       v13 = vmulq_f32(v12, v12),
       LANES128(v13).n128_u64[0] =
           LANES64_OF(
               vadd_f32(
                   COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
               .n64_u64[0],
       LANES128(v13).n128_u64[0] =
           LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
               .n64_u64[0],
       LANES128(v13).n128_f32[0] != 0x0.0p+0f)) {
    LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
    v16 = v6[27];
    v15 = vrsqrteq_f32(v13);
    LANES128(v16).n128_u32[1] = 0;
    v17 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v13, v15)));
    v18 = vbicq_s8(
        vmulq_f32(v12, vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v13, v17)))),
        vceqzq_f32(v13));
    v19 = vmulq_f32(v16, v16);
    LANES128(v19).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
            .n64_u64[0];
    LANES128(v20).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
            .n64_u64[0];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      v61 = a1;
      v67 = v16;
      v69 = v18;
      v65 = LANES128(v20).n128_u64[0];
      v62 = __cxa_guard_acquire((__int64)&GameData_21a6190);
      LANES128(v20).n128_u64[0] = v65;
      v16 = v67;
      v18 = v69;
      v63 = v62;
      a1 = v61;
      if (v63 != 0) {
        v64 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v64;
        __cxa_guard_release((__int64)&GameData_21a6190);
        LANES128(v20).n128_u64[0] = v65;
        v16 = v67;
        v18 = v69;
        a1 = v61;
      }
    }
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v22).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v21).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v22).n128_i8[8] =
        vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v23).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v24).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v24).n128_i8[8] =
        vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v25 = vmlsq_f32(vmulq_f32(v21, v22), v24, v23);
    if (LANES128(v20).n128_f32[0] != 0x0.0p+0f) {
      LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
      v26 = vrsqrteq_f32(v20);
      v27 = vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(v20, v26)));
      v28 = vbicq_s8(
          vmulq_f32(v16,
                    vmulq_f32(v27, vrsqrtsq_f32(v27, vmulq_f32(v20, v27)))),
          vceqzq_f32(v20));
      v29 = LANES128(v18).n128_u32[1];
      v30 = vmulq_f32(v28, v25);
      LANES128(v30).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
              .n64_u64[0];
      LANES128(v27).n128_f32[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
              .n64_f32[0];
      v31 = LANES128(v18).n128_u32[2];
      if (LANES128(v27).n128_f32[0] < 0x0.0p+0f) {
        v28 = vnegq_f32(v28);
      }
      goto LABEL_9;
    }
    LANES128(v25).n128_u32[3] = 0;
    v32 = vmulq_f32(v25, v25);
    LANES128(v32).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
            .n64_u64[0];
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v32).n128_f32[0] != 0x0.0p+0f) {
      LANES128(v32).n128_u64[1] = LANES128(v32).n128_u64[0];
      v33 = vrsqrteq_f32(v32);
      v34 = vmulq_f32(v33, vrsqrtsq_f32(v33, vmulq_f32(v32, v33)));
      v35 = vmulq_f32(v25,
                      vmulq_f32(v34, vrsqrtsq_f32(v34, vmulq_f32(v32, v34))));
      v29 = LANES128(v18).n128_u32[1];
      v28 = vbicq_s8(v35, vceqzq_f32(v32));
      v31 = LANES128(v18).n128_u32[2];
    LABEL_9:
      LANES128(v39).n128_u32[3] = 0;
      LANES128(v38).n128_u32[3] = 0;
      v36 = a1[49];
      v37 = a1[50];
      LANES128(v38).n128_u32[0] = LANES128(v18).n128_u32[0];
      LANES128(v39).n128_u32[0] = LANES128(v28).n128_u32[0];
      if (v37 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                  memory_order_relaxed);
      }
      LANES128(v38).n128_u32[1] = v29;
      LANES128(v39).n128_u32[1] = LANES128(v28).n128_u32[1];
      if (v36 != 0) {
        v40 = fmaxf(*(float*)(*(_QWORD*)(v36 + 11792) + 40LL) *
                        0x1.99999a0000000p-4f,
                    0x1.99999a0000000p-5f);
      }
      else {
        v40 = 0x1.99999a0000000p-5f;
      }
      LANES128(v38).n128_u32[2] = v31;
      LANES128(v39).n128_u32[2] = LANES128(v28).n128_u32[2];
      if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v66 = v38;
        v68 = v39;
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        std___1___shared_weak_count___release_weak(v37);
        v38 = v66;
        v39 = v68;
      }
      v41 = *a2;
      v42 = *a3;
      v43 = *a4;
      LANES128(v44).n128_u64[0] = 0x3E8000003E800000LL;
      LANES128(v44).n128_u64[1] = 0x3E8000003E800000LL;
      v45 = *a5;
      v46 = vmulq_f32(vaddq_f32(vaddq_f32(vaddq_f32(*a2, *a3), *a4), *a5), v44);
      v47 = vsubq_f32(*a2, v46);
      v48 = vsubq_f32(*a3, v46);
      v49 = vsubq_f32(*a4, v46);
      v50 = vsubq_f32(*a5, v46);
      v51 = vmulq_f32(v38, v47);
      v52 = vmulq_f32(v39, v47);
      v53 = vmulq_f32(v38, v48);
      v54 = vmulq_f32(v39, v48);
      v55 = vmulq_f32(v38, v49);
      v56 = vmulq_f32(v39, v49);
      v57 = vmulq_f32(v38, v50);
      v58 = vmulq_f32(v39, v50);
      LANES128(v51).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
              .n64_u64[0];
      LANES128(v52).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
              .n64_u64[0];
      LANES128(v53).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v53, v53, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
              .n64_u64[0];
      LANES128(v54).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v54, v54, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v54).n128_u64[0])))
              .n64_u64[0];
      LANES128(v55).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v55, v55, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
              .n64_u64[0];
      LANES128(v56).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v56, v56, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0])))
              .n64_u64[0];
      LANES128(v57).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v57, v57, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
              .n64_u64[0];
      LANES128(v58).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v58, v58, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
              .n64_u64[0];
      v72 = vaddq_f32(
          vaddq_f32(
              v46,
              vmulq_n_f32(
                  v38,
                  fmaxf(
                      fabsf(LANES64_OF(
                                vpadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v53).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v53).n128_u64[0])))
                                .n64_f32[0]),
                      v40))),
          vmulq_n_f32(
              v39,
              -fmaxf(fabsf(LANES64_OF(
                               vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v54).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v54).n128_u64[0])))
                               .n64_f32[0]),
                     v40)));
      v73 = vaddq_f32(
          vaddq_f32(
              v46,
              vmulq_n_f32(
                  v38,
                  fmaxf(
                      fabsf(LANES64_OF(
                                vpadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v51).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v51).n128_u64[0])))
                                .n64_f32[0]),
                      v40))),
          vmulq_n_f32(
              v39,
              fmaxf(fabsf(LANES64_OF(
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v52).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v52).n128_u64[0])))
                              .n64_f32[0]),
                    v40)));
      LANES128(v73).n128_u32[1] = LANES128(v41).n128_u32[1];
      LANES128(v72).n128_u32[1] = LANES128(v42).n128_u32[1];
      v71 = vaddq_f32(
          vaddq_f32(
              v46,
              vmulq_n_f32(
                  v38,
                  -fmaxf(
                      fabsf(LANES64_OF(
                                vpadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v55).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v55).n128_u64[0])))
                                .n64_f32[0]),
                      v40))),
          vmulq_n_f32(
              v39,
              fmaxf(fabsf(LANES64_OF(
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v56).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v56).n128_u64[0])))
                              .n64_f32[0]),
                    v40)));
      LANES128(v71).n128_u32[1] = LANES128(v43).n128_u32[1];
      v70 = vaddq_f32(
          vaddq_f32(
              v46,
              vmulq_n_f32(
                  v38,
                  -fmaxf(
                      fabsf(LANES64_OF(
                                vpadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v57).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v57).n128_u64[0])))
                                .n64_f32[0]),
                      v40))),
          vmulq_n_f32(
              v39,
              -fmaxf(fabsf(LANES64_OF(
                               vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v58).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v58).n128_u64[0])))
                               .n64_f32[0]),
                     v40)));
      LANES128(v70).n128_u32[1] = LANES128(v45).n128_u32[1];
      if ((GameRoutine_10fdef0(&v73, &v72, &v71, &v70, a6) & 1) != 0) {
        v59 = 1;
      }
      else {
        v59 = GameRoutine_10fdef0(a2, a3, a4, a5, a6);
      }
      return v59 & 1;
    }
  }
  return GameRoutine_10fdef0(a2, a3, a4, a5, a6);
}

__attribute__((swiftcall)) void

game_character_1116460(PSEUDO_X8 x8_, __int128* a1, __int64 a2, float* a3,
                       _DWORD* a4, unsigned __int64 a5, int a6, float a8)
{
  _QWORD* a7 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v9;
  __int64 result;
  __int128 v17;
  __int128 v18;
  _DWORD* v19;
  unsigned __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  bool v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  __int64 v56;
  __int128 v57;
  float v58;
  float v59;
  float v60;
  unsigned int v61;
  __int128 v62;
  __int64* v63;
  __int128 v64;
  __int128 v65;
  float v66;
  float v67;
  float v68;
  __int64 v69;
  float v70;
  float v71;
  __int128 v72;
  unsigned int v73;
  __int128 v74;
  _QWORD* v75;
  __int128 v76;
  __int128 v77;
  float v78;
  unsigned __int64 v79;
  float v80;
  bool v81;
  float v82;
  bool v83;
  bool v84;
  float v85;
  bool v86;
  bool v87;
  float v88;
  _BYTE* v89;
  bool v90;
  bool v91;
  float v92;
  float* v93;
  bool v94;
  bool v95;
  bool v96;
  bool v97;
  bool v98;
  bool v99;
  atomic_uchar* v100;
  bool v101;
  bool v102;
  __int128* v103;
  bool v104;
  float* v105;
  _QWORD* v106;
  float v107;
  unsigned int v108;
  __int128 v109;
  float v110;
  float v111;
  __int64 v112;
  __int64 v113;
  float v114;
  __int64 v115;
  float v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  float v120;
  unsigned __int64 v121;
  float v122;
  float v123;
  __int64 v124;
  float* v125;
  float* v126;
  _BYTE* v127;
  float v128;
  float v129;
  __int64* v130;
  float* v131;
  int v132;
  float v133;
  float v134;
  float v135;
  __int64* v136;
  float* v137;
  int v138;
  float v139;
  float v140;
  float v141;
  float v142;
  __int64 v143;
  unsigned __int64 v144;
  _BYTE* v145;
  float* v146;
  float* v147;
  _QWORD* v148;
  __int128* v149;
  int v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  _DWORD* v155;
  _DWORD* v156;
  __int128 v157;
  __int128 v158;
  __int128 v159;
  unsigned int* v160;
  __int128 v161;
  __int64 v162;
  unsigned __int64 v163;
  _DWORD* v164;
  __int128 v165;
  __int128 v166;
  float* v167;
  float* v168;
  __int64 v169;
  float* v170;
  float v171;
  float* v172;
  float v173;
  float v174;
  float v175;
  float v176;
  float v177;
  int v178;
  float v179;
  bool v180;
  float v181;
  float v182;
  float* v183;
  float* v184;
  float* v185;
  float v186;
  float v187;
  float v188;
  float* v189;
  float v190;
  float v191;
  float v192;
  float v193;
  float v194;
  float* v195;
  float v196;
  float* v197;
  float v198;
  float v199;
  float v200;
  float v201;
  float v202;
  float* v203;
  float v204;
  float v205;
  float v206;
  float v207;
  int v208;
  float v209;
  float v210;
  float v211;
  float v212;
  float v213;
  float v214;
  float v215;
  unsigned int v216;
  __int64 v217;
  __int64 v218;
  float v219;
  float v220;
  __int64* v221;
  float v222;
  float v223;
  float v224;
  __int64 v225;
  float v226;
  float v227;
  float* v228;
  float v229;
  __int64 v230;
  __int64 v231;
  float v232;
  float v233;
  float* v234;
  float v235;
  float* v236;
  __int64 v237;
  __int64 v238;
  float v239;
  float v240;
  float* v241;
  float* v242;
  __int64 v243;
  __int64 v244;
  float v245;
  bool v246;
  __int64 v247;
  float* v248;
  __int64 v249;
  __int64** v250;
  float v251;
  float v252;
  __int64 v253;
  float* v254;
  float* v255;
  __int64 v256;
  float v257;
  float v258;
  __int64 v259;
  float v260;
  float v261;
  float v262;
  float v263;
  float v264;
  float v265;
  float v266;
  int* v267;
  float v268;
  float v269;
  float v270;
  float v271;
  __int64 v272;
  float v273;
  float v274;
  float* v275;
  float v276;
  float v277;
  float v278;
  float v279;
  float v280;
  float v281;
  __int64 v282;
  __int64 v283;
  float v284;
  float v285;
  __int64 v286;
  float* v287;
  __int64 v288;
  __int64 v289;
  float v290;
  float v291;
  float v292;
  float* v293;
  float* v294;
  float v295;
  float v296;
  float v297;
  float v298;
  float v299;
  float v300;
  float v301;
  float v302;
  float v303;
  float32x4_t v304;
  float v305;
  float32x2_t v306;
  float v307;
  float v308;
  float32x2_t v309;
  float32x4_t v310;
  float32x4_t v311;
  float32x4_t v312;
  int8x16_t v313;
  float v314;
  float v315;
  float v316;
  float v317;
  float v318;
  float v319;
  float v320;
  float v321;
  float v322;
  float v323;
  float v324;
  float v325;
  float v326;
  float v327;
  float v328;
  float v329;
  float v330;
  float v331;
  float v332;
  float v333;
  float v334;
  float v335;
  float v336;
  float v337;
  float v338;
  float v339;
  float v340;
  float v341;
  float v342;
  __int128 v343;
  __int128 v344;
  __int128 v345;
  float* v346;
  float v347;
  float* v348;
  float* v349;
  float* v350;
  float v351;
  float v352;
  float v353;
  _DWORD* v354;
  float* v355;
  _QWORD* v356;
  int v357;
  float v358;
  float v359;
  float v360;
  float v361;
  float v362;
  float v363;
  float v364;
  float v365;
  __int128* v366;
  _QWORD v368[2];
  __int64 v369;
  __int64 v370;
  __int128 v371;
  __int64 v372;
  __int64 v373;
  __int64 v374;
  __int64 v375;
  int v376;
  struct {
    __int128 v377;
    int v378;
    int v379;
    int v380;
    int v381;
  } v377_;
  _DWORD v382[9];
  int v383;
  struct {
    __int64 v384;
    __int64 v385;
    __int128 v386;
    __int64 v387;
    __int64 v388;
    __int64 v389;
    __int64 v390;
    int v391;
    char gap356_[12];
    float v392;
    float v393;
    float v394;
    float v395;
    bool v396;
    _BYTE v397[15];
    float v398;
    float v399[7];
    float v400[8];
    float v401;
    float v402[7];
    float v403[8];
    _QWORD v404[4];
    _QWORD v405[4];
    __int128 v406;
    __int128 v407;
    __int128 v408;
    __int128 v409;
    __int128 v410;
    __int128 v411;
    __int128 v412;
    __int128 v413;
    __int128 v414;
    __int128 v415;
    __int128 v416;
    __int128 v417;
    __int128 v418;
    __int128 v419;
    __int128 v420;
    __int128 v421;
    __int128 v422;
    __int128 v423;
    __int128 v424;
    __int128 v425;
    __int128 v426;
    __int128 v427;
    __int128 v428;
    __int128 v429;
    __int128 v430;
    __int128 v431;
    __int128 v432;
    __int128 v433;
    _QWORD v434[6];
  } v384_;

  v9 = *(_QWORD*)(a2 + 32);
  if (v9 == 0) {
  LABEL_307:
    GameRoutine_60a310();
  }
  result = (__int64)X8CALL_X0(
      _QWORD*,
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int128*))(
          *(_QWORD*)v9 + 48LL))((void*)v384_.v434, v9, a1));
  if (*((float*)v384_.v434 + 1) <= -0x1.9000000000000p+6f) {
    if (a3 != nullptr) {
      *a3 = 0x0.0p+0f;
    }
    if (a5 != 0) {
      v17 = *(_OWORD*)v384_.v434;
      v18 = *(_OWORD*)&v384_.v434[2];
      v19 = a4;
      v20 = 32 * a5 - 32;
      v21 = HIDWORD(v384_.v434[0]);
      v22 = HIDWORD(v384_.v434[2]);
      if ((~(_BYTE)v20 & 0x60) != 0) {
        v23 = -(__int64)(((unsigned __int8)((unsigned int)v20 >> 5) + 1) & 3);
        v19 = a4;
        do {
          *v19 = v17;
          v19[1] = v21;
          v19[4] = v18;
          v19[5] = v22;
          v24 = __CFADD__(v23++, 1);
          v25 = *(_OWORD*)v19;
          v26 = *((_OWORD*)v19 + 1);
          *((_QWORD*)&v25 + 1) = DWORD2(v17);
          *((_QWORD*)&v26 + 1) = DWORD2(v18);
          *(_OWORD*)v19 = v25;
          *((_OWORD*)v19 + 1) = v26;
          v19 += 8;
        } while (!v24);
      }
      if (v20 >= 0x60) {
        do {
          *v19 = v17;
          v19[1] = v21;
          v19[4] = v18;
          v19[5] = v22;
          v27 = *(_OWORD*)v19;
          v28 = *((_OWORD*)v19 + 1);
          v19[8] = v17;
          v19[9] = v21;
          v19[12] = v18;
          v19[13] = v22;
          *((_QWORD*)&v27 + 1) = DWORD2(v17);
          *((_QWORD*)&v28 + 1) = DWORD2(v18);
          v19[16] = v17;
          v19[17] = v21;
          v19[20] = v18;
          v19[21] = v22;
          v19[24] = v17;
          v19[25] = v21;
          v19[28] = v18;
          v19[29] = v22;
          *(_OWORD*)v19 = v27;
          *((_OWORD*)v19 + 1) = v28;
          v29 = *((_OWORD*)v19 + 2);
          v30 = *((_OWORD*)v19 + 3);
          *((_QWORD*)&v29 + 1) = DWORD2(v17);
          *((_QWORD*)&v30 + 1) = DWORD2(v18);
          *((_OWORD*)v19 + 2) = v29;
          *((_OWORD*)v19 + 3) = v30;
          v31 = *((_OWORD*)v19 + 4);
          v32 = *((_OWORD*)v19 + 5);
          *((_QWORD*)&v31 + 1) = DWORD2(v17);
          *((_QWORD*)&v32 + 1) = DWORD2(v18);
          *((_OWORD*)v19 + 4) = v31;
          *((_OWORD*)v19 + 5) = v32;
          v33 = *((_OWORD*)v19 + 6);
          v34 = *((_OWORD*)v19 + 7);
          *((_QWORD*)&v33 + 1) = DWORD2(v17);
          *((_QWORD*)&v34 + 1) = DWORD2(v18);
          *((_OWORD*)v19 + 6) = v33;
          *((_OWORD*)v19 + 7) = v34;
          v19 += 32;
        } while (v19 != &a4[8 * a5]);
      }
    }
    v35 = v384_.v434[1];
    *a7 = v384_.v434[0];
    a7[1] = v35;
    v36 = v384_.v434[3];
    a7[2] = v384_.v434[2];
    a7[3] = v36;
    {
      result;
      return;
    }
  }
  v354 = a4;
  v357 = a6;
  v366 = a1;
  v37 = 0;
  v355 = a3;
  v356 = a7;
  v38 = 0;
  v39 = 0;
  *(_OWORD*)v384_.v404 = (__typeof__(*(_OWORD*)v384_.v404)){0};
  *(_OWORD*)&v384_.v404[2] = GameData_1a83610;
  *(_OWORD*)v384_.v405 = (__typeof__(*(_OWORD*)v384_.v405)){0};
  *(_OWORD*)&v384_.v405[2] = GameData_1a83610;
  v384_.v406 = (__typeof__(v384_.v406)){0};
  v384_.v407 = GameData_1a83610;
  v40 = *(float*)GameData_212c190;
  v41 = *((float*)GameData_212c190 + 1);
  v42 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v43 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v384_.v408 = (__typeof__(v384_.v408)){0};
  v384_.v409 = GameData_1a83610;
  v364 = v43;
  v365 = v41;
  v44 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v384_.v410 = (__typeof__(v384_.v410)){0};
  v384_.v411 = GameData_1a83610;
  v362 = -v42;
  v363 = -v40;
  v45 = *(float*)GameData_212c188;
  v46 = *((float*)GameData_212c188 + 1);
  v384_.v412 = (__typeof__(v384_.v412)){0};
  v384_.v413 = GameData_1a83610;
  v47 = -v44;
  v384_.v414 = (__typeof__(v384_.v414)){0};
  v384_.v415 = GameData_1a83610;
  v48 = -v45;
  v360 = v46;
  v361 = v47;
  v49 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v50 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v51 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v384_.v416 = (__typeof__(v384_.v416)){0};
  v384_.v417 = GameData_1a83610;
  v384_.v418 = (__typeof__(v384_.v418)){0};
  v384_.v419 = GameData_1a83610;
  v52 = -v51;
  v384_.v420 = (__typeof__(v384_.v420)){0};
  v384_.v421 = GameData_1a83610;
  v358 = v49;
  v359 = v48;
  v384_.v422 = (__typeof__(v384_.v422)){0};
  v384_.v423 = GameData_1a83610;
  v384_.v424 = (__typeof__(v384_.v424)){0};
  v384_.v425 = GameData_1a83610;
  v384_.v426 = (__typeof__(v384_.v426)){0};
  v384_.v427 = GameData_1a83610;
  v384_.v428 = (__typeof__(v384_.v428)){0};
  v384_.v429 = GameData_1a83610;
  v384_.v430 = (__typeof__(v384_.v430)){0};
  v384_.v431 = GameData_1a83610;
  v384_.v432 = (__typeof__(v384_.v432)){0};
  v384_.v433 = GameData_1a83610;
  do {
    v53 = (float)(PSEUDO_UNFUSED((float)v38 * 0x1.921fb60000000p-1f)) +
          (float)(roundf((float)((float)v38 * 0x1.921fb60000000p-1f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v53 <= 0x1.921fb60000000p+0f) {
      v55 = 0x1.0000000000000p+0f;
      if (v53 >= -0x1.921fb60000000p+0f) {
        goto LABEL_19;
      }
      v54 = -0x1.921fb60000000p+1f;
    }
    else {
      v54 = 0x1.921fb60000000p+1f;
    }
    v53 = v54 - v53;
    v55 = -0x1.0000000000000p+0f;
  LABEL_19:
    v56 = *(_QWORD*)(a2 + 32);
    v57 = *v366;
    v58 =
        (float)(a8 *
                (float)(v55 *
                        (float)((float)((float)(v52 +
                                                (float)((float)(v358 +
                                                                (float)((float)(v50 +
                                                                                (float)((float)(v360 +
                                                                                                (float)(v359 *
                                                                                                        (float)(v53 *
                                                                                                                v53))) *
                                                                                        (float)(v53 *
                                                                                                v53))) *
                                                                        (float)(v53 *
                                                                                v53))) *
                                                        (float)(v53 * v53))) *
                                        (float)(v53 * v53)) +
                                0x1.0000000000000p+0f))) *
        0x1.0000000000000p-1f;
    v59 =
        (float)(a8 *
                (float)(v53 *
                        (float)((float)((float)(v361 +
                                                (float)((float)(v364 +
                                                                (float)((float)(v362 +
                                                                                (float)((float)(v365 +
                                                                                                (float)(v363 *
                                                                                                        (float)(v53 *
                                                                                                                v53))) *
                                                                                        (float)(v53 *
                                                                                                v53))) *
                                                                        (float)(v53 *
                                                                                v53))) *
                                                        (float)(v53 * v53))) *
                                        (float)(v53 * v53)) +
                                0x1.0000000000000p+0f))) *
        0x1.0000000000000p-1f;
    v60 = COERCE_FLOAT(*((_QWORD*)v366 + 1));
    v384_.v402[v37 - 1] = v58;
    v384_.v399[v37 - 1] = v59;
    *(float*)&v57 = *(float*)&v57 + v58;
    *((_QWORD*)&v57 + 1) = COERCE_UNSIGNED_INT(v60 + v59);
    v377_.v377 = v57;
    if (v56 == 0) {
      goto LABEL_307;
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int128*))(
        *(_QWORD*)v56 + 48LL))((void*)(&v384_.v384), v56, &v377_.v377);
    v61 = v384_.v385;
    v62 = v384_.v386;
    v63 = &v384_.v404[v39];
    *v63 = v384_.v384;
    v63[2] = v62;
    v64 = *(_OWORD*)&v384_.v404[v39];
    v65 = *(_OWORD*)&v384_.v404[v39 + 2];
    *((_QWORD*)&v64 + 1) = v61;
    *((_QWORD*)&v65 + 1) = DWORD2(v62);
    *(_OWORD*)v63 = v64;
    *((_OWORD*)v63 + 1) = v65;
    v66 = (float)((float)((float)v38 * 0x1.921fb60000000p-1f) +
                  0x1.921fb60000000p-2f) +
          (float)(roundf((float)((float)((float)v38 * 0x1.921fb60000000p-1f) +
                                 0x1.921fb60000000p-2f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v66 <= 0x1.921fb60000000p+0f) {
      v68 = 0x1.0000000000000p+0f;
      if (v66 >= -0x1.921fb60000000p+0f) {
        goto LABEL_25;
      }
      v67 = -0x1.921fb60000000p+1f;
    }
    else {
      v67 = 0x1.921fb60000000p+1f;
    }
    v66 = v67 - v66;
    v68 = -0x1.0000000000000p+0f;
  LABEL_25:
    v69 = *(_QWORD*)(a2 + 32);
    v70 =
        a8 *
        (float)(v68 *
                (float)((float)((float)(v52 +
                                        (float)((float)(v358 +
                                                        (float)((float)(v50 +
                                                                        (float)((float)(v360 +
                                                                                        (float)(v359 *
                                                                                                (float)(v66 *
                                                                                                        v66))) *
                                                                                (float)(v66 *
                                                                                        v66))) *
                                                                (float)(v66 *
                                                                        v66))) *
                                                (float)(v66 * v66))) *
                                (float)(v66 * v66)) +
                        0x1.0000000000000p+0f));
    v71 =
        a8 *
        (float)(v66 *
                (float)((float)((float)(v361 +
                                        (float)((float)(v364 +
                                                        (float)((float)(v362 +
                                                                        (float)((float)(v365 +
                                                                                        (float)(v363 *
                                                                                                (float)(v66 *
                                                                                                        v66))) *
                                                                                (float)(v66 *
                                                                                        v66))) *
                                                                (float)(v66 *
                                                                        v66))) *
                                                (float)(v66 * v66))) *
                                (float)(v66 * v66)) +
                        0x1.0000000000000p+0f));
    v384_.v403[v37] = v70;
    v384_.v400[v37] = v71;
    v72 = *v366;
    *(float*)&v72 = COERCE_FLOAT(*v366) + v70;
    *((_QWORD*)&v72 + 1) =
        COERCE_UNSIGNED_INT(COERCE_FLOAT(*((_QWORD*)v366 + 1)) + v71);
    v377_.v377 = v72;
    if (v69 == 0) {
      goto LABEL_307;
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int128*))(
        *(_QWORD*)v69 + 48LL))((void*)(&v384_.v384), v69, &v377_.v377);
    v73 = v384_.v385;
    v74 = v384_.v386;
    v75 = &v384_.v404[v39];
    v39 += 4;
    ++v38;
    ++v37;
    v75[32] = v384_.v384;
    v75[34] = v74;
    v76 = *((_OWORD*)v75 + 16);
    v77 = *((_OWORD*)v75 + 17);
    *((_QWORD*)&v76 + 1) = v73;
    *((_QWORD*)&v77 + 1) = DWORD2(v74);
    *((_OWORD*)v75 + 16) = v76;
    *((_OWORD*)v75 + 17) = v77;
  } while (v39 != 32);
  v78 = 0x1.0000000000000p+0f;
  v79 = 0;
  v80 = 0x1.0000000000000p+0f / a8;
  v81 = *((float*)v384_.v404 + 1) <= -0x1.9000000000000p+6f;
  v82 = vabds_f32(*((float*)v384_.v405 + 1), *((float*)v384_.v434 + 1));
  if ((float)((float)(0x1.0000000000000p+0f / a8) *
              vabds_f32(*((float*)v384_.v404 + 1), *((float*)v384_.v434 + 1))) >
      0x1.47ae140000000p-1f) {
    v81 = true;
  }
  v384_.v396 = v81;
  v83 = *((float*)v384_.v405 + 1) <= -0x1.9000000000000p+6f;
  if ((float)(v80 * v82) > 0x1.47ae140000000p-1f) {
    v83 = true;
  }
  v384_.v397[0] = v83;
  v84 = *((float*)&v384_.v406 + 1) <= -0x1.9000000000000p+6f;
  v85 = vabds_f32(*((float*)&v384_.v408 + 1), *((float*)v384_.v434 + 1));
  if ((float)(v80 * vabds_f32(*((float*)&v384_.v406 + 1),
                              *((float*)v384_.v434 + 1))) >
      0x1.47ae140000000p-1f) {
    v84 = true;
  }
  v384_.v397[1] = v84;
  v86 = *((float*)&v384_.v408 + 1) <= -0x1.9000000000000p+6f;
  if ((float)(v80 * v85) > 0x1.47ae140000000p-1f) {
    v86 = true;
  }
  v384_.v397[2] = v86;
  v87 = *((float*)&v384_.v410 + 1) <= -0x1.9000000000000p+6f;
  v88 = vabds_f32(*((float*)&v384_.v412 + 1), *((float*)v384_.v434 + 1));
  if ((float)(v80 * vabds_f32(*((float*)&v384_.v410 + 1),
                              *((float*)v384_.v434 + 1))) >
      0x1.47ae140000000p-1f) {
    v87 = true;
  }
  v384_.v397[3] = v87;
  v89 = v384_.v397;
  v90 = (float)(v80 * v88) > 0x1.47ae140000000p-1f ||
        *((float*)&v384_.v412 + 1) <= -0x1.9000000000000p+6f;
  v384_.v397[4] = v90;
  v91 = *((float*)&v384_.v414 + 1) <= -0x1.9000000000000p+6f;
  v92 = vabds_f32(*((float*)&v384_.v416 + 1), *((float*)v384_.v434 + 1));
  if ((float)(v80 * vabds_f32(*((float*)&v384_.v414 + 1),
                              *((float*)v384_.v434 + 1))) >
      0x1.47ae140000000p-1f) {
    v91 = true;
  }
  v384_.v397[5] = v91;
  v93 = v384_.v402;
  v94 = *((float*)&v384_.v416 + 1) <= -0x1.9000000000000p+6f;
  if ((float)(v80 * v92) > 0x1.47ae140000000p-1f) {
    v94 = true;
  }
  v384_.v397[6] = v94;
  v95 = *((float*)&v384_.v418 + 1) <= -0x1.9000000000000p+6f;
  if ((float)(v80 * vabds_f32(*((float*)&v384_.v418 + 1),
                              *((float*)v384_.v434 + 1))) >
      0x1.47ae140000000p-1f) {
    v95 = true;
  }
  v384_.v397[7] = v95;
  v96 = *((float*)&v384_.v420 + 1) <= -0x1.9000000000000p+6f;
  if ((float)(v80 * vabds_f32(*((float*)&v384_.v420 + 1),
                              *((float*)v384_.v434 + 1))) >
      0x1.47ae140000000p-1f) {
    v96 = true;
  }
  v384_.v397[8] = v96;
  v97 = *((float*)&v384_.v422 + 1) <= -0x1.9000000000000p+6f;
  if ((float)(v80 * vabds_f32(*((float*)&v384_.v422 + 1),
                              *((float*)v384_.v434 + 1))) >
      0x1.47ae140000000p-1f) {
    v97 = true;
  }
  v384_.v397[9] = v97;
  v98 = *((float*)&v384_.v424 + 1) <= -0x1.9000000000000p+6f;
  if ((float)(v80 * vabds_f32(*((float*)&v384_.v424 + 1),
                              *((float*)v384_.v434 + 1))) >
      0x1.47ae140000000p-1f) {
    v98 = true;
  }
  v384_.v397[10] = v98;
  v99 = *((float*)&v384_.v426 + 1) <= -0x1.9000000000000p+6f;
  if ((float)(v80 * vabds_f32(*((float*)&v384_.v426 + 1),
                              *((float*)v384_.v434 + 1))) >
      0x1.47ae140000000p-1f) {
    v99 = true;
  }
  v384_.v397[11] = v99;
  v100 = (atomic_uchar*)&GameData_21a6190;
  v101 = *((float*)&v384_.v428 + 1) <= -0x1.9000000000000p+6f;
  if ((float)(v80 * vabds_f32(*((float*)&v384_.v428 + 1),
                              *((float*)v384_.v434 + 1))) >
      0x1.47ae140000000p-1f) {
    v101 = true;
  }
  v384_.v397[12] = v101;
  v102 = (float)(v80 * vabds_f32(*((float*)&v384_.v430 + 1),
                                 *((float*)v384_.v434 + 1))) >
             0x1.47ae140000000p-1f ||
         *((float*)&v384_.v430 + 1) <= -0x1.9000000000000p+6f;
  v384_.v397[13] = v102;
  v103 = &GameData_21a6180;
  v104 = *((float*)&v384_.v432 + 1) <= -0x1.9000000000000p+6f;
  if ((float)(v80 * vabds_f32(*((float*)&v384_.v432 + 1),
                              *((float*)v384_.v434 + 1))) >
      0x1.47ae140000000p-1f) {
    v104 = true;
  }
  v384_.v397[14] = v104;
  v105 = v384_.v399;
  v106 = GameData_212c558;
  while (2) {
    result = v384_.v397[v79 - 1];
    if (!v384_.v397[v79 - 1]) {
      goto LABEL_65;
    }
    if (v79 > 7) {
      v110 = 0x0.0p+0f;
      v111 = 0x0.0p+0f;
      v118 = ((_BYTE)v79 - 1) & 7 | 8LL;
      if (!v384_.v397[v118 - 1]) {
        v111 = v78 / (float)((float)((float)(PSEUDO_UNFUSED(
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v118 - 1]) *
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v118 - 1]))) +
                                     (float)((float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v118 - 1]) *
                                             (float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v118 - 1]))) +
                             0x1.47ae140000000p-7f);
        v110 = (float)(*((float*)&v384_.v404[4 * v118] + 1) * v111) + 0x0.0p+0f;
      }
      v117 = ((_BYTE)v79 + 1) & 7;
      v119 = v117 | 8;
      if (!v384_.v397[(v117 | 8) - 1]) {
        v120 = v78 / (float)((float)((float)(PSEUDO_UNFUSED(
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v119 - 1]) *
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v119 - 1]))) +
                                     (float)((float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v119 - 1]) *
                                             (float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v119 - 1]))) +
                             0x1.47ae140000000p-7f);
        v110 = v110 + (float)(*((float*)&v384_.v404[4 * v119] + 1) * v120);
        v111 = v111 + v120;
      }
      v121 = v79 - 8;
      if (*(&v384_.v396 + v79 - 8)) {
        if (v384_.v397[v117 - 1]) {
          goto LABEL_82;
        }
      }
      else {
        v122 = v78 / (float)((float)((float)(PSEUDO_UNFUSED(
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v121 - 1]) *
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v121 - 1]))) +
                                     (float)((float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v121 - 1]) *
                                             (float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v121 - 1]))) +
                             0x1.47ae140000000p-7f);
        v110 = v110 + (float)(*((float*)&v384_.v404[4 * v121] + 1) * v122);
        v111 = v111 + v122;
        if (v384_.v397[v117 - 1]) {
          goto LABEL_82;
        }
      }
    LABEL_85:
      v123 = v78 / (float)((float)((float)(PSEUDO_UNFUSED(
                                       (float)(v384_.v399[v79 - 1] -
                                               v384_.v399[v117 - 1]) *
                                       (float)(v384_.v399[v79 - 1] -
                                               v384_.v399[v117 - 1]))) +
                                   (float)((float)(v384_.v402[v79 - 1] -
                                                   v384_.v402[v117 - 1]) *
                                           (float)(v384_.v402[v79 - 1] -
                                                   v384_.v402[v117 - 1]))) +
                           0x1.47ae140000000p-7f);
      v110 = v110 + (float)(*((float*)&v384_.v404[4 * v117] + 1) * v123);
      v111 = v111 + v123;
      if (v111 > 0x0.0p+0f) {
        goto LABEL_124;
      }
    }
    else {
      v110 = 0x0.0p+0f;
      v111 = 0x0.0p+0f;
      v112 = ((_BYTE)v79 + 7) & 7;
      if (!v384_.v397[v112 - 1]) {
        v111 = v78 / (float)((float)((float)(PSEUDO_UNFUSED(
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v112 - 1]) *
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v112 - 1]))) +
                                     (float)((float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v112 - 1]) *
                                             (float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v112 - 1]))) +
                             0x1.47ae140000000p-7f);
        v110 = (float)(*((float*)&v384_.v404[4 * v112] + 1) * v111) + 0x0.0p+0f;
      }
      v113 = ((_BYTE)v79 + 1) & 7;
      if (!v384_.v397[v113 - 1]) {
        v114 = v78 / (float)((float)((float)(PSEUDO_UNFUSED(
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v113 - 1]) *
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v113 - 1]))) +
                                     (float)((float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v113 - 1]) *
                                             (float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v113 - 1]))) +
                             0x1.47ae140000000p-7f);
        v110 = v110 + (float)(*((float*)&v384_.v404[4 * v113] + 1) * v114);
        v111 = v111 + v114;
      }
      v115 = (unsigned int)(v79 + 7) | 8LL;
      if (!v384_.v397[v115 - 1]) {
        v116 = v78 / (float)((float)((float)(PSEUDO_UNFUSED(
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v115 - 1]) *
                                         (float)(v384_.v399[v79 - 1] -
                                                 v384_.v399[v115 - 1]))) +
                                     (float)((float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v115 - 1]) *
                                             (float)(v384_.v402[v79 - 1] -
                                                     v384_.v402[v115 - 1]))) +
                             0x1.47ae140000000p-7f);
        v110 = v110 + (float)(*((float*)&v384_.v404[4 * v115] + 1) * v116);
        v111 = v111 + v116;
      }
      v117 = v79 | 8;
      if (!v384_.v397[(v79 | 8) - 1]) {
        goto LABEL_85;
      }
    LABEL_82:
      if (v111 > 0x0.0p+0f) {
        goto LABEL_124;
      }
    }
    v124 = 0;
    LODWORD(v384_.v384) = -1;
    LODWORD(v377_.v377) = -1;
    v125 = v105;
    v126 = v93;
    v127 = v89;
    LODWORD(v369) = -1;
    LODWORD(v368[0]) = -1;
    v384_.v395 = 0x1.93e5940000000p+99f;
    v384_.v394 = 0x1.93e5940000000p+99f;
    v384_.v393 = 0x1.93e5940000000p+99f;
    v384_.v392 = 0x1.93e5940000000p+99f;
    while (2) {
      if ((*(v127 - 1) & 1) == 0) {
        v128 = v384_.v402[v79 - 1] - *(v126 - 1);
        v129 = (float)(PSEUDO_UNFUSED(
                   (float)(v384_.v399[v79 - 1] - *(v125 - 1)) *
                   (float)(v384_.v399[v79 - 1] - *(v125 - 1)))) +
               (float)(v128 * v128);
        if (v129 < v384_.v395) {
          v130 = &v384_.v384;
          v131 = &v384_.v395;
          goto LABEL_94;
        }
        if (v129 >= v384_.v394) {
          if (v129 < v384_.v393) {
            v132 = 0;
            v130 = &v369;
            v131 = &v384_.v393;
            goto LABEL_95;
          }
          if (v129 < v384_.v392) {
            v131 = &v384_.v392;
            v130 = v368;
            goto LABEL_102;
          }
        }
        else {
          v130 = (__int64*)&v377_.v377;
          v131 = &v384_.v394;
        LABEL_94:
          v132 = 1;
        LABEL_95:
          LODWORD(v368[0]) = v369;
          v384_.v392 = v384_.v393;
          if (v132 != 0) {
            LODWORD(v369) = v377_.v377;
            v384_.v393 = v384_.v394;
            if (v129 < v384_.v395) {
              v384_.v394 = v384_.v395;
              LODWORD(v377_.v377) = v384_.v384;
            }
          }
        LABEL_102:
          *(_DWORD*)v130 = v124;
          *v131 = v129;
        }
      }
      if ((*v127 & 1) == 0) {
        v133 = v384_.v402[v79 - 1] - *v126;
        v134 = v384_.v399[v79 - 1] - *v125;
        v135 = (float)(PSEUDO_UNFUSED(v134 * v134)) + (float)(v133 * v133);
        if (v135 < v384_.v395) {
          v136 = &v384_.v384;
          v137 = &v384_.v395;
          goto LABEL_108;
        }
        if (v135 >= v384_.v394) {
          if (v135 < v384_.v393) {
            v138 = 0;
            v136 = &v369;
            v137 = &v384_.v393;
            goto LABEL_109;
          }
          if (v135 < v384_.v392) {
            v137 = &v384_.v392;
            v136 = v368;
            goto LABEL_87;
          }
        }
        else {
          v136 = (__int64*)&v377_.v377;
          v137 = &v384_.v394;
        LABEL_108:
          v138 = 1;
        LABEL_109:
          LODWORD(v368[0]) = v369;
          v384_.v392 = v384_.v393;
          if (v138 != 0) {
            LODWORD(v369) = v377_.v377;
            v384_.v393 = v384_.v394;
            if (v135 < v384_.v395) {
              v384_.v394 = v384_.v395;
              LODWORD(v377_.v377) = v384_.v384;
            }
          }
        LABEL_87:
          *v137 = v135;
          *(_DWORD*)v136 = v124 + 1;
        }
      }
      v127 += 2;
      v124 += 2;
      v126 += 2;
      v125 += 2;
      if (v124 != 16) {
        continue;
      }
      break;
    }
    if ((v384_.v384 & 0x80000000) == 0) {
      v139 = v78 / (float)(v384_.v395 + 0x1.47ae140000000p-7f);
      v110 = v110 +
             (float)(*((float*)&v384_.v404[4 * (unsigned int)v384_.v384] + 1) *
                     v139);
      v111 = v111 + v139;
    }
    if ((v377_.v377 & 0x80000000) == 0) {
      v140 = v78 / (float)(v384_.v394 + 0x1.47ae140000000p-7f);
      v110 = v110 +
             (float)(*((float*)&v384_.v404[4 * (unsigned int)v377_.v377] + 1) *
                     v140);
      v111 = v111 + v140;
    }
    if ((v369 & 0x80000000) == 0) {
      v141 = v78 / (float)(v384_.v393 + 0x1.47ae140000000p-7f);
      v110 = v110 +
             (float)(*((float*)&v384_.v404[4 * (unsigned int)v369] + 1) * v141);
      v111 = v111 + v141;
    }
    if ((v368[0] & 0x80000000) == 0) {
      v142 = v78 / (float)(v384_.v392 + 0x1.47ae140000000p-7f);
      v110 = v110 +
             (float)(*((float*)&v384_.v404[4 * LODWORD(v368[0])] + 1) * v142);
      v111 = v111 + v142;
    }
  LABEL_124:
    if (v111 <= 0x0.0p+0f) {
      v107 = *((float*)v384_.v434 + 1);
    }
    else {
      v107 = v110 / v111;
    }
    *((float*)&v384_.v404[4 * v79] + 1) = v107;
    if ((atomic_load_explicit(v100, memory_order_acquire) & 1) == 0) {
      v143 = (__int64)v100;
      v144 = v79;
      v145 = v89;
      v146 = v93;
      v147 = v105;
      v148 = v106;
      v149 = v103;
      v150 = __cxa_guard_acquire((__int64)v100);
      v78 = 0x1.0000000000000p+0f;
      v103 = v149;
      v106 = v148;
      v105 = v147;
      v93 = v146;
      v89 = v145;
      v79 = v144;
      v100 = (atomic_uchar*)v143;
      if (v150 != 0) {
        v151 = v148[1];
        *(_QWORD*)v149 = *v148;
        *((_QWORD*)v149 + 1) = v151;
        __cxa_guard_release(v143);
        v78 = 0x1.0000000000000p+0f;
        v103 = v149;
        v106 = v148;
        v105 = v147;
        v93 = v146;
        v89 = v145;
        v79 = v144;
        v100 = (atomic_uchar*)v143;
      }
    }
    v108 = DWORD2(GameData_21a6180);
    result = (__int64)&v384_.v404[4 * v79];
    *(_QWORD*)(result + 16) = GameData_21a6180;
    v109 = *(_OWORD*)(result + 16);
    *((_QWORD*)&v109 + 1) = v108;
    *(_OWORD*)(result + 16) = v109;
  LABEL_65:
    if (++v79 != 16) {
      continue;
    }
    break;
  }
  if (a5 != 0) {
    v152 = 16;
    if (a5 < 0x10) {
      v152 = a5;
    }
    if (a5 == 1) {
      v153 = 0;
      if ((v152 & 1) == 0) {
        goto LABEL_138;
      }
    }
    else {
      v154 = 0;
      v155 = v384_.v405;
      v156 = v354 + 8;
      do {
        v154 -= 2;
        *(v156 - 8) = *(v155 - 8);
        *(v156 - 7) = *(v155 - 7);
        v157 = *((_OWORD*)v156 - 2);
        *((_QWORD*)&v157 + 1) = (unsigned int)*(v155 - 6);
        *((_OWORD*)v156 - 2) = v157;
        *(v156 - 4) = *(v155 - 4);
        *(v156 - 3) = *(v155 - 3);
        v158 = *((_OWORD*)v156 - 1);
        *((_QWORD*)&v158 + 1) = (unsigned int)*(v155 - 2);
        *((_OWORD*)v156 - 1) = v158;
        *v156 = *v155;
        v156[1] = v155[1];
        v159 = *(_OWORD*)v156;
        v160 = v155 + 6;
        *((_QWORD*)&v159 + 1) = (unsigned int)v155[2];
        *(_OWORD*)v156 = v159;
        v156[4] = v155[4];
        LODWORD(v159) = v155[5];
        v155 += 16;
        v156[5] = v159;
        v161 = *((_OWORD*)v156 + 1);
        *((_QWORD*)&v161 + 1) = *v160;
        *((_OWORD*)v156 + 1) = v161;
        v156 += 16;
      } while (-(__int64)(v152 & 0xFFFFFFFFFFFFFFFELL) != v154);
      v153 = -v154;
      if ((v152 & 1) == 0) {
        goto LABEL_138;
      }
    }
    v162 = 8 * v153;
    v163 = (unsigned __int64)&v384_.v404[4 * v153];
    v164 = &v354[v162];
    *v164 = *(_DWORD*)v163;
    v164[1] = *(_DWORD*)(v163 + 4);
    v165 = *(_OWORD*)v164;
    *((_QWORD*)&v165 + 1) = *(unsigned int*)(v163 | 8);
    *(_OWORD*)v164 = v165;
    v164[4] = *(_DWORD*)(v163 + 16);
    v164[5] = *(_DWORD*)(v163 + 20);
    v166 = *((_OWORD*)v164 + 1);
    *((_QWORD*)&v166 + 1) = *(unsigned int*)(v163 + 24);
    *((_OWORD*)v164 + 1) = v166;
  }
LABEL_138:
  v167 = (float*)&v377_.v377;
  v168 = (float*)&v383;
  *(_QWORD*)&v377_.v377 =
      __PAIR64__(HIDWORD(v384_.v405[0]), HIDWORD(v384_.v404[0]));
  *((_QWORD*)&v377_.v377 + 1) =
      __PAIR64__(DWORD1(v384_.v408), DWORD1(v384_.v406));
  v377_.v378 = DWORD1(v384_.v410);
  v377_.v379 = DWORD1(v384_.v412);
  v377_.v380 = DWORD1(v384_.v414);
  v377_.v381 = DWORD1(v384_.v416);
  v382[0] = DWORD1(v384_.v418);
  v382[1] = DWORD1(v384_.v420);
  v382[2] = DWORD1(v384_.v422);
  v382[3] = DWORD1(v384_.v424);
  v382[4] = DWORD1(v384_.v426);
  v382[5] = DWORD1(v384_.v428);
  v382[6] = DWORD1(v384_.v430);
  v382[7] = DWORD1(v384_.v432);
  v382[8] = HIDWORD(v384_.v434[0]);
  do {
    v169 = v168 - v167;
    if ((unsigned __int64)v169 < 2) {
      break;
    }
    if (v169 == 3) {
      v206 = v167[1];
      v207 = *(v168 - 1);
      if (v206 < v207) {
        v208 = *((_DWORD*)v167 + 1);
      }
      else {
        v208 = *((_DWORD*)v168 - 1);
      }
      if (v206 < v207) {
        v206 = *(v168 - 1);
      }
      *(v168 - 1) = v206;
      *((_DWORD*)v167 + 1) = v208;
      v209 = *(v168 - 1);
      if (v209 < *v167) {
        v210 = *(v168 - 1);
      }
      else {
        v210 = *v167;
      }
      if (v209 < *v167) {
        v209 = *v167;
      }
      *(v168 - 1) = v209;
      v212 = *v167;
      v211 = v167[1];
      if (v210 >= v211) {
        v212 = v167[1];
        v211 = v210;
      }
      *v167 = v212;
      v167[1] = v211;
      break;
    }
    if (v169 == 2) {
      v213 = *(v168 - 1);
      v214 = *v167;
      if (v213 < *v167) {
        *v167 = v213;
        *(v168 - 1) = v214;
      }
      break;
    }
    if (v169 <= 7) {
      while (v167 != v168 - 1) {
        v346 = v167++;
        if (v346 != v168 && v167 != v168) {
          v347 = *v346;
          v348 = v167;
          v349 = v346;
          v350 = v167;
          v351 = *v346;
          do {
            v352 = *v350++;
            v353 = v352;
            if (v352 < v351) {
              v351 = v353;
              v349 = v348;
            }
            v348 = v350;
          } while (v350 != v168);
          if (v349 != v346) {
            *v346 = *v349;
            *v349 = v347;
          }
        }
      }
      break;
    }
    v170 = v168 - 1;
    v171 = *(v168 - 1);
    v172 = &v167[(unsigned __int64)v169 >> 1];
    v173 = *v172;
    if (*v172 < v171) {
      v174 = *v172;
    }
    else {
      v174 = *(v168 - 1);
    }
    if (*v172 < v171) {
      v175 = *(v168 - 1);
    }
    else {
      v175 = *v172;
    }
    *v170 = v175;
    *v172 = v174;
    v176 = *v170;
    if (*v170 < *v167) {
      v177 = *v170;
    }
    else {
      v177 = *v167;
    }
    if (*v170 >= *v167) {
      v178 = 1;
    }
    else {
      v176 = *v167;
      v178 = 0;
    }
    *v170 = v176;
    v179 = *v172;
    v180 = v177 < *v172;
    if (v177 >= *v172) {
      v178 = 1;
    }
    else {
      v179 = *v167;
    }
    *v167 = v179;
    v181 = *v172;
    if (!v180) {
      v181 = v177;
    }
    *v172 = v181;
    if (v173 >= v171) {
      v178 = 1;
    }
    v182 = *v167;
    if (*v167 >= v181) {
      v183 = v168 - 1;
      while (--v183 != v167) {
        if (*v183 < v181) {
          *v167 = *v183;
          *v183 = v182;
          if (v178 != 0) {
            v178 = 2;
          }
          else {
            v178 = 1;
          }
          goto LABEL_170;
        }
      }
      v195 = v167 + 1;
      if (v182 >= *v170) {
        if (v195 == v170) {
          break;
        }
        while (1) {
          v196 = *v195;
          if (v182 < *v195) {
            break;
          }
          if (++v195 == v170) {
            goto LABEL_228;
          }
        }
        *v195++ = *v170;
        *v170 = v196;
      }
      if (v195 == v170) {
        break;
      }
      while (1) {
        v200 = *v167;
        do {
          v201 = *v195++;
          v202 = v201;
        } while (v200 >= v201);
        v203 = v195 - 1;
        do {
          v204 = *--v170;
          v205 = v204;
        } while (v200 < v204);
        if (v203 >= v170) {
          break;
        }
        *v203 = v205;
        *v170 = v202;
      }
      v167 = v195 - 1;
      if (v382 < (_DWORD*)v203) {
        break;
      }
    }
    else {
      v183 = v168 - 1;
    LABEL_170:
      v184 = v167 + 1;
      if (v167 + 1 >= v183) {
        v189 = v167 + 1;
      }
      else {
        v185 = v167 + 1;
        while (1) {
          v186 = *v172;
          do {
            v187 = *v185++;
            v188 = v187;
          } while (v187 < v186);
          v189 = v185 - 1;
          do {
            v190 = *--v183;
            v191 = v190;
          } while (v190 >= v186);
          if (v189 >= v183) {
            break;
          }
          *v189 = v191;
          *v183 = v188;
          ++v178;
          if (v189 == v172) {
            v172 = v183;
          }
        }
      }
      if (v189 != v172) {
        v192 = *v189;
        if (*v172 < *v189) {
          ++v178;
          *v189 = *v172;
          *v172 = v192;
        }
      }
      if (v382 == (_DWORD*)v189) {
        break;
      }
      if (v178 == 0) {
        if (v382 >= (_DWORD*)v189) {
          v197 = v189 + 1;
          while (v197 != v168) {
            v199 = *(v197 - 1);
            v198 = *v197++;
            if (v198 < v199) {
              goto LABEL_186;
            }
          }
        }
        else {
          while (v184 != v189) {
            v194 = *(v184 - 1);
            v193 = *v184++;
            if (v193 < v194) {
              goto LABEL_186;
            }
          }
        }
        break;
      }
    LABEL_186:
      if (v382 < (_DWORD*)v189) {
        v168 = v189;
      }
      else {
        v167 = v189 + 1;
      }
    }
  } while (v382 != (_DWORD*)v168);
LABEL_228:
  v215 = *(float*)v382;
  if (v357 == 1) {
    v369 = 0x100000000LL;
    v370 = 0x300000002LL;
    *(_QWORD*)&v371 = 0x500000004LL;
    *((_QWORD*)&v371 + 1) = 0x700000006LL;
    v372 = 0x900000008LL;
    v373 = 0xB0000000ALL;
    v374 = 0xD0000000CLL;
    v375 = 0xF0000000ELL;
    v376 = 16;
    v368[0] = v384_.v434;
    v368[1] = v384_.v404;
    v384_.v384 = (__int64)v368;
    result = GameRoutine_11188c0((__int64)&v369, (int*)&v377_.v377,
                                 (__int64**)&v384_.v384, 8, 1);
    v384_.v386 = v371;
    LODWORD(v384_.v387) = v372;
    v384_.v384 = v369;
    v384_.v385 = v370;
    v216 = 9;
  }
  else {
    v384_.v384 = 0x100000000LL;
    v384_.v385 = 0x300000002LL;
    *(_QWORD*)&v384_.v386 = 0x500000004LL;
    *((_QWORD*)&v384_.v386 + 1) = 0x700000006LL;
    v384_.v387 = 0x900000008LL;
    v384_.v388 = 0xB0000000ALL;
    v384_.v389 = 0xD0000000CLL;
    v384_.v390 = 0xF0000000ELL;
    v216 = 17;
    v384_.v391 = 16;
  }
  v217 = v216 - 1LL;
  v218 = 0;
  if (v216 == 1) {
    v219 = 0x0.0p+0f;
    v220 = 0x0.0p+0f;
    v222 = 0x0.0p+0f;
  }
  else {
    v219 = 0x0.0p+0f;
    v220 = 0x0.0p+0f;
    v221 = &v384_.v385;
    v222 = 0x0.0p+0f;
    do {
      v230 = *((int*)v221 - 2);
      if ((_DWORD)v230 == 16) {
        v231 = 16;
        v232 = 0x0.0p+0f;
        v233 = 0x0.0p+0f;
      }
      else {
        v232 = v384_.v402[v230 - 1];
        v233 = v384_.v399[v230 - 1];
        v231 = *((int*)v221 - 2);
      }
      v234 = (float*)&v384_.v404[4 * v231] + 1;
      v235 = 0x0.0p+0f;
      if ((_DWORD)v230 == 16) {
        v236 = (float*)v384_.v434 + 1;
      }
      else {
        v236 = v234;
      }
      v237 = *((int*)v221 - 1);
      if ((_DWORD)v237 == 16) {
        v238 = 16;
        v239 = 0x0.0p+0f;
        v240 = 0x0.0p+0f;
      }
      else {
        v239 = v384_.v402[v237 - 1];
        v240 = v384_.v399[v237 - 1];
        v238 = *((int*)v221 - 1);
      }
      v241 = (float*)&v384_.v404[4 * v238] + 1;
      if ((_DWORD)v237 == 16) {
        v242 = (float*)v384_.v434 + 1;
      }
      else {
        v242 = v241;
      }
      v243 = *(int*)v221;
      if ((_DWORD)v243 == 16) {
        v244 = 16;
        v245 = 0x0.0p+0f;
      }
      else {
        v235 = v384_.v402[v243 - 1];
        v245 = v384_.v399[v243 - 1];
        v244 = *(int*)v221;
      }
      v246 = (_DWORD)v243 == 16;
      v247 = *((int*)v221 + 1);
      v248 = (float*)&v384_.v404[4 * v244] + 1;
      if (v246) {
        v248 = (float*)v384_.v434 + 1;
      }
      if ((_DWORD)v247 == 16) {
        v223 = 0x0.0p+0f;
        v225 = 16;
        v224 = 0x0.0p+0f;
      }
      else {
        v223 = v384_.v402[v247 - 1];
        v224 = v384_.v399[v247 - 1];
        v225 = *((int*)v221 + 1);
      }
      v226 = *v236;
      v227 = v222 + v232;
      v228 = (float*)&v384_.v404[4 * v225] + 1;
      v229 = v219 + v233;
      v221 += 2;
      v218 += 4;
      if ((_DWORD)v247 == 16) {
        v228 = (float*)v384_.v434 + 1;
      }
      v222 = (float)((float)(v227 + v239) + v235) + v223;
      v219 = (float)((float)(v229 + v240) + v245) + v224;
      v220 = (float)((float)((float)(v220 + v226) + *v242) + *v248) + *v228;
    } while (v217 != v218);
  }
  v249 = 0;
  v250 = (__int64**)((char*)&v384_.v384 + 4 * v218);
  do {
    v256 = *(int*)((char*)v250 + v249);
    if ((_DWORD)v256 == 16) {
      v251 = 0x0.0p+0f;
      v253 = 16;
      v252 = 0x0.0p+0f;
    }
    else {
      v251 = v384_.v402[v256 - 1];
      v252 = v384_.v399[v256 - 1];
      v253 = *(int*)((char*)v250 + v249);
    }
    v254 = (float*)&v384_.v404[4 * v253] + 1;
    v222 = v222 + v251;
    v219 = v219 + v252;
    v249 += 4;
    if ((_DWORD)v256 == 16) {
      v255 = (float*)v384_.v434 + 1;
    }
    else {
      v255 = v254;
    }
    v220 = v220 + *v255;
  } while (v249 != 4);
  v257 = (float)v216;
  v258 = 0x0.0p+0f;
  v259 = 0;
  v260 = 0x1.0000000000000p+0f / v257;
  v261 = v260 * v222;
  v262 = v260 * v220;
  v263 = v260 * v219;
  v264 = 0x0.0p+0f;
  if (v217 != 0) {
    v265 = 0x0.0p+0f;
    v266 = 0x0.0p+0f;
    v267 = (int*)&v384_.v384 + 1;
    v268 = 0x0.0p+0f;
    v269 = 0x0.0p+0f;
    do {
      v282 = *(v267 - 1);
      if ((_DWORD)v282 == 16) {
        v283 = 16;
        v284 = 0x0.0p+0f;
        v285 = 0x0.0p+0f;
      }
      else {
        v284 = v384_.v402[v282 - 1];
        v285 = v384_.v399[v282 - 1];
        v283 = *(v267 - 1);
      }
      v246 = (_DWORD)v282 == 16;
      v286 = *v267;
      v287 = (float*)&v384_.v404[4 * v283] + 1;
      if (v246) {
        v287 = (float*)v384_.v434 + 1;
      }
      if ((_DWORD)v286 == 16) {
        v270 = 0x0.0p+0f;
        v272 = 16;
        v271 = 0x0.0p+0f;
      }
      else {
        v270 = v384_.v402[v286 - 1];
        v271 = v384_.v399[v286 - 1];
        v272 = *v267;
      }
      v273 = v284 - v261;
      v274 = v285 - v263;
      v259 += 2;
      v267 += 2;
      if ((_DWORD)v286 == 16) {
        v275 = (float*)v384_.v434 + 1;
      }
      else {
        v275 = (float*)&v384_.v404[4 * v272] + 1;
      }
      v276 = v269 + (float)(v273 * v273);
      v277 = v266 + (float)(v273 * v274);
      v278 = *v287 - v262;
      v279 = v265 + (float)(v273 * v278);
      v280 = v270 - v261;
      v269 = v276 + (float)(v280 * v280);
      v268 = (float)(v268 + (float)(v274 * v274)) +
             (float)((float)(v271 - v263) * (float)(v271 - v263));
      v266 = v277 + (float)((float)(v270 - v261) * (float)(v271 - v263));
      v281 = *v275 - v262;
      v265 = v279 + (float)(v280 * v281);
      v258 = (float)(v258 + (float)(v274 * v278)) +
             (float)((float)(v271 - v263) * v281);
    } while (v217 != v259);
  }
  else {
    v265 = 0x0.0p+0f;
    v266 = 0x0.0p+0f;
    v268 = 0x0.0p+0f;
    v269 = 0x0.0p+0f;
  }
  v288 = *((int*)&v384_.v384 + v259);
  if ((_DWORD)v288 == 16) {
    v289 = 16;
    v290 = 0x0.0p+0f;
  }
  else {
    v264 = v384_.v402[v288 - 1];
    v290 = v384_.v399[v288 - 1];
    v289 = *((int*)&v384_.v384 + v259);
  }
  v291 = v264 - v261;
  v292 = v290 - v263;
  v293 = (float*)&v384_.v404[4 * v289] + 1;
  if ((_DWORD)v288 == 16) {
    v294 = (float*)v384_.v434 + 1;
  }
  else {
    v294 = v293;
  }
  v295 = v266 + (float)(v291 * v292);
  v296 = v269 + (float)(v291 * v291);
  v297 = v268 + (float)(v292 * v292);
  v298 = (float)(v296 * v297) - (float)(PSEUDO_UNFUSED(v295 * v295));
  v299 = 0x0.0p+0f;
  v300 = 0x0.0p+0f;
  if (fabsf(v298) > 0x1.0c6f7a0000000p-20f) {
    v301 = *v294 - v262;
    v302 = v258 + (float)(v292 * v301);
    v303 = v265 + (float)(v291 * v301);
    v299 =
        (float)((float)(v297 * v303) - (float)(PSEUDO_UNFUSED(v302 * v295))) /
        v298;
    v300 =
        (float)((float)(PSEUDO_UNFUSED(v296 * v302)) +
                (float)((float)-(float)(v266 + (float)(v291 * v292)) * v303)) /
        v298;
  }
  LANES128(v304).n128_f32[0] = -v299;
  v305 = (float)(v262 - (float)(v299 * v261)) - (float)(v300 * v263);
  LANES64(v306).n64_u32[1] = 0;
  v307 = (float)((float)(a8 * 0x1.99999a0000000p-5f) + 0x1.eb851e0000000p-4f) +
         v215;
  if (v307 >= v305) {
    v307 = v305;
  }
  if (v215 >= v307) {
    v307 = v215;
  }
  if (v357 == 1) {
    v308 = v307;
  }
  else {
    v308 = v215;
  }
  LANES128(v304).n128_u32[1] =
      COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  LANES128(v304).n128_u64[1] = COERCE_UNSIGNED_INT(-v300);
  LANES64(v306).n64_f32[0] = -v300;
  LANES64(v309).n64_u64[0] =
      LANES64_OF(
          vadd_f32(vmul_f32(v306, v306),
                   vmul_f32(COERCE_AS(float32x2_t, (LANES128(v304).n128_u32[0] |
                                                    0x3F80000000000000LL)),
                            COERCE_AS(float32x2_t, (LANES128(v304).n128_u32[0] |
                                                    0x3F80000000000000LL)))))
          .n64_u64[0];
  LANES128(v310).n128_u64[0] = LANES64_OF(vpadd_f32(v309, v309)).n64_u64[0];
  LANES128(v310).n128_u64[1] = LANES128(v310).n128_u64[0];
  v311 = vrsqrteq_f32(v310);
  v312 = vmulq_f32(v311, vrsqrtsq_f32(v311, vmulq_f32(v310, v311)));
  v313 = vbicq_s8(
      vmulq_f32(v304,
                vmulq_f32(v312, vrsqrtsq_f32(v312, vmulq_f32(v310, v312)))),
      vceqzq_f32(v310));
  if (v355 != nullptr) {
    v314 = *((float*)v384_.v404 + 1) -
           (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v398)) +
                                  (float)(v299 * v384_.v401)));
    v315 =
        *((float*)v384_.v405 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v399[0])) +
                               (float)(v299 * v384_.v402[0])));
    v316 = (float)((float)(v314 * v314) + 0x0.0p+0f) + (float)(v315 * v315);
    v317 =
        *((float*)&v384_.v406 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v399[1])) +
                               (float)(v299 * v384_.v402[1])));
    v318 = v316 + (float)(v317 * v317);
    v319 =
        *((float*)&v384_.v408 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v399[2])) +
                               (float)(v299 * v384_.v402[2])));
    v320 = v318 + (float)(v319 * v319);
    v321 =
        *((float*)&v384_.v410 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v399[3])) +
                               (float)(v299 * v384_.v402[3])));
    v322 = v320 + (float)(v321 * v321);
    v323 =
        *((float*)&v384_.v412 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v399[4])) +
                               (float)(v299 * v384_.v402[4])));
    v324 = v322 + (float)(v323 * v323);
    v325 =
        *((float*)&v384_.v414 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v399[5])) +
                               (float)(v299 * v384_.v402[5])));
    v326 = v324 + (float)(v325 * v325);
    v327 =
        *((float*)&v384_.v416 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v399[6])) +
                               (float)(v299 * v384_.v402[6])));
    v328 = v326 + (float)(v327 * v327);
    v329 =
        *((float*)&v384_.v418 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v400[0])) +
                               (float)(v299 * v384_.v403[0])));
    v330 = v328 + (float)(v329 * v329);
    v331 =
        *((float*)&v384_.v420 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v400[1])) +
                               (float)(v299 * v384_.v403[1])));
    v332 = v330 + (float)(v331 * v331);
    v333 =
        *((float*)&v384_.v422 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v400[2])) +
                               (float)(v299 * v384_.v403[2])));
    v334 = v332 + (float)(v333 * v333);
    v335 =
        *((float*)&v384_.v424 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v400[3])) +
                               (float)(v299 * v384_.v403[3])));
    v336 = v334 + (float)(v335 * v335);
    v337 =
        *((float*)&v384_.v426 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v400[4])) +
                               (float)(v299 * v384_.v403[4])));
    v338 = v336 + (float)(v337 * v337);
    v339 =
        *((float*)&v384_.v428 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v400[5])) +
                               (float)(v299 * v384_.v403[5])));
    v340 = v338 + (float)(v339 * v339);
    v341 = (float)(PSEUDO_UNFUSED(v300 * v384_.v400[6])) +
           (float)(v299 * v384_.v403[6]);
    v342 =
        *((float*)&v384_.v432 + 1) -
        (float)(v305 + (float)((float)(PSEUDO_UNFUSED(v300 * v384_.v400[7])) +
                               (float)(v299 * v384_.v403[7])));
    *v355 = sqrtf(
        (float)((float)((float)(v340 +
                                (float)((float)(*((float*)&v384_.v430 + 1) -
                                                (float)(v305 + v341)) *
                                        (float)(*((float*)&v384_.v430 + 1) -
                                                (float)(v305 + v341)))) +
                        (float)(v342 * v342)) +
                (float)((float)(*((float*)v384_.v434 + 1) - v305) *
                        (float)(*((float*)v384_.v434 + 1) - v305))) /
        0x1.1000000000000p+4f);
  }
  v356[1] = 0;
  *((_OWORD*)v356 + 1) = GameData_1a83610;
  v343 = *v366;
  v356[2] = LANES128(v313).n128_u64[0];
  *(_DWORD*)v356 = v343;
  *((float*)v356 + 1) = v308;
  v344 = *(_OWORD*)v356;
  v345 = *((_OWORD*)v356 + 1);
  *((_QWORD*)&v344 + 1) = DWORD2(v343);
  *((_QWORD*)&v345 + 1) = LANES128(v313).n128_u32[2];
  *(_OWORD*)v356 = v344;
  *((_OWORD*)v356 + 1) = v345;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
