#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1096780(__int64, unsigned __int8*, char);
__int64 GameRoutine_10f2400(_QWORD, _QWORD);
__int64 GameRoutine_1115cc0(_QWORD, _QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212ee68[4];
void __attribute__((noreturn)) GameRoutine_d38e30(_QWORD, _QWORD);
__int64 CombatCamera_1097e40(__int64 a1);
__int64 CombatCamera_1098000(__int64 a1, __int64 a2, char a3);
__int64 game_combat_CombatCamera_SubscribeSignals_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2);
__int64 CombatCamera_10985a0(__int64* a1, __int64 a2, __int64 a3);
__int64 CombatCamera_1098760(__int64 a1, __int64 a2);
void CombatCamera_1098ae0_alt2(__int64* a1,
                               _QWORD* a2) __asm__("CombatCamera_1098ae0");
__int64
game_combat_CombatCamera_SubscribeSignals_lambda2_Invoke(__int64 result);
__int64 CombatCamera_1098ae0_alt1(_QWORD, _QWORD,
                                  long double) __asm__("CombatCamera_1098ae0");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_1098c40(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 CombatCamera_10988a0(__int64* a1, int* a2, __int64* a3, __int64 a4,
                             __n128 a5);
__attribute__((swiftcall)) void GameRoutine_109da60(PSEUDO_X8, _QWORD, float);
__int64 CharacterSelfie_10a6b90(void);
__int64 CombatCamera_1097e40_alt1(_QWORD) __asm__("CombatCamera_1097e40");
__int64 GameRoutine_1096780_alt1(void) __asm__("GameRoutine_1096780");
__int64 GameRoutine_10ac700(_QWORD, _QWORD, float);
__int64 GameRoutine_10be5c0(_QWORD);
__int64 GameRoutine_10bfbf0(_QWORD);
__int64 GameRoutine_b3aee0(void);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*game_combat_CombatCamera_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64* GameData_212fff0[3];
extern __int64 GameData_212d270;
extern __int64 GameData_21d8778;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_2235738;
extern __int64 game_g_frame_clock;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float GameRoutine_10ac520(__int64, _DWORD*, int);
__n128 CombatCamera_Destructor(_QWORD* a1);
__int64 CombatCamera_1097a60(__int64 result, float a2);
void game_combat_CombatCamera_SubscribeSignals_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64* CombatCamera_1098ae0(__int64* result, _QWORD* a2);

__n128 CombatCamera_Destructor(_QWORD* a1)
{
  __int64 v2;
  __n128 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *a1 = game_combat_CombatCamera_vtable;
  v2 = a1[9];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    a1[9] = 0;
  }
  if (a1[57] != 0) {
    a1[57] = 0;
    v4 = *(_QWORD*)(game_g_frame_clock + 13224);
    v5 = *(_QWORD*)(v4 + 48);
    v6 = *(_QWORD*)(v4 + 56);
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
      v7 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 128LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak(v6);
      }
    }
    else {
      v7 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 128LL);
    }
    if (*(_BYTE*)(v7 + 256) == 1) {
      *(_BYTE*)(v7 + 256) = 0;
    }
  }
  v8 = a1[55];
  if (v8 != 0) {
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v9 = a1[34];
  a1[34] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v10 = a1[5];
  if (v10 == 0) {
    goto LABEL_29;
  }
  v11 = a1[6];
  if (v10 == v11) {
  LABEL_26:
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
    goto LABEL_29;
  }
  do {
    v12 = *(_QWORD**)(v11 - 16);
    if ((_QWORD*)(v11 - 48) == v12) {
      v13 = 32;
    }
    else {
      if (v12 == nullptr) {
        goto LABEL_23;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_23:
    v14 = *(_QWORD*)(v11 - 64);
    if (v14 != 0) {
      result = std___1___shared_weak_count___release_weak(v14);
    }
    v11 -= 80;
  } while (v11 != v10);
  v15 = a1[5];
  a1[6] = v10;
  if (v15 != 0) {
    goto LABEL_26;
  }
LABEL_29:
  v17 = a1[4];
  *a1 = kaneko_WPHolder_vtable;
  if (v17 != 0) {
    result = std___1___shared_weak_count___release_weak(v17);
  }
  v18 = a1[2];
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak(v18);
  }
  return result;
}

__int64 CombatCamera_1097a60(__int64 result, float a2)
{
  float v2;
  float32x4_t* v3;
  float v4;
  __int64 v5;
  float v6;
  float* v7;
  unsigned __int64 v8;
  float v9;
  float32x4_t v10;
  float v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  int16x4_t v16;
  unsigned __int32 v17;
  float32x4_t v18;
  float v19;
  unsigned __int64 v20;
  float32x4_t v21;
  int8x16_t v22;
  unsigned __int64 v23;
  unsigned __int32 v24;
  float32x4_t v25;
  unsigned __int64 v26;
  float v27;
  float v28;
  float v29;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  bool v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  int v49;
  __int64 (*v50)(unsigned __int64);
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float v57;
  float32x4_t v58;
  __int64 v59;
  __int64 vars0;
  __int64 vars8;

  v2 = *(float*)(result + 464);
  v3 = (float32x4_t*)result;
  if (v2 > 0.0f) {
    v4 = v2 + (float)((float)(*(float*)(game_script_hub_g_frame_counter + 48) *
                              -0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
    *(float*)(result + 464) = v4;
    if (v4 <= 0.0f) {
      v5 = *(_QWORD*)(result + 472);
      *(_DWORD*)(result + 464) = 0;
      if (v5 != 0) {
        if (GameData_21ec7b0 != 0) {
          result = *(_QWORD*)(GameData_21ec7b0 + 128);
          if (result != 0) {
            v6 = a2;
            result = GameRoutine_1096780_alt1();
            a2 = v6;
          }
        }
        LANES128(v3[29]).n128_u64[1] = 0;
        LANES128(v3[29]).n128_u32[0] = 0;
      }
    }
  }
  if (a2 > 0.0f && LANES128(v3[11]).n128_u64[0] != 0) {
    if ((CharacterSelfie_10a6b90() & 1) != 0) {
      v7 = (float*)GameData_2235738;
      if (GameData_2235738 == 0) {
        goto LABEL_44;
      }
    LABEL_33:
      v29 = v7[247];
      if (v29 < 0.0f || v29 == v7[248]) {
      LABEL_44:
        GameRoutine_10ac700(
            &v3[22], LANES128(v3[4]).n128_u64[1],
            (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              48LL) *
                    0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f);
        v36 = LANES128(v3[4]).n128_u64[1];
        result = (__int64)&v3[27];
        if (LANES128(v3[28]).n128_u64[1] != 0) {
          v59 = vars0;
          vars0 = vars8;
          v37 = LANES128(v3[27]).n128_u64[1];
          if (v37 == 0 || (*(_QWORD*)(v37 + 8) != -1
                               ? (v38 = LANES128(v3[28]).n128_u64[0] == 0)
                               : (v38 = true),
                           v38)) {
            LANES128(v3[28]).n128_u64[1] = 0;
            v39 = *(_QWORD*)(game_g_frame_clock + 13224);
            v40 = *(_QWORD*)(v39 + 48);
            v41 = *(_QWORD*)(v39 + 56);
            if (v41 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                        memory_order_relaxed);
              v42 = *(_QWORD*)(*(_QWORD*)(v40 + 8) + 128LL);
              if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)v41 + 16LL))(
                    v41, v36);
                result = std___1___shared_weak_count___release_weak_alt1(v41);
              }
            }
            else {
              v42 = *(_QWORD*)(*(_QWORD*)(v40 + 8) + 128LL);
            }
            if (*(_BYTE*)(v42 + 256) == 1) {
              *(_BYTE*)(v42 + 256) = 0;
            }
          }
          else {
            v43 = *(_QWORD*)(game_g_frame_clock + 13224);
            v44 = *(_QWORD*)(v43 + 48);
            v45 = *(_QWORD*)(v43 + 56);
            if (v45 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                        memory_order_relaxed);
              v46 = *(_QWORD*)(*(_QWORD*)(v44 + 8) + 128LL);
              if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v47 = result;
                v48 = v36;
                (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
                std___1___shared_weak_count___release_weak_alt1(v45);
                result = v47;
                v36 = v48;
              }
            }
            else {
              v46 = *(_QWORD*)(*(_QWORD*)(v44 + 8) + 128LL);
            }
            v49 = *(_DWORD*)(v46 + 288);
            *(_BYTE*)(v46 + 256) = 1;
            *(_DWORD*)(v46 + 252) = v49;
            v50 = *(__int64 (**)(unsigned __int64))(*(_QWORD*)v36 + 16LL);
            v58 = *(float32x4_t*)(*(_QWORD*)(result + 24) + 48LL);
            result = v50(v36);
            if (*(_BYTE*)(v46 + 256) == 1) {
              v55 = v58;
              *(_BYTE*)(v46 + 256) = 1;
              v56 = vaddq_f32(
                  v54,
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v51, LANES128(v55).n128_f32[0]), v52,
                          COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]), 1),
                      v53, v55, 2));
              LANES128(v56).n128_u32[0] = 5.0f;
              if (LANES128(v56).n128_f32[2] <= -5.0f) {
                LANES128(v56).n128_f32[0] = -LANES128(v56).n128_f32[2];
              }
              *(_DWORD*)(v46 + 252) = LANES128(v56).n128_u32[0];
            }
          }
        }
        return result;
      }
      v31 = v29 * *(float*)(GameData_21d8778 + 440);
      v32 = *(_QWORD*)(game_g_frame_clock + 13224);
      v33 = *(_QWORD*)(v32 + 48);
      v34 = *(_QWORD*)(v32 + 56);
      if (v34 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                  memory_order_relaxed);
        v35 = *(_QWORD*)(*(_QWORD*)(v33 + 8) + 168LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v31 > 0.0f) {
          LABEL_40:
            *(float*)(v35 + 92) = v31;
            *(_BYTE*)(v35 + 96) = 1;
            goto LABEL_44;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
          std___1___shared_weak_count___release_weak_alt1(v34);
          if (v31 > 0.0f) {
            goto LABEL_40;
          }
        }
      }
      else {
        v35 = *(_QWORD*)(*(_QWORD*)(v33 + 8) + 168LL);
        if (v31 > 0.0f) {
          goto LABEL_40;
        }
      }
      if (*(_BYTE*)(v35 + 96) == 1) {
        *(_BYTE*)(v35 + 96) = 0;
      }
      goto LABEL_44;
    }
    GameRoutine_10be5c0(&v3[5]);
    if (LANES128(v3[12]).n128_u8[0] == 1) {
      LANES128(v3[12]).n128_u8[0] = 0;
    }
    else {
      v8 = LANES128(v3[11]).n128_u64[0];
      if (v8 != 0) {
        v9 = *(float*)(v8 + 88);
      LABEL_19:
        v10 = v3[9];
        v11 = 1.0f - v9;
        v12 =
            vaddq_f32(v3[18], vmulq_n_f32(vsubq_f32(v3[7], v3[18]), 1.0f - v9));
        v13 = vaddq_f32(v3[19], vmulq_n_f32(vsubq_f32(v3[8], v3[19]), v11));
        LANES128(v3[18]).n128_u64[0] = LANES128(v12).n128_u64[0];
        LANES128(v3[19]).n128_u64[0] = LANES128(v13).n128_u64[0];
        v14 = v3[18];
        v15 = v3[19];
        LANES128(v14).n128_u64[1] = LANES128(v12).n128_u32[2];
        LANES128(v15).n128_u64[1] = LANES128(v13).n128_u32[2];
        LANES128(v12).n128_u32[0] = LANES128(v3[21]).n128_u32[0];
        LANES128(v13).n128_f32[0] =
            LANES128(v3[10]).n128_f32[0] - LANES128(v12).n128_f32[0];
        v3[18] = v14;
        v3[19] = v15;
        LANES128(v3[21]).n128_f32[0] = LANES128(v12).n128_f32[0] +
                                       (float)(LANES128(v13).n128_f32[0] * v11);
        LANES64(v16).n64_u64[0] =
            LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v3[20], v10)))).n64_u64[0];
        if ((LANES64(v16).n64_u8[0] & 1) != 0 ||
            (LANES64(v16).n64_u8[2] & 1) != 0 ||
            (LANES64(v16).n64_u8[4] & 1) != 0) {
          v57 = v11;
          GameRoutine_109da60((void*)(&v58), &v3[20], v11);
          v11 = v57;
          v17 = LANES128(v58).n128_u32[2];
          LANES128(v3[20]).n128_u64[0] = LANES128(v58).n128_u64[0];
          v18 = v3[20];
          LANES128(v18).n128_u64[1] = v17;
          v3[20] = v18;
        }
        v19 = LANES128(v3[10]).n128_f32[2];
        v20 = LANES128(v3[11]).n128_u64[0];
        LANES128(v3[21]).n128_f32[1] =
            LANES128(v3[21]).n128_f32[1] +
            (float)((float)(LANES128(v3[10]).n128_f32[1] -
                            LANES128(v3[21]).n128_f32[1]) *
                    v11);
        LANES128(v3[21]).n128_f32[2] =
            LANES128(v3[21]).n128_f32[2] +
            (float)((float)(v19 - LANES128(v3[21]).n128_f32[2]) * v11);
        if (v20 != 0 && *(_BYTE*)(v20 + 97) == 1 &&
            (GameRoutine_10bfbf0(&v3[5]) & 1) == 0) {
          CombatCamera_1097e40_alt1(v3);
        }
        v21 = vsubq_f32(v3[19], v3[18]);
        v22 = vmulq_f32(v21, v21);
        LANES128(v22).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
                .n64_f32[0] >= 0x1.47ae140000000p-7f) {
          v23 = LANES128(v3[4]).n128_u64[1];
          v24 = LANES128(v3[21]).n128_u32[0];
          *(_DWORD*)(v23 + 8) = 0;
          *(_DWORD*)(v23 + 92) = 0;
          *(float32x4_t*)(v23 + 16) = v3[18];
          *(float32x4_t*)(v23 + 32) = v3[19];
          v25 = v3[20];
          *(_DWORD*)(v23 + 96) = v24;
          *(_DWORD*)(v23 + 92) = 0;
          *(float32x4_t*)(v23 + 48) = v25;
          GameRoutine_b3aee0();
        }
        v26 = LANES128(v3[4]).n128_u64[1];
        v7 = (float*)*GameData_212fff0[0];
        if (*GameData_212fff0[0] != 0) {
          v27 = v7[246];
        }
        else {
          v27 = 0.0f;
        }
        v28 = *(float*)(v26 + 96) + v27;
        *(_DWORD*)(v26 + 92) = 0;
        *(float*)(v26 + 96) = v28;
        if (v7 == nullptr) {
          goto LABEL_44;
        }
        goto LABEL_33;
      }
    }
    v9 = 0.0f;
    goto LABEL_19;
  }
  return result;
}

