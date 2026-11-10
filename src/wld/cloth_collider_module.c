#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 Model_a66980(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_21f4d48;
extern __int64 (*GameData_1fbfbf8[])();
extern __int64 (*GameData_1fbfc70[])();
extern int GameData_21f4d44;
struct PseudoSret wld_Crc32(_QWORD, _QWORD, _QWORD);
__int64 wld_ClothColliderModule_ClothColliderModule(__int64 a1, __int64 a2);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21a61b0;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6160;
extern __int128 GameData_21a6180;
extern __int128 GameData_21a61a0;
_QWORD* wld_ClothColliderModule_ClothColliderModule_lambda0_Invoke(__int64 a1);
__int64 Model_a66980_alt1(__int64, __int64, int) __asm__("Model_a66980");
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64 wld_ClothColliderModule_ClothColliderModule(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)a1 = GameData_1fbfbf8;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_DWORD*)(a1 + 168) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                            memory_order_acquire) &
       1) == 0) {
    v10 = a2;
    v9 = __cxa_guard_acquire_alt1((__int64)&GameData_21f4d48);
    a2 = v10;
    if (v9 != 0) {
      GameData_21f4d44 = wld_Crc32_alt1(0, "ModelModule", 0xBu);
      __cxa_guard_release_alt1((__int64)&GameData_21f4d48);
      a2 = v10;
    }
  }
  v3 = *(_QWORD*)(a2 + 512);
  v4 = v3;
  do {
    v5 = *(_DWORD*)(v4 - 16);
    v4 -= 16;
    v3 -= 16;
  } while (v5 != GameData_21f4d44);
  v6 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 24LL);
  v11_.v12 = v11_.v11;
  v11_.v11[0] = GameData_1fbfc70;
  v11_.v11[1] = a1;
  *(_DWORD*)(a1 + 168) = Model_a66980_alt1(v6, (__int64)v11_.v11, 1);
  result = (__int64)v11_.v12;
  if (v11_.v12 == v11_.v11) {
    v8 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v11_.v12 + v8))((__int64)v11_.v12);
}

