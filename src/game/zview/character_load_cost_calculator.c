#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Model_a65960(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD, double);
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212df08;
__int64 CharacterLoadCostCalculator_170f460(__int64 result);
_QWORD*
game_zview_CharacterLoadCostCalculator_collectCharaPolygon_lambda0_Invoke(
    _QWORD* result, __int64 a2);
__int64 CharacterBuilder_1083e90(_QWORD, _QWORD, long double);
extern __int128 GameData_1a82ea0;
extern __int128 GameData_1a82f20;
extern __int64 (*GameData_20ab5c0[])();
__int64 game_zview_CharacterLoadCostCalculator_collectCharaPolygon(
    __int64 result, __int64 a2, long double a3);

__int64 game_zview_CharacterLoadCostCalculator_collectCharaPolygon(
    __int64 result, __int64 a2, long double a3)
{
  __int64 v3;
  atomic_uchar* v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  float32x4_t* v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  float32x4_t* v19;
  float32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x2_t v23;
  int8x16_t v24;
  float32x2_t v25;
  float v26;
  float v27;
  float v29;
  float v31;
  __int64 v33;
  float v34;
  __int64 v36;
  unsigned int v37;
  long double v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  float32x4_t v48;
  __int64 v49;
  float32x4_t v50;
  int v51;
  _QWORD v52[2];
  __int64 v53;
  _QWORD* v54;

  *(_QWORD*)&a3 = 0;
  if (a2 == 0 || (*(_BYTE*)(a2 + 342) & 1) == 0) {
    return result;
  }
  v3 = *(_QWORD*)(a2 + 408);
  v4 = (atomic_uchar*)GameData_212df10;
  v5 = GameData_212df08;
  if (v3 == 0) {
    v10 = COERCE_AS(float32x4_t, GameData_1a82f20);
    v11 = COERCE_AS(float32x4_t, GameData_1a82ea0);
    v15 = *(_QWORD*)(a2 + 448);
    if (v15 == 0) {
      goto LABEL_16;
    }
    goto LABEL_12;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                            memory_order_acquire) &
       1) == 0) {
    v42 = a2;
    v49 = result;
    v43 = __cxa_guard_acquire(GameData_212df10);
    *(_QWORD*)&a3 = 0;
    a2 = v42;
    v4 = (atomic_uchar*)GameData_212df10;
    result = v49;
    if (v43 != 0) {
      *v5 = wld_Crc32(0, "ModelModule", 11, 0.0);
      __cxa_guard_release(GameData_212df10);
      *(_QWORD*)&a3 = 0;
      a2 = v42;
      v4 = (atomic_uchar*)GameData_212df10;
      result = v49;
    }
  }
  v6 = *(_QWORD*)(v3 + 512);
  v7 = v6;
  do {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    v6 -= 16;
  } while (v8 != *v5);
  v9 = *(float32x4_t**)(*(_QWORD*)(v6 + 8) + 24LL);
  v10 = vminq_f32(v9[3], COERCE_AS(float32x4_t, GameData_1a82f20));
  v11 = vmaxq_f32(v9[4], COERCE_AS(float32x4_t, GameData_1a82ea0));
  if (*(_BYTE*)(result + 80) == 1) {
    LANES128(v12).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v12).n128_u64[1] = 0x3F0000003F000000LL;
    v13 = vmulq_f32(vaddq_f32(v10, v11), v12);
    v14 = *(float32x4_t*)(result + 64);
    v11 = vaddq_f32(v13, v14);
    v10 = vsubq_f32(v13, v14);
  }
  v15 = *(_QWORD*)(a2 + 448);
  if (v15 != 0) {
  LABEL_12:
    if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
      v44 = result;
      v45 = a2;
      v48 = v11;
      v50 = v10;
      v46 = __cxa_guard_acquire(GameData_212df10);
      v11 = v48;
      v10 = v50;
      *(_QWORD*)&a3 = 0;
      a2 = v45;
      v47 = v46;
      result = v44;
      if (v47 != 0) {
        *v5 = wld_Crc32(0, "ModelModule", 11, 0.0);
        __cxa_guard_release(GameData_212df10);
        v11 = v48;
        v10 = v50;
        *(_QWORD*)&a3 = 0;
        result = v44;
        a2 = v45;
      }
    }
    v16 = *(_QWORD*)(v15 + 512);
    v17 = v16;
    do {
      v18 = *(_DWORD*)(v17 - 16);
      v17 -= 16;
      v16 -= 16;
    } while (v18 != *v5);
    v19 = *(float32x4_t**)(*(_QWORD*)(v16 + 8) + 24LL);
    v10 = vminq_f32(v10, v19[3]);
    v11 = vmaxq_f32(v11, v19[4]);
  }
