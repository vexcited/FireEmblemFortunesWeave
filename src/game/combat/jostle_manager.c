#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fed278[])();
extern __int64 (*game_combat_JostleManager_vtable[])();
extern __int64 GameData_22162a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22162a4;
_QWORD* JostleManager_Destructor(_QWORD* result);
_QWORD* GameRoutine_e9f560(_QWORD* result);
__int64 GameRoutine_ea1850(_QWORD, _QWORD);
__int64 GameRoutine_ea2250(_QWORD);
__int64 GameRoutine_ea2430(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
_QWORD* JostleManager_ea0ec0(__int64 a1);
_QWORD* JostleManager_ea1560(_QWORD* result, _QWORD* a2);
__int64 JostleManager_ea16c0(__int64 result, __int64** a2);
__int64 JostleManager_ea1d20(__int64 result);
__int64 game_combat_JostleManager_JostleManager_lambda0_Invoke(__int64 result);
__int64 game_combat_JostleManager_JostleManager_lambda1_Invoke(__int64 result);
__attribute__((swiftcall)) void GameRoutine_e9fe30(PSEUDO_X8, __int64*,
                                                   __n128 result);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int128* GameRoutine_e9f150(__int64);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 GameRoutine_e9ef40(_QWORD, _QWORD);
__int64 GameRoutine_e9fce0(__int64*, __int64, _BYTE*);
__int64
JostleManager_ea2250_alt1(__int64 result) __asm__("JostleManager_ea2250");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_character_1084940(__int64 result, char, float);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_ea3720(__int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_a57070(float32x2_t*, float32x2_t*, float32x2_t*, float32x2_t*,
                        float*, float*, double, double, long double);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fed3f8[])();
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
extern __int64* GameData_212d448[9];
extern __int64* GameData_212f2e0;
extern __int64 GameData_212c638;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void GameRoutine_e9f200(__int64);
void GameRoutine_e9f360(__int64);
void GameRoutine_e9f860();
void GameRoutine_ea2620(float*);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_e2fbe0(long double);
__int64 JostleManager_ea0220(__int64** a1, __int64 a2, float* a3, _BYTE* a4,
                             float a5);
__attribute__((swiftcall)) void JostleManager_ea1180(PSEUDO_X8 x8_, _QWORD* a1,
                                                     __int64* a2);
void JostleManager_ea19a0(_QWORD* a1);
__int64 JostleManager_ea2120(__int64 result);
float* JostleManager_ea2250(float* result);
void JostleManager_ea2430(float* a1);
void JostleManager_ea2a20(__int64 a1);
__attribute__((swiftcall)) void
GameRoutine_e9fe30_alt1(PSEUDO_X8, __int64*) __asm__("GameRoutine_e9fe30");
__int64 GameRoutine_e9f200_alt1(__int64 result) __asm__("GameRoutine_e9f200");
__int64 GameRoutine_e9f360_alt1(__int64 result) __asm__("GameRoutine_e9f360");
__int64 GameRoutine_ea3720_alt1(__int64 result) __asm__("GameRoutine_ea3720");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_ea1850_alt1(__int64*, _QWORD*) __asm__("GameRoutine_ea1850");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_66b000(__int64*, _QWORD*);
__int64 GameRoutine_66b160(__int64 result);
__int64 GameRoutine_f8f3e0(__int64 result, __int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
extern __int64 (*GameData_1fdb498[])();
extern __int64 (*GameData_1fed2a8[])();
extern __int64 (*GameData_1fed2f8[])();
extern __int64 (*GameData_1fed378[])();
extern __int64 GameData_21c9680;
extern __int64 GameData_21c9710;
extern int* GameData_212f2e8[7];
__int64 game_combat_JostleManager_JostleManager(__int64 a1);

__int64 JostleManager_ea0220(__int64** a1, __int64 a2, float* a3, _BYTE* a4,
                             float a5)
{
  int v5;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int128* v17;
  float32x4_t* v18;
  int v19;
  float v20;
  float v21;
  float32x4_t v22;
  float32x4_t v23;
  bool v24;
  float32x4_t v25;
  float v26;
  float v27;
  __int64* v28;
  __int64* v29;
  float v30;
  int8x16_t v31;
  float v32;
  int32x2_t v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  bool v40;
  __int64 v41;
  __int128* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  unsigned __int64 add;
  float v50;
  __int64 v51;
  __int64 v52;
  float v53;
  float v54;
  __int64 v55;
  bool v56;
  unsigned __int64 v57;
  int v58;
  float32x2_t v63;
  float v64;
  float32x2_t v65;
  float v66;
  __int64 v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64** v90;
  int v91;
  __int64 v92;
  __int64** v93;
  float* v94;
  __int64 v95;
  float32x4_t v96;
  int8x16_t v97;
  float32x4_t v98;
  float v99;
  float v100;
  float32x2_t v101;
  float32x2_t v102;
  float32x2_t v103;
  float32x2_t v104;
  struct {
    float32x4_t v105[5];
    char v106;
  } v105_;
  float32x2x2_t v107;
  float32x2x2_t v108;

  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s0", "=w")),
  v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w"));
  v5 = *(_DWORD*)(a2 + 56);
  if (v5 == 0) {
    return v5 & 1;
  }
  if ((float)((float)(PSEUDO_UNFUSED(a3[1] * a3[1])) + (float)(*a3 * *a3)) !=
      0x0.0p+0f) {
    v13 = *(_QWORD*)(a2 + 8);
    if (v13 == 0 ||
        ((v14 = *(_QWORD*)(v13 + 8), v15 = *(_QWORD*)(a2 + 16), v14 != -1)
             ? (v16 = v15 == 0)
             : (v16 = true),
         v16)) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) != 0) {
        v18 = (float32x4_t*)&GameData_21a6120;
      }
      else {
        v93 = a1;
        v94 = a3;
        v18 = (float32x4_t*)&GameData_21a6120;
        if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
          v95 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v95;
          __cxa_guard_release_alt1((__int64)&GameData_21a6130),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        a1 = v93;
        a3 = v94;
      }
    }
    else {
      v18 = (float32x4_t*)(*(_QWORD*)(v15 + 8) + 304LL);
    }
    v19 = 0;
    LANES128(v25).n128_u32[3] = 0;
    v21 = *a3;
    v20 = a3[1];
    LANES128(v22).n128_u32[1] = 0;
    LANES128(v22).n128_u32[3] = 0;
    LANES128(v25).n128_f32[1] = a5 + 0x1.3333340000000p-2f;
    v23 = vaddq_f32(COERCE_AS(float32x4_t, LANES128(v25).n128_u64[0]), *v18);
    LANES128(v25).n128_f32[0] =
        (float)(PSEUDO_UNFUSED(v20 * v20)) + (float)(v21 * v21);
    v24 = LANES128(v25).n128_f32[0] < 0x1.0000000000000p-23f;
    LANES128(v25).n128_f32[0] = sqrtf(LANES128(v25).n128_f32[0]);
    v26 = 0x1.0000000000000p+0f;
    if (v24) {
      v27 = 0x0.0p+0f;
    }
    else {
      v27 = v21 * (float)(0x1.0000000000000p+0f / LANES128(v25).n128_f32[0]);
      v26 = v20 * (float)(0x1.0000000000000p+0f / LANES128(v25).n128_f32[0]);
    }
    LANES128(v22).n128_f32[0] = *a3;
    v28 = *a1;
    v29 = a1[1];
    LANES128(v22).n128_f32[2] = a3[1];
    v98 = vaddq_f32(v23, v22);
    if (v28 == v29) {
    LABEL_87:
      collision_670c60((void*)((__int64)v105_.v105),
                       (float32x4_t*)(*GameData_212f2e0 + 128), &v98, 8),
          v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s0", "=w")),
          v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w"));
      LOBYTE(v5) = v105_.v106;
      return v5 & 1;
    }
    v30 = LANES128(v25).n128_f32[0] * 0x1.99999a0000000p-4f;
    if ((float)(LANES128(v25).n128_f32[0] * 0x1.99999a0000000p-4f) >
        0x1.47ae140000000p-7f) {
      v30 = 0x1.47ae140000000p-7f;
    }
    LANES128(v25).n128_f32[0] = v30 * v27;
    LANES128(v25).n128_f32[2] = v30 * v26;
    v31 = vaddq_f32(v23, v25);
    v32 = LANES128(v31).n128_f32[2];
    v96 = v31;
    LANES64(v33).n64_u64[0] =
        LANES64_OF(
            vzip1_s32(
                COERCE_AS(int32x2_t, LANES128(v31).n128_u64[0]),
                COERCE_AS(int32x2_t,
                          LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0])))
            .n64_u64[0];
    while (1) {
      v34 = GameRoutine_e9fce0(v28, a2, a4),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v34 == 0) {
        goto LABEL_28;
      }
      v35 = v34;
      v36 = v28[1];
      if (v36 != 0 && (v37 = std___1___shared_weak_count_lock_alt1(v36)) != 0) {
        v38 = *(_QWORD*)(*v28 + 8);
        if (v38 == 0 ||
            ((v39 = *(_QWORD*)(*v28 + 16), *(_QWORD*)(v38 + 8) != -1)
                 ? (v40 = v39 == 0)
                 : (v40 = true),
             v40)) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) != 0) {
            v42 = &GameData_21a6120;
          }
          else {
            v87 = v37;
            if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
              v88 = *((_QWORD*)GameData_212c540 + 1);
              *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
              *((_QWORD*)&GameData_21a6120 + 1) = v88;
              __cxa_guard_release_alt1((__int64)&GameData_21a6130),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v53 = COERCE_AS(__typeof__(v53),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            v42 = &GameData_21a6120;
            v37 = v87;
          }
        }
        else {
          v42 = (__int128*)(*(_QWORD*)(v39 + 8) + 304LL);
        }
        v97 = COERCE_AS(int8x16_t, *v42);
        if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          v41 = v28[1];
          if (v41 == 0) {
            goto LABEL_54;
          }
        }
        else {
          v52 = v37;
          (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt2(v52),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v41 = v28[1];
          if (v41 == 0) {
            goto LABEL_54;
          }
        }
      }
      else {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
          v86 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v86;
          __cxa_guard_release_alt1((__int64)&GameData_21a6130),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v97 = COERCE_AS(int8x16_t, GameData_21a6120);
        v41 = v28[1];
        if (v41 == 0) {
          goto LABEL_54;
        }
      }
      v43 = std___1___shared_weak_count_lock_alt1(v41),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v43 != 0) {
        v44 = *v28;
        v45 = v43;
        GameRoutine_e9f200_alt1(*v28),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s0", "=w")),
            v53 =
                COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w"));
        v47 = fmaxf(v46, 0x1.3333340000000p-1f);
        v48 = *(float*)(v44 + 88);
        v12 = (*(_BYTE*)(v44 + 92) & (v48 < v47)) == 0;
        add = atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                               0xFFFFFFFFFFFFFFFFLL);
        if (v12) {
          v50 = v47;
        }
        else {
          v50 = v48;
        }
        if (add == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt2(v45),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v51 = v28[3];
        if (v51 == 0) {
          goto LABEL_70;
        }
        goto LABEL_58;
      }
    LABEL_54:
      GameRoutine_e9f200_alt1(0),
          v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s0", "=w")),
          v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w"));
      v54 = fmaxf(v53, 0x1.3333340000000p-1f);
      if (((*(_BYTE*)0x5CLL) & (v54 > -0x1.8004d00000000p-13f)) != 0) {
        v50 = (*(float*)0x58LL);
      }
      else {
        v50 = v54;
      }
      v51 = v28[3];
      if (v51 == 0) {
        goto LABEL_70;
      }
    LABEL_58:
      v55 = std___1___shared_weak_count_lock_alt1(v51),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v55 != 0) {
        v56 = v35 != 1 || v28[2] == 0;
        v57 = atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                               0xFFFFFFFFFFFFFFFFLL);
        v58 = !v56;
        if (v57 != 0) {
          if (v58 != 0) {
            goto LABEL_67;
          }
        }
        else {
          v67 = v55;
          (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt2(v67),
              v46 = COERCE_AS(__typeof__(v46),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v53 = COERCE_AS(__typeof__(v53),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if ((v58 & 1) != 0) {
          LABEL_67:
            GameRoutine_e9fe30_alt1((void*)(v105_.v105), v28),
                v46 = COERCE_AS(__typeof__(v46),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v108 = vld2_f32((const float*)v105_.v105);
            LANES64(v103).n64_u64[0] = (unsigned __int64)v108.val[0];
            LANES64(v104).n64_u64[0] =
                LANES64_OF(
                    vzip1_s32(
                        COERCE_AS(int32x2_t, LANES128(v97).n128_u64[0]),
                        COERCE_AS(
                            int32x2_t,
                            LANES128_OF(vextq_s8(v97, v97, 8u)).n128_u64[0])))
                    .n64_u64[0];
            v107 = vld2_f32((const float*)&v98);
            LANES64(v101).n64_u64[0] = (unsigned __int64)v107.val[0];
            LANES64(v102).n64_u64[0] = LANES64(v33).n64_u64[0];
            GameRoutine_a57070(&v104, &v103, &v102, &v101, &v100, &v99,
                               LANES64(v107.val[0]).n64_f64[0],
                               LANES64(v107.val[1]).n64_f64[0],
                               *(long double*)((char*)&v108 + 8)),
                v46 = COERCE_AS(__typeof__(v46),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v53 = COERCE_AS(__typeof__(v53),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            LANES64(v63).n64_u64[0] =
                LANES64_OF(vsub_f32(v103, v104)).n64_u64[0];
            v64 = v100 * LANES64(v63).n64_f32[0];
            PSEUDO_LOW_LANE64(v63, n64_f32, vmuls_lane_f32(v100, v63, 1));
            LANES64(v65).n64_u64[0] =
                LANES64_OF(vsub_f32(v101, v102)).n64_u64[0];
            v66 = v99 * LANES64(v65).n64_f32[0];
            PSEUDO_LOW_LANE64(v65, n64_f32,
                              LANES64(v102).n64_f32[1] +
                                  vmuls_lane_f32(v99, v65, 1));
            if ((float)((float)(PSEUDO_UNFUSED(
                            (float)((float)(LANES64(v104).n64_f32[1] +
                                            LANES64(v63).n64_f32[0]) -
                                    LANES64(v65).n64_f32[0]) *
                            (float)((float)(LANES64(v104).n64_f32[1] +
                                            LANES64(v63).n64_f32[0]) -
                                    LANES64(v65).n64_f32[0]))) +
                        (float)((float)((float)(LANES64(v104).n64_f32[0] +
                                                v64) -
                                        (float)(LANES64(v102).n64_f32[0] +
                                                v66)) *
                                (float)((float)(LANES64(v104).n64_f32[0] +
                                                v64) -
                                        (float)(LANES64(v102).n64_f32[0] +
                                                v66)))) <=
                (float)((float)(a5 + v50) * (float)(a5 + v50))) {
              goto LABEL_88;
            }
            goto LABEL_28;
          }
        }
      }
    LABEL_70:
      v68 = 0x1.0000000000000p+0f;
      v69 = 0x0.0p+0f;
      v70 = 0x1.0000000000000p+0f;
      v71 = LANES128_OF(vsubq_f32(v98, v96)).n128_f32[0];
      v72 = LANES128(v98).n128_f32[2] - v32;
      v73 = (float)(PSEUDO_UNFUSED(v72 * v72)) + (float)(v71 * v71);
      v74 = 0x0.0p+0f;
      if (v73 >= 0x1.0000000000000p-23f) {
        v75 = 0x1.0000000000000p+0f / sqrtf(v73);
        v74 = v71 * v75;
        v70 = v72 * v75;
      }
      v76 = LANES128_OF(vsubq_f32(v96, v97)).n128_f32[0];
      v77 = v32 - LANES128(v97).n128_f32[2];
      v78 = (float)(PSEUDO_UNFUSED(v77 * v77)) + (float)(v76 * v76);
      if (v78 >= 0x1.0000000000000p-23f) {
        v79 = 0x1.0000000000000p+0f / sqrtf(v78);
        v69 = v76 * v79;
        v68 = v77 * v79;
      }
      if ((float)((float)(PSEUDO_UNFUSED(v70 * v68)) + (float)(v74 * v69)) <=
          0x0.0p+0f) {
        v80 = LANES128_OF(vsubq_f32(v98, v97)).n128_f32[0];
        v81 = LANES128(v98).n128_f32[2] - LANES128(v97).n128_f32[2];
        v78 = (float)(PSEUDO_UNFUSED(v81 * v81)) + (float)(v80 * v80);
        if (v78 >= 0x1.0000000000000p-23f) {
          v84 = 0x1.0000000000000p+0f / sqrtf(v78);
          v83 = v80 * v84;
          v82 = v81 * v84;
        }
        else {
          v82 = 0x1.0000000000000p+0f;
          v83 = 0x0.0p+0f;
        }
        if ((float)((float)(PSEUDO_UNFUSED(v70 * v82)) + (float)(v74 * v83)) >=
            0x0.0p+0f) {
          v85 = (float)(PSEUDO_UNFUSED(
                    (float)(LANES128(v97).n128_f32[2] - v32) * v70)) +
                (float)(v74 * LANES128_OF(vsubq_f32(v97, v96)).n128_f32[0]);
          v78 = (float)(PSEUDO_UNFUSED(
                    (float)((float)(v32 + (float)(PSEUDO_UNFUSED(v70 * v85))) -
                            LANES128(v97).n128_f32[2]) *
                    (float)((float)(v32 + (float)(PSEUDO_UNFUSED(v70 * v85))) -
                            LANES128(v97).n128_f32[2]))) +
                (float)((float)((float)(LANES128(v96).n128_f32[0] +
                                        (float)(PSEUDO_UNFUSED(v74 * v85))) -
                                LANES128(v97).n128_f32[0]) *
                        (float)((float)(LANES128(v96).n128_f32[0] +
                                        (float)(PSEUDO_UNFUSED(v74 * v85))) -
                                LANES128(v97).n128_f32[0]));
        }
      }
      if (v78 < (float)((float)(a5 + v50) * (float)(a5 + v50))) {
      LABEL_88:
        LOBYTE(v5) = 1;
        return v5 & 1;
      }
    LABEL_28:
      v28 += 4;
      if (v28 == v29) {
        goto LABEL_87;
      }
    }
  }
  v9 = *(_QWORD*)(a2 + 8);
  if (v9 == 0 ||
      ((v10 = *(_QWORD*)(v9 + 8), v11 = *(_QWORD*)(a2 + 16), v10 != -1)
           ? (v12 = v11 == 0)
           : (v12 = true),
       v12)) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v17 = &GameData_21a6120;
    }
    else {
      v90 = a1;
      v91 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w"));
      v17 = &GameData_21a6120;
      if (v91 != 0) {
        v92 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v92;
        __cxa_guard_release_alt1((__int64)&GameData_21a6130),
            v46 =
                COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s0", "=w")),
            v53 =
                COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w"));
        v17 = &GameData_21a6120;
      }
      a1 = v90;
    }
  }
  else {
    v17 = (__int128*)(*(_QWORD*)(v11 + 8) + 304LL);
  }
  ((__attribute__((swiftcall)) void (*)(
      PSEUDO_X8, __int64**, __int128*, __int64, _BYTE*,
      _QWORD))GameRoutine_e9f860)((void*)v105_.v105, a1, v17, a2, a4, 0),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(float, "s0", "=w")),
      v53 = COERCE_AS(__typeof__(v53), PSEUDO_REGISTER(float, "s0", "=w"));
  LOBYTE(v5) = LANES128(v105_.v105[0]).n128_u8[0];
  return v5 & 1;
}

