#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0();
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21a61b0;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6160;
extern __int128 GameData_21a6180;
extern __int128 GameData_21a61a0;
extern __int64 GameData_2167700;
extern __int64 GameData_2167708;
extern __int64 GameData_2216258;
extern __int64 GameData_2216268;
extern __int64 GameData_2216270;
extern __int64 GameData_2216278;
extern char GameData_21676f8[6];
extern char GameData_2216260;
extern char GameData_2216280;
extern char GameData_2216281[7];
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
__int64 game_hub_d6b220(__int64 a1, float32x4_t* a2, double a3, double a4,
                        double a5);
__attribute__((swiftcall)) void
game_hub_d6d640(PSEUDO_X8 x8_, __int64 a1, double unused_float0, double a3);
__int64 game_hub_e24660();

__int64 game_hub_d6b220(__int64 a1, float32x4_t* a2, double a3, double a4,
                        double a5)
{
  float32x4_t v7;
  float v8;
  float32x4_t v9;
  int8x16_t v10;
  float v11;
  float v12;
  bool v13;
  float32x4_t v15;
  float v16;
  float v17;
  unsigned __int64 v18;
  double v19;
  double v20;
  double v21;
  unsigned int v22;
  unsigned int v23;
  float32x4_t v24;
  float32x4_t v25;
  unsigned __int64 v26;
  float32x4_t v27;
  int8x16_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  int8x16_t v33;
  float32x4_t v34;
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t* v41;
  double v42;
  double v43;
  unsigned int v44;
  unsigned int v45;
  float32x4_t v46;
  float32x4_t v47;
  unsigned __int64 v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  int8x16_t v55;
  float32x4_t v56;
  int8x16_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  double v63;
  double v64;
  unsigned int v65;
  float32x4_t v66;
  float32x4_t v67;
  unsigned __int64 v68;
  float32x4_t v69;
  int8x16_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  int8x16_t v75;
  int8x16_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  int8x16_t v83;
  float32x4_t v84;
  float v85;
  float v86;
  float v87;
  int8x16_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float v91;
  float32x2_t v92;
  float32x4_t v93;
  float v94;
  float32x4_t v95;
  int8x16_t v96;
  int v97;
  __int64 v98;
  int v99;
  __int64 v100;
  __int64 v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float v109;

  if (*(float*)(a1 + 268) == 0x0.0p+0f) {
    LANES128(v7).n128_u64[0] = *(_QWORD*)(a1 + 244);
    {
      __typeof__(a5) z_ = (__typeof__(a5)){0};
      LODWORD(z_) = *(_DWORD*)(a1 + 252);
      a5 = z_;
    }
    v8 = LANES128(v7).n128_f32[1];
    LANES128(v7).n128_f64[1] = a5;
    v9 = vsubq_f32(*a2, v7);
    LANES128(v9).n128_u32[1] = 0;
    v10 = vmulq_f32(v9, v9);
    LANES128(v10).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
            .n64_u64[0];
    v11 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
            .n64_f32[0];
    {
      __typeof__(v12) z_ = (__typeof__(v12)){0};
      LODWORD(z_) = HIDWORD(LANES128(*(a2)).n128_u64[0]);
      v12 = z_;
    }
    v13 = v11 > (float)((float)(*(float*)(a1 + 260) * 0x1.0000000000000p-1f) *
                        (float)(*(float*)(a1 + 260) * 0x1.0000000000000p-1f)) ||
          v12 < (float)(v8 + -0x1.0624de0000000p-10f);
    if (!v13 && v12 <= (float)((float)(v8 + *(float*)(a1 + 264)) +
                               0x1.0624de0000000p-10f)) {
      return 1;
    }
  }
  else {
    v15 = *(float32x4_t*)(a1 + 244);
    v16 = *(float*)(a1 + 256) * 0x1.1df46a0000000p-6f;
    v17 = *(float*)(a1 + 264) * 0x1.0000000000000p-1f;
    {
      __typeof__(v18) z_ = (__typeof__(v18)){0};
      LODWORD(z_) = 0;
      v18 = z_;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                              memory_order_acquire) &
         1) == 0) {
      v106 = v15;
      v109 = v17;
      v97 = __cxa_guard_acquire((__int64)&GameData_21a6170);
      v17 = v109;
      v15 = v106;
      {
        __typeof__(v18) z_ = (__typeof__(v18)){0};
        LODWORD(z_) = 0;
        v18 = z_;
      }
      if (v97 != 0) {
        v98 = *((_QWORD*)GameData_212c550 + 1);
        *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
        *((_QWORD*)&GameData_21a6160 + 1) = v98;
        __cxa_guard_release((__int64)&GameData_21a6170);
        v17 = v109;
        v15 = v106;
        {
          __typeof__(v18) z_ = (__typeof__(v18)){0};
          LODWORD(z_) = 0;
          v18 = z_;
        }
      }
    }
    LANES128(v15).n128_u32[3] = 0;
    *((float*)&v18 + 1) = v17;
    v102 = COERCE_AS(float32x4_t, v18);
    v104 = v15;
    v19 = v16 * 0x1.0000000000000p-1;
    v20 = cos(v19);
    v21 = sin(v19);
    *(float*)&v22 = v21 + PSEUDO_UNFUSED(v20 * 0x0.0p+0);
    *(float*)&v23 = v20 + PSEUDO_UNFUSED(v21 * 0x0.0p+0);
    LANES128(v24).n128_u64[0] = GameData_21a6160;
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(float*)&v26 = PSEUDO_UNFUSED(v21 * -0x0.0p+0) + v20 * 0x0.0p+0;
    LANES128(v27).n128_u64[0] = __PAIR64__(v22, v26);
    LANES128(v24).n128_u64[1] = LANES128(v25).n128_u64[0];
    LANES128(v27).n128_u64[1] = __PAIR64__(v23, v26);
    v28 = vmulq_f32(v27, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v29).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
    *(int8x8_t*)&LANES128(v29).n128_i8[8] =
        vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v31 =
        vmlaq_f32(vmulq_f32(v27, v28), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v24, v29));
    LANES128(v29).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v30).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v28).n128_u64[0]), 1);
    LANES128(v25).n128_u64[1] = LANES128(v29).n128_u64[0];
    LANES128(v29).n128_u64[1] = GameData_21a6160;
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v32).n128_i8[8] =
        vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v33 = vmlsq_f32(vmlaq_f32(v31, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v29, v30)),
                    v32, v25);
    LANES128(v32).n128_u64[0] = __PAIR64__(v22, v26);
    HIDWORD(v26) = v23;
    LANES128(v34).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v34).n128_i8[8] =
        vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v35).n128_u64[0] = LANES128(v32).n128_u64[0];
    LANES128(v25).n128_u64[0] = LANES128(v32).n128_u64[0];
    LANES128(v35).n128_u64[1] = v26;
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
    v37 = vmulq_f32(v36, v33);
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v25).n128_u64[1] = LANES128(v36).n128_u64[0];
    LANES128(v36).n128_u64[1] = LANES128(v35).n128_u64[0];
    LANES128(v35).n128_u64[1] = LANES128(v32).n128_u64[0];
    v38 = vmlaq_f32(v37, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v25, v34));
    LANES128(v34).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v34).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v33).n128_u64[0]), 1);
    v39 = vmlaq_f32(v38, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v35, v34));
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v35).n128_i8[8] =
        vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v40 = vmlsq_f32(v39, v35, v36);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      v108 = v40;
      v99 = __cxa_guard_acquire((__int64)&GameData_21a6190);
      v40 = v108;
      if (v99 != 0) {
        v100 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v100;
        __cxa_guard_release((__int64)&GameData_21a6190);
        v40 = v108;
      }
    }
    LANES128(v40).n128_u32[3] = 0;
    v41 = (float32x4_t*)(a1 + 260);
    v105 = vaddq_f32(v104, v102);
    v107 = v40;
    v42 = cos(v19);
    v43 = sin(v19);
    *(float*)&v44 = v42 + PSEUDO_UNFUSED(v43 * 0x0.0p+0);
    *(float*)&v45 = v43 + PSEUDO_UNFUSED(v42 * 0x0.0p+0);
    LANES128(v46).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v47).n128_u64[0] = GameData_21a6180;
    *(float*)&v48 = PSEUDO_UNFUSED(v43 * -0x0.0p+0) + v42 * 0x0.0p+0;
    LANES128(v47).n128_u64[1] = LANES128(v46).n128_u64[0];
    LANES128(v49).n128_u64[0] = __PAIR64__(v45, v48);
    LANES128(v49).n128_u64[1] = __PAIR64__(v44, v48);
    v50 = vmulq_f32(v49, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v49).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v51).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v49).n128_u64[1] = LANES128(v49).n128_u64[0];
    *(int8x8_t*)&LANES128(v51).n128_i8[8] =
        vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v52).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v53 =
        vmlaq_f32(vmulq_f32(v49, v50), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v47, v51));
    LANES128(v51).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v52).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v50).n128_u64[0]), 1);
    LANES128(v46).n128_u64[1] = LANES128(v51).n128_u64[0];
    LANES128(v51).n128_u64[1] = GameData_21a6180;
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v54).n128_i8[8] =
        vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v55 = vmlsq_f32(vmlaq_f32(v53, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v51, v52)),
                    v54, v46);
    LANES128(v54).n128_u64[0] = __PAIR64__(v45, v48);
    HIDWORD(v48) = v44;
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v56).n128_i8[8] =
        vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v57).n128_u64[0] = LANES128(v54).n128_u64[0];
    LANES128(v46).n128_u64[0] = LANES128(v54).n128_u64[0];
    LANES128(v57).n128_u64[1] = v48;
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v58).n128_u64[1] = LANES128(v58).n128_u64[0];
    v59 = vmulq_f32(v58, v55);
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v46).n128_u64[1] = LANES128(v58).n128_u64[0];
    LANES128(v58).n128_u64[1] = LANES128(v57).n128_u64[0];
    LANES128(v57).n128_u64[1] = LANES128(v54).n128_u64[0];
    v60 = vmlaq_f32(v59, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v46, v56));
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v56).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v55).n128_u64[0]), 1);
    v61 = vmlaq_f32(v60, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v57, v56));
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v62 = vmlsq_f32(v61, v57, v58);
    LANES128(v62).n128_u32[3] = 0;
    v103 = v62;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21a61b0) != 0) {
      v101 = *((_QWORD*)GameData_212c560 + 1);
      *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
      *((_QWORD*)&GameData_21a61a0 + 1) = v101;
      __cxa_guard_release((__int64)&GameData_21a61b0);
    }
    v63 = cos(v19);
    v64 = sin(v19);
    *(float*)&v65 = v63 + PSEUDO_UNFUSED(v64 * 0x0.0p+0);
    LANES128(v66).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v67).n128_u64[0] = GameData_21a61a0;
    *(float*)&v68 = PSEUDO_UNFUSED(v64 * -0x0.0p+0) + v63 * 0x0.0p+0;
    LANES128(v67).n128_u64[1] = LANES128(v66).n128_u64[0];
    *(float*)&v64 = v64 + PSEUDO_UNFUSED(v63 * 0x0.0p+0);
    LANES128(v69).n128_u64[0] = __PAIR64__(LODWORD(v64), v68);
    LANES128(v69).n128_u64[1] = __PAIR64__(v65, v68);
    v70 = vmulq_f32(v69, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v69).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v71).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v69).n128_u64[1] = LANES128(v69).n128_u64[0];
    *(int8x8_t*)&LANES128(v71).n128_i8[8] =
        vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v72).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v73 =
        vmlaq_f32(vmulq_f32(v69, v70), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v67, v71));
    LANES128(v71).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v72).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v70).n128_u64[0]), 1);
    LANES128(v66).n128_u64[1] = LANES128(v71).n128_u64[0];
    LANES128(v71).n128_u64[1] = GameData_21a61a0;
    LANES128(v74).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v74).n128_i8[8] =
        vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v75 = vmlsq_f32(vmlaq_f32(v73, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v71, v72)),
                    v74, v66);
    LANES128(v74).n128_u64[0] = __PAIR64__(LODWORD(v64), v68);
    HIDWORD(v68) = v65;
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v70).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v76).n128_u64[0] = __PAIR64__(LODWORD(v64), v68);
    LANES128(v71).n128_u64[0] = __PAIR64__(LODWORD(v64), v68);
    LANES128(v76).n128_u64[1] = v68;
    LANES128(v77).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v78).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v76).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v77).n128_u64[1] = LANES128(v77).n128_u64[0];
    LANES128(v71).n128_u64[1] = LANES128(v78).n128_u64[0];
    LANES128(v78).n128_u64[1] = LANES128(v76).n128_u64[0];
    LANES128(v76).n128_u64[1] = LANES128(v74).n128_u64[0];
    v79 =
        vmlaq_f32(vmulq_f32(v77, v75), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v71, v70));
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v70).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v75).n128_u64[0]), 1);
    v80 = vmlaq_f32(v79, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v76, v70));
    LANES128(v76).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v76).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v81 = vmlsq_f32(v80, v76, v78);
    LANES128(v81).n128_u32[3] = 0;
    v82 = vsubq_f32(*a2, v105);
    LANES128(v76).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v76).n128_u64[1] = 0x3F0000003F000000LL;
    v83 = vmulq_f32(v107, v82);
    v84 = vmulq_f32(*v41, v76);
    v85 = LANES128(v84).n128_f32[1];
    v86 = LANES128(v84).n128_f32[2];
    LANES128(v83).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v83, v83, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
            .n64_u64[0];
    v87 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
            .n64_f32[0];
    if (v87 < (float)-LANES128(v84).n128_f32[0]) {
      v87 = -LANES128(v84).n128_f32[0];
    }
    if (v87 <= LANES128(v84).n128_f32[0]) {
      LANES128(v84).n128_f32[0] = v87;
    }
    v88 = vmulq_f32(v103, v82);
    v89 = vmulq_f32(v82, v81);
    v90 = vaddq_f32(v105, vmulq_n_f32(v107, LANES128(v84).n128_f32[0]));
    LANES128(v88).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v88, v88, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
            .n64_u64[0];
    v91 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
            .n64_f32[0];
    if (v91 < (float)-v85) {
      v91 = -v85;
    }
    if (v91 <= v85) {
      v85 = v91;
    }
    LANES64(v92).n64_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v89, v89, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v89).n128_u64[0])))
            .n64_u64[0];
    v93 = vaddq_f32(vmulq_n_f32(v103, v85), v90);
    v94 = LANES64_OF(vpadd_f32(v92, v92)).n64_f32[0];
    if (v94 < (float)-v86) {
      v94 = -v86;
    }
    if (v94 > v86) {
      v94 = v86;
    }
    v95 = vsubq_f32(*a2, vaddq_f32(vmulq_n_f32(v81, v94), v93));
    v96 = vmulq_f32(v95, v95);
    LANES128(v96).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v96, v96, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0])))
            .n64_f32[0] <= 0x1.0624de0000000p-10f) {
      return 1;
    }
  }
  return 0;
}

