#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1084400(_QWORD, _QWORD);
__int64 GameRoutine_66ae00(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterSelfie_vtable[])();
extern __int64 GameData_21ec7b0;
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterSelfie_Destructor(_QWORD* a1);
__int64 CharacterSelfie_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "CharacterSelfie_DeletingDestructor");
void CharacterSelfie_10a6ac0(__int64 a1);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_66b000(__int64*, _QWORD*);
__int64 CharacterBuilder_1084400_alt1(__int64 result,
                                      int) __asm__("CharacterBuilder_1084400");
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 CharacterBuilder_1085070(__int64, _BYTE*);
__int64 GameRoutine_18c8060(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_os_ConvertToTimeSpan(_QWORD, long double);
__int64 strcmp(_QWORD, _QWORD);
extern __int64 (*GameData_1fdb498[])();
extern __int64 (*GameData_2008580[])();
extern __int64* GameData_21320e8;
extern __int64 GameData_21c9668;
extern __int64 game_script_hub_g_frame_counter;
extern char* GameData_2008550[4];
unsigned __int64 GameRoutine_d2b5f0(__int64);
void GameRoutine_66ae00_alt1(__int64*) __asm__("GameRoutine_66ae00");
__n128 game_character_CharacterSelfie_Start(__int64 a1, char a2, __int64* a3);
__int64 CharacterSelfie_10a6b90();
__int64 GameRoutine_66ae00_alt2(__int64 result) __asm__("GameRoutine_66ae00");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void CharacterBuilder_1084400_alt2(__int64,
                                   int) __asm__("CharacterBuilder_1084400");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CharacterSelfie_DeletingDestructor(_QWORD* a1);
__int64
CharacterSelfie_10a6ac0_alt1(__int64 result) __asm__("CharacterSelfie_10a6ac0");
__int64 nn_os_ConvertToTimeSpan_alt1(_QWORD) __asm__("nn_os_ConvertToTimeSpan");
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83210;
extern __int128 GameData_1a83520;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6180;
extern __int64* GameData_212d448[9];
extern __int64 GameData_212c638;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float game_110d5c0(__int64, float32x4_t*);
float powf(float, float);
int __cxa_guard_acquire(__int64);
long double asin(long double, long double);
long double atan2(double, double);
void __cxa_guard_release(__int64);
void gfx_render_b3aee0(float32x4_t*);
void game_character_CharacterSelfie_Start_lambda0_Invoke(__int64 a1);

__n128 CharacterSelfie_Destructor(_QWORD* a1)
{
  __int64 v1;
  __n128 result;
  __int64 v4;
  __int64 v5;

  v1 = a1[22];
  *a1 = game_character_CharacterSelfie_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
  }
  v4 = a1[20];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

void CharacterSelfie_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = a1[22];
  *a1 = game_character_CharacterSelfie_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v3 = a1[20];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, (__int64)a1);
}

