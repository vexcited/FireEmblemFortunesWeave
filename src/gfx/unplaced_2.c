#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_ad4840(__int64* result, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___next_prime(_QWORD);
extern __int128 GameData_1a82ea0;
extern __int128 GameData_1a82f20;
extern __int64 fw_memory_g_heap_manager_ptr;
float32x4_t gfx_a9c260(__int64 a1);
__n64 gfx_a9c3e0(__int64 a1);
__n64 gfx_a9c5a0(__int64 a1);
_QWORD* gfx_ad4540(__int64 a1, unsigned __int64* a2, __int64 a3, __int64** a4);

float32x4_t gfx_a9c260(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t v6;
  float32x4_t v7;
  __int64 v8;
  __int16* v9;
  __int64 v10;
  __int64 v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  __int64 v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  __int16* v35;
  __int64 v36;
  float32x4_t v37;
  int32x4_t v38;
  unsigned __int64 v39;

  v1 = *(_QWORD**)(a1 + 32);
  v2 = *(unsigned __int16*)(*v1 + 58LL);
  if (*(_WORD*)(*v1 + 58LL) == 0) {
    v7 = COERCE_AS(float32x4_t, GameData_1a82f20);
    v6 = COERCE_AS(float32x4_t, GameData_1a82ea0);
    goto LABEL_11;
  }
  v3 = *(_QWORD*)(*v1 + 24LL);
  v4 = v1[4];
  v5 = v2 & 7;
  if (v2 < 8) {
    v6 = COERCE_AS(float32x4_t, GameData_1a82ea0);
    v7 = COERCE_AS(float32x4_t, GameData_1a82f20);
    v8 = 0;
    if ((v2 & 7) == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v6 = COERCE_AS(float32x4_t, GameData_1a82ea0);
  v7 = COERCE_AS(float32x4_t, GameData_1a82f20);
  v9 = (__int16*)(v3 + 8);
  v10 = 0;
  v11 = -(__int64)((unsigned __int16)v2 & 0xFFF8);
  do {
    v10 -= 8;
    v12 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 4) << 6) + 48);
    v13 = vminq_f32(v12, v7);
    v14 = vmaxq_f32(v12, v6);
    v15 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 3) << 6) + 48);
    v16 = vminq_f32(v15, v13);
    v17 = vmaxq_f32(v15, v14);
    v18 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 2) << 6) + 48);
    v19 = vminq_f32(v18, v16);
    v20 = vmaxq_f32(v18, v17);
    v21 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 1) << 6) + 48);
    v22 = vminq_f32(v21, v19);
    v23 = vmaxq_f32(v21, v20);
    v24 = *(float32x4_t*)(v4 + ((__int64)*v9 << 6) + 48);
    v25 = vminq_f32(v24, v22);
    v26 = vmaxq_f32(v24, v23);
    v27 = *(float32x4_t*)(v4 + ((__int64)v9[1] << 6) + 48);
    v28 = vminq_f32(v27, v25);
    v29 = vmaxq_f32(v27, v26);
    v30 = *(float32x4_t*)(v4 + ((__int64)v9[2] << 6) + 48);
    v31 = v9[3];
    v9 += 8;
    v32 = vminq_f32(v30, v28);
    v33 = vmaxq_f32(v30, v29);
    v34 = *(float32x4_t*)(v4 + (v31 << 6) + 48);
    v7 = vminq_f32(v34, v32);
    v6 = vmaxq_f32(v34, v33);
  } while (v11 != v10);
  v8 = -v10;
  if (v5 != 0) {
  LABEL_9:
    v35 = (__int16*)(v3 + 2 * v8);
    do {
      v36 = *v35++;
      --v5;
      v37 = *(float32x4_t*)(v4 + (v36 << 6) + 48);
      v7 = vminq_f32(v37, v7);
      v6 = vmaxq_f32(v37, v6);
    } while (v5 != 0);
  }
