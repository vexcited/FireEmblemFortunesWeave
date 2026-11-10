#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 EmitterSet_5b5ec0(__int64 result, __int64, char, __int64, int, char,
                          __int64, __int64, __int64 (*)(_QWORD*),
                          __int64 (*)(_QWORD*));
__int64 EmitterSet_5b60e0(__int64, __int64, __int64, int, char, __int64,
                          __int64, __int64 (*)(_QWORD*), __int64 (*)(_QWORD*));
__int64 GameRoutine_5b45d0(__int64, int);
__int64 GameRoutine_5b4650(__int64);
__int64 GameRoutine_5b46e0(__int64);
__int64 GameRoutine_5b6760(__int64 result, __int64);
__int64 GameRoutine_5b9d90(__int64, __int64);
__int64 GameRoutine_5ba840(__int64, unsigned __int8*, int, char, char,
                           unsigned __int8, float);
__int64 GameRoutine_5d3880(__int64 result, __int64);
int32x4_t GameRoutine_5bbed0(float, float, __int64, float32x4_t*);
void GameRoutine_5b9c80(__int64, __int64);
__int64 EmitterSet_5b5c70(__int64 a1, float32x4_t* a2, __int64 a3, char a4,
                          __int64 (*a5)(__int64*), long double a6);
__int64 EmitterSet_5b6250(__int64 result, __int64 a2, int a3, int a4, char a5,
                          __int64 a6, __int64 (*a7)(_QWORD*),
                          __int64 (*a8)(_QWORD*));
float32x4_t EmitterSet_5b6560(__int64 a1, float32x4_t* a2);
__int64 BufferAllocator_5b4450(__int64, __int64, char);
__int64 BufferAllocator_5b56a0(__int64, __int64);
__int64 EmitterSet_5b5c70_alt1(__int64, __int64, __int64, char,
                               __int64 (*)(__int64*),
                               long double) __asm__("EmitterSet_5b5c70");
__int64 EmitterSet_5b6440(__int64 result, __int64);
__int64 GameRoutine_5d2530(__int64, __int64);
__int64 EmitterSet_5b58c0(__int64 result, unsigned int a2, char a3,
                          __int64 (*a4)(__int64*), long double a5);