__n128 game_character_CharacterSelfie_Start(__int64 a1, char a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __n128 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  int v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;
  struct {
    __int64 v40[4];
    __int64* v41;
  } v40_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(a1 + 32);
  if (v3 == 0) {
    return result;
  }
  v4 = *(_QWORD*)(a1 + 40);
  if (*(_QWORD*)(v3 + 8) == -1 || v4 == 0) {
    return result;
  }
  CharacterBuilder_1084400_alt1(*(_QWORD*)(a1 + 40), 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (GameData_21ec7b0 != 0) {
    v10 = *(_QWORD*)(GameData_21ec7b0 + 128);
    if (v10 != 0) {
      PSEUDO_LOW_LANE128(result, n128_f32,
                         0x1.aaaaaa0000000p-1f - *(float*)(v10 + 464));
      if (LANES128(result).n128_f32[0] > 0x1.0000000000000p-1f) {
        v40_.v41 = v40_.v40;
        v40_.v40[0] = (__int64)(GameData_21320e8 + 2);
        GameRoutine_18c8060((__int64)v40_.v40),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v40_.v41 == v40_.v40) {
          v11 = 32;
        }
        else {
          if (v40_.v41 == nullptr) {
          LABEL_14:
            if (GameData_21ec7b0 != 0) {
              v12 = *(_QWORD*)(GameData_21ec7b0 + 128);
              if (v12 != 0) {
                *(_QWORD*)(v12 + 472) = 0;
                *(_DWORD*)(v12 + 464) = 0;
              }
            }
            goto LABEL_17;
          }
          v11 = 40;
        }
        (*(void (**)(__int64))(*v40_.v41 + v11))((__int64)v40_.v41),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        goto LABEL_14;
      }
    }
  }
LABEL_17:
  if ((a2 & 1) != 0) {
    v13 = 2;
  }
  else {
    v13 = 0;
  }
  v14 = *(_QWORD*)(*(_QWORD*)(v4 + 72) + 96LL);
  if (v14 != 0) {
    v15 = GameRoutine_d2b5f0(*(_QWORD*)(v14 + 32) + 72LL),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v15 & 0x100000000LL) != 0) {
      v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 24) + 72LL) +
                       104LL * (int)v15);
      if (v16 != 0) {
        v17 = *(_QWORD*)(*(_QWORD*)(v16 + 24) + 104LL);
        if (v17 != 0) {
          v18 = *(unsigned __int16*)(v17 + 76);
          if (*(_WORD*)(v17 + 76) != 0) {
            v19 = *(_QWORD*)(v17 + 40);
            v20 = *(unsigned __int16*)(v17 + 76);
            v21 = GameData_2008550[v13];
            v22 = v19;
            while ((unsigned int)strcmp(v21, *(_QWORD*)v22 + 2LL) != 0) {
              v22 += 56;
              if (--v20 == 0) {
                goto LABEL_31;
              }
            }
            if (*(unsigned __int8*)(v22 + 46) >= 2u) {
              v23 = v13 | 1;
              goto LABEL_37;
            }
          LABEL_31:
            v21 = GameData_2008550[2 - v13];
            while ((unsigned int)strcmp(v21, *(_QWORD*)v19 + 2LL) != 0) {
              v19 += 56;
              if (--v18 == 0) {
                return result;
              }
            }
            if (*(unsigned __int8*)(v19 + 46) >= 2u) {
              v23 = v13 ^ 3;
            LABEL_37:
              v24 = GameData_2008550[v23];
              *(_BYTE*)(a1 + 184) = 0;
              *(_DWORD*)(a1 + 144) = 0;
              v25 = CharacterBuilder_1085070(v4, v21),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
              v26 = v25 + 32;
              if (v25 == 0) {
                v26 = 0;
              }
              *(_QWORD*)(a1 + 128) = v26;
              v27 = CharacterBuilder_1085070(v4, v24),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
              v28 = v27 + 32;
              if (v27 == 0) {
                v28 = 0;
              }
              *(_QWORD*)(a1 + 136) = v28;
              *(_QWORD*)(a1 +
                         120) = CharacterBuilder_1084a50(v4, "Loc_C_Trans"),
                         result =
                             COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
              v30 = *a3;
              v29 = a3[1];
              if (v29 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8),
                                          1u, memory_order_relaxed);
              }
              v31 = *(_QWORD*)(a1 + 160);
              *(_QWORD*)(a1 + 152) = v30;
              *(_QWORD*)(a1 + 160) = v29;
              if (v31 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak(v31),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              v32 = *(_QWORD*)(a1 + 168);
              if (v32 != 0) {
                goto LABEL_56;
              }
              v33 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
              v33[2] = 0;
              v34 = *(_QWORD*)(a1 + 176);
              v33[8] = 0;
              *v33 = GameData_1fdb498;
              v33[1] = 0;
              *(_QWORD*)(a1 + 168) = v33 + 4;
              *(_QWORD*)(a1 + 176) = v33;
              if (v34 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
                std___1___shared_weak_count___release_weak(v34),
                    result = COERCE_AS(__typeof__(result),
                                       PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              v35 = *(_QWORD**)(a1 + 168);
              v40_.v40[0] = (__int64)GameData_2008580;
              v40_.v40[1] = a1;
              v40_.v41 = v40_.v40;
              GameRoutine_654050(v40_.v40, v35),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              if (v40_.v41 == v40_.v40) {
                v36 = 32;
              }
              else {
                if (v40_.v41 == nullptr) {
                LABEL_55:
                  v32 = *(_QWORD*)(a1 + 168);
                LABEL_56:
                  v37 = *(_QWORD*)(a1 + 176);
                  v38_.v38 = v32;
                  v38_.v39 = v37;
                  if (v37 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v37 + 16), 1u,
                        memory_order_relaxed);
                    v40_.v40[0] = v32;
                    v40_.v40[1] = v37;
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v37 + 16), 1u,
                        memory_order_relaxed);
                    GameRoutine_66ae00_alt1(v40_.v40),
                        result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
                    std___1___shared_weak_count___release_weak(v37),
                        result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
                  }
                  else {
                    v40_.v40[0] = v32;
                    v40_.v40[1] = 0;
                    GameRoutine_66ae00_alt1(v40_.v40),
                        result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
                  }
                  GameRoutine_66b000(&GameData_21c9668, &v38_.v38),
                      result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
                  if (v38_.v39 != 0) {
                    return std___1___shared_weak_count___release_weak(v38_.v39);
                  }
                  return result;
                }
                v36 = 40;
              }
              (*(void (**)(__int64))(*v40_.v41 + v36))((__int64)v40_.v41),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              goto LABEL_55;
            }
          }
        }
      }
    }
  }
  return result;
}

