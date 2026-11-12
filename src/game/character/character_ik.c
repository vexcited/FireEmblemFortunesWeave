#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool GameRoutine_108cdc0(int);
extern int GameData_21d87e8;
__int64 game_character_CharacterIK_Startup_lambda0_Invoke(__int64 result);
bool game_character_CharacterIK_Startup_lambda1_Invoke(__int64 a1, int* a2);
__n128 GameRoutine_109d900(unsigned int*);
__n128 GameRoutine_109ded0(__int128*, int8x16_t*, __int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char* GameRoutine_10e26e0(__int64);
extern _DWORD* GameData_212d280;
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterIK_vtable[])();
extern __int64 GameData_21d8778;
extern __int64 fw_memory_g_heap_manager_ptr;
float powf(long double, float);
void CharacterIK_Unknown6(int8x16_t* a1, long double a2);
__n128 CharacterIK_Destructor(__int64 a1);

void CharacterIK_Unknown6(int8x16_t* a1, long double a2)
{
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  int8x16_t* v7;
  float v8;
  float v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  float32x4_t* v15;
  float v16;
  int8x16_t* v17;
  float v19;
  float v20;
  unsigned __int32 v21;
  unsigned __int32 v22;
  float v23;
  float v24;
  int8x16_t* v25;
  float v26;
  float v27;
  _DWORD* v28;
  int8x16_t* v29;
  int8x16_t v30;
  int8x16_t v31;
  long double v32;
  int8x16_t* v33;
  char v34;
  float v35;
  float v36;
  float v37;
  float v38;
  unsigned __int32 v39;
  _QWORD* v40;
  _QWORD* v41;
  float v42;
  float32x4_t v43;
  float32x4_t* v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  float32x4_t v48;
  float v49;
  __int128 v50;
  __int64 v51;
  __int64 v52;
  char v53;

  v2 = (float)(*(float*)(*(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 496) + 16LL) *
               0x1.0aef000000000p+4) /
       0x1.f400000000000p+9;
  if (v2 <= 0.0) {
    if (LANES128(a1[4]).n128_f32[0] <= 0.0) {
      return;
    }
  LABEL_21:
    v11 = LANES128(a1[2]).n128_u64[0];
    if (v11 == 0) {
      return;
    }
    v12 = *(_QWORD*)(v11 + 8);
    v13 = LANES128(a1[2]).n128_u64[1];
    if (v12 == -1 || v13 == 0) {
      return;
    }
    if (*(_DWORD*)(v13 + 384) != 0 || (LANES128(a1[4]).n128_u8[12] & 1) != 0) {
      LODWORD(a2) = 0;
      v20 = 1.0;
      LANES128(a1[13]).n128_u32[0] = 1120403456;
      v17 = a1 + 13;
      v19 = 0.0;
      v21 = LANES128(a1[3]).n128_u32[2];
      LANES128(a1[4]).n128_u8[12] = 0;
      if (v21 != 0) {
        v20 = 0.0;
      }
      LANES128(a1[4]).n128_u8[8] = 1;
      LANES128(a1[3]).n128_f32[3] = v20;
      LANES128(a1[4]).n128_f32[0] = v20;
      v16 = 0x1.9000000000000p+6;
    }
    else {
      v15 = (float32x4_t*)LANES128(*(a1)).n128_u64[1];
      v16 = (float)(*(float*)(LANES128(v15[31]).n128_u64[0] + 16) *
                    0x1.0aef000000000p+4) /
            0x1.f400000000000p+9;
      LODWORD(a2) = 0;
      LANES128(a1[13]).n128_f32[0] = v16;
      v17 = a1 + 13;
      if (v16 > 0.0 && v16 < 0x1.99999a0000000p-4) {
        a2 = COERCE_LONG_DOUBLE(vsubq_f32(v15[19], a1[9]));
        v22 = LANES128_OF(vextq_s8(*(int8x16_t*)&a2, *(int8x16_t*)&a2, 8u))
                  .n128_u32[0];
        *(float32x2_t*)&a2 = vadd_f32(
            vmul_f32(COERCE_AS(float32x2_t, v22), COERCE_AS(float32x2_t, v22)),
            vmul_f32(COERCE_AS(float32x2_t, LODWORD(a2)),
                     COERCE_AS(float32x2_t, LODWORD(a2))));
        *(float*)&a2 = LANES64_OF(vsqrt_f32(vpadd_f32(*(float32x2_t*)&a2,
                                                      *(float32x2_t*)&a2)))
                           .n64_f32[0];
        v19 = *(float*)&a2 / v16;
      }
      else {
        v19 = 0.0;
      }
    }
    LANES128(a1[12]).n128_f32[2] = v19;
    LANES128(a1[12]).n128_u32[3] = LODWORD(a2);
    v23 = LANES128(a1[11]).n128_f32[3];
    DWORD1(a2) = 0;
    if ((float)(v19 * 0x1.cccccc0000000p+1) >=
        *(float*)(GameData_21d8778 + 220)) {
      v24 = 0.0;
    }
    else {
      v24 = 1.0;
    }
    LANES128(a1[12]).n128_f32[0] = v24;
    if (v23 == v24) {
      goto LABEL_52;
    }
    LODWORD(a2) = LANES128(a1[12]).n128_u32[1];
    if (*(float*)&a2 > 0.0) {
      if (*(float*)&a2 >= 1.0) {
      LABEL_49:
        v23 = v24;
        goto LABEL_50;
      }
      if (v16 <= 0.0) {
        goto LABEL_50;
      }
      v25 = a1;
      *(float*)&a2 = 1.0 - *(float*)&a2;
      v26 = 1.0 - powf(a2, v16 * 0x1.df851e0000000p+4);
      if (v26 > 0.0) {
        a1 = v25;
        if (v26 < 1.0) {
          v23 = v23 + (float)((float)(v24 - v23) * v26);
          goto LABEL_50;
        }
        goto LABEL_49;
      }
      a1 = v25;
    }
  LABEL_50:
    v27 = LANES128(a1[12]).n128_f32[0];
    LANES128(a1[11]).n128_f32[3] = v23;
    if (vabds_f32(v27, v23) < 0x1.a36e2e0000000p-14) {
      LANES128(a1[11]).n128_f32[3] = v27;
    }
  LABEL_52:
    v28 = (_DWORD*)LANES128(*(a1)).n128_u64[1];
    v29 = a1;
    v51 = 0;
    v52 = 0;
    v50 = (__typeof__(v50)){0};
    LANES128(a1[9]).n128_u32[0] = v28[76];
    LANES128(a1[9]).n128_u32[1] = v28[77];
    v30 = a1[9];
    LANES128(v30).n128_u64[1] = (unsigned int)v28[78];
    a1[9] = v30;
    LANES128(a1[10]).n128_u32[0] = v28[80];
    LANES128(a1[10]).n128_u32[1] = v28[81];
    v31 = a1[10];
    LANES128(v31).n128_u64[1] = (unsigned int)v28[82];
    a1[10] = v31;
    *(__n128*)&v32 = GameRoutine_109ded0(&v50, a1 + 9, 3);
    v33 = v29;
    if ((v34 & 1) != 0) {
      if ((v53 & 2) != 0 ||
          LANES128(v29[13]).n128_u32[1] + 1 != *GameData_212d280) {
        v39 = LANES128(v29[9]).n128_u32[1];
        LANES128(v29[11]).n128_u32[0] = v39;
        LANES128(v29[11]).n128_u32[1] = v39;
      }
      else {
        v35 = LANES128(v29[9]).n128_f32[1];
        v36 = LANES128(v29[11]).n128_f32[0];
        *(float*)&v32 =
            (float)(LANES128(v29[11]).n128_f32[3] * -0x1.99999a0000000p-1) +
            1.0;
        LANES128(v29[11]).n128_f32[1] = v35;
        LANES128(v29[11]).n128_u32[2] = LODWORD(v32);
        if (v36 != v35) {
          if (*(float*)&v32 > 0.0) {
            if (*(float*)&v32 >= 1.0) {
              v36 = v35;
            }
            else {
              v37 = LANES128(v29[13]).n128_f32[0];
              if (v37 > 0.0) {
                v49 = v36;
                *(float*)&v32 = 1.0 - *(float*)&v32;
                v38 = 1.0 - powf(v32, v37 * 0x1.df851e0000000p+4);
                if (v38 <= 0.0) {
                  v36 = v49;
                  v33 = v29;
                }
                else {
                  if (v38 >= 1.0) {
                    v36 = v35;
                  }
                  else {
                    v36 = v49 + (float)((float)(v35 - v49) * v38);
                  }
                  v33 = v29;
                }
              }
            }
          }
          v42 = LANES128(v33[11]).n128_f32[1];
          LANES128(v33[11]).n128_f32[0] = v36;
          if (vabds_f32(v42, v36) < 0x1.a36e2e0000000p-14) {
            v36 = v42;
            LANES128(v33[11]).n128_f32[0] = v42;
          }
        }
        v43 = v33[9];
        v44 = (float32x4_t*)LANES128(*(v33)).n128_u64[1];
        v45 = v43;
        LANES128(v45).n128_f32[1] = v36;
        v46 = vsubq_f32(v44[19], v45);
        v47 = vmulq_f32(v46, v46);
        LANES128(v47).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v47, v47, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0])))
                .n64_f32[0] != 0.0) {
          LANES128(v44[19]).n128_u32[0] = LANES128(v43).n128_u32[0];
          LANES128(v44[19]).n128_f32[1] = v36;
          v48 = v44[19];
          LANES128(v44[18]).n128_u32[2] |= 1u;
          LANES128(v48).n128_u64[1] = LANES128(v43).n128_u32[2];
          v44[19] = v48;
        }
      }
    }
    v40 = (_QWORD*)LANES128(v33[5]).n128_u64[0];
    v41 = (_QWORD*)LANES128(v33[5]).n128_u64[1];
    while (v40 != v41) {
      if (*(_BYTE*)(*v40 + 17LL) == 1) {
        *(_DWORD*)(*v40 + 32LL) = LANES128(*(v17)).n128_u32[0];
        (*(void (**)(_QWORD))(*(_QWORD*)*v40 + 24LL))(*v40);
      }
      ++v40;
    }
    return;
  }
  LODWORD(a2) = LANES128(a1[4]).n128_u32[0];
  v3 = LANES128(a1[4]).n128_f32[1];
  if (LANES128(a1[3]).n128_u32[2] != 0) {
    v4 = 0.0;
  }
  else {
    v4 = 1.0;
  }
  v5 = v4 - *(float*)&a2;
  if (v3 <= 0.0) {
    v6 = 0.0;
  }
  else {
    v6 = 1.0;
    if (v3 < 1.0) {
      v7 = a1;
      *(float*)&a2 = 1.0 - v3;
      v6 = 1.0 - powf(a2, v2 * 0x1.df851e0000000p+4);
      LODWORD(a2) = LANES128(v7[4]).n128_u32[0];
      a1 = v7;
    }
  }
  v8 = *(float*)&a2 + (float)(v5 * v6);
  if (v8 < 0x1.0624de0000000p-10) {
    v8 = 0.0;
  }
  v9 = LANES128(a1[3]).n128_f32[3];
  if (v8 > 0x1.ff7cee0000000p-1) {
    v8 = 1.0;
  }
  LANES128(a1[4]).n128_f32[0] = v8;
  if (v9 <= 0.0 || v8 > 0.0) {
    v10 = v8 > 0.0;
    if (v9 > 0.0) {
      v10 = false;
    }
  }
  else {
    v10 = true;
  }
  LANES128(a1[4]).n128_u8[8] = v10;
  LANES128(a1[3]).n128_f32[3] = v8;
  if (v8 > 0.0) {
    goto LABEL_21;
  }
}