__int64 game_combat_JostleManager_JostleManager(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  struct {
    __int64 v21;
    __int64 v22;
  } v21_;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  struct {
    __int64 v25[4];
    __int64* v26;
  } v25_;

  if (*GameData_212f2e0 == 0) {
    *GameData_212f2e0 = a1;
    *GameData_212f2e8[0] = 1;
  }
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_BYTE*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)a1 = game_combat_JostleManager_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 112) = 0;
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v3, 48, 16, 0);
  v5 = *(_QWORD*)(a1 + 40);
  v4[1] = 0;
  v4[2] = 0;
  v4[4] = 0;
  v4[5] = 0;
  *(_QWORD*)(a1 + 40) = v4;
  *v4 = GameData_1fed2a8;
  v4[3] = 0;
  *(_QWORD*)(a1 + 32) = v4 + 3;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt2(v5);
  }
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v2, 80, 16, 0);
  v6[2] = 0;
  v7 = *(_QWORD*)(a1 + 104);
  v6[8] = 0;
  *v6 = GameData_1fdb498;
  v6[1] = 0;
  *(_QWORD*)(a1 + 96) = v6 + 4;
  *(_QWORD*)(a1 + 104) = v6;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt2(v7);
  }
  v8 = *(_QWORD**)(a1 + 96);
  v25_.v25[0] = (__int64)GameData_1fed2f8;
  v25_.v25[1] = a1;
  v25_.v26 = v25_.v25;
  GameRoutine_654050(v25_.v25, v8);
  if (v25_.v26 == v25_.v25) {
    v9 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      goto LABEL_14;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v25_.v26 + v9))((__int64)v25_.v26);
