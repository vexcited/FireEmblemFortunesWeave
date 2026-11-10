#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19887e0(_QWORD, _QWORD);
__int64 GameRoutine_a70ec0(__int64 result, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
extern __int64 (*GameData_1fc0ae0[])();
extern __int64 (*GameData_1fc0b20[])();
extern __int64 (*wld_ModelModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64 ModelModule_Destructor(__int64 a1);
__int64 ModelModule_Unknown7(__int64 result, long double a2);
__int64 GameRoutine_19850c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19862d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Scene_a70a20(_QWORD, _QWORD);
__int64 Scene_a70ec0(_QWORD, _QWORD);
__int64 ModelModule_a7f2a0_alt1(__int64 a1, __int64* a2, int a3,
                                float32x4_t* a4,
                                char a5) __asm__("ModelModule_a7f2a0");
extern _UNKNOWN* GameData_212c2a0;
extern __int128 GameData_1a82ea0;
extern __int128 GameData_1a82f20;
long double GameRoutine_5e3aa0(_QWORD, _QWORD);
void Model_a64140(__int64, long double);
void Model_a64b80(__int64, long double);
void ModelModule_Unknown6(__int64 a1, long double a2);
_QWORD* GameRoutine_19850c0_alt1(__int64*, __int64,
                                 unsigned int*) __asm__("GameRoutine_19850c0");
__int64 Scene_a70a20_alt1(_QWORD*, __int64) __asm__("Scene_a70a20");
__int64 Scene_a70ec0_alt1(__int64 result,
                          unsigned __int64) __asm__("Scene_a70ec0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
float32x4_t InstanceModel_19862d0(__int64, int, float32x4_t*, float32x4_t*,
                                  float32x4_t*, float32x4_t result);
void ModelModule_a7f2a0(__int64 a1, __int64* a2, int a3, float32x4_t* a4,
                        char a5);

__int64 ModelModule_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
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
  __int64 result;

  v1 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = wld_ModelModule_vtable;
  if (*(_BYTE*)(a1 + 113) == 1 && v1 != 0) {
    v4 = *(_QWORD*)(a1 + 48);
    *(_BYTE*)(a1 + 113) = 0;
    if (v4 != 0) {
      v5 = std___1___shared_weak_count_lock();
      if (v5 != 0) {
        v6 = v5;
        v7 = *(_QWORD*)(a1 + 40);
        if (v7 != 0) {
          GameRoutine_a70ec0(v7, *(_QWORD*)(a1 + 80));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
    }
  }
  if (*(_BYTE*)(a1 + 112) == 1 && *(_QWORD*)(a1 + 24) != 0) {
    v9 = *(_QWORD*)(a1 + 48);
    *(_BYTE*)(a1 + 112) = 0;
    if (v9 != 0) {
      v10 = std___1___shared_weak_count_lock();
      if (v10 != 0) {
        v11 = v10;
        v12 = *(_QWORD*)(a1 + 40);
        if (v12 != 0) {
          GameRoutine_a70ec0(v12, *(_QWORD*)(a1 + 72));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
    }
  }
  v13 = *(_QWORD*)(a1 + 32);
  v14 = *game_g_frame_clock_ptr[0];
  v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v13 != 0) {
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24, 16, 0);
    *(_QWORD*)(v16 + 16) = v13;
    *(_QWORD*)(a1 + 32) = 0;
    *(_DWORD*)(v16 + 8) = 2;
    *(_QWORD*)v16 = GameData_1fc0ae0;
    v17 = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, 24, 16, 0);
    v17[1] = v14 + 16592;
    v17[2] = v16;
    v18 = *(_QWORD*)(v14 + 16592);
    *v17 = v18;
    *(_QWORD*)(v18 + 8) = v17;
    *(_QWORD*)(v14 + 16592) = v17;
    ++*(_QWORD*)(v14 + 16608);
  }
  v19 = fw_memory_HeapManager_Allocate(*v15, 24, 16, 0);
  *(_DWORD*)(v19 + 8) = 2;
  *(_QWORD*)v19 = GameData_1fc0b20;
  v20 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(v19 + 16) = v20;
  v21 = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, 24, 16, 0);
  v21[1] = v14 + 16592;
  v21[2] = v19;
  v22 = *(_QWORD*)(v14 + 16592);
  *v21 = v22;
  *(_QWORD*)(v22 + 8) = v21;
  *(_QWORD*)(v14 + 16592) = v21;
  ++*(_QWORD*)(v14 + 16608);
  v23 = *(_QWORD*)(a1 + 184);
  if (v23 != 0) {
    v24 = *v15;
    *(_QWORD*)(a1 + 192) = v23;
    v25 = 128;
    if (*(_QWORD*)(v24 + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(v24 + v25, v23);
  }
  v26 = *(_QWORD*)(a1 + 88);
  if (v26 != 0) {
    v27 = *v15;
    *(_QWORD*)(a1 + 96) = v26;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(v27 + v28, v26);
  }
  v29 = *(_QWORD*)(a1 + 64);
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak(v29);
  }
  v30 = *(_QWORD*)(a1 + 48);
  if (v30 != 0) {
    std___1___shared_weak_count___release_weak(v30);
  }
  v31 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v31 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
  }
  result = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

void ModelModule_Unknown6(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  bool v5;
  int v6;
  float32x4_t* v7;
  float32x4_t* v8;
  float32x4_t v9;
  float32x4_t v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  long double v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  float32x4_t* v22;
  float32x4_t* v23;
  float32x4_t v24;
  long double v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int32 v33;
  __int64 v34;
  long double v35;
  int v36;
  int v37;
  unsigned int v38;
  float32x4_t v39;
  float32x4_t v40;

  v2 = *(_QWORD*)(a1 + 32);
  if (v2 != 0) {
    v4 = *(_QWORD*)(a1 + 8);
    v5 = false;
    if (*(_BYTE*)(v4 + 289) == 1 && (*(_BYTE*)(v4 + 288) & 1) != 0) {
      if ((*(_BYTE*)(v4 + 300) & 0xFD) == 1) {
        v5 = false;
      }
      else {
        do {
          v4 = *(_QWORD*)(v4 + 736);
          v5 = v4 == 0;
        } while (v4 != 0 && *(_BYTE*)(v4 + 289) == 1 &&
                 *(_BYTE*)(v4 + 288) == 1 && (*(_BYTE*)(v4 + 300) & 0xFD) != 1);
      }
    }
    *(_BYTE*)(v2 + 32) = v5;
    v6 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 284LL);
    *(_DWORD*)(*(_QWORD*)(a1 + 24) + 36LL) = v6;
    *(_DWORD*)(*(_QWORD*)(a1 + 32) + 36LL) = v6;
    v7 = *(float32x4_t**)(a1 + 32);
    if (LANES128(v7[8]).n128_u32[2] != 0 && LANES128(v7[26]).n128_u8[0] == 1) {
      LANES128(v7[26]).n128_u16[0] = 256;
      if (LANES128(v7[7]).n128_u8[1] == 1) {
        LANES128(v7[26]).n128_u8[2] = 1;
      }
      Model_a64140(LANES128(v7[8]).n128_i64[0], a2);
      v8 = (float32x4_t*)LANES128(v7[8]).n128_u64[0];
      if (LANES128(v7[8]).n128_i32[2] < 1) {
        v9 = COERCE_AS(float32x4_t, GameData_1a82f20);
        v10 = COERCE_AS(float32x4_t, GameData_1a82ea0);
      }
      else {
        v9 = COERCE_AS(float32x4_t, GameData_1a82f20);
        v10 = COERCE_AS(float32x4_t, GameData_1a82ea0);
        v11 = 0;
        v12 = 0;
        v13 = 0;
        do {
          v39 = v10;
          v40 = v9;
          v14 = GameRoutine_5e3aa0(&LANES128(v8[8]).n128_i8[8],
                                   LANES128(v7[26]).n128_u64[1] + v11);
          Model_a64b80((__int64)v8, v14);
          v15 = (_QWORD*)LANES128(v7[8]).n128_u64[0];
          ++v13;
          v11 += 64;
          v16 = (_QWORD*)(LANES128(v7[5]).n128_u64[0] + v12);
          v18 = v15[6];
          v17 = v15[7];
          v19 = v15[9];
          v12 += 32;
          v16[2] = v15[8];
          v16[3] = v19;
          *v16 = v18;
          v16[1] = v17;
          v8 = (float32x4_t*)LANES128(v7[8]).n128_u64[0];
          v9 = vminq_f32(v40, v8[3]);
          v10 = vmaxq_f32(v39, v8[4]);
        } while (v13 < LANES128(v7[8]).n128_i32[2]);
      }
      v7[3] = v9;
      v7[4] = v10;
      v35 = GameRoutine_5e3aa0(&LANES128(v8[8]).n128_i8[8], GameData_212c2a0);
      Model_a64b80((__int64)v8, v35);
    }
  }
  else {
    v20 = *(_QWORD*)(a1 + 8);
    v21 = false;
    if (*(_BYTE*)(v20 + 289) == 1 && (*(_BYTE*)(v20 + 288) & 1) != 0) {
      if ((*(_BYTE*)(v20 + 300) & 0xFD) == 1) {
        v21 = false;
      }
      else {
        do {
          v20 = *(_QWORD*)(v20 + 736);
          v21 = v20 == 0;
        } while (v20 != 0 && *(_BYTE*)(v20 + 289) == 1 &&
                 *(_BYTE*)(v20 + 288) == 1 &&
                 (*(_BYTE*)(v20 + 300) & 0xFD) != 1);
      }
    }
    *(_BYTE*)(*(_QWORD*)(a1 + 24) + 32LL) = v21;
    v22 = *(float32x4_t**)(a1 + 24);
    v23 = *(float32x4_t**)(a1 + 8);
    v24 = vsubq_f32(v22[27], v23[27]);
    v25 = COERCE_LONG_DOUBLE(vmulq_f32(v24, v24));
    *(float32x2_t*)&v25 = vadd_f32(
        COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v25,
                                                    *(int8x16_t*)&v25, 8u))
                                   .n128_u64[0]),
        *(float32x2_t*)&v25);
    *(float32x2_t*)&v25 = vpadd_f32(*(float32x2_t*)&v25, *(float32x2_t*)&v25);
    if (*(float*)&v25 != 0x0.0p+0f) {
      goto LABEL_27;
    }
    v26 = vsubq_f32(v22[28], v23[28]);
    v25 = COERCE_LONG_DOUBLE(vmulq_f32(v26, v26));
    *(float32x2_t*)&v25 = vadd_f32(
        COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v25,
                                                    *(int8x16_t*)&v25, 8u))
                                   .n128_u64[0]),
        *(float32x2_t*)&v25);
    *(float32x2_t*)&v25 = vpadd_f32(*(float32x2_t*)&v25, *(float32x2_t*)&v25);
    if (*(float*)&v25 != 0x0.0p+0f) {
      goto LABEL_27;
    }
    v27 = vsubq_f32(v22[29], v23[29]);
    v25 = COERCE_LONG_DOUBLE(vmulq_f32(v27, v27));
    *(float32x2_t*)&v25 = vadd_f32(
        COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v25,
                                                    *(int8x16_t*)&v25, 8u))
                                   .n128_u64[0]),
        *(float32x2_t*)&v25);
    *(float32x2_t*)&v25 = vpadd_f32(*(float32x2_t*)&v25, *(float32x2_t*)&v25);
    if (*(float*)&v25 != 0x0.0p+0f ||
        (v28 = vsubq_f32(v22[30], v23[30]),
         v25 = COERCE_LONG_DOUBLE(vmulq_f32(v28, v28)),
         *(float32x2_t*)& v25 = vadd_f32(
             COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v25,
                                                         *(int8x16_t*)&v25, 8u))
                                        .n128_u64[0]),
             *(float32x2_t*)&v25),
         *(float32x2_t*)& v25 =
             vpadd_f32(*(float32x2_t*)&v25, *(float32x2_t*)&v25),
         *(float*)&v25 != 0x0.0p+0f)) {
    LABEL_27:
      v29 = LANES128(v23[30]).n128_u64[1];
      LANES128(v22[29]).n128_u64[1] = LANES128(v23[29]).n128_u64[1];
      LANES128(v22[30]).n128_u64[1] = v29;
      v30 = LANES128(v23[28]).n128_u64[1];
      LANES128(v22[27]).n128_u64[1] = LANES128(v23[27]).n128_u64[1];
      LANES128(v22[28]).n128_u64[1] = v30;
      v31 = LANES128(v23[27]).n128_u64[0];
      LANES128(v22[28]).n128_u64[0] = LANES128(v23[28]).n128_u64[0];
      LANES128(v22[27]).n128_u64[0] = v31;
      v32 = LANES128(v23[29]).n128_u64[0];
      LANES128(v22[30]).n128_u64[0] = LANES128(v23[30]).n128_u64[0];
      LANES128(v22[29]).n128_u64[0] = v32;
      LANES128(v22[31]).n128_u8[8] = 1;
      LANES128(v22[32]).n128_u32[0] = 3;
      LANES128(v22[32]).n128_u8[4] = 1;
      v23 = *(float32x4_t**)(a1 + 8);
      v22 = *(float32x4_t**)(a1 + 24);
    }
    v33 = LANES128(v23[17]).n128_u32[3];
    LANES128(v22[2]).n128_u32[1] = v33;
    v34 = *(_QWORD*)(a1 + 32);
    if (v34 != 0) {
      *(_DWORD*)(v34 + 36) = v33;
    }
    Model_a64140(*(_QWORD*)(a1 + 24), v25);
  }
  v36 = *(unsigned __int8*)(a1 + 20);
  if (((*(_QWORD*)(a1 + 32) != 0) | *(_BYTE*)(a1 + 169) & 1) != 0) {
    v37 = 0;
  }
  else {
    v37 = 4;
  }
  v38 = v37 | v36 & 0xFFFFFFFB;
  *(_BYTE*)(a1 + 20) = v38;
  if (v36 != v38) {
    *(_BYTE*)(*(_QWORD*)(a1 + 8) + 728LL) = 0;
  }
}

