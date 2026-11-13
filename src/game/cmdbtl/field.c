#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 Seq_a85600(_QWORD);
__int64 Shape_f64760(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2001a98[])();
extern __int64 (*game_cmdbtl_Field_vtable[])();
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_21c6978;
extern __int64 GameData_2219078;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2219070;
void Field_Destructor_alt1(__int64 a1, __n128 a2) __asm__("Field_Destructor");
void Field_1012de0(__int64 a1);
__int64 Field_1012de0_alt1(_QWORD) __asm__("Field_1012de0");
__int64 Field_1012ce0(__int64 result);
__int64 GameRoutine_2b0();
__int64 GameRoutine_ecb40(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern __int64 GameData_212c638;
extern __int64 GameData_21fdde0;
extern __int64 GameData_21fdde8;
void Registration_a5aca0(__int64);
__int64 Field_1012f40(__int64 a1);
__int64 Field_1012de0_alt2(__int64 result) __asm__("Field_1012de0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void Seq_a85600_alt1(__int64) __asm__("Seq_a85600");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Field_Destructor(__int64 a1);
__attribute__((swiftcall)) void Shape_f643c0(PSEUDO_X8, __int64, __int64, int,
                                             float, float, float);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
double cos(double);
double sin(double);
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_9baea0();
void Field_1013090(_QWORD* a1, int8x16_t* a2, float a3, float a4, float a5);

void Field_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  *(_QWORD*)a1 = game_cmdbtl_Field_vtable;
  if (*(int*)(a1 + 16) >= 1) {
    v2 = *(_QWORD*)(a1 + 72);
    v3 = *(_QWORD*)(v2 + 8);
    for (i = *(_QWORD*)(v2 + 16); i != v3; i -= 16) {
      v5 = *(_QWORD*)(i - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
    }
    *(_QWORD*)(v2 + 16) = v3;
    Seq_a85600_alt1(GameData_21c6978);
    Field_1012de0_alt2(a1);
  }
  v6 = *(_QWORD*)(a1 + 80);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = *(_QWORD*)(a1 + 64);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  v8 = *(_QWORD*)(a1 + 24);
  if (v8 != 0) {
    v9 = *(_QWORD*)(a1 + 32);
    if (v8 == v9) {
      goto LABEL_23;
    }
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
      v9 -= 16;
    } while (v9 != v8);
    v11 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 32) = v8;
    v8 = v11;
    if (v11 != 0) {
    LABEL_23:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v8);
    }
  }
  *(_QWORD*)a1 = GameData_2001a98;
  if (GameData_2219078 == a1) {
    GameData_2219078 = 0;
    GameData_2219070 = 0;
  }
}

__int64 Field_1012ce0(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;

  v1 = result;
  v2 = *(_DWORD*)(result + 16) - 1;
  *(_DWORD*)(result + 16) = v2;
  if (v2 != 0) {
    if (v2 > 0) {
      return result;
    }
  }
  else {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(result + 8) + 8LL))(result + 8);
    if (*(int*)(v1 + 16) > 0) {
      return result;
    }
  }
  v3 = *(_QWORD*)(v1 + 72);
  v4 = *(_QWORD*)(v3 + 8);
  for (i = *(_QWORD*)(v3 + 16); i != v4; i -= 16) {
    v6 = *(_QWORD*)(i - 8);
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  *(_QWORD*)(v3 + 16) = v4;
  Seq_a85600(GameData_21c6978);
  return Field_1012de0_alt1(v1);
}

void Field_1012de0(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64 v7;
  _QWORD v8[2];

  *(_QWORD*)(*(_QWORD*)GameData_212c7d8[0] + 176LL) =
      *(_QWORD*)(*(_QWORD*)GameData_212c7d8[0] + 168LL);
  v2 = *(__int64**)(a1 + 24);
  v3 = *(__int64**)(a1 + 32);
  if (v2 != v3) {
    while (1) {
      v4 = *v2;
      v5 = v2[1];
      if (v5 != 0) {
        v6 = (atomic_ullong*)(v5 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
        v8[0] = v4;
        v8[1] = v5;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
        Shape_f64760(v8);
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            goto LABEL_10;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
          if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          LABEL_10:
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak(v5);
          }
        }
      }
      else {
        v8[0] = *v2;
        v8[1] = 0;
        Shape_f64760(v8);
      }
      v2 += 2;
      if (v2 == v3) {
        v2 = *(__int64**)(a1 + 24);
        v3 = *(__int64**)(a1 + 32);
        break;
      }
    }
  }
  while (v3 != v2) {
    v7 = *(v3 - 1);
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    v3 -= 2;
  }
  *(_QWORD*)(a1 + 32) = v2;
}