__int64 CombatCamera_1097e40(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  *(_BYTE*)(a1 + 488) = 1;
  v2 = *(_QWORD*)(a1 + 176);
  v3 = GameData_212ee68[0];
  if (v2 != 0) {
    v4 = v2 + 1;
    if (((*(_BYTE*)v2 & 1) == 0 || (v4 = *(_QWORD*)(v2 + 16)) != 0) &&
        (unsigned int)strcmp(v4, "WallShot") == 0) {
      v5 = *(_QWORD*)(*v3 + 8);
      v6 = *(_QWORD*)(*v3 + 16);
      if (v6 == v5) {
      LABEL_9:
        v5 = 0;
      }
      else {
        v7 = 0x4EC4EC4EC4EC4EC5LL * ((v6 - v5) >> 3);
        while (*(_DWORD*)(v5 + 24) != -842878802) {
          --v7;
          v5 += 104;
          if (v7 == 0) {
            goto LABEL_9;
          }
        }
      }
      if ((GameRoutine_1096780(a1, (unsigned __int8*)v5, 0) & 1) != 0) {
        return 1;
      }
    }
  }
  v8 = *(_QWORD*)(a1 + 272);
  *(_DWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = *v3;
  *(_QWORD*)(a1 + 176) = 0;
  *(_BYTE*)(a1 + 194) = 0;
  v10 = *(_QWORD*)(v9 + 8);
  v11 = *(_QWORD*)(v9 + 16);
  if (v11 == v10) {
  LABEL_17:
    v10 = 0;
  }
  else {
    v12 = 0x4EC4EC4EC4EC4EC5LL * ((v11 - v10) >> 3);
    while (*(_DWORD*)(v10 + 24) != 2052559) {
      --v12;
      v10 += 104;
      if (v12 == 0) {
        goto LABEL_17;
      }
    }
  }
  if ((GameRoutine_1096780(a1, (unsigned __int8*)v10, 0) & 1) != 0) {
    return 1;
  }
  v14 = *(_QWORD*)(*v3 + 8);
  v15 = *(_QWORD*)(*v3 + 16);
  if (v15 == v14) {
  LABEL_24:
    v14 = 0;
  }
  else {
    v16 = 0x4EC4EC4EC4EC4EC5LL * ((v15 - v14) >> 3);
    while (*(_DWORD*)(v14 + 24) != 1890962995) {
      --v16;
      v14 += 104;
      if (v16 == 0) {
        goto LABEL_24;
      }
    }
  }
  return GameRoutine_1096780(a1, (unsigned __int8*)v14, 0);
}

__int64 CombatCamera_1098000(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  char v4;
  unsigned __int8* v5;

  if ((a2 & 0x80000000) != 0) {
    v4 = a3 & 1;
    v5 = nullptr;
  }
  else {
    v3 = *(_QWORD*)(*GameData_212ee68[0] + 8);
    if (0x4EC4EC4EC4EC4EC5LL *
            ((*(_QWORD*)(*GameData_212ee68[0] + 16) - v3) >> 3) <=
        (unsigned __int64)(unsigned int)a2) {
      GameRoutine_d38e30(a1, a2);
    }
    v4 = a3 & 1;
    v5 = (unsigned __int8*)(v3 + 104LL * (unsigned int)a2);
  }
  return GameRoutine_1096780(a1, v5, v4);
}

void game_combat_CombatCamera_SubscribeSignals_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  int v4;
  float v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_DWORD*)(*a2 + 32);
  if (v4 != 1) {
    if (v4 == 0) {
      GameRoutine_10ac520(
          v3 + 352, (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL) + 304LL),
          *(_DWORD*)(v2 + 36));
    }
    return;
  }
  v5 = *(float*)(v3 + 384);
  v6 = *(int*)(v2 + 36);
  if (v5 < 0x0.0p+0f ||
      v5 >= (float)(*(float*)(v3 + 376) +
                    (float)(*(float*)(v3 + 368) +
                            fmaxf(*(float*)(v3 + 372), 0x0.0p+0f)))) {
    v7 = *(_QWORD*)GameData_212d270;
    v8 = (float)*(int*)(*(_QWORD*)GameData_212d270 + 120LL) *
         0x1.1111120000000p-6f;
    if ((float)(v8 * 0x1.99999a0000000p-4f) < 0x0.0p+0f ||
        (float)(v8 * 0x1.99999a0000000p-3f) < 0x0.0p+0f) {
      if (*(float*)(v3 + 352) != *(float*)(v3 + 356)) {
      LABEL_11:
        v12 = *(float*)(v3 + 372);
        *(_DWORD*)(v3 + 384) = 0;
        *(_BYTE*)(v3 + 380) = v12 < 0x0.0p+0f;
      }
    }
    else {
      v9 = *(float*)(v7 + 124);
      v10 = *(float*)(v7 + 4 * v6 + 128);
      *(float*)(v3 + 372) = v8;
      *(_DWORD*)(v3 + 352) = 0;
      *(float*)(v3 + 368) = v8 * 0x1.99999a0000000p-4f;
      *(float*)(v3 + 376) = v8 * 0x1.99999a0000000p-3f;
      *(_QWORD*)(v3 + 360) = 0xB0000000BLL;
      *(_DWORD*)(v3 + 384) = -1082130432;
      v11 = v10 * v9;
      *(float*)(v3 + 356) = v11;
      if (v11 != 0x0.0p+0f) {
        goto LABEL_11;
      }
    }
    *(_DWORD*)(v3 + 388) = -1082130432;
  }
}

