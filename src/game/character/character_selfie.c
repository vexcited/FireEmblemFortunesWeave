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
__int64 CharacterSelfie_DeletingDestructor(_QWORD* a1);
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

__int64 CharacterSelfie_DeletingDestructor(_QWORD* a1)
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
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[20];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
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
  __int64 v1;
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  if (*(_QWORD*)(a1 + 128) != 0 && *(_QWORD*)(a1 + 136) != 0 &&
      *(_QWORD*)(a1 + 120) != 0) {
    v5 = *(_QWORD*)(a1 + 168);
    *(_DWORD*)(a1 + 144) = 0;
    *(_QWORD*)(a1 + 128) = 0;
    *(_QWORD*)(a1 + 136) = 0;
    *(_QWORD*)(a1 + 120) = 0;
    if (v5 != 0) {
      v14 = v1;
      v15 = v2;
      v6 = *(_QWORD*)(a1 + 176);
      v12 = v5;
      v13 = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_66ae00(&v12);
      if (v13 != 0) {
        std___1___shared_weak_count___release_weak(v13);
      }
      v8 = *(_QWORD*)(a1 + 32);
      if (v8 != 0) {
        v9 = *(_QWORD*)(a1 + 40);
        if (*(_QWORD*)(v8 + 8) != -1 && v9 != 0) {
          CharacterBuilder_1084400(v9, 0xFFFFFFFFLL);
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

#pragma GCC visibility pop
