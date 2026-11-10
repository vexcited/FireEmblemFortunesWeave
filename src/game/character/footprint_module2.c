#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10e8d40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2011030[])();
extern __int64 (*game_character_FootprintModule2_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 FootprintModule2_Destructor(_QWORD* a1);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 GameData_21c6978;
void game_10e91c0(_QWORD*, float32x4_t*, float32x4_t*, long double);
void FootprintModule2_Unknown6(__int64 a1);
__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__int64* Manager_bc6460(_QWORD*, float32x4_t*, char);
__int64 GameRoutine_10e94e0(_QWORD*, _QWORD*, _QWORD*);
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GroundAttributeFile_60b080(int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_216dc48;
extern __int64 (*GameData_2044668[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
extern int GameData_21d92e0;
float GameRoutine_9e1800(unsigned __int64*);
long double asin(long double, long double);
long double atan2(double, double);
__int64 game_character_FootprintModule2_Start_lambda0_Invoke(__int64 a1,
                                                             unsigned int** a2);

void FootprintModule2_Unknown6(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float32x4_t* v5;
  __int64 v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v1 + 289) == 1 && (*(_BYTE*)(v1 + 288) & 1) != 0) {
    while ((*(_BYTE*)(v1 + 300) & 0xFD) != 1) {
      v1 = *(_QWORD*)(v1 + 736);
      if (v1 == 0) {
        v2 = *(_QWORD*)(GameData_21c6978 + 32);
        if (*(_QWORD*)(GameData_21c6978 + 24) != v2) {
          v3 = *(_QWORD*)(v2 - 8);
          if (v3 != 0) {
            v5 = *(float32x4_t**)(v3 + 24);
            v4 = *(_QWORD*)(v3 + 32);
            if (v4 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v6 = a1;
                (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
                std___1___shared_weak_count___release_weak_alt1();
                a1 = v6;
              }
            }
            if (v5 != nullptr) {
              v7 = v5[1];
              v8 = vsubq_f32(v5[2], v7);
              v9 = vmulq_f32(v8, v8);
              LANES128(v9).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v9).n128_u64[0] =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
                      .n64_u64[0];
              LANES128(v9).n128_u64[1] = LANES128(v9).n128_u64[0];
              v10 = vrsqrteq_f32(v9);
              v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v9, v10)));
              v12 = vbicq_s8(
                  vmulq_f32(v8, vmulq_f32(v11, vrsqrtsq_f32(
                                                   v11, vmulq_f32(v9, v11)))),
                  vceqzq_f32(v9));
              v13 = v7;
              game_10e91c0((_QWORD*)(a1 + 88), &v13, &v12, *(long double*)&v7);
            }
          }
        }
        return;
      }
      if (*(_BYTE*)(v1 + 289) != 1 || *(_BYTE*)(v1 + 288) != 1) {
        return;
      }
    }
  }
}

__int64 FootprintModule2_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;

  *a1 = game_character_FootprintModule2_vtable;
  a1[3] = GameData_2011030;
  GameRoutine_10e8d40(a1 + 11);
  v2 = a1[8];
  if (v2 != 0) {
    v3 = a1[9];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v2 == v3) {
      goto LABEL_12;
    }
    v5 = a1[9];
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v3 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
        }
      }
      v3 = v5;
    } while (v5 != v2);
    v9 = a1[8];
    a1[9] = v2;
    v2 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v2);
    }
  }
  result = a1[7];
  a1[3] = kaneko_WPHolder_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v12 = a1[5];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak(v12);
  }
  return result;
}

