#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1077500(_QWORD, _QWORD);
__int64 GameRoutine_1417e70(_QWORD, _QWORD);
__int64 GameRoutine_1469c40(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21f4000;
float SceneCharacterMovement_1417b60(__int64 a1);
float SceneCharacterMovement_1417ce0(__int64 a1);
__int64 SceneCharacterMovement_Unknown2(__int64 result);
__attribute__((swiftcall)) void game_13f9200(PSEUDO_X8, int8x16_t*);
__int64 GameRoutine_1418960(_QWORD, _QWORD, _QWORD);
__int64 SceneObjectHolder_1461dc0(_QWORD, _QWORD);
double cos(double);
double sin(double);
extern int GameData_21d92e0;
__attribute__((swiftcall)) void SceneCharacterMovement_1417860(PSEUDO_X8 x8_,
                                                               __int64 a1);
__attribute__((swiftcall)) void SceneCharacterMovement_14179e0(PSEUDO_X8 x8_,
                                                               __int64 result);
__int64 SceneCharacterMovement_1417e70(__int64 result, char a2);
void SceneCharacterMovement_Unknown3(__int64 a1, long double a2);

__attribute__((swiftcall)) void SceneCharacterMovement_1417860(PSEUDO_X8 x8_,
                                                               __int64 a1)
{
  int8x16_t* a2 = (int8x16_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  float32x4_t v6;
  __int64 v7;
  float32x4_t v8;
  unsigned int v10;
  int8x16_t result;
  float32x4_t v12;
  char v13[15];

  strcpy(v13, "Loc_C_Trans");
  v4 = SceneObjectHolder_1461dc0(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL), v13);
  v5 = v4;
  if (v4 != 0) {
    v6 = *(float32x4_t*)(v4 + 208);
  }
  else {
    v6 = (__typeof__(v6)){0};
  }
  v12 = v6;
  strcpy(v13, "Jnt_C_Head");
  v7 = SceneObjectHolder_1461dc0(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL), v13);
  if (v7 != 0) {
    v8 = *(float32x4_t*)(v7 + 208);
  }
  else {
    v8 = (__typeof__(v8)){0};
  }
  if (v7 == 0 || v5 == 0) {
    v10 = 0;
  }
  else {
    v10 = -1;
  }
  result = vandq_s8(vsubq_f32(v8, v12), vdupq_n_s32(v10));
  *a2 = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void SceneCharacterMovement_14179e0(PSEUDO_X8 x8_,
                                                               __int64 result)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;

  v2 = *(_QWORD*)(result + 8);
  v4 = result;
  v5 = *(_QWORD*)(v2 + 144);
  v6 = *(_QWORD*)(v2 + 152);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = *(_QWORD*)(v5 + 8);
    if (v7 != 0 && (v8 = *(_QWORD*)(v7 + 8), v14 = 0, v15 = &v14,
                    result = GameRoutine_1469c40(&v15, &v15, v8), v14 != 0)) {
      v10 = *(_QWORD*)(v14 + 392);
      v9 = *(_QWORD*)(v14 + 400);
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
    else {
      v10 = 0;
      v9 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    v11 = *(_QWORD*)(v5 + 8);
    if (v11 == 0) {
      goto LABEL_18;
    }
    v12 = *(_QWORD*)(v11 + 8);
    v14 = 0;
    v15 = &v14;
    result = GameRoutine_1469c40(&v15, &v15, v12);
    if (v14 == 0) {
      goto LABEL_18;
    }
    v10 = *(_QWORD*)(v14 + 392);
    v9 = *(_QWORD*)(v14 + 400);
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  if (v10 != 0) {
    LODWORD(v13) = 0;
    *((float*)&v13 + 1) = *(float*)(*(_QWORD*)(v10 + 11792) + 36LL) *
                          (float)(*(float*)(v10 + 32) *
                                  (float)(*(float*)(v10 + 40) +
                                          (float)(1.0f - *(float*)(v10 + 40))));
    *a2 = vmulq_n_f32(COERCE_AS(float32x4_t, v13), *(float*)(v4 + 36));
  }
  if (v9 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10 != 0) {
      result;
      return;
    }
    goto LABEL_18;
  }
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  result = std___1___shared_weak_count___release_weak(v9);
  if (v10 == 0) {
  LABEL_18:
    LANES128(*(a2)).n128_u64[0] = 0;
    LANES128(*(a2)).n128_u64[1] = 0;
  }
  {
    result;
    return;
  }
}

float SceneCharacterMovement_1417b60(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64 v13;
  __int64* v14;

  v1 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v1 + 144);
  v4 = *(_QWORD*)(v1 + 152);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v3 + 8);
    if (v5 != 0 && (v6 = *(_QWORD*)(v5 + 8), v13 = 0, v14 = &v13,
                    GameRoutine_1469c40(&v14, &v14, v6), v13 != 0)) {
      v8 = *(_QWORD*)(v13 + 392);
      v7 = *(_QWORD*)(v13 + 400);
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
    else {
      v8 = 0;
      v7 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v9 = *(_QWORD*)(v3 + 8);
    v10 = 0.0;
    if (v9 == 0) {
      return v10;
    }
    v11 = *(_QWORD*)(v9 + 8);
    v13 = 0;
    v14 = &v13;
    GameRoutine_1469c40(&v14, &v14, v11);
    if (v13 == 0) {
      return v10;
    }
    v8 = *(_QWORD*)(v13 + 392);
    v7 = *(_QWORD*)(v13 + 400);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  if (v8 != 0) {
    v10 = *(float*)(a1 + 36) *
          (float)(*(float*)(*(_QWORD*)(v8 + 11792) + 32LL) *
                  (float)(*(float*)(v8 + 32) *
                          (float)(*(float*)(v8 + 40) +
                                  (float)(1.0 - *(float*)(v8 + 40)))));
    if (v7 == 0) {
      return v10;
    }
  }
  else {
    v10 = 0.0;
    if (v7 == 0) {
      return v10;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v10;
}

float SceneCharacterMovement_1417ce0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64* v15;

  v1 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v1 + 144);
  v4 = *(_QWORD*)(v1 + 152);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v3 + 8);
    if (v5 != 0 && (v6 = *(_QWORD*)(v5 + 8), v14 = 0, v15 = &v14,
                    GameRoutine_1469c40(&v15, &v15, v6), v14 != 0)) {
      v8 = *(_QWORD*)(v14 + 392);
      v7 = *(_QWORD*)(v14 + 400);
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
    else {
      v8 = 0;
      v7 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v9 = *(_QWORD*)(v3 + 8);
    v10 = 1.0;
    if (v9 == 0) {
      return v10;
    }
    v11 = *(_QWORD*)(v9 + 8);
    v14 = 0;
    v15 = &v14;
    GameRoutine_1469c40(&v15, &v15, v11);
    if (v14 == 0) {
      return v10;
    }
    v8 = *(_QWORD*)(v14 + 392);
    v7 = *(_QWORD*)(v14 + 400);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  v10 = 1.0;
  if (v8 != 0) {
    v12 = GameRoutine_1077500(*(unsigned int*)(v8 + 11784), 0);
    if (v12 != 0) {
      v10 = SceneCharacterMovement_1417b60(a1) / *(float*)(v12 + 32);
    }
  }
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v10;
}

__int64 SceneCharacterMovement_Unknown2(__int64 result)
{
  if ((*(_BYTE*)(GameData_21f4000 + 132) & 1) == 0) {
    return GameRoutine_1417e70(result, 0);
  }
  return result;
}

__int64 SceneCharacterMovement_1417e70(__int64 result, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v6;
  char v7;
  _BYTE* v8;
  __int64 v9;
  _BYTE* v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64* v23;
  __int64** v24;

  v2 = *(_QWORD*)(result + 8);
  v3 = result;
  if (v2 != 0) {
    v4 = *(_QWORD*)(v2 + 8);
    v23 = nullptr;
    v24 = &v23;
    result = GameRoutine_1418960(&v24, &v24, v4);
    v6 = v23;
    if (v23 != nullptr &&
        *((_BYTE*)((__int128*)0x10LL) + (_QWORD)v23) != (a2 & 1)) {
      *((_BYTE*)((__int128*)0x10LL) + (_QWORD)v23) = a2 & 1;
      if ((a2 & 1) != 0) {
        v7 = 0;
      }
      else {
        v7 = 2;
      }
      *((_BYTE*)((__int128*)0x10LL) + (_QWORD)v6 + 1) =
          *((_BYTE*)((__int128*)0x10LL) + (_QWORD)v6 + 1) & 0xFD | v7;
      *((_BYTE*)((__int128*)0x10LL) + (_QWORD)v6 + 2) =
          *((_BYTE*)((__int128*)0x10LL) + (_QWORD)v6 + 2) & 0xFD | v7;
      *((_BYTE*)((__int128*)0x10LL) + (_QWORD)v6 + 3) =
          *((_BYTE*)((__int128*)0x10LL) + (_QWORD)v6 + 3) & 0xFD | v7;
      *((_BYTE*)((__int128*)0x10LL) + (_QWORD)v6 + 4) =
          *((_BYTE*)((__int128*)0x10LL) + (_QWORD)v6 + 4) & 0xFD | v7;
      v8 = *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6);
      v8[632] = 0;
      v8[664] = 0;
      v8[696] = 0;
      v8[728] = 0;
      v9 = *v6;
      if ((a2 & 1) == 0) {
        goto LABEL_14;
      }
      result = (*(__int64 (**)(__int64*))(v9 + 64))(v6);
      v10 = *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6);
      v11 = v10[300] == 3 && v10[301] == 3;
      if (v11 || v10[302] == 1) {
        v9 = *v6;
      LABEL_14:
        result = (*(__int64 (**)(__int64*))(v9 + 72))(v6);
      }
    }
  }
  v12 = *(_QWORD*)(v3 + 8);
  v13 = *(_QWORD*)(v12 + 144);
  v14 = *(_QWORD*)(v12 + 152);
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    v15 = *(_QWORD*)(v13 + 8);
    if (v15 != 0) {
      v16 = *(_QWORD*)(v15 + 8);
      v23 = nullptr;
      v24 = &v23;
      result = GameRoutine_1469c40(&v24, &v24, v16);
      v17 = v23;
    }
    else {
      v17 = nullptr;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      result = std___1___shared_weak_count___release_weak(v14);
    }
  }
  else {
    v18 = *(_QWORD*)(v13 + 8);
    if (v18 == 0) {
      return result;
    }
    v19 = *(_QWORD*)(v18 + 8);
    v23 = nullptr;
    v24 = &v23;
    result = GameRoutine_1469c40(&v24, &v24, v19);
    v17 = v23;
  }
  if (v17 != nullptr &&
      *(_DWORD*)((char*)((_UNKNOWN*)0x180LL) + (_QWORD)v17) == 0) {
    if (GameData_21d92e0 != 2) {
      goto LABEL_35;
    }
    v20 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + (_QWORD)v17);
    v21 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + (_QWORD)v17 + 8);
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                memory_order_relaxed);
      v22 = *(_DWORD*)(v20 + 11784);
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        result = std___1___shared_weak_count___release_weak(v21);
      }
    }
    else {
      v22 = *(_DWORD*)(v20 + 11784);
    }
    if (v22 > 0x1A) {
      goto LABEL_35;
    }
    if (((1 << v22) & 0x410C) != 0) {
      *(_DWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + (_QWORD)v17) + 212LL) =
          0;
      return result;
    }
    if (((1 << v22) & 0x5000080) != 0) {
      *(_DWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + (_QWORD)v17) + 212LL) =
          0;
    }
    else {
    LABEL_35:
      *(_DWORD*)((char*)((_UNKNOWN*)0x180LL) + (_QWORD)v17) = 1;
    }
  }
  return result;
}