__int64 game_combat_CombatCamera_SubscribeSignals_lambda1_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  if (*(_BYTE*)(v2 + 32) == 1) {
    v5 = *(_BYTE*)(v2 + 40);
    v6 = *(_QWORD*)(v2 + 56);
    v7 = v2 + 41;
    v8 = v4 + 432;
    if ((v5 & 1) != 0) {
      v9 = v6;
    }
    else {
      v9 = v7;
    }
  }
  else {
    v8 = v4 + 432;
    v9 = 0;
  }
  return GameRoutine_1115cc0(v8, v3, v9);
}

__int64 CombatCamera_10985a0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;

  if (a2 == a3) {
    return a2;
  }
  v4 = a1[1];
  if (a3 == v4) {
    v19 = a2;
    if (a2 == v4) {
      goto LABEL_20;
    }
  LABEL_23:
    while (1) {
      v21 = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == v21) {
        break;
      }
      if (v21 != nullptr) {
        v22 = 40;
      LABEL_27:
        (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
      }
      v23 = *(_QWORD*)(v4 - 64);
      if (v23 != 0) {
        std___1___shared_weak_count___release_weak(v23);
      }
      v4 -= 80;
      if (v4 == v19) {
        goto LABEL_20;
      }
    }
    v22 = 32;
    goto LABEL_27;
  }
  v6 = *a1;
  v7 = *a1 + a2;
  v8 = -*a1;
  v9 = *a1 + a3;
  do {
    v10 = v9 + v8;
    v11 = v7 + v8;
    *(_DWORD*)v11 = *(_DWORD*)(v9 + v8);
    v12 = *(_QWORD*)(v9 + v8 + 8);
    v13 = *(_QWORD*)(v9 + v8 + 16);
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    v14 = *(_QWORD*)(v7 + v8 + 16);
    *(_QWORD*)(v11 + 8) = v12;
    *(_QWORD*)(v11 + 16) = v13;
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v15 = *(_QWORD**)(v11 + 64);
    *(_QWORD*)(v11 + 64) = 0;
    if ((_QWORD*)(v11 + 32) == v15) {
      v16 = 32;
    }
    else {
      if (v15 == nullptr) {
        goto LABEL_13;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
  LABEL_13:
    v17 = v9 + v8;
    v18 = *(_QWORD*)(v9 + v8 + 64);
    if (v18 != 0) {
      if (v10 + 32 == v18) {
        *(_QWORD*)(v11 + 64) = v11 + 32;
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v17 + 64) + 24LL))(
            *(_QWORD*)(v17 + 64), v11 + 32);
      }
      else {
        *(_QWORD*)(v11 + 64) = v18;
        *(_QWORD*)(v17 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v11 + 64) = 0;
    }
    v9 += 80;
    v7 += 80;
  } while (v9 + v8 != v4);
  v4 = a1[1];
  v19 = v7 - v6;
  if (v7 - v6 != v4) {
    goto LABEL_23;
  }
