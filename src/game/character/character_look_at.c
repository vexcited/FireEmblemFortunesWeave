#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 CharacterTrailModule_d3d7a0(_QWORD, _QWORD, _QWORD);
__int64 CharacterTrailModule_d3d960(long double);
__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char** GameRoutine_108c640(int);
extern __int64 (*GameData_2009400[])();
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterLookAt_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 GameData_21d8778;
extern int GameData_21d92e0;
void CharacterLookAt_10b7fc0(__int64 a1);
__n128 CharacterLookAt_Destructor(__int64 a1);
char** game_character_CharacterLookAt_Startup_lambda2_Invoke(__int64 a1,
                                                             int* a2);
__int64 game_character_CharacterLookAt_Startup_lambda3_Invoke(__int64 result,
                                                              __int64 a2);
extern __int64 GameData_2235728;
float powf(_QWORD, float, float);
float32x2_t* CharacterLookAt_Unknown5(float32x2_t* result);
__attribute__((swiftcall)) void math_Quat_Slerp(PSEUDO_X8, float32x4_t* result,
                                                float32x4_t*, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN GameData_21a5680;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a5670;
float32x4_t game_character_CharacterLookAt_Startup_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2,
                                                                  __int64* a3);

void CharacterLookAt_10b7fc0(__int64 a1)
{
  long double v2;
  int v3;
  __int64 v4;
  char* v5;
  char* v6;
  __int64 v7;

  GameRoutine_109d5e0((unsigned int*)(a1 + 168));
  GameRoutine_109d5e0((unsigned int*)(a1 + 200));
  *(__n128*)&v2 = GameRoutine_109d5e0((unsigned int*)(a1 + 232));
  *(_QWORD*)(a1 + 264) = 0;
  v3 = *(_DWORD*)(a1 + 440);
  if (v3 != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 72LL);
    v5 = *(char**)(v4 + 56);
    v6 = *(char**)(v4 + 64);
    if (v5 != v6) {
      do {
        if (v3 == *(_DWORD*)v5) {
          *(_DWORD*)v5 = 0;
        }
        v5 += 80;
      } while (v5 != v6);
      v5 = *(char**)(v4 + 56);
      v6 = *(char**)(v4 + 64);
    }
    if (0xCCCCCCCCCCCCCCCDLL * ((v6 - v5) >> 4) >= 0x40) {
      v7 = CharacterTrailModule_d3d960(v2);
      CharacterTrailModule_d3d7a0(v4 + 56, v7, *(_QWORD*)(v4 + 64));
    }
  }
  *(_DWORD*)(a1 + 96) |= 1u;
}