void CharacterSelfie_10a6ac0(__int64 a1)
{
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  if (*(_QWORD*)(a1 + 128) != 0 && *(_QWORD*)(a1 + 136) != 0 &&
      *(_QWORD*)(a1 + 120) != 0) {
    v5 = *(_QWORD*)(a1 + 168);
    *(_DWORD*)(a1 + 144) = 0;
    *(_QWORD*)(a1 + 128) = 0;
    *(_QWORD*)(a1 + 136) = 0;
    *(_QWORD*)(a1 + 120) = 0;
    if (v5 != 0) {
      v6 = *(_QWORD*)(a1 + 176);
      v12_.v12 = v5;
      v12_.v13 = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_66ae00_alt2((__int64)&v12_.v12);
      if (v12_.v13 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v12_.v13);
      }
      v8 = *(_QWORD*)(a1 + 32);
      if (v8 != 0) {
        v9 = *(_QWORD*)(a1 + 40);
        if (*(_QWORD*)(v8 + 8) != -1 && v9 != 0) {
          CharacterBuilder_1084400_alt2(v9, -1);
        }
      }
      if (GameData_21ec7b0 != 0) {
        v11 = *(_QWORD*)(GameData_21ec7b0 + 128);
        if (v11 != 0) {
          *(_WORD*)(v11 + 192) = 257;
        }
      }
    }
  }
}

