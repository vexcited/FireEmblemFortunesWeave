#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1096780(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d35d20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern _UNKNOWN GameData_1aa9224;
extern __int64 GameData_220f8c8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d448[9];
void __attribute__((noreturn)) GameRoutine_d38e30(_QWORD);
__int64 LegionGambitCamera_e59e90_alt1(__int64 result) __asm__(
    "LegionGambitCamera_e59e90");
float* LegionGambitCamera_e5a880(float* result, _BYTE* a2);
__int64 LegionGambitCamera_e5ab60(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_109da60(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameRoutine_e59fd0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD);
__int64 GameRoutine_10be5c0(_QWORD);
__int64 GameRoutine_10bfee0(__int64, __int64, char);
__int64 GameRoutine_b3aee0(_QWORD);
__int64 GameRoutine_d35d20_alt1(__int64,
                                unsigned __int8*) __asm__("GameRoutine_d35d20");
__int64
LegionGambitCamera_e5a5e0_alt1(__int64 result, __int64,
                               __int64) __asm__("LegionGambitCamera_e5a5e0");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN* GameData_212c188;
extern __int64 GameData_21ec7b0;
float powf(_QWORD, float, float);
float32x4_t LegionGambit_e4c8c0(__int64, _QWORD*, _QWORD*, char);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, long double);
void __attribute__((noreturn))
GameRoutine_d38e30_alt1() __asm__("GameRoutine_d38e30");
void LegionGambitCamera_e5a1c0(float32x4_t* a1);
__n128
LegionGambitCamera_e5a4a0_alt1(__int64 a1, __int64 a2, __int64 a3,
                               __int64 a4) __asm__("LegionGambitCamera_e5a4a0");
