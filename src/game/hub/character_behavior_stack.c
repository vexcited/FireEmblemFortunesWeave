#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 HubCharacterNatives_df4cc0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fe17e8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_df5ca0(_QWORD);
__int64 CharacterBehaviorStack_Destructor(_QWORD* a1);
char* CharacterBehaviorStack_df5660_alt1(
    signed __int64* a1, char* a2,
    _QWORD* a3) __asm__("CharacterBehaviorStack_df5660");
_QWORD* StateMoveTo_d42860(_QWORD* result, __int64*);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD);
__int64 HubCharacterNatives_cee990(__int64, unsigned __int32, int, __int64,
                                   __int64, __int64, float);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool CharacterController_d42740(_QWORD*, float32x4_t**, int*);
extern __int128 GameData_1a82f60;
extern __int128 GameData_1a832d0;
extern __int64* GameData_212ee30[4];
float atan2f(long double, float);
float32x4_t* CharacterBehaviorStack_df6260_alt1(
    float32x4_t* result, __int64*) __asm__("CharacterBehaviorStack_df6260");
void CharacterRotate_d519c0(int8x16_t*);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_cdcc10();
void __attribute__((noreturn))
GameRoutine_cdcc10_alt1(_QWORD) __asm__("GameRoutine_cdcc10");
bool CharacterBehaviorStack_StackMove_Unknown4(__int64 a1);
__attribute__((swiftcall)) void
CharacterBehaviorStack_StackMove_Unknown6(PSEUDO_X8 x8_, __int64 result);
__attribute__((swiftcall)) void
CharacterBehaviorStack_StackEvasion_Unknown6(PSEUDO_X8 x8_);
__int64* CharacterBehaviorStack_df6260(__int64* result, __int64* a2);
void CharacterBehaviorStack_StackEvasion_Destructor(float32x4_t* a1);
bool CharacterBehaviorStack_StackMoveLoop_Destructor(__int64 a1);
__attribute__((swiftcall)) void
CharacterBehaviorStack_StackMoveLoop_Unknown6(PSEUDO_X8 x8_, __int64 result);
__attribute__((swiftcall)) void
collision_670c60_alt1(PSEUDO_X8, float32x4_t* result, float32x4_t*,
                      __int64) __asm__("collision_670c60");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_df5ca0_alt1() __asm__("GameRoutine_df5ca0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
char* CharacterBehaviorStack_df5660(__int64* a1, char* a2, _QWORD* a3);

__int64 CharacterBehaviorStack_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = GameData_1fe17e8;
  HubCharacterNatives_df4cc0();
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v3 = a1[3];
  if (v3 != 0) {
    v4 = a1[4];
    if (v3 == v4) {
      goto LABEL_11;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v3);
    v6 = a1[3];
    a1[4] = v3;
    if (v6 != 0) {
    LABEL_11:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  return result;
}

char* CharacterBehaviorStack_df5660(__int64* a1, char* a2, _QWORD* a3)
{
  char* v3;
  unsigned __int64 v4;
  char* v8;
  _QWORD* v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;

  v3 = (char*)a1[1];
  v4 = a1[2];
  if ((unsigned __int64)v3 >= v4) {
    v10 = (char*)*a1;
    v11 = ((__int64)&v3[-*a1] >> 4) + 1;
    if (v11 >> 60 != 0) {
      GameRoutine_df5ca0_alt1();
    }
    v12 = v4 - (_QWORD)v10;
    v13 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v12 >> 3 > v11) {
      v11 = v12 >> 3;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL) {
      v11 = 0xFFFFFFFFFFFFFFFLL;
    }
    if (v11 != 0) {
      if (v11 >> 60 != 0) {
        GameRoutine_60a210_alt1();
      }
      v14 = 16 * v11;
      v15 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v11, 16, 0);
    }
    else {
      v14 = 0;
      v15 = 0;
    }
    v17 = v15 + v14;
    v16 = (char*)(v15 + a2 - v10);
    if (a2 - v10 == v14) {
      if (a2 == v10) {
        v25 = fw_memory_HeapManager_Allocate_alt1(*v13, 16, 16, 0);
        v17 = v25 + 16;
        v16 = (char*)v25;
        if (v15 != 0) {
          v26 = 128;
          if (*(_QWORD*)(*v13 + 200) == 0) {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v13 + v26, v15);
        }
      }
      else {
        v16 -= 16 * ((((a2 - v10) >> 4) + 1 +
                      ((unsigned __int64)(((a2 - v10) >> 4) + 1) >> 63)) >>
                     1);
      }
    }
    v27 = a3[1];
    *(_QWORD*)v16 = *a3;
    *((_QWORD*)v16 + 1) = v27;
    *a3 = 0;
    a3[1] = 0;
    memcpy_alt1((__int64)(v16 + 16), (__int64)a2, a1[1] - (_QWORD)a2);
    v28 = *a1;
    v29 = a1[1];
    a1[1] = (__int64)a2;
    v30 = (unsigned __int64)&a2[-v28];
    v31 = v29 - (_QWORD)a2;
    v32 = v16 - &a2[-v28];
    v33 = &v16[v31 + 16];
    memcpy_alt1(v32, v28, v30);
    v34 = *a1;
    *a1 = v32;
    a1[1] = (__int64)v33;
    a1[2] = v17;
    if (v34 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v13 + v35, v34);
    }
  }
  else if (a2 == v3) {
    v16 = a2;
    *(_QWORD*)v3 = *a3;
    *((_QWORD*)v3 + 1) = a3[1];
    *a3 = 0;
    a3[1] = 0;
    a1[1] = (__int64)(v3 + 16);
  }
  else {
    v8 = v3 - 16;
    if ((unsigned __int64)v3 < 0x10) {
      v9 = (_QWORD*)a1[1];
    }
    else {
      *(_QWORD*)v3 = *(_QWORD*)v8;
      *((_QWORD*)v3 + 1) = *((_QWORD*)v3 - 1);
      v9 = v3 + 16;
      *(_QWORD*)v8 = 0;
      *((_QWORD*)v3 - 1) = 0;
    }
    a1[1] = (__int64)v9;
    if (v3 != a2 + 16) {
      v18 = (__int64*)(v3 - 8);
      do {
        v19 = *((_QWORD*)v8 - 2);
        v20 = *((_QWORD*)v8 - 1);
        v8 -= 16;
        *(_QWORD*)v8 = 0;
        *((_QWORD*)v8 + 1) = 0;
        v21 = *v18;
        *(v18 - 1) = v19;
        *v18 = v20;
        if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak_alt2(v21);
        }
        v18 -= 2;
      } while (v8 != a2);
    }
    v22 = *a3;
    v23 = a3[1];
    *a3 = 0;
    a3[1] = 0;
    v24 = *((_QWORD*)a2 + 1);
    *(_QWORD*)a2 = v22;
    *((_QWORD*)a2 + 1) = v23;
    if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak_alt2(v24);
      return a2;
    }
    else {
      return a2;
    }
  }
  return v16;
}