LABEL_11:
  v38 = vsubq_f32(v6, v7);
  v39 = COERCE_UNSIGNED_INT(
      0x1.1eb8520000000p-5f *
      LANES128_OF(
          vaddq_f32(vdupq_laneq_s32(v38, 2),
                    vaddq_f32(v38, vdupq_lane_s32(
                                       COERCE_AS(int32x2_t,
                                                 LANES128(v38).n128_u64[0]),
                                       1))))
          .n128_f32[0]);
  LANES128(v38).n128_u64[0] = v39 | (v39 << 32);
  LANES128(v38).n128_u64[1] = v39;
  return vsubq_f32(v7, v38);
}

__n64 gfx_a9c3e0(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t v6;
  float32x4_t v7;
  __int64 v8;
  __int16* v9;
  __int64 v10;
  __int64 v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  __int64 v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  __int16* v35;
  __int64 v36;
  float32x4_t v37;
  int32x4_t v38;
  unsigned __int64 v39;
  __n64 result;

  v1 = *(_QWORD**)(a1 + 32);
  v2 = *(unsigned __int16*)(*v1 + 58LL);
  if (*(_WORD*)(*v1 + 58LL) == 0) {
    v7 = COERCE_AS(float32x4_t, GameData_1a82f20);
    v6 = COERCE_AS(float32x4_t, GameData_1a82ea0);
    goto LABEL_11;
  }
  v3 = *(_QWORD*)(*v1 + 24LL);
  v4 = v1[4];
  v5 = v2 & 7;
  if (v2 < 8) {
    v6 = COERCE_AS(float32x4_t, GameData_1a82ea0);
    v7 = COERCE_AS(float32x4_t, GameData_1a82f20);
    v8 = 0;
    if ((v2 & 7) == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v6 = COERCE_AS(float32x4_t, GameData_1a82ea0);
  v7 = COERCE_AS(float32x4_t, GameData_1a82f20);
  v9 = (__int16*)(v3 + 8);
  v10 = 0;
  v11 = -(__int64)((unsigned __int16)v2 & 0xFFF8);
  do {
    v10 -= 8;
    v12 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 4) << 6) + 48);
    v13 = vminq_f32(v12, v7);
    v14 = vmaxq_f32(v12, v6);
    v15 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 3) << 6) + 48);
    v16 = vminq_f32(v15, v13);
    v17 = vmaxq_f32(v15, v14);
    v18 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 2) << 6) + 48);
    v19 = vminq_f32(v18, v16);
    v20 = vmaxq_f32(v18, v17);
    v21 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 1) << 6) + 48);
    v22 = vminq_f32(v21, v19);
    v23 = vmaxq_f32(v21, v20);
    v24 = *(float32x4_t*)(v4 + ((__int64)*v9 << 6) + 48);
    v25 = vminq_f32(v24, v22);
    v26 = vmaxq_f32(v24, v23);
    v27 = *(float32x4_t*)(v4 + ((__int64)v9[1] << 6) + 48);
    v28 = vminq_f32(v27, v25);
    v29 = vmaxq_f32(v27, v26);
    v30 = *(float32x4_t*)(v4 + ((__int64)v9[2] << 6) + 48);
    v31 = v9[3];
    v9 += 8;
    v32 = vminq_f32(v30, v28);
    v33 = vmaxq_f32(v30, v29);
    v34 = *(float32x4_t*)(v4 + (v31 << 6) + 48);
    v7 = vminq_f32(v34, v32);
    v6 = vmaxq_f32(v34, v33);
  } while (v11 != v10);
  v8 = -v10;
  if (v5 != 0) {
  LABEL_9:
    v35 = (__int16*)(v3 + 2 * v8);
    do {
      v36 = *v35++;
      --v5;
      v37 = *(float32x4_t*)(v4 + (v36 << 6) + 48);
      v7 = vminq_f32(v37, v7);
      v6 = vmaxq_f32(v37, v6);
    } while (v5 != 0);
  }