void LegionGambitCamera_e5a5e0(float32x4_t* result, unsigned __int8* a2,
                               __int64 a3);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void LegionGambitCamera_e5a5e0_alt2(
    float32x4_t*, float32x4_t*, __int64) __asm__("LegionGambitCamera_e5a5e0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void LegionGambitCamera_e59e90(__int64 a1);
void LegionGambitCamera_e5a4a0(float32x4_t* a1, __int64 a2, __int64 a3,
                               __int64 a4);

void LegionGambitCamera_e59e90(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 216);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(a1 + 168) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 184);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  v6 = *(_QWORD*)(a1 + 48);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = *(_QWORD*)(a1 + 32);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
    v8 = *(_QWORD*)(a1 + 16);
    if (v8 == 0) {
      return;
    }
  }
  else {
    v8 = *(_QWORD*)(a1 + 16);
    if (v8 == 0) {
      return;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
}

void LegionGambitCamera_e5a1c0(float32x4_t* a1)
{
  __int64 v1;
  __int64 v3;
  float32x4_t* v4;
  unsigned __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  long double v22;
  float32x4_t v23;
  float v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  int16x4_t v29;
  float32x4_t v30;
  float v31;
  float32x4_t v32;
  int8x16_t v33;
  float32x4_t* v34;
  unsigned __int32 v35;
  float v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  unsigned __int64 v40;
  float v41;
  _QWORD v42[2];

  v1 = *(_QWORD*)(GameData_21ec7b0 + 128);
  if (v1 != 0) {
    v3 = GameRoutine_10be5c0(LANES128(*(a1)).n128_u64[1]);
    v4 = (float32x4_t*)LANES128(*(a1)).n128_u64[1];
    v37 = v4[2];
    v38 = v4[3];
    v5 = LANES128(v4[4]).n128_u64[1];
    LANES128(v39).n128_u64[0] = LANES128(v4[4]).n128_u64[0];
    LANES128(v39).n128_u64[1] = v5;
    LODWORD(v5) = LANES128(v4[5]).n128_u32[2];
    v40 = LANES128(v4[5]).n128_u64[0];
    LODWORD(v4) = LANES128(a1[8]).n128_u8[0];
    v41 = *(float*)&v5;
    if ((_DWORD)v4 != 1) {
    LABEL_22:
      v32 = vsubq_f32(v38, v37);
      v33 = vmulq_f32(v32, v32);
      LANES128(v33).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
              .n64_f32[0] >= 0x1.47ae140000000p-7) {
        v34 = *(float32x4_t**)(v1 + 72);
        v35 = v40;
        LANES128(*(v34)).n128_u32[2] = 0;
        LANES128(v34[5]).n128_u32[3] = 0;
        LANES128(v34[6]).n128_u32[0] = v35;
        v34[1] = v37;
        v34[2] = v38;
        v34[3] = v39;
        GameRoutine_b3aee0(v34);
      }
      return;
    }
    v6 = LANES128(a1[9]).n128_f32[3];
    v7 = 1.0;
    if (v6 > 0.0) {
      v7 = LANES128(a1[9]).n128_f32[2] / v6;
    }
    v8 = LANES128(a1[10]).n128_f32[0];
    v9 = (float)(v7 * 0x1.921fb60000000p+1) +
         (float)(roundf((float)(v7 * 0x1.921fb60000000p+1) *
                        0x1.45f3060000000p-3) *
                 -0x1.921fb60000000p+2);
    if (v9 <= 0x1.921fb60000000p+0) {
      v11 = 1.0;
      if (v9 >= -0x1.921fb60000000p+0) {
      LABEL_10:
        v12 = v9 * v9;
        v13 =
            v11 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c188) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c188 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c188) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c188 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c188 *
                                                                                                  v12)) *
                                                                                  v12)) *
                                                               v12)) *
                                               v12)) *
                            v12) +
                    1.0);
        v14 = 1.0 / v8;
        v15 = fabsf(v13);
        if (v8 < 1.0) {
          v14 = 1.0;
        }
        v17 = powf(v3, v15, v14);
        v18 = -1.0;
        v19 = v17 * 0.5;
        if (v13 < 0.0) {
          v18 = 1.0;
        }
        v20 = (float)(v19 * v18) + 0.5;
        if (v8 < 1.0) {
          v20 = (float)(v8 * v20) + (float)(v7 * (float)(1.0 - v8));
        }
        *(float*)&v22 = powf(v16, v20, LANES128(a1[10]).n128_f32[1]);
        if ((LANES128(a1[8]).n128_u8[0] & 1) == 0) {
          GameRoutine_8123d0(v21, v22);
        }
        v23 = a1[6];
        v24 = 1.0 - *(float*)&v22;
        v25 = vaddq_f32(v37, vmulq_n_f32(vsubq_f32(a1[4], v37), v24));
        v26 = vaddq_f32(v38, vmulq_n_f32(vsubq_f32(a1[5], v38), v24));
        LANES128(v27).n128_u64[0] = LANES128(v25).n128_u64[0];
        LANES128(v28).n128_u64[0] = LANES128(v26).n128_u64[0];
        LANES128(v27).n128_u64[1] = LANES128(v25).n128_u32[2];
        LANES128(v28).n128_u64[1] = LANES128(v26).n128_u32[2];
        v37 = v27;
        v38 = v28;
        *(float*)&v40 =
            *(float*)&v40 +
            (float)((float)(LANES128(a1[7]).n128_f32[0] - *(float*)&v40) * v24);
        LANES64(v29).n64_u64[0] =
            LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v39, v23)))).n64_u64[0];
        if ((LANES64(v29).n64_u8[0] & 1) != 0 ||
            (LANES64(v29).n64_u8[2] & 1) != 0 ||
            (LANES64(v29).n64_u8[4] & 1) != 0) {
          v36 = v24;
          GameRoutine_109da60((void*)(v42), &v39);
          v24 = v36;
          LANES128(v30).n128_u64[0] = v42[0];
          LANES128(v30).n128_u64[1] = LODWORD(v42[1]);
          v39 = v30;
        }
        v31 = LANES128(a1[7]).n128_f32[2];
        *((float*)&v40 + 1) =
            *((float*)&v40 + 1) +
            (float)((float)(LANES128(a1[7]).n128_f32[1] - *((float*)&v40 + 1)) *
                    v24);
        v41 = v41 + (float)((float)(v31 - v41) * v24);
        goto LABEL_22;
      }
      v10 = -0x1.921fb60000000p+1;
    }
    else {
      v10 = 0x1.921fb60000000p+1;
    }
    v9 = v10 - v9;
    v11 = -1.0;
    goto LABEL_10;
  }
}

