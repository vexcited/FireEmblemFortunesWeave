#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CalculateAllocatedSizeHeap_5c7020(
    __int64 result, __int64 (*)(__int64*, _QWORD, __int64), __int64);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5d5380(__int64 result, float*, __int64, __int64, char,
                           long double);
__int64 GameRoutine_5ded20(_DWORD*, __int64, __int64);
__int64 GameRoutine_bc3cf0();
__int64 nn_vfx_5d6ac0(__int64 result, float*, __int64, __int64, char,
                      long double);
__int64 nn_vfx_5d8200(__int64 result, float*, __int64, __int64, char);
__int64 nn_vfx_5d9c60(__int64 result, float*, __int64, __int64, char);
bool GameRoutine_5d23a0(__int64, __int64, __int64, unsigned int, char, __int64);
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1af96e6;
extern char GameData_1af96e7;
extern char GameData_1af96e8;
__int64 nn_vfx_5c8fa0(__int64 a1);
bool nn_vfx_5d39a0(__int64 a1, __int64* a2, int* a3, float32x4_t* a4, int a5,
                   int a6, long double a7);
__int64 nn_vfx_bc7ac0(__int64 a1, __int64 a2);

__int64 nn_vfx_5c8fa0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = a1 + 292;
  *(_DWORD*)(a1 + 16) = 0;
  *(_QWORD*)(v3 + 72) = -1;
  *(_QWORD*)(v3 + 80) = -1;
  *(_QWORD*)(v3 + 56) = -1;
  *(_QWORD*)(v3 + 64) = -1;
  *(_QWORD*)(v3 + 40) = -1;
  *(_QWORD*)(v3 + 48) = -1;
  *(_QWORD*)(v3 + 24) = -1;
  *(_QWORD*)(v3 + 32) = -1;
  *(_QWORD*)(v3 + 8) = -1;
  *(_QWORD*)(v3 + 16) = -1;
  *(_QWORD*)v3 = -1;
  GameRoutine_5ded20((_DWORD*)v3, v2, (__int64)"sysViewUniformBlock");
  GameRoutine_5ded20((_DWORD*)(a1 + 300), *(_QWORD*)(a1 + 8),
                     (__int64)"sysEmitterStaticUniformBlock");
  GameRoutine_5ded20((_DWORD*)(a1 + 308), *(_QWORD*)(a1 + 8),
                     (__int64)"sysEmitterDynamicUniformBlock");
  GameRoutine_5ded20((_DWORD*)(a1 + 316), *(_QWORD*)(a1 + 8),
                     (__int64)"sysEmitterFieldUniformBlock");
  GameRoutine_5ded20((_DWORD*)(a1 + 324), *(_QWORD*)(a1 + 8),
                     (__int64)"sysEmitterPluginUniformBlock");
  GameRoutine_5ded20((_DWORD*)(a1 + 332), *(_QWORD*)(a1 + 8),
                     (__int64)"sysCustomShaderReservedUniformBlockParam");
  GameRoutine_5ded20((_DWORD*)(a1 + 340), *(_QWORD*)(a1 + 8),
                     (__int64)"sysCustomShaderUniformBlock0");
  GameRoutine_5ded20((_DWORD*)(a1 + 348), *(_QWORD*)(a1 + 8),
                     (__int64)"sysCustomShaderUniformBlock1");
  GameRoutine_5ded20((_DWORD*)(a1 + 356), *(_QWORD*)(a1 + 8),
                     (__int64)"sysCustomShaderUniformBlock2");
  result = GameRoutine_5ded20((_DWORD*)(a1 + 364), *(_QWORD*)(a1 + 8),
                              (__int64)"sysCustomShaderUniformBlock3");
  if (*(_DWORD*)(a1 + 292) != -1) {
    *(_DWORD*)(a1 + 16) |= 1u;
  }
  if (*(_DWORD*)(a1 + 296) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x8000u;
  }
  if (*(_DWORD*)(a1 + 300) != -1) {
    *(_DWORD*)(a1 + 16) |= 2u;
  }
  if (*(_DWORD*)(a1 + 304) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x10000u;
  }
  if (*(_DWORD*)(a1 + 308) != -1) {
    *(_DWORD*)(a1 + 16) |= 4u;
  }
  if (*(_DWORD*)(a1 + 312) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x20000u;
  }
  if (*(_DWORD*)(a1 + 316) != -1) {
    *(_DWORD*)(a1 + 16) |= 8u;
  }
  if (*(_DWORD*)(a1 + 320) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x40000u;
  }
  if (*(_DWORD*)(a1 + 324) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x10u;
  }
  if (*(_DWORD*)(a1 + 328) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x80000u;
  }
  if (*(_DWORD*)(a1 + 332) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x20u;
  }
  if (*(_DWORD*)(a1 + 336) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x100000u;
  }
  if (*(_DWORD*)(a1 + 340) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x40u;
  }
  if (*(_DWORD*)(a1 + 344) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x200000u;
  }
  if (*(_DWORD*)(a1 + 348) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x80u;
  }
  if (*(_DWORD*)(a1 + 352) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x400000u;
  }
  if (*(_DWORD*)(a1 + 356) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x100u;
  }
  if (*(_DWORD*)(a1 + 360) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x800000u;
  }
  if (*(_DWORD*)(a1 + 364) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x200u;
  }
  if (*(_DWORD*)(a1 + 368) != -1) {
    *(_DWORD*)(a1 + 16) |= 0x1000000u;
  }
  return result;
}

