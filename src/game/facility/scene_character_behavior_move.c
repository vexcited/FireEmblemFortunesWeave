#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
__int64 SceneCharacterBehaviorMove_Unknown7(__int64 result);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__int64 GameRoutine_14127e0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 SceneCharacter_1401550(__int64, __int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* GameData_2131330;
extern _UNKNOWN GameData_21a61b0;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a61a0;
extern __int64* GameData_2131328;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float atan2f(long double, float);
void SceneCharacter_1401180(__int64, float);
void __attribute__((noreturn)) GameRoutine_8123d0(void);
void __attribute__((noreturn))
GameRoutine_8123d0_alt1(_QWORD) __asm__("GameRoutine_8123d0");
__n128 SceneCharacterBehaviorMove_Unknown3(__int64 a1);
void SceneCharacterBehaviorMove_Unknown4(float32x4_t* a1);
__int64 SceneCharacterBehaviorMove_Unknown5(__int64 a1);
__int64 SceneCharacterBehaviorMove_Unknown6(float32x4_t* a1);

__n128 SceneCharacterBehaviorMove_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int128 v8;
  int v9;
  __int64 v10;
  float v11;
  int v12;
  unsigned __int8 explicit;
  __int64* v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __n128 result;
  __int64 v20;
  int v21;
  __int64 v22;
  struct {
    _QWORD v23[3];
    int v24;
    char v25;
    char gap45_[3];
    int v26;
    int v27;
    int v28;
    __int16 v29;
  } v23_;
  struct {
    __int128 v30;
    char gap80_[8];
    char v31;
    char gap89_[15];
    __int64 v32;
  } v30_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_facility_140d160((void*)(&v30_.v30), a1 + 32),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 16);
  v3 = *(_QWORD*)(v2 + 192);
  v4 = *(_QWORD*)(v2 + 200);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = *(_OWORD*)(v3 + 16);
  *(_QWORD*)(a1 + 64) = v5;
  v6 = *(_OWORD*)(a1 + 64);
  *((_QWORD*)&v6 + 1) = DWORD2(v5);
  *(_OWORD*)(a1 + 64) = v6;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v7 = v30_.v30;
  if (*(_BYTE*)(a1 + 96) == 1) {
    *(_QWORD*)(a1 + 80) = v30_.v30;
    v8 = *(_OWORD*)(a1 + 80);
    *((_QWORD*)&v8 + 1) = DWORD2(v7);
    v7 = v8;
  }
  else {
    *(_BYTE*)(a1 + 96) = 1;
  }
  v9 = *(unsigned __int8*)(a1 + 56);
  *(_OWORD*)(a1 + 80) = v7;
  v10 = *(_QWORD*)(a1 + 16);
  v11 = 0x1.8000020000000p+2f;
  if (v9 != 0) {
    v12 = -304822991;
  }
  else {
    v12 = 1373748927;
  }
  if (v9 == 0) {
    v11 = 0x1.0000000000000p+0f;
  }
  *(float*)(a1 + 112) = v11;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2131330,
                                  memory_order_acquire);
  v14 = GameData_2131328;
  if ((explicit & 1) == 0) {
    v22 = v10;
    v21 = __cxa_guard_acquire(GameData_2131330),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v14 = GameData_2131328;
    v10 = v22;
    if (v21 != 0) {
      *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_2131328 + 4) = 0;
      *v14 = 0xBF800000BF800000LL;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14) = -1082130432;
      __cxa_guard_release(GameData_2131330),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v14 = GameData_2131328;
      v10 = v22;
    }
  }
  v15 = *(_DWORD*)v14;
  v16 = *((_DWORD*)v14 + 1);
  v23_.v23[0] = 0;
  v23_.v24 = v12;
  v23_.v25 = 2;
  v17 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14);
  v23_.v26 = v15;
  v23_.v27 = v16;
  v23_.v28 = v17;
  v23_.v29 = WORD2(v17);
  SceneCharacter_1401550(v10, (__int64)v23_.v23),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v23_.v23[0] & 1) != 0 && v23_.v23[2] != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  SceneCharacter_1401180(*(_QWORD*)(a1 + 16), 0x1.0000000000000p-1f),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v30_.v31 & 1) != 0 && v30_.v32 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
  }
  return result;
}