LABEL_11:
  v38 = vsubq_f32(v6, v7);
  v39 = COERCE_UNSIGNED_INT(
      0x1.1eb8520000000p-4f *
      LANES128_OF(
          vaddq_f32(vdupq_laneq_s32(v38, 2),
                    vaddq_f32(v38, vdupq_lane_s32(
                                       COERCE_AS(int32x2_t,
                                                 LANES128(v38).n128_u64[0]),
                                       1))))
          .n128_f32[0]);
  LANES128(v38).n128_u64[0] = v39 | (v39 << 32);
  LANES128(v38).n128_u64[1] = v39;
  LANES64(result).n64_u64[0] = LANES128_OF(vsubq_f32(v7, v38)).n128_u64[0];
  LANES64(result).n64_f32[1] =
      LANES64(result).n64_f32[1] +
      (float)((float)(LANES128_OF(vaddq_f32(v6, v38)).n128_f32[1] -
                      LANES64(result).n64_f32[1]) *
              0x1.47ae140000000p-5f);
  return result;
}

__n64 gfx_a9c5a0(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t v6;
  float32x4_t v7;
  __int64 v8;
  __int16* v9;
  __int64 v10;
  __int64 v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  __int64 v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  __int16* v35;
  __int64 v36;
  float32x4_t v37;
  int32x4_t v38;
  unsigned __int64 v39;
  __n64 result;

  v1 = *(_QWORD**)(a1 + 32);
  v2 = *(unsigned __int16*)(*v1 + 58LL);
  if (*(_WORD*)(*v1 + 58LL) == 0) {
    v7 = COERCE_AS(float32x4_t, GameData_1a82f20);
    v6 = COERCE_AS(float32x4_t, GameData_1a82ea0);
    goto LABEL_11;
  }
  v3 = *(_QWORD*)(*v1 + 24LL);
  v4 = v1[4];
  v5 = v2 & 7;
  if (v2 < 8) {
    v6 = COERCE_AS(float32x4_t, GameData_1a82ea0);
    v7 = COERCE_AS(float32x4_t, GameData_1a82f20);
    v8 = 0;
    if ((v2 & 7) == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v6 = COERCE_AS(float32x4_t, GameData_1a82ea0);
  v7 = COERCE_AS(float32x4_t, GameData_1a82f20);
  v9 = (__int16*)(v3 + 8);
  v10 = 0;
  v11 = -(__int64)((unsigned __int16)v2 & 0xFFF8);
  do {
    v10 -= 8;
    v12 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 4) << 6) + 48);
    v13 = vminq_f32(v12, v7);
    v14 = vmaxq_f32(v12, v6);
    v15 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 3) << 6) + 48);
    v16 = vminq_f32(v15, v13);
    v17 = vmaxq_f32(v15, v14);
    v18 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 2) << 6) + 48);
    v19 = vminq_f32(v18, v16);
    v20 = vmaxq_f32(v18, v17);
    v21 = *(float32x4_t*)(v4 + ((__int64)*(v9 - 1) << 6) + 48);
    v22 = vminq_f32(v21, v19);
    v23 = vmaxq_f32(v21, v20);
    v24 = *(float32x4_t*)(v4 + ((__int64)*v9 << 6) + 48);
    v25 = vminq_f32(v24, v22);
    v26 = vmaxq_f32(v24, v23);
    v27 = *(float32x4_t*)(v4 + ((__int64)v9[1] << 6) + 48);
    v28 = vminq_f32(v27, v25);
    v29 = vmaxq_f32(v27, v26);
    v30 = *(float32x4_t*)(v4 + ((__int64)v9[2] << 6) + 48);
    v31 = v9[3];
    v9 += 8;
    v32 = vminq_f32(v30, v28);
    v33 = vmaxq_f32(v30, v29);
    v34 = *(float32x4_t*)(v4 + (v31 << 6) + 48);
    v7 = vminq_f32(v34, v32);
    v6 = vmaxq_f32(v34, v33);
  } while (v11 != v10);
  v8 = -v10;
  if (v5 != 0) {
  LABEL_9:
    v35 = (__int16*)(v3 + 2 * v8);
    do {
      v36 = *v35++;
      --v5;
      v37 = *(float32x4_t*)(v4 + (v36 << 6) + 48);
      v7 = vminq_f32(v37, v7);
      v6 = vmaxq_f32(v37, v6);
    } while (v5 != 0);
  }