float32x2_t* CharacterLookAt_Unknown5(float32x2_t* result)
{
  unsigned int v1;
  unsigned __int64 v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float32x2_t* v9;
  float v10;
  float v11;
  bool v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float32x2_t* v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float32x2_t* v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float32x2_t* v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float32x2_t* v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float32x2_t* v41;
  float v42;
  float v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64* v47;
  float32x2_t v48;
  __int64 v49;

  v1 = LANES64(result[12]).n64_u32[0] & 0xFFFFFFF7 |
       (8 * (*(_BYTE*)(GameData_2235728 + 33) & 1));
  v2 = LANES64(result[1]).n64_u64[0];
  LANES64(result[12]).n64_u32[0] = v1;
  v3 = (float)(*(float*)(*(_QWORD*)(v2 + 496) + 16LL) * 0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  if (v3 > 0x0.0p+0f) {
    v4 = LANES64(result[13]).n64_f32[0];
    v5 = LANES64(result[13]).n64_f32[1];
    if (v1 != 0) {
      v6 = 0x0.0p+0f;
    }
    else {
      v6 = 0x1.0000000000000p+0f;
    }
    v7 = v6 - v4;
    if (v5 <= 0x0.0p+0f) {
      v8 = 0x0.0p+0f;
    }
    else {
      v8 = 0x1.0000000000000p+0f;
      if (v5 < 0x1.0000000000000p+0f) {
        v9 = result;
        v8 = 0x1.0000000000000p+0f - powf(result, 0x1.0000000000000p+0f - v5,
                                          v3 * 0x1.df851e0000000p+4f);
        v4 = LANES64(v9[13]).n64_f32[0];
        result = v9;
      }
    }
    v10 = v4 + (float)(v7 * v8);
    if (v10 < 0x1.0624de0000000p-10f) {
      v10 = 0x0.0p+0f;
    }
    v11 = LANES64(result[12]).n64_f32[1];
    if (v10 > 0x1.ff7cee0000000p-1f) {
      v10 = 0x1.0000000000000p+0f;
    }
    LANES64(result[13]).n64_f32[0] = v10;
    if (v11 <= 0x0.0p+0f || v10 > 0x0.0p+0f) {
      v12 = v10 > 0x0.0p+0f;
      if (v11 > 0x0.0p+0f) {
        v12 = false;
      }
    }
    else {
      v12 = true;
    }
    LANES64(result[14]).n64_u8[0] = v12;
    v1 = LANES64(result[12]).n64_u32[0];
    LANES64(result[12]).n64_f32[1] = v10;
  }
  if (v1 == 0) {
    v13 = LANES64(result[57]).n64_f32[0];
    v14 = LANES64(result[57]).n64_f32[1];
    v15 = (float)(*(float*)(*(_QWORD*)(LANES64(result[1]).n64_u64[0] + 496) +
                            16LL) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
    if (v13 == v14) {
      goto LABEL_31;
    }
    v16 = LANES64(result[58]).n64_f32[0];
    if (v16 > 0x0.0p+0f) {
      if (v16 >= 0x1.0000000000000p+0f) {
      LABEL_28:
        v13 = v14;
        goto LABEL_29;
      }
      if (v15 <= 0x0.0p+0f) {
        goto LABEL_29;
      }
      v17 = result;
      v18 = 0x1.0000000000000p+0f - powf(result, 0x1.0000000000000p+0f - v16,
                                         v15 * 0x1.df851e0000000p+4f);
      if (v18 > 0x0.0p+0f) {
        result = v17;
        if (v18 < 0x1.0000000000000p+0f) {
          v13 = v13 + (float)((float)(v14 - v13) * v18);
          goto LABEL_29;
        }
        goto LABEL_28;
      }
      result = v17;
    }
  LABEL_29:
    v19 = LANES64(result[57]).n64_f32[1];
    LANES64(result[57]).n64_f32[0] = v13;
    if (vabds_f32(v19, v13) < 0x1.a36e2e0000000p-14f) {
      LANES64(result[57]).n64_f32[0] = v19;
    }
  LABEL_31:
    v20 = LANES64(result[58]).n64_f32[1];
    v21 = LANES64(result[59]).n64_f32[0];
    if (v20 == v21) {
      goto LABEL_41;
    }
    v22 = LANES64(result[59]).n64_f32[1];
    if (v22 > 0x0.0p+0f) {
      if (v22 >= 0x1.0000000000000p+0f) {
      LABEL_38:
        v20 = v21;
        goto LABEL_39;
      }
      if (v15 <= 0x0.0p+0f) {
        goto LABEL_39;
      }
      v23 = result;
      v24 = 0x1.0000000000000p+0f - powf(result, 0x1.0000000000000p+0f - v22,
                                         v15 * 0x1.df851e0000000p+4f);
      if (v24 > 0x0.0p+0f) {
        result = v23;
        if (v24 < 0x1.0000000000000p+0f) {
          v20 = v20 + (float)((float)(v21 - v20) * v24);
          goto LABEL_39;
        }
        goto LABEL_38;
      }
      result = v23;
    }
  LABEL_39:
    v25 = LANES64(result[59]).n64_f32[0];
    LANES64(result[58]).n64_f32[1] = v20;
    if (vabds_f32(v25, v20) < 0x1.a36e2e0000000p-14f) {
      LANES64(result[58]).n64_f32[1] = v25;
    }
  LABEL_41:
    v26 = LANES64(result[60]).n64_f32[0];
    v27 = LANES64(result[60]).n64_f32[1];
    if (v26 == v27) {
      goto LABEL_51;
    }
    v28 = LANES64(result[61]).n64_f32[0];
    if (v28 > 0x0.0p+0f) {
      if (v28 >= 0x1.0000000000000p+0f) {
      LABEL_48:
        v26 = v27;
        goto LABEL_49;
      }
      if (v15 <= 0x0.0p+0f) {
        goto LABEL_49;
      }
      v29 = result;
      v30 = 0x1.0000000000000p+0f - powf(result, 0x1.0000000000000p+0f - v28,
                                         v15 * 0x1.df851e0000000p+4f);
      if (v30 > 0x0.0p+0f) {
        result = v29;
        if (v30 < 0x1.0000000000000p+0f) {
          v26 = v26 + (float)((float)(v27 - v26) * v30);
          goto LABEL_49;
        }
        goto LABEL_48;
      }
      result = v29;
    }
  LABEL_49:
    v31 = LANES64(result[60]).n64_f32[1];
    LANES64(result[60]).n64_f32[0] = v26;
    if (vabds_f32(v31, v26) < 0x1.a36e2e0000000p-14f) {
      LANES64(result[60]).n64_f32[0] = v31;
    }
  LABEL_51:
    v32 = LANES64(result[61]).n64_f32[1];
    v33 = LANES64(result[62]).n64_f32[0];
    if (v32 == v33) {
      goto LABEL_61;
    }
    v34 = LANES64(result[62]).n64_f32[1];
    if (v34 > 0x0.0p+0f) {
      if (v34 >= 0x1.0000000000000p+0f) {
      LABEL_58:
        v32 = v33;
        goto LABEL_59;
      }
      if (v15 <= 0x0.0p+0f) {
        goto LABEL_59;
      }
      v35 = result;
      v36 = 0x1.0000000000000p+0f - powf(result, 0x1.0000000000000p+0f - v34,
                                         v15 * 0x1.df851e0000000p+4f);
      if (v36 > 0x0.0p+0f) {
        result = v35;
        if (v36 < 0x1.0000000000000p+0f) {
          v32 = v32 + (float)((float)(v33 - v32) * v36);
          goto LABEL_59;
        }
        goto LABEL_58;
      }
      result = v35;
    }
  LABEL_59:
    v37 = LANES64(result[62]).n64_f32[0];
    LANES64(result[61]).n64_f32[1] = v32;
    if (vabds_f32(v37, v32) < 0x1.a36e2e0000000p-14f) {
      LANES64(result[61]).n64_f32[1] = v37;
    }
  LABEL_61:
    v38 = LANES64(result[18]).n64_f32[0];
    v39 = LANES64(result[18]).n64_f32[1];
    if (v38 == v39) {
    LABEL_71:
      v44 = LANES64(result[33]).n64_u64[0];
      LANES64(result[19]).n64_f32[1] =
          LANES64(result[19]).n64_f32[1] +
          (float)((float)(LANES64(result[20]).n64_f32[0] -
                          LANES64(result[19]).n64_f32[1]) *
                  LANES64(result[20]).n64_f32[1]);
      if (v44 != 0) {
        v45 = *(_QWORD*)(*(_QWORD*)(v44 + 240) + 24LL);
        v46 = *(__int64**)(v45 + 312);
        v47 = *(__int64**)(v45 + 320);
        if (v46 != v47) {
          LANES64(v48).n64_u64[0] =
              LANES64_OF(vadd_f32(result[38], result[39])).n64_u64[0];
          do {
            v49 = *v46;
            v46 += 2;
            result = (float32x2_t*)(*(__int64 (**)(
                __int64, const char*, __int64, double))(*(_QWORD*)v49 + 24LL))(
                v49, "EyeLookAt", 9, LANES64(v48).n64_f64[0]);
          } while (v46 != v47);
        }
      }
      return result;
    }
    v40 = LANES64(result[19]).n64_f32[0];
    if (v40 > 0x0.0p+0f) {
      if (v40 >= 0x1.0000000000000p+0f) {
      LABEL_68:
        v38 = v39;
        goto LABEL_69;
      }
      if (v15 <= 0x0.0p+0f) {
        goto LABEL_69;
      }
      v41 = result;
      v42 = 0x1.0000000000000p+0f - powf(result, 0x1.0000000000000p+0f - v40,
                                         v15 * 0x1.df851e0000000p+4f);
      if (v42 > 0x0.0p+0f) {
        result = v41;
        if (v42 < 0x1.0000000000000p+0f) {
          v38 = v38 + (float)((float)(v39 - v38) * v42);
          goto LABEL_69;
        }
        goto LABEL_68;
      }
      result = v41;
    }
  LABEL_69:
    v43 = LANES64(result[18]).n64_f32[1];
    LANES64(result[18]).n64_f32[0] = v38;
    if (vabds_f32(v43, v38) < 0x1.a36e2e0000000p-14f) {
      LANES64(result[18]).n64_f32[0] = v43;
    }
    goto LABEL_71;
  }
  return result;
}

__n128 CharacterLookAt_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_character_CharacterLookAt_vtable;
  *(_QWORD*)(a1 + 56) = GameData_2009400;
  CharacterLookAt_10b7fc0(a1);
  GameRoutine_109d5e0((unsigned int*)(a1 + 232));
  v2 = *(_QWORD*)(a1 + 256);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 200));
  v3 = *(_QWORD*)(a1 + 224);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  result = GameRoutine_109d5e0((unsigned int*)(a1 + 168));
  v5 = *(_QWORD*)(a1 + 192);
  if (v5 != 0) {
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 56) = kaneko_WPHolder_vtable;
  if (v6 != 0) {
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = *(_QWORD*)(a1 + 72);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v7 + 16LL))(
        v7, *(long double*)&result);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v8 != 0) {
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

float32x4_t game_character_CharacterLookAt_Startup_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2,
                                                                  __int64* a3)
{
  float32x4_t* v5;
  float32x4_t result;
  __int64 v7;
  unsigned __int64 v8;
  float32x4_t v9;
  float32x4_t v10;
  unsigned __int64 v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int v18;
  __int64 v19;
  float32x4_t v20;
  float32x4_t* v23;
  int8x16x2_t v24;
  int8x16x2_t v25;
  int8x16x2_t v26;

  v5 = *(float32x4_t**)(a1 + 8);
  PSEUDO_LOW_LANE128(result, n128_u32, LANES128(v5[6]).n128_u32[2]);
  if (LANES128(result).n128_f32[0] > 0x0.0p+0f &&
      (LANES128(v5[1]).n128_u8[0] & 1) != 0) {
    *(_DWORD*)a3[2] &= 0x33FFFFFFu;
    v7 = *a3;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                              memory_order_acquire) &
         1) == 0) {
      v23 = v5;
      v18 = __cxa_guard_acquire(&GameData_21a5680);
      v5 = v23;
      if (v18 != 0) {
        v19 = *((_QWORD*)GameData_212c2f8 + 1);
        *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
        *((_QWORD*)&GameData_21a5670 + 1) = v19;
        __cxa_guard_release(&GameData_21a5680);
        v5 = v23;
      }
    }
    math_Quat_Slerp((void*)(&v20), (float32x4_t*)&GameData_21a5670, v5 + 17,
                    LANES128(v5[30]).n128_f32[0]);
    v25.val[1] = v20;
    LANES128(v25.val[1]).n128_u32[3] = 0;
    v8 = LANES64_OF(
             vqtbl1_s8(v25.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
             .n64_u64[0];
    LANES128(v9).n128_u64[0] =
        LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0])))
            .n64_u64[0];
    LANES128(v10).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v25.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
            .n64_u64[0];
    v11 = LANES64_OF(
              vqtbl1_s8(v25.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    LANES128(v9).n128_u64[1] = v8;
    LANES128(v10).n128_u64[1] = v11;
    v12 = vmulq_f32(v9, v9);
    v24.val[1] = vmulq_f32(v10, v10);
    v24.val[0] = vsubq_f32(
        COERCE_AS(float32x4_t, GameData_1a837f0),
        vaddq_f32(vaddq_f32(v24.val[1], v24.val[1]), vaddq_f32(v12, v12)));
    LANES128(v13).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v25.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v13).n128_u64[1] = v8;
    v14 = vmulq_f32(v13, v25.val[1]);
    v15 = vaddq_f32(v14, v14);
    LANES128(v25.val[1]).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v25.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v25.val[1]).n128_u64[1] = v11;
    v16 = vmulq_laneq_f32(v25.val[1], v20, 3);
    v17 = vaddq_f32(v16, v16);
    v26.val[0] = vaddq_f32(v15, v17);
    v26.val[1] = vsubq_f32(v15, v17);
    LANES128(v25.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v26, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
            .n64_u64[0];
    LANES128(v24.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v26, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v25.val[1]).n128_i8[8] =
        vqtbl2_s8(v26, COERCE_AS(int8x8_t, 0x706050413121110LL));
    *(int8x8_t*)&LANES128(v24.val[1]).n128_i8[8] =
        vqtbl2_s8(v26, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
    v25.val[0] = v24.val[0];
    LANES128(v15).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v25, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v15).n128_i8[8] =
        vqtbl2_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
    LANES128(v26.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v25, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v26.val[0]).n128_i8[8] =
        vqtbl2_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
    LANES128(v25.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v24, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
            .n64_u64[0];
    v25.val[1] = *(int8x16_t*)(v7 + 32);
    *(int8x8_t*)&LANES128(v25.val[0]).n128_i8[8] =
        vqtbl2_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
    result = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v15, COERCE_FLOAT(*(_OWORD*)(v7 + 16))),
                       v26.val[0], *(float32x2_t*)(v7 + 16), 1),
        v25.val[0], *(float32x4_t*)(v7 + 16), 2);
    *(float32x4_t*)v7 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v15, COERCE_FLOAT(*(_OWORD*)v7)), v26.val[0],
                       *(float32x2_t*)v7, 1),
        v25.val[0], *(float32x4_t*)v7, 2);
    *(float32x4_t*)(v7 + 16) = result;
    *(float32x4_t*)(v7 + 32) = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(v15, LANES128(v25.val[1]).n128_f32[0]), v26.val[0],
            COERCE_AS(float32x2_t, LANES128(v25.val[1]).n128_u64[0]), 1),
        v25.val[0], v25.val[1], 2);
  }
  return result;
}