void SceneCharacterBehaviorMove_Unknown4(float32x4_t* a1)
{
  __int64 v2;
  unsigned __int64 v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  float i;
  unsigned __int64 v9;
  float32x4_t* v10;
  __int64 v11;
  float32x4_t v12;
  long double v13;
  float v14;
  float32x2_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  long double v19;
  float v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  float j;
  char v28;
  float k;
  char v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  float m;
  double v35;
  double v36;
  double v37;
  unsigned __int64 v38;
  float32x4_t* v39;
  __int64 v40;
  int8x16_t v41;
  unsigned __int32 v42;
  unsigned __int32 v43;
  double v44;
  int8x16_t v45;
  unsigned __int32 v46;
  unsigned __int64 v47;
  float32x4_t* v48;
  __int64 v49;
  float32x4_t v50;
  unsigned int v51;
  unsigned int v52;
  unsigned __int64 v53;
  float32x4_t v54;
  float32x4_t v55;
  int8x16_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  unsigned __int64 v61;
  float32x4_t v62;
  int8x16_t v63;
  int8x16_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16_t v69;
  float v70;
  float v71;
  unsigned __int64 v72;
  __int64 v73;
  float32x4_t* v74;
  float v75;
  unsigned __int64 v76;
  float v77;
  __int64 v78;
  __int64 v79;
  float v80;
  float v81;
  float32x4_t v82;
  __int64 v83;
  float v84;
  int8x16_t v85;
  float32x4_t v86;
  float32x4_t v87;

  v2 = game_script_hub_g_frame_counter_ptr[0];
  v3 = LANES128(a1[1]).n128_u64[0];
  if (LANES128(a1[3]).n128_u8[8] != 0) {
    v4 = 0x1.9000000000000p+8;
  }
  else {
    v4 = 0x1.e000000000000p+7;
  }
  v5 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL);
  v6 = *(_QWORD*)(v3 + 192);
  v7 = *(_QWORD*)(v3 + 200);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    for (i = *(float*)(v6 + 32); i < -0x1.6800000000000p+7;
         i = i + 0x1.6800000000000p+8)
      ;
    for (; i >= 0x1.6800000000000p+7; i = i + -0x1.6800000000000p+8)
      ;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
    }
  }
  else {
    for (i = *(float*)(v6 + 32); i < -0x1.6800000000000p+7;
         i = i + 0x1.6800000000000p+8)
      ;
    for (; i >= 0x1.6800000000000p+7; i = i + -0x1.6800000000000p+8)
      ;
  }
  if ((LANES128(a1[6]).n128_u8[0] & 1) == 0) {
  LABEL_112:
    GameRoutine_8123d0();
  }
  v9 = LANES128(a1[1]).n128_u64[0];
  v10 = *(float32x4_t**)(v9 + 192);
  v11 = *(_QWORD*)(v9 + 200);
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
  }
  v13 = *(long double*)&a1[5];
  v12 = vsubq_f32(*(float32x4_t*)&v13, v10[1]);
  LODWORD(v13) = LANES128(v12).n128_u32[2];
  if (LANES128(v12).n128_f32[0] != 0.0 ||
      (v14 = 0.0, LANES128(v12).n128_f32[2] != 0.0)) {
    LANES64(v15).n64_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u32[2]),
                         COERCE_AS(float32x2_t, LANES128(v12).n128_u32[2])),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v12).n128_u32[0]))))
            .n64_u64[0];
    LANES128(v16).n128_u64[0] = LANES64_OF(vpadd_f32(v15, v15)).n64_u64[0];
    LANES128(v16).n128_u64[1] = LANES128(v16).n128_u64[0];
    v17 = vrsqrteq_f32(v16);
    v18 = vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v16, v17)));
    v19 = COERCE_LONG_DOUBLE(vbicq_s8(
        vmulq_f32(v12, vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v16, v18)))),
        vceqzq_f32(v16)));
    LANES128(v12).n128_f32[0] = atan2f(v19, *((float*)&v19 + 2));
    LODWORD(v13) = 1113927392;
    v14 = LANES128(v12).n128_f32[0] * 0x1.ca5dc00000000p+5;
    if ((float)(LANES128(v12).n128_f32[0] * 0x1.ca5dc00000000p+5) <
        -0x1.6800000000000p+7) {
      LODWORD(v13) = -1020002304;
      do {
        v14 = v14 + 0x1.6800000000000p+8;
      } while (v14 < -0x1.6800000000000p+7);
    }
    LANES128(v12).n128_u32[0] = 1127481344;
    if (v14 >= 0x1.6800000000000p+7) {
      LANES128(v12).n128_u32[0] = -1011613696;
      LODWORD(v13) = 1127481344;
      do {
        v14 = v14 + -0x1.6800000000000p+8;
      } while (v14 >= 0x1.6800000000000p+7);
    }
  }
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double, long double))(*(_QWORD*)v11 + 16LL))(
        v11, *(long double*)&v12, v13);
    std___1___shared_weak_count___release_weak_alt1(v11);
    if (i == v14) {
      goto LABEL_76;
    }
  }
  else if (i == v14) {
    goto LABEL_76;
  }
  for (; i < -0x1.6800000000000p+7; i = i + 0x1.6800000000000p+8)
    ;
  for (; i >= 0x1.6800000000000p+7; i = i + -0x1.6800000000000p+8)
    ;
  for (; v14 < -0x1.6800000000000p+7; v14 = v14 + 0x1.6800000000000p+8)
    ;
  for (; v14 >= 0x1.6800000000000p+7; v14 = v14 + -0x1.6800000000000p+8)
    ;
  if (vabds_f32(v14, i) <= 0x1.6800000000000p+7) {
    v20 = v14 - i;
    if ((float)(v14 - i) == 0.0) {
      goto LABEL_76;
    }
    goto LABEL_59;
  }
  if (i >= 0.0) {
    if (i != 0.0 && i >= 0x1.6800000000000p+8) {
      do {
        i = i + -0x1.6800000000000p+8;
      } while (i >= 0x1.6800000000000p+8);
    }
  }
  else {
    do {
      i = i + 0x1.6800000000000p+8;
    } while (i < 0.0);
  }
  if (v14 >= 0.0) {
    if (v14 != 0.0 && v14 >= 0x1.6800000000000p+8) {
      do {
        v14 = v14 + -0x1.6800000000000p+8;
      } while (v14 >= 0x1.6800000000000p+8);
    }
  }
  else {
    do {
      v14 = v14 + 0x1.6800000000000p+8;
    } while (v14 < 0.0);
  }
  v20 = v14 - i;
  if ((float)(v14 - i) > 0x1.6800000000000p+7) {
    v20 = (float)(v14 - i) + -0x1.6800000000000p+8;
  }
  if (v20 < -0x1.6800000000000p+7) {
    v20 = v20 + 0x1.6800000000000p+8;
  }
  if (v20 != 0.0) {
  LABEL_59:
    v21 = LANES128(a1[1]).n128_u64[0];
    v22 = *(_QWORD*)(v21 + 192);
    v23 = *(_QWORD*)(v21 + 200);
    v24 =
        v4 * (float)((float)(v5 * 0x1.0aef000000000p+4) / 0x1.f400000000000p+9);
    v25 = -v24;
    if (v20 > (float)-v24) {
      v25 = v20;
    }
    if (v20 >= v24) {
      v26 = v4 *
            (float)((float)(v5 * 0x1.0aef000000000p+4) / 0x1.f400000000000p+9);
    }
    else {
      v26 = v25;
    }
    if (v23 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                memory_order_relaxed);
      for (j = v26 + *(float*)(v22 + 32); j < -0x1.6800000000000p+7;
           j = j + 0x1.6800000000000p+8)
        ;
      for (; j >= 0x1.6800000000000p+7; j = j + -0x1.6800000000000p+8)
        ;
      v28 = *(_BYTE*)(v22 + 40);
      *(float*)(v22 + 32) = j;
      *(_BYTE*)(v22 + 40) = v28 | 2;
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak_alt1(v23);
      }
    }
    else {
      for (k = v26 + *(float*)(v22 + 32); k < -0x1.6800000000000p+7;
           k = k + 0x1.6800000000000p+8)
        ;
      for (; k >= 0x1.6800000000000p+7; k = k + -0x1.6800000000000p+8)
        ;
      v30 = *(_BYTE*)(v22 + 40);
      *(float*)(v22 + 32) = k;
      *(_BYTE*)(v22 + 40) = v30 | 2;
    }
  }