void LegionGambitCamera_e5a4a0(float32x4_t* a1, __int64 a2, __int64 a3,
                               __int64 a4)
{

#pragma clang fp contract(off)
  char v6;
  __int64 v7;
  unsigned __int8* v8;
  int v9;
  unsigned __int8* v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  int* v19;
  int v20;
  float32x4_t* v21;
  __int64 v22;
  struct {
    _QWORD v23[2];
    unsigned __int8* v24;
  } v23_;

  GameRoutine_e59fd0((void*)(v23_.v23), a1, a2, a3,
                     LANES128(a1[9]).n128_u32[0]);
  v6 = v23_.v23[0];
  v7 = (__int64)v23_.v24;
  if ((v23_.v23[0] & 1) != 0) {
    v8 = v23_.v24;
  }
  else {
    v8 = (unsigned __int8*)v23_.v23 + 1;
  }
  if (v8 == nullptr) {
    goto LABEL_18;
  }
  v11 = *v8;
  v10 = v8 + 1;
  v9 = v11;
  if (v11 != 0) {
    v12 = 0;
    do {
      v12 = v9 - v12 + 32 * v12;
      v13 = *v10++;
      v9 = v13;
    } while (v13 != 0);
  }
  else {
    v12 = 0;
  }
  v14 = *(_QWORD*)(GameData_220f8c8 + 8);
  v15 = *(_QWORD*)(GameData_220f8c8 + 16);
  v16 = v15 - v14;
  if (v15 == v14) {
    goto LABEL_18;
  }
  v17 = 0;
  v18 = 0x4EC4EC4EC4EC4EC5LL * (v16 >> 3);
  v19 = (int*)(v14 + 24);
  while (1) {
    v20 = *v19;
    v19 += 26;
    if (v12 == v20) {
      break;
    }
    if (v18 == ++v17) {
      goto LABEL_18;
    }
  }
  if (v17 < 1) {
  LABEL_18:
    v21 = nullptr;
  }
  else {
    if (v18 <= (unsigned int)v17) {
      GameRoutine_d38e30_alt1();
    }
    v21 = (float32x4_t*)(v14 + 104LL * (unsigned int)v17);
  }
  LegionGambitCamera_e5a5e0_alt2(a1, v21, a4);
  if ((v6 & 1) != 0 && v7 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v7);
  }
}