bool CharacterBehaviorStack_StackMove_Unknown4(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  _QWORD* v4;
  float32x4_t* v5;
  __int64 v6;
  float32x4_t v7;
  __int64 v8;
  __int64 v9;
  float v10;
  unsigned __int64 v11;
  float32x4_t* v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  float v16;
  float32x4_t v17;
  float32x4_t v18;
  int8x16_t v19;
  float v20;
  float32x4_t v21;
  float32x4_t v22;
  int8x16_t v23;
  float v24;
  float32x4_t v25;
  int8x16_t v26;
  float32x4_t* v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  int8x16_t v31;

  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16LL) + 24LL) +
                  16LL);
  v2 = *(_QWORD*)(v1 + 24);
  if ((v2 & 0x100000000LL) == 0) {
    return false;
  }
  if ((v2 & 0x1FFFFFFFFLL) != 0x100000001LL) {
    return true;
  }
  v4 = *(_QWORD**)(*(_QWORD*)(v1 + 40) + 8LL);
  v5 = (float32x4_t*)v4[12];
  v6 = v4[13] - (_QWORD)v5;
  if (v6 == 0) {
    return true;
  }
  v7 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v4[1] + 8LL) + 16LL) + 560LL);
  v8 = (v6 >> 5) & 3;
  if ((unsigned __int64)(v6 >> 5) >= 4) {
    v10 = 0x0.0p+0f;
    v11 = (v6 >> 5) & 0xFFFFFFFFFFFFFFFCLL;
    v12 = v5 + 4;
    v9 = 0;
    do {
      v13 = v12[-4];
      v9 += 4;
      v14 = vsubq_f32(v7, v13);
      LANES128(v13).n128_u32[3] = 0;
      v15 = vmulq_f32(v14, v14);
      LANES128(v15).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
              .n64_u64[0];
      v16 = v10 +
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]))))
                .n64_f32[0];
      v17 = v12[-2];
      v18 = vsubq_f32(v13, v17);
      LANES128(v17).n128_u32[3] = 0;
      v19 = vmulq_f32(v18, v18);
      LANES128(v19).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
              .n64_u64[0];
      v20 = v16 +
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]))))
                .n64_f32[0];
      v21 = *v12;
      v22 = vsubq_f32(v17, *v12);
      LANES128(v21).n128_u32[3] = 0;
      v23 = vmulq_f32(v22, v22);
      LANES128(v23).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
              .n64_u64[0];
      v24 = v20 +
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]))))
                .n64_f32[0];
      v7 = v12[2];
      v12 += 8;
      v25 = vsubq_f32(v21, v7);
      LANES128(v7).n128_u32[3] = 0;
      v26 = vmulq_f32(v25, v25);
      LANES128(v26).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
              .n64_u64[0];
      v10 = v24 +
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]))))
                .n64_f32[0];
    } while (v11 != v9);
  }
  else {
    v9 = 0;
    v10 = 0x0.0p+0f;
  }
  if (v8 != 0) {
    v27 = &v5[2 * v9];
    do {
      v28 = *v27;
      v27 += 2;
      v29 = v28;
      --v8;
      v30 = vsubq_f32(v7, v28);
      LANES128(v29).n128_u32[3] = 0;
      v31 = vmulq_f32(v30, v30);
      LANES128(v31).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
              .n64_u64[0];
      v10 = v10 +
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]))))
                .n64_f32[0];
      v7 = v29;
    } while (v8 != 0);
  }
  return v10 < 0x1.0000000000000p-1f;
}