__int64 CharacterSelfie_10a6b90()
{

#pragma clang fp contract(off)
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  bool v3;
  __int64 v4;
  bool v5;
  long double v6;
  __int64 v7;
  float v8;
  __int64 v9;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  bool v16;
  long double v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float32x4_t* v24;
  float32x4_t* v25;
  bool v26;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  float32x4_t v31;
  int8x16_t v32;
  int8x16_t v33;
  float v34;
  float v35;
  bool v36;
  bool v37;
  float32x4_t* v39;
  float32x4_t* v40;
  bool v41;
  float32x4_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t v46;
  int8x16_t v47;
  int8x16_t v48;
  float v49;
  float v50;
  bool v51;
  bool v52;

  v0 = (_QWORD*)GameData_21ec7b0;
  if (GameData_21ec7b0 == 0) {
    return 0;
  }
  v1 = *(_QWORD*)(GameData_21ec7b0 + 32);
  if (v1 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v2 = v0[5];
    v3 = *(_QWORD*)(v1 + 8) == -1 || v2 == 0;
    if (v3 || (v4 = *(_QWORD*)(v2 + 80)) == 0 ||
        (*(_QWORD*)(v4 + 8) != -1 ? (v5 = *(_QWORD*)(v2 + 88) == 0)
                                  : (v5 = true),
         v5 || *(_QWORD*)(v1 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v1);
    }
    else {
      *(__n128*)&v6 = std___1___shared_weak_count___release_weak(v1);
      v7 = *(_QWORD*)(*(_QWORD*)(v2 + 88) + 128LL);
      v8 = *(float*)(v7 + 144);
      if (v8 > 0x0.0p+0f) {
        v9 = GameData_21ec7b0;
        if (GameData_21ec7b0 != 0) {
          v10 = nn_os_ConvertToTimeSpan(
                    *(_QWORD*)(game_script_hub_g_frame_counter + 344), v6) /
                    1000 -
                *(_QWORD*)(v9 + 136);
          v11 = 0x1.e848000000000p+19f;
        }
        else {
          v10 = nn_os_ConvertToTimeSpan(
                    *(_QWORD*)(game_script_hub_g_frame_counter + 344), v6) /
                1000000;
          v11 = 0x1.f400000000000p+9f;
        }
        if ((float)((float)v10 / v11) < v8) {
          return 1;
        }
      }
      v25 = *(float32x4_t**)(v7 + 128);
      v24 = *(float32x4_t**)(v7 + 136);
      v26 = v25 == nullptr || v24 == nullptr;
      if (!v26 && *(_QWORD*)(v7 + 120) != 0) {
        v28 = v25[3];
        v29 = v24[3];
        v30 = vmulq_f32(v28, v28);
        v31 = vsubq_f32(v28, v29);
        v32 = vmulq_f32(v31, v31);
        LANES128(v30).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                .n64_u64[0];
        v36 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                  .n64_f32[0] < 0x1.47ae160000000p-9f;
        v33 = vmulq_f32(v29, v29);
        LANES128(v32).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
                .n64_u64[0];
        LANES128(v33).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                .n64_u64[0];
        LODWORD(v34) =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
                .n64_u32[0];
        LODWORD(v35) =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                .n64_u32[0];
        v36 = v36 && v35 < 0x1.47ae160000000p-9f;
        v37 = v36;
        if (!v37 && v34 >= 0x1.47ae160000000p-9f) {
          return 1;
        }
      }
    }
  }
  v12 = v0[7];
  if (v12 == 0) {
    return 0;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  v13 = v0[8];
  v14 = *(_QWORD*)(v12 + 8) == -1 || v13 == 0;
  if (v14 || (v15 = *(_QWORD*)(v13 + 80)) == 0 ||
      (*(_QWORD*)(v15 + 8) != -1 ? (v16 = *(_QWORD*)(v13 + 88) == 0)
                                 : (v16 = true),
       v16 || *(_QWORD*)(v12 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v12);
    return 0;
  }
  *(__n128*)&v17 = std___1___shared_weak_count___release_weak(v12);
  v18 = *(_QWORD*)(*(_QWORD*)(v13 + 88) + 128LL);
  v19 = *(float*)(v18 + 144);
  if (v19 <= 0x0.0p+0f ||
      ((v20 = GameData_21ec7b0, GameData_21ec7b0 == 0)
           ? (v21 =
                  nn_os_ConvertToTimeSpan(
                      *(_QWORD*)(game_script_hub_g_frame_counter + 344), v17) /
                  1000000,
              v22 = 0x1.f400000000000p+9f)
           : (v21 =
                  nn_os_ConvertToTimeSpan(
                      *(_QWORD*)(game_script_hub_g_frame_counter + 344), v17) /
                      1000 -
                  *(_QWORD*)(v20 + 136),
              v22 = 0x1.e848000000000p+19f),
       (float)((float)v21 / v22) >= v19)) {
    v40 = *(float32x4_t**)(v18 + 128);
    v39 = *(float32x4_t**)(v18 + 136);
    v41 = v40 == nullptr || v39 == nullptr;
    if (v41 || *(_QWORD*)(v18 + 120) == 0) {
      return 0;
    }
    v43 = v40[3];
    v44 = v39[3];
    v45 = vmulq_f32(v43, v43);
    v46 = vsubq_f32(v43, v44);
    v47 = vmulq_f32(v46, v46);
    LANES128(v45).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
            .n64_u64[0];
    v36 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
            .n64_f32[0] < 0x1.47ae160000000p-9f;
    v48 = vmulq_f32(v44, v44);
    LANES128(v47).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
            .n64_u64[0];
    LANES128(v48).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
            .n64_u64[0];
    LODWORD(v49) =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
            .n64_u32[0];
    LODWORD(v50) =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
            .n64_u32[0];
    v51 = v36 && v50 < 0x1.47ae160000000p-9f;
    v52 = v51;
    if (v52 || v49 < 0x1.47ae160000000p-9f) {
      return 0;
    }
  }
  return 1;
}

void game_character_CharacterSelfie_Start_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float32x4_t* v4;
  float32x4_t* v5;
  bool v6;
  float v8;
  __int64 v9;
  __int64 v10;
  float v11;
  _BOOL4 v12;
  _BOOL4 v13;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  int8x16_t v20;
  int8x16_t v21;
  float v22;
  float v23;
  bool v24;
  bool v25;
  float v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  float v31;
  __int64 v32;
  float32x4_t v33;
  int8x16_t v34;
  int8x16_t v35;
  int8x16_t v36;
  float64x2_t v37;
  unsigned __int64 v38;
  float32x4_t v39;
  float32x4_t v40;
  int32x4_t v41;
  int8x16_t v42;
  int8x16_t v43;
  int8x16_t v44;
  int8x16_t v45;
  float32x4_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float v51;
  float v52;
  double v53;
  float v54;
  long double v55;
  long double v56;
  long double v57;
  float v58;
  float32x4_t* v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  int8x16_t v65;
  float32x4_t v66;
  float32x4_t v67;
  int8x16_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  int8x16_t v74;
  float32x4_t v75;
  float32x4_t v76;
  int8x16_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float v80;
  float v81;
  float v82;
  int8x16_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  int8x16_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  int8x16_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  __int128 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  int v114;
  float32x4_t v115;
  __int128 v116;
  float32x4_t* v117;
  float32x4_t v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  int v123;
  __int64 v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  int8x16_t v128;
  float32x4_t v129;
  __int128 v130;
  int8x16x2_t v131;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 32);
  if (v2 == 0) {
    return;
  }
  if (*(_QWORD*)(v2 + 8) == -1 || *(_QWORD*)(v1 + 40) == 0) {
    return;
  }
  v5 = *(float32x4_t**)(v1 + 128);
  v4 = *(float32x4_t**)(v1 + 136);
  v6 = v5 == nullptr || v4 == nullptr;
  if (v6 || *(_QWORD*)(v1 + 120) == 0) {
    return;
  }
  v8 = *(float*)(v1 + 144);
  if (v8 <= 0x0.0p+0f) {
    v12 = true;
    v13 = true;
  }
  else {
    if (*GameData_212d448[0] != 0) {
      v9 = *GameData_212d448[0];
      v10 = nn_os_ConvertToTimeSpan_alt1(
                *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                           344LL)) /
                1000 -
            *(_QWORD*)(v9 + 136);
      v11 = 0x1.e848000000000p+19f;
    }
    else {
      v10 = nn_os_ConvertToTimeSpan_alt1(
                *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                           344LL)) /
            1000000;
      v11 = 0x1.f400000000000p+9f;
    }
    if ((float)((float)v10 / v11) < v8) {
      goto LABEL_41;
    }
    v5 = *(float32x4_t**)(v1 + 128);
    v4 = *(float32x4_t**)(v1 + 136);
    v13 = v4 != nullptr;
    v12 = *(_QWORD*)(v1 + 120) != 0;
  }
  if (v5 == nullptr || !v13 || !v12) {
    goto LABEL_40;
  }
  v16 = v5[3];
  v17 = v4[3];
  v18 = vmulq_f32(v16, v16);
  v19 = vsubq_f32(v16, v17);
  v20 = vmulq_f32(v19, v19);
  LANES128(v18).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
          .n64_u64[0];
  v24 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
            .n64_f32[0] < 0x1.47ae160000000p-9f;
  v21 = vmulq_f32(v17, v17);
  LANES128(v20).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LODWORD(v22) =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u32[0];
  LODWORD(v23) =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u32[0];
  v24 = v24 && v23 < 0x1.47ae160000000p-9f;
  v25 = v24;
  if (v25 || v22 < 0x1.47ae160000000p-9f) {
  LABEL_40:
    CharacterSelfie_10a6ac0_alt1(v1);
    return;
  }
