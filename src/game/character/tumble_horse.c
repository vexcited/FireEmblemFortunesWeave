#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* CharacterBuilder_1083bf0(_QWORD* result);
__int64 GameRoutine_10bc1a0(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_character_CharacterDie_Body_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TumbleHorse_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "TumbleHorse_DeletingDestructor");
_BYTE* CharacterModel_1070320(__int64, unsigned int);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
void* GameRoutine_1070860(__int64, int);
_BYTE* TumbleHorse_10bc820(__int64 a1, unsigned int a2);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int64 AnimLayerCtrlModule_ce3880(__int64, __int64, int, double);
__int64 CharacterAnimator_1079e10(__int64);
__int64 GameRoutine_2b0();
__int64 WallCollisionModule_1106720(float*, float*, float*, double, double,
                                    float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_108c8a0(int);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212ed90;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern char* game_hub_g_motions;
extern int* GameData_212ed88;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
void Registration_a5aca0(__int64);
__int64 TumbleHorse_Unknown5(__int64 a1);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TumbleHorse_DeletingDestructor(_QWORD* a1);
__attribute__((swiftcall)) void Quat_622ac0(PSEUDO_X8, float32x2_t*);
__attribute__((swiftcall)) void game_109da60(PSEUDO_X8, float32x4_t*,
                                             float32x4_t*, int8x16_t result);
__attribute__((swiftcall)) void game_character_1116460(PSEUDO_X8, __int128*,
                                                       __int64, float*, _DWORD*,
                                                       unsigned __int64, int,
                                                       float);
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6180;
extern __int64 (*GameData_20077d8[])();
float powf(float, float);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
int8x16_t TumbleHorse_Unknown4(__int64 a1);

__int64 TumbleHorse_Unknown5(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8 explicit;
  int* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  double v14;
  float32x4_t v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64** v23;
  __int64* v24;
  int v25;
  int v26;
  long double v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  float32x4_t* v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  __int64 v38;
  float v39;
  float v40;
  __int128 v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t* v44;
  float32x4_t v45;
  unsigned __int32 v46;
  float32x4_t v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float v51[2];
  unsigned __int64 v52;
  float32x4_t v53;
  struct {
    _BYTE v54[4];
    unsigned __int32 v55;
    char gap56_[72];
    char v56;
  } v54_;

  *(_BYTE*)(a1 + 52) = 1;
  result = GameRoutine_10bc1a0(a1);
  if (result == 0) {
    return result;
  }
  v3 = (_QWORD*)result;
  v4 = game_108c8a0(*(_DWORD*)(*(_QWORD*)(result + 72) + 120LL));
  result = (__int64)TumbleHorse_10bc820(a1, v4);
  if (result == 0) {
    return result;
  }
  v5 = *(_QWORD*)(a1 + 8);
  v6 = result;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire);
  v8 = GameData_212ed88;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212ed90) != 0) {
    *v8 = wld_Crc32(0, "AnimLayerCtrlModule", 0x13u);
    __cxa_guard_release(GameData_212ed90);
  }
  v9 = *(_QWORD*)(v5 + 512);
  v10 = v9;
  while (v10 != *(_QWORD*)(v5 + 504)) {
    v11 = *(_DWORD*)(v10 - 16);
    v10 -= 16;
    v9 -= 16;
    if (v11 == *v8) {
      if (*(_QWORD*)(v5 + 512) != v9) {
        v12 = *(_QWORD*)(v9 + 8);
        goto LABEL_10;
      }
      break;
    }
  }
  v12 = 0;