__int64 game_character_FootprintModule2_Start_lambda0_Invoke(__int64 a1,
                                                             unsigned int** a2)
{
  unsigned int* v2;
  _QWORD* v4;
  __int64 result;
  unsigned __int64 v6;
  float v8;
  float32x4_t* v9;
  int8x16_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float v20;
  double v21;
  long double v22;
  float v23;
  long double v24;
  long double v25;
  long double v26;
  long double v27;
  float32x4_t v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  float32x4_t v32;
  float v33;
  _QWORD* v34;
  __int64 v35;
  __int128 v36;
  __int64* v37;
  unsigned int v38;
  float32x4_t v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned int v42;
  unsigned int v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  int8x16_t v49[4];
  struct {
    float32x4_t v50;
    __int64 v51;
    int v52;
    char gap172_[4];
    float32x4_t v53;
    __int128 v54;
    float32x4_t v55;
  } v50_;

  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *a2;
  v4 = *(_QWORD**)(a1 + 8);
  result = GroundAttributeFile_60b080(*(_DWORD*)(*((_QWORD*)*a2 + 2) + 40LL)),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(float*)(result + 56) >= 0x1.0000000000000p-1f) {
    v6 = (int)*v2 <= 1 ? *v2 : *v2 - 2;
    if ((v6 & 0x80000000) == 0 &&
        0xAAAAAAAAAAAAAAABLL * ((__int64)(v4[9] - v4[8]) >> 3) > v6) {
      if (GameData_21d92e0 == 6 || GameData_21d92e0 == 1) {
        v8 = *(float*)(a1 + 16);
      }
      else {
        v8 = 0x1.0000000000000p+0f;
      }
      v9 = *((float32x4_t**)v2 + 2);
      v11 = *v9;
      v10 = v9[1];
      v49[0] = *(int8x16_t*)(*((_QWORD*)v2 + 1) + 32LL);
      v49[1] = v10;
      LANES128(v12).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v49[0], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v13).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v14).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v12).n128_i8[8] =
          vqtbl1_s8(v49[0], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v13).n128_i8[8] =
          vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v14).n128_i8[8] =
          vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v15).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v49[0], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v15).n128_i8[8] =
          vqtbl1_s8(v49[0], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v16 = vmlsq_f32(vmulq_f32(v12, v14), v13, v15);
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
      LANES128(v17).n128_u64[1] = LANES128(v17).n128_u64[0];
      v18 = vrsqrteq_f32(v17);
      v19 = vmulq_f32(v18, vrsqrtsq_f32(v18, vmulq_f32(v17, v18)));
      v45 = vbicq_s8(
          vmulq_f32(v16,
                    vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(v17, v19)))),
          vceqzq_f32(v17));
      v49[2] = v45;
      v49[3] = v11;
      Quat_624bc0((void*)(&v48), (__int64)v49),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v20 = vmuls_lane_f32(LANES128(v48).n128_f32[1], v48, 2);
      v21 =
          vmuls_lane_f32(LANES128(v48).n128_f32[1],
                         COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]), 1);
      v22 = atan2((float)(v20 + (float)(LANES128(v48).n128_f32[0] *
                                        LANES128(v48).n128_f32[3])) +
                      (float)(v20 + (float)(LANES128(v48).n128_f32[0] *
                                            LANES128(v48).n128_f32[3])),
                  (LANES128_OF(vmulq_f32(v48, v48)).n128_f32[0] + v21) *
                          -0x1.0000000000000p+1 +
                      0x1.0000000000000p+0),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)&v22 = *(double*)&v22;
      v43 = LODWORD(v22);
      *((_QWORD*)&v25 + 1) = LANES128(v48).n128_u64[1];
      v23 = vmuls_lane_f32(-LANES128(v48).n128_f32[0], v48, 2) +
            (float)(LANES128(v48).n128_f32[1] * LANES128(v48).n128_f32[3]);
      *(_QWORD*)&v24 = -0x1.0000000000000p+0;
      *(double*)&v25 = v23 + v23;
      if (*(double*)&v25 > 0x1.0000000000000p+0) {
        *(double*)&v25 = 0x1.0000000000000p+0;
      }
      if (*(double*)&v25 < -0x1.0000000000000p+0) {
        *(double*)&v25 = -0x1.0000000000000p+0;
      }
      v26 = asin(v25, v24),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)&v26 = *(double*)&v26;
      v42 = LODWORD(v26);
      *(float*)&v26 =
          vmuls_lane_f32(LANES128(v48).n128_f32[0],
                         COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]), 1);
      v27 =
          atan2((float)(*(float*)&v26 + (float)(LANES128(v48).n128_f32[2] *
                                                LANES128(v48).n128_f32[3])) +
                    (float)(*(float*)&v26 + (float)(LANES128(v48).n128_f32[2] *
                                                    LANES128(v48).n128_f32[3])),
                (v21 + vmuls_lane_f32(LANES128(v48).n128_f32[2], v48, 2)) *
                        -0x1.0000000000000p+1 +
                    0x1.0000000000000p+0),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(float*)&v27 = *(double*)&v27;
      LANES128(v28).n128_u64[0] = __PAIR64__(v42, v43);
      LANES128(v28).n128_u64[1] = LODWORD(v27);
      v44 = vmulq_f32(v28, vdupq_n_s32(0x42652EE1u));
      v29 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_DWORD*)(v29 + 48) = 0x2000;
      *(_WORD*)(v29 + 108) = 256;
      *(_QWORD*)(v29 + 16) = 0;
      *(_DWORD*)(v29 + 32) = 0;
      *(_QWORD*)(v29 + 40) = 0;
      *(_DWORD*)(v29 + 104) = 0;
      *(_DWORD*)(v29 + 112) = -1082130432;
      *(_QWORD*)(v29 + 24) = 0;
      *(_QWORD*)(v29 + 56) = 0;
      *(_QWORD*)(v29 + 64) = 0;
      *(_QWORD*)(v29 + 72) = 0;
      *(_WORD*)(v29 + 80) = 0;
      *(_WORD*)(v29 + 116) = 0;
      *(_WORD*)(v29 + 136) = 0;
      *(_BYTE*)(v29 + 160) = 0;
      *(_BYTE*)(v29 + 288) = 0;
      *(_QWORD*)(v29 + 272) = 0;
      *(_QWORD*)(v29 + 280) = 0;
      *(_QWORD*)(v29 + 256) = 0;
      *(_QWORD*)(v29 + 264) = 0;
      *(_QWORD*)(v29 + 240) = 0;
      *(_QWORD*)(v29 + 248) = 0;
      *(_QWORD*)(v29 + 224) = 0;
      *(_QWORD*)(v29 + 232) = 0;
      *(_QWORD*)(v29 + 208) = 0;
      *(_QWORD*)(v29 + 216) = 0;
      *(_QWORD*)(v29 + 192) = 0;
      *(_QWORD*)(v29 + 200) = 0;
      *(_QWORD*)(v29 + 176) = 0;
      *(_QWORD*)(v29 + 184) = 0;
      *(_QWORD*)(v29 + 168) = 0;
      *(_QWORD*)(v29 + 120) = 0;
      *(_DWORD*)(v29 + 127) = 0;
      LANES128(v47).n128_u64[0] = v29 + 24;
      LANES128(v47).n128_u64[1] = v29;
      *(_QWORD*)(v29 + 8) = 0;
      *(_QWORD*)v29 = GameData_2044668;
      *(_DWORD*)(v29 + 292) = 2;
      nn_os_LockMutex(&GameData_216dc48),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v30 = v4[8] + 24LL * (unsigned int)v6;
      if ((*(_BYTE*)v30 & 1) != 0) {
        v31 = *(_QWORD*)(v30 + 16);
      }
      else {
        v31 = v30 + 1;
      }
      v32 = *v9;
      LANES128(v50_.v50).n128_u64[1] = v31;
      v46 = vaddq_f32(vmulq_f32(v45, vdupq_n_s32(0x3DCCCCCDu)), v32);
      LANES128(v50_.v50).n128_u64[0] = game_HashString(v31),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v33 = GameRoutine_9e1800(LANES128(v50_.v50).n128_u64),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v50_.v50 = (__typeof__(v50_.v50)){0};
      v50_.v51 = v31;
      v34 = (_QWORD*)*eft_g_effectSystem_ptr[0];
      v35 = COERCE_UNSIGNED_INT(v8 * v33);
      *(_QWORD*)&v36 = v35 | (v35 << 32);
      v50_.v52 = 8;
      *((_QWORD*)&v36 + 1) = v35;
      v50_.v53 = v46;
      v50_.v54 = v36;
      v50_.v55 = v44;
      v37 = Manager_bc6460(v34, &v50_.v50, 1),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_14a10d0(&v50_.v50, (__int64)v37, v38,
                          (__int64)&GameData_1a9f09e),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v39 = v50_.v50;
      if (LANES128(v50_.v50).n128_u64[1] != 0) {
        atomic_fetch_add_explicit(
            (atomic_ullong* volatile)(LANES128(v50_.v50).n128_u64[1] + 8), 1u,
            memory_order_relaxed);
      }
      v47 = v39;
      if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v29),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (LANES128(v47).n128_u64[1] != 0) {
        atomic_fetch_add_explicit(
            (atomic_ullong* volatile)(LANES128(v47).n128_u64[1] + 8), 1u,
            memory_order_relaxed);
        if (atomic_fetch_add(
                (atomic_ullong* volatile)(LANES128(v47).n128_u64[1] + 8),
                0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)LANES128(v47).n128_u64[1] +
                                          16LL))(LANES128(v47).n128_u64[1]),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(LANES128(v47).n128_u64[1]),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v40 = LANES128(v50_.v50).n128_u64[1];
      if (LANES128(v50_.v50).n128_u64[1] != 0 &&
          atomic_fetch_add(
              (atomic_ullong* volatile)(LANES128(v50_.v50).n128_u64[1] + 8),
              0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)v40 + 16LL))(v40),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v40),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      nn_os_UnlockMutex(&GameData_216dc48),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = GameRoutine_10e94e0(v4 + 11, v9, &v47),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v41 = LANES128(v47).n128_u64[1];
      if (LANES128(v47).n128_u64[1] != 0 &&
          atomic_fetch_add(
              (atomic_ullong* volatile)(LANES128(v47).n128_u64[1] + 8),
              0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)v41 + 16LL))(v41),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        return std___1___shared_weak_count___release_weak(v41);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
