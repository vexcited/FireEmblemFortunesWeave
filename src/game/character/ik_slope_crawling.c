#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_IKSlopeCrawling_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 IKSlopeCrawling_Destructor(__int64 a1);
__int64 IKSlopeCrawling_DeletingDestructor_alt1(__int64 a1) __asm__(
    "IKSlopeCrawling_DeletingDestructor");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_21a6180;
__attribute__((swiftcall)) void IKSlopeCrawling_10fd7d0(PSEUDO_X8 x8_,
                                                        float32x4_t* result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned int* GameHr_109d5e0(unsigned int* result);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void IKSlopeCrawling_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void
GameRoutine_1086020(PSEUDO_X8, __int64, __int128*, __int64, float*, int, float);
__int128* Vector_650e70();
__int64 game_character_10fd8d0(_QWORD*, float32x4_t*, float32x4_t*,
                               float32x4_t*, float32x4_t*, _DWORD*);
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a837f0;
float exp2f(float);
float powf(float, float);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_character_10fd340(unsigned __int64*, float32x4_t*);
__n128 game_character_IKSlopeCrawling_IKSlopeCrawling_lambda0_Invoke(
    __int64 a1, __n128 result, __int64 a3, __int64* a4);

__attribute__((swiftcall)) void IKSlopeCrawling_10fd7d0(PSEUDO_X8 x8_,
                                                        float32x4_t* result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  int8x16_t v2;
  float32x4_t v3;
  float32x4_t v4;
  int8x16_t v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD* v8;

  v2 = vmulq_f32(*result, *result);
  LANES128(v2).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v2, v2, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0])))
          .n64_u64[0];
  LANES128(v2).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0])))
          .n64_u64[0];
  LANES128(v2).n128_u64[1] = LANES128(v2).n128_u64[0];
  v3 = vrsqrteq_f32(v2);
  v4 = vmulq_f32(v3, vrsqrtsq_f32(v3, vmulq_f32(v2, v3)));
  v5 = vbicq_s8(
      vmulq_f32(*result, vmulq_f32(v4, vrsqrtsq_f32(v4, vmulq_f32(v2, v4)))),
      vceqzq_f32(v2));
  *result = v5;
  if (LANES128(v2).n128_f32[0] == 0.0f) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) != 0) {
      result = (float32x4_t*)&GameData_21a6180;
    }
    else {
      v8 = a2;
      if ((unsigned int)__cxa_guard_acquire(&GameData_21a6190) != 0) {
        v7 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v7;
        __cxa_guard_release(&GameData_21a6190);
      }
      a2 = v8;
      result = (float32x4_t*)&GameData_21a6180;
    }
  }
  else if (LANES128(v5).n128_f32[1] < 0.0f) {
    *result = vnegq_f32(v5);
  }
  v6 = LANES128(*(result)).n128_u64[1];
  *a2 = LANES128(*(result)).n128_u64[0];
  a2[1] = v6;
  {
    result;
    return;
  }
}

