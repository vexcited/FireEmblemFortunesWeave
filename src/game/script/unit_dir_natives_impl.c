#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 UnitActor_81ab40(__int64, float, float);
__int64 as_string_c_str(__int64);
extern __int64 GameData_21ca310;
unsigned __int64 GameRoutine_682bc0(_QWORD*, __int64);
unsigned __int64 unit_dir_Set(__int64 a1, unsigned __int8 a2);
__int64* game_UnitPool_Get(_BYTE*);
extern __int128 GameData_1a83090;
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
__int64 unit_dir_SetByPos_117e020(__int64 result, int a2, int a3);
unsigned __int64 unit_dir_SetByPos_117e1c0(__int64 a1, int a2, int a3);

unsigned __int64 unit_dir_Set(__int64 a1, unsigned __int8 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;

  result = as_string_c_str(a1);
  if (*(_BYTE*)result == 0) {
    return result;
  }
  result = GameRoutine_682bc0(&v15, result);
  if (v15 == 0) {
    return result;
  }
  result = *(_QWORD*)(GameData_21ca310 + 56);
  if (result == 0) {
    return result;
  }
  v4 = 250;
  while (1) {
    v5 = *(_QWORD*)(result + 440);
    if (v5 != 0) {
      v6 = *(unsigned __int8*)(v5 + 16);
      if (v6 != 9 && *(_QWORD*)(result + 392) == v15) {
        goto LABEL_25;
      }
    }
    v7 = *(_QWORD*)(result + 2664);
    if (v7 != 0) {
      v8 = *(unsigned __int8*)(v7 + 16);
      if (v8 != 9 && *(_QWORD*)(result + 2616) == v15) {
        result += 2224LL;
        if (v8 > 3) {
          return result;
        }
        goto LABEL_29;
      }
    }
    v9 = *(_QWORD*)(result + 4888);
    if (v9 != 0) {
      v6 = *(unsigned __int8*)(v9 + 16);
      if (v6 != 9 && *(_QWORD*)(result + 4840) == v15) {
        result += 4448LL;
      LABEL_25:
        if (v6 > 3) {
          return result;
        }
        goto LABEL_29;
      }
    }
    v10 = *(_QWORD*)(result + 7112);
    if (v10 != 0) {
      v11 = *(unsigned __int8*)(v10 + 16);
      if (v11 != 9 && *(_QWORD*)(result + 7064) == v15) {
        break;
      }
    }
    v12 = *(_QWORD*)(result + 9336);
    if (v12 != 0) {
      v11 = *(unsigned __int8*)(v12 + 16);
      if (v11 != 9 && *(_QWORD*)(result + 9288) == v15) {
        v13 = 8896;
        goto LABEL_28;
      }
    }
    result += 11120LL;
    v4 -= 5;
    if (v4 == 0) {
      return result;
    }
  }
  v13 = 6672;
LABEL_28:
  result += v13;
  if (v11 > 3) {
    return result;
  }
LABEL_29:
  if (a2 > 5u) {
    if (a2 > 8u) {
      if (a2 == 9) {
        v14 = 0x1.0e00000000000p+7f;
        return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
      }
      if (a2 == 12) {
        v14 = 0x1.6800000000000p+5f;
        return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
      }
    }
    else {
      if (a2 == 6) {
        v14 = 0x1.3b00000000000p+8f;
        return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
      }
      if (a2 == 8) {
        v14 = 0x1.6800000000000p+6f;
        return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
      }
    }
  LABEL_47:
    v14 = 0x0.0p+0f;
    return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
  }
  if (a2 > 1u) {
    if (a2 == 2) {
      v14 = 0x1.0e00000000000p+8f;
      return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
    }
    if (a2 == 3) {
      v14 = 0x1.c200000000000p+7f;
      return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
    }
    goto LABEL_47;
  }
  if (a2 != 0) {
    v14 = 0x1.6800000000000p+7f;
    return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
  }
  return result;
}

__int64 unit_dir_SetByPos_117e020(__int64 result, int a2, int a3)
{
  __int64 v5;
  float v6;
  float v7;
  float v8;
  float32x4_t v9;
  int8x16_t v10;
  __int64 v11;
  float v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  float32x4_t v20;
  __int128 v21;

  if ((result & 0x80000000) == 0) {
    LOBYTE(v21) = result;
    result = (__int64)game_UnitPool_Get(&v21);
    if (result != 0 && *(_QWORD*)(result + 392) != 0) {
      v5 = *(_QWORD*)(result + 440);
      if (v5 != 0 && *(unsigned __int8*)(v5 + 16) <= 3u) {
        v6 = (float)(a3 - *(char*)(result + 585));
        v7 = (float)(a2 - *(char*)(result + 584));
        if ((float)((float)(PSEUDO_UNFUSED(v6 * v6)) + (float)(v7 * v7)) >=
            0x1.0000000000000p-4f) {
          v8 = 0x0.0p+0f;
          if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                                   COERCE_AS(float32x2_t, 1065353216LL)))
                  .n64_f32[0] > 0x0.0p+0f) {
            LANES128(v9).n128_u64[0] = LODWORD(v7);
            LANES128(v9).n128_u64[1] = LODWORD(v6);
            v10 = vmulq_f32(v9, v9);
            LANES128(v10).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
                    .n64_f32[0] > 0x0.0p+0f) {
              v11 = result;
              v18 = LODWORD(v7);
              v19 = LODWORD(v6);
              v20 = v9;
              v21 = GameData_1a83090;
              v12 = math_Vec3_Angle((float32x4_t*)&v21, &v20);
              LANES128(v13).n128_u64[0] = v18;
              result = v11;
              LANES128(v13).n128_u64[1] = v19;
              LANES128(v14).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v15).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v16).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v14).n128_i8[8] =
                  vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                            COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              LANES128(v17).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v16).n128_i8[8] =
                  vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              *(int8x8_t*)&LANES128(v15).n128_i8[8] =
                  vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              *(int8x8_t*)&LANES128(v17).n128_i8[8] =
                  vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                            COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              if (LANES128_OF(vmlsq_f32(vmulq_f32(v14, v15), v16, v17))
                      .n128_f32[1] < 0x0.0p+0f) {
                v12 = -v12;
              }
              v8 = v12 * 0x1.ca5dc00000000p+5f;
            }
          }
          return UnitActor_81ab40(result, v8, -0x1.0000000000000p+0f);
        }
      }
    }
  }
  return result;
}

