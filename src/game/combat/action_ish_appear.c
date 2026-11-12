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
__int64 ActionIshAppear_Unknown6_alt1(__int64 result, long double a2) __asm__(
    "ActionIshAppear_Unknown6");
_QWORD* GameRoutine_1108d00_alt1(_QWORD*,
                                 __int64) __asm__("GameRoutine_1108d00");
__attribute__((swiftcall)) void game_combat_10690a0(PSEUDO_X8, __int64);
__int64 GameHr_11085c0(__int64);
__int64 nn_os_ConvertToTimeSpan_alt1(_QWORD) __asm__("nn_os_ConvertToTimeSpan");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _QWORD GameData_21fdd90_alt1[] __asm__("GameData_21fdd90");
float CharacterAnimator_1079580_alt1(__int64, int, float, float, float) __asm__(
    "CharacterAnimator_1079580");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameHr_a5aca0(__int64);
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64 ActionIshAppear_Unknown6(__int64 result);

__int64 ActionIshAppear_Unknown6(__int64 result)
{
  float v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int128 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  unsigned __int8 explicit;
  int* v24;
  __int64 v25;
  __int64 v26;
  int v27;
  _QWORD* v28;
  int v29;
  int v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  bool v37;
  __int64 v38;
  bool v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  bool v47;
  __int64 v48;
  bool v49;
  __int64 v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t* v57;
  unsigned __int32 v58;
  float32x4_t v59;
  int8x16_t v60;
  float32x4_t v61;
  __int64 v62;
  int v63;
  float32x4_t v64;
  float32x4_t v65;
  struct {
    float v66[20];
    char v67;
  } v66_;

  if ((*(_QWORD*)(*(_QWORD*)(result + 24) + 20LL) & 0x100000000LL) != 0) {
    LODWORD(v1) = *(_QWORD*)(*(_QWORD*)(result + 24) + 20LL);
    v2 = result;
    v3 = GameData_212d448[0];
    v4 = *GameData_212d448[0];
    if (*GameData_212d448[0] != 0) {
      result = nn_os_ConvertToTimeSpan_alt1(
          *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 344LL));
      v5 = result / 1000 - *(_QWORD*)(v4 + 136);
      v6 = 0x1.e848000000000p+19f;
    }
    else {
      result = nn_os_ConvertToTimeSpan_alt1(
          *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 344LL));
      v5 = result / 1000000;
      v6 = 0x1.f400000000000p+9f;
    }
    if ((float)((float)v5 / v6) >= (float)(v1 + -0x1.99999a0000000p-2f)) {
      v7 = *(_QWORD*)(v2 + 8);
      v8 = *v3;
      if (*v3 != 0 && (v9 = *(_QWORD*)(v8 + 8)) != 0 &&
          (*(_BYTE*)(v9 + 113) & 0x80) != 0) {
        v32 = *(_DWORD*)(v7 + 96) - 1;
        if (v32 > 2) {
          v33 = 2;
        }
        else {
          v33 = GameData_1bb1b18[v32];
        }
        v34 = v8 + 24 * v33;
        v35 = *(_QWORD*)(v34 + 32);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                                  memory_order_relaxed);
        v36 = *(_QWORD*)(v34 + 40);
        v37 = *(_QWORD*)(v35 + 8) == -1 || v36 == 0;
        if (v37 || (v38 = *(_QWORD*)(v36 + 80)) == 0 ||
            (*(_QWORD*)(v38 + 8) != -1 ? (v39 = *(_QWORD*)(v36 + 88) == 0)
                                       : (v39 = true),
             v39)) {
          v40 = 0;
        }
        else if (*(_QWORD*)(v35 + 8) == -1) {
          v40 = 0;
        }
        else {
          v40 = v36;
        }
        std___1___shared_weak_count___release_weak_alt1(v35);
        v41 = *v3;
        *(_DWORD*)(v7 + 40) = *(_DWORD*)(v40 + 40);
        *(_DWORD*)(v7 + 44) = *(_DWORD*)(v40 + 44);
        v42 = *(_DWORD*)(*(_QWORD*)(v2 + 8) + 96LL) - 1;
        if (v42 > 2) {
          v43 = 2;
        }
        else {
          v43 = GameData_1bb1b18[v42];
        }
        v44 = v41 + 24 * v43;
        v45 = *(_QWORD*)(v44 + 32);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                                  memory_order_relaxed);
        v46 = *(_QWORD*)(v44 + 40);
        v47 = *(_QWORD*)(v45 + 8) == -1 || v46 == 0;
        if (v47 || (v48 = *(_QWORD*)(v46 + 80)) == 0 ||
            (*(_QWORD*)(v48 + 8) != -1 ? (v49 = *(_QWORD*)(v46 + 88) == 0)
                                       : (v49 = true),
             v49)) {
          v50 = 0;
        }
        else if (*(_QWORD*)(v45 + 8) == -1) {
          v50 = 0;
        }
        else {
          v50 = v46;
        }
        std___1___shared_weak_count___release_weak_alt1(v45);
        v51 = *(float*)(v50 + 48);
        v52 = *(float*)(v7 + 40);
        v53 = *(float*)(v7 + 44);
        *(float*)(v7 + 48) = v51;
        v54 = *(float*)(v50 + 52);
        *(float*)(v7 + 52) = v54;
        *(float*)(v7 + 40) = (float)(v51 + v51) + v52;
        *(float*)(v7 + 44) = (float)(v54 + v54) + v53;
        GameRoutine_1068b40(v7, 1);
        LANES128(v55).n128_u64[0] = *(_QWORD*)(v7 + 40);
        LANES128(v56).n128_u64[0] =
            LANES128(v55).n128_u32[0] | 0x4348000000000000LL;
        LANES128(v56).n128_u64[1] = LANES128(v55).n128_u32[1];
        v65 = v56;
        LANES128(v55).n128_u32[1] = -1027080192;
        LANES128(v55).n128_u64[1] = LANES128(v56).n128_u64[1];
        v64 = v55;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_21fde98) != 0) {
          GameHr_a5aca0((__int64)GameData_21fdd90_alt1);
          GameRoutine_2b0();
          __cxa_guard_release_alt1((__int64)&GameData_21fde98);
        }
        collision_670c60((void*)((__int64)v66_.v66), &v65, &v64, 3);
        if ((v66_.v67 & 1) != 0) {
          LANES128(v64).n128_f32[1] = v66_.v66[1];
        }
        v57 = *(float32x4_t**)(*(_QWORD*)(v7 + 88) + 8LL);
        v58 = LANES128(v64).n128_u32[2];
        v59 = vsubq_f32(v57[19], v64);
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
          LANES128(v57[19]).n128_u64[0] = LANES128(v64).n128_u64[0];
          v61 = v57[19];
          LANES128(v57[18]).n128_u32[2] |= 1u;
          LANES128(v61).n128_u64[1] = v58;
          v57[19] = v61;
        }
      }
      else {
        v10 = *(_QWORD*)(v2 + 8);
        *(int32x2_t*)(v7 + 40) = vzip1_s32(
            *(int32x2_t*)(*(_QWORD*)(v2 + 24) + 32LL),
            COERCE_AS(
                int32x2_t,
                LANES128_OF(vextq_s8(*(int8x16_t*)(*(_QWORD*)(v2 + 24) + 32LL),
                                     *(int8x16_t*)(*(_QWORD*)(v2 + 24) + 32LL),
                                     8u))
                    .n128_u64[0]));
        game_combat_10690a0((void*)((__int64)v66_.v66), v10);
        v11 = v66_.v66[1] - *(float*)(v7 + 44);
        v12 = v66_.v66[0] - *(float*)(v7 + 40);
        v13 = (float)(PSEUDO_UNFUSED(v11 * v11)) + (float)(v12 * v12);
        if (v13 >= 0x1.0000000000000p-23f) {
          v16 = 0x1.0000000000000p+0f / sqrtf(v13);
          v15 = v12 * v16;
          v14 = v11 * v16;
        }
        else {
          v14 = 0x1.0000000000000p+0f;
          v15 = 0x0.0p+0f;
        }
        *(float*)(v7 + 48) = v15;
        *(float*)(v7 + 52) = v14;
      }
      CharacterAnimator_1079580_alt1(*(_QWORD*)(v7 + 368), 1817091785,
                                     0x0.0p+0f, -0x1.0000000000000p+0f,
                                     0x1.0000000000000p+0f);
      v18 = *(_QWORD*)(v2 + 8);
      v19 = *(_QWORD*)(v18 + 80);
      if (v19 == 0 || ((v20 = *(_QWORD*)(v18 + 88), *(_QWORD*)(v19 + 8) != -1)
                           ? (v21 = v20 == 0)
                           : (v21 = true),
                       v21)) {
        v22 = 0;
      }
      else {
        v22 = *(_QWORD*)(v20 + 8);
      }
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_21300d0,
                                      memory_order_acquire);
      v24 = GameData_21300c8;
      if ((explicit & 1) == 0) {
        v62 = v22;
        v63 = __cxa_guard_acquire_alt1((__int64)GameData_21300d0);
        v22 = v62;
        if (v63 != 0) {
          *v24 = wld_Crc32(0, "CharacterIshAppear", 0x12u);
          __cxa_guard_release_alt1((__int64)GameData_21300d0);
          v22 = v62;
        }
      }
      v25 = *(_QWORD*)(v22 + 512);
      v26 = v25;
      do {
        if (v26 == *(_QWORD*)(v22 + 504)) {
          goto LABEL_26;
        }
        v27 = *(_DWORD*)(v26 - 16);
        v26 -= 16;
        v25 -= 16;
      } while (v27 != *v24);
      if (*(_QWORD*)(v22 + 512) == v25 ||
          (v28 = *(_QWORD**)(v25 + 8)) == nullptr) {
      LABEL_26:
        v28 = (_QWORD*)GameHr_11085c0(v22);
      }
      LODWORD(v17) = *(_DWORD*)(v7 + 40);
      DWORD2(v17) = *(_DWORD*)(v7 + 44);
      *(_OWORD*)v66_.v66 = v17;
      result = (__int64)GameRoutine_1108d00_alt1(v28, (__int64)v66_.v66);
      v29 = *(_DWORD*)(v2 + 16);
      if (v29 != 1 && v29 != 3) {
        if (v29 == 2) {
          v31 = 3;
        }
        else {
          v31 = 1;
        }
        *(_DWORD*)(v2 + 16) = v31;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
