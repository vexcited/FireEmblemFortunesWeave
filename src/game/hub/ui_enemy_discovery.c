#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_UIBase_vtable[])();
extern __int64 (*game_hub_UIEnemyDiscovery_vtable[])();
extern __int64 GameData_220b6e0;
__int64 UIEnemyDiscovery_Destructor(_QWORD* a1);
__int64 GameRoutine_14a3920(__int64 result);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_d2d4e0(__int64);
extern __int128 GameData_1a82970;
extern __int128 GameData_1a82fa0;
extern __int64 GameData_212dc38[7];
void UIBase_da1870(float*);
__n128 UIEnemyDiscovery_Unknown2(__int64 a1);

__int64 UIEnemyDiscovery_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  char* v10;

  v1 = a1[9];
  *a1 = game_hub_UIEnemyDiscovery_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  *a1 = game_hub_UIBase_vtable;
  v4 = GameData_220b6e0;
  v6 = *(char**)(GameData_220b6e0 + 136);
  v5 = *(char**)(GameData_220b6e0 + 144);
  if (v6 != v5) {
    v7 = v5 - v6 - 8;
    if ((~(_BYTE)v7 & 0x18) != 0) {
      v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
      while (*(_QWORD**)v6 != a1) {
        v6 += 8;
        if (--v8 == 0) {
          goto LABEL_11;
        }
      }
    }
    else {
    LABEL_11:
      if (v7 < 0x18) {
        return result;
      }
      for (v6 += 16;; v6 += 32) {
        if (*((_QWORD**)v6 - 2) == a1) {
          v6 -= 16;
          goto LABEL_22;
        }
        if (*((_QWORD**)v6 - 1) == a1) {
          v6 -= 8;
          goto LABEL_22;
        }
        if (*(_QWORD**)v6 == a1) {
          goto LABEL_22;
        }
        if (*((_QWORD**)v6 + 1) == a1) {
          break;
        }
        v9 = v6 + 16;
        if (v9 == v5) {
          return result;
        }
      }
      v6 += 8;
    }
  }

LABEL_22:
  if (v6 != v5) {
    v10 = v6 + 8;
    if (v6 + 8 != v5) {
      do {
        if (*(_QWORD**)v10 != a1) {
          *(_QWORD*)v6 = *(_QWORD*)v10;
          v6 += 8;
        }
        v10 += 8;
      } while (v10 != v5);
      v5 = *(char**)(v4 + 144);
    }
  }
  if (v6 != v5) {
    *(_QWORD*)(v4 + 144) = v6;
  }
  return result;
}

__n128 UIEnemyDiscovery_Unknown2(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  bool v9;
  float32x4_t v10;
  float v11;
  float32x4_t v12;
  unsigned __int64 v13;
  __int64 v14;
  float32x4_t v15;
  int8x16_t v16;
  float v17;
  float v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  float32x4_t v22;
  float32x4_t* v23;
  __int64* v24;
  __int64 v25;
  unsigned int v26;
  unsigned int v27;
  __n128* v28;
  float32x4_t v29;
  int32x2_t v30;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  UIBase_da1870((float*)a1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock(v3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v4 != 0) {
      v5 = *(_QWORD*)(a1 + 48);
      v6 = v4;
      if (v5 != 0) {
        v7 = *(_QWORD*)(v5 + 24);
        v8 = *(float*)(v7 + 548);
        v9 = GameRoutine_d2d4e0(
            *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 344LL) + 360LL)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        LANES128(v10).n128_u32[0] = 0;
        LANES128(v10).n128_u64[1] = 0;
        v11 = v8 * 0x1.3333340000000p-1f;
        if (!v9) {
          v11 = v8;
        }
        LANES128(v10).n128_f32[1] = v11;
        v29 = vaddq_f32(
            vaddq_f32(v10,
                      *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 16LL) +
                                      560LL)),
            COERCE_AS(float32x4_t, GameData_1a82970));
        *(long double*)&v12 =
            ((long double (*)(__int64)) *
             (_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212dc38[0] + 16LL) +
                       40LL))(*(_QWORD*)GameData_212dc38[0] + 16LL),
               result = COERCE_AS(__typeof__(result),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
        v14 = *(_QWORD*)(a1 + 64);
        v15 = vsubq_f32(v12, v29);
        v16 = vmulq_f32(v15, v15);
        LANES128(v16).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
                .n64_u64[0];
        v17 =
            (float)(LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]))))
                        .n64_f32[0] +
                    -0x1.4000000000000p+3f) /
            0x1.4000000000000p+5f;
        if (v17 <= 0x1.0000000000000p+0f) {
          v18 = v17;
        }
        else {
          v18 = 0x1.0000000000000p+0f;
        }
        v19 = *(_QWORD*)v14;
        *(float*)&v13 =
            (float)(fminf(fmaxf(v18, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                    0x1.3333340000000p-1f) +
            0x1.99999a0000000p-2f;
        if (v17 < 0x0.0p+0f) {
          *(float*)&v13 = 0x1.99999a0000000p-2f;
        }
        if (v19 != 0 && *(_DWORD*)(v19 + 16) == *(_DWORD*)(v14 + 8)) {
          v20 = *(_DWORD*)(v19 + 36);
          if (v20 != 0) {
            v21 = 0;
            v22 = vaddq_f32(
                v29,
                vaddq_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82fa0),
                                      0x1.0000000000000p+0f - *(float*)&v13),
                          COERCE_AS(float32x4_t, GameData_1a82fa0)));
            do {
              if ((int)v20 > (int)v21) {
                v23 = *(float32x4_t**)(v19 + 40 + 8LL * (int)v21);
                if (v23 != nullptr) {
                  v23[1] = v22;
                  LANES128(v23[8]).n128_u8[0] = 1;
                  v20 = *(_DWORD*)(v19 + 36);
                }
              }
              ++v21;
            } while (v21 < v20);
          }
        }
        LANES64(v30).n64_u64[0] = v13;
        GameRoutine_14a3920(v14),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v24 = *(__int64**)(a1 + 64);
        v25 = *v24;
        if (*v24 != 0 && *(_DWORD*)(v25 + 16) == *((_DWORD*)v24 + 2)) {
          v26 = *(_DWORD*)(v25 + 36);
          if (v26 != 0) {
            v27 = 0;
            result = vdupq_lane_s32(v30, 0);
            LANES128(result).n128_u32[3] = 0;
            do {
              if ((int)v26 > (int)v27) {
                v28 = *(__n128**)(v25 + 40 + 8LL * (int)v27);
                if (v28 != nullptr) {
                  v28[2] = result;
                  LANES128(v28[8]).n128_u8[0] = 1;
                  v26 = *(_DWORD*)(v25 + 36);
                }
              }
              ++v27;
            } while (v27 < v26);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        return std___1___shared_weak_count___release_weak_alt1(v6);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