__int64 EmitterSet_5b58c0(__int64 result, unsigned int a2, char a3,
                          __int64 (*a4)(__int64*), long double a5)
{

#pragma clang fp contract(off)
  __int64 v6;
  float v7;
  __int64 v10;
  int v11;
  bool v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v6 = *(_QWORD*)(result + 352);
  v7 = *(float*)&a5;
  v10 = result;
  if (v6 != 0) {
    v11 = *(_DWORD*)(result + 360);
    v12 = __OFSUB__(v11, 1);
    v13 = v11 - 1;
    if (v13 < 0 == v12) {
      *(_DWORD*)(result + 360) = v13;
      if (v13 == 0) {
        result = BufferAllocator_5b56a0(result, v6);
        *(_QWORD*)(v10 + 352) = 0;
        *(_DWORD*)(v10 + 360) = 0;
      }
    }
  }
  if (*(_BYTE*)(v10 + 10) == 0) {
    return result;
  }
  v14 = *(_QWORD*)(v10 + 336);
  *(_DWORD*)(v10 + 424) = 0;
  *(_QWORD*)(v10 + 408) = 0;
  *(_QWORD*)(v10 + 416) = 0;
  *(_QWORD*)(v10 + 392) = 0;
  *(_QWORD*)(v10 + 400) = 0;
  *(_QWORD*)(v10 + 376) = 0;
  *(_QWORD*)(v10 + 384) = 0;
  *(_QWORD*)(v10 + 432) = 0;
  *(_QWORD*)(v10 + 440) = 0;
  *(_DWORD*)(v10 + 560) = 0;
  *(_QWORD*)(v10 + 60) = 0;
  *(float*)(v10 + 76) = v7;
  if (v14 == 0) {
    goto LABEL_53;
  }
  v15 = 0;
  do {
    while (1) {
      v16 = v14;
      v14 = *(_QWORD*)(v14 + 128);
      if (*(_BYTE*)(v10 + 14) == 0 ||
          (*(_DWORD*)(v16 + 40) | *(_DWORD*)(v10 + 604)) != 0) {
        break;
      }
      *(float*)&a5 = v7 + *(float*)(v16 + 68);
      *(_DWORD*)(v16 + 68) = LODWORD(a5);
      ++*(_DWORD*)(v10 + 380);
      v15 |= *(unsigned __int8*)(v16 + 1532);
      if (v14 == 0) {
        goto LABEL_51;
      }
    }
    v39 = v14;
    result = EmitterSet_5b5c70_alt1(v10, v16, a2, a3 & 1, a4, a5);
    v17 = *(_QWORD*)(v16 + 568);
    *(_BYTE*)(v16 + 5) = result;
    *(_BYTE*)(v16 + 4) = 0;
    v18 = result;
    if (*(int*)(v17 + 136) >= 1) {
      v19 = 0;
      while (1) {
        v20 = *(_QWORD*)(v16 + 1088 + 8 * v19);
        if (v20 != 0) {
          break;
        }
      LABEL_16:
        if (++v19 >= *(int*)(v17 + 136)) {
          goto LABEL_48;
        }
      }
      while (1) {
        while (1) {
          v22 = *(_QWORD*)(v20 + 128);
          result = EmitterSet_5b5c70_alt1(v10, v20, a2, a3 & 1, a4, a5);
          *(_BYTE*)(v20 + 5) = v18;
          if ((_DWORD)result != 0) {
            break;
          }
          *(_BYTE*)(v16 + 4) = 1;
          v21 = *(unsigned __int8*)(v20 + 1532);
          v20 = v22;
          v15 |= v21;
          if (v22 == 0) {
            goto LABEL_15;
          }
        }
        if (*(_BYTE*)v20 == 0) {
          break;
        }
        v23 = *(_QWORD*)(v20 + 1352);
        v24 = *(int*)(v20 + 32);
        v25 = *(_QWORD*)(v20 + 136);
        if (v25 != 0) {
          v26 = *(_QWORD*)(v20 + 128);
          if (v26 != 0) {
            *(_QWORD*)(v25 + 128) = v26;
          LABEL_32:
            v33 = *(_QWORD*)(v20 + 128);
            v32 = *(_QWORD*)(v20 + 136);
            goto LABEL_33;
          }
        }
        v27 = v23 + 1088;
        if (*(_QWORD*)(v23 + 1088 + 8 * v24) != v20) {
          v28 = v23 + 1216;
          if (*(_QWORD*)(v28 + 8 * v24) == v20) {
            *(_QWORD*)(v28 + 8 * v24) = v25;
            v29 = *(_QWORD*)(v20 + 136);
            if (v29 != 0) {
              *(_QWORD*)(v29 + 128) = *(_QWORD*)(v20 + 128);
            }
            else {
              *(_QWORD*)(v27 + 8 * v24) = 0;
            }
          }
          goto LABEL_34;
        }
        v33 = *(_QWORD*)(v20 + 128);
        *(_QWORD*)(v27 + 8 * v24) = v33;
        if (v33 == 0) {
          *(_QWORD*)(v23 + 8 * v24 + 1216) = 0;
          goto LABEL_34;
        }
        v32 = *(_QWORD*)(v20 + 136);
      LABEL_33:
        *(_QWORD*)(v33 + 136) = v32;
      LABEL_34:
        BufferAllocator_5b4450(v20, *(_QWORD*)v10, 1);
        result = GameRoutine_5d2530(*(_QWORD*)(v10 + 32), v20);
        v34 = *(unsigned __int8*)(v20 + 1532);
        v20 = v22;
        v15 |= v34;
        if (v22 == 0) {
        LABEL_15:
          v17 = *(_QWORD*)(v16 + 568);
          goto LABEL_16;
        }
      }
      v30 = *(_QWORD*)(v20 + 136);
      if (v30 == 0 || (v31 = *(_QWORD*)(v20 + 128)) == 0) {
        if (*(_QWORD*)(v10 + 336) == v20) {
          v36 = *(_QWORD*)(v20 + 128);
          *(_QWORD*)(v10 + 336) = v36;
          if (v36 != 0) {
            *(_QWORD*)(v36 + 136) = *(_QWORD*)(v20 + 136);
          }
          else {
            *(_QWORD*)(v10 + 344) = 0;
          }
        }
        else if (*(_QWORD*)(v10 + 344) == v20) {
          *(_QWORD*)(v10 + 344) = v30;
          v35 = *(_QWORD*)(v20 + 136);
          if (v35 != 0) {
            *(_QWORD*)(v35 + 128) = *(_QWORD*)(v20 + 128);
          }
          else {
            *(_QWORD*)(v10 + 336) = 0;
          }
        }
        goto LABEL_34;
      }
      *(_QWORD*)(v30 + 128) = v31;
      goto LABEL_32;
    }
  LABEL_48:
    if (v18 != 0 && *(_BYTE*)(v16 + 4) == 0) {
      EmitterSet_5b6440(v10, v16);
      BufferAllocator_5b4450(v16, *(_QWORD*)v10, 1);
      result = GameRoutine_5d2530(*(_QWORD*)(v10 + 32), v16);
    }
    v14 = v39;
    v15 |= *(unsigned __int8*)(v16 + 1532);
  } while (v39 != 0);
LABEL_51:
  if ((v15 & 1) != 0) {
    *(_BYTE*)(v10 + 612) = 1;
  }
LABEL_53:
  if (*(_BYTE*)(v10 + 14) != 0 && v7 > 0x0.0p+0f && *(int*)(v10 + 604) >= 1) {
    if (*(int*)(v10 + 600) >= 1) {
      v37 = 80;
      v38 = 0;
      do {
        ++v38;
        *(_QWORD*)(*(_QWORD*)(v10 + 592) + v37) = 0;
        v37 += 96;
      } while (v38 < *(int*)(v10 + 600));
    }
    *(_DWORD*)(v10 + 604) = 0;
  }
  if (v7 > 0x0.0p+0f) {
    *(_DWORD*)(v10 + 24) = 0;
  }
  return result;
}