void LegionGambitCamera_e5a5e0(float32x4_t* result, unsigned __int8* a2,
                               __int64 a3)
{

#pragma clang fp contract(off)
  int v3;
  unsigned __int32 v5;
  unsigned __int64 v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int32 v13;
  unsigned __int8* v14;
  int v15;
  unsigned __int8* v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  char v21;
  float32x4_t v22;
  unsigned __int32 v23;
  int8x16_t v24;
  unsigned __int32 v25;
  unsigned __int64 v26;
  int v27;
  __int128 v28;
  __int128 v29;
  float32x4_t v30;
  float32x4_t v31;

  if (a2 != nullptr) {
    LANES128(result[9]).n128_u32[2] = 0;
    v3 = LANES128(result[8]).n128_u8[0];
    v5 = *(_DWORD*)(a3 + 8);
    *(unsigned __int64*)((char*)&LANES128(result[9]).n128_u64[1] + 4) =
        *(_QWORD*)a3;
    v6 = LANES128(*(result)).n128_u64[1];
    LANES128(result[10]).n128_u32[1] = v5;
    LANES128(result[9]).n128_u8[4] = 1;
    if (v3 == 1) {
      LANES128(result[4]).n128_u32[0] = *(_DWORD*)(v6 + 32);
      LANES128(result[4]).n128_u32[1] = *(_DWORD*)(v6 + 36);
      v7 = result[4];
      LANES128(v7).n128_u64[1] = *(unsigned int*)(v6 + 40);
      result[4] = v7;
      LANES128(result[5]).n128_u32[0] = *(_DWORD*)(v6 + 48);
      LANES128(result[5]).n128_u32[1] = *(_DWORD*)(v6 + 52);
      v8 = result[5];
      LANES128(v8).n128_u64[1] = *(unsigned int*)(v6 + 56);
      result[5] = v8;
      LANES128(result[6]).n128_u32[0] = *(_DWORD*)(v6 + 64);
      LANES128(result[6]).n128_u32[1] = *(_DWORD*)(v6 + 68);
      v9 = result[6];
      LANES128(v9).n128_u64[1] = *(unsigned int*)(v6 + 72);
      result[6] = v9;
      v10 = *(_QWORD*)(v6 + 80);
      LANES128(result[7]).n128_u32[2] = *(_DWORD*)(v6 + 88);
      LANES128(result[7]).n128_u64[0] = v10;
    }
    else {
      LANES128(result[4]).n128_u64[1] = *(_QWORD*)(v6 + 40);
      LANES128(result[4]).n128_u64[0] = *(_QWORD*)(v6 + 32);
      LANES128(result[5]).n128_u64[1] = *(_QWORD*)(v6 + 56);
      LANES128(result[5]).n128_u64[0] = *(_QWORD*)(v6 + 48);
      v11 = *(_QWORD*)(v6 + 72);
      LANES128(result[6]).n128_u64[0] = *(_QWORD*)(v6 + 64);
      LANES128(result[6]).n128_u64[1] = v11;
      v12 = *(_QWORD*)(v6 + 80);
      v13 = *(_DWORD*)(v6 + 88);
      LANES128(result[8]).n128_u8[0] = 1;
      LANES128(result[7]).n128_u32[2] = v13;
      LANES128(result[7]).n128_u64[0] = v12;
    }
    if (a2 != (unsigned __int8*)&LANES128(result[10]).n128_i8[8]) {
      GameRoutine_d35d20_alt1((__int64)&LANES128(result[10]).n128_i64[1], a2);
      GameRoutine_1a09ce0(&LANES128(result[10]).n128_i8[8], &GameData_1aa9224,
                          14);
      v14 = &LANES128(result[10]).n128_u8[9];
      if ((LANES128(result[10]).n128_u8[8] & 1) != 0) {
        v14 = (unsigned __int8*)LANES128(result[11]).n128_u64[1];
      }
      v17 = *v14;
      v16 = v14 + 1;
      v15 = v17;
      if (v17 != 0) {
        v18 = 0;
        do {
          v18 = v15 - v18 + 32 * v18;
          v19 = *v16++;
          v15 = v19;
        } while (v19 != 0);
      }
      else {
        v18 = 0;
      }
      LANES128(result[12]).n128_u32[0] = v18;
    }
    if (*(_BYTE*)(LANES128(*(result)).n128_u64[0] + 146) == 1) {
      LANES128(result[14]).n128_f32[2] =
          (float)(0x1.6800000000000p+6f - LANES128(result[14]).n128_f32[2]) +
          0x1.6800000000000p+6f;
      LANES128(result[15]).n128_f32[0] = -LANES128(result[15]).n128_f32[0];
      LANES128(result[15]).n128_f32[3] = -LANES128(result[15]).n128_f32[3];
    }
    GameRoutine_10bfee0(LANES128(*(result)).n128_i64[1],
                        (__int64)&LANES128(result[10]).n128_i64[1], 0);
    if (LANES128(result[9]).n128_f32[3] == 0x0.0p+0f) {
      v20 = LANES128(*(result)).n128_u64[0];
      v21 = LANES128(result[9]).n128_i8[5];
      v30 = (__typeof__(v30)){0};
      v31 = (__typeof__(v31)){0};
      LegionGambit_e4c8c0(v20, &v31, &v30, v21);
      v22 = v30;
      v23 = LANES128(v31).n128_u32[2];
      v24 = vsubq_f32(v31, v30);
      v25 = LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u32[0];
      LANES128(v24).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  vmul_f32(COERCE_AS(float32x2_t, v25),
                           COERCE_AS(float32x2_t, v25)),
                  vmul_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u32[0]),
                           COERCE_AS(float32x2_t, LANES128(v24).n128_u32[0]))))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
              .n64_f32[0] >= 0x1.0c6f7c0000000p-20f) {
        v26 = LANES128(*(result)).n128_u64[1];
        *(_QWORD*)(v26 + 128) = LANES128(v31).n128_u64[0];
        *(_QWORD*)(v26 + 144) = LANES128(v22).n128_u64[0];
        v27 = *(unsigned __int8*)(v26 + 164);
        v28 = *(_OWORD*)(v26 + 128);
        v29 = *(_OWORD*)(v26 + 144);
        *((_QWORD*)&v28 + 1) = v23;
        *((_QWORD*)&v29 + 1) = LANES128(v22).n128_u32[2];
        *(_OWORD*)(v26 + 128) = v28;
        *(_OWORD*)(v26 + 144) = v29;
        if (v27 == 1) {
          *(_BYTE*)(v26 + 164) = 0;
        }
        if (*(_BYTE*)(v26 + 172) == 1) {
          *(_BYTE*)(v26 + 172) = 0;
        }
        *(_BYTE*)(v26 + 113) = 1;
      }
      LegionGambitCamera_e5a1c0(result);
    }
  }
}