void SceneCharacterMovement_Unknown3(__int64 a1, long double a2)
{
  char v2;
  float32x4_t* v4;
  unsigned __int64 v5;
  float32x4_t v6;
  int8x16_t v7;
  float32x4_t v8;
  float32x4_t* v9;
  float i;
  float v11;
  unsigned __int64 v12;
  float32x4_t v13;
  int8x16_t v14;
  double v15;
  double v16;
  double v17;
  float v18;
  float v19;
  unsigned __int32 v23;
  float32x4_t* v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  long double v29;
  int8x16_t v30;

  v2 = *(_BYTE*)(a1 + 40);
  if (v2 != 0) {
    if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
      v4 = *(float32x4_t**)(*(_QWORD*)(a1 + 8) + 8LL);
      v5 = *(_QWORD*)(a1 + 24);
      LANES128(v30).n128_u64[0] = *(_QWORD*)(a1 + 16);
      LANES128(v30).n128_u64[1] = v5;
      game_13f9200((void*)((float32x4_t*)&v29), &v30);
      a2 = v29;
      v6 = vsubq_f32(v4[19], *(float32x4_t*)&v29);
      v7 = vmulq_f32(v6, v6);
      LANES128(v7).n128_u64[0] =
          LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                                 LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
              .n64_f32[0] != 0.0) {
        LANES128(v4[19]).n128_u64[0] = *(_QWORD*)&v29;
        v8 = v4[19];
        LANES128(v4[18]).n128_u32[2] |= 1u;
        LANES128(v8).n128_u64[1] = DWORD2(a2);
        v4[19] = v8;
      }
      v2 = *(_BYTE*)(a1 + 40);
      if ((v2 & 2) == 0) {
      LABEL_4:
        if ((v2 & 4) == 0) {
        LABEL_28:
          *(_BYTE*)(a1 + 40) = 0;
          return;
        }
      LABEL_26:
        LODWORD(a2) = *(_DWORD*)(a1 + 36);
        v24 = *(float32x4_t**)(*(_QWORD*)(a1 + 8) + 8LL);
        v25 = vdupq_lane_s32(*(int32x2_t*)&a2, 0);
        LANES128(v25).n128_u32[3] = 0;
        v26 = vsubq_f32(v24[22], v25);
        v27 = vmulq_f32(v26, v26);
        LANES128(v27).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                .n64_f32[0] != 0.0) {
          LANES128(v24[22]).n128_u32[0] = LODWORD(a2);
          LANES128(v24[22]).n128_u32[1] = LODWORD(a2);
          v28 = v24[22];
          LANES128(v24[18]).n128_u32[2] |= 1u;
          LANES128(v28).n128_u64[1] = LODWORD(a2);
          v24[22] = v28;
        }
        goto LABEL_28;
      }
    }
    else if ((*(_BYTE*)(a1 + 40) & 2) == 0) {
      goto LABEL_4;
    }
    v9 = *(float32x4_t**)(*(_QWORD*)(a1 + 8) + 8LL);
    for (i = *(float*)(GameData_21f4000 + 128) + *(float*)(a1 + 32);
         i < -0x1.6800000000000p+7; i = i + 0x1.6800000000000p+8)
      ;
    for (; i >= 0x1.6800000000000p+7; i = i + -0x1.6800000000000p+8)
      ;
    v11 = i * 0x1.1df46a0000000p-6;
    LODWORD(v12) = 0;
    *((float*)&v12 + 1) = v11;
    v13 = vsubq_f32(v9[20], COERCE_AS(float32x4_t, v12));
    v14 = vmulq_f32(v13, v13);
    LANES128(v14).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_f32[0] != 0.0) {
      LANES128(v9[20]).n128_u32[0] = 0;
      LANES128(v9[20]).n128_f32[1] = v11;
      v9[20] = COERCE_AS(float32x4_t, LANES128(v9[20]).n128_u64[0]);
      v15 = v11 * 0.5;
      v16 = cos(v15);
      *(double*)&a2 = sin(v15);
      v17 = *(double*)&a2 * -0.0 + v16 * 0.0;
      v18 = v16 + *(double*)&a2 * 0.0;
      *(double*)&a2 = *(double*)&a2 + v16 * 0.0;
      v19 = v17;
      *(float*)&a2 = *(double*)&a2;
      if (COERCE_FLOAT(*(_OWORD*)&v9[21]) != v19 ||
          COERCE_FLOAT(HIDWORD(LANES128(v9[21]).n128_u64[0])) != *(float*)&a2 ||
          COERCE_FLOAT(LANES128(v9[21]).n128_u64[1]) != v19 ||
          COERCE_FLOAT(HIDWORD(*(_OWORD*)&v9[21])) != v18) {
        v23 = LANES128(v9[18]).n128_u32[2];
        LANES128(v9[21]).n128_f32[0] = v19;
        LANES128(v9[21]).n128_u32[1] = LODWORD(a2);
        LANES128(v9[21]).n128_f32[2] = v19;
        LANES128(v9[21]).n128_f32[3] = v18;
        LANES128(v9[18]).n128_u32[2] = v23 | 1;
      }
    }
    if ((*(_BYTE*)(a1 + 40) & 4) == 0) {
      goto LABEL_28;
    }
    goto LABEL_26;
  }
}

#pragma GCC visibility pop