__int64 Field_1012f40(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) == v2) {
    v3 = 0;
    if ((GameRoutine_ecb40() & 1) == 0) {
      return 1;
    }
  }
  else {
    v3 = *(_QWORD*)(v2 - 8);
    if ((GameRoutine_ecb40() & 1) == 0) {
      return 1;
    }
  }
  v4 = *(_QWORD*)(v3 + 64);
  if (v4 != 0) {
    v5 = *(_QWORD*)(v4 + 96);
    if (v5 == 0 || *(_DWORD*)(v5 + 240) != 5) {
      return 1;
    }
    v6 = (_QWORD*)(v4 + 120);
    while (1) {
      v6 = (_QWORD*)*v6;
      if (v6 == nullptr) {
        break;
      }
      if (*(_DWORD*)(v6[5] + 240LL) != 5) {
        return 1;
      }
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    Registration_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21fde98);
  }
  if (GameData_21fdde0 == GameData_21fdde8) {
    v8 = *(_QWORD*)(a1 + 72);
    v9 = *(_QWORD*)(v8 + 8);
    v10 = *(_QWORD*)(v8 + 16);
    if (v9 == v10) {
      return 0;
    }
    while (1) {
      v11 = *(_QWORD*)(*(_QWORD*)v9 + 32LL);
      if (v11 != 0 && (*(_BYTE*)(v11 + 342) & 1) == 0) {
        break;
      }
      v9 += 16;
      if (v9 == v10) {
        return 0;
      }
    }
  }
  return 1;
}