__int64 EmitterSet_5b5c70(__int64 a1, float32x4_t* a2, __int64 a3, char a4,
                          __int64 (*a5)(__int64*), long double a6)
{

#pragma clang fp contract(off)
  int v8;
  char v9;
  int v10;
  int v11;
  unsigned int v12;
  float32x4_t* v14;

  if (*(float*)(a1 + 76) <= 0x0.0p+0f) {
    if ((GameRoutine_5b45d0((__int64)a2, a3) & 1) != 0) {
      GameRoutine_5b9d90(LANES128(a2[9]).n128_i64[1], (__int64)a2);
      GameRoutine_5b9c80(LANES128(a2[9]).n128_i64[1], (__int64)a2);
      GameRoutine_5bbed0(*(float*)(a1 + 76), *(float*)(a1 + 76),
                         LANES128(a2[9]).n128_i64[1], a2);
    }
    GameRoutine_5b6760(a1 + 376, (__int64)a2);
    v12 = 0;
  }
  else {
    v8 = *(unsigned __int8*)(*(_QWORD*)(a1 + 32) + 53LL);
    if (a5 != nullptr) {
      v9 = a4;
      v10 = a3;
      v14 = a2;
      v11 = a5((__int64*)&v14);
      if (v11 == 1) {
        return 1;
      }
      if (v11 == 2 && (LANES128(a2[95]).n128_u8[12] & 1) == 0) {
        LANES128(a2[95]).n128_u8[12] = 1;
      }
      LODWORD(a3) = v10;
      a4 = v9;
    }
    if (LANES128(a2[3]).n128_u32[3] != 0) {
      LANES128(a2[4]).n128_u32[3] = *(_DWORD*)(a1 + 76);
      if ((GameRoutine_5b45d0((__int64)a2, a3) & 1) != 0) {
        GameRoutine_5b9d90(LANES128(a2[9]).n128_i64[1], (__int64)a2);
        GameRoutine_5b9c80(LANES128(a2[9]).n128_i64[1], (__int64)a2);
        GameRoutine_5bbed0(*(float*)(a1 + 76), *(float*)(a1 + 76),
                           LANES128(a2[9]).n128_i64[1], a2);
      }
      GameRoutine_5b6760(a1 + 376, (__int64)a2);
      v12 = 0;
      ++*(_DWORD*)(a1 + 384);
    }
    else if ((GameRoutine_5ba840(
                  LANES128(a2[9]).n128_i64[1], (unsigned __int8*)a2, a3,
                  *(_BYTE*)(a1 + 9) != 0, *(_BYTE*)(a1 + 14) == 0, a4 & 1,
                  *(float*)(a1 + 76)) &
              1) != 0) {
      if (v8 != 0 && *(_BYTE*)(LANES128(a2[10]).n128_u64[0] + 1874) == 2 &&
          (LANES128(a2[2]).n128_i32[2] > 0 ||
           *(_QWORD*)(LANES128(a2[35]).n128_u64[1] + 824) != 0)) {
        GameRoutine_5d3880(*(_QWORD*)(a1 + 32), (__int64)a2);
      }
      GameRoutine_5b6760(a1 + 376, (__int64)a2);
      v12 = 0;
    }
    else {
      v12 = 1;
    }
    ++*(_DWORD*)(a1 + 372);
  }
  *(_DWORD*)(a1 + 560) |= 1 << LANES128(a2[64]).n128_u32[0];
  if ((GameRoutine_5b4650((__int64)a2) & 1) != 0) {
    *(_DWORD*)(a1 + 60) |= 1 << LANES128(a2[64]).n128_u32[0];
  }
  if ((GameRoutine_5b46e0((__int64)a2) & 1) != 0) {
    *(_DWORD*)(a1 + 64) |= 1 << LANES128(a2[64]).n128_u32[0];
  }
  return v12;
}