__int64 ModelModule_Unknown7(__int64 result, long double a2)
{
  __int64 v2;
  float v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  float v8;
  __int64 v9;
  unsigned __int64 v10;
  char v11;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  bool v18;
  bool v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  __int64* v26;
  unsigned __int8 v27;
  char v28;
  int v29;
  __int64 v30;
  __int64* v31;
  char v32;
  int v33;
  __int64 v34;

  v2 = result;
  if (*(_BYTE*)(result + 169) == 1) {
    result = GameRoutine_19887e0(result + 120, *(_QWORD*)(result + 24) + 336LL);
    if (*(_BYTE*)(v2 + 169) == 1) {
      v3 = *(float*)(v2 + 124);
      v4 = *(_QWORD*)(v2 + 128);
      v5 = *(_QWORD*)(v2 + 136);
      *(_QWORD*)(v2 + 144) = *(_QWORD*)(v2 + 120);
      *(_QWORD*)(v2 + 152) = v4;
      v6 = true;
      *(_QWORD*)(v2 + 160) = v5;
      if (v3 >= 1.0 && *(float*)(v2 + 128) <= 0.0) {
        v6 = fminf(*(float*)(v2 + 120), *(float*)(v2 + 132)) < 1.0;
      }
      *(_BYTE*)(v2 + 168) = v6;
      *(_BYTE*)(v2 + 169) = 0;
    }
  }
  v7 = *(_QWORD*)(v2 + 184);
  if (v7 != *(_QWORD*)(v2 + 192)) {
    v8 = *(float*)(v2 + 132);
    v9 = *(_QWORD*)(v2 + 136);
    v10 = 0;
    v11 = 0;
  LABEL_11:
    v13 = 56 * v10 + 49;
    do {
      v14 = v7 + v13;
      LODWORD(a2) = *(_DWORD*)(v7 + v13 - 37);
      if (*(float*)&a2 != v8) {
        v15 = *(float*)(v14 - 49);
        v16 = *(float*)(v14 - 25);
        *(float*)(v14 - 37) = v8;
        v19 = v15 != v16 ||
              (v17 = v7 + v13,
               *(float*)(v7 + v13 - 45) != *(float*)(v7 + v13 - 21)) ||
              (*(float*)(v17 - 41) == *(float*)(v17 - 17)
                   ? (v18 = v8 == *(float*)(v17 - 13))
                   : (v18 = false),
               !v18) ||
              ((*(_DWORD*)(v7 + v13 - 33) ^ *(_DWORD*)(v7 + v13 - 9)) &
               0x3FLL) != 0;
        *(float*)&a2 = v8;
        *(_BYTE*)(v7 + v13) = v19;
      }
      if (((*(_DWORD*)(v14 - 33) ^ (unsigned int)v9) & 0x3FLL) != 0) {
        v20 = *(float*)(v14 - 49);
        *(_QWORD*)(v14 - 33) = v9;
        if (v20 != *(float*)(v7 + v13 - 25) ||
            *(float*)(v7 + v13 - 45) != *(float*)(v7 + v13 - 21) ||
            *(float*)(v7 + v13 - 41) != *(float*)(v7 + v13 - 17) ||
            *(float*)&a2 != *(float*)(v7 + v13 - 13)) {
          *(_BYTE*)(v7 + v13) = 1;
        LABEL_32:
          v22 = v7 + v13;
          result = GameRoutine_19887e0(
              v7 + v13 - 49, *(_QWORD*)(*(_QWORD*)(v2 + 32) + 392LL) +
                                 24LL * (*(_DWORD*)(v2 + 176) + (int)v10));
          if (*(_BYTE*)(v7 + v13) == 1) {
            v23 = *(_QWORD*)(v7 + v13 - 41);
            LODWORD(a2) = *(_DWORD*)(v22 - 45);
            *(_QWORD*)(v22 - 25) = *(_QWORD*)(v7 + v13 - 49);
            v24 = *(_QWORD*)(v7 + v13 - 33);
            *(_QWORD*)(v22 - 17) = v23;
            *(_QWORD*)(v22 - 9) = v24;
            v25 = true;
            if (*(float*)&a2 >= 1.0) {
              LODWORD(a2) = *(_DWORD*)(v22 - 41);
              if (*(float*)&a2 <= 0.0) {
                *(float*)&a2 = fminf(*(float*)(v22 - 49), *(float*)(v22 - 37));
                v25 = *(float*)&a2 < 1.0;
              }
            }
            v12 = (_BYTE*)(v7 + v13);
            *(v12 - 1) = v25;
            *v12 = 0;
          }
          v7 = *(_QWORD*)(v2 + 184);
          ++v10;
          v11 = 1;
          if (0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(v2 + 192) - v7) >> 3) <=
              v10) {
            goto LABEL_37;
          }
          goto LABEL_11;
        }
        v21 =
            ((unsigned __int8)*(_DWORD*)(v7 + v13 - 9) ^ (unsigned __int8)v9) &
            0x3F;
        *(_BYTE*)(v7 + v13) =
            (((unsigned __int8)*(_DWORD*)(v7 + v13 - 9) ^ (unsigned __int8)v9) &
             0x3F) != 0;
        if (v21 != 0) {
          goto LABEL_32;
        }
      }
      else if ((*(_BYTE*)(v7 + v13) & 1) != 0) {
        goto LABEL_32;
      }
      v7 = *(_QWORD*)(v2 + 184);
      ++v10;
      v13 += 56;
    } while (0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(v2 + 192) - v7) >> 3) > v10);
    if ((v11 & 1) == 0) {
      goto LABEL_39;
    }
  LABEL_37:
    v26 = *(__int64**)(v2 + 32);
    v27 = *((_BYTE*)v26 + 112);
    v28 = *((_BYTE*)v26 + 115);
    *((_BYTE*)v26 + 417) = 1;
    v29 = v27 & (unsigned __int8)~v28 & 1;
    if (*((unsigned __int8*)v26 + 140) != v29) {
      v30 = *v26;
      *((_BYTE*)v26 + 140) = v29;
      result = (*(__int64 (**)(__int64*, const char*, long double))(v30 + 40))(
          v26, "co_instance", a2);
      *((_BYTE*)v26 + 417) = 1;
    }
  }