LABEL_14:
  v10 = GameData_21c9710;
  v11 = *(_QWORD*)(a1 + 96);
  v12 = *(_QWORD*)(a1 + 104);
  v23_.v23 = v11;
  v23_.v24 = v12;
  if (v12 != 0) {
    v13 = GameData_21c9710;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    v25_.v25[0] = v11;
    v25_.v25[1] = v12;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_f8f3e0(v13, v25_.v25);
    std___1___shared_weak_count___release_weak_alt2(v12);
  }
  else {
    v25_.v25[0] = v11;
    v25_.v25[1] = 0;
    GameRoutine_f8f3e0(GameData_21c9710, v25_.v25);
  }
  GameRoutine_66b000((__int64*)(v10 + 16), &v23_.v23);
  if (v23_.v24 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v23_.v24);
  }
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v2, 80, 16, 0);
  v15 = *(_QWORD*)(a1 + 16);
  v14[1] = 0;
  v14[2] = 0;
  v14[8] = 0;
  *v14 = GameData_1fdb498;
  *(_QWORD*)(a1 + 8) = v14 + 4;
  *(_QWORD*)(a1 + 16) = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt2(v15);
  }
  v16 = *(_QWORD**)(a1 + 8);
  v25_.v25[0] = (__int64)GameData_1fed378;
  v25_.v25[1] = a1;
  v25_.v26 = v25_.v25;
  GameRoutine_654050(v25_.v25, v16);
  if (v25_.v26 == v25_.v25) {
    v17 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      goto LABEL_27;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v25_.v26 + v17))((__int64)v25_.v26);
LABEL_27:
  v18 = *(_QWORD*)(a1 + 8);
  v19 = *(_QWORD*)(a1 + 16);
  v21_.v21 = v18;
  v21_.v22 = v19;
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v25_.v25[0] = v18;
    v25_.v25[1] = v19;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_66b160((__int64)v25_.v25);
    std___1___shared_weak_count___release_weak_alt2(v19);
  }
  else {
    v25_.v25[0] = v18;
    v25_.v25[1] = 0;
    GameRoutine_66b160((__int64)v25_.v25);
  }
  GameRoutine_66b000(&GameData_21c9680, &v21_.v21);
  result = v21_.v22;
  if (v21_.v22 != 0) {
    return std___1___shared_weak_count___release_weak_alt2(v21_.v22);
  }
  return result;
}

_QWORD* JostleManager_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = result[13];
  v2 = result;
  *result = game_combat_JostleManager_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v1);
  }
  v3 = v2[9];
  if (v3 != 0) {
    v4 = v2[10];
    if (v3 == v4) {
      goto LABEL_11;
    }
    do {
      result = *(_QWORD**)(v4 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v4 -= 16;
    } while (v4 != v3);
    v5 = v2[9];
    v2[10] = v3;
    v3 = v5;
    if (v5 != 0) {
    LABEL_11:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v3);
    }
  }
  v7 = v2[6];
  if (v7 != 0) {
    v8 = v2[7];
    if (v7 == v8) {
      goto LABEL_22;
    }
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v9);
      }
      v8 -= 16;
    } while (v8 != v7);
    v10 = v2[6];
    v2[7] = v7;
    v7 = v10;
    if (v10 != 0) {
    LABEL_22:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v7);
    }
  }
  v12 = v2[5];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v12);
  }
  v13 = v2[2];
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v13);
  }
  *v2 = GameData_1fed278;
  if ((_QWORD*)GameData_22162a8 == v2) {
    GameData_22162a8 = 0;
    GameData_22162a4 = 0;
  }
  return result;
}

_QWORD* JostleManager_ea0ec0(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  _QWORD* result;

  v1 = *(__int64**)(a1 + 48);
  v2 = *(__int64**)(a1 + 56);
  if (v1 == v2) {
  LABEL_18:
    v11 = v1 + 2;
    if (v1 == v2 || v11 == v2) {
      goto LABEL_44;
    }
    while (1) {
      v13 = *v11;
      v14 = v11[1];
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
        v15 = *(_QWORD*)(v13 + 8);
        if (v15 == 0 || *(_QWORD*)(v15 + 8) == -1) {
          v16 = 0;
        }
        else {
          v16 = *(_QWORD*)(v13 + 16);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v16 != 0) {
            goto LABEL_40;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          std___1___shared_weak_count___release_weak(v14);
          if (v16 != 0) {
            goto LABEL_40;
          }
        }
      }
      else {
        v17 = *(_QWORD*)(v13 + 8);
        if (v17 != 0) {
          v18 = *(_QWORD*)(v13 + 16);
          if (*(_QWORD*)(v17 + 8) != -1 && v18 != 0) {
          LABEL_40:
            v20 = *v11;
            v21 = v11[1];
            *v11 = 0;
            v11[1] = 0;
            v22 = v1[1];
            *v1 = v20;
            v1[1] = v21;
            if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
              std___1___shared_weak_count___release_weak(v22);
            }
            v1 += 2;
          }
        }
      }
      v11 += 2;
      if (v11 == v2) {
        goto LABEL_44;
      }
    }
  }
  do {
    v4 = *v1;
    v5 = v1[1];
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      v6 = *(_QWORD*)(v4 + 8);
      if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
        v7 = 0;
      }
      else {
        v7 = *(_QWORD*)(v4 + 16);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
      if (v7 == 0) {
        goto LABEL_18;
      }
    }
    else {
      v8 = *(_QWORD*)(v4 + 8);
      if (v8 == 0) {
        goto LABEL_18;
      }
      v9 = *(_QWORD*)(v4 + 16);
      if (*(_QWORD*)(v8 + 8) == -1 || v9 == 0) {
        goto LABEL_18;
      }
    }
    v1 += 2;
  } while (v1 != v2);
  v1 = v2;
LABEL_44:
  v23 = *(__int64**)(a1 + 56);
  if (v1 != v23) {
    do {
      v24 = *(v23 - 1);
      if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        std___1___shared_weak_count___release_weak(v24);
      }
      v23 -= 2;
    } while (v23 != v1);
    *(_QWORD*)(a1 + 56) = v1;
  }
  result = GameRoutine_e9f560(*(_QWORD**)(a1 + 32));
  *(_BYTE*)(a1 + 24) = 1;
  return result;
}