LABEL_41:
  v27 = *(float*)(v1 + 144);
  v28 = GameData_212d448[0];
  if (v27 > 0x0.0p+0f) {
    if (*GameData_212d448[0] != 0) {
      v29 = *GameData_212d448[0];
      v30 = nn_os_ConvertToTimeSpan_alt1(
                *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                           344LL)) /
                1000 -
            *(_QWORD*)(v29 + 136);
      v31 = 0x1.e848000000000p+19f;
    }
    else {
      v30 = nn_os_ConvertToTimeSpan_alt1(
                *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                           344LL)) /
            1000000;
      v31 = 0x1.f400000000000p+9f;
    }
    if ((float)((float)v30 / v31) < v27) {
      goto LABEL_58;
    }
  }
  v32 = *(_QWORD*)(v1 + 128);
  v33 = vsubq_f32(*(float32x4_t*)(v32 + 48),
                  *(float32x4_t*)(*(_QWORD*)(v1 + 136) + 48LL));
  v34 = vmulq_f32(v33, v33);
  LANES128(v34).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
          .n64_f32[0] < 0x1.a36e2e0000000p-14f) {
    goto LABEL_58;
  }
  v35 = *(int8x16_t*)(v32 + 16);
  v125 = *(float32x4_t*)(v32 + 48);
  v126 = *(float32x4_t*)(*(_QWORD*)(v1 + 136) + 48LL);
  v36 = *(int8x16_t*)(v32 + 32);
  LANES128(v37).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v37).n128_u64[1] = 0xBF800000BF800000LL;
  v38 = LANES128(v36).n128_u32[1];
  LANES128(v39).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v39).n128_u64[1] = 0x3F8000003F800000LL;
  v40 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83520),
                                 COERCE_FLOAT(*(_OWORD*)v32)),
                     vnegq_f64(v37),
                     COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]), 1),
      COERCE_AS(float32x4_t, GameData_1a83210), v36, 2);
  LANES128(v36).n128_u64[0] =
      (unsigned int)HIDWORD(*(_QWORD*)v32) |
      ((unsigned __int64)LANES128(v36).n128_u32[0] << 32);
  v41 = vaddq_f32(v40, v39);
  LANES128(v35).n128_u64[0] =
      LANES128(v35).n128_u32[0] |
      ((unsigned __int64)(unsigned int)*(_QWORD*)(v32 + 8) << 32);
  LANES128(v36).n128_u64[1] = LANES128(v35).n128_u32[2];
  LANES128(v35).n128_u64[1] = v38;
  v131.val[0] = vaddq_f32(v35, v36);
  v131.val[1] = vsubq_f32(v36, v35);
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v131, COERCE_AS(int8x8_t, 0x302010003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v42).n128_i8[8] =
      vqtbl2_s8(v131, COERCE_AS(int8x8_t, 0x1B1A191807060504LL));
  LANES128(v42).n128_u64[0] =
      __PAIR64__(LANES128(v35).n128_u32[1], LANES128(v41).n128_u32[0]);
  *(int8x8_t*)&LANES128(v35).n128_i8[8] =
      vqtbl2_s8(v131, COERCE_AS(int8x8_t, 0x171615140B0A0908LL));
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v131, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v36).n128_u32[3] =
      LANES64_OF(vqtbl2_s8(v131, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u32[1];
  LANES128(v35).n128_u32[1] = LANES128(v41).n128_u32[1];
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v131, COERCE_AS(int8x8_t, 0x171615141B1A1918LL)))
          .n64_u64[0];
  LANES128(v36).n128_u32[2] = LANES128(v41).n128_u32[2];
  LANES128(v131.val[0]).n128_u32[0] =
      LANES64_OF(vqtbl2_s8(v131, COERCE_AS(int8x8_t, 0x302010013121110LL)))
          .n64_u32[0];
  v131.val[1] =
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v41).n128_u64[0]), 1);
  v44 = vdupq_laneq_s32(v41, 2);
  LANES128(v43).n128_u64[1] =
      __PAIR64__(LANES128(v41).n128_u32[3], LANES128(v131.val[0]).n128_u32[0]);
  v131.val[0] =
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v41).n128_u64[0]), 0);
  v45 = vcgeq_f32(v131.val[1], v131.val[0]);
  v131.val[0] = vbslq_s8(v45, v131.val[1], v131.val[0]);
  v131.val[1] = vcgeq_f32(v44, v131.val[0]);
  v46 = vbslq_s8(vcgeq_f32(vdupq_laneq_s32(v41, 3),
                           vbslq_s8(v131.val[1], v44, v131.val[0])),
                 v43, vbslq_s8(v131.val[1], v36, vbslq_s8(v45, v35, v42)));
  v47 = vmulq_f32(v46, v46);
  LANES128(v47).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
          .n64_u64[0];
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
          .n64_u64[0];
  LANES128(v47).n128_u64[1] = LANES128(v47).n128_u64[0];
  v48 = vrsqrteq_f32(v47);
  v49 = vmulq_f32(v48, vrsqrtsq_f32(v48, vmulq_f32(v47, v48)));
  v50 = vbicq_s8(
      vmulq_f32(v46, vmulq_f32(v49, vrsqrtsq_f32(v49, vmulq_f32(v47, v49)))),
      vceqzq_f32(v47));
  v51 = LANES128(v50).n128_f32[1];
  v127 = v50;
  v52 = LANES128(v50).n128_f32[2];
  v53 = vmuls_lane_f32(LANES128(v50).n128_f32[1],
                       COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]), 1);
  PSEUDO_LOW_LANE128(
      v46, n128_f32,
      vmuls_lane_f32(LANES128(v50).n128_f32[1], v50, 2) +
          (float)(LANES128(v50).n128_f32[0] * LANES128(v50).n128_f32[3]));
  v56 = atan2(LANES128(v46).n128_f32[0] + LANES128(v46).n128_f32[0],
              (LANES128_OF(vmulq_f32(v50, v50)).n128_f32[0] + v53) *
                      -0x1.0000000000000p+1 +
                  0x1.0000000000000p+0);
  *((_QWORD*)&v55 + 1) = LANES128(v127).n128_u64[1];
  v54 = *(double*)&v56;
  *(float*)&v56 = vmuls_lane_f32(-LANES128(v127).n128_f32[0], v127, 2);
  *(_QWORD*)&v55 = -0x1.0000000000000p+0;
  *(double*)&v56 =
      (float)(*(float*)&v56 + (float)(v51 * LANES128(v127).n128_f32[3])) +
      (float)(*(float*)&v56 + (float)(v51 * LANES128(v127).n128_f32[3]));
  if (*(double*)&v56 > 0x1.0000000000000p+0) {
    *(double*)&v56 = 0x1.0000000000000p+0;
  }
  if (*(double*)&v56 < -0x1.0000000000000p+0) {
    *(double*)&v56 = -0x1.0000000000000p+0;
  }
  v57 = asin(v56, v55);
  v58 = *(double*)&v57;
  *(float*)&v57 =
      vmuls_lane_f32(LANES128(v127).n128_f32[0],
                     COERCE_AS(float32x2_t, LANES128(v127).n128_u64[0]), 1);
  atan2((float)(*(float*)&v57 + (float)(v52 * LANES128(v127).n128_f32[3])) +
            (float)(*(float*)&v57 + (float)(v52 * LANES128(v127).n128_f32[3])),
        (v53 + vmuls_lane_f32(v52, v127, 2)) * -0x1.0000000000000p+1 +
            0x1.0000000000000p+0);
  v59 = *(float32x4_t**)(v1 + 120);
  *(float*)(v1 + 112) = v54 * 0x1.ca5dc20000000p+5f;
  v60 = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v59, LANES128(v125).n128_f32[0]), v59[1],
                         COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0]), 1),
          v59[2], v125, 2),
      v59[3]);
  *(_QWORD*)(v1 + 64) = LANES128(v60).n128_u64[0];
  v61 = *(float32x4_t*)(v1 + 64);
  LANES128(v61).n128_u64[1] = LANES128(v60).n128_u32[2];
  *(float32x4_t*)(v1 + 64) = v61;
  v62 = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(*v59, LANES128(v126).n128_f32[0]), v59[1],
                         COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0]), 1),
          v59[2], v126, 2),
      v59[3]);
  *(_QWORD*)(v1 + 80) = LANES128(v62).n128_u64[0];
  v63 = *(float32x4_t*)(v1 + 80);
  LANES128(v63).n128_u64[1] = LANES128(v62).n128_u32[2];
  v64 = vsubq_f32(v61, v63);
  *(float32x4_t*)(v1 + 80) = v63;
  v65 = vmulq_f32(v64, v64);
  LANES128(v65).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v65, v65, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
          .n64_u64[0];
  LANES128(v65).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
          .n64_u64[0];
  LANES128(v65).n128_u64[1] = LANES128(v65).n128_u64[0];
  v66 = vrsqrteq_f32(v65);
  v67 = vmulq_f32(v66, vrsqrtsq_f32(v66, vmulq_f32(v65, v66)));
  v68 = vbicq_s8(
      vmulq_f32(v64, vmulq_f32(v67, vrsqrtsq_f32(v67, vmulq_f32(v65, v67)))),
      vceqzq_f32(v65));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v128 = v68;
    v123 = __cxa_guard_acquire((__int64)&GameData_21a6190);
    v68 = v128;
    if (v123 != 0) {
      v124 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v124;
      __cxa_guard_release((__int64)&GameData_21a6190);
      v68 = v128;
    }
  }
  LANES128(v69).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v70).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v69).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v71).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v70).n128_i8[8] =
      vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v71).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v72).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v72).n128_i8[8] =
      vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v73 = vmlsq_f32(vmulq_f32(v69, v70), v72, v71);
  v74 = vmulq_f32(v73, v73);
  LANES128(v74).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v74, v74, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
          .n64_u64[0];
  LANES128(v74).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
          .n64_u64[0];
  LANES128(v74).n128_u64[1] = LANES128(v74).n128_u64[0];
  v75 = vrsqrteq_f32(v74);
  v76 = vmulq_f32(v75, vrsqrtsq_f32(v75, vmulq_f32(v74, v75)));
  v77 = vbicq_s8(
      vmulq_f32(v73, vmulq_f32(v76, vrsqrtsq_f32(v76, vmulq_f32(v74, v76)))),
      vceqzq_f32(v74));
  LANES128(v74).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v74).n128_i8[8] =
      vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v78 = vmulq_f32(v72, v74);
  LANES128(v74).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v74).n128_i8[8] =
      vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v79 = vmlsq_f32(v78, v74, v70);
  v80 = (float)(PSEUDO_UNFUSED(v58 * 0x1.0000000000000p-1f)) +
        (float)(roundf((float)(v58 * 0x1.0000000000000p-1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v80 > 0x1.921fb60000000p+0f) {
    v81 = 0x1.921fb60000000p+1f;
  LABEL_56:
    v80 = v81 - v80;
    v82 = -0x1.0000000000000p+0f;
    goto LABEL_57;
  }
  v82 = 0x1.0000000000000p+0f;
  if (v80 < -0x1.921fb60000000p+0f) {
    v81 = -0x1.921fb60000000p+1f;
    goto LABEL_56;
  }
LABEL_57:
  v83 = vmulq_f32(v68, v68);
  LANES128(v84).n128_u64[0] = LANES128(v79).n128_u64[0];
  LANES128(v83).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v83, v83, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
          .n64_u64[0];
  LANES128(v83).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
          .n64_u64[0];
  LANES128(v83).n128_u64[1] = LANES128(v83).n128_u64[0];
  v85 = vrsqrteq_f32(v83);
  v86 = vmulq_f32(v85, vrsqrtsq_f32(v85, vmulq_f32(v83, v85)));
  v87 = vbicq_s8(
      vmulq_f32(v68, vmulq_f32(v86, vrsqrtsq_f32(v86, vmulq_f32(v83, v86)))),
      vceqzq_f32(v83));
  PSEUDO_LOW_LANE128(v86, n128_f32, v80 * v80);
  v88 = vmulq_n_f32(
      v87,
      v80 *
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
                                                                                                (float)(v80 *
                                                                                                        v80))) *
                                                                                (float)(v80 *
                                                                                        v80))) *
                                                             (float)(v80 *
                                                                     v80))) *
                                             (float)(v80 * v80))) *
                          (float)(v80 * v80)) +
                  0x1.0000000000000p+0f));
  v89 = v88;
  LANES128(v90).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v84).n128_u64[1] = LANES128(v90).n128_u64[0];
  LANES128(v89).n128_f32[3] =
      v82 *
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
                                                                                            LANES128(
                                                                                                v86)
                                                                                                .n128_f32
                                                                                                    [0])) *
                                                                            LANES128(
                                                                                v86)
                                                                                .n128_f32
                                                                                    [0])) *
                                                         LANES128(v86)
                                                             .n128_f32[0])) *
                                         LANES128(v86).n128_f32[0])) *
                      LANES128(v86).n128_f32[0]) +
              0x1.0000000000000p+0f);
  v91 = vmulq_f32(v89, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v92).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v93).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v92).n128_u64[1] = LANES128(v92).n128_u64[0];
  *(int8x8_t*)&LANES128(v93).n128_i8[8] =
      vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v94 = vmulq_f32(v84, v93);
  LANES128(v84).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v95 = vmlaq_f32(vmulq_f32(v92, v91), COERCE_AS(float32x4_t, GameData_1a83800),
                  v94);
  LANES128(v94).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v84).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v91).n128_u64[0]), 1);
  LANES128(v90).n128_u64[1] = LANES128(v94).n128_u64[0];
  LANES128(v94).n128_u64[1] = LANES128(v79).n128_u64[0];
  LANES128(v96).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v96).n128_i8[8] =
      vqtbl1_s8(v91, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v97 = vmlsq_f32(vmlaq_f32(v95, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v94, v84)),
                  v96, v90);
  LANES128(v98).n128_u64[0] = LANES128(v88).n128_u64[0];
  LANES128(v89).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v89).n128_u64[1],
                                                 LANES128(v88).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v91).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v89).n128_u64[1],
                                                 LANES128(v88).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v99).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v96).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                     __PAIR128__(LANES128(v89).n128_u64[1],
                                                 LANES128(v88).n128_u64[0])),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v100).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v89).n128_u64[1] = LANES128(v89).n128_u64[0];
  LANES128(v98).n128_u64[1] = LANES128(v91).n128_u64[0];
  *(int8x8_t*)&LANES128(v99).n128_i8[8] =
      vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v91).n128_u64[1] = LANES128(v96).n128_u64[0];
  LANES128(v96).n128_u64[1] = LANES128(v88).n128_u64[0];
  *(int32x2_t*)&LANES128(v100).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v97).n128_u64[0]), 1);
  v101 = vmlaq_f32(
      vmlaq_f32(vmulq_f32(v89, v97), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v98, v99)),
      COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v96, v100));
  LANES128(v100).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v100).n128_i8[8] =
      vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v102 = vmlsq_f32(v101, v100, v91);
  *(_QWORD*)(v1 + 96) = LANES128(v102).n128_u64[0];
  v103 = *(_OWORD*)(v1 + 96);
  *((_QWORD*)&v103 + 1) = LANES128(v102).n128_u32[2];
  *(_OWORD*)(v1 + 96) = v103;