__n128 IKSlopeCrawling_Destructor(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_character_IKSlopeCrawling_vtable;
  result = GameRoutine_109d5e0((unsigned int*)(a1 + 72));
  v3 = *(_QWORD*)(a1 + 96);
  if (v3 != 0) {
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 48);
  if (v4 != 0) {
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

void IKSlopeCrawling_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_character_IKSlopeCrawling_vtable;
  GameHr_109d5e0((unsigned int*)(a1 + 72));
  v2 = *(_QWORD*)(a1 + 96);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 48);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__n128 game_character_IKSlopeCrawling_IKSlopeCrawling_lambda0_Invoke(
    __int64 a1, __n128 result, __int64 a3, __int64* a4)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  bool v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t* v21;
  unsigned __int32 v22;
  __int128 v23;
  __int64 v24;
  __int64 v25;
  __int128 v26;
  float32x4_t v27;
  __int128 v28;
  float32x4_t v29;
  float32x4_t v30;
  float v31;
  bool v32;
  float32x4_t v33;
  bool v34;
  bool v35;
  float v36;
  float v37;
  unsigned int v38;
  __int128 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  int8x16_t* v42;
  unsigned __int32 v43;
  int8x16_t v44;
  __int64 v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  int8x16_t v55;
  float32x4_t v56;
  int8x16_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  __int64 v64;
  float32x4_t v65;
  float32x4_t v66;
  unsigned __int64 v67[2];
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  struct {
    float32x4_t v73;
    float32x4_t v74;
  } v73_;
  float32x4_t v75;
  float32x4_t v76;
  int8x16x2_t v77;
  int8x16x2_t v78;
  int8x16x2_t v79;

  v4 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 104LL) + 16LL) == 1 &&
      **(_DWORD**)(v4 + 8) == 0) {
    v5 = *(_QWORD*)(v4 + 48);
    if (v5 != 0) {
      v6 = *(_QWORD**)(v4 + 56);
      v7 = *(_QWORD*)(v5 + 8) == -1 || v6 == nullptr;
      if (!v7) {
        v8 = *(_QWORD*)(v4 + 64);
        if (v8 != 0) {
          goto LABEL_22;
        }
        v10 = v6[1];
        v11 = v6[49];
        v12 = v6[50];
        if (v12 != 0) {
          v13 = *(_QWORD*)(v4 + 56);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_1086020((void*)(&v73_.v73), v13, (__int128*)(v10 + 304),
                              0, nullptr, 0,
                              *(float*)(*(_QWORD*)(v11 + 11792) + 40LL));
          v75 = v73_.v74;
          game_character_10fd340(LANES128(v76).n128_u64, &v75);
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak_alt1(v12);
          }
        }
        else {
          GameRoutine_1086020((void*)(&v73_.v73), *(_QWORD*)(v4 + 56),
                              (__int128*)(v10 + 304), 0, nullptr, 0,
                              *(float*)(*(_QWORD*)(v11 + 11792) + 40LL));
          v75 = v73_.v74;
          game_character_10fd340(LANES128(v76).n128_u64, &v75);
        }
        v14 = *(float*)(v4 + 32);
        v15 = 0x0.0p+0f;
        if (v14 > 0x0.0p+0f) {
          v15 = 0x1.0000000000000p+0f - exp2f(v14 * -0x1.df851e0000000p+4f);
        }
        v16 = vmlaq_n_f32(*(float32x4_t*)(v4 + 112),
                          vsubq_f32(v76, *(float32x4_t*)(v4 + 112)), v15);
        v17 = vmulq_f32(v16, v16);
        LANES128(v17).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
                .n64_u64[0];
        LANES128(v17).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
                .n64_u64[0];
        v7 = LANES128(v17).n128_f32[0] == 0x0.0p+0f;
        LANES128(v17).n128_u64[1] = LANES128(v17).n128_u64[0];
        v18 = vrsqrteq_f32(v17);
        v19 = vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v17, v18)));
        v20 = vbicq_s8(
            vmulq_f32(v16,
                      vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(v17, v19)))),
            vceqzq_f32(v17));
        v71 = v20;
        if (v7) {
          v21 = (float32x4_t*)Vector_650e70();
        }
        else {
          if (LANES128(v20).n128_f32[1] < 0x0.0p+0f) {
            v71 = vnegq_f32(v20);
          }
          v21 = &v71;
        }
        v72 = *v21;
        game_character_10fd340(LANES128(v73_.v73).n128_u64, &v72);
        v22 = LANES128(v73_.v73).n128_u32[2];
        v8 = *(_QWORD*)(v4 + 64);
        *(_QWORD*)(v4 + 112) = LANES128(v73_.v73).n128_u64[0];
        v23 = *(_OWORD*)(v4 + 112);
        *((_QWORD*)&v23 + 1) = v22;
        *(_OWORD*)(v4 + 112) = v23;
        if (v8 != 0) {
        LABEL_22:
          v25 = v8 + 80;
          v24 = *(_QWORD*)(v8 + 80);
          if (*(_QWORD*)(v25 + 8) - v24 == 768) {
            v26 = *(_OWORD*)(v24 + 160);
            v27 = *(float32x4_t*)(v24 + 352);
            v28 = *(_OWORD*)(v24 + 544);
            v69 = (__typeof__(v69)){0};
            LANES128(v29).n128_u64[0] = v26;
            LANES128(v30).n128_u64[0] = LANES128(v27).n128_u64[0];
            LANES128(v29).n128_u64[1] = DWORD2(v26);
            v31 = LANES128(v27).n128_f32[1];
            LANES128(v30).n128_u64[1] = LANES128(v27).n128_u32[2];
            LANES128(v27).n128_u64[0] = v28;
            v73_.v73 = v29;
            LANES128(v27).n128_u64[1] = DWORD2(v28);
            v76 = v30;
            v70 = v27;
            v32 = *((float*)&v26 + 1) > -0x1.9000000000000p+6f &&
                  v31 > -0x1.9000000000000p+6f;
            LANES128(v33).n128_u32[3] = 0;
            v34 = v32 && *((float*)&v28 + 1) > -0x1.9000000000000p+6f;
            v35 = v34 && COERCE_FLOAT(HIDWORD(*(_QWORD*)(v24 + 736))) >
                             -0x1.9000000000000p+6f;
            LANES128(v33).n128_u32[2] = *(_QWORD*)(v24 + 744);
            LANES128(v33).n128_u64[0] = *(_QWORD*)(v24 + 736);
            v69 = v33;
            if (v35) {
              v68 = (__typeof__(v68)){0};
              if ((game_character_10fd8d0(v6, &v73_.v73, &v76, &v70, &v69,
                                          &v68) &
                   1) != 0) {
                v36 = *(float*)(v4 + 32);
                v37 = 0x0.0p+0f;
                if (v36 > 0x0.0p+0f) {
                  v37 =
                      0x1.0000000000000p+0f -
                      powf(0x1.cccccc0000000p-1f, v36 * 0x1.df851e0000000p+4f);
                }
                v65 =
                    vmlaq_n_f32(*(float32x4_t*)(v4 + 112),
                                vsubq_f32(v68, *(float32x4_t*)(v4 + 112)), v37);
                IKSlopeCrawling_10fd7d0((void*)(&v66), &v65);
                game_character_10fd340(v67, &v66);
                v38 = v67[1];
                *(_QWORD*)(v4 + 112) = v67[0];
                v39 = *(_OWORD*)(v4 + 112);
                *((_QWORD*)&v39 + 1) = v38;
                *(_OWORD*)(v4 + 112) = v39;
              }
            }
          }
        }
        v40 = *(_QWORD*)(v4 + 112);
        v41 = *(_QWORD*)(v4 + 120);
        v42 = (int8x16_t*)(v4 + 112);
        LANES128(v76).n128_u64[0] = v40;
        LANES128(v76).n128_u64[1] = v41;
        game_character_10fd340(LANES128(v73_.v73).n128_u64, &v76);
        v43 = LANES128(v73_.v73).n128_u32[2];
        LANES128(*(v42)).n128_u64[0] = LANES128(v73_.v73).n128_u64[0];
        v44 = *v42;
        LANES128(v44).n128_u64[1] = v43;
        *v42 = v44;
        *(_DWORD*)a4[2] &= 0x33FFFFFFu;
        v45 = *a4;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_21a6190) != 0) {
          v64 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v64;
          __cxa_guard_release_alt1((__int64)&GameData_21a6190);
        }
        LANES128(v46).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v47).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(*v42, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v46).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v48).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v47).n128_i8[8] =
            vqtbl1_s8(*v42, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v49 = vmulq_f32(v46, v47);
        v50 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180), *v42);
        *(int8x8_t*)&LANES128(v48).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v47).n128_u64[0] =
            LANES64_OF(
                vqtbl1_s8(*v42, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v50).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                .n64_u64[0];
        LANES128(v51).n128_u64[0] = 0x3F8000003F800000LL;
        LANES128(v51).n128_u64[1] = 0x3F8000003F800000LL;
        *(int8x8_t*)&LANES128(v47).n128_i8[8] =
            vqtbl1_s8(*v42, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        LANES128(v50).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                .n64_u64[0];
        v52 = vmlsq_f32(v49, v47, v48);
        LANES128(v48).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v48).n128_u64[1] = 0x3F0000003F000000LL;
        LANES128(v50).n128_u64[1] = LANES128(v50).n128_u64[0];
        v53 = vaddq_f32(v50, v51);
        v54 = vsqrtq_f32(vaddq_f32(v53, v53));
        v55 = vdivq_f32(v52, v54);
        LANES128(v55).n128_u32[3] =
            LANES128_OF(vmulq_f32(v54, v48)).n128_u32[3];
        LANES128(v54).n128_u64[0] = 0x3400000034000000LL;
        LANES128(v54).n128_u64[1] = 0x3400000034000000LL;
        v56 = vbslq_s8(vcgeq_f32(v54, v53),
                       COERCE_AS(int8x16_t, GameData_1a82dd0), v55);
        v57 = v56;
        LANES128(v57).n128_u32[3] = 0;
        LANES128(v53).n128_u64[0] =
            LANES64_OF(
                vrev64_s32(COERCE_AS(int32x2_t, LANES128(v56).n128_u64[0])))
                .n64_u64[0];
        LANES128(v54).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                .n64_u64[0];
        LANES128(v58).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v59).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v53).n128_i8[8] =
            vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v54).n128_i8[8] =
            vqtbl1_s8(v57, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v58).n128_u64[1] = LANES128(v53).n128_u64[1];
        LANES128(v59).n128_u64[1] = LANES128(v54).n128_u64[1];
        v60 = vmulq_f32(v53, v53);
        v78.val[1] = vmulq_f32(v54, v54);
        v61 = vmulq_f32(v58, v57);
        v62 = vmulq_laneq_f32(v59, v56, 3);
        v63 = vaddq_f32(v61, v61);
        v77.val[1] = vaddq_f32(v62, v62);
        v79.val[0] = vaddq_f32(v77.val[1], v63);
        v79.val[1] = vsubq_f32(v63, v77.val[1]);
        v78.val[0] = vsubq_f32(
            COERCE_AS(float32x4_t, GameData_1a837f0),
            vaddq_f32(vaddq_f32(v78.val[1], v78.val[1]), vaddq_f32(v60, v60)));
        LANES128(v77.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v79, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                .n64_u64[0];
        LANES128(v78.val[1]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v79, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v77.val[1]).n128_i8[8] =
            vqtbl2_s8(v79, COERCE_AS(int8x8_t, 0x706050413121110LL));
        *(int8x8_t*)&LANES128(v78.val[1]).n128_i8[8] =
            vqtbl2_s8(v79, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
        v77.val[0] = v78.val[0];
        LANES128(v79.val[0]).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v77, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v79.val[0]).n128_i8[8] =
            vqtbl2_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
        LANES128(v79.val[1]).n128_u64[0] =
            LANES64_OF(vqtbl2_s8(v77, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v79.val[1]).n128_i8[8] =
            vqtbl2_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
        LANES128(result).n128_u64[0] =
            LANES64_OF(
                vqtbl2_s8(v78, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                .n64_u64[0];
        LANES128(v77.val[1]).n128_u64[0] =
            LANES64_OF(vqtbl2_s8(v78, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL)))
                .n64_u64[0];
        v78.val[1] = *(int8x16_t*)(v45 + 32);
        LANES128(result).n128_u64[1] = LANES128(v77.val[1]).n128_u64[0];
        v77.val[1] = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v79.val[0], COERCE_FLOAT(*(_OWORD*)(v45 + 16))),
                v79.val[1], *(float32x2_t*)(v45 + 16), 1),
            result, *(float32x4_t*)(v45 + 16), 2);
        *(float32x4_t*)v45 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v79.val[0], COERCE_FLOAT(*(_OWORD*)v45)),
                           v79.val[1], *(float32x2_t*)v45, 1),
            result, *(float32x4_t*)v45, 2);
        *(int8x16_t*)(v45 + 16) = v77.val[1];
        *(float32x4_t*)(v45 + 32) = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v79.val[0], LANES128(v78.val[1]).n128_f32[0]),
                v79.val[1],
                COERCE_AS(float32x2_t, LANES128(v78.val[1]).n128_u64[0]), 1),
            result, v78.val[1], 2);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
