#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int128* Vector_650e70();
__n128 std___1___shared_weak_count___release_weak();
extern __int64 GameData_21ec7b0;
extern __int64 GameData_2235e30;
float GameRoutine_110d5c0(__int64, float32x4_t*);
float CustomModifier_Projectile_Unknown4(__int64 a1, long double a2);

float CustomModifier_Projectile_Unknown4(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  float32x4_t* v2;
  float32x4_t v3;
  float32x4_t v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64* v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  bool v17;
  __int64 v18;
  bool v19;
  __int64 v21;
  float32x4_t* v22;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  __int128 v34;
  __int128* v35;
  __int128 v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  float32x4_t v40;
  float32x4_t v41;
  unsigned __int64 v42;

  v2 = *(float32x4_t**)(a1 + 8);
  if (*(_DWORD*)(a1 + 16) == 2) {
    LANES128(v2[2]).n128_u32[0] = *(_DWORD*)(a1 + 48);
    LANES128(v2[2]).n128_u32[1] = *(_DWORD*)(a1 + 52);
    v3 = v2[2];
    LANES128(v3).n128_u64[1] = *(unsigned int*)(a1 + 56);
    v2[2] = v3;
    LANES128(v2[3]).n128_u32[0] = *(_DWORD*)(a1 + 64);
    LANES128(v2[3]).n128_u32[1] = *(_DWORD*)(a1 + 68);
    v4 = v2[3];
    LANES128(v4).n128_u64[1] = *(unsigned int*)(a1 + 72);
    v2[3] = v4;
    LANES128(v2[4]).n128_u32[0] = *(_DWORD*)(a1 + 80);
    LANES128(v2[4]).n128_u32[1] = *(_DWORD*)(a1 + 84);
    a2 = *(long double*)&v2[4];
    *((_QWORD*)&a2 + 1) = *(unsigned int*)(a1 + 88);
    *(long double*)&v2[4] = a2;
    v5 = *(_QWORD*)(a1 + 96);
    LANES128(v2[5]).n128_u32[2] = *(_DWORD*)(a1 + 104);
    LANES128(v2[5]).n128_u64[0] = v5;
  }
  else if (GameData_21ec7b0 != 0) {
    v6 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 32);
      v8 = *(_QWORD*)(v6 + 40);
      if (v7 == v8) {
        v12 = &GameData_2235e30;
      }
      else {
        v9 = *(_DWORD*)(v6 + 56);
        v10 = 954437177 * ((unsigned __int64)(v8 - v7) >> 4) - 1;
        if (v9 < v10) {
          v10 = v9;
        }
        if (v9 >= 0) {
          v11 = v10;
        }
        else {
          v11 = 0;
        }
        v12 = (__int64*)(v7 + 144LL * v11);
      }
      v13 = *((_DWORD*)v12 + 2);
      if (v13 <= 3) {
        v14 = GameData_21ec7b0 + 24LL * v13;
        v15 = *(_QWORD*)(v14 + 32);
        if (v15 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                    memory_order_relaxed);
          v16 = *(_QWORD**)(v14 + 40);
          v17 = *(_QWORD*)(v15 + 8) == -1 || v16 == nullptr;
          if (v17 || (v18 = v16[10]) == 0 ||
              (*(_QWORD*)(v18 + 8) != -1 ? (v19 = v16[11] == 0) : (v19 = true),
               v19 || *(_QWORD*)(v15 + 8) == -1)) {
            LODWORD(a2) =
                LANES128_OF(std___1___shared_weak_count___release_weak())
                    .n128_u32[0];
          }
          else {
            LODWORD(a2) =
                LANES128_OF(std___1___shared_weak_count___release_weak())
                    .n128_u32[0];
            v21 = v16[17];
            if (v21 != 0) {
              v22 = (float32x4_t*)v16[18];
              if (*(_QWORD*)(v21 + 8) != -1 && v22 != nullptr) {
                LODWORD(a2) = LANES128(v22[26]).n128_u32[2];
                if (*(float*)&a2 >= 0x0.0p+0f) {
                  LODWORD(a2) = LANES128(v22[26]).n128_u32[1];
                  if (*(float*)&a2 >= 0x0.0p+0f) {
                    if (*(_DWORD*)(a1 + 16) != 0) {
                      v24 = *(float32x4_t*)(a1 + 32);
                    }
                    else {
                      *(_DWORD*)(a1 + 16) = 1;
                      v25 = vsubq_f32(v2[2], v22[29]);
                      *(_QWORD*)(a1 + 32) = LANES128(v25).n128_u64[0];
                      v24 = *(float32x4_t*)(a1 + 32);
                      LANES128(v24).n128_u64[1] = LANES128(v25).n128_u32[2];
                      *(float32x4_t*)(a1 + 32) = v24;
                    }
                    v26 = vsubq_f32(v2[3], v2[2]);
                    v27 = vmulq_f32(v26, v26);
                    LANES128(v27).n128_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                COERCE_AS(float32x2_t,
                                          LANES128_OF(vextq_s8(v27, v27, 8u))
                                              .n128_u64[0]),
                                COERCE_AS(float32x2_t,
                                          LANES128(v27).n128_u64[0])))
                            .n64_u64[0];
                    LANES128(v27).n128_u64[0] =
                        LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v27).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v27).n128_u64[0])))
                            .n64_u64[0];
                    LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
                    v28 = vrsqrteq_f32(v27);
                    v29 =
                        vmulq_f32(v28, vrsqrtsq_f32(v28, vmulq_f32(v27, v28)));
                    v30 = vbicq_s8(
                        vmulq_f32(
                            v26, vmulq_f32(v29, vrsqrtsq_f32(
                                                    v29, vmulq_f32(v27, v29)))),
                        vceqzq_f32(v27));
                    v31 = vaddq_f32(v24, v22[29]);
                    *(_QWORD*)(a1 + 48) = LANES128(v31).n128_u64[0];
                    v32 = *(float32x4_t*)(a1 + 48);
                    LANES128(v32).n128_u64[1] = LANES128(v31).n128_u32[2];
                    v33 = vaddq_f32(v30, v32);
                    *(float32x4_t*)(a1 + 48) = v32;
                    *(_QWORD*)(a1 + 64) = LANES128(v33).n128_u64[0];
                    v34 = *(_OWORD*)(a1 + 64);
                    *((_QWORD*)&v34 + 1) = LANES128(v33).n128_u32[2];
                    *(_OWORD*)(a1 + 64) = v34;
                    v35 = Vector_650e70();
                    *(_DWORD*)(a1 + 80) = *(_DWORD*)v35;
                    *(_DWORD*)(a1 + 84) = *((_DWORD*)v35 + 1);
                    v36 = *(_OWORD*)(a1 + 80);
                    *((_QWORD*)&v36 + 1) = *((unsigned int*)v35 + 2);
                    *(_OWORD*)(a1 + 80) = v36;
                    *(_DWORD*)(a1 + 96) = LANES128(v2[5]).n128_u32[0];
                    GameRoutine_110d5c0(a1 + 48, (float32x4_t*)(a1 + 64));
                    v37 = *(float32x4_t*)(a1 + 48);
                    v38 = vsubq_f32(v37, v22[28]);
                    v39 = vmulq_f32(v38, v38);
                    LANES128(v39).n128_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                COERCE_AS(float32x2_t,
                                          LANES128_OF(vextq_s8(v39, v39, 8u))
                                              .n128_u64[0]),
                                COERCE_AS(float32x2_t,
                                          LANES128(v39).n128_u64[0])))
                            .n64_u64[0];
                    if (LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v39).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v39).n128_u64[0])))
                            .n64_f32[0] < 0x1.2000000000000p+3f) {
                      *(_DWORD*)(a1 + 16) = 2;
                    }
                    LANES128(v2[2]).n128_u32[0] = LANES128(v37).n128_u32[0];
                    LANES128(v2[2]).n128_u32[1] = *(_DWORD*)(a1 + 52);
                    v40 = v2[2];
                    LANES128(v40).n128_u64[1] = *(unsigned int*)(a1 + 56);
                    v2[2] = v40;
                    LANES128(v2[3]).n128_u32[0] = *(_DWORD*)(a1 + 64);
                    LANES128(v2[3]).n128_u32[1] = *(_DWORD*)(a1 + 68);
                    v41 = v2[3];
                    LANES128(v41).n128_u64[1] = *(unsigned int*)(a1 + 72);
                    v2[3] = v41;
                    LANES128(v2[4]).n128_u32[0] = *(_DWORD*)(a1 + 80);
                    LANES128(v2[4]).n128_u32[1] = *(_DWORD*)(a1 + 84);
                    a2 = *(long double*)&v2[4];
                    *((_QWORD*)&a2 + 1) = *(unsigned int*)(a1 + 88);
                    *(long double*)&v2[4] = a2;
                    v42 = *(_QWORD*)(a1 + 96);
                    LANES128(v2[5]).n128_u32[2] = *(_DWORD*)(a1 + 104);
                    LANES128(v2[5]).n128_u64[0] = v42;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return *(float*)&a2;
}

#pragma GCC visibility pop