_QWORD* wld_ClothColliderModule_ClothColliderModule_lambda0_Invoke(__int64 a1)
{
  float32x4_t v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t* v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float* v14;
  float32x4_t v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  float32x4_t v20;
  __int128 v21;
  int8x16_t v22;
  _DWORD* v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  _QWORD* result;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  _QWORD* v57;
  _QWORD* v58;
  _QWORD* v59;
  _QWORD* v60;
  _QWORD* v61;
  _QWORD* v62;
  _QWORD* v63;

  result = (_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
  if (*result != result[1]) {
    v1 = (__typeof__(v1)){0};
    v2 = 0;
    while (1) {
      v3 = &result[v2];
      v4 = result[v2];
      if (v4 != result[v2 + 1]) {
        break;
      }
    LABEL_3:
      v2 += 6;
      if (v2 == 18) {
        return result;
      }
    }
    v5 = 96;
    v6 = 0;
    v7 = 0;
    while (1) {
      v26 = *(float32x4_t*)(*(_QWORD*)(v4 + v5 - 96) + 48LL);
      v27 = *(_DWORD*)(v4 + v5 - 80);
      if (v27 > 2) {
        break;
      }
      if (v27 == 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                                  memory_order_acquire) &
             1) == 0) {
          v58 = result;
          v51 = v26;
          v31 = __cxa_guard_acquire(&GameData_21a6170);
          v26 = v51;
          v1 = (__typeof__(v1)){0};
          v32 = v31;
          result = v58;
          if (v32 != 0) {
            v33 = *((_QWORD*)GameData_212c550 + 1);
            *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
            *((_QWORD*)&GameData_21a6160 + 1) = v33;
            __cxa_guard_release(&GameData_21a6170);
            v26 = v51;
            v1 = (__typeof__(v1)){0};
            result = v58;
          }
        }
        v9 = COERCE_AS(float32x4_t, GameData_21a6160);
        goto LABEL_9;
      }
      if (v27 == 1) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                                  memory_order_acquire) &
             1) == 0) {
          v62 = result;
          v55 = v26;
          v43 = __cxa_guard_acquire(&GameData_21a6170);
          v26 = v55;
          v1 = (__typeof__(v1)){0};
          v44 = v43;
          result = v62;
          if (v44 != 0) {
            v45 = *((_QWORD*)GameData_212c550 + 1);
            *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
            *((_QWORD*)&GameData_21a6160 + 1) = v45;
            __cxa_guard_release(&GameData_21a6170);
            v26 = v55;
            v1 = (__typeof__(v1)){0};
            result = v62;
          }
        }
        v8 = COERCE_AS(float32x4_t, GameData_21a6160);
      LABEL_8:
        v9 = vsubq_f32(v1, v8);
        goto LABEL_9;
      }
      if (v27 != 2) {
        goto LABEL_23;
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v60 = result;
        v53 = v26;
        v37 = __cxa_guard_acquire(&GameData_21a6190);
        v26 = v53;
        v1 = (__typeof__(v1)){0};
        v38 = v37;
        result = v60;
        if (v38 != 0) {
          v39 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v39;
          __cxa_guard_release(&GameData_21a6190);
          v26 = v53;
          v1 = (__typeof__(v1)){0};
          result = v60;
        }
      }
      v9 = COERCE_AS(float32x4_t, GameData_21a6180);
    LABEL_9:
      v10 = *(float32x4_t**)(v4 + v5 - 96);
      ++v7;
      v11 = *v10;
      v12 = v10[1];
      v13 = v10[2];
      v14 = (float*)(v4 + v5);
      v5 += 112;
      v15 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v11, LANES128(v9).n128_f32[0]), v12,
                         COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]), 1),
          v13, v9, 2);
      v16 = *((_OWORD*)v14 - 2);
      v17 = *((_OWORD*)v14 - 1);
      *((_QWORD*)v14 - 4) = LANES128(v26).n128_u64[0];
      *((_QWORD*)v14 - 8) = v16;
      *((_QWORD*)v14 - 6) = v17;
      v18 = *((_OWORD*)v14 - 4);
      v19 = *((_OWORD*)v14 - 3);
      *((_QWORD*)&v18 + 1) = DWORD2(v16);
      *((_QWORD*)&v19 + 1) = DWORD2(v17);
      v20 =
          vaddq_f32(v26, vmulq_n_f32(v15, COERCE_FLOAT(*(_OWORD*)(v14 - 21))));
      *((_OWORD*)v14 - 4) = v18;
      *((_OWORD*)v14 - 3) = v19;
      *((_QWORD*)v14 - 2) = LANES128(v20).n128_u64[0];
      v21 = *((_OWORD*)v14 - 1);
      *((_QWORD*)&v21 + 1) = LANES128(v20).n128_u32[2];
      v22 = vmulq_f32(v15, v15);
      *(_QWORD*)&v19 = *((_QWORD*)v14 - 4);
      *((_QWORD*)&v19 + 1) = LANES128(v26).n128_u32[2];
      LANES128(v22).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
              .n64_u64[0];
      LANES128(v15).n128_f32[0] = *(v14 - 22);
      *((_OWORD*)v14 - 2) = v19;
      *((_OWORD*)v14 - 1) = v21;
      *v14 = LANES128(v15).n128_f32[0] *
             LANES64_OF(vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]))))
                 .n64_f32[0];
      v23 = (_DWORD*)(v3[3] + v6);
      v6 += 32;
      *v23 = v19;
      v23[1] = *((_DWORD*)v14 - 7);
      v23[2] = *((_DWORD*)v14 - 6);
      v23[3] = *(_DWORD*)v14;
      v23[4] = *((_DWORD*)v14 - 4);
      v23[5] = *((_DWORD*)v14 - 3);
      v23[6] = *((_DWORD*)v14 - 2);
      v24 = vsubq_f32(*(float32x4_t*)(v14 - 8), *(float32x4_t*)(v14 - 4));
      v25 = vmulq_f32(v24, v24);
      LANES128(v25).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
              .n64_u64[0];
      v23[7] = LANES64_OF(
                   vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                   .n64_u32[0];
      v4 = *v3;
      if (v7 >= 0x6DB6DB6DB6DB6DB7LL * ((v3[1] - *v3) >> 4)) {
        goto LABEL_3;
      }
    }
    switch (v27) {
    case 3:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v57 = result;
        v50 = v26;
        v28 = __cxa_guard_acquire(&GameData_21a6190);
        v26 = v50;
        v1 = (__typeof__(v1)){0};
        v29 = v28;
        result = v57;
        if (v29 != 0) {
          v30 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v30;
          __cxa_guard_release(&GameData_21a6190);
          v26 = v50;
          v1 = (__typeof__(v1)){0};
          result = v57;
        }
      }
      v8 = COERCE_AS(float32x4_t, GameData_21a6180);
      break;
    case 4:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                memory_order_acquire) &
           1) == 0) {
        v63 = result;
        v56 = v26;
        v46 = __cxa_guard_acquire(&GameData_21a61b0);
        v26 = v56;
        v1 = (__typeof__(v1)){0};
        v47 = v46;
        result = v63;
        if (v47 != 0) {
          v48 = *((_QWORD*)GameData_212c560 + 1);
          *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
          *((_QWORD*)&GameData_21a61a0 + 1) = v48;
          __cxa_guard_release(&GameData_21a61b0);
          v26 = v56;
          v1 = (__typeof__(v1)){0};
          result = v63;
        }
      }
      v9 = COERCE_AS(float32x4_t, GameData_21a61a0);
      goto LABEL_9;
    case 5:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                                memory_order_acquire) &
           1) == 0) {
        v61 = result;
        v54 = v26;
        v40 = __cxa_guard_acquire(&GameData_21a61b0);
        v26 = v54;
        v1 = (__typeof__(v1)){0};
        v41 = v40;
        result = v61;
        if (v41 != 0) {
          v42 = *((_QWORD*)GameData_212c560 + 1);
          *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
          *((_QWORD*)&GameData_21a61a0 + 1) = v42;
          __cxa_guard_release(&GameData_21a61b0);
          v26 = v54;
          v1 = (__typeof__(v1)){0};
          result = v61;
        }
      }
      v8 = COERCE_AS(float32x4_t, GameData_21a61a0);
      break;
    default:
    LABEL_23:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        v59 = result;
        v52 = v26;
        v34 = __cxa_guard_acquire(&GameData_21a6130);
        v26 = v52;
        v1 = (__typeof__(v1)){0};
        v35 = v34;
        result = v59;
        if (v35 != 0) {
          v36 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v36;
          __cxa_guard_release(&GameData_21a6130);
          v26 = v52;
          v1 = (__typeof__(v1)){0};
          result = v59;
        }
      }
      v9 = COERCE_AS(float32x4_t, GameData_21a6120);
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  return result;
}

#pragma GCC visibility pop