LABEL_58:
  v104 = *(_QWORD*)(v1 + 152);
  if (v104 != 0) {
    goto LABEL_59;
  }
  if (*v28 != 0) {
    v119 = *(_QWORD*)(*v28 + 128);
    if (v119 != 0) {
      v104 = *(_QWORD*)(v119 + 72);
      if (v104 != 0) {
        goto LABEL_59;
      }
    }
  }
  v120 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) != v120) {
    v121 = *(_QWORD*)(v120 - 8);
    if (v121 != 0) {
      v104 = *(_QWORD*)(v121 + 24);
      v122 = *(_QWORD*)(v121 + 32);
      if (v122 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v122 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v122 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v122 + 16LL))(v122);
          std___1___shared_weak_count___release_weak_alt1(v122);
        }
      }
      if (v104 != 0) {
      LABEL_59:
        v105 = *(_QWORD*)(v1 + 72);
        *(_QWORD*)&v130 = *(_QWORD*)(v1 + 64);
        *((_QWORD*)&v130 + 1) = v105;
        v106 = *(_QWORD*)(v1 + 88);
        v107 = *((float*)&v130 + 1);
        LANES128(v129).n128_u64[0] = *(_QWORD*)(v1 + 80);
        LANES128(v129).n128_u64[1] = v106;
        game_110d5c0((__int64)&v130, &v129);
        if (*(_BYTE*)(v1 + 184) == 1) {
          v108 = *((float*)&v130 + 1) - v107;
          v109 =
              (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 496LL) + 16LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f;
          v110 = 0x0.0p+0f;
          if (v109 > 0x0.0p+0f) {
            v111 = 0x1.99999a0000000p-1f;
            if (v108 > *(float*)(v1 + 188)) {
              v111 = 0x1.3333340000000p-2f;
            }
            v110 = 0x1.0000000000000p+0f -
                   powf(v111, v109 * 0x1.df851e0000000p+4f);
          }
          v112 = *(float*)(v1 + 188) +
                 (float)((float)(v108 - *(float*)(v1 + 188)) * v110);
          *(float*)(v1 + 188) = v112;
          *((float*)&v130 + 1) = v107 + v112;
        }
        else {
          v113 = *((float*)&v130 + 1);
          *(_BYTE*)(v1 + 184) = 1;
          *(float*)(v1 + 188) = v113 - v107;
        }
        v114 = *(_DWORD*)(v1 + 112);
        *(_DWORD*)(v104 + 8) = 0;
        *(_DWORD*)(v104 + 92) = 0;
        v115 = v129;
        *(_OWORD*)(v104 + 16) = v130;
        *(float32x4_t*)(v104 + 32) = v115;
        v116 = *(_OWORD*)(v1 + 96);
        *(_DWORD*)(v104 + 96) = v114;
        *(_DWORD*)(v104 + 92) = 0;
        *(_OWORD*)(v104 + 48) = v116;
        gfx_render_b3aee0((float32x4_t*)v104);
        if (*v28 != 0) {
          v117 = *(float32x4_t**)(*v28 + 128);
          if (v117 != nullptr) {
            v118 = *(float32x4_t*)(v104 + 16);
            *(float32x4_t*)(v104 + 32) =
                vaddq_f32(*(float32x4_t*)(v104 + 32), v117[25]);
            *(float32x4_t*)(v104 + 16) = vaddq_f32(v118, v117[25]);
          }
        }
      }
    }
  }
}

#pragma GCC visibility pop
