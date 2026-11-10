#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_10691b0(PSEUDO_X8, __int64 result);
__int64 CharacterAnimator_1079e10(__int64);
__n128 std___1___shared_weak_count___release_weak();
extern _QWORD GameData_1bb1dd8[3];
extern __int64 GameData_21ec7b0;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
float32x4_t ActionWaitCoGuard_Unknown7(__int64 a1, float32x4_t result);

float32x4_t ActionWaitCoGuard_Unknown7(__int64 a1, float32x4_t result)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  bool v8;
  __int64 v9;
  bool v10;
  __int64 v12;
  long double v13;
  __int64 v14;
  float32x4_t v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float32x4_t* v21;
  bool v22;
  unsigned __int64 v23;
  bool v24;
  __int128 v25;
  float32x4_t v26;
  float32x4_t v27;

  if (GameData_21ec7b0 == 0 || (v2 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
      (*(_BYTE*)(v2 + 113) & 0x80) == 0) {
    v3 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL) - 1;
    v4 = v3 > 2 ? 2LL : GameData_1bb1dd8[v3];
    v5 = GameData_21ec7b0 + 24 * v4;
    v6 = *(_QWORD*)(v5 + 32);
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
      v7 = *(_QWORD**)(v5 + 40);
      v8 = *(_QWORD*)(v6 + 8) == -1 || v7 == nullptr;
      if (v8 || (v9 = v7[10]) == 0) {
        return std___1___shared_weak_count___release_weak();
      }
      v10 = *(_QWORD*)(v9 + 8) == -1 || v7[11] == 0;
      if (v10 || *(_QWORD*)(v6 + 8) == -1) {
        return std___1___shared_weak_count___release_weak();
      }
      else {
        std___1___shared_weak_count___release_weak();
        v12 = v7[46];
        if ((CharacterAnimator_1079e10(v12) & 1) != 0) {
          LODWORD(v13) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
          CharacterAnimator_1079580(v12, -2109400973, v13,
                                    -0x1.0000000000000p+0f,
                                    0x1.0000000000000p+0f);
        }
        v14 = *(_QWORD*)(a1 + 8);
        GameRoutine_10691b0((void*)(&v27), v14);
        v15 = *(float32x4_t*)(v14 + 112);
        v16 = *(_QWORD*)(a1 + 24);
        v17 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL) - 1;
        if (v17 > 2) {
          v18 = 2;
        }
        else {
          v18 = GameData_1bb1dd8[v17];
        }
        v19 = GameData_21ec7b0 + 24 * v18;
        v20 = *(_QWORD*)(v19 + 32);
        v26 = vsubq_f32(v27, v15);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                  memory_order_relaxed);
        v21 = *(float32x4_t**)(v19 + 40);
        v22 = *(_QWORD*)(v20 + 8) == -1 || v21 == nullptr;
        if (v22 || (v23 = LANES128(v21[5]).n128_u64[0]) == 0 ||
            (*(_QWORD*)(v23 + 8) != -1
                 ? (v24 = LANES128(v21[5]).n128_u64[1] == 0)
                 : (v24 = true),
             v24)) {
          v21 = nullptr;
        }
        std___1___shared_weak_count___release_weak();
        result = vaddq_f32(v26, v21[7]);
        *(_QWORD*)(v16 + 32) = LANES128(result).n128_u64[0];
        v25 = *(_OWORD*)(v16 + 32);
        *((_QWORD*)&v25 + 1) = LANES128(result).n128_u32[2];
        *(_OWORD*)(v16 + 32) = v25;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