__attribute__((swiftcall)) void game_hub_d6d640(PSEUDO_X8 x8_, __int64 a1,
                                                double unused_float0, double a3)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v3;
  double v6;
  double v7;
  double v8;
  unsigned int v9;
  float32x4_t v10;
  unsigned __int64 v11;
  unsigned int v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t result;
  __int64 v29;

  LANES128(v3).n128_u64[0] = *(_QWORD*)(a1 + 244);
  {
    __typeof__(a3) z_ = (__typeof__(a3)){0};
    LODWORD(z_) = *(_DWORD*)(a1 + 252);
    a3 = z_;
  }
  LANES128(v3).n128_f64[1] = a3;
  *a2 = v3;
  LANES128(*(a2)).n128_f32[1] =
      LANES128(v3).n128_f32[1] + 0x1.99999a0000000p-1f;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a61b0) != 0) {
    v29 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v29;
    __cxa_guard_release((__int64)&GameData_21a61b0);
  }
  v6 = (float)(*(float*)(a1 + 256) * 0x1.1df46a0000000p-6f) *
       0x1.0000000000000p-1;
  v7 = cos(v6);
  v8 = sin(v6);
  *(float*)&v9 = v7 + PSEUDO_UNFUSED(v8 * 0x0.0p+0);
  LANES128(v10).n128_u64[0] = GameData_21a61a0;
  *(float*)&v11 = PSEUDO_UNFUSED(v8 * -0x0.0p+0) + v7 * 0x0.0p+0;
  *(float*)&v12 = v8 + PSEUDO_UNFUSED(v7 * 0x0.0p+0);
  LANES128(v13).n128_u64[0] = __PAIR64__(v12, v11);
  LANES128(v13).n128_u64[1] = __PAIR64__(v9, v11);
  v14 = vmulq_f32(v13, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v10).n128_u64[1] = LANES128(v16).n128_u64[0];
  *(int32x2_t*)&LANES128(v17).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v14).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v18 = vmlaq_f32(vmulq_f32(v13, v14), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v10, v15));
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[1] = LANES128(v10).n128_u64[0];
  LANES128(v10).n128_u64[1] = GameData_21a61a0;
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v19).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v20 = vmlsq_f32(vmlaq_f32(v18, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v10, v17)),
                  v19, v16);
  LANES128(v19).n128_u64[0] = __PAIR64__(v12, v11);
  HIDWORD(v11) = v9;
  LANES128(v21).n128_u64[0] = __PAIR64__(v12, v11);
  LANES128(v16).n128_u64[0] = __PAIR64__(v12, v11);
  LANES128(v21).n128_u64[1] = v11;
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
  LANES128(v16).n128_u64[1] = LANES128(v23).n128_u64[0];
  *(int8x8_t*)&LANES128(v24).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v23).n128_u64[1] = LANES128(v21).n128_u64[0];
  LANES128(v21).n128_u64[1] = LANES128(v19).n128_u64[0];
  *(int32x2_t*)&LANES128(v25).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]), 1);
  v26 = vmlaq_f32(
      vmlaq_f32(vmulq_f32(v22, v20), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v16, v24)),
      COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v21, v25));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v27 = vmlsq_f32(v26, v21, v23);
  LANES128(v27).n128_u32[3] = 0;
  result = vaddq_f32(
      *a2, vmulq_n_f32(v27, *(float*)(a1 + 268) * 0x1.0000000000000p-1f));
  *a2 = result;
  {
    result;
    return;
  }
}

__int64 game_hub_e24660()
{
  __int64 result;

  GameRoutine_2b0();
  if ((GameData_21676f8[0] & 1) != 0) {
    fw_text_String_CopyTerminated(&GameData_2216268, GameData_2167708,
                                  GameData_2167700);
  }
  else {
    GameData_2216268 = *(_QWORD*)GameData_21676f8;
    GameData_2216270 = GameData_2167700;
    GameData_2216278 = GameData_2167708;
  }
  GameData_2216280 = 22;
  strcpy(GameData_2216281, "Hub_000_A60");
  result = GameRoutine_2b0();
  GameData_2216258 = (__int64)&GameData_2216268;
  GameData_2216260 = 1;
  return result;
}

#pragma GCC visibility pop
