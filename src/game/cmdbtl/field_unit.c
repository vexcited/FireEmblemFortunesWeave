#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 CharacterAppearance_10735d0(_QWORD);
__int64 GameRoutine_1015950(void);
__int64 GameRoutine_1072580(_QWORD, _QWORD);
__int64 GameRoutine_10784f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2001e18[])();
extern __int64 (*game_cmdbtl_FieldUnit_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d3c8[3];
__n128 FieldUnit_Destructor_alt1(__int64 a1) __asm__("FieldUnit_Destructor");
__int64 game_cmdbtl_FieldUnit_Build(_QWORD* a1, __int64 a2);
__int64 game_cmdbtl_FieldUnit_Build_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 GameHr_a867a0(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void FieldUnit_Destructor(__int64 a1);
__int64 GameRoutine_10adb80(_DWORD*, _BYTE*);
double cos(double);
double sin(double);
float CharacterAnimator_1079580(__int64, int, long double, float, float);
void CharacterFacialController_10b2280(__int64, unsigned int, float);
void FieldUnit_1015950(__int64 a1, long double a2);

void FieldUnit_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_cmdbtl_FieldUnit_vtable;
  v2 = (_QWORD*)(a1 + 24);
  if (*(_QWORD*)(a1 + 24) != 0) {
    v8 = *(_QWORD*)(a1 + 24);
    GameHr_a867a0((__int64)&v8);
  }
  v3 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = *(_BYTE*)(a1 + 72);
  *v2 = 0;
  v2[1] = 0;
  if ((v4 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 88);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  v7 = *(_QWORD*)(a1 + 16);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
}

__int64 game_cmdbtl_FieldUnit_Build(_QWORD* a1, __int64 a2)
{
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;

  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
  v4[2] = 0;
  v5 = v4 + 3;
  v6 = v4;
  *v4 = GameData_212d3c8[0] + 2;
  v4[1] = 0;
  CharacterAppearance_10735d0(v4 + 3);
  GameRoutine_1072580(v5, a2);
  a1[1] = v5;
  v7 = a1 + 1;
  v8 = a1[2];
  a1[2] = v6;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
    v7 = a1 + 1;
  }
  v11[0] = GameData_2001e18;
  v11[1] = a1;
  v12 = v11;
  a1[3] = GameRoutine_10784f0(v7, 0, v11);
  result = (__int64)v12;
  if (v12 == v11) {
    v10 = 32;
  }
  else {
    if (v12 == nullptr) {
      return result;
    }
    v10 = 40;
  }
  return (*(__int64 (**)(__int64))(*v12 + v10))((__int64)v12);
}

void FieldUnit_1015950(__int64 a1, long double a2)
{
  __int64 v2;
  float32x4_t v4;
  int8x16_t v5;
  float v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  double v10;
  double v11;
  double v12;
  float v13;
  float v14;
  bool v15;
  bool v16;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  __int64 v24;
  __int64 v25;
  __int64 v27;
  __int64 v28;
  _BYTE* v29;
  unsigned int v30;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0) {
    a2 = *(long double*)(a1 + 48);
    v4 = vsubq_f32(*(float32x4_t*)(v2 + 304), *(float32x4_t*)&a2);
    v5 = vmulq_f32(v4, v4);
    LANES128(v5).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      *(_DWORD*)(v2 + 304) = LODWORD(a2);
      *(_DWORD*)(v2 + 308) = *(_DWORD*)(a1 + 52);
      a2 = *(long double*)(v2 + 304);
      DWORD2(a2) = *(_DWORD*)(a1 + 56);
      *(_DWORD*)(v2 + 296) |= 1u;
      *((_QWORD*)&a2 + 1) = DWORD2(a2);
      *(long double*)(v2 + 304) = a2;
      v2 = *(_QWORD*)(a1 + 24);
    }
    v6 = *(float*)(a1 + 64);
    LANES128(v7).n128_u32[0] = 0;
    LANES128(v7).n128_u32[3] = 0;
    *(unsigned __int64*)((char*)LANES128(v7).n128_u64 + 4) = LODWORD(v6);
    v8 = vsubq_f32(*(float32x4_t*)(v2 + 320), v7);
    v9 = vmulq_f32(v8, v8);
    LANES128(v9).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      *(_DWORD*)(v2 + 320) = 0;
      *(float*)(v2 + 324) = v6;
      *(_OWORD*)(v2 + 320) = *(unsigned __int64*)(v2 + 320);
      v10 = v6 * 0x1.0000000000000p-1;
      v11 = cos(v10);
      *(double*)&a2 = sin(v10);
      v12 = PSEUDO_UNFUSED(*(double*)&a2 * -0x0.0p+0) + v11 * 0x0.0p+0;
      v13 = v11 + PSEUDO_UNFUSED(*(double*)&a2 * 0x0.0p+0);
      *(double*)&a2 = *(double*)&a2 + PSEUDO_UNFUSED(v11 * 0x0.0p+0);
      v14 = v12;
      *(float*)&a2 = *(double*)&a2;
      v15 = COERCE_FLOAT(*(_OWORD*)(v2 + 336)) == v14 &&
            COERCE_FLOAT(HIDWORD(*(_QWORD*)(v2 + 336))) == *(float*)&a2;
      v16 = v15 && COERCE_FLOAT(*(_QWORD*)(v2 + 344)) == v14;
      if (!v16 || COERCE_FLOAT(DWORD3(*(_OWORD*)(v2 + 336))) != v13) {
        v18 = *(_DWORD*)(v2 + 296);
        *(float*)(v2 + 336) = v14;
        *(_DWORD*)(v2 + 340) = LODWORD(a2);
        *(float*)(v2 + 344) = v14;
        *(float*)(v2 + 348) = v13;
        *(_DWORD*)(v2 + 296) = v18 | 1;
      }
    }
  }
  v19 = *(_QWORD*)(a1 + 32);
  if (v19 != 0) {
    v20 = *(_QWORD*)(v19 + 72);
    if (v20 != 0) {
      LODWORD(a2) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
      CharacterAnimator_1079580(v20, *(_DWORD*)(a1 + 68), a2,
                                -0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
      v19 = *(_QWORD*)(a1 + 32);
    }
    v21 = *(_QWORD*)(v19 + 88);
    if (v21 != 0) {
      v22 = *(_QWORD*)(v21 + 32);
      v23 = (*(_BYTE*)(a1 + 72) & 1) != 0 ? *(_BYTE**)(a1 + 88)
                                          : (_BYTE*)(a1 + 73);
      if (v22 != 0) {
        v24 = *(_QWORD*)(v22 + 8);
        v25 = *(_QWORD*)(v21 + 40);
        if (v24 != -1 && v25 != 0) {
          v28 = *(_QWORD*)(v25 + 392);
          v27 = *(_QWORD*)(v25 + 400);
          if (v27 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v29 = v23;
              (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
              std___1___shared_weak_count___release_weak_alt1(v27);
              v23 = v29;
            }
          }
          v30 = GameRoutine_10adb80((_DWORD*)(v28 + 1432), v23);
          if ((v30 & 0x80000000) == 0) {
            CharacterFacialController_10b2280(v21, v30, -0x1.0000000000000p+0f);
          }
        }
      }
    }
  }
}

__int64 game_cmdbtl_FieldUnit_Build_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL) = *a2;
  return GameRoutine_1015950();
}

#pragma GCC visibility pop