float* LegionGambitCamera_e5a880(float* result, _BYTE* a2)
{
  int v2;
  unsigned __int8* v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int* v11;
  int v12;
  float* v13;
  float* v14;
  unsigned __int8* v15;
  int v16;
  unsigned __int8* v17;
  int v18;
  int v19;
  int v20;

  if (a2 != nullptr) {
    v2 = (unsigned __int8)*a2;
    if (*a2 != 0) {
      v3 = a2 + 1;
      v4 = 0;
      do {
        v4 = v2 - v4 + 32 * v4;
        v5 = *v3++;
        v2 = v5;
      } while (v5 != 0);
    }
    else {
      v4 = 0;
    }
    v6 = *(_QWORD*)(GameData_220f8c8 + 8);
    v7 = *(_QWORD*)(GameData_220f8c8 + 16);
    v8 = v7 - v6;
    if (v7 != v6) {
      v9 = 0;
      v10 = 0x4EC4EC4EC4EC4EC5LL * (v8 >> 3);
      v11 = (int*)(v6 + 24);
      while (1) {
        v12 = *v11;
        v11 += 26;
        if (v4 == v12) {
          break;
        }
        if (v10 == ++v9) {
          return result;
        }
      }
      if (v9 >= 1) {
        if (v10 <= (unsigned int)v9) {
          GameRoutine_d38e30(result);
        }
        v13 = result + 42;
        if ((float*)(v6 + 104LL * (unsigned int)v9) != result + 42) {
          v14 = result;
          GameRoutine_d35d20(result + 42);
          GameRoutine_1a09ce0(v13, &GameData_1aa9224, 14);
          v15 = (unsigned __int8*)v14 + 169;
          result = v14;
          if (((_BYTE)v14[42] & 1) != 0) {
            v15 = *((unsigned __int8**)v14 + 23);
          }
          v18 = *v15;
          v17 = v15 + 1;
          v16 = v18;
          if (v18 != 0) {
            v19 = 0;
            do {
              v19 = v16 - v19 + 32 * v19;
              v20 = *v17++;
              v16 = v20;
            } while (v20 != 0);
          }
          else {
            v19 = 0;
          }
          *((_DWORD*)v14 + 48) = v19;
        }
        if (*(_BYTE*)(*(_QWORD*)result + 146LL) == 1) {
          result[58] = (float)(90.0f - result[58]) + 90.0f;
          result[60] = -result[60];
          result[63] = -result[63];
        }
        return (float*)GameRoutine_1096780(
            *(_QWORD*)(*GameData_212d448[0] + 128), v13, 0);
      }
    }
  }
  return result;
}

__int64 LegionGambitCamera_e5ab60(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 224);
  *(_QWORD*)(a1 + 224) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