LABEL_20:
  a1[1] = v19;
  return a2;
}

__int64 CombatCamera_1098760(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v3 = a1;
  if (a1 == a2) {
  LABEL_7:
    if (v3 == a2) {
      return v3;
    }
    for (i = v3 + 80;; i += 80) {
      if (i == a2) {
        return v3;
      }
      if (*(_DWORD*)i != 0) {
        v6 = *(_QWORD*)(i + 16);
        if (v6 != 0 && *(_QWORD*)(v6 + 8) != -1) {
          break;
        }
      }
    LABEL_11:;
    }
    *(_DWORD*)v3 = *(_DWORD*)i;
    v7 = *(_QWORD*)(i + 8);
    v8 = *(_QWORD*)(i + 16);
    *(_QWORD*)(i + 8) = 0;
    *(_QWORD*)(i + 16) = 0;
    v9 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 8) = v7;
    *(_QWORD*)(v3 + 16) = v8;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = *(_QWORD**)(v3 + 64);
    *(_QWORD*)(v3 + 64) = 0;
    if (v10 == (_QWORD*)(v3 + 32)) {
      v11 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_23:
        v12 = *(_QWORD*)(i + 64);
        if (v12 != 0) {
          if (i + 32 == v12) {
            *(_QWORD*)(v3 + 64) = v3 + 32;
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(i + 64) + 24LL))(
                *(_QWORD*)(i + 64), v3 + 32);
          }
          else {
            *(_QWORD*)(v3 + 64) = v12;
            *(_QWORD*)(i + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v3 + 64) = 0;
        }
        v3 += 80;
        goto LABEL_11;
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
    goto LABEL_23;
  }
  do {
    if (*(_DWORD*)v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(v3 + 16);
    if (v4 == 0 || *(_QWORD*)(v4 + 8) == -1) {
      goto LABEL_7;
    }
    v3 += 80;
  } while (v3 != a2);
  return a2;
}

