#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterModel_cf5c00(__int64);
__int64 game_edede0(__int64, float, float, float);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21ec7c0;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float powf(float, float);
void ProcHubSeqExit_Unknown3(__int64 a1);

void ProcHubSeqExit_Unknown3(__int64 a1)
{
  float v1;
  float v2;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  long double v12;
  float32x4_t v14;
  __int64* v15;
  __int64* v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  float32x4_t v23;
  int8x16_t v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float32x4_t v34;
  float32x4_t v35;

  if (*(_BYTE*)(a1 + 220) != 1) {
    return;
  }
  v1 = *(float*)(a1 + 216) +
       (float)((float)(*(float*)(*(_QWORD*)
                                     game_script_hub_g_frame_counter_ptr[0] +
                                 160LL) *
                       0x1.0aef000000000p+4f) /
               0x1.f400000000000p+9f);
  *(float*)(a1 + 216) = v1;
  v2 = fminf(fmaxf(v1 * 0x1.0000000000000p-1f, 0x0.0p+0f),
             0x1.0000000000000p+0f);
  v3 = *(_QWORD*)GameData_212dc38[0];
  v4 = *(_QWORD*)(*(_QWORD*)GameData_212dc38[0] + 912LL);
  v5 = (float)(fminf(fmaxf(v2 * v2, 0x0.0p+0f), 0x1.0000000000000p+0f) *
               -0x1.4000000000000p+3f) +
       0x0.0p+0f;
  v6 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 1016LL);
  *(float*)(v3 + 1012) = v5;
  *(float*)(v3 + 1008) = v6 + (float)(v5 + 0x0.0p+0f);
  v7 = powf(v2, 0x1.0000000000000p-1f);
  game_edede0(v4, 0x1.99999a0000000p-5f, v7 * 0x1.99999a0000000p-4f,
              0x1.0000000000000p+0f);
  v8 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v8 != 0) {
    v9 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v10 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    v11 = std___1___shared_weak_count_lock(v10);
    *(__n128*)&v12 = std___1___shared_weak_count___release_weak(v8);
    if (v11 != 0 && v9 != 0) {
      v14 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v9 + 24) + 16LL) + 560LL);
      LANES128(v14).n128_u32[3] = 0;
      goto LABEL_11;
    }
    v14 = (__typeof__(v14)){0};
    if (v11 != 0) {
    LABEL_11:
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v34 = v14;
        (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(v11, v12);
        std___1___shared_weak_count___release_weak(v11);
        v14 = v34;
      }
    }
  }
  else {
    v14 = (__typeof__(v14)){0};
  }
  v15 = *(__int64**)(GameData_21ec7c0 + 24);
  v16 = *(__int64**)(GameData_21ec7c0 + 32);
  if (v15 != v16) {
    v35 = v14;
    v17 = (float)(fminf(fmaxf(v2, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                  0x1.7c00000000000p+7f) +
          0x1.4000000000000p+3f;
    v18 = v17 * v17;
    do {
      v20 = *v15;
      v21 = *(_QWORD*)(*v15 + 56);
      if (*(_DWORD*)(*v15 + 1112) == 1 && v21 != 0) {
        v23 = vsubq_f32(
            *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v20 + 24) + 16LL) + 560LL),
            v14);
        v24 = vmulq_f32(v23, v23);
        LANES128(v24).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
                .n64_u64[0];
        v25 =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]))))
                .n64_f32[0];
        if (v25 < v18) {
          *(_BYTE*)(v21 + 57) = 1;
          v20 = *v15;
        }
        *(_BYTE*)(v20 + 1080) = 1;
        v26 = (float)(v25 + -0x1.99999a0000000p-5f) / 0x1.cccccc0000000p-2f;
        if (v26 <= 0x1.0000000000000p+0f) {
          v27 = v26;
        }
        else {
          v27 = 0x1.0000000000000p+0f;
        }
        v28 = (float)(fminf(fmaxf(v27, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                      0x1.99999a0000000p-1f) +
              0x1.99999a0000000p-3f;
        if (v26 >= 0x0.0p+0f) {
          v29 = v28;
        }
        else {
          v29 = 0x1.99999a0000000p-3f;
        }
        v30 = *(float*)(v20 + 1084);
        *(float*)(v20 + 1076) = v29;
        if (vabds_f32(v30, v29) > 0x1.0000000000000p-23f) {
          *(float*)(v20 + 1084) = v29;
          v31 = *(_QWORD*)(*(_QWORD*)(v20 + 24) + 8LL);
          v32 = *(_QWORD*)(v31 + 328);
          v33 = *(_QWORD*)(v32 + 360);
          *(_DWORD*)(v32 + 256) = 0;
          *(float*)(v32 + 240) = v29;
          *(float*)(v32 + 244) = v29;
          *(_BYTE*)(v32 + 260) = 1;
          *(_BYTE*)(v32 + 369) = 1;
          CharacterModel_cf5c00(v33);
          CharacterModel_cf5c00(v31);
          v14 = v35;
        }
        v19 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v15 + 24) + 8LL) + 328LL);
        *(_DWORD*)(v19 + 372) = 0;
        *(_BYTE*)(v19 + 369) = 1;
      }
      v15 += 2;
    } while (v15 != v16);
  }
}

#pragma GCC visibility pop