LABEL_11:
  v38 = vsubq_f32(v6, v7);
  v39 = COERCE_UNSIGNED_INT(
      0x1.0a3d700000000p-3f *
      LANES128_OF(
          vaddq_f32(vdupq_laneq_s32(v38, 2),
                    vaddq_f32(v38, vdupq_lane_s32(
                                       COERCE_AS(int32x2_t,
                                                 LANES128(v38).n128_u64[0]),
                                       1))))
          .n128_f32[0]);
  LANES128(v38).n128_u64[0] = v39 | (v39 << 32);
  LANES128(v38).n128_u64[1] = v39;
  LANES64(result).n64_u64[0] = LANES128_OF(vsubq_f32(v7, v38)).n128_u64[0];
  LANES64(result).n64_f32[1] =
      LANES64(result).n64_f32[1] +
      (float)((float)(LANES128_OF(vaddq_f32(v6, v38)).n128_f32[1] -
                      LANES64(result).n64_f32[1]) *
              0x1.eb851e0000000p-5f);
  return result;
}

_QWORD* gfx_ad4540(__int64 a1, unsigned __int64* a2, __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  _QWORD** v10;
  _QWORD* result;
  unsigned __int64 v12;
  __int64 v13;
  __int64* v14;
  float v15;
  __int64 v16;
  float v17;
  float v18;
  _BOOL8 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 primeEm;
  _QWORD* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  unsigned __int64 v31;

  v5 = *a2;
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v9 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v5 >= v6) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v9 & v5;
    }
    v10 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v4);
    if (v10 != nullptr) {
      result = *v10;
      if (*v10 != nullptr) {
        if ((v6 & v9) == 0) {
          while (1) {
            v13 = result[1];
            if (v13 == v5) {
              if (result[2] == v5) {
                return result;
              }
            }
            else if ((v13 & v9) != v4) {
              goto LABEL_23;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v12 = result[1];
          if (v12 == v5) {
            if (result[2] == v5) {
              return result;
            }
          }
          else {
            if (v12 >= v6) {
              v12 %= v6;
            }
            if (v12 != v4) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_23:
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v14 = *a4;
  *result = 0;
  result[1] = v5;
  v15 = *(float*)(a1 + 32);
  v16 = *v14;
  result[4] = 0;
  result[5] = 0;
  result[2] = v16;
  result[3] = 0;
  v17 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v6 == 0 || (float)(v15 * (float)v6) < v17) {
    v18 = v17 / v15;
    v19 = true;
    if (v6 >= 3) {
      v19 = (v6 & (v6 - 1)) != 0;
    }
    v20 = v19 | (2 * v6);
    v21 = vcvtps_u64_f32(v18);
    if (v20 <= v21) {
      primeEm = v21;
    }
    else {
      primeEm = v20;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v23 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v23;
      v6 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm > v6) {
      goto LABEL_35;
    }
    if (primeEm < v6) {
      v25 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v27 = result;
        v25 = std___1___next_prime(v25);
        result = v27;
      }
      else {
        v26 = 1LL << (-(char)__clz(v25 - 1) & 63);
        if (v25 >= 2) {
          v25 = v26;
        }
      }
      if (primeEm <= v25) {
        primeEm = v25;
      }
      if (primeEm < v6) {
      LABEL_35:
        v24 = result;
        GameRoutine_ad4840((__int64*)a1, primeEm);
        result = v24;
      }
    }
    v6 = *(_QWORD*)(a1 + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v5 >= v6) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = (v6 - 1) & v5;
    }
  }
  v28 = *(_QWORD*)a1;
  v29 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v29 != nullptr) {
    *result = *v29;
    *v29 = result;
  }
  else {
    v30 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *result = v30;
    *(_QWORD*)(v28 + 8 * v4) = a1 + 16;
    if (*result != 0) {
      v31 = *(_QWORD*)(*result + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v31 >= v6) {
          v31 %= v6;
        }
      }
      else {
        v31 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v31) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

#pragma GCC visibility pop