LABEL_76:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a61b0) != 0) {
    v83 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v83;
    __cxa_guard_release(&GameData_21a61b0);
  }
  v31 = LANES128(a1[1]).n128_u64[0];
  v32 = *(_QWORD*)(v31 + 192);
  v33 = *(_QWORD*)(v31 + 200);
  v85 = COERCE_AS(int8x16_t, GameData_21a61a0);
  if (v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                              memory_order_relaxed);
    for (m = *(float*)(v32 + 32); m < -0x1.6800000000000p+7;
         m = m + 0x1.6800000000000p+8)
      ;
    for (; m >= 0x1.6800000000000p+7; m = m + -0x1.6800000000000p+8)
      ;
    if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      std___1___shared_weak_count___release_weak_alt1(v33);
    }
  }
  else {
    for (m = *(float*)(v32 + 32); m < -0x1.6800000000000p+7;
         m = m + 0x1.6800000000000p+8)
      ;
    for (; m >= 0x1.6800000000000p+7; m = m + -0x1.6800000000000p+8)
      ;
  }
  v35 = (float)(m * 0x1.1df46a0000000p-6) * 0.5;
  v36 = cos(v35);
  v37 = sin(v35);
  v38 = LANES128(a1[1]).n128_u64[0];
  v39 = *(float32x4_t**)(v38 + 192);
  v40 = *(_QWORD*)(v38 + 200);
  if (v40 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                              memory_order_relaxed);
    v41 = vsubq_f32(v39[1], a1[4]);
    v42 = LANES128_OF(vextq_s8(v41, v41, 8u)).n128_u32[0];
    LANES128(v41).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, v42),
                         COERCE_AS(float32x2_t, v42)),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v41).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v41).n128_u32[0]))))
            .n64_u64[0];
    v43 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]))))
              .n64_u32[0];
    if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v44 = v37;
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      std___1___shared_weak_count___release_weak_alt1(v40);
      v37 = v44;
    }
  }
  else {
    v45 = vsubq_f32(v39[1], a1[4]);
    v46 = LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u32[0];
    LANES128(v45).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, v46),
                         COERCE_AS(float32x2_t, v46)),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u32[0]),
                         COERCE_AS(float32x2_t, LANES128(v45).n128_u32[0]))))
            .n64_u64[0];
    v43 = LANES64_OF(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]))))
              .n64_u32[0];
  }
  v47 = LANES128(a1[1]).n128_u64[0];
  v48 = *(float32x4_t**)(v47 + 192);
  v49 = *(_QWORD*)(v47 + 200);
  if (v49 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((LANES128(a1[6]).n128_u8[0] & 1) == 0) {
    goto LABEL_112;
  }
  LANES128(v50).n128_u64[0] = LANES128(v85).n128_u64[0];
  *(float*)&v51 = v37 + v36 * 0.0;
  *(float*)&v52 = v36 + v37 * 0.0;
  *(float*)&v53 = v37 * -0.0 + v36 * 0.0;
  LANES128(v54).n128_u64[0] = __PAIR64__(v51, v53);
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v55).n128_u64[1] = LANES128(v55).n128_u64[0];
  LANES128(v54).n128_u64[1] = __PAIR64__(v52, v53);
  v56 = vmulq_f32(v54, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v57).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v58).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v59).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v60).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v57).n128_i8[8] =
      vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v50).n128_u64[1] = LANES128(v58).n128_u64[0];
  LANES128(v58).n128_u64[1] = LANES128(v59).n128_u64[0];
  LANES128(v59).n128_u64[1] = LANES128(v85).n128_u64[0];
  *(int32x2_t*)&LANES128(v60).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v56).n128_u64[0]), 1);
  LANES128(v62).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  HIDWORD(v53) = v52;
  *(int8x8_t*)&LANES128(v62).n128_i8[8] =
      vqtbl1_s8(v56, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v63).n128_u64[0] = __PAIR64__(v51, v53);
  v61 = LANES128(v63).n128_u64[0];
  LANES128(v63).n128_u64[1] = v53;
  v64 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v55, v56),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v50, v57)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v59, v60)),
                  v62, v58);
  LANES128(v58).n128_u64[0] = LANES128(v63).n128_u64[0];
  LANES128(v56).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v65).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v63, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v66).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v63, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v63).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v63, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v67).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v54).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v65).n128_u64[1] = LANES128(v65).n128_u64[0];
  LANES128(v58).n128_u64[1] = LANES128(v66).n128_u64[0];
  *(int8x8_t*)&LANES128(v56).n128_i8[8] =
      vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v67).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v64).n128_u64[0]), 1);
  LANES128(v66).n128_u64[1] = LANES128(v63).n128_u64[0];
  LANES128(v63).n128_u64[1] = v61;
  *(int8x8_t*)&LANES128(v54).n128_i8[8] =
      vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v68 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v65, v64),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v58, v56)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v63, v67)),
                  v54, v66);
  LANES128(v68).n128_u32[3] = 0;
  v69 = vsubq_f32(v48[1], a1[5]);
  LANES128(v65).n128_u32[0] = LANES128_OF(vextq_s8(v69, v69, 8u)).n128_u32[0];
  LANES128(v69).n128_u64[0] =
      LANES64_OF(
          vadd_f32(vmul_f32(COERCE_AS(float32x2_t, LANES128(v65).n128_u32[0]),
                            COERCE_AS(float32x2_t, LANES128(v65).n128_u32[0])),
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v69).n128_u32[0]),
                            COERCE_AS(float32x2_t, LANES128(v69).n128_u32[0]))))
          .n64_u64[0];
  LODWORD(v70) =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]))))
          .n64_u32[0];
  if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v86 = v68;
    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
    std___1___shared_weak_count___release_weak_alt1(v49);
    v68 = v86;
  }
  v71 = 0x1.0000000000000p+0;
  LANES128(v68).n128_u32[3] = 0;
  if (v70 <= 0.5) {
    v71 = (float)((float)(v70 * -0x1.9999980000000p-3) +
                  (float)(v70 * -0x1.9999980000000p-3)) +
          0x1.0000000000000p+0;
  }
  v72 = LANES128(a1[1]).n128_u64[0];
  v74 = *(float32x4_t**)(v72 + 192);
  v73 = *(_QWORD*)(v72 + 200);
  v75 = (float)((float)(*(float*)&v43 * 0x1.9999980000000p-3) +
                (float)(*(float*)&v43 * 0x1.9999980000000p-3)) +
        0x1.99999a0000000p-1;
  if (*(float*)&v43 > 0.5) {
    v75 = v71;
  }
  if (v73 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v73 + 8), 1u,
                              memory_order_relaxed);
    v76 = LANES128(a1[1]).n128_u64[0];
    v77 = LANES128(a1[7]).n128_f32[0];
    v78 = *(_QWORD*)(v76 + 192);
    v79 = *(_QWORD*)(v76 + 200);
    v80 = (float)(*(float*)(*(_QWORD*)v2 + 160LL) * 0x1.0aef000000000p+4) /
          0x1.f400000000000p+9;
    if (v79 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v79 + 8), 1u,
                                memory_order_relaxed);
      v81 = *(float*)(v78 + 36);
      if (atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v84 = v75;
        v87 = v68;
        (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
        std___1___shared_weak_count___release_weak_alt1(v79);
        v75 = v84;
        v68 = v87;
      }
    }
    else {
      v81 = *(float*)(v78 + 36);
    }
  }
  else {
    v77 = LANES128(a1[7]).n128_f32[0];
    v81 = LANES128(v74[2]).n128_f32[1];
    v80 = (float)(*(float*)(*(_QWORD*)v2 + 160LL) * 0x1.0aef000000000p+4) /
          0x1.f400000000000p+9;
  }
  v82 = v74[1];
  LANES128(v74[2]).n128_u8[8] |= 1u;
  v74[1] = vaddq_f32(
      v82, vmulq_n_f32(vmulq_n_f32(v68, (float)(v80 * v77) * v81), v75));
  if (v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
    std___1___shared_weak_count___release_weak_alt1(v73);
  }
}