LABEL_16:
  v20 = vsubq_f32(v11, v10);
  if (LANES128(v20).n128_f32[1] <= 0.0) {
    return result;
  }
  v21 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(a2 + 8) + 304LL),
                  *(float32x4_t*)(result + 32));
  LANES128(v21).n128_f32[1] =
      LANES128(v21).n128_f32[1] +
      (float)(LANES128(v20).n128_f32[1] * 0x1.0000000000000p-1);
  v22 = vmulq_f32(*(float32x4_t*)(result + 48), v21);
  LANES128(v22).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u64[0];
  LANES64(v23).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
          .n64_u64[0];
  if (LANES64(v23).n64_f32[0] < 0.0) {
    return result;
  }
  v24 = vmulq_f32(v21, v21);
  LANES128(v24).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  LANES64(v25).n64_u64[0] =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]))))
          .n64_u64[0];
  if (LANES64_OF(vdiv_f32(v23, v25)).n64_f32[0] < 0x1.6a09e667f3bcdp-1) {
    LANES64(v25).n64_f32[0] = 0x1.99999a0000000p-1 * LANES64(v25).n64_f32[0];
  }
  v26 = *(float*)(result + 100);
  v27 = LANES64(v25).n64_f32[0] /
        (float)(LANES128(v20).n128_f32[1] / 0x1.e666660000000p+0);
  if (v27 > (float)(v26 + -0x1.3333340000000p+0) &&
      v27 < (float)(v26 + 0x1.3333340000000p+0)) {
    v36 = a2;
    v37 = 0;
    goto LABEL_43;
  }
  if (v27 <= v26) {
    v33 = 0x100000000LL;
  }
  else {
    v29 = *(float*)(result + 104);
    if (v27 > (float)(v29 + -0x1.3333340000000p+0) &&
        v27 < (float)(v29 + 0x1.3333340000000p+0)) {
      v36 = a2;
      v37 = 1;
      goto LABEL_43;
    }
    if (v27 <= v29) {
      v33 = 0x100000001LL;
    }
    else {
      v31 = *(float*)(result + 108);
      if (v27 > (float)(v31 + -0x1.3333340000000p+0) &&
          v27 < (float)(v31 + 0x1.3333340000000p+0)) {
        v36 = a2;
        v37 = 2;
        goto LABEL_43;
      }
      v33 = 0x100000002LL;
      if (v27 > v31) {
        v34 = *(float*)(result + 112);
        if (v27 <= (float)(v34 + -0x1.3333340000000p+0) ||
            v27 >= (float)(v34 + 0x1.3333340000000p+0)) {
          if (v27 <= v34) {
            v33 = 0x100000003LL;
          }
          else {
            if (v27 > *(float*)(result + 116)) {
              return result;
            }
            v33 = 0x100000004LL;
          }
          goto LABEL_47;
        }
        v36 = a2;
        v37 = 3;
      LABEL_43:
        v51 = 0;
        v52[0] = GameData_20ab5c0;
        v52[1] = &v51;
        v54 = v52;
        v53 = v37 | 0x100000000LL;
        CharacterBuilder_1083e90(v36, v52, a3);
        if (v54 == v52) {
          v39 = 32;
        }
        else {
          if (v54 == nullptr) {
          LABEL_52:
            v51 = 0;
            v52[0] = GameData_20ab5c0;
            v52[1] = &v51;
            v54 = v52;
            v53 = (v37 + 1) | 0x100000000LL;
            CharacterBuilder_1083e90(v36, v52, v38);
            result = (__int64)v54;
            if (v54 == v52) {
              v41 = 32;
            }
            else {
              if (v54 == nullptr) {
                return result;
              }
              v41 = 40;
            }
            return (*(__int64 (**)(__int64))(*v54 + v41))((__int64)v54);
          }
          v39 = 40;
        }
        (*(void (**)(__int64))(*v54 + v39))((__int64)v54);
        goto LABEL_52;
      }
    }
  }
LABEL_47:
  v51 = 0;
  v53 = v33;
  v52[0] = GameData_20ab5c0;
  v52[1] = &v51;
  v54 = v52;
  CharacterBuilder_1083e90(a2, v52, a3);
  result = (__int64)v54;
  if (v54 == v52) {
    v40 = 32;
  }
  else {
    if (v54 == nullptr) {
      return result;
    }
    v40 = 40;
  }
  return (*(__int64 (**)(__int64))(*v54 + v40))((__int64)v54);
}