LABEL_10:
  v13 = AnimLayerCtrlModule_ce3880(v12, v6, 1, 0x0.0p+0);
  v16 = *(_QWORD*)(v12 + 24);
  v17 = v13;
  v18 = *(_QWORD*)(*(_QWORD*)(v16 + 72) + 104LL * v13);
  v19 = *(_QWORD*)(v18 + 16);
  if (v19 != 0) {
    *(float*)v19 = (*(float (**)(_QWORD, float, float, float))(v19 + 16))(
        *(_QWORD*)(v19 + 24), *(float*)(v19 + 8), *(float*)(v19 + 4),
        *(float*)(v19 + 8));
    *(_WORD*)(v18 + 168) = 0;
  }
  *(_BYTE*)(v16 + 249) = 1;
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v12 + 24) + 72LL) + 104LL * v17 + 8) = 0;
  v20 = v3[9];
  v21 = *(_DWORD*)(v20 + 120);
  if (v21 != 0) {
    if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
      v23 = *(__int64***)GameData_22356f0;
      if (*(_QWORD*)GameData_22356f0 != 0) {
        v24 = *v23;
        if (*v23 != nullptr) {
          v25 = 639;
          if ((GameData_22356f8 & (GameData_22356f8 - 1)) == 0) {
            while (1) {
              v31 = v24[1];
              if (v31 != 0) {
                if ((v31 & (GameData_22356f8 - 1)) != 0) {
                  goto LABEL_22;
                }
              }
              else if (*((_DWORD*)v24 + 4) == 0) {
                goto LABEL_57;
              }
              v24 = (__int64*)*v24;
              if (v24 == nullptr) {
                goto LABEL_22;
              }
            }
          }
          while (1) {
            v30 = v24[1];
            if (v30 != 0) {
              if (v30 < GameData_22356f8 || v30 % GameData_22356f8 != 0) {
                goto LABEL_22;
              }
            }
            else if (*((_DWORD*)v24 + 4) == 0) {
            LABEL_57:
              v25 = *((_DWORD*)v24 + 5);
              goto LABEL_22;
            }
            v24 = (__int64*)*v24;
            if (v24 == nullptr) {
              goto LABEL_22;
            }
          }
        }
      }
    }
    v25 = 639;
  LABEL_22:
    v26 = *((_DWORD*)&game_hub_g_motions + 10 * v25 + 3);
    if (v26 == -574916402 || v26 != (unsigned int)game_108c8a0(v21)) {
      if ((CharacterAnimator_1079e10(v20) & 1) == 0) {
        *(_DWORD*)(v20 + 124) = 0;
        if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
          goto LABEL_43;
        }
        goto LABEL_27;
      }
      LODWORD(v27) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
      CharacterAnimator_1079580(v20, 0, v27, -0x1.0000000000000p+0f,
                                0x1.0000000000000p+0f);
    }
  }
  if ((*(_BYTE*)(a1 + 16) & 1) == 0) {
  LABEL_27:
    v28 = v3[54];
    if (v28 != 0) {
      *(_BYTE*)(v28 + 289) = 0;
    }
    v29 = v3[55];
    if (v29 != 0) {
      *(_BYTE*)(v29 + 289) = 0;
    }
  }
LABEL_43:
  v32 = (float32x4_t*)v3[1];
  v33 = LANES128(v32[20]).n128_f32[1] +
        (float)(roundf(LANES128(v32[20]).n128_f32[1] * 0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v33 > 0x1.921fb60000000p+0f) {
    v34 = 0x1.921fb60000000p+1f;
  LABEL_47:
    v33 = v34 - v33;
    v35 = -0x1.0000000000000p+0f;
    goto LABEL_48;
  }
  v35 = 0x1.0000000000000p+0f;
  if (v33 < -0x1.921fb60000000p+0f) {
    v34 = -0x1.921fb60000000p+1f;
    goto LABEL_47;
  }
LABEL_48:
  v36 = v33 * v33;
  v37 =
      v33 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v33 *
                                                                                                    v33))) *
                                                                            (float)(v33 *
                                                                                    v33))) *
                                                         (float)(v33 * v33))) *
                                         (float)(v33 * v33))) *
                      (float)(v33 * v33)) +
              0x1.0000000000000p+0f);
  v38 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 736LL);
  v39 =
      v35 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v36)) *
                                                                            v36)) *
                                                         v36)) *
                                         v36)) *
                      v36) +
              0x1.0000000000000p+0f);
  LANES128(v15).n128_u32[1] = 0;
  LANES128(v15).n128_f32[0] = -(float)(v37 + (float)(v39 * 0x0.0p+0f));
  if (*(_BYTE*)(a1 + 16) != 0) {
    LANES128(v15).n128_f32[0] = v37 + (float)(v39 * 0x0.0p+0f);
    v40 = v39 + (float)(v37 * -0x0.0p+0f);
  }
  else {
    v40 = -(float)(v39 + (float)(v37 * -0x0.0p+0f));
  }
  v41 = *(_OWORD*)(v38 + 304);
  LANES128(v15).n128_f32[2] = v40;
  LODWORD(v14) = *(_QWORD*)(v38 + 312);
  v42 = vaddq_f32(v32[19], v15);
  v52 =
      LANES64_OF(
          vzip1_s32(COERCE_AS(int32x2_t, LANES128(v42).n128_u64[0]),
                    COERCE_AS(int32x2_t,
                              LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u64[0])))
          .n64_u64[0];
  WallCollisionModule_1106720(v51, (float*)&v52, nullptr, *(double*)&v41, v14,
                              *(float*)(a1 + 96));
  LANES128(v43).n128_u64[0] = LODWORD(v51[0]) | 0xC2C8000000000000LL;
  v44 = *(float32x4_t**)(a1 + 8);
  LANES128(v45).n128_u64[0] = LODWORD(v51[0]) | 0x4348000000000000LL;
  LANES128(v45).n128_u64[1] = LODWORD(v51[1]);
  v53 = v45;
  LANES128(v43).n128_u64[1] = LODWORD(v51[1]);
  v50 = v43;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    Registration_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21fde98);
  }
  result = (__int64)X8CALL_X0(
      float32x4_t*,
      collision_670c60((void*)((__int64)v54_.v54), &v53, &v50, 3));
  if ((v54_.v56 & 1) != 0) {
    LANES128(v50).n128_u32[1] = v54_.v55;
  }
  v46 = LANES128(v50).n128_u32[2];
  v47 = vsubq_f32(v44[19], v50);
  v48 = vmulq_f32(v47, v47);
  LANES128(v48).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    LANES128(v44[19]).n128_u64[0] = LANES128(v50).n128_u64[0];
    v49 = v44[19];
    LANES128(v44[18]).n128_u32[2] |= 1u;
    LANES128(v49).n128_u64[1] = v46;
    v44[19] = v49;
  }
  return result;
}