bool nn_vfx_5d39a0(__int64 a1, __int64* a2, int* a3, float32x4_t* a4, int a5,
                   int a6, long double a7)
{
  signed __int32 v7;
  signed __int32 v8;
  float32x4_t* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 i;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  float* v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  unsigned __int64 v28;
  float32x4_t v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned int* v32;
  unsigned __int64 v33;
  unsigned int* v34;
  unsigned int* v35;
  unsigned int* v36;
  unsigned int* v37;
  unsigned int* v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 j;
  __int64 v44;
  char v45;
  char v46;
  char v47;
  char v48;

  v7 = LANES128(a4[2]).n128_i32[2];
  v8 = *(_DWORD*)(a1 + 4792);
  if (v7 > v8) {
    GameRoutine_5c02c0(
        "Particle sort has failed. More buffer size is needed. \n");
    *a2 = 0;
    *a3 = 0;
    return v7 <= v8;
  }
  *a2 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 2536LL * a6 + 2520);
  *a3 = 0;
  v11 = (float32x4_t*)LANES128(a4[12]).n128_u64[0];
  if (*(_BYTE*)(LANES128(a4[10]).n128_u64[0] + 1874) == 0) {
    v11 = a4 + 29;
  }
  if (a5 != 3) {
    if (a5 != 2) {
      if (a5 == 1) {
        v12 = LANES128(a4[2]).n128_i32[2];
        if (v12 > 0) {
          v13 = 12;
          v14 = 0;
          v15 = 0;
          for (i = 0; i < v12; ++i) {
            if ((float)(*(float*)&a7 -
                        *(float*)(LANES128(a4[11]).n128_u64[0] + v14 + 8)) <
                *(float*)(LANES128(a4[11]).n128_u64[0] + v14 + 12)) {
              *(_DWORD*)(*a2 + 8LL * v15) =
                  *(_DWORD*)(LANES128(*(v11)).n128_u64[1] + v13);
              *(_DWORD*)(*a2 + 8LL * *a3 + 4) = i;
              v15 = *a3 + 1;
              *a3 = v15;
              v12 = LANES128(a4[2]).n128_i32[2];
            }
            v13 += 16;
            v14 += 32;
          }
          if (v15 != 0) {
            nn_vfx_5d6ac0(*a2, (float*)(*a2 + 8LL * v15), (__int64)&v46,
                          (2 * __clz(v15)) ^ 0x7E, 1, a7);
          }
        }
      }
      return v7 <= v8;
    }
    v18 = LANES128(a4[2]).n128_i32[2];
    if (v18 < 1) {
      return v7 <= v8;
    }
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 8;
    v23 = (float*)(*(_QWORD*)(a1 + 16) + 2536LL * a6 + 1656);
    while (1) {
      if ((float)(*(float*)&a7 -
                  *(float*)(LANES128(a4[11]).n128_u64[0] + v19 + 8)) >=
          *(float*)(LANES128(a4[11]).n128_u64[0] + v19 + 12)) {
        goto LABEL_19;
      }
      v30 = LANES128(a4[33]).n128_u64[0];
      v31 = LANES128(a4[33]).n128_u64[1];
      v32 = (unsigned int*)(v30 + v22);
      v33 = LANES128(a4[34]).n128_u64[0];
      v34 = (unsigned int*)(v31 + v22);
      v35 = (unsigned int*)(v33 + v22);
      if (*(_BYTE*)(LANES128(a4[10]).n128_u64[0] + 1875) == 2) {
        LANES128(v24).n128_u64[0] =
            *(v32 - 2) | ((unsigned __int64)*(v34 - 2) << 32);
        LANES128(v24).n128_u64[1] = *(v35 - 2);
        LANES128(v25).n128_u64[0] =
            *(v32 - 1) | ((unsigned __int64)*(v34 - 1) << 32);
        LANES128(v25).n128_u64[1] = *(v35 - 1);
        LANES128(v26).n128_u64[0] = *v32 | ((unsigned __int64)*v34 << 32);
        LANES128(v26).n128_u64[1] = *v35;
        LANES128(v27).n128_u64[0] = LANES128(a4[55]).n128_u64[0];
        v28 = LANES128(a4[55]).n128_u32[2];
      }
      else {
        if (*(_BYTE*)(LANES128(a4[10]).n128_u64[0] + 1875) == 0) {
          v24 = a4[52];
          v25 = a4[53];
          v26 = a4[54];
          v27 = a4[55];
          goto LABEL_18;
        }
        v36 = (unsigned int*)(v30 + v22);
        v37 = (unsigned int*)(v31 + v22);
        v38 = (unsigned int*)(v33 + v22);
        LANES128(v24).n128_u64[0] =
            *(v32 - 2) | ((unsigned __int64)*(v34 - 2) << 32);
        v28 = v38[1];
        LANES128(v24).n128_u64[1] = *(v35 - 2);
        LANES128(v25).n128_u64[0] =
            *(v36 - 1) | ((unsigned __int64)*(v37 - 1) << 32);
        LANES128(v25).n128_u64[1] = *(v38 - 1);
        LANES128(v26).n128_u64[0] = *v36 | ((unsigned __int64)*v37 << 32);
        LANES128(v26).n128_u64[1] = *v38;
        LANES128(v27).n128_u64[0] = v36[1] | ((unsigned __int64)v37[1] << 32);
      }
      LANES128(v27).n128_u64[1] = v28;
    LABEL_18:
      v29 = vaddq_f32(
          v27,
          vmlaq_n_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v24, COERCE_FLOAT(
                                       *(_QWORD*)(LANES128(*(v11)).n128_u64[0] +
                                                  v22 - 8))),
                  v25, *(float32x2_t*)(LANES128(*(v11)).n128_u64[0] + v22 - 8),
                  1),
              v26, *(float*)(LANES128(*(v11)).n128_u64[0] + v22)));
      *(float*)(*a2 + 8LL * v20) =
          v23[3] +
          (float)((float)(vmuls_lane_f32(
                              v23[1],
                              COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                              1) +
                          (float)(*v23 * LANES128(v29).n128_f32[0])) +
                  (float)(v23[2] * LANES128(v29).n128_f32[2]));
      *(_DWORD*)(*a2 + 8LL * *a3 + 4) = v21;
      v20 = *a3 + 1;
      *a3 = v20;
      v18 = LANES128(a4[2]).n128_i32[2];
    LABEL_19:
      ++v21;
      v22 += 16;
      v19 += 32;
      if (v21 >= v18) {
        v44 = *a2;
        if (*(_BYTE*)(*(_QWORD*)(LANES128(a4[35]).n128_u64[1] + 16) + 2203LL) !=
            0) {
          if (v20 != 0) {
            nn_vfx_5d8200(v44, (float*)(v44 + 8LL * v20), (__int64)&v47,
                          (2 * __clz(v20)) ^ 0x7E, 1);
          }
        }
        else if (v20 != 0) {
          nn_vfx_5d9c60(v44, (float*)(v44 + 8LL * v20), (__int64)&v48,
                        (2 * __clz(v20)) ^ 0x7E, 1);
        }
        return v7 <= v8;
      }
    }
  }
  v39 = LANES128(a4[2]).n128_i32[2];
  if (v39 > 0) {
    v40 = 12;
    v41 = 0;
    v42 = 0;
    for (j = 0; j < v39; ++j) {
      if ((float)(*(float*)&a7 -
                  *(float*)(LANES128(a4[11]).n128_u64[0] + v41 + 8)) <
          *(float*)(LANES128(a4[11]).n128_u64[0] + v41 + 12)) {
        *(_DWORD*)(*a2 + 8LL * v42) =
            *(_DWORD*)(LANES128(*(v11)).n128_u64[1] + v40);
        *(_DWORD*)(*a2 + 8LL * *a3 + 4) = j;
        v42 = *a3 + 1;
        *a3 = v42;
        v39 = LANES128(a4[2]).n128_i32[2];
      }
      v40 += 16;
      v41 += 32;
    }
    if (v42 != 0) {
      GameRoutine_5d5380(*a2, (float*)(*a2 + 8LL * v42), (__int64)&v45,
                         (2 * __clz(v42)) ^ 0x7E, 1, a7);
    }
  }
  return v7 <= v8;
}