__attribute__((swiftcall)) void

CharacterBehaviorStack_StackMove_Unknown6(PSEUDO_X8 x8_, __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD*)(result + 56);
  if (v2 == *(_QWORD*)(result + 48)) {
    *(_BYTE*)a2 = 0;
    *(_BYTE*)(a2 + 16) = 0;
  }
  else {
    v4 = *(_QWORD*)(v2 - 16);
    v3 = *(_QWORD*)(v2 - 8);
    *(_QWORD*)a2 = v4;
    *(_QWORD*)(a2 + 8) = v3;
    *(_BYTE*)(a2 + 16) = 1;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

CharacterBehaviorStack_StackEvasion_Unknown6(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 0;
  a1[16] = 0;
}

__int64* CharacterBehaviorStack_df6260(__int64* result, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v7;
  __int64 v8;
  __int128 v9;
  unsigned __int64 v10;
  float32x4_t* v11;
  __int64 v12;
  unsigned __int64 v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  unsigned __int64 v21;
  float32x4_t v22;
  float32x4_t* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  float32x4_t* v30;
  float32x4_t* v31;
  float32x4_t* v32;
  float32x4_t* v33;
  float32x4_t* v34;
  unsigned __int64 v35;
  __int64 v36;
  int8x16_t v37;
  __int128 v38;
  float32x4_t v39;
  float32x4_t v40;

  v2 = *a2;
  v3 = a2[1];
  result[1] = 0;
  result[2] = 0;
  v4 = v3 - v2;
  *result = 0;
  if (v3 != v2) {
    if (v4 < 0) {
    LABEL_30:
      GameRoutine_cdcc10();
    }
    v5 = result;
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    v8 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v3 - v2, 16, 0);
    *v5 = v8;
    v5[1] = v8;
    v5[2] = v8 + v4;
    if (v4 == 16) {
      v10 = 0;
    }
    else {
      v11 = (float32x4_t*)v8;
      v12 = 0;
      do {
        v13 = v12 + 1;
        v14 = vsubq_f32(*(float32x4_t*)(v2 + 16 * (v12 + 1)),
                        *(float32x4_t*)(v2 + 16 * v12));
        v15 = vmulq_f32(v14, v14);
        LANES128(v15).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                .n64_u64[0];
        LANES128(v15).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                .n64_u64[0];
        *(float32x2_t*)&v9 =
            vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]));
        if (*(float*)&v9 > 0x0.0p+0f) {
          LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
          v16 = vrsqrteq_f32(v15);
          v17 = vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v15, v16)));
          v19 = vrsqrtsq_f32(v17, vmulq_f32(v15, v17));
          v18 = vmulq_f32(v17, v19);
          PSEUDO_LOW_LANE128(v19, n128_u64, 0);
          v20 = vbicq_s8(vmulq_f32(v14, v18), vceqzq_f32(v15));
          v37 = v20;
          v38 = v9;
          do {
            v21 = v5[2];
            v22 = vaddq_f32(*(float32x4_t*)(*a2 + 16 * v12),
                            vmulq_n_f32(v20, LANES128(v19).n128_f32[0]));
            if ((unsigned __int64)v11 < v21) {
              *v11++ = v22;
            }
            else {
              v23 = (float32x4_t*)*v5;
              v24 = (__int64)v11 - *v5;
              v25 = v24 >> 4;
              v26 = (v24 >> 4) + 1;
              if (v26 >> 60 != 0) {
                goto LABEL_30;
              }
              v27 = v21 - (_QWORD)v23;
              v39 = v22;
              v40 = v19;
              if (v27 >> 3 > v26) {
                v26 = v27 >> 3;
              }
              if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF0LL) {
                v28 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v28 = v26;
              }
              if (v28 >> 60 != 0) {
                GameRoutine_60a210_alt1();
              }
              v29 = fw_memory_HeapManager_Allocate_alt1(*v7, 16 * v28, 16, 0);
              v30 = (float32x4_t*)(v29 + v24);
              v31 = &v30[-v25];
              *v30 = v39;
              v32 = v30 + 1;
              if (v23 != v11) {
                v33 = v23;
                v34 = v31;
                do {
                  LANES128(*(v34)).n128_u64[1] = LANES128(*(v33)).n128_u64[1];
                  v35 = LANES128(*(v33)).n128_u64[0];
                  ++v33;
                  LANES128(*(v34)).n128_u64[0] = v35;
                  ++v34;
                } while (v33 != v11);
              }
              *v5 = (__int64)v31;
              v5[2] = v29 + 16 * v28;
              if (v23 != nullptr) {
                v36 = 128;
                if (*(_QWORD*)(*v7 + 200) == 0) {
                  v36 = 56;
                }
                nn_mem_StandardAllocator_Free(*v7 + v36);
              }
              v20 = v37;
              v9 = v38;
              v19 = v40;
              v11 = v32;
            }
            PSEUDO_LOW_LANE128(v19, n128_f32,
                               LANES128(v19).n128_f32[0] +
                                   0x1.4000000000000p+3f);
            v5[1] = (__int64)v11;
          } while (LANES128(v19).n128_f32[0] < *(float*)&v9);
          v2 = *a2;
          v3 = a2[1];
        }
        ++v12;
        v10 = ((v3 - v2) >> 4) - 1;
      } while (v10 > v13);
    }
    return StateMoveTo_d42860(v5, (__int64*)(v2 + 16 * v10));
  }
  return result;
}