__int64 SceneCharacterBehaviorMove_Unknown5(__int64 a1)
{
  int v2;
  _QWORD* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  unsigned __int8 explicit;
  __int64* v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int128 v19;
  int v20;
  __int64* v21;
  _QWORD v22[3];
  int v23;
  char v24;
  int v25;
  int v26;
  int v27;
  __int16 v28;
  __int64 v29;

  if (*(_BYTE*)(a1 + 56) != 0) {
    v2 = 1747153258;
  }
  else {
    v2 = -2103609736;
  }
  v3 = *(_QWORD**)(a1 + 8);
  if (v3[7] >= 2u &&
      (v4 = *(_QWORD*)(*(_QWORD*)(v3[3] +
                                  8 * ((unsigned __int64)(v3[6] + 1LL) >> 8)) +
                       16LL * (unsigned __int8)(*((_BYTE*)v3 + 48) + 1))) !=
          0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    if ((unsigned __int8)result == 1) {
      return result;
    }
    v6 = *(_QWORD*)(a1 + 16);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2131330,
                                    memory_order_acquire);
    v8 = GameData_2131328;
    if ((explicit & 1) == 0) {
      v29 = v6;
      v9 = __cxa_guard_acquire(GameData_2131330);
      v8 = GameData_2131328;
      v6 = v29;
      if (v9 != 0) {
        *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_2131328 + 4) =
            0;
        *v8 = 0xBF800000BF800000LL;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = -1082130432;
        __cxa_guard_release(GameData_2131330);
        v8 = GameData_2131328;
        v6 = v29;
      }
    }
  }
  else {
    v6 = *(_QWORD*)(a1 + 16);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131330,
                              memory_order_acquire) &
         1) == 0) {
      v29 = v6;
      v20 = __cxa_guard_acquire(GameData_2131330);
      v6 = v29;
      if (v20 != 0) {
        v21 = GameData_2131328;
        *GameData_2131328 = 0xBF800000BF800000LL;
        *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v21 + 4) = 0;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v21) = -1082130432;
        __cxa_guard_release(GameData_2131330);
        v6 = v29;
      }
    }
    v8 = GameData_2131328;
  }
  v10 = *(_DWORD*)v8;
  v11 = *((_DWORD*)v8 + 1);
  v12 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
  v23 = v2;
  v13 = *(_QWORD*)(v6 + 112);
  v14 = *(_QWORD*)(v6 + 120);
  v22[0] = 0;
  v24 = 0;
  v27 = v12;
  v25 = v10;
  v26 = v11;
  v28 = WORD2(v12);
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    result = GameRoutine_14127e0(v13, v22);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      result = std___1___shared_weak_count___release_weak_alt1(v14);
    }
    if ((v22[0] & 1) == 0) {
      goto LABEL_22;
    }
    goto LABEL_18;
  }
  result = GameRoutine_14127e0(v13, v22);
  if ((v22[0] & 1) != 0) {
  LABEL_18:
    if (v22[2] != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
    }
  }