__int64 nn_vfx_bc7ac0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 i;
  unsigned __int8* v8;
  int v9;
  char* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = *(int*)(a2 + 32);
  v4 = *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 112);
  v5 = *(unsigned int*)(v4 + 48);
  if ((int)v5 >= 1) {
    v6 = *(_QWORD*)(v4 + 40);
    for (i = 0; v5 != i; ++i) {
      v8 = *(unsigned __int8**)(v6 + 8 * i);
      v9 = *v8;
      if (v9 == 67) {
        v9 = v8[1];
        if (v9 == 77) {
          v9 = v8[2];
          if (v8[2] == 0) {
            v10 = &GameData_1af96e7;
          LABEL_15:
            v11 = (unsigned __int8)*v10;
            v9 = 0;
            goto LABEL_16;
          }
          if (v9 == 78) {
            v9 = v8[3];
            if (v8[3] == 0) {
              v10 = &GameData_1af96e8;
              goto LABEL_15;
            }
            v11 = 0;
          }
          else {
            v11 = 78;
          }
        }
        else {
          v10 = &GameData_1af96e6;
          if (v9 == 0) {
            goto LABEL_15;
          }
          v11 = 77;
        }
      }
      else {
        v11 = 67;
      }
    LABEL_16:
      if (v9 == v11) {
        goto LABEL_19;
      }
    }
  }
  LODWORD(i) = -1;
LABEL_19:
  v12 = *(_QWORD*)(a1 + 96);
  if ((_DWORD)v2 == (_DWORD)i ||
      (v13 = *(_QWORD*)(*(_QWORD*)(v12 + 152) + 8LL * (int)i)) == 0) {
    v14 = 0;
  }
  else if (*(_BYTE*)(v13 + 9) != 0) {
    v14 = v13;
  }
  else {
    v14 = 0;
  }
  GameRoutine_5d23a0(v12, *(_QWORD*)(a1 + 88),
                     *(_QWORD*)(*(_QWORD*)(a2 + 40) + 592LL), v2, 1, v14);
  return CalculateAllocatedSizeHeap_5c7020(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 96) + 152LL) + 8 * v2),
      (__int64 (*)(__int64*, _QWORD, __int64))GameRoutine_bc3cf0, 0);
}

#pragma GCC visibility pop