void CharacterBehaviorStack_StackEvasion_Destructor(float32x4_t* a1)
{
  float32x4_t* v2;
  float32x4_t v3;
  float v4;
  float v5;
  float v6;
  float v7;
  unsigned __int64 v8;
  float v9;
  int8x16_t* v10;
  int v11;

  *(_BYTE*)(LANES128(a1[1]).n128_u64[0] + 8) = 1;
  HubCharacterNatives_cee990(
      *(_QWORD*)(*(_QWORD*)(LANES128(a1[1]).n128_u64[0] + 16) + 24LL),
      LANES128(a1[1]).n128_u32[2], 2, 0x100000000LL, 0, 0,
      0x1.0000000000000p+0f);
  v2 =
      *(float32x4_t**)(*(_QWORD*)(*(_QWORD*)(LANES128(a1[1]).n128_u64[0] + 16) +
                                  24LL) +
                       16LL);
  v3 = vsubq_f32(a1[2], v2[35]);
  v4 = LANES128(v3).n128_f32[2];
  v5 = vmuls_lane_f32(LANES128(v3).n128_f32[2], v3, 2) +
       (float)(LANES128(v3).n128_f32[0] * LANES128(v3).n128_f32[0]);
  if (v5 <= 0x0.0p+0f) {
    v7 = 0x0.0p+0f;
    if (LANES128(v2[53]).n128_u64[1] == 0) {
      goto LABEL_11;
    }
    goto LABEL_8;
  }
  if (LANES128(v3).n128_f32[0] != 0x0.0p+0f ||
      LANES128(v3).n128_f32[2] != 0x0.0p+0f) {
    v6 = sqrtf(v5);
    LANES128(v3).n128_f32[0] = LANES128(v3).n128_f32[0] / v6;
    v4 = LANES128(v3).n128_f32[2] / v6;
  }
  v7 = atan2f(*(long double*)&v3, v4);
  v2 =
      *(float32x4_t**)(*(_QWORD*)(*(_QWORD*)(LANES128(a1[1]).n128_u64[0] + 16) +
                                  24LL) +
                       16LL);
  if (LANES128(v2[53]).n128_u64[1] != 0) {
  LABEL_8:
    v8 = LANES128(v2[54]).n128_u64[0];
    LANES128(v2[53]).n128_u64[1] = 0;
    LANES128(v2[54]).n128_u64[0] = 0;
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v7;
      (*(void (**)(unsigned __int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt1(v8);
      v7 = v9;
    }
  }
LABEL_11:
  v10 = (int8x16_t*)LANES128(v2[30]).n128_u64[1];
  v11 = LANES128(v10[11]).n128_u8[4];
  LANES128(v10[2]).n128_f32[0] = v7;
  LANES128(v10[2]).n128_f32[1] = v7;
  if (v11 == 1) {
    LANES128(v10[11]).n128_u8[4] = 0;
  }
  CharacterRotate_d519c0(v10);
}

bool CharacterBehaviorStack_StackMoveLoop_Destructor(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  float32x4_t* v17;
  float32x4_t v18;
  float32x4_t v19;
  unsigned int v20;
  _DWORD* v21;
  _DWORD* v22;
  bool v23;
  _DWORD* v25;
  _DWORD* i;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int128 v43;
  _QWORD* v44;
  _QWORD* v45;
  __int64 v46;
  int v47;
  __int128 v48;
  __int64 v49;
  bool v50;
  _DWORD* v52;
  __int128 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  _BOOL8 result;
  _DWORD* v65;
  __int64* v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  int v71;
  struct {
    float32x4_t v72;
    __int64 v73;
  } v72_;
  float32x4_t v74;
  struct {
    __int128 v75;
    __int128 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    int v82;
    __int16 v83;
    char gap222_[2];
    char v84;
  } v75_;

  v1 = a1;
  if (*(_BYTE*)(a1 + 100) != 1) {
    goto LABEL_106;
  }
  v2 = (__int64*)(a1 + 48);
  v3 = *(_QWORD*)(a1 + 48);
  v4 = *(_QWORD*)(a1 + 56);
  v5 = *(_QWORD*)(a1 + 16);
  v6 = v4 - v3;
  if (v4 == v3) {
    v14 = *(_QWORD*)(v5 + 16);
    v9 = v5 + 16;
    v8 = 0;
    if ((*(_WORD*)(v14 + 185) & 0x4010) != 0) {
      v12 = 0;
      v11 = 0;
      v69 = 0;
      v13 = *v2;
      if (*v2 == 0) {
        goto LABEL_97;
      }
      goto LABEL_94;
    }
    v21 = nullptr;
    v15 = 0;
    v25 = nullptr;
  }
  else {
    if (v6 < 0) {
      GameRoutine_cdcc10();
    }
    v7 = v6 & 0x7FFFFFFFFFFFFFF0LL;
    v8 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v4 - v3, 16, 0);
    memcpy_alt1(v8, v3, v6 & 0x7FFFFFFFFFFFFFF0LL);
    v10 = *(_QWORD*)(v5 + 16);
    v9 = v5 + 16;
    if ((*(_WORD*)(v10 + 185) & 0x4010) != 0) {
      v11 = v8 + v6;
      v12 = v8 + v7;
      v69 = 0;
      v13 = *v2;
      if (*v2 == 0) {
        goto LABEL_97;
      }
    LABEL_94:
      *(_QWORD*)(v1 + 56) = v13;
      v56 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v56 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v13);
      goto LABEL_97;
    }
    if (v7 != 0) {
      v66 = (__int64*)(v1 + 48);
      v67 = v1;
      v15 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v6 & 0x7FFFFFFFFFFFFFF0LL, 16,
          0);
      v68 = v15 + v7;
      memcpy_alt1(v15, v8, v7);
      v16 = v7;
      v17 = (float32x4_t*)v15;
      do {
        v19 = *v17;
        v72_.v72 = vaddq_f32(*v17, COERCE_AS(float32x4_t, GameData_1a82f60));
        v74 = vaddq_f32(v19, COERCE_AS(float32x4_t, GameData_1a832d0));
        collision_670c60_alt1((void*)((__int64)&v75_.v75), &v72_.v72, &v74,
                              0x100000001LL);
        if (v75_.v84 == 1) {
          v20 = DWORD2(v75_.v75);
          LANES128(*(v17)).n128_u64[0] = v75_.v75;
          v18 = *v17;
          LANES128(v18).n128_u64[1] = v20;
        }
        else {
          LANES128(*(v17)).n128_u64[0] = 0xC47A0000C47A0000LL;
          v18 = *v17;
          LANES128(v18).n128_u64[1] = 3296329728LL;
        }
        *v17++ = v18;
        v16 -= 16LL;
      } while (v16 != 0);
      v2 = v66;
      v1 = v67;
      v21 = (_DWORD*)(v15 + v7);
      v22 = (_DWORD*)v15;
      while (1) {
        v23 = COERCE_FLOAT(*(_OWORD*)v22) == -0x1.f400000000000p+9f &&
              COERCE_FLOAT(HIDWORD(*(_QWORD*)v22)) == -0x1.f400000000000p+9f;
        if (v23 &&
            COERCE_FLOAT(*((_QWORD*)v22 + 1)) == -0x1.f400000000000p+9f) {
          break;
        }
        v22 += 4;
        v7 -= 16LL;
        if (v7 == 0) {
          goto LABEL_43;
        }
      }
      v25 = v22;
    }
    else {
      v21 = nullptr;
      v15 = 0;
      v25 = nullptr;
    }
  }
  if (v25 != v21) {
    for (i = v25 + 4; i != v21; i += 4) {
      if (COERCE_FLOAT(*(_OWORD*)i) != -0x1.f400000000000p+9f ||
          COERCE_FLOAT(HIDWORD(*(_QWORD*)i)) != -0x1.f400000000000p+9f ||
          COERCE_FLOAT(*((_QWORD*)i + 1)) != -0x1.f400000000000p+9f) {
        *v25 = *(_OWORD*)i;
        v25[1] = i[1];
        v29 = *(_OWORD*)v25;
        *((_QWORD*)&v29 + 1) = (unsigned int)i[2];
        *(_OWORD*)v25 = v29;
        v25 += 4;
      }
    }
  }
  v66 = v2;
  v67 = v1;
  v68 = (unsigned __int64)v21;
  if (v25 == v21) {
  LABEL_43:
    v69 = v8;
    v8 = v15;
    v25 = v21;
  }
  else {
    v69 = v8;
    v8 = v15;
  }
  v75_.v76 = (__typeof__(v75_.v76)){0};
  v75_.v75 = (__typeof__(v75_.v75)){0};
  v65 = v25;
  v75_.v83 = 256;
  v30 = *(_QWORD*)(*(_QWORD*)v9 + 24LL);
  v31 = *(_QWORD*)(v30 + 312);
  v32 = *(_DWORD*)(v30 + 528);
  v75_.v79 = *(_QWORD*)(v30 + 304);
  v75_.v80 = v31;
  v33 = *(_QWORD*)(v30 + 320);
  v75_.v82 = v32;
  v75_.v81 = v33;
  v34 = *(_QWORD*)(v30 + 296);
  v70 = ((__int64)v25 - v8) >> 4;
  v75_.v77 = *(_QWORD*)(v30 + 288);
  v75_.v78 = v34;
  if ((int)v70 >= 2) {
    LODWORD(v35) = 0;
    v36 = GameData_212ee30[0];
    do {
      v37 = v8 + 16LL * (int)v35;
      v35 = (int)v35;
      if (v70 <= (int)v35 + 1LL) {
        v38 = (int)v35 + 1LL;
      }
      else {
        v38 = v70;
      }
      v39 = v38 - 1;
      v71 = v38;
      while (v35 != v39) {
        ++v35;
        v40 = v8;
        v41 = v8 + 16 * v35;
        v42 = (_QWORD*)*v36;
        *(_QWORD*)&v75_.v75 = *(_QWORD*)v37;
        *(_QWORD*)&v43 = v75_.v75;
        *((_QWORD*)&v43 + 1) = *(unsigned int*)(v37 + 8);
        v75_.v75 = v43;
        LODWORD(v75_.v76) = *(_OWORD*)v41;
        DWORD1(v75_.v76) = *(_DWORD*)(v41 + 4);
        *(_QWORD*)&v43 = v75_.v76;
        DWORD2(v43) = *(_DWORD*)(v41 + 8);
        v72_.v73 = 0;
        v72_.v72 = (__typeof__(v72_.v72)){0};
        LOBYTE(v75_.v83) = 1;
        v44 = (_QWORD*)v42[7];
        v45 = (_QWORD*)v42[8];
        *((_QWORD*)&v43 + 1) = DWORD2(v43);
        v75_.v76 = v43;
        while (1) {
          if (v44 == v45) {
            v47 = 0;
            *(_QWORD*)v41 = 0xC47A0000C47A0000LL;
            v48 = *(_OWORD*)v41;
            *((_QWORD*)&v48 + 1) = 3296329728LL;
            *(_OWORD*)v41 = v48;
            goto LABEL_63;
          }
          v46 = *v44;
          if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v44 + 32LL))(*v44) & 1) !=
                  0 &&
              ((v75_.v83 & 0x100) != 0 || v42[1] != v46) &&
              ((*(__int64 (**)(__int64, __int128*, float32x4_t*))(
                   *(_QWORD*)v46 + 24LL))(v46, &v75_.v75, &v72_.v72) &
               1) != 0) {
            break;
          }
          ++v44;
        }
        v47 = 1;
      LABEL_63:
        v8 = v40;
        if (LANES128(v72_.v72).n128_u64[0] != 0) {
          LANES128(v72_.v72).n128_u64[1] = LANES128(v72_.v72).n128_u64[0];
          v49 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v49,
              LANES128(v72_.v72).n128_i64[0]);
        }
        if (v47 != 0) {
          goto LABEL_47;
        }
      }
      LODWORD(v35) = v71;
    LABEL_47:;
    } while ((int)v70 - 1 > (int)v35);
  }
  v2 = v66;
  v1 = v67;
  v12 = v8;
  if ((_DWORD*)v8 != v65) {
    v11 = v68;
    v12 = v8;
    while (1) {
      v50 = COERCE_FLOAT(*(_OWORD*)v12) == -0x1.f400000000000p+9f &&
            COERCE_FLOAT(HIDWORD(*(_QWORD*)v12)) == -0x1.f400000000000p+9f;
      if (v50 && COERCE_FLOAT(*(_QWORD*)(v12 + 8)) == -0x1.f400000000000p+9f) {
        break;
      }
      v12 += 16;
      if ((_DWORD*)v12 == v65) {
        goto LABEL_108;
      }
    }
  }
  if ((_DWORD*)v12 == v65) {
    v11 = v68;
    goto LABEL_108;
  }
  v52 = (_DWORD*)(v12 + 16);
  if ((_DWORD*)(v12 + 16) == v65) {
    v11 = v68;
  }
  else {
    v11 = v68;
    do {
      if (COERCE_FLOAT(*(_OWORD*)v52) != -0x1.f400000000000p+9f ||
          COERCE_FLOAT(HIDWORD(*(_QWORD*)v52)) != -0x1.f400000000000p+9f ||
          COERCE_FLOAT(*((_QWORD*)v52 + 1)) != -0x1.f400000000000p+9f) {
        *(_DWORD*)v12 = *(_OWORD*)v52;
        *(_DWORD*)(v12 + 4) = v52[1];
        v55 = *(_OWORD*)v12;
        *((_QWORD*)&v55 + 1) = (unsigned int)v52[2];
        *(_OWORD*)v12 = v55;
        v12 += 16;
      }
      v52 += 4;
    } while (v52 != v65);
  }
  if ((_DWORD*)v12 == v65) {
  LABEL_108:
    v12 = (__int64)v65;
    v13 = *v66;
    if (*v66 == 0) {
      goto LABEL_97;
    }
    goto LABEL_94;
  }
  v13 = *v66;
  if (*v66 != 0) {
    goto LABEL_94;
  }