LABEL_22:
  v16 = *(_QWORD*)(a1 + 16);
  v17 = *(_QWORD*)(v16 + 192);
  v18 = *(_QWORD*)(v16 + 200);
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((*(_BYTE*)(a1 + 96) & 1) == 0) {
    GameRoutine_8123d0_alt1(result);
  }
  *(_DWORD*)(v17 + 16) = *(_DWORD*)(a1 + 80);
  *(_DWORD*)(v17 + 20) = *(_DWORD*)(a1 + 84);
  v19 = *(_OWORD*)(v17 + 16);
  DWORD2(v19) = *(_DWORD*)(a1 + 88);
  *(_BYTE*)(v17 + 40) |= 1u;
  *((_QWORD*)&v19 + 1) = DWORD2(v19);
  *(_OWORD*)(v17 + 16) = v19;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    return std___1___shared_weak_count___release_weak_alt1(v18);
  }
  return result;
}

__int64 SceneCharacterBehaviorMove_Unknown6(float32x4_t* a1)
{
  unsigned __int64 v1;
  float32x4_t* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  float v8;
  int8x16_t v9;
  unsigned __int32 v10;
  float v11;
  float v12;
  float v13;

  if (LANES128(a1[6]).n128_u8[0] != 1) {
    return 1;
  }
  v1 = LANES128(a1[1]).n128_u64[0];
  v2 = *(float32x4_t**)(v1 + 192);
  v3 = *(_QWORD*)(v1 + 200);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v4 = LANES128(a1[1]).n128_u64[0];
    v5 = *(_QWORD*)(v4 + 192);
    v6 = *(_QWORD*)(v4 + 200);
  }
  else {
    v6 = 0;
    v5 = *(_QWORD*)(v1 + 192);
  }
  v8 = LANES128(a1[7]).n128_f32[0];
  v9 = vsubq_f32(a1[5], v2[1]);
  v10 = LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u32[0];
  LANES128(v9).n128_u64[0] =
      LANES64_OF(
          vadd_f32(vmul_f32(COERCE_AS(float32x2_t, v10),
                            COERCE_AS(float32x2_t, v10)),
                   vmul_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u32[0]),
                            COERCE_AS(float32x2_t, LANES128(v9).n128_u32[0]))))
          .n64_u64[0];
  LODWORD(v11) =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]))))
          .n64_u32[0];
  v12 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                          160LL) *
                0x1.0aef000000000p+4f) /
        0x1.f400000000000p+9f;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v13 = *(float*)(v5 + 36);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  else {
    v13 = *(float*)(v5 + 36);
  }
  result = v11 < (float)((float)(v8 * v12) * v13);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
    return v11 < (float)((float)(v8 * v12) * v13);
  }
  return result;
}

__int64 SceneCharacterBehaviorMove_Unknown7(__int64 result)
{
  unsigned int v1;
  int v2;
  __int128 v3;
  int v4;
  __int64 v5;
  __int64 v6;

  *(_BYTE*)(result + 24) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v6 = result;
    v4 = __cxa_guard_acquire(&GameData_21a6130);
    result = v6;
    if (v4 != 0) {
      v5 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v5;
      __cxa_guard_release(&GameData_21a6130);
      result = v6;
    }
  }
  v1 = DWORD2(GameData_21a6120);
  v2 = *(unsigned __int8*)(result + 96);
  *(_QWORD*)(result + 64) = GameData_21a6120;
  v3 = *(_OWORD*)(result + 64);
  *((_QWORD*)&v3 + 1) = v1;
  *(_OWORD*)(result + 64) = v3;
  if (v2 == 1) {
    *(_BYTE*)(result + 96) = 0;
  }
  *(_DWORD*)(result + 112) = 0;
  return result;
}

#pragma GCC visibility pop