__int64 EmitterSet_5b6250(__int64 result, __int64 a2, int a3, int a4, char a5,
                          __int64 a6, __int64 (*a7)(_QWORD*),
                          __int64 (*a8)(_QWORD*))
{
  __int64 v8;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v23;
  __int64 v24;
  char v25;
  int v26;

  v8 = *(_QWORD*)(result + 32);
  if (a3 >= *(_DWORD*)(v8 + 8)) {
    v15 = 0;
    v16 = a5 & 1;
    v17 = a4;
    v18 = a6;
  }
  else {
    v11 = (__int64)a3 << 6;
    *(_DWORD*)(*(_QWORD*)(v8 + 32) + v11 + 16) =
        *(_DWORD*)(*(_QWORD*)(v8 + 16) + 2536LL * a3);
    *(_DWORD*)(*(_QWORD*)(v8 + 32) + v11 + 20) =
        *(_DWORD*)(*(_QWORD*)(v8 + 16) + 2536LL * a3 + 264);
    *(_QWORD*)(*(_QWORD*)(v8 + 32) + v11 + 24) =
        *(_QWORD*)(*(_QWORD*)(v8 + 16) + 2536LL * a3 + 1960);
    *(_QWORD*)(*(_QWORD*)(v8 + 32) + v11 + 32) =
        *(_QWORD*)(*(_QWORD*)(v8 + 16) + 2536LL * a3 + 1968);
    v12 = *(_QWORD*)(v8 + 16) + 2536LL * a3;
    v13 = *(unsigned __int8*)(v12 + 2528);
    v14 = v12 + 1944;
    if (v13 != 0) {
      v14 = 0;
    }
    *(_QWORD*)(*(_QWORD*)(v8 + 32) + v11 + 40) = v14;
    v15 = *(_QWORD*)(v8 + 32) + v11;
    v16 = a5 & 1;
    v17 = a4;
    v18 = a6;
  }
  if (((*(_DWORD*)(result + 20) == 63) &
       ~*(unsigned __int8*)(*(_QWORD*)(result + 568) + 40LL)) == 0) {
    v19 = *(_QWORD*)(result + 336);
    v20 = result;
    if (v19 != 0) {
      v23 = v15;
      v24 = v18;
      v25 = v16;
      v26 = v17;
      do {
        if (*(_BYTE*)(v19 + 4) != 0) {
          EmitterSet_5b5ec0(v20, a2, 1, v19, v26, v25 & 1, v24, v23, a7, a8);
        }
        result =
            EmitterSet_5b60e0(v20, a2, v19, v26, v25 & 1, v24, v23, a7, a8);
        if (*(_BYTE*)(v19 + 4) != 0) {
          result = EmitterSet_5b5ec0(v20, a2, 0, v19, v26, v25 & 1, v24, v23,
                                     a7, a8);
        }
        v19 = *(_QWORD*)(v19 + 128);
      } while (v19 != 0);
    }
  }
  return result;
}