LABEL_97:
  *(_QWORD*)(v1 + 48) = v8;
  *(_QWORD*)(v1 + 56) = v12;
  *(_QWORD*)(v1 + 64) = v11;
  if (v69 != 0) {
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v69);
  }
  CharacterBehaviorStack_df6260((__int64*)&v75_.v75, v2);
  v58 = *(_QWORD*)(v1 + 72);
  if (v58 != 0) {
    *(_QWORD*)(v1 + 80) = v58;
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v58);
  }
  *(_OWORD*)(v1 + 72) = v75_.v75;
  *(_QWORD*)(v1 + 88) = v75_.v76;
LABEL_106:
  v60 = *(_QWORD*)(v1 + 16);
  v61 = *(_DWORD*)(v1 + 96);
  LODWORD(v75_.v75) = 1;
  v62 = *(_QWORD*)(*(_QWORD*)(v60 + 16) + 24LL);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v62 + 16) + 40LL) + 8LL) + 64LL) =
      v61;
  v63 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v62 + 16) + 40LL) + 8LL);
  *(_QWORD*)(v63 + 20) = 0x3F8000003F800000LL;
  *(_BYTE*)(v63 + 32) = 1;
  *(_DWORD*)(v63 + 28) = 1065353216;
  result = CharacterController_d42740((_QWORD*)v63, (float32x4_t**)(v1 + 48),
                                      (int*)&v75_.v75);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 16) + 16LL) + 24LL) + 432LL) =
      1;
  return result;
}

__attribute__((swiftcall)) void

CharacterBehaviorStack_StackMoveLoop_Unknown6(PSEUDO_X8 x8_, __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD*)(result + 56);
  if (v2 == *(_QWORD*)(result + 48)) {
    *(_BYTE*)a2 = 0;
    *(_BYTE*)(a2 + 16) = 0;
  }
  else {
    v4 = *(_QWORD*)(v2 - 16);
    v3 = *(_QWORD*)(v2 - 8);
    *(_QWORD*)a2 = v4;
    *(_QWORD*)(a2 + 8) = v3;
    *(_BYTE*)(a2 + 16) = 1;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