__attribute__((swiftcall)) void JostleManager_ea1180(PSEUDO_X8 x8_, _QWORD* a1,
                                                     __int64* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  long double v29;
  int v30;
  _QWORD* v31;
  unsigned __int64 v32;
  atomic_ullong* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  char* v41;
  atomic_ullong* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64* v48;
  _QWORD v50[2];
  __int64 v51;

  v3 = (_QWORD*)a1[6];
  v4 = (_QWORD*)a1[7];
  v5 = a2[1];
  v8 = a3;
  if (v5 == 0) {
    v10 = a2 + 2;
    if (v3 != v4) {
      do {
        v17 = v3[1];
        if (v17 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            std___1___shared_weak_count___release_weak_alt1(v17);
          }
        }
        v3 += 2;
      } while (v3 != v4);
      v3 = v4;
    }
    goto LABEL_38;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
  v10 = a2 + 2;
  v9 = a2[2];
  if (v3 == v4) {
    goto LABEL_37;
  }
  if (v9 == 0) {
    do {
      v18 = v3[1];
      if (v18 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          std___1___shared_weak_count___release_weak_alt1(v18);
        }
      }
      v3 += 2;
    } while (v3 != v4);
    v3 = v4;
    goto LABEL_37;
  }
  v48 = a2 + 2;
  do {
    v11 = *v3;
    v12 = v3[1];
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
    }
    if (*(_QWORD*)(v5 + 8) == -1) {
      v16 = false;
      if (v12 == 0) {
        goto LABEL_20;
      }
    }
    else {
      v13 = *(_QWORD*)(v11 + 8);
      if (v13 == 0 || *(_QWORD*)(v13 + 8) == -1) {
        v14 = 0;
      }
      else {
        v14 = *(_QWORD*)(v11 + 16);
      }
      if (*(_QWORD*)(v5 + 8) == -1) {
        v15 = 0;
      }
      else {
        v15 = v9;
      }
      v16 = v14 == v15;
      if (v12 == 0) {
        goto LABEL_20;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  LABEL_20:
    if (v16) {
      goto LABEL_23;
    }
    v3 += 2;
  } while (v3 != v4);
  v3 = v4;
LABEL_23:
  v10 = v48;
  v8 = a3;
LABEL_37:
  std___1___shared_weak_count___release_weak_alt1(v5);
LABEL_38:
  if (v3 == (_QWORD*)a1[7]) {
    v22 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v23 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
    v24 = v23 + 3;
    v25 = v23;
    v23[1] = 0;
    v23[2] = 0;
    *v23 = GameData_1fed3f8;
    v26 = *a2;
    v27 = a2[1];
    v50[0] = v26;
    v50[1] = v27;
    if (v27 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                memory_order_relaxed);
      v51 = *v10;
      GameRoutine_e9ef40(v23 + 3, v50);
      *(__n128*)&v29 = std___1___shared_weak_count___release_weak_alt1(v27);
    }
    else {
      v51 = *v10;
      v28 = GameRoutine_e9ef40(v23 + 3, v50);
    }
    v30 = *((_DWORD*)v25 + 26);
    *v8 = v24;
    v8[1] = v25;
    *((_DWORD*)v25 + 26) = v30 + 1;
    if (v30 == 0) {
      v28 = (*(__int64 (**)(_QWORD*, long double))v25[12])(v25 + 12, v29);
    }
    v31 = (_QWORD*)a1[7];
    v32 = a1[8];
    if ((unsigned __int64)v31 >= v32) {
      v35 = a1[6];
      v36 = (char*)v31 - v35;
      v37 = (((__int64)v31 - v35) >> 4) + 1;
      if (v37 >> 60 != 0) {
        GameRoutine_e2fbe0(v29);
      }
      v38 = v32 - v35;
      if (v38 >> 3 > v37) {
        v37 = v38 >> 3;
      }
      if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF0LL) {
        v39 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v39 = v37;
      }
      if (v39 >> 60 != 0) {
        GameRoutine_60a210(v28);
      }
      v40 = fw_memory_HeapManager_Allocate(*v22, 16 * v39, 16, 0);
      v41 = &v36[v40];
      v42 = (atomic_ullong*)(v25 + 1);
      v43 = v40 + 16 * v39;
      *(_QWORD*)v41 = v24;
      *((_QWORD*)v41 + 1) = v25;
      v34 = (__int64)&v36[v40 + 16];
      atomic_fetch_add_explicit(v42, 1u, memory_order_relaxed);
      v44 = a1[6];
      v45 = a1[7] - v44;
      v46 = &v41[-v45];
      memcpy(&v41[-v45], v44, v45);
      a1[6] = v46;
      a1[7] = v34;
      a1[8] = v43;
      if (v44 != 0) {
        v47 = 128;
        if (*(_QWORD*)(*v22 + 200LL) == 0) {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v22 + v47, v44);
      }
    }
    else {
      *v31 = v24;
      v31[1] = v25;
      v33 = (atomic_ullong*)(v25 + 1);
      v34 = (__int64)(v31 + 2);
      atomic_fetch_add_explicit(v33, 1u, memory_order_relaxed);
    }
    a1[7] = v34;
  }
  else {
    v19 = *v3;
    v20 = *(_DWORD*)(*v3 + 80LL);
    *(_DWORD*)(*v3 + 80LL) = v20 + 1;
    if (v20 == 0) {
      (**(void (***)(__int64))(v19 + 72))(v19 + 72);
    }
    *v8 = *v3;
    v21 = v3[1];
    v8[1] = v21;
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                memory_order_relaxed);
    }
  }
}

_QWORD* JostleManager_ea1560(_QWORD* result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  _QWORD* v4;
  int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v3 = (__int64*)result[6];
  v2 = (__int64*)result[7];
  v4 = result;
  if (v3 != v2) {
    while (*v3 != *a2) {
      v3 += 2;
      if (v3 == v2) {
        return result;
      }
    }
  }
  if (v3 != v2) {
    result = (_QWORD*)*v3;
    v5 = *(_DWORD*)(*v3 + 80) - 1;
    *(_DWORD*)(*v3 + 80) = v5;
    if (v5 == 0) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(result[9] + 8LL))(result + 9);
    }
    if (*(int*)(*v3 + 80) <= 0) {
      v6 = (__int64*)v4[7];
      v7 = v3 + 2;
      if (v3 + 2 != v6) {
        do {
          v9 = *v7;
          v8 = v7[1];
          v10 = *(v7 - 1);
          *v7 = 0;
          v7[1] = 0;
          *(v7 - 2) = v9;
          *(v7 - 1) = v8;
          if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            result =
                (_QWORD*)std___1___shared_weak_count___release_weak_alt2(v10);
          }
          v7 += 2;
        } while (v7 != v6);
        v6 = (__int64*)v4[7];
        v3 = v7 - 2;
      }
      for (; v6 != v3; v6 -= 2) {
        v11 = *(v6 - 1);
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          result =
              (_QWORD*)std___1___shared_weak_count___release_weak_alt2(v11);
        }
      }
      v4[7] = v3;
    }
  }
  return result;
}

__int64 JostleManager_ea16c0(__int64 result, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64 i;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* j;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;

  v3 = *(__int64**)(result + 72);
  v4 = *(__int64**)(result + 80);
  v2 = (__int64*)(result + 72);
  for (i = result; v4 != v3; v4 -= 2) {
    result = *(v4 - 1);
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(result);
    }
  }
  *(_QWORD*)(i + 80) = v3;
  v8 = *a2;
  v7 = a2[1];
  if (v8 != v7) {
    do {
      v14_.v14 = *v8;
      v9 = v8[1];
      v14_.v15 = v9;
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_ea1850_alt1(v2, &v14_.v14);
      result = v14_.v15;
      if (v14_.v15 != 0) {
        result = std___1___shared_weak_count___release_weak_alt2(v14_.v15);
      }
      v8 += 2;
    } while (v8 != v7);
    v3 = *(__int64**)(i + 80);
  }
  for (j = (__int64*)*v2; j != v3; j += 2) {
    result = j[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result != 0) {
        v11 = *j;
        v12 = result;
        if (*j != 0) {
          result = JostleManager_ea2250_alt1(*(_QWORD*)(v11 + 40));
          v13 = *(_QWORD*)(v11 + 32);
          *(_DWORD*)(v11 + 56) = 2;
          *(_QWORD*)(v11 + 24) = 0;
          *(_QWORD*)(v11 + 32) = 0;
          if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            result = std___1___shared_weak_count___release_weak_alt2(v13);
          }
          *(_BYTE*)(v11 + 61) = 1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          result = std___1___shared_weak_count___release_weak_alt2(v12);
        }
      }
    }
  }
  return result;
}

void JostleManager_ea19a0(_QWORD* a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  float v21;
  float v22;
  bool v23;
  float v24;
  float v25;

  v1 = (__int64*)a1[9];
  v2 = (__int64*)a1[10];
  if (v1 != v2) {
    do {
      v4 = v1[1];
      if (v4 != 0) {
        v5 = std___1___shared_weak_count_lock(v4);
        if (v5 != 0) {
          v6 = *v1;
          if (*v1 != 0) {
            v7 = *(_QWORD*)(v6 + 32);
            *(_BYTE*)(v6 + 61) = 0;
            *(_DWORD*)(v6 + 56) = 2;
            *(_QWORD*)(v6 + 24) = 0;
            *(_QWORD*)(v6 + 32) = 0;
            if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
              v8 = v5;
              (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
              std___1___shared_weak_count___release_weak_alt1(v7);
              v5 = v8;
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v9 = v5;
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak_alt1(v9);
          }
        }
      }
      v1 += 2;
    } while (v1 != v2);
    v1 = (__int64*)a1[9];
    v2 = (__int64*)a1[10];
  }
  for (; v2 != v1; v2 -= 2) {
    v12 = *(v2 - 1);
    if (v12 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
  a1[10] = v1;
  v10 = (__int64*)a1[6];
  v11 = (__int64*)a1[7];
  while (v10 != v11) {
    v14 = *(__int64**)(*v10 + 40);
    v15 = *((_DWORD*)v14 + 5);
    v16 = v15 & 0xFFFFFFBF;
    *((_DWORD*)v14 + 5) = v15 & 0xFFFFFFBF;
    if (v15 != (v15 & 0xFFFFFFBF)) {
      v17 = *v14;
      v18 = *(_QWORD*)(*v14 + 8);
      if (v18 != 0) {
        v19 = *(_QWORD*)(v17 + 16);
        v20 = *(_QWORD*)(v18 + 8) == -1 || v19 == 0;
        if (!v20 && *(_QWORD*)(v18 + 8) != -1 &&
            (*(_BYTE*)(v17 + 61) & 1) == 0 && *(_DWORD*)(v17 + 64) != 1 &&
            (*(_BYTE*)(v19 + 342) & 1) != 0) {
          v21 = *((float*)v14 + 9) * *((float*)v14 + 2);
          v22 = fminf(fmaxf(v21, 0x0.0p+0f), 0x1.0000000000000p+0f);
          v23 = v21 >= 0x1.0000000000000p+0f || v21 <= 0x0.0p+0f;
          v24 = (float)(v22 * 0x1.3333340000000p-1f) + 0x1.99999a0000000p-3f;
          if (!v23) {
            v21 = v24;
          }
          if (v16 != 0) {
            v25 = 0x0.0p+0f;
          }
          else {
            v25 = v21;
          }
          game_character_1084940(v19, 0, v25);
          *(_BYTE*)(*(_QWORD*)(v19 + 8) + 289LL) = v25 > 0x0.0p+0f;
        }
      }
    }
    v13 = *v10;
    v10 += 2;
    JostleManager_ea2250_alt1(*(_QWORD*)(v13 + 40));
  }
}

__int64 JostleManager_ea1d20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 24);
  if (v1 != 0) {
    v2 = *(_QWORD*)(result + 32);
    v3 = result;
    if (v1 == v2) {
      goto LABEL_10;
    }
    do {
      v4 = *(_QWORD*)(v2 - 8);
      if (v4 != 0) {
        std___1___shared_weak_count___release_weak(v4);
      }
      result = *(_QWORD*)(v2 - 24);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v2 -= 32;
    } while (v2 != v1);
    v5 = *(_QWORD*)(v3 + 24);
    *(_QWORD*)(v3 + 32) = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_10:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
  return result;
}

__int64 game_combat_JostleManager_JostleManager_lambda0_Invoke(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 112LL) = 1;
  return result;
}

__int64 game_combat_JostleManager_JostleManager_lambda1_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(v1 + 48);
  v3 = *(_QWORD*)(v1 + 56);
  while (v2 != v3) {
    if (*(_QWORD*)v2 != 0) {
      result = GameRoutine_ea2430(*(_QWORD*)(*(_QWORD*)v2 + 40LL));
    }
    v2 += 16;
  }
  *(_BYTE*)(v1 + 24) = 0;
  *(_BYTE*)(v1 + 112) = 0;
  return result;
}