char** game_character_CharacterLookAt_Startup_lambda2_Invoke(__int64 a1,
                                                             int* a2)
{
  int v2;
  float* v3;
  char** result;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  float v9;
  int v15;
  int v16;

  v2 = *a2;
  v3 = *(float**)(a1 + 8);
  result = GameRoutine_108c640(*a2);
  v5 = *((_DWORD*)result + 6);
  v6 = *((_DWORD*)result + 7);
  v7 = *((_DWORD*)result + 8);
  v8 = 508;
  v3[115] = *((float*)result + 5);
  v9 = 0.0;
  *((_DWORD*)v3 + 118) = v5;
  *((_DWORD*)v3 + 121) = v6;
  *((_DWORD*)v3 + 124) = v7;
  if (v2 > -270062628) {
    if (v2 <= -77626399) {
      if (v2 != -270062627 && v2 != -93581017) {
        goto LABEL_9;
      }
    }
    else if (v2 != -77626398 && v2 != 1400556095 && v2 != 1715476756) {
      goto LABEL_9;
    }
  }
  else if (((unsigned int)(v2 + 1193575789) > 0x10 ||
            ((1 << (v2 + 109)) & 0x10403) == 0) &&
           v2 != -972548316) {
  LABEL_9:
    v9 = 1.0;
    v8 = 512;
  }
  v3[37] = v9;
  v15 = *(_DWORD*)(GameData_21d8778 + v8);
  v16 = *((_DWORD*)v3 + 108);
  *((_DWORD*)v3 + 38) = v15;
  if (v16 == 1) {
    *((_DWORD*)v3 + 108) = 2;
  }
  return result;
}

__int64 game_character_CharacterLookAt_Startup_lambda3_Invoke(__int64 result,
                                                              __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v5;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0 && *(_QWORD*)(v3 + 8) != -1 && *(_QWORD*)(v2 + 40) != 0) {
    if (*(_BYTE*)(*(_QWORD*)a2 + 32LL) != 1) {
      if (*(_DWORD*)(v2 + 432) == 3) {
        return result;
      }
      v5 = 2;
      goto LABEL_12;
    }
    if (GameData_21d92e0 != 4 && (*(_DWORD*)(v2 + 432) & 0xFFFFFFFE) != 2) {
      v5 = 1;
    LABEL_12:
      *(_DWORD*)(v2 + 432) = v5;
    }
  }
  return result;
}

#pragma GCC visibility pop
