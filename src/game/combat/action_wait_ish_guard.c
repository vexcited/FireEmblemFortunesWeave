#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_10691b0(PSEUDO_X8, __int64 result);
__int64 CharacterAnimator_1079e10(__int64);
__n128 std___1___shared_weak_count___release_weak();
extern _QWORD GameData_1bb1b18[3];
extern __int64 GameData_21ec7b0;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
__n128 ActionWaitIshGuard_Unknown7(__int64 a1, __n128 result);

__n128 ActionWaitIshGuard_Unknown7(__int64 a1, __n128 result)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int128 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float32x4_t* v10;
  unsigned __int64 v12;
  bool v13;
  __int64 v15;
  __int64 v16;
  long double v17;
  float32x4_t* v18;
  __int64 v19;
  __int128 v20;
  float32x4_t v21;

  if (GameData_21ec7b0 == 0 || (v2 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
      (*(_WORD*)(v2 + 113) & 0x180) == 0) {
    v3 = *(_QWORD*)(a1 + 8);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v3 + 88) + 8LL) + 289LL) == 1) {
      v4 = *(_QWORD*)(a1 + 24);
      GameRoutine_10691b0((void*)(&v21), *(_QWORD*)(a1 + 8));
      result = v21;
      *(_QWORD*)(v4 + 32) = LANES128(v21).n128_u64[0];
      v5 = *(_OWORD*)(v4 + 32);
      *((_QWORD*)&v5 + 1) = LANES128(result).n128_u32[2];
      *(_OWORD*)(v4 + 32) = v5;
    }
    else {
      v6 = *(_DWORD*)(v3 + 96) - 1;
      if (v6 > 2) {
        v7 = 2;
      }
      else {
        v7 = GameData_1bb1b18[v6];
      }
      v8 = GameData_21ec7b0 + 24 * v7;
      v9 = *(_QWORD*)(v8 + 32);
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
        v10 = *(float32x4_t**)(v8 + 40);
        if (*(_QWORD*)(v9 + 8) == -1 || v10 == nullptr) {
          return std___1___shared_weak_count___release_weak();
        }
        v12 = LANES128(v10[5]).n128_u64[0];
        if (v12 == 0) {
          return std___1___shared_weak_count___release_weak();
        }
        v13 = *(_QWORD*)(v12 + 8) == -1 || LANES128(v10[5]).n128_u64[1] == 0;
        if (v13 || *(_QWORD*)(v9 + 8) == -1) {
          return std___1___shared_weak_count___release_weak();
        }
        else {
          std___1___shared_weak_count___release_weak();
          v15 = *(_QWORD*)(a1 + 8);
          *(_DWORD*)(v15 + 40) = LANES128(v10[2]).n128_u32[2];
          *(_DWORD*)(v15 + 44) = LANES128(v10[2]).n128_u32[3];
          v16 = *(_QWORD*)(a1 + 8);
          *(_DWORD*)(v16 + 48) = LANES128(v10[3]).n128_u32[0];
          *(_DWORD*)(v16 + 52) = LANES128(v10[3]).n128_u32[1];
          if ((CharacterAnimator_1079e10(LANES128(v10[23]).n128_i64[0]) & 1) !=
              0) {
            LODWORD(v17) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
            CharacterAnimator_1079580(LANES128(v10[23]).n128_i64[0],
                                      -2109400973, v17, -0x1.0000000000000p+0f,
                                      0x1.0000000000000p+0f);
          }
          v18 = *(float32x4_t**)(a1 + 8);
          GameRoutine_10691b0((void*)(&v21), (__int64)v18);
          v19 = *(_QWORD*)(a1 + 24);
          result = vaddq_f32(vsubq_f32(v21, v18[7]), v10[7]);
          *(_QWORD*)(v19 + 32) = LANES128(result).n128_u64[0];
          v20 = *(_OWORD*)(v19 + 32);
          *((_QWORD*)&v20 + 1) = LANES128(result).n128_u32[2];
          *(_OWORD*)(v19 + 32) = v20;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