unsigned __int64 unit_dir_SetByPos_117e1c0(__int64 a1, int a2, int a3)
{
  unsigned __int64 result;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float32x4_t v19;
  int8x16_t v20;
  unsigned __int64 v21;
  float v22;
  int8x16_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  float32x4_t v30;
  __int128 v31;

  result = as_string_c_str(a1);
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_682bc0(&v31, result);
    if ((_QWORD)v31 != 0) {
      result = *(_QWORD*)(GameData_21ca310 + 56);
      if (result != 0) {
        v6 = 250;
        while (1) {
          v7 = *(_QWORD*)(result + 440);
          if (v7 != 0) {
            v8 = *(unsigned __int8*)(v7 + 16);
            if (v8 != 9 && *(_QWORD*)(result + 392) == (_QWORD)v31) {
              goto LABEL_25;
            }
          }
          v9 = *(_QWORD*)(result + 2664);
          if (v9 != 0) {
            v10 = *(unsigned __int8*)(v9 + 16);
            if (v10 != 9 && *(_QWORD*)(result + 2616) == (_QWORD)v31) {
              result += 2224LL;
              if (v10 > 3) {
                return result;
              }
              goto LABEL_29;
            }
          }
          v11 = *(_QWORD*)(result + 4888);
          if (v11 != 0) {
            v8 = *(unsigned __int8*)(v11 + 16);
            if (v8 != 9 && *(_QWORD*)(result + 4840) == (_QWORD)v31) {
              result += 4448LL;
            LABEL_25:
              if (v8 > 3) {
                return result;
              }
              goto LABEL_29;
            }
          }
          v12 = *(_QWORD*)(result + 7112);
          if (v12 != 0) {
            v13 = *(unsigned __int8*)(v12 + 16);
            if (v13 != 9 && *(_QWORD*)(result + 7064) == (_QWORD)v31) {
              break;
            }
          }
          v14 = *(_QWORD*)(result + 9336);
          if (v14 != 0) {
            v13 = *(unsigned __int8*)(v14 + 16);
            if (v13 != 9 && *(_QWORD*)(result + 9288) == (_QWORD)v31) {
              v15 = 8896;
              goto LABEL_28;
            }
          }
          result += 11120LL;
          v6 -= 5;
          if (v6 == 0) {
            return result;
          }
        }
        v15 = 6672;
      LABEL_28:
        result += v15;
        if (v13 > 3) {
          return result;
        }
      LABEL_29:
        v16 = (float)(a3 - *(char*)(result + 585));
        v17 = (float)(a2 - *(char*)(result + 584));
        if ((float)((float)(PSEUDO_UNFUSED(v16 * v16)) + (float)(v17 * v17)) >=
            0x1.0000000000000p-4f) {
          v18 = 0x0.0p+0f;
          if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                                   COERCE_AS(float32x2_t, 1065353216LL)))
                  .n64_f32[0] > 0x0.0p+0f) {
            LANES128(v19).n128_u64[0] = LODWORD(v17);
            LANES128(v19).n128_u64[1] = LODWORD(v16);
            v20 = vmulq_f32(v19, v19);
            LANES128(v20).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                    .n64_f32[0] > 0x0.0p+0f) {
              v21 = result;
              v28 = LODWORD(v17);
              v29 = LODWORD(v16);
              v30 = v19;
              v31 = GameData_1a83090;
              v22 = math_Vec3_Angle((float32x4_t*)&v31, &v30);
              LANES128(v23).n128_u64[0] = v28;
              result = v21;
              LANES128(v23).n128_u64[1] = v29;
              LANES128(v24).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v25).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v26).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v24).n128_i8[8] =
                  vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                            COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              LANES128(v27).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v26).n128_i8[8] =
                  vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              *(int8x8_t*)&LANES128(v25).n128_i8[8] =
                  vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              *(int8x8_t*)&LANES128(v27).n128_i8[8] =
                  vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                            COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              if (LANES128_OF(vmlsq_f32(vmulq_f32(v24, v25), v26, v27))
                      .n128_f32[1] < 0x0.0p+0f) {
                v22 = -v22;
              }
              v18 = v22 * 0x1.ca5dc00000000p+5f;
            }
          }
          return UnitActor_81ab40(result, v18, -0x1.0000000000000p+0f);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