__int64 CharacterLoadCostCalculator_170f460(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (result == 0) {
    return result;
  }
  v1 = *(_QWORD*)(*(_QWORD*)(result + 8) + 232LL);
  if (v1 == 0) {
    return result;
  }
  if ((*(_BYTE*)(v1 + 342) & 1) == 0) {
    return result;
  }
  v2 = *(_QWORD*)(result + 384);
  if ((v2 & 0x400000000LL) == 0) {
    return result;
  }
  v3 = *(_QWORD*)(v1 + 440);
  if (v3 == 0) {
    v8 = *(_QWORD*)(v1 + 432);
    if (v8 == 0) {
      return result;
    }
    goto LABEL_15;
  }
  v4 = v3 + 16;
  v5 = *(_QWORD*)(v3 + 272);
  v6 = v4 + v5;
  if (v5 >= 2) {
    v7 = v4;
    do {
      result = memchr(v7, 87, v5 - 1);
      if (result == 0) {
        break;
      }
      if (*(_WORD*)result == 14423) {
        goto LABEL_12;
      }
      v7 = result + 1;
      v5 = v6 - v7;
    } while (v6 - v7 > 1);
  }
  result = v6;
LABEL_12:
  v8 = *(_QWORD*)(v1 + 432);
  if (v8 != 0) {
  LABEL_15:
    v9 = *(_QWORD*)(v8 + 272);
    if (v9 >= 2) {
      v10 = v8 + 16 + v9;
      result = v8 + 16;
      do {
        result = memchr(result, 87, v9 - 1);
        if (result == 0) {
          break;
        }
        if (*(_WORD*)result == 14423) {
          break;
        }
        ++result;
        v9 = v10 - result;
      } while (v10 - result >= 2);
    }
  }
  return result;
}

_QWORD*

game_zview_CharacterLoadCostCalculator_collectCharaPolygon_lambda0_Invoke(
    _QWORD* result, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 i;
  int v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  int v25;
  double v26;
  int v27;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v3 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v23 = result;
    v24 = a2;
    v25 = __cxa_guard_acquire(GameData_212df10);
    a2 = v24;
    v27 = v25;
    result = v23;
    if (v27 != 0) {
      *v3 = wld_Crc32(0, "ModelModule", 11, v26);
      __cxa_guard_release(GameData_212df10);
      a2 = v24;
      result = v23;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  for (i = v4; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) != v4) {
        v7 = *(_QWORD*)(v4 + 8);
        if (v7 != 0) {
          v8 = result;
          result = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(
              **(_QWORD**)(v7 + 24) + 56LL))(*(_QWORD**)(v7 + 24),
                                             *(_QWORD*)(v7 + 24));
          v12 = *((_DWORD*)v8 + 4);
          v13 = (_DWORD)result - 1;
          if (v12 < (int)result - 1) {
            v13 = *((_DWORD*)v8 + 4);
          }
          if (v12 >= 0) {
            v14 = v13;
          }
          else {
            v14 = 0;
          }
          if ((v14 & 0x80000000) != 0 ||
              (v15 = *((unsigned int*)v8 + 5), v16 = v8,
               (unsigned int)v15 > 5) ||
              (v17 = *(_QWORD*)(v7 + 88),
               0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v7 + 96) - v17) >> 3) <=
                   v14)) {
            v19 = *(_QWORD*)(v7 + 88);
            v20 = *(_QWORD*)(v7 + 96);
            if (v19 != v20) {
              memset(v19, 0, 24 * ((v20 - v19 - 24) / 0x18uLL) + 24, v9, v10,
                     v11);
            }
            result = (_QWORD*)Model_a65960(*(_QWORD*)(v7 + 24), v7 + 88);
            v18 = 0;
            if ((v14 & 0x80000000) != 0) {
              v16 = v8;
            }
            else {
              v21 = *((unsigned int*)v8 + 5);
              v16 = v8;
              if ((unsigned int)v21 <= 5) {
                v22 = *(_QWORD*)(v7 + 88);
                if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v7 + 96) - v22) >> 3) >
                    v14) {
                  v18 = *(_DWORD*)(v22 + 24LL * (unsigned int)v14 + 4 * v21);
                }
              }
            }
          }
          else {
            v18 = *(_DWORD*)(v17 + 24LL * (unsigned int)v14 + 4 * v15);
          }
          *(_DWORD*)v16[1] += v18;
        }
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