LABEL_39:
  v31 = *(__int64**)(v2 + 32);
  if (v31 != nullptr && *((_DWORD*)v31 + 34) != 0) {
    v32 = *((_BYTE*)v31 + 115);
    *((_BYTE*)v31 + 116) = *(float*)(v2 + 132) < 1.0;
    v33 = (_BYTE)v31[14] & (unsigned __int8)~v32 & 1;
    if (*((unsigned __int8*)v31 + 140) != v33) {
      v34 = *v31;
      *((_BYTE*)v31 + 140) = v33;
      result = (*(__int64 (**)(__int64*, const char*))(v34 + 40))(
          v31, "co_instance");
      *((_BYTE*)v31 + 417) = 1;
    }
  }
  return result;
}

void ModelModule_a7f2a0(__int64 a1, __int64* a2, int a3, float32x4_t* a4,
                        char a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  __int64 v16;
  float32x4_t v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float32x4_t v30;
  __int64 v31;
  float v32;
  float v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  struct {
    int v39;
    char v40;
    char v41;
    bool v42;
  } v39_;

  v5 = *(_QWORD*)(a1 + 24);
  v39_.v39 = a3;
  v39_.v41 = a5;
  v39_.v42 = false;
  v39_.v40 = 1;
  if (a3 >= 1) {
    v10 = 1;
    v11 = a2;
    while (1) {
      v13 = *v11++;
      v12 = v13;
      v14 = *(float*)(v13 + 44);
      if (vabds_f32(*(float*)(v13 + 40), v14) >= 0x1.0000000000000p-23f) {
        break;
      }
      v15 = vabds_f32(v14, *(float*)(v12 + 48));
      v39_.v42 = v15 >= 0x1.0000000000000p-23f;
      if (v10 < (a3 & 0x7FFFFFFFu)) {
        ++v10;
        if (v15 < 0x1.0000000000000p-23f) {
          continue;
        }
      }
      goto LABEL_8;
    }
    v39_.v42 = true;
  }
LABEL_8:
  v16 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 512, 16, 0);
  GameRoutine_19850c0_alt1((__int64*)v16, v5, (unsigned int*)&v39_.v39);
  v18 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = v16;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    v16 = *(_QWORD*)(a1 + 32);
  }
  *(_DWORD*)(v16 + 36) = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 36LL);
  *(_QWORD*)(*(_QWORD*)(a1 + 32) + 104LL) |= 1uLL;
  if (*(_BYTE*)(a1 + 112) == 1 && *(_QWORD*)(a1 + 24) != 0) {
    v19 = *(_QWORD*)(a1 + 48);
    *(_BYTE*)(a1 + 112) = 0;
    if (v19 != 0) {
      v20 = std___1___shared_weak_count_lock_alt1(v19);
      if (v20 != 0) {
        v21 = v20;
        v22 = *(_QWORD*)(a1 + 40);
        if (v22 != 0) {
          Scene_a70ec0_alt1(v22, *(_QWORD*)(a1 + 72));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak_alt1(v21);
        }
      }
    }
  }
  if ((*(_BYTE*)(a1 + 113) & 1) == 0 && *(_QWORD*)(a1 + 32) != 0) {
    v23 = *(_QWORD*)(a1 + 48);
    *(_BYTE*)(a1 + 113) = 1;
    if (v23 != 0) {
      v24 = std___1___shared_weak_count_lock_alt1(v23);
      if (v24 != 0) {
        v25 = v24;
        v26 = *(_QWORD**)(a1 + 40);
        if (v26 != nullptr) {
          *(_QWORD*)(a1 + 80) = Scene_a70a20_alt1(v26, *(_QWORD*)(a1 + 32));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          std___1___shared_weak_count___release_weak_alt1(v25);
        }
      }
    }
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 24) + 32LL) = 0;
  *(_BYTE*)(*(_QWORD*)(a1 + 32) + 32LL) = 0;
  if (a3 >= 1) {
    v27 = a3 & 0x7FFFFFFF;
    v28 = 0;
    do {
      v29 = a2[v28];
      v30 = *a4;
      v31 = *(_QWORD*)(a1 + 32);
      LANES128(v17).n128_u32[0] = *(_DWORD*)(v29 + 16);
      v32 = *(float*)(v29 + 28);
      v33 = *(float*)(v29 + 32);
      LANES128(v17).n128_u32[1] = *(_DWORD*)(v29 + 20);
      LANES128(v17).n128_u32[2] = *(_DWORD*)(v29 + 24);
      v34 = vaddq_f32(v17, *a4);
      LANES128(v17).n128_u64[0] = *(_QWORD*)(v29 + 40);
      PSEUDO_LOW_LANE128(v30, n128_f32,
                         *(float*)(v29 + 36) * 0x1.1df46a0000000p-6f);
      LANES128(v17).n128_u32[2] = *(_DWORD*)(v29 + 48);
      v36 = v17;
      v37 = v34;
      LANES128(v35).n128_u64[0] =
          __PAIR64__(v33 * 0x1.1df46a0000000p-6f, v32 * 0x1.1df46a0000000p-6f);
      LANES128(v35).n128_u64[1] = LANES128(v30).n128_u32[0];
      v38 = v35;
      InstanceModel_19862d0(v31, v28++, &v36, &v38, &v37, v30);
    } while (v27 != v28);
  }
}

#pragma GCC visibility pop