_BYTE* TumbleHorse_10bc820(__int64 a1, unsigned int a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  _BYTE* result;
  _BYTE* v10;

  v4 = GameRoutine_10bc1a0(a1);
  v5 = *(unsigned __int8*)(a1 + 16);
  v6 = *(_QWORD*)(v4 + 392);
  v7 = *(_QWORD*)(v4 + 400);
  if (v5 == 1) {
    if (v7 == 0) {
      return GameRoutine_1070860(*(_QWORD*)(v6 + 11608), a2);
    }
    v8 = (atomic_ullong*)(v7 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    result = GameRoutine_1070860(*(_QWORD*)(v6 + 11608), a2);
  }
  else {
    if (v7 == 0) {
      return CharacterModel_1070320(*(_QWORD*)(v6 + 11608), a2);
    }
    v8 = (atomic_ullong*)(v7 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    result = CharacterModel_1070320(*(_QWORD*)(v6 + 11608), a2);
  }
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v10 = result;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    return v10;
  }
  return result;
}

void TumbleHorse_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *a1 = &game_character_CharacterDie_Body_vtable;
  v2 = (_QWORD*)GameRoutine_10bc1a0((__int64)a1);
  if (v2 != nullptr) {
    CharacterBuilder_1083bf0(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

int8x16_t TumbleHorse_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  int8x16_t v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  __int128 v10;
  unsigned __int32 v11;
  float32x4_t* v12;
  __int128 v13;
  unsigned __int32 v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t* v21;
  float32x4_t v22;
  unsigned __int64 v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  int8x16_t v31;
  int8x16_t v32;
  int8x16_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t result;
  int v41;
  float32x4_t v42;
  __int64 v43;
  float v44[4];
  float32x4_t v45;
  float32x4_t v46;
  struct {
    int8x16_t v47;
    __int64 v48;
    char gap72_[8];
    int8x16_t* v49;
  } v47_;

  v2 = GameRoutine_10bc1a0(a1);
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(float*)(a1 + 96);
  LANES128(v47_.v47).n128_u64[0] = (unsigned __int64)GameData_20077d8;
  LANES128(v47_.v47).n128_u64[1] = v2;
  v47_.v49 = &v47_.v47;
  v47_.v48 = 1;
  game_character_1116460((void*)(v44), (__int128*)(v3 + 304),
                         (__int64)&v47_.v47, nullptr, nullptr, 0, 0, v4);
  if (v47_.v49 == &v47_.v47) {
    v6 = 32;
  }
  else {
    if (v47_.v49 == nullptr) {
      goto LABEL_6;
    }
    v6 = 40;
  }
  (*(void (**)(void*))(LANES128(*(v47_.v49)).n128_u64[0] + v6))(
      (void*)v47_.v49);
LABEL_6:
  v7 = *(float*)(a1 + 48);
  PSEUDO_LOW_LANE128(v5, n128_u64, 0);
  if (v7 > 0x0.0p+0f) {
    PSEUDO_LOW_LANE128(
        v5, n128_f32,
        0x1.0000000000000p+0f -
            powf(0x1.cccccc0000000p-1f, v7 * 0x1.df851e0000000p+4f));
  }
  if (*(float*)(a1 + 84) == 0x0.0p+0f) {
    PSEUDO_LOW_LANE128(v5, n128_f32, 0x1.0000000000000p+0f);
  }
  v8 = v44[2];
  v9 = *(float*)(a1 + 68) +
       (float)((float)(v44[1] - *(float*)(a1 + 68)) * LANES128(v5).n128_f32[0]);
  *(float*)(a1 + 64) = v44[0];
  *(float*)(a1 + 68) = v9;
  v10 = *(_OWORD*)(a1 + 64);
  *((_QWORD*)&v10 + 1) = LODWORD(v8);
  *(_OWORD*)(a1 + 64) = v10;
  game_109da60((void*)(&v47_.v47), (float32x4_t*)(a1 + 80), &v45, v5);
  v11 = LANES128(v47_.v47).n128_u32[2];
  v12 = *(float32x4_t**)(a1 + 8);
  *(_QWORD*)(a1 + 80) = LANES128(v47_.v47).n128_u64[0];
  v13 = *(_OWORD*)(a1 + 80);
  *((_QWORD*)&v13 + 1) = v11;
  *(_OWORD*)(a1 + 80) = v13;
  v14 = *(_DWORD*)(a1 + 68);
  v15 = v12[19];
  v16 = v15;
  LANES128(v16).n128_u32[1] = v14;
  v17 = vsubq_f32(v15, v16);
  v18 = vmulq_f32(v17, v17);
  LANES128(v18).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    LANES128(v12[19]).n128_u32[0] = LANES128(v15).n128_u32[0];
    LANES128(v12[19]).n128_u32[1] = v14;
    v19 = v12[19];
    LANES128(v12[18]).n128_u32[2] |= 1u;
    LANES128(v19).n128_u64[1] = LANES128(v15).n128_u32[2];
    v12[19] = v19;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6190) != 0) {
    v43 = *((_QWORD*)GameData_212c558 + 1);
    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
    *((_QWORD*)&GameData_21a6180 + 1) = v43;
    __cxa_guard_release_alt1((__int64)&GameData_21a6190);
  }
  v20 = *(int8x16_t*)(a1 + 80);
  v21 = *(float32x4_t**)(a1 + 8);
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v23 = LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v24).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v26 = vmulq_f32(v22, v24);
  v27 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180), v20);
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v20).n128_u64[1] = 0x3F8000003F800000LL;
  LANES128(v24).n128_u64[1] = v23;
  LANES128(v28).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v28).n128_u64[1] = 0x3F0000003F000000LL;
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
          .n64_u64[0];
  LANES128(v27).n128_u64[1] = LANES128(v27).n128_u64[0];
  v29 = vaddq_f32(v27, v20);
  v30 = vsqrtq_f32(vaddq_f32(v29, v29));
  v31 = vdivq_f32(vmlsq_f32(v26, v24, v25), v30);
  LANES128(v31).n128_u32[3] = LANES128_OF(vmulq_f32(v30, v28)).n128_u32[3];
  LANES128(v30).n128_u64[0] = 0x3400000034000000LL;
  LANES128(v30).n128_u64[1] = 0x3400000034000000LL;
  v32 = vbslq_s8(vcgeq_f32(v30, v29), COERCE_AS(int8x16_t, GameData_1a82dd0),
                 v31);
  v33 = *(int8x16_t*)(a1 + 32);
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[0] = LANES128(v32).n128_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[1] = LANES128(v29).n128_u64[0];
  LANES128(v34).n128_u64[1] = LANES128(v25).n128_u64[0];
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v36 = vmlaq_f32(vmulq_f32(v33, v29), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v34, v28));
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v35).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v33).n128_u64[0]), 1);
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v25).n128_u64[1] = LANES128(v28).n128_u64[0];
  LANES128(v28).n128_u64[1] = LANES128(v32).n128_u64[0];
  *(int8x8_t*)&LANES128(v37).n128_i8[8] =
      vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v38 = vmlsq_f32(vmlaq_f32(v36, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v28, v35)),
                  v37, v25);
  v39 = v21[21];
  v46 = v38;
  result = vmvnq_s8(vceqq_f32(v39, v38));
  LANES128(result).n128_u64[0] = LANES64_OF(vmovn_s32(result)).n64_u64[0];
  if ((LANES128(result).n128_u8[0] & 1) != 0 ||
      (LANES128(result).n128_u8[2] & 1) != 0 ||
      (LANES128(result).n128_u8[4] & 1) != 0 ||
      (LANES128(result).n128_u8[6] & 1) != 0) {
    v41 = LANES128(v21[18]).n128_u32[2] | 1;
    LANES128(v21[21]).n128_u64[0] = LANES128(v38).n128_u64[0];
    LANES128(v21[21]).n128_u64[1] =
        LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0];
    LANES128(v21[18]).n128_u32[2] = v41;
    Quat_622ac0((void*)(&v47_.v47), (float32x2_t*)&v46);
    result = v47_.v47;
    LANES128(v21[20]).n128_u64[0] = LANES128(v47_.v47).n128_u64[0];
    v42 = v21[20];
    LANES128(v42).n128_u64[1] = LANES128(result).n128_u32[2];
    v21[20] = v42;
  }
  return result;
}

#pragma GCC visibility pop
