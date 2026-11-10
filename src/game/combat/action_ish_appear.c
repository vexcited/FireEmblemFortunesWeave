#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1108d00(_QWORD*, float32x4_t*);
__attribute__((swiftcall)) void GameRoutine_10690a0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int64 GameRoutine_11085c0(__int64);
__int64 GameRoutine_2b0();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD, long double);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 std___1___shared_weak_count___release_weak();
extern _QWORD GameData_1bb1b18[3];
extern _UNKNOWN* GameData_21300d0;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern __int64* GameData_212d448[9];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern int* GameData_21300c8;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
void GameRoutine_1068b40(__int64, char);
void Registration_a5aca0(__int64);
__int64 ActionIshAppear_Unknown6(__int64 result, long double a2);

__int64 ActionIshAppear_Unknown6(__int64 result, long double a2)
{
  float v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  long double v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float32x4_t v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  unsigned __int8 explicit;
  int* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  _QWORD* v29;
  int v30;
  int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  bool v38;
  __int64 v39;
  bool v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  bool v48;
  __int64 v49;
  bool v50;
  __int64 v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t* v58;
  float32x4_t v59;
  int8x16_t v60;
  float32x4_t v61;
  __int64 v62;
  int v63;
  float32x4_t v64;
  float32x4_t v65;
  struct {
    float32x4_t v66;
    char gap48_[64];
    char v67;
  } v66_;

  if ((*(_QWORD*)(*(_QWORD*)(result + 24) + 20LL) & 0x100000000LL) != 0) {
    LODWORD(v2) = *(_QWORD*)(*(_QWORD*)(result + 24) + 20LL);
    v3 = result;
    v4 = GameData_212d448[0];
    v5 = *GameData_212d448[0];
    if (*GameData_212d448[0] != 0) {
      result = nn_os_ConvertToTimeSpan(
          *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 344LL),
          a2);
      v6 = result / 1000 - *(_QWORD*)(v5 + 136);
      v7 = 0x1.e848000000000p+19f;
    }
    else {
      result = nn_os_ConvertToTimeSpan(
          *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 344LL),
          a2);
      v6 = result / 1000000;
      v7 = 0x1.f400000000000p+9f;
    }
    if ((float)((float)v6 / v7) >= (float)(v2 + -0x1.99999a0000000p-2f)) {
      v8 = *(_QWORD*)(v3 + 8);
      v9 = *v4;
      if (*v4 != 0 && (v10 = *(_QWORD*)(v9 + 8)) != 0 &&
          (*(_BYTE*)(v10 + 113) & 0x80) != 0) {
        v33 = *(_DWORD*)(v8 + 96) - 1;
        if (v33 > 2) {
          v34 = 2;
        }
        else {
          v34 = GameData_1bb1b18[v33];
        }
        v35 = v9 + 24 * v34;
        v36 = *(_QWORD*)(v35 + 32);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                  memory_order_relaxed);
        v37 = *(_QWORD*)(v35 + 40);
        v38 = *(_QWORD*)(v36 + 8) == -1 || v37 == 0;
        if (v38 || (v39 = *(_QWORD*)(v37 + 80)) == 0 ||
            (*(_QWORD*)(v39 + 8) != -1 ? (v40 = *(_QWORD*)(v37 + 88) == 0)
                                       : (v40 = true),
             v40)) {
          v41 = 0;
        }
        else if (*(_QWORD*)(v36 + 8) == -1) {
          v41 = 0;
        }
        else {
          v41 = v37;
        }
        std___1___shared_weak_count___release_weak();
        v42 = *v4;
        *(_DWORD*)(v8 + 40) = *(_DWORD*)(v41 + 40);
        *(_DWORD*)(v8 + 44) = *(_DWORD*)(v41 + 44);
        v43 = *(_DWORD*)(*(_QWORD*)(v3 + 8) + 96LL) - 1;
        if (v43 > 2) {
          v44 = 2;
        }
        else {
          v44 = GameData_1bb1b18[v43];
        }
        v45 = v42 + 24 * v44;
        v46 = *(_QWORD*)(v45 + 32);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 16), 1u,
                                  memory_order_relaxed);
        v47 = *(_QWORD*)(v45 + 40);
        v48 = *(_QWORD*)(v46 + 8) == -1 || v47 == 0;
        if (v48 || (v49 = *(_QWORD*)(v47 + 80)) == 0 ||
            (*(_QWORD*)(v49 + 8) != -1 ? (v50 = *(_QWORD*)(v47 + 88) == 0)
                                       : (v50 = true),
             v50)) {
          v51 = 0;
        }
        else if (*(_QWORD*)(v46 + 8) == -1) {
          v51 = 0;
        }
        else {
          v51 = v47;
        }
        std___1___shared_weak_count___release_weak();
        v52 = *(float*)(v51 + 48);
        v53 = *(float*)(v8 + 40);
        v54 = *(float*)(v8 + 44);
        *(float*)(v8 + 48) = v52;
        v55 = *(float*)(v51 + 52);
        *(float*)(v8 + 52) = v55;
        *(float*)(v8 + 40) = (float)(v52 + v52) + v53;
        *(float*)(v8 + 44) = (float)(v55 + v55) + v54;
        GameRoutine_1068b40(v8, 1);
        LANES128(v56).n128_u64[0] = *(_QWORD*)(v8 + 40);
        LANES128(v57).n128_u64[0] =
            LANES128(v56).n128_u32[0] | 0x4348000000000000LL;
        LANES128(v57).n128_u64[1] = LANES128(v56).n128_u32[1];
        v65 = v57;
        LANES128(v56).n128_u32[1] = -1027080192;
        LANES128(v56).n128_u64[1] = LANES128(v57).n128_u64[1];
        v64 = v56;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
          Registration_a5aca0((__int64)&GameData_21fdd90);
          GameRoutine_2b0();
          __cxa_guard_release(&GameData_21fde98);
        }
        collision_670c60((void*)((__int64)&v66_.v66), &v65, &v64, 3);
        if ((v66_.v67 & 1) != 0) {
          LANES128(v64).n128_u32[1] = LANES128(v66_.v66).n128_u32[1];
        }
        v58 = *(float32x4_t**)(*(_QWORD*)(v8 + 88) + 8LL);
        *((_QWORD*)&v13 + 1) = LANES128(v64).n128_u64[1];
        v59 = vsubq_f32(v58[19], v64);
        v60 = vmulq_f32(v59, v59);
        LANES128(v60).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v60, v60, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
                .n64_f32[0] != 0x0.0p+0f) {
          LANES128(v58[19]).n128_u64[0] = LANES128(v64).n128_u64[0];
          v61 = v58[19];
          LANES128(v58[18]).n128_u32[2] |= 1u;
          LANES128(v61).n128_u64[1] = DWORD2(v13);
          v58[19] = v61;
        }
      }
      else {
        v11 = *(_QWORD*)(v3 + 8);
        *(int32x2_t*)(v8 + 40) = vzip1_s32(
            *(int32x2_t*)(*(_QWORD*)(v3 + 24) + 32LL),
            COERCE_AS(
                int32x2_t,
                LANES128_OF(vextq_s8(*(int8x16_t*)(*(_QWORD*)(v3 + 24) + 32LL),
                                     *(int8x16_t*)(*(_QWORD*)(v3 + 24) + 32LL),
                                     8u))
                    .n128_u64[0]));
        GameRoutine_10690a0((void*)((__int64)&v66_.v66), v11);
        v12 = LANES128(v66_.v66).n128_f32[1] - *(float*)(v8 + 44);
        *(float*)&v13 = LANES128(v66_.v66).n128_f32[0] - *(float*)(v8 + 40);
        v14 = (float)(PSEUDO_UNFUSED(v12 * v12)) +
              (float)(*(float*)&v13 * *(float*)&v13);
        if (v14 >= 0x1.0000000000000p-23f) {
          v17 = 0x1.0000000000000p+0f / sqrtf(v14);
          v16 = *(float*)&v13 * v17;
          v15 = v12 * v17;
        }
        else {
          v15 = 0x1.0000000000000p+0f;
          v16 = 0x0.0p+0f;
        }
        *(float*)(v8 + 48) = v16;
        *(float*)(v8 + 52) = v15;
      }
      *(_QWORD*)&v13 = 0;
      CharacterAnimator_1079580(*(_QWORD*)(v8 + 368), 1817091785, v13,
                                -0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
      v19 = *(_QWORD*)(v3 + 8);
      v20 = *(_QWORD*)(v19 + 80);
      if (v20 == 0 || ((v21 = *(_QWORD*)(v19 + 88), *(_QWORD*)(v20 + 8) != -1)
                           ? (v22 = v21 == 0)
                           : (v22 = true),
                       v22)) {
        v23 = 0;
      }
      else {
        v23 = *(_QWORD*)(v21 + 8);
      }
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_21300d0,
                                      memory_order_acquire);
      v25 = GameData_21300c8;
      if ((explicit & 1) == 0) {
        v62 = v23;
        v63 = __cxa_guard_acquire(GameData_21300d0);
        v23 = v62;
        if (v63 != 0) {
          *v25 = wld_Crc32(0, "CharacterIshAppear", 0x12u);
          __cxa_guard_release(GameData_21300d0);
          v23 = v62;
        }
      }
      v26 = *(_QWORD*)(v23 + 512);
      v27 = v26;
      do {
        if (v27 == *(_QWORD*)(v23 + 504)) {
          goto LABEL_26;
        }
        v28 = *(_DWORD*)(v27 - 16);
        v27 -= 16;
        v26 -= 16;
      } while (v28 != *v25);
      if (*(_QWORD*)(v23 + 512) == v26 ||
          (v29 = *(_QWORD**)(v26 + 8)) == nullptr) {
      LABEL_26:
        v29 = (_QWORD*)GameRoutine_11085c0(v23);
      }
      LANES128(v18).n128_u32[0] = *(_DWORD*)(v8 + 40);
      LANES128(v18).n128_u32[2] = *(_DWORD*)(v8 + 44);
      v66_.v66 = v18;
      result = (__int64)GameRoutine_1108d00(v29, &v66_.v66);
      v30 = *(_DWORD*)(v3 + 16);
      if (v30 != 1 && v30 != 3) {
        if (v30 == 2) {
          v32 = 3;
        }
        else {
          v32 = 1;
        }
        *(_DWORD*)(v3 + 16) = v32;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
