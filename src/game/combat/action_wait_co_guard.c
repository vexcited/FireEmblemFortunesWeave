#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_10691b0(PSEUDO_X8, __int64 result);
__int64 CharacterAnimator_1079e10(__int64);
__n128 std___1___shared_weak_count___release_weak();
extern _QWORD GameData_1bb1dd8[3];
extern __int64 GameData_21ec7b0;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
float32x4_t ActionWaitCoGuard_Unknown7_alt1(
    __int64 a1, float32x4_t result) __asm__("ActionWaitCoGuard_Unknown7");
__attribute__((swiftcall)) void game_combat_10691b0(PSEUDO_X8, __int64 result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
float CharacterAnimator_1079580_alt1(__int64, int, float, float, float) __asm__(
    "CharacterAnimator_1079580");
float32x4_t ActionWaitCoGuard_Unknown7(__int64 a1);

float32x4_t ActionWaitCoGuard_Unknown7(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  bool v7;
  __int64 v8;
  bool v9;
  __int64 v11;
  __int64 v12;
  float32x4_t v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  float32x4_t result;
  __int64 v18;
  __int64 v19;
  float32x4_t* v20;
  bool v21;
  unsigned __int64 v22;
  bool v23;
  __int128 v24;
  float32x4_t v25;
  float32x4_t v26;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (GameData_21ec7b0 == 0 || (v1 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
      (*(_BYTE*)(v1 + 113) & 0x80) == 0) {
    v2 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL) - 1;
    v3 = v2 > 2 ? 2LL : GameData_1bb1dd8[v2];
    v4 = GameData_21ec7b0 + 24 * v3;
    v5 = *(_QWORD*)(v4 + 32);
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v6 = *(_QWORD**)(v4 + 40);
      v7 = *(_QWORD*)(v5 + 8) == -1 || v6 == nullptr;
      if (v7 || (v8 = v6[10]) == 0 ||
          (*(_QWORD*)(v8 + 8) != -1 ? (v9 = v6[11] == 0) : (v9 = true),
           v9 || *(_QWORD*)(v5 + 8) == -1)) {
        std___1___shared_weak_count___release_weak_alt1(v5),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        std___1___shared_weak_count___release_weak_alt1(v5),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v11 = v6[46];
        if ((CharacterAnimator_1079e10(v11) & 1) != 0) {
          CharacterAnimator_1079580_alt1(
              v11, -2109400973, -0x1.0000000000000p+0f, -0x1.0000000000000p+0f,
              0x1.0000000000000p+0f),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v12 = *(_QWORD*)(a1 + 8);
        game_combat_10691b0((void*)(&v26), v12),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v13 = *(float32x4_t*)(v12 + 112);
        v14 = *(_QWORD*)(a1 + 24);
        v15 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL) - 1;
        if (v15 > 2) {
          v16 = 2;
        }
        else {
          v16 = GameData_1bb1dd8[v15];
        }
        v18 = GameData_21ec7b0 + 24 * v16;
        v19 = *(_QWORD*)(v18 + 32);
        v25 = vsubq_f32(v26, v13);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                  memory_order_relaxed);
        v20 = *(float32x4_t**)(v18 + 40);
        v21 = *(_QWORD*)(v19 + 8) == -1 || v20 == nullptr;
        if (v21 || (v22 = LANES128(v20[5]).n128_u64[0]) == 0 ||
            (*(_QWORD*)(v22 + 8) != -1
                 ? (v23 = LANES128(v20[5]).n128_u64[1] == 0)
                 : (v23 = true),
             v23)) {
          v20 = nullptr;
        }
        std___1___shared_weak_count___release_weak_alt1(v19),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = vaddq_f32(v25, v20[7]);
        *(_QWORD*)(v14 + 32) = LANES128(result).n128_u64[0];
        v24 = *(_OWORD*)(v14 + 32);
        *((_QWORD*)&v24 + 1) = LANES128(result).n128_u32[2];
        *(_OWORD*)(v14 + 32) = v24;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