float32x4_t EmitterSet_5b6560(__int64 a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  int8x16_t v6;
  float v7;
  int8x16_t v8;
  float v9;
  int8x16_t v10;
  float v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t result;
  float32x4_t v16;

  v2 = LANES128(a2[3]).n128_u64[1];
  *(_QWORD*)(a1 + 136) = LANES128(a2[2]).n128_u64[1];
  *(_QWORD*)(a1 + 152) = v2;
  v3 = LANES128(a2[1]).n128_u64[1];
  *(_QWORD*)(a1 + 104) = LANES128(*(a2)).n128_u64[1];
  *(_QWORD*)(a1 + 120) = v3;
  v4 = LANES128(*(a2)).n128_u64[0];
  *(_QWORD*)(a1 + 112) = LANES128(a2[1]).n128_u64[0];
  *(_QWORD*)(a1 + 96) = v4;
  v5 = LANES128(a2[2]).n128_u64[0];
  *(_QWORD*)(a1 + 144) = LANES128(a2[3]).n128_u64[0];
  *(_QWORD*)(a1 + 128) = v5;
  v6 = vmulq_f32(*a2, *a2);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  v7 = LANES64_OF(vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]))))
           .n64_f32[0];
  v8 = vmulq_f32(a2[1], a2[1]);
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  LODWORD(v9) =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]))))
          .n64_u32[0];
  v10 = vmulq_f32(a2[2], a2[2]);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  LODWORD(v11) =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]))))
          .n64_u32[0];
  LANES128(v12).n128_u64[0] = __PAIR64__(LODWORD(v9), LODWORD(v7));
  LANES128(v12).n128_u64[1] = LODWORD(v11);
  *(float32x4_t*)(a1 + 240) = v12;
  if (v7 <= 0x0.0p+0f) {
    *(_OWORD*)(a1 + 160) = (__typeof__(*(_OWORD*)(a1 + 160))){0};
    if (v9 <= 0x0.0p+0f) {
      goto LABEL_3;
    }
  LABEL_7:
    v16 = vmulq_n_f32(a2[1], 0x1.0000000000000p+0f / v9);
    v13 = (__typeof__(v13)){0};
    *(float32x4_t*)(a1 + 176) = v16;
    if (v11 <= 0x0.0p+0f) {
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  *(float32x4_t*)(a1 + 160) = vmulq_n_f32(*a2, 0x1.0000000000000p+0f / v7);
  if (v9 > 0x0.0p+0f) {
    goto LABEL_7;
  }
LABEL_3:
  v13 = (__typeof__(v13)){0};
  *(_OWORD*)(a1 + 176) = (__typeof__(*(_OWORD*)(a1 + 176))){0};
  if (v11 > 0x0.0p+0f) {
  LABEL_4:
    v13 = vmulq_n_f32(a2[2], 0x1.0000000000000p+0f / v11);
  }
LABEL_5:
  *(float32x4_t*)(a1 + 192) = v13;
  v14 = a2[3];
  *(_DWORD*)(a1 + 24) = 1;
  *(float32x4_t*)(a1 + 208) = v14;
  result = vmulq_f32(v12, *(float32x4_t*)(a1 + 288));
  *(float32x4_t*)(a1 + 320) = result;
  return result;
}

#pragma GCC visibility pop