__int64 JostleManager_ea2120(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  bool v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 (**v7)();
    int v8;
    char gap12_[20];
    __int64 (***v9)();
  } v7_;

  v1 = *(_QWORD*)result;
  v2 = *(_QWORD*)(*(_QWORD*)result + 8LL);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v1 + 16);
    v4 = *(_QWORD*)(v2 + 8) == -1 || v3 == 0;
    if (!v4 && (*(_BYTE*)(v1 + 61) & 1) == 0 && *(_DWORD*)(v1 + 64) != 1 &&
        *(_QWORD*)(v2 + 8) != -1) {
      if (*(float*)(v3 + 348) == 0x1.0000000000000p+0f) {
        goto LABEL_20;
      }
      *(_DWORD*)(v3 + 348) = 1065353216;
      v7_.v7 = GameData_20076d8;
      v7_.v8 = 1065353216;
      v7_.v9 = &v7_.v7;
      CharacterBuilder_1083e90((_QWORD*)v3, (__int64)&v7_.v7);
      if (v7_.v9 == &v7_.v7) {
        v5 = 4;
      }
      else {
        if (v7_.v9 == nullptr) {
        LABEL_15:
          v7_.v7 = GameData_2007758;
          v7_.v9 = &v7_.v7;
          v7_.v8 = 1065353216;
          CharacterBuilder_1083e90((_QWORD*)v3, (__int64)&v7_.v7);
          result = (__int64)v7_.v9;
          if (v7_.v9 == &v7_.v7) {
            v6 = 4;
            goto LABEL_19;
          }
          if (v7_.v9 != nullptr) {
            v6 = 5;
          LABEL_19:
            result = ((__int64 (*)(__int64))(*v7_.v9)[v6])((__int64)v7_.v9);
          }
        LABEL_20:
          *(_BYTE*)(*(_QWORD*)(v3 + 8) + 289LL) = 1;
          return result;
        }
        v5 = 5;
      }
      ((__int64 (*)(__int64))(*v7_.v9)[v5])((__int64)v7_.v9);
      goto LABEL_15;
    }
  }
  return result;
}

float* JostleManager_ea2250(float* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  float v10;
  float v11;
  bool v12;
  float v13;
  float v14;
  struct {
    __int64 (**v15)();
    int v16;
    char gap12_[20];
    __int64 (***v17)();
  } v15_;

  v1 = *(_QWORD*)result;
  v2 = *(_QWORD*)(*(_QWORD*)result + 8LL);
  if (v2 == 0) {
    return result;
  }
  v3 = *(_QWORD*)(v1 + 16);
  if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
    if (*(float*)(v3 + 348) == 0x1.0000000000000p+0f) {
      goto LABEL_18;
    }
    v5 = (__int64)result;
    *(_DWORD*)(v3 + 348) = 1065353216;
    v15_.v15 = GameData_20076d8;
    v15_.v16 = 1065353216;
    v15_.v17 = &v15_.v15;
    CharacterBuilder_1083e90((_QWORD*)v3, (__int64)&v15_.v15);
    if (v15_.v17 == &v15_.v15) {
      v6 = 4;
    }
    else {
      if (v15_.v17 == nullptr) {
        goto LABEL_12;
      }
      v6 = 5;
    }
    ((__int64 (*)(__int64))(*v15_.v17)[v6])((__int64)v15_.v17);
  LABEL_12:
    v15_.v15 = GameData_2007758;
    v15_.v17 = &v15_.v15;
    v15_.v16 = 1065353216;
    CharacterBuilder_1083e90((_QWORD*)v3, (__int64)&v15_.v15);
    if (v15_.v17 == &v15_.v15) {
      v7 = 4;
    }
    else {
      if (v15_.v17 == nullptr) {
      LABEL_17:
        result = (float*)v5;
      LABEL_18:
        *(_BYTE*)(*(_QWORD*)(v3 + 8) + 289LL) = 1;
        v1 = *(_QWORD*)result;
        v2 = *(_QWORD*)(*(_QWORD*)result + 8LL);
        if (v2 == 0) {
          return result;
        }
        goto LABEL_19;
      }
      v7 = 5;
    }
    ((__int64 (*)(__int64))(*v15_.v17)[v7])((__int64)v15_.v17);
    goto LABEL_17;
  }
LABEL_19:
  v8 = *(_QWORD*)(v1 + 16);
  v9 = *(_QWORD*)(v2 + 8) == -1 || v8 == 0;
  if (!v9 && *(_QWORD*)(v2 + 8) != -1 && (*(_BYTE*)(v1 + 61) & 1) == 0 &&
      *(_DWORD*)(v1 + 64) != 1 && (*(_BYTE*)(v8 + 342) & 1) != 0) {
    v10 = result[9] * result[2];
    v11 = fminf(fmaxf(v10, 0x0.0p+0f), 0x1.0000000000000p+0f);
    v12 = v10 >= 0x1.0000000000000p+0f || v10 <= 0x0.0p+0f;
    v13 = (float)(v11 * 0x1.3333340000000p-1f) + 0x1.99999a0000000p-3f;
    if (!v12) {
      v10 = v13;
    }
    if (*((_DWORD*)result + 5) != 0) {
      v14 = 0x0.0p+0f;
    }
    else {
      v14 = v10;
    }
    result = (float*)game_character_1084940(v8, 0, v14);
    *(_BYTE*)(*(_QWORD*)(v8 + 8) + 289LL) = v14 > 0x0.0p+0f;
  }
  return result;
}