__n128 CharacterIK_Destructor(__int64 a1)
{

#pragma clang fp contract(off)
  __n128 result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = game_character_CharacterIK_vtable;
  GameRoutine_10e26e0(a1);
  result = GameRoutine_109d900((unsigned int*)(a1 + 104));
  v3 = *(_QWORD*)(a1 + 128);
  if (v3 != 0) {
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD**)(a1 + 80);
  if (v4 != nullptr) {
    v5 = *(_QWORD**)(a1 + 88);
    if (v4 == v5) {
      goto LABEL_10;
    }
    do {
      v7 = *--v5;
      v6 = v7;
      *v5 = 0;
      if (v7 != 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 8LL))(
            v6, *(long double*)&result);
      }
    } while (v5 != v4);
    v8 = *(_QWORD*)(a1 + 80);
    *(_QWORD*)(a1 + 88) = v4;
    if (v8 != 0) {
    LABEL_10:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
    }
  }
  v10 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v10 != 0) {
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

__int64 game_character_CharacterIK_Startup_lambda0_Invoke(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64* v3;

  v1 = *(_QWORD*)(result + 8);
  if (*(float*)(v1 + 64) > 0x0.0p+0f && (*(_BYTE*)(v1 + 16) & 1) != 0) {
    v2 = *(__int64**)(v1 + 80);
    v3 = *(__int64**)(v1 + 88);
    if (v2 != v3) {
      if (*(_DWORD*)(*(_QWORD*)(v1 + 40) + 384LL) == 1) {
        do {
          result = *v2;
          if (*(_BYTE*)(*v2 + 17) != 0) {
            result =
                (*(__int64 (**)(__int64))(*(_QWORD*)result + 40LL))(result);
            if ((result & 1) != 0) {
              result = (*(__int64 (**)(__int64))(*(_QWORD*)*v2 + 32LL))(*v2);
            }
          }
          ++v2;
        } while (v2 != v3);
      }
      else {
        do {
          result = *v2;
          if (*(_BYTE*)(*v2 + 17) != 0) {
            result =
                (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
          }
          ++v2;
        } while (v2 != v3);
      }
    }
    *(_DWORD*)(v1 + 212) = GameData_21d87e8;
  }
  return result;
}

bool game_character_CharacterIK_Startup_lambda1_Invoke(__int64 a1, int* a2)
{
  __int64 v2;
  _BOOL8 result;
  int v4;

  v2 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_108cdc0(*a2);
  if (result) {
    v4 = 0;
  }
  else {
    v4 = 256;
  }
  *(_DWORD*)(v2 + 56) = *(_DWORD*)(v2 + 56) & 0xFFFFFEDF | v4;
  return result;
}

#pragma GCC visibility pop