__int64 CombatCamera_10988a0(__int64* a1, int* a2, __int64* a3, __int64 a4,
                             __n128 a5)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;

  v5 = *a1;
  v6 = a1[1] - *a1;
  v7 = 1 - 0x3333333333333333LL * (v6 >> 4);
  if (v7 > 0x333333333333333LL) {
    GameRoutine_1098c40();
  }
  v8 = a1[2];
  v34 = a1 + 2;
  v13 = fw_memory_g_heap_manager_ptr;
  v14 = 0xCCCCCCCCCCCCCCCDLL * ((v8 - v5) >> 4);
  if (2 * v14 > v7) {
    v7 = 2 * v14;
  }
  if (v14 >= 0x199999999999999LL) {
    v15 = 0x333333333333333LL;
  }
  else {
    v15 = v7;
  }
  if (v15 != 0) {
    if (v15 > 0x333333333333333LL) {
      GameRoutine_60a210(a1);
    }
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80 * v15, 16, 0);
  }
  else {
    v16 = 0;
  }
  v17 = *a2;
  v18 = v16 + v6;
  v30 = v16;
  v31 = v18;
  v33 = v16 + 80 * v15;
  v19 = *a3;
  v20 = a3[1];
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v18 = v17;
    *(_QWORD*)(v18 + 8) = v19;
    *(_QWORD*)(v18 + 16) = v20;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    v21 = *(_QWORD*)(a4 + 32);
    if (v21 != 0) {
      goto LABEL_13;
    }
  }
  else {
    *(_DWORD*)v18 = v17;
    *(_QWORD*)(v18 + 8) = v19;
    *(_QWORD*)(v18 + 16) = 0;
    v21 = *(_QWORD*)(a4 + 32);
    if (v21 != 0) {
    LABEL_13:
      if (v21 == a4) {
        *(_QWORD*)(v18 + 64) = v18 + 32;
        (*(void (**)(__int64))(*(_QWORD*)v21 + 24LL))(v21);
        if (v20 == 0) {
          goto LABEL_19;
        }
      }
      else {
        *(_QWORD*)(v18 + 64) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        if (v20 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_18;
    }
  }
  *(_QWORD*)(v18 + 64) = 0;
  if (v20 != 0) {
  LABEL_18:
    a5 = std___1___shared_weak_count___release_weak(v20);
  }
LABEL_19:
  v32 = v18 + 80;
  CombatCamera_1098ae0_alt1(a1, &v30, *(long double*)&a5);
  v22 = a1[1];
  v23 = v31;
  while (1) {
    v24 = v32;
    if (v23 == v32) {
      break;
    }
    v32 -= 80;
    v25 = *(_QWORD**)(v24 - 16);
    if (v25 == (_QWORD*)(v24 - 48)) {
      v26 = 32;
      goto LABEL_25;
    }
    if (v25 != nullptr) {
      v26 = 40;
    LABEL_25:
      (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
    }
    v27 = *(_QWORD*)(v24 - 64);
    if (v27 != 0) {
      std___1___shared_weak_count___release_weak(v27);
    }
  }
  if (v30 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v28);
  }
  return v22;
}

__int64* CombatCamera_1098ae0(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *result;
  v2 = (_QWORD*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v2;
  if (v2 != (_QWORD*)*result) {
    v7 = 0;
    do {
      v8 = v3 + v7;
      v9 = v6 + v7;
      *(_DWORD*)v9 = *(_DWORD*)(v3 + v7);
      *(_QWORD*)(v9 + 8) = *(_QWORD*)(v3 + v7 + 8);
      *(_QWORD*)(v9 + 16) = *(_QWORD*)(v3 + v7 + 16);
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 16) = 0;
      v10 = *(_QWORD*)(v3 + v7 + 64);
      if (v10 != 0) {
        if (v8 + 32 == v10) {
          *(_QWORD*)(v9 + 64) = v9 + 32;
          (*(void (**)(_QWORD))(**(_QWORD**)(v8 + 64) + 24LL))(
              *(_QWORD*)(v8 + 64));
        }
        else {
          *(_QWORD*)(v9 + 64) = v10;
          *(_QWORD*)(v8 + 64) = 0;
        }
      }
      else {
        *(_QWORD*)(v9 + 64) = 0;
      }
      v7 += 80;
    } while ((_QWORD*)(v3 + v7) != v2);
    v11 = (_QWORD*)(v3 + 32);
    while (1) {
      v13 = (_QWORD*)v11[4];
      if (v11 == v13) {
        break;
      }
      if (v13 != nullptr) {
        v14 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
      }
      result = (__int64*)*(v11 - 2);
      if (result != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak_alt2(
            (__int64)result);
      }
      v12 = v11 + 6;
      v11 += 10;
      if (v12 == v2) {
        goto LABEL_18;
      }
    }
    v14 = 32;
    goto LABEL_15;
  }
LABEL_18:
  a2[1] = v6;
  v15 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v15;
  v16 = v5[1];
  v5[1] = a2[2];
  a2[2] = v16;
  v17 = v5[2];
  v5[2] = a2[3];
  a2[3] = v17;
  *a2 = a2[1];
  return result;
}

__int64 game_combat_CombatCamera_SubscribeSignals_lambda2_Invoke(__int64 result)
{
  unsigned __int8* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;

  v1 = *(unsigned __int8**)(*(_QWORD*)(result + 8) + 176LL);
  if (v1 != nullptr) {
    v2 = *v1;
    v3 = *((_QWORD*)v1 + 1);
    if ((v2 & 1) == 0) {
      v3 = v2 >> 1;
    }
    if (v3 >= 8) {
      if ((v2 & 1) != 0) {
        v4 = *((_QWORD**)v1 + 2);
      }
      else {
        v4 = v1 + 1;
      }
      if (*v4 == 0x746F68536C6C6157LL) {
        return GameRoutine_10f2400(0, 1);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