void Field_1013090(_QWORD* a1, int8x16_t* a2, float a3, float a4, float a5)
{
  unsigned int v8;
  double v9;
  double v10;
  double v11;
  float32x4_t v12;
  float v13;
  unsigned __int64 v14;
  unsigned int v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  int8x16_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  signed __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    __int64 v54;
    __int64 v55;
  } v54_;
  _QWORD v56[8];
  int8x16x2_t v57;
  int8x16x2_t v58;
  int8x16x2_t v59;

  *(float*)&v8 = (float)(PSEUDO_UNFUSED(a4 * 0x1.0000000000000p-1f)) +
                 0x1.0000000000000p+1f;
  v9 = (float)(a3 * 0x1.1df46a0000000p-6f) * 0x1.0000000000000p-1;
  v10 = cos(v9);
  v11 = sin(v9);
  LANES128(v59.val[1]).n128_u64[0] = 0;
  LANES128(v12).n128_u64[0] = 0;
  v13 = v10 + PSEUDO_UNFUSED(v11 * 0x0.0p+0);
  *(float*)&v14 = PSEUDO_UNFUSED(v11 * -0x0.0p+0) + v10 * 0x0.0p+0;
  *(float*)&v15 = v11 + PSEUDO_UNFUSED(v10 * 0x0.0p+0);
  LANES128(v57.val[1]).n128_u64[0] = __PAIR64__(v15, v14);
  LANES128(v57.val[1]).n128_u64[1] = __PAIR64__(LODWORD(v13), v14);
  LANES128(v59.val[1]).n128_u64[1] =
      COERCE_UNSIGNED_INT((float)(PSEUDO_UNFUSED(a5 * 0x1.0000000000000p-1f)) +
                          0x1.0000000000000p+0f);
  LANES128(v16).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v59.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  v17 = vmulq_f32(v57.val[1], COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v57.val[1]).n128_u32[3] = 0;
  LANES128(v16).n128_u64[1] = LANES128(v16).n128_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v59.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v19).n128_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v59.val[1]).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v59.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v59.val[1]).n128_u64[0];
  *(int32x2_t*)&LANES128(v59.val[1]).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v17).n128_u64[0]), 1);
  v21 = vmlaq_f32(
      vmlaq_f32(vmulq_f32(v16, v17), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v12, v18)),
      COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v59.val[1], v20));
  LANES128(v59.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v59.val[1]).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  *((float*)&v14 + 1) = v13;
  v22 = vmlsq_f32(v21, v59.val[1], v19);
  LANES128(v23).n128_u64[0] = __PAIR64__(v15, v14);
  LANES128(v17).n128_u64[0] = LANES128(v23).n128_u64[0];
  LANES128(v24).n128_u64[0] = LANES128(v23).n128_u64[0];
  LANES128(v23).n128_u64[1] = v14;
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v59.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v25).n128_u64[1] = LANES128(v25).n128_u64[0];
  LANES128(v24).n128_u64[1] = LANES128(v59.val[1]).n128_u64[0];
  *(int8x8_t*)&LANES128(v26).n128_i8[8] =
      vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v59.val[1]).n128_u64[1] = LANES128(v23).n128_u64[0];
  LANES128(v23).n128_u64[1] = LANES128(v17).n128_u64[0];
  v27 = vmlaq_f32(vmulq_f32(v25, v22), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v24, v26));
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v26).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 1);
  v28 = vmlaq_f32(v27, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v23, v26));
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v57.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v23).n128_i8[8] =
      vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v29 = vmlsq_f32(v28, v23, v59.val[1]);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(
          vrev64_s32(COERCE_AS(int32x2_t, LANES128(v57.val[1]).n128_u64[0])))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v57.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v26).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v57.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v57.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v23).n128_u64[1] = LANES128(v12).n128_u64[1];
  LANES128(v29).n128_u32[3] = 0;
  LANES128(v18).n128_u64[1] = LANES128(v26).n128_u64[0];
  v30 = vmulq_f32(v12, v57.val[1]);
  LANES128(v57.val[1]).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v57.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v31 = vmulq_f32(v23, v23);
  v32 = vmulq_f32(v18, v18);
  v33 = vaddq_f32(v30, v30);
  LANES128(v57.val[1]).n128_u64[1] = LANES128(v26).n128_u64[0];
  v34 = vmulq_n_f32(v57.val[1], v13);
  v35 = vaddq_f32(v34, v34);
  v59.val[0] = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                         vaddq_f32(vaddq_f32(v31, v31), vaddq_f32(v32, v32)));
  v58.val[0] = vaddq_f32(v33, v35);
  v58.val[1] = vsubq_f32(v33, v35);
  LANES128(v57.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v58, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  LANES128(v59.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v58, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v57.val[1]).n128_i8[8] =
      vqtbl2_s8(v58, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v59.val[1]).n128_i8[8] =
      vqtbl2_s8(v58, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v57.val[0] = v59.val[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v57, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  LANES128(v33).n128_u32[0] =
      LANES64_OF(vqtbl2_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL)))
          .n64_u32[0];
  LANES128(v58.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v57, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  LANES128(v57.val[0]).n128_u32[0] =
      LANES64_OF(vqtbl2_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL)))
          .n64_u32[0];
  LANES128(v26).n128_u32[0] = 1112014848;
  LANES128(v26).n128_u32[1] =
      LANES64_OF(
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v26).n128_u64[0]), 0))
          .n64_u32[1];
  LANES128(v57.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v59, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  LANES128(v26).n128_u32[0] = *(unsigned __int32*)&(*a2);
  LANES128(v26).n128_u64[1] = LANES128_OF(vextq_s8(*a2, *a2, 8u)).n128_u32[0];
  *(float32x4_t*)v56 = vmlaq_n_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v16).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1),
      COERCE_AS(float32x4_t, GameData_1a83090), LANES128(v33).n128_f32[0]);
  *(float32x4_t*)&v56[2] = vmlaq_n_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v58.val[0]).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v58.val[0]).n128_u64[0]),
                     1),
      COERCE_AS(float32x4_t, GameData_1a83090),
      LANES128(v57.val[0]).n128_f32[0]);
  *(float32x4_t*)&v56[4] = vmlaq_n_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                 LANES128(v57.val[1]).n128_f32[0]),
                     COERCE_AS(float32x4_t, GameData_1a83610),
                     COERCE_AS(float32x2_t, LANES128(v57.val[1]).n128_u64[0]),
                     1),
      COERCE_AS(float32x4_t, GameData_1a83090),
      LANES64_OF(vqtbl2_s8(v59, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL)))
          .n64_f32[0]);
  *(float32x4_t*)&v56[6] =
      vaddq_f32(vaddq_f32(v26, v29), COERCE_AS(float32x4_t, 0));
  Shape_f643c0((void*)(&v54_.v54), (__int64)v56, 8, 0,
               COERCE_AS(float, (unsigned int)(v8)),
               COERCE_AS(float, (unsigned int)(0x43160000u)),
               0x1.0000000000000p+0f);
  v36 = (_QWORD*)a1[4];
  v37 = a1[5];
  if ((unsigned __int64)v36 >= v37) {
    v40 = a1[3];
    v41 = (signed __int64)v36 - v40;
    v42 = ((__int64)v36 - v40) >> 4;
    v43 = v42 + 1;
    if ((unsigned __int64)(v42 + 1) >> 60 != 0) {
      GameRoutine_9baea0();
    }
    v44 = v37 - v40;
    if (v44 >> 3 > v43) {
      v43 = v44 >> 3;
    }
    if ((unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF0LL) {
      v45 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v45 = v43;
    }
    if (v45 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v46 = fw_memory_g_heap_manager_ptr;
    v47 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v45, 16, 0);
    v48 = v54_.v55;
    v49 = (_QWORD*)(v47 + v41);
    v50 = v47 + 16 * v45;
    *v49 = v54_.v54;
    v49[1] = v48;
    if (v48 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                                memory_order_relaxed);
      v40 = a1[3];
      v41 = a1[4] - v40;
      v42 = v41 >> 4;
    }
    v51 = (__int64)&v49[-2 * v42];
    v39 = v49 + 2;
    memcpy(v51, v40, v41);
    a1[3] = v51;
    a1[4] = v39;
    a1[5] = v50;
    if (v40 != 0) {
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v46 + v52, v40);
    }
  }
  else {
    *v36 = v54_.v54;
    v38 = v54_.v55;
    v36[1] = v54_.v55;
    if (v38 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                memory_order_relaxed);
    }
    v39 = v36 + 2;
  }
  a1[4] = v39;
  v53 = v54_.v55;
  if (v54_.v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54_.v55 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak_alt1(v53);
  }
}

#pragma GCC visibility pop
