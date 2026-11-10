#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e7d0a0(_QWORD, _QWORD);
__int64 GameRoutine_edf9f0(_QWORD);
__int64 GameRoutine_ff7720(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlCameraCutBase_vtable)();
extern __int64 (*game_cmdbtl_CmdBtlCameraCutSelfie_vtable[])();
float GameRoutine_e7d750(_QWORD);
__int64 CmdBtlCameraCutSelfie_Destructor(__int64 a1);
__int64 CmdBtlCameraCutSelfie_Unknown2(__int64 a1);
__int64 GameRoutine_ff7420(_QWORD, _QWORD);
__int64 CmdBtlCameraCutSelfie_edfe30(__int64 a1, __int64* a2, __int64 a3,
                                     _DWORD* a4, char a5, char a6, float a7,
                                     float a8, float a9);
__attribute__((swiftcall)) void CmdBtlCameraCutBase_e82a10(PSEUDO_X8, _QWORD,
                                                           _QWORD, _QWORD);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
float CmdBtlCameraCutBase_e82510(__int64, __int64);
float CmdBtlUnit_e7d750(_QWORD*);
void GameRoutine_e9f200(__int64);
void CmdBtlCameraCutSelfie_edf9f0(__int64 a1);

__int64 CmdBtlCameraCutSelfie_Destructor(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[2];

  *(_QWORD*)a1 = game_cmdbtl_CmdBtlCameraCutSelfie_vtable;
  result = *(_QWORD*)(a1 + 48);
  if (result != 0) {
    v3 = std___1___shared_weak_count_lock(result);
    if (v3 != 0) {
      v4 = *(_QWORD**)(a1 + 40);
      v5 = v3;
      if (v4 != nullptr) {
        v9[0] = "Selfie";
        v9[1] = 6;
        GameRoutine_ff7720(v4 + 43, v9);
        v6 = v4[27];
        v7 = v4[28];
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v6 != 0) {
          *(_BYTE*)(v6 + 60) = v4[44] != v4[43];
        }
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
        if (*(_BYTE*)(a1 + 120) == 1 && *(float*)(a1 + 116) < 0.0) {
          GameRoutine_e7d0a0(v4, 1);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
    result = *(_QWORD*)(a1 + 48);
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
  }
  *(_QWORD*)a1 = &game_cmdbtl_CmdBtlCameraCutBase_vtable;
  v8 = *(_QWORD*)(a1 + 16);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 CmdBtlCameraCutSelfie_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int128 v9;
  __int64 v10;
  float v11;
  __int128 v12;
  __int64 v13;

  if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
    v2 = *(_QWORD*)(a1 + 48);
    if (v2 != 0) {
      v3 = std___1___shared_weak_count_lock(v2);
      if (v3 != 0) {
        if (*(_QWORD*)(a1 + 40) != 0 && *(_BYTE*)(a1 + 120) == 1 &&
            *(float*)(a1 + 116) < 0.0) {
          v4 = v3;
          GameRoutine_e7d0a0(*(_QWORD*)(a1 + 40), 0);
          v3 = v4;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v5 = v3;
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          std___1___shared_weak_count___release_weak(v5);
        }
      }
    }
  }
  v6 = *(_QWORD*)(a1 + 48);
  if (v6 != 0) {
    v7 = std___1___shared_weak_count_lock(v6);
    if (v7 != 0) {
      v8 = *(_QWORD*)(a1 + 40);
      if (v8 != 0) {
        if (*(_BYTE*)(v8 + 464) == 1) {
          v9 = *(_OWORD*)(v8 + 448);
        }
        else {
          v10 = v7;
          v11 = GameRoutine_e7d750(*(_QWORD*)(a1 + 40));
          LODWORD(v9) = 0;
          DWORD2(v9) = 0;
          v7 = v10;
          *((float*)&v9 + 1) = v11;
        }
        *(_QWORD*)(a1 + 144) = v9;
        v12 = *(_OWORD*)(a1 + 144);
        *((_QWORD*)&v12 + 1) = DWORD2(v9);
        *(_OWORD*)(a1 + 144) = v12;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v13 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  return GameRoutine_edf9f0(a1);
}

void CmdBtlCameraCutSelfie_edf9f0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  long double v4;
  __int64 v5;
  __int64 v6;
  float v7;
  char v8;
  float32x4_t v9;
  float v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  int v15;
  float32x4_t v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  float32x4_t v22;
  __int128 v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float v27;
  int8x16_t v28;
  float32x4_t v29;
  int8x16_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  __int64 v43;
  __int64 v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  struct {
    int8x16_t v48;
    __int128 v49;
    float v50;
    int v51;
  } v48_;
  _QWORD v52[2];
  float32x4_t v53;

  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 48);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2),
    v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
    v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      v5 = *(_QWORD*)(a1 + 40);
      v6 = v3;
      if (v5 == 0) {
      LABEL_35:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(v6, v4),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v6),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        return;
      }
      v48_.v50 = 0x0.0p+0f;
      v7 = *(float*)(a1 + 112);
      v48_.v49 = (__typeof__(v48_.v49)){0};
      v8 = *(_BYTE*)(a1 + 120);
      v48_.v48 = (__typeof__(v48_.v48)){0};
      *(float*)&v48_.v49 = *(float*)(v5 + 32) + v7;
      v9 = COERCE_AS(float32x4_t, (unsigned __int64)v48_.v49);
      v48_.v49 = (unsigned __int64)v48_.v49;
      if ((v8 & 1) != 0) {
        v10 = 0x1.0ccccc0000000p+1f;
        goto LABEL_16;
      }
      v12 = *(_QWORD*)(v5 + 216);
      v11 = *(_QWORD*)(v5 + 224);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v12 != 0) {
        GameRoutine_e9f200(v12),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v9 = COERCE_AS(float32x4_t, (unsigned __int64)v48_.v49);
        v14 = fmaxf(v13, 0x1.3333340000000p-1f);
        if ((*(_BYTE*)(v12 + 92) & (*(float*)(v12 + 88) < v14)) != 0) {
          v14 = *(float*)(v12 + 88);
        }
        v10 = v14 + 0x1.8000000000000p+0f;
        if (v11 == 0) {
          goto LABEL_16;
        }
      }
      else {
        v10 = 0x1.0000000000000p+1f;
        if (v11 == 0) {
        LABEL_16:
          v15 = *(_DWORD*)(a1 + 124);
          v48_.v50 = v10 + *(float*)(a1 + 116);
          v48_.v51 = v15;
          v16 = vmulq_f32(v9, vdupq_n_s32(0x3C8EFA35u));
          math_Quat_FromYawPitchRoll((void*)(&v47), LANES128(v16).n128_f32[0],
                                     LANES128(v16).n128_f32[1],
                                     LANES128(v16).n128_f32[2]),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v4 = COERCE_AS(__typeof__(v4),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          v17 = *(_QWORD*)(a1 + 48);
          if (v17 != 0 && (v18 = std___1___shared_weak_count_lock(v17)) != 0) {
            v19 = *(_QWORD**)(a1 + 40);
            v20 = v18;
            if (v19 != nullptr) {
              v21 = *(_QWORD*)(a1 + 48);
              v52[0] = *(_QWORD*)(a1 + 40);
              v52[1] = v21;
              if (v21 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16),
                                          1u, memory_order_relaxed);
                CmdBtlCameraCutBase_e82a10((void*)(&v53), a1, v52,
                                           *(unsigned __int8*)(a1 + 120)),
                    v13 = COERCE_AS(__typeof__(v13),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v4 = COERCE_AS(__typeof__(v4),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak_alt1(v21),
                    v13 = COERCE_AS(__typeof__(v13),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v4 = COERCE_AS(__typeof__(v4),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              else {
                CmdBtlCameraCutBase_e82a10((void*)(&v53), a1, v52,
                                           *(unsigned __int8*)(a1 + 120)),
                    v13 = COERCE_AS(__typeof__(v13),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v4 = COERCE_AS(__typeof__(v4),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              if (*(_BYTE*)(a1 + 80) == 1) {
                v23 = *(_OWORD*)(a1 + 64);
                LANES128(v53).n128_u64[0] = *(_QWORD*)(a1 + 64);
                LANES128(v24).n128_u64[0] = LANES128(v53).n128_u64[0];
                LANES128(v24).n128_u64[1] = DWORD2(v23);
                v53 = v24;
              }
              if (*(_BYTE*)(a1 + 120) == 1) {
                v25 = v53;
                v26 = *(float32x4_t*)(a1 + 144);
              }
              else {
                v27 = CmdBtlUnit_e7d750(v19),
                v13 = COERCE_AS(__typeof__(v13),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v4 = COERCE_AS(__typeof__(v4),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
                LANES128(v26).n128_u32[0] = 0;
                LANES128(v26).n128_u64[1] = 0;
                LANES128(v26).n128_f32[1] = v27;
                v25 = v53;
              }
              v22 = vaddq_f32(v25, v26);
            }
            else {
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)&GameData_21a6130,
                       memory_order_acquire) &
                   1) == 0 &&
                  (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
                v44 = *((_QWORD*)GameData_212c540 + 1);
                *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
                *((_QWORD*)&GameData_21a6120 + 1) = v44;
                __cxa_guard_release(&GameData_21a6130),
                    v13 = COERCE_AS(__typeof__(v13),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v4 = COERCE_AS(__typeof__(v4),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              v22 = COERCE_AS(float32x4_t, GameData_21a6120);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v46 = v22;
              (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
                  v13 = COERCE_AS(__typeof__(v13),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v4 = COERCE_AS(__typeof__(v4),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v20),
                  v13 = COERCE_AS(__typeof__(v13),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v4 = COERCE_AS(__typeof__(v4),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
              v22 = v46;
            }
          }
          else {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                      memory_order_acquire) &
                 1) == 0 &&
                (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
              v43 = *((_QWORD*)GameData_212c540 + 1);
              *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
              *((_QWORD*)&GameData_21a6120 + 1) = v43;
              __cxa_guard_release(&GameData_21a6130),
                  v13 = COERCE_AS(__typeof__(v13),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v4 = COERCE_AS(__typeof__(v4),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            v22 = COERCE_AS(float32x4_t, GameData_21a6120);
          }
          v28 = *(int8x16_t*)(a1 + 96);
          LANES128(v29).n128_u64[0] = *(_QWORD*)(a1 + 96);
          v30 = vmulq_f32(v47, COERCE_AS(float32x4_t, GameData_1a829d0));
          LANES128(v31).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v32).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v33).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v34).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v31).n128_u64[1] = LANES128(v31).n128_u64[0];
          LANES128(v29).n128_u64[1] = LANES128(v32).n128_u64[0];
          *(int8x8_t*)&LANES128(v33).n128_i8[8] =
              vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
          *(int32x2_t*)&LANES128(v34).n128_i8[8] =
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0]), 1);
          v35 = vmlaq_f32(vmulq_f32(v30, v31),
                          COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v29, v33));
          LANES128(v29).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v32).n128_u64[1] = LANES128(v29).n128_u64[0];
          LANES128(v29).n128_u64[1] = *(_QWORD*)(a1 + 96);
          LANES128(v28).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v28).n128_i8[8] =
              vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
          LANES128(v30).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          v36 =
              vmlsq_f32(vmlaq_f32(v35, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v29, v34)),
                        v28, v32);
          LANES128(v28).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v37).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v38).n128_u64[0] = LANES128(v47).n128_u64[0];
          LANES128(v28).n128_u64[1] = LANES128(v28).n128_u64[0];
          LANES128(v39).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v38).n128_u64[1] = LANES128(v30).n128_u64[0];
          *(int8x8_t*)&LANES128(v37).n128_i8[8] =
              vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
          *(int32x2_t*)&LANES128(v39).n128_i8[8] =
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v36).n128_u64[0]), 1);
          v40 = vmlaq_f32(vmulq_f32(v28, v36),
                          COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v38, v37));
          LANES128(v37).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v30).n128_u64[1] = LANES128(v37).n128_u64[0];
          LANES128(v37).n128_u64[1] = LANES128(v47).n128_u64[0];
          LANES128(v41).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v41).n128_i8[8] =
              vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
          v42 = vaddq_f32(
              v22,
              vmlsq_f32(vmlaq_f32(v40, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v37, v39)),
                        v41, v30));
          LANES128(v36).n128_u64[0] = LANES128(v42).n128_u64[0];
          LANES128(v36).n128_u64[1] = LANES128(v42).n128_u32[2];
          v48_.v48 = v36;
          *(float*)&v4 = CmdBtlCameraCutBase_e82510(a1, (__int64)&v48_.v48),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_35;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v45 = v9;
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v11),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v9 = v45;
      }
      goto LABEL_16;
    }
  }
}