void JostleManager_ea2430(float* a1)
{
  __int64 v1;
  __int64 v2;
  bool v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  __int64 v10;
  __int64 v11;
  float* v12;
  __int64 v13;
  bool v14;
  float v15;
  float v16;
  bool v17;
  float v18;
  float v19;

  v1 = *(_QWORD*)a1;
  v2 = *(_QWORD*)(*(_QWORD*)a1 + 8LL);
  if (v2 == 0) {
    return;
  }
  v3 = *(_QWORD*)(v2 + 8) == -1 || *(_QWORD*)(v1 + 16) == 0;
  if (v3 || (*(_BYTE*)(v1 + 61) & 1) != 0 || *(_DWORD*)(v1 + 64) == 1) {
    return;
  }
  v4 = a1[8];
  if (v4 > 0x0.0p+0f && (*(_BYTE*)(GameData_22162a8 + 112) & 1) == 0) {
    v6 = a1[7];
    v7 = fabsf((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                       0x1.0aef000000000p+4f) /
               0x1.f400000000000p+9f);
    if (v6 <= v4) {
      if (v6 >= v4) {
        goto LABEL_17;
      }
      v6 = v7 + v6;
      if (v6 <= v4) {
        goto LABEL_17;
      }
    }
    else {
      v6 = v6 - v7;
      if (v6 >= v4) {
        goto LABEL_17;
      }
    }
    v6 = a1[8];
  LABEL_17:
    v8 = a1[10];
    a1[7] = v6;
    v5 = (float)(0x1.0000000000000p+0f - v8) +
         (float)(fminf(fmaxf(v6 / v4, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                 (float)(v8 - (float)(0x1.0000000000000p+0f - v8)));
    goto LABEL_18;
  }
  v5 = a1[10];
LABEL_18:
  a1[9] = v5;
  GameRoutine_ea2620(a1);
  JostleManager_ea2a20((__int64)a1);
  v10 = *(_QWORD*)a1;
  v11 = *(_QWORD*)(*(_QWORD*)a1 + 8LL);
  if (v11 != 0) {
    v12 = a1;
    v13 = *(_QWORD*)(v10 + 16);
    v14 = *(_QWORD*)(v11 + 8) == -1 || v13 == 0;
    if (!v14 && *(_QWORD*)(v11 + 8) != -1 && (*(_BYTE*)(v10 + 61) & 1) == 0 &&
        *(_DWORD*)(v10 + 64) != 1 && (*(_BYTE*)(v13 + 342) & 1) != 0) {
      v15 = v12[9] * v12[2];
      v16 = fminf(fmaxf(v15, 0x0.0p+0f), 0x1.0000000000000p+0f);
      v17 = v15 >= 0x1.0000000000000p+0f || v15 <= 0x0.0p+0f;
      v18 = (float)(v16 * 0x1.3333340000000p-1f) + 0x1.99999a0000000p-3f;
      if (!v17) {
        v15 = v18;
      }
      if (*((_DWORD*)v12 + 5) != 0) {
        v19 = 0x0.0p+0f;
      }
      else {
        v19 = v15;
      }
      game_character_1084940(v13, 0, v19);
      *(_BYTE*)(*(_QWORD*)(v13 + 8) + 289LL) = v19 > 0x0.0p+0f;
    }
  }
}

void JostleManager_ea2a20(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  int v4;
  float v5;
  __int64 v6;
  float v7;
  int v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  float32x4_t* v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __n128 v27;
  float v28;
  int v29;
  __int64 v30;
  __int64 v31;
  float32x4_t v32;
  float v33;
  float v34;
  float v35;
  __int64 v36;
  __int64 v37;
  int v38;
  float v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  bool v52;
  float32x4_t* v53;
  float32x4_t v54;
  int8x16_t v55;
  float v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  float v72;
  float v73;
  __int128* v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  __int128* v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float v122;
  float v123;
  __int128* v124;
  float v125;
  float32x4_t* v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float v144;
  float v145;
  int v146;
  float v147;
  bool v148;
  float v149;
  float v150;
  __int64 v151;
  float v152;
  float v153;
  __int64* v154;
  float v155;
  float v156;
  __int64* v157;
  __int64 v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float v163;
  float32x4_t v164;
  float32x4_t v165;
  float32x4_t v166;
  struct {
    _QWORD v167[2];
    char gap64_[8];
    __int64 v168;
  } v167_;

  v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(float, "s0", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
  v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s0", "=w")),
  v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = GameData_212f2e0;
  v3 = *GameData_212f2e0;
  if (*(_BYTE*)(*GameData_212f2e0 + 112) == 1) {
    v4 = *(unsigned __int8*)(v3 + 115);
    *(_DWORD*)(a1 + 16) = 0;
    v5 = 0x1.99999a0000000p-2f;
    if (v4 != 0) {
      v5 = 0x1.99999a0000000p-4f;
    }
    *(float*)(a1 + 12) = v5;
  }
  v6 = *(_QWORD*)a1;
  v7 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                         160LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  if ((*(_BYTE*)(*(_QWORD*)a1 + 60LL) & 1) == 0 &&
      (*(_BYTE*)(v6 + 61) & 1) == 0) {
    v15 = *(_QWORD*)(v6 + 8);
    if (v15 == 0 ||
        ((v16 = *(_QWORD*)(v15 + 8), v17 = *(_QWORD*)(v6 + 16), v16 != -1)
             ? (v18 = v17 == 0)
             : (v18 = true),
         v18)) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) != 0) {
        v19 = (float32x4_t*)&GameData_21a6120;
      }
      else {
        v19 = (float32x4_t*)&GameData_21a6120;
        if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
          v158 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v158;
          __cxa_guard_release_alt1((__int64)&GameData_21a6130),
              v117 = COERCE_AS(__typeof__(v117),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
      }
    }
    else {
      v19 = (float32x4_t*)(*(_QWORD*)(v17 + 8) + 304LL);
    }
    GameRoutine_e9f200_alt1(*(_QWORD*)a1),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(float, "s0", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(float, "s0", "=w"));
    v21 = v20;
    GameRoutine_e9f360_alt1(*(_QWORD*)a1),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(float, "s0", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(float, "s0", "=w"));
    v23 = v22;
    v24 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
    v25 = *(_QWORD*)(v24 + 24);
    v26 = *(_QWORD*)(v24 + 32);
    if (v26 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
    }
    v27 = ((__n128 (*)(__int64)) * (_QWORD*)(*(_QWORD*)v25 + 40LL))(v25),
    v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(float, "s0", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
    v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s0", "=w")),
    v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(float, "s0", "=w"));
    v28 = LANES128(*(v19)).n128_f32[1];
    v29 = *(_DWORD*)(a1 + 24);
    v167_.v168 = v26;
    if (vabds_f32(v28, LANES128(v27).n128_f32[1]) <
        (float)((float)(v23 * 0x1.6666660000000p+0f) + 0x1.0000000000000p-1f)) {
      v31 = *(_QWORD*)(*v2 + 72);
      v30 = *(_QWORD*)(*v2 + 80);
      v32 = vsubq_f32(v27, *v19);
      v33 = LANES128_OF(vmulq_f32(v32, v32)).n128_f32[2] +
            (float)(LANES128(v32).n128_f32[0] * LANES128(v32).n128_f32[0]);
      v34 = 0x1.6666680000000p-1f;
      if (v30 == v31) {
        v34 = 0x1.99999a0000000p-2f;
      }
      if (v33 <= (float)((float)(v21 + v34) * (float)(v21 + v34))) {
        v44 = 2;
        goto LABEL_158;
      }
      v35 = 0x1.b333340000000p+0f;
      if (v29 == 0) {
        v35 = 0x1.3333340000000p+0f;
      }
      if (v30 == v31) {
        v35 = v35 * 0x1.0000000000000p-1f;
      }
      if (v33 <= (float)((float)(v21 + v35) * (float)(v21 + v35))) {
        v44 = 1;
        goto LABEL_158;
      }
    }
    if (*GameData_212d448[0] != 0 &&
        (v36 = *(_QWORD*)(*GameData_212d448[0] + 120)) != 0) {
      v37 = *v2;
      v38 = *(_DWORD*)(*(_QWORD*)(v36 + 40) + 8LL);
      if (v38 != 6 && v38 != 0) {
        goto LABEL_155;
      }
      v40 = *(float*)(v36 + 84);
      v41 = v37 + 72;
      v162 = v27;
    }
    else {
      v37 = *v2;
      v162 = v27;
      v40 = 0x0.0p+0f;
      v41 = *v2 + 72;
    }
    v42 = *(__int64**)(v37 + 72);
    v43 = *(__int64**)(v41 + 8);
    if (v42 != v43) {
      v44 = 2;
      while (1) {
        v45 = v42[1];
        if (v45 != 0) {
          v46 = std___1___shared_weak_count_lock_alt1(v45),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(float, "s0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
          v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s0", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(float, "s0", "=w"));
          if (v46 != 0) {
            v47 = v46;
            v48 = *v42;
            if (*v42 != 0) {
              v49 = *(_QWORD*)(v48 + 8);
              if (v49 == 0 || ((v50 = *(_QWORD*)(v49 + 8),
                                v51 = *(_QWORD*)(v48 + 16), v50 != -1)
                                   ? (v52 = v51 == 0)
                                   : (v52 = true),
                               v52)) {
                if ((atomic_load_explicit(
                         (atomic_uchar* volatile)&GameData_21a6130,
                         memory_order_acquire) &
                     1) != 0) {
                  v53 = (float32x4_t*)&GameData_21a6120;
                }
                else {
                  v58 = v48;
                  if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) !=
                      0) {
                    v59 = *((_QWORD*)GameData_212c540 + 1);
                    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
                    *((_QWORD*)&GameData_21a6120 + 1) = v59;
                    __cxa_guard_release_alt1((__int64)&GameData_21a6130),
                        v117 = COERCE_AS(__typeof__(v117),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v56 = COERCE_AS(__typeof__(v56),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v76 = COERCE_AS(__typeof__(v76),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                  }
                  v53 = (float32x4_t*)&GameData_21a6120;
                  v48 = v58;
                }
              }
              else {
                v53 = (float32x4_t*)(*(_QWORD*)(v51 + 8) + 304LL);
              }
              v54 = vsubq_f32(*v19, *v53);
              v55 = vmulq_f32(v54, v54);
              LANES128(v55).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v55, v55, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
                      .n64_u64[0];
              v163 = LANES64_OF(
                         vpadd_f32(
                             COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
                         .n64_f32[0];
              GameRoutine_e9f200_alt1(v48),
                  v117 = COERCE_AS(__typeof__(v117),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v56 = COERCE_AS(__typeof__(v56),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              if (v163 <
                  (float)((float)((float)(v21 + v56) * 0x1.6666660000000p-1f) *
                          (float)((float)(v21 + v56) *
                                  0x1.6666660000000p-1f))) {
                v44 = 1;
                if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) != 0) {
                  goto LABEL_158;
                }
                v57 = 0;
                goto LABEL_49;
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v57 = 1;
            LABEL_49:
              (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47),
                  v117 = COERCE_AS(__typeof__(v117),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v56 = COERCE_AS(__typeof__(v56),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              std___1___shared_weak_count___release_weak_alt2(v47),
                  v117 = COERCE_AS(__typeof__(v117),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v56 = COERCE_AS(__typeof__(v56),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              if (v57 == 0) {
                goto LABEL_158;
              }
            }
          }
        }
        v42 += 2;
        if (v42 == v43) {
          v37 = *GameData_212f2e0;
          goto LABEL_73;
        }
      }
    }
    v44 = 2;
  LABEL_73:
    if (*(_BYTE*)(v37 + 114) != 1) {
      goto LABEL_155;
    }
    v61 = *(__int64**)v41;
    v60 = *(_QWORD*)(v41 + 8);
    if (v60 == *(_QWORD*)v41) {
      v64 = 0;
      v63 = 0;
    }
    else {
      v62 = v61[1];
      if (v62 != 0) {
        v63 = std___1___shared_weak_count_lock_alt1(v62),
        v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(float, "s0", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
        v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s0", "=w")),
        v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v63 != 0) {
          v64 = *v61;
        }
        else {
          v64 = 0;
        }
      }
      else {
        v64 = 0;
        v63 = 0;
      }
      v61 = *(__int64**)v41;
      v60 = *(_QWORD*)(v41 + 8);
    }
    if ((unsigned __int64)(v60 - (_QWORD)v61) >= 0x11 && (v65 = v61[3]) != 0) {
      v66 = std___1___shared_weak_count_lock_alt1(v65),
      v117 = COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(float, "s0", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
      v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s0", "=w")),
      v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v66 != 0) {
        v67 = v61[2];
        if (v64 != 0 && v67 != 0) {
          v68 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
          if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) == v68 ||
              (v69 = *(_QWORD*)(v68 - 8)) == 0) {
            v167_.v167[0] = 0;
            v167_.v167[1] = 0;
          }
          else {
            v71 = *(_QWORD*)(v69 + 24);
            v70 = *(_QWORD*)(v69 + 32);
            v167_.v167[0] = v71;
            v167_.v167[1] = v70;
            if (v70 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v70 + 8), 1u,
                                        memory_order_relaxed);
            }
          }
          GameRoutine_e9f200_alt1(v64),
              v117 = COERCE_AS(__typeof__(v117),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v118 = v117;
          GameRoutine_e9f200_alt1(v67),
              v117 = COERCE_AS(__typeof__(v117),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v120 = 0x0.0p+0f;
          if (v119 >= v118) {
            v119 = v118;
          }
          v121 = (float)(v119 * 0x1.6666660000000p-1f) + -0x1.99999a0000000p-4f;
          if (v121 < 0x0.0p+0f) {
            v121 = 0x0.0p+0f;
          }
          if (v29 != 0) {
            v122 = v121 + 0x1.99999a0000000p-5f;
          }
          else {
            v122 = v121;
          }
          if (v122 > 0x0.0p+0f) {
            v166 = *v19;
            LODWORD(v123) = LANES128(*(v19)).n128_u64[1];
            v124 = GameRoutine_e9f150(v64),
            v117 =
                COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(float, "s0", "=w")),
            v119 =
                COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s0", "=w")),
            v99 =
                COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(float, "s0", "=w"));
            v161 = COERCE_AS(float32x4_t, *v124);
            v125 = COERCE_FLOAT(*((_QWORD*)v124 + 1));
            v126 = (float32x4_t*)GameRoutine_e9f150(v67),
            v117 =
                COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(float, "s0", "=w")),
            v119 =
                COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s0", "=w")),
            v99 =
                COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(float, "s0", "=w"));
            v127 = 0x1.0000000000000p+0f;
            v128 = COERCE_FLOAT(LANES128(*(v126)).n128_u64[1]);
            v129 = LANES128_OF(vsubq_f32(*v126, v161)).n128_f32[0];
            v130 = v128 - v125;
            v131 = (float)(PSEUDO_UNFUSED(v130 * v130)) + (float)(v129 * v129);
            v132 = 0x1.0000000000000p+0f;
            if (v131 >= 0x1.0000000000000p-23f) {
              v133 = 0x1.0000000000000p+0f / sqrtf(v131);
              v120 = v129 * v133;
              v132 = v130 * v133;
            }
            v134 = v125 - v123;
            v135 = 0x0.0p+0f;
            v136 = LANES128_OF(vsubq_f32(v161, v166)).n128_f32[0];
            v137 = (float)(PSEUDO_UNFUSED(v134 * v134)) + (float)(v136 * v136);
            if (v137 >= 0x1.0000000000000p-23f) {
              v138 = 0x1.0000000000000p+0f / sqrtf(v137);
              v135 = v136 * v138;
              v127 = v134 * v138;
            }
            if ((float)((float)(PSEUDO_UNFUSED(v132 * v127)) +
                        (float)(v120 * v135)) <= 0x0.0p+0f) {
              v139 = v128 - v123;
              v140 = LANES128_OF(vsubq_f32(*v126, v166)).n128_f32[0];
              v141 =
                  (float)(PSEUDO_UNFUSED(v139 * v139)) + (float)(v140 * v140);
              if (v141 >= 0x1.0000000000000p-23f) {
                v147 = 0x1.0000000000000p+0f / sqrtf(v141);
                v143 = v140 * v147;
                v142 = v139 * v147;
              }
              else {
                v142 = 0x1.0000000000000p+0f;
                v143 = 0x0.0p+0f;
              }
              v148 = (float)((float)(PSEUDO_UNFUSED(v132 * v142)) +
                             (float)(v120 * v143)) < 0x0.0p+0f;
              v149 = (float)(PSEUDO_UNFUSED((float)(v123 - v125) * v132)) +
                     (float)(v120 *
                             LANES128_OF(vsubq_f32(v166, v161)).n128_f32[0]);
              v150 = (float)(PSEUDO_UNFUSED(
                         (float)((float)(v125 +
                                         (float)(PSEUDO_UNFUSED(v132 * v149))) -
                                 v123) *
                         (float)((float)(v125 +
                                         (float)(PSEUDO_UNFUSED(v132 * v149))) -
                                 v123))) +
                     (float)((float)((float)(LANES128(v161).n128_f32[0] +
                                             (float)(PSEUDO_UNFUSED(v120 *
                                                                    v149))) -
                                     LANES128(v166).n128_f32[0]) *
                             (float)((float)(LANES128(v161).n128_f32[0] +
                                             (float)(PSEUDO_UNFUSED(v120 *
                                                                    v149))) -
                                     LANES128(v166).n128_f32[0]));
              if (v148) {
                v137 = v141;
              }
              else {
                v137 = v150;
              }
            }
            if (v137 < (float)((float)(v21 + v122) * (float)(v21 + v122))) {
              GameRoutine_ea3720_alt1((__int64)v167_.v167),
                  v117 = COERCE_AS(__typeof__(v117),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v119 = COERCE_AS(__typeof__(v119),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v22 = COERCE_AS(__typeof__(v22),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v56 = COERCE_AS(__typeof__(v56),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v76 = COERCE_AS(__typeof__(v76),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v99 = COERCE_AS(__typeof__(v99),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v146 = 0;
              v44 = 1;
              goto LABEL_148;
            }
          }
          GameRoutine_ea3720_alt1((__int64)v167_.v167),
              v117 = COERCE_AS(__typeof__(v117),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if (v40 <= 0x0.0p+0f) {
            goto LABEL_146;
          }
        LABEL_95:
          if (v29 != 0) {
            v72 = 0x1.99999a0000000p-3f;
          }
          else {
            v72 = 0x1.99999a0000000p-4f;
          }
          if (v64 == 0) {
            goto LABEL_137;
          }
          v164 = *v19;
          LODWORD(v73) = LANES128(*(v19)).n128_u64[1];
          v74 = GameRoutine_e9f150(v64),
          v117 =
              COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(float, "s0", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
          v76 = COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s0", "=w")),
          v99 = COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(float, "s0", "=w"));
          v159 = COERCE_AS(float32x4_t, *v74);
          v75 = COERCE_FLOAT(*((_QWORD*)v74 + 1));
          GameRoutine_e9f200_alt1(v64),
              v117 = COERCE_AS(__typeof__(v117),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v76 = COERCE_AS(__typeof__(v76),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v99 = COERCE_AS(__typeof__(v99),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v77 = v75 - LANES128(v162).n128_f32[2];
          v78 = 0x1.0000000000000p+0f;
          v79 = 0x0.0p+0f;
          v80 = 0x1.0000000000000p+0f;
          v81 = LANES128_OF(vsubq_f32(v159, v162)).n128_f32[0];
          v82 = (float)(PSEUDO_UNFUSED(v77 * v77)) + (float)(v81 * v81);
          v83 = 0x0.0p+0f;
          if (v82 >= 0x1.0000000000000p-23f) {
            v84 = 0x1.0000000000000p+0f / sqrtf(v82);
            v83 = v81 * v84;
            v80 = v77 * v84;
          }
          v85 = LANES128(v162).n128_f32[2] - v73;
          v86 = LANES128_OF(vsubq_f32(v162, v164)).n128_f32[0];
          v87 = (float)(PSEUDO_UNFUSED(v85 * v85)) + (float)(v86 * v86);
          if (v87 >= 0x1.0000000000000p-23f) {
            v88 = 0x1.0000000000000p+0f / sqrtf(v87);
            v79 = v86 * v88;
            v78 = v85 * v88;
          }
          v89 = v40 * v76;
          if ((float)((float)(PSEUDO_UNFUSED(v80 * v78)) +
                      (float)(v83 * v79)) <= 0x0.0p+0f) {
            v90 = v75 - v73;
            v91 = LANES128_OF(vsubq_f32(v159, v164)).n128_f32[0];
            v87 = (float)(PSEUDO_UNFUSED(v90 * v90)) + (float)(v91 * v91);
            if (v87 >= 0x1.0000000000000p-23f) {
              v94 = 0x1.0000000000000p+0f / sqrtf(v87);
              v93 = v91 * v94;
              v92 = v90 * v94;
            }
            else {
              v92 = 0x1.0000000000000p+0f;
              v93 = 0x0.0p+0f;
            }
            if ((float)((float)(PSEUDO_UNFUSED(v80 * v92)) +
                        (float)(v83 * v93)) >= 0x0.0p+0f) {
              v95 =
                  (float)(PSEUDO_UNFUSED(
                      (float)(v73 - LANES128(v162).n128_f32[2]) * v80)) +
                  (float)(v83 * LANES128_OF(vsubq_f32(v164, v162)).n128_f32[0]);
              v87 =
                  (float)(PSEUDO_UNFUSED(
                      (float)((float)(LANES128(v162).n128_f32[2] +
                                      (float)(PSEUDO_UNFUSED(v80 * v95))) -
                              v73) *
                      (float)((float)(LANES128(v162).n128_f32[2] +
                                      (float)(PSEUDO_UNFUSED(v80 * v95))) -
                              v73))) +
                  (float)((float)((float)(LANES128(v162).n128_f32[0] +
                                          (float)(PSEUDO_UNFUSED(v83 * v95))) -
                                  LANES128(v164).n128_f32[0]) *
                          (float)((float)(LANES128(v162).n128_f32[0] +
                                          (float)(PSEUDO_UNFUSED(v83 * v95))) -
                                  LANES128(v164).n128_f32[0]));
            }
          }
          if (v87 >= (float)((float)(v72 + v89) * (float)(v72 + v89))) {
          LABEL_137:
            if (v67 == 0) {
              goto LABEL_146;
            }
            v165 = *v19;
            LODWORD(v96) = LANES128(*(v19)).n128_u64[1];
            v97 = GameRoutine_e9f150(v67),
            v117 =
                COERCE_AS(__typeof__(v117), PSEUDO_REGISTER(float, "s0", "=w")),
            v119 =
                COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(float, "s0", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
            v76 =
                COERCE_AS(__typeof__(v76), PSEUDO_REGISTER(float, "s0", "=w")),
            v99 =
                COERCE_AS(__typeof__(v99), PSEUDO_REGISTER(float, "s0", "=w"));
            v160 = COERCE_AS(float32x4_t, *v97);
            v98 = COERCE_FLOAT(*((_QWORD*)v97 + 1));
            GameRoutine_e9f200_alt1(v67),
                v117 = COERCE_AS(__typeof__(v117),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v119 = COERCE_AS(__typeof__(v119),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v22 = COERCE_AS(__typeof__(v22),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v76 = COERCE_AS(__typeof__(v76),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v99 = COERCE_AS(__typeof__(v99),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v100 = v98 - LANES128(v162).n128_f32[2];
            v101 = 0x1.0000000000000p+0f;
            v102 = 0x0.0p+0f;
            v103 = 0x1.0000000000000p+0f;
            v104 = LANES128_OF(vsubq_f32(v160, v162)).n128_f32[0];
            v105 = (float)(PSEUDO_UNFUSED(v100 * v100)) + (float)(v104 * v104);
            v106 = 0x0.0p+0f;
            if (v105 >= 0x1.0000000000000p-23f) {
              v107 = 0x1.0000000000000p+0f / sqrtf(v105);
              v106 = v104 * v107;
              v103 = v100 * v107;
            }
            v108 = LANES128(v162).n128_f32[2] - v96;
            v109 = LANES128_OF(vsubq_f32(v162, v165)).n128_f32[0];
            v110 = (float)(PSEUDO_UNFUSED(v108 * v108)) + (float)(v109 * v109);
            if (v110 >= 0x1.0000000000000p-23f) {
              v111 = 0x1.0000000000000p+0f / sqrtf(v110);
              v102 = v109 * v111;
              v101 = v108 * v111;
            }
            v112 = v40 * v99;
            if ((float)((float)(PSEUDO_UNFUSED(v103 * v101)) +
                        (float)(v106 * v102)) <= 0x0.0p+0f) {
              v113 = v98 - v96;
              v114 = LANES128_OF(vsubq_f32(v160, v165)).n128_f32[0];
              v110 =
                  (float)(PSEUDO_UNFUSED(v113 * v113)) + (float)(v114 * v114);
              if (v110 >= 0x1.0000000000000p-23f) {
                v144 = 0x1.0000000000000p+0f / sqrtf(v110);
                v116 = v114 * v144;
                v115 = v113 * v144;
              }
              else {
                v115 = 0x1.0000000000000p+0f;
                v116 = 0x0.0p+0f;
              }
              if ((float)((float)(PSEUDO_UNFUSED(v103 * v115)) +
                          (float)(v106 * v116)) >= 0x0.0p+0f) {
                v145 = (float)(PSEUDO_UNFUSED(
                           (float)(v96 - LANES128(v162).n128_f32[2]) * v103)) +
                       (float)(v106 *
                               LANES128_OF(vsubq_f32(v165, v162)).n128_f32[0]);
                v110 =
                    (float)(PSEUDO_UNFUSED(
                        (float)((float)(LANES128(v162).n128_f32[2] +
                                        (float)(PSEUDO_UNFUSED(v103 * v145))) -
                                v96) *
                        (float)((float)(LANES128(v162).n128_f32[2] +
                                        (float)(PSEUDO_UNFUSED(v103 * v145))) -
                                v96))) +
                    (float)((float)((float)(LANES128(v162).n128_f32[0] +
                                            (float)(PSEUDO_UNFUSED(v106 *
                                                                   v145))) -
                                    LANES128(v165).n128_f32[0]) *
                            (float)((float)(LANES128(v162).n128_f32[0] +
                                            (float)(PSEUDO_UNFUSED(v106 *
                                                                   v145))) -
                                    LANES128(v165).n128_f32[0]));
              }
            }
            if (v110 >= (float)((float)(v72 + v112) * (float)(v72 + v112))) {
            LABEL_146:
              v146 = 1;
            LABEL_147:
              if (v66 == 0) {
              LABEL_150:
                if (v63 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63),
                      v117 = COERCE_AS(__typeof__(v117),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v119 = COERCE_AS(__typeof__(v119),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v22 = COERCE_AS(__typeof__(v22),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v56 = COERCE_AS(__typeof__(v56),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v76 = COERCE_AS(__typeof__(v76),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v99 = COERCE_AS(__typeof__(v99),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  std___1___shared_weak_count___release_weak_alt2(v63),
                      v117 = COERCE_AS(__typeof__(v117),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v119 = COERCE_AS(__typeof__(v119),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v22 = COERCE_AS(__typeof__(v22),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v56 = COERCE_AS(__typeof__(v56),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v76 = COERCE_AS(__typeof__(v76),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v99 = COERCE_AS(__typeof__(v99),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                }
                if (v146 == 0) {
                LABEL_158:
                  v151 = v167_.v168;
                  if (v167_.v168 != 0 &&
                      atomic_fetch_add(
                          (atomic_ullong* volatile)(v167_.v168 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v151 + 16LL))(v151),
                        v117 = COERCE_AS(__typeof__(v117),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v56 = COERCE_AS(__typeof__(v56),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v76 = COERCE_AS(__typeof__(v76),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    std___1___shared_weak_count___release_weak_alt2(v151),
                        v117 = COERCE_AS(__typeof__(v117),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v119 = COERCE_AS(__typeof__(v119),
                                         PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v22 = COERCE_AS(__typeof__(v22),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v56 = COERCE_AS(__typeof__(v56),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v76 = COERCE_AS(__typeof__(v76),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v99 = COERCE_AS(__typeof__(v99),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                  }
                  *(_DWORD*)(a1 + 24) = v44;
                  if (v44 > 1) {
                    if (v44 != 2) {
                      v3 = *GameData_212f2e0;
                      goto LABEL_8;
                    }
                    *(_QWORD*)(a1 + 8) = 0;
                    *(_DWORD*)(a1 + 16) = 1053609165;
                    v3 = *GameData_212f2e0;
                  LABEL_184:
                    v10 = 0x0.0p+0f;
                    v11 = 0x1.4000000000000p+3f;
                    if ((*(_BYTE*)(v3 + 112) & 1) != 0) {
                      goto LABEL_185;
                    }
                    goto LABEL_13;
                  }
                  if (v44 == 0) {
                    v152 = *(float*)(a1 + 16);
                    v153 = fabsf(v7);
                    if (v152 <= 0x0.0p+0f) {
                      v154 = GameData_212f2e0;
                      if (v152 >= 0x0.0p+0f) {
                        goto LABEL_175;
                      }
                      v152 = v153 + v152;
                      if (v152 <= 0x0.0p+0f) {
                        goto LABEL_175;
                      }
                    }
                    else {
                      v152 = v152 - v153;
                      v154 = GameData_212f2e0;
                      if (v152 >= 0x0.0p+0f) {
                        goto LABEL_175;
                      }
                    }
                    v152 = 0x0.0p+0f;
                  LABEL_175:
                    v3 = *v154;
                    *(float*)(a1 + 16) = v152;
                    if (*(_BYTE*)(v3 + 112) == 1) {
                      *(_DWORD*)(a1 + 16) = 0;
                      goto LABEL_9;
                    }
                    if (v152 == 0x0.0p+0f) {
                      goto LABEL_9;
                    }
                    goto LABEL_184;
                  }
                  v155 = *(float*)(a1 + 12);
                  v156 = fabsf(v7);
                  if (v155 <= 0x0.0p+0f) {
                    v157 = GameData_212f2e0;
                    if (v155 >= 0x0.0p+0f ||
                        (v155 = v156 + v155) <= 0x0.0p+0f) {
                    LABEL_180:
                      v3 = *v157;
                      *(float*)(a1 + 12) = v155;
                      if (v155 != 0x0.0p+0f && (*(_BYTE*)(v3 + 112) & 1) == 0) {
                        goto LABEL_12;
                      }
                      goto LABEL_182;
                    }
                  }
                  else {
                    v155 = v155 - v156;
                    v157 = GameData_212f2e0;
                    if (v155 >= 0x0.0p+0f) {
                      goto LABEL_180;
                    }
                  }
                  v3 = *v157;
                LABEL_182:
                  *(_QWORD*)(a1 + 12) = 0x3ECCCCCD00000000LL;
                  goto LABEL_184;
                }
                v37 = *GameData_212f2e0;
              LABEL_155:
                if (*(_QWORD*)(v37 + 80) == *(_QWORD*)(v37 + 72)) {
                  v44 = 3;
                }
                else {
                  v44 = 0;
                }
                goto LABEL_158;
              }
            LABEL_148:
              if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66),
                    v117 = COERCE_AS(__typeof__(v117),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v22 = COERCE_AS(__typeof__(v22),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v56 = COERCE_AS(__typeof__(v56),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v76 = COERCE_AS(__typeof__(v76),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v99 = COERCE_AS(__typeof__(v99),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                std___1___shared_weak_count___release_weak_alt2(v66),
                    v117 = COERCE_AS(__typeof__(v117),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v119 = COERCE_AS(__typeof__(v119),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v22 = COERCE_AS(__typeof__(v22),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v56 = COERCE_AS(__typeof__(v56),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v76 = COERCE_AS(__typeof__(v76),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v99 = COERCE_AS(__typeof__(v99),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
              goto LABEL_150;
            }
          }
          v44 = 1;
          v146 = 0;
          goto LABEL_147;
        }
      LABEL_94:
        if (v40 <= 0x0.0p+0f) {
          goto LABEL_146;
        }
        goto LABEL_95;
      }
    }
    else {
      v66 = 0;
    }
    v67 = 0;
    goto LABEL_94;
  }
  *(_DWORD*)(a1 + 24) = 3;
LABEL_8:
  *(_DWORD*)(a1 + 8) = 1065353216;
LABEL_9:
  v8 = *(unsigned __int8*)(v3 + 115);
  *(_DWORD*)(a1 + 16) = 0;
  v9 = 0x1.99999a0000000p-2f;
  if (v8 != 0) {
    v9 = 0x1.99999a0000000p-4f;
  }
  *(float*)(a1 + 12) = v9;
LABEL_12:
  v10 = 0x1.0000000000000p+0f;
  v11 = 0x1.aaaaaa0000000p+2f;
  if ((*(_BYTE*)(v3 + 112) & 1) != 0) {
    goto LABEL_185;
  }
LABEL_13:
  v12 = v7 * v11;
  v13 = *(float*)(a1 + 8);
  v14 = fabsf(v12);
  if (v13 > v10) {
    v13 = v13 - v14;
    if (v13 >= v10) {
      goto LABEL_186;
    }
    goto LABEL_185;
  }
  if (v13 < v10) {
    v13 = v14 + v13;
    if (v13 > v10) {
    LABEL_185:
      v13 = v10;
    }
  }
LABEL_186:
  *(float*)(a1 + 8) = v13;
}

#pragma GCC visibility pop