__int64 CmdBtlCameraCutSelfie_edfe30(__int64 a1, __int64* a2, __int64 a3,
                                     _DWORD* a4, char a5, char a6, float a7,
                                     float a8, float a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v17;
  char v18;
  char v19;
  __int128 v20;
  __int64 v21;
  __int128 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v29[2];

  v10 = *a2;
  v9 = a2[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  v17 = *(_QWORD*)(a1 + 48);
  v18 = a5 & 1;
  v19 = a6 & 1;
  *(_QWORD*)(a1 + 40) = v10;
  *(_QWORD*)(a1 + 48) = v9;
  if (v17 != 0) {
    std___1___shared_weak_count___release_weak(v17);
  }
  if (*(unsigned __int8*)(a1 + 80) == *(unsigned __int8*)(a3 + 16)) {
    if (*(_BYTE*)(a1 + 80) != 0) {
      *(_DWORD*)(a1 + 64) = *(_DWORD*)a3;
      *(_DWORD*)(a1 + 68) = *(_DWORD*)(a3 + 4);
      v20 = *(_OWORD*)(a1 + 64);
      *((_QWORD*)&v20 + 1) = *(unsigned int*)(a3 + 8);
      *(_OWORD*)(a1 + 64) = v20;
    }
  }
  else if (*(_BYTE*)(a1 + 80) != 0) {
    *(_BYTE*)(a1 + 80) = 0;
  }
  else {
    *(_QWORD*)(a1 + 72) = *(_QWORD*)(a3 + 8);
    *(_QWORD*)(a1 + 64) = *(_QWORD*)a3;
    *(_BYTE*)(a1 + 80) = 1;
  }
  *(float*)(a1 + 112) = a7;
  *(float*)(a1 + 116) = a8;
  v21 = *(_QWORD*)(a1 + 48);
  *(_DWORD*)(a1 + 96) = *a4;
  *(_DWORD*)(a1 + 100) = a4[1];
  v22 = *(_OWORD*)(a1 + 96);
  DWORD2(v22) = a4[2];
  *(_BYTE*)(a1 + 120) = v18;
  *(float*)(a1 + 124) = a9;
  *(_BYTE*)(a1 + 128) = v19;
  *((_QWORD*)&v22 + 1) = DWORD2(v22);
  *(_OWORD*)(a1 + 96) = v22;
  if (v21 != 0) {
    v23 = std___1___shared_weak_count_lock(v21);
    if (v23 != 0) {
      v24 = *(_QWORD**)(a1 + 40);
      v25 = v23;
      if (v24 != nullptr) {
        v29[0] = "Selfie";
        v29[1] = 6;
        GameRoutine_ff7420(v24 + 43, v29);
        v26 = v24[27];
        v27 = v24[28];
        if (v27 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v26 != 0) {
          *(_BYTE*)(v26 + 60) = v24[44] != v24[43];
        }
        if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak(v27);
        }
        if (*(_BYTE*)(a1 + 120) == 1 && *(float*)(a1 + 116) < 0.0) {
          GameRoutine_e7d0a0(v24, 0);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak(v25);
      }
    }
  }
  return GameRoutine_edf9f0(a1);
}

#pragma GCC visibility pop
