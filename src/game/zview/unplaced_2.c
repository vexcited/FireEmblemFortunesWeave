#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Character_cea860(__int64);
__int64 GameRoutine_10c0240(__int64 result);
__int64 GameRoutine_2b0();
__int64 GameRoutine_ceb940(__int64 result);
__int64 GameRoutine_cf7590(__int64, float32x4_t*, float32x4_t*);
__int64 GameRoutine_d0eb60(__int64);
__int64 GameRoutine_d12560(__int64 result);
__int64 GameRoutine_d17480(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d191a0(__int64 result);
__int64 GameRoutine_d74b60(_QWORD, _QWORD, float);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_d74600(_QWORD, _QWORD, _QWORD, float);
__int64 game_ff0ea0(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 game_zview_CharacterModel_UpdateOutlineBold(__int64);
__int64 game_zview_cedd40(__int64);
__int64 game_zview_d0e440(__int64 result, char);
__int64 game_zview_d0e6d0(__int64);
__int64 game_zview_d11e20(__int64);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int128 GameData_1a83800;
extern __int64 GameData_22137b8;
extern __int64 GameData_22137c0;
extern __int64 GameData_22137c8;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 fw_memory_g_heap_manager_ptr;
float32x2_t* CharacterModel_d1c510(float32x2_t* result);
void CharacterModel_cf55e0(__int64);
void CharacterModel_d1b800(float32x2_t*);
void GameRoutine_cf7200(__int64, float32x4_t*, float32x4_t*);
void __attribute__((noreturn)) String_60a250(_QWORD);
void game_zview_d127a0(__int64);
void game_zview_d32f80(__int64);
float game_zview_ceb570(__int64 a1, float result);
__int64 game_zview_ced840(_QWORD* a1);
__int64 game_zview_cee580(_QWORD* a1);
bool game_zview_d0bdc0(__int64 a1, int a2, __int64 a3);
__int64 game_zview_d16b40(float a1, double a2, double a3, double a4, double a5,
                          double a6, long double a7, __int64 a8, __int64 a9,
                          __int128* a10, unsigned __int64* a11, __int64 a12);
__int64 game_zview_dad0a0();
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

float game_zview_ceb570(__int64 a1, float result)
{
  __int64 v5;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  __int128 v19;
  __int128 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float32x2_t* v25;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  int8x16_t* v34;
  int8x16_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  float v47;
  float32x4_t v48;

  if (*(_DWORD*)(a1 + 512) == 2) {
    return result;
  }
  Character_cea860(a1);
  v5 = *(_QWORD*)(a1 + 168);
  if (v5 != 0 && (*(_BYTE*)(a1 + 240) & 1) == 0) {
    *(_BYTE*)(a1 + 240) = 1;
    ++*(_DWORD*)(v5 + 32);
  }
  game_zview_CharacterModel_UpdateOutlineBold(*(_QWORD*)(a1 + 8));
  *(_BYTE*)(*(_QWORD*)(a1 + 48) + 16LL) = 0;
  game_zview_d32f80(*(_QWORD*)(a1 + 24));
  v10 = *(_QWORD*)(a1 + 32);
  if (v10 != 0) {
    v11 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 16) + 8LL) + 8LL) +
                    228LL);
    v12 = v11 + *(float*)(v10 + 352);
    v13 = fabsf(v11);
    *(float*)(v10 + 352) = v12;
    v14 = *(float*)(v10 + 384);
    if (v14 <= 0x0.0p+0f) {
      if (v14 >= 0x0.0p+0f || (v14 = v13 + v14) <= 0x0.0p+0f) {
      LABEL_12:
        v15 = *(_QWORD*)(v10 + 8);
        *(float*)(v10 + 384) = v14;
        v16 = *(float*)(v10 + 388);
        v17 = fabsf(*(float*)(*(_QWORD*)(v15 + 8) + 228LL));
        if (v16 <= 0x0.0p+0f) {
          if (v16 >= 0x0.0p+0f) {
            goto LABEL_18;
          }
          v16 = v16 + v17;
          if (v16 <= 0x0.0p+0f) {
            goto LABEL_18;
          }
        }
        else {
          v16 = v16 - v17;
          if (v16 >= 0x0.0p+0f) {
            goto LABEL_18;
          }
        }
        v16 = 0x0.0p+0f;
      LABEL_18:
        *(float*)(v10 + 388) = v16;
        goto LABEL_19;
      }
    }
    else {
      v14 = v14 - v13;
      if (v14 >= 0x0.0p+0f) {
        goto LABEL_12;
      }
    }
    v14 = 0x0.0p+0f;
    goto LABEL_12;
  }
LABEL_19:
  v18 = *(_QWORD*)(a1 + 16);
  *(float*)(v18 + 524) =
      *(float*)(*(_QWORD*)(*(_QWORD*)(v18 + 8) + 8LL) + 228LL) +
      *(float*)(v18 + 524);
  game_zview_d0e6d0(v18);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v18 + 8) + 8LL) + 144LL) == 1) {
    *(_BYTE*)(v18 + 937) = 1;
  }
  game_zview_d0e440(v18, 0);
  GameRoutine_d12560(v18);
  GameRoutine_d0eb60(v18);
  game_zview_d11e20(v18);
  if (*(_BYTE*)(v18 + 752) == 1) {
    v19 = *(_OWORD*)(v18 + 560);
    *(_QWORD*)(v18 + 736) = v19;
    v20 = *(_OWORD*)(v18 + 736);
    *((_QWORD*)&v20 + 1) = DWORD2(v19);
    *(_OWORD*)(v18 + 736) = v20;
    v21 = *(_QWORD*)(a1 + 32);
    if (v21 == 0) {
      goto LABEL_32;
    }
  LABEL_25:
    v23 = *(_QWORD*)(v21 + 16);
    if (*(float*)(*(_QWORD*)(*(_QWORD*)(v23 + 8) + 8LL) + 228LL) > 0x0.0p+0f &&
        *(float*)(v23 + 820) <= 0x0.0p+0f &&
        *(float*)(v21 + 384) <= 0x0.0p+0f) {
      if (*(_BYTE*)(v21 + 112) == 1) {
        *(_BYTE*)(v21 + 112) = 0;
      }
      if (*(_BYTE*)(v21 + 144) == 1) {
        *(_BYTE*)(v21 + 144) = 0;
      }
    }
    goto LABEL_32;
  }
  v22 = *(_QWORD*)(v18 + 568);
  *(_QWORD*)(v18 + 736) = *(_QWORD*)(v18 + 560);
  *(_QWORD*)(v18 + 744) = v22;
  *(_BYTE*)(v18 + 752) = 1;
  v21 = *(_QWORD*)(a1 + 32);
  if (v21 != 0) {
    goto LABEL_25;
  }
LABEL_32:
  v24 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 272) == 1) {
    *(float*)(a1 + 280) = *(float*)(v24 + 228) + *(float*)(a1 + 280);
  }
  v25 = *(float32x2_t**)(v24 + 344);
  if ((*(_BYTE*)(*(_QWORD*)(LANES64(v25[1]).n64_u64[0] + 16) + 385LL) & 8) !=
      0) {
    GameRoutine_d191a0(*(_QWORD*)(v24 + 344));
  }
  else {
    CharacterModel_d1b800(*(float32x2_t**)(v24 + 344));
    CharacterModel_d1c510(v25);
  }
  v27 = *(_QWORD*)(v24 + 352);
  GameRoutine_10c0240(v27);
  v28 = *(_QWORD*)(v27 + 8);
  if (*(_BYTE*)(v28 + 145) == 1) {
    v29 = *(_QWORD*)(v28 + 232);
    if (v29 != 0) {
      v30 = *(_QWORD*)(v29 + 88);
      if (v30 != 0 && (*(_BYTE*)(v27 + 56) & 1) != 0) {
        *(_DWORD*)(v30 + 340) = 1065353216;
      }
    }
  }
  v31 = *(_QWORD*)(a1 + 632);
  v32 = ((__int64)*(int*)(*(_QWORD*)v31 + 376LL) << 24) +
        ((unsigned __int64)*(unsigned int*)(v31 + 16) << 20);
  if (*(_QWORD*)(*(_QWORD*)v31 + 600LL) != 0) {
    ++v32;
  }
  *(_QWORD*)(v31 + 8) = v32;
  GameRoutine_ceb940(a1);
  v33 = *(_QWORD*)(a1 + 8);
  v34 = *(int8x16_t**)(a1 + 16);
  if (LANES128(v34[20]).n128_u8[0] == 1) {
    v35 = v34[19];
    v36 = *(int8x16_t*)(LANES128(v34[30]).n128_u64[1] + 16);
    LANES128(v37).n128_u64[0] = LANES128(v34[19]).n128_u64[0];
    LANES128(v38).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v39).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v40).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v41).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v38).n128_u64[1] = LANES128(v38).n128_u64[0];
    LANES128(v37).n128_u64[1] = LANES128(v40).n128_u64[0];
    *(int32x2_t*)&LANES128(v41).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v36).n128_u64[0]), 1);
    *(int8x8_t*)&LANES128(v39).n128_i8[8] =
        vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v42 =
        vmlaq_f32(vmulq_f32(v36, v38), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v37, v39));
    LANES128(v37).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v40).n128_u64[1] = LANES128(v37).n128_u64[0];
    LANES128(v37).n128_u64[1] = LANES128(v34[19]).n128_u64[0];
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v35).n128_i8[8] =
        vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v48 = vmlsq_f32(vmlaq_f32(v42, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v37, v41)),
                    v35, v40);
  }
  else {
    v43 = LANES128(v34[30]).n128_u64[1];
    v45 = *(_QWORD*)(v43 + 16);
    v44 = *(_QWORD*)(v43 + 24);
    LANES128(v48).n128_u64[0] = v45;
    LANES128(v48).n128_u64[1] = v44;
  }
  GameRoutine_cf7200(v33, v34 + 35, &v48);
  v46 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v46 + 144) = 0;
  CharacterModel_cf55e0(v46);
  *(_BYTE*)(a1 + 432) = 0;
  v47 = *(float*)(a1 + 480);
  *(_BYTE*)(a1 + 450) = 1;
  result = *(float*)(*(_QWORD*)(a1 + 8) + 228LL) + v47;
  *(float*)(a1 + 480) = result;
  return result;
}

__int64 game_zview_ced840(_QWORD* a1)
{
  __int64 v2;
  int8x16_t* v3;
  int8x16_t v4;
  int8x16_t v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 result;
  __int64 v16;
  char v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD** v22;
  _QWORD** i;
  _QWORD* v24;
  __int64 v25;
  float32x4_t v26;

  game_zview_cedd40((__int64)a1);
  game_zview_d127a0(a1[2]);
  v2 = a1[1];
  v3 = (int8x16_t*)a1[2];
  if (LANES128(v3[20]).n128_u8[0] == 1) {
    v4 = v3[19];
    v5 = *(int8x16_t*)(LANES128(v3[30]).n128_u64[1] + 16);
    LANES128(v6).n128_u64[0] = LANES128(v3[19]).n128_u64[0];
    LANES128(v7).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v8).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v9).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v10).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v7).n128_u64[1] = LANES128(v7).n128_u64[0];
    LANES128(v6).n128_u64[1] = LANES128(v9).n128_u64[0];
    *(int32x2_t*)&LANES128(v10).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v5).n128_u64[0]), 1);
    *(int8x8_t*)&LANES128(v8).n128_i8[8] =
        vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v11 = vmlaq_f32(vmulq_f32(v5, v7), COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v6, v8));
    LANES128(v6).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v9).n128_u64[1] = LANES128(v6).n128_u64[0];
    LANES128(v6).n128_u64[1] = LANES128(v3[19]).n128_u64[0];
    LANES128(v4).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v4).n128_i8[8] =
        vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v26 = vmlsq_f32(vmlaq_f32(v11, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v6, v10)),
                    v4, v9);
  }
  else {
    v12 = LANES128(v3[30]).n128_u64[1];
    v14 = *(_QWORD*)(v12 + 16);
    v13 = *(_QWORD*)(v12 + 24);
    LANES128(v26).n128_u64[0] = v14;
    LANES128(v26).n128_u64[1] = v13;
  }
  result = GameRoutine_cf7590(v2, v3 + 35, &v26);
  v16 = a1[4];
  if (v16 != 0) {
    v17 = *(_BYTE*)(v16 + 360);
    *(_QWORD*)(v16 + 352) = 0;
    if ((v17 & 1) != 0) {
      v18 = *(_BYTE**)(v16 + 376);
      *(_QWORD*)(v16 + 368) = 0;
    }
    else {
      v18 = (_BYTE*)(v16 + 361);
      *(_BYTE*)(v16 + 360) = 0;
    }
    *v18 = 0;
    *(_BYTE*)(v16 + 392) = 0;
    v19 = *(_QWORD*)(v16 + 400);
    v20 = *(_QWORD*)(v16 + 408);
    for (*(_QWORD*)(v16 + 384) = 0; v20 != v19; v20 -= 32) {
      v25 = *(_QWORD*)(v20 - 8);
      if (v25 != 0) {
        std___1___shared_weak_count___release_weak(v25);
      }
      result = *(_QWORD*)(v20 - 24);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
    }
    *(_QWORD*)(v16 + 408) = v19;
  }
  v21 = a1[3];
  if (*(_BYTE*)(v21 + 464) == 1) {
    *(_BYTE*)(v21 + 464) = 0;
  }
  *(_DWORD*)(v21 + 480) = 0;
  v22 = (_QWORD**)a1[76];
  for (i = (_QWORD**)a1[77]; v22 != i; result = game_zview_ced840(v24)) {
    v24 = *v22++;
  }
  return result;
}

__int64 game_zview_cee580(_QWORD* a1)
{
  __int64 v2;
  int8x16_t* v3;
  int8x16_t v4;
  int8x16_t v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 result;
  __int64 v16;
  char v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float32x4_t v23;

  game_zview_cedd40((__int64)a1);
  game_zview_d127a0(a1[2]);
  v2 = a1[1];
  v3 = (int8x16_t*)a1[2];
  if (LANES128(v3[20]).n128_u8[0] == 1) {
    v4 = v3[19];
    v5 = *(int8x16_t*)(LANES128(v3[30]).n128_u64[1] + 16);
    LANES128(v6).n128_u64[0] = LANES128(v3[19]).n128_u64[0];
    LANES128(v7).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v8).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v9).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v10).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v7).n128_u64[1] = LANES128(v7).n128_u64[0];
    LANES128(v6).n128_u64[1] = LANES128(v9).n128_u64[0];
    *(int32x2_t*)&LANES128(v10).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v5).n128_u64[0]), 1);
    *(int8x8_t*)&LANES128(v8).n128_i8[8] =
        vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v11 = vmlaq_f32(vmulq_f32(v5, v7), COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v6, v8));
    LANES128(v6).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v4, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v9).n128_u64[1] = LANES128(v6).n128_u64[0];
    LANES128(v6).n128_u64[1] = LANES128(v3[19]).n128_u64[0];
    LANES128(v4).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v4).n128_i8[8] =
        vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v23 = vmlsq_f32(vmlaq_f32(v11, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v6, v10)),
                    v4, v9);
  }
  else {
    v12 = LANES128(v3[30]).n128_u64[1];
    v14 = *(_QWORD*)(v12 + 16);
    v13 = *(_QWORD*)(v12 + 24);
    LANES128(v23).n128_u64[0] = v14;
    LANES128(v23).n128_u64[1] = v13;
  }
  result = GameRoutine_cf7590(v2, v3 + 35, &v23);
  v16 = a1[4];
  if (v16 != 0) {
    v17 = *(_BYTE*)(v16 + 360);
    *(_QWORD*)(v16 + 352) = 0;
    if ((v17 & 1) != 0) {
      v18 = *(_BYTE**)(v16 + 376);
      *(_QWORD*)(v16 + 368) = 0;
    }
    else {
      v18 = (_BYTE*)(v16 + 361);
      *(_BYTE*)(v16 + 360) = 0;
    }
    *v18 = 0;
    *(_BYTE*)(v16 + 392) = 0;
    v19 = *(_QWORD*)(v16 + 400);
    v20 = *(_QWORD*)(v16 + 408);
    for (*(_QWORD*)(v16 + 384) = 0; v20 != v19; v20 -= 32) {
      v22 = *(_QWORD*)(v20 - 8);
      if (v22 != 0) {
        std___1___shared_weak_count___release_weak(v22);
      }
      result = *(_QWORD*)(v20 - 24);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
    }
    *(_QWORD*)(v16 + 408) = v19;
  }
  v21 = a1[3];
  if (*(_BYTE*)(v21 + 464) == 1) {
    *(_BYTE*)(v21 + 464) = 0;
  }
  *(_DWORD*)(v21 + 480) = 0;
  return result;
}

bool game_zview_d0bdc0(__int64 a1, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  signed __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  signed __int64 v18;
  __int64 v19;
  signed __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  int v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64* v31;
  char v32;
  __int64 v33;
  __int64* v34;
  signed __int64 v35;
  __int64 v36;
  _BOOL4 v37;
  __int64 v38;
  int v39;
  signed __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v44;
  __int64 v46;
  struct {
    __int64 v47;
    unsigned __int64 v48;
    __int64* v49;
  } v47_;

  v3 = *(_QWORD*)(*(_QWORD*)a1 + 11608LL);
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v5 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v6 = a2;
      if (GameData_22356f8 <= (unsigned __int64)a2) {
        v6 = a2 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v6 = v5 & a2;
    }
    v7 = *(__int64***)(GameData_22356f0 + 8 * v6);
    if (v7 != nullptr) {
      v8 = *v7;
      if (*v7 != nullptr) {
        if ((GameData_22356f8 & v5) == 0) {
          while (1) {
            v11 = v8[1];
            if (v11 == a2) {
              if (*((_DWORD*)v8 + 4) == a2) {
                goto LABEL_77;
              }
            }
            else if ((v11 & v5) != v6) {
              goto LABEL_26;
            }
            v8 = (__int64*)*v8;
            if (v8 == nullptr) {
              goto LABEL_26;
            }
          }
        }
        while (1) {
          v9 = v8[1];
          if (v9 == a2) {
            break;
          }
          if (v9 >= GameData_22356f8) {
            v9 %= (unsigned __int64)GameData_22356f8;
          }
          if (v9 != v6) {
            goto LABEL_26;
          }
        LABEL_14:
          v8 = (__int64*)*v8;
          if (v8 == nullptr) {
            goto LABEL_26;
          }
        }
        if (*((_DWORD*)v8 + 4) != a2) {
          goto LABEL_14;
        }
      LABEL_77:
        v10 = *(_QWORD*)(v3 + 8LL * *((int*)v8 + 5));
        if (v10 == 0) {
          return false;
        }
      LABEL_27:
        v12 = *(unsigned __int8*)(v10 + 8);
        v13 = v10 + 9;
        v16 = v10 + 16;
        v14 = *(_QWORD*)(v10 + 16);
        v15 = *(_QWORD*)(v16 + 8);
        v17 = (v12 & 1) == 0;
        v18 = v12 >> 1;
        if (v17) {
          v19 = v13;
        }
        else {
          v19 = v15;
        }
        if (v17) {
          v20 = v18;
        }
        else {
          v20 = v14;
        }
        if (v20 != 0) {
          v21 = ~v19;
          v22 = v19 - 1;
          v23 = 0;
          while (v20 != v23) {
            v24 = *(unsigned __int8*)(v22 + v20);
            ++v23;
            ++v21;
            --v22;
            if (v24 == 47) {
              if (v20 + 1 != v23) {
                if (v20 < v23) {
                  String_60a250_alt1("string_view::substr");
                }
                v19 = v20 - v21;
                v20 = v23 - 1;
              }
              break;
            }
          }
        }
        v25 = *(_QWORD*)(a3 + 8);
        if (v25 != 0) {
          v26 = *(__int64**)a3;
          v27 = v19 + v20;
          v28 = *(_QWORD*)a3 + 24 * v25;
          v46 = v28;
          while (1) {
            if ((*(_BYTE*)v26 & 1) != 0) {
              fw_text_String_CopyTerminated_alt1(&v47_.v47, v26[2], v26[1]);
            }
            else {
              v30 = *v26;
              v31 = (__int64*)v26[2];
              v47_.v48 = v26[1];
              v47_.v49 = v31;
              v47_.v47 = v30;
            }
            v32 = v47_.v47;
            v33 = (__int64)v47_.v49;
            v34 = (v47_.v47 & 1) != 0 ? v47_.v49
                                      : (__int64*)((char*)&v47_.v47 + 1);
            v35 = (v47_.v47 & 1) != 0
                      ? v47_.v48
                      : (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
            if (v35 != 0) {
              break;
            }
            v37 = true;
            if ((v47_.v47 & 1) != 0) {
              goto LABEL_73;
            }
          LABEL_42:
            v26 += 3;
            v29 = v26 == (__int64*)v28 || v37;
            if (v29 == 1) {
              return v37;
            }
          }
          if (v20 >= v35) {
            v38 = v19;
            v39 = *(unsigned __int8*)v34;
            v40 = v20;
            v41 = v38;
            do {
              v42 = memchr_alt1(v38, v39, v40 - v35 + 1);
              if (v42 == 0) {
                break;
              }
              v36 = v42;
              if (memcmp_alt1(v42, (__int64)v34, v35) == 0) {
                goto LABEL_65;
              }
              v38 = v36 + 1;
              v40 = v27 - (v36 + 1);
            } while (v40 >= v35);
            v36 = v27;
          LABEL_65:
            v19 = v41;
            v28 = v46;
          }
          else {
            v36 = v27;
          }
          v37 = v36 != v27 && v36 == v19;
          if ((v32 & 1) == 0) {
            goto LABEL_42;
          }
        LABEL_73:
          if (v33 != 0) {
            v44 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v44 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v33);
          }
          goto LABEL_42;
        }
      }
      else {
      LABEL_26:
        v10 = *(_QWORD*)(v3 + 5112);
        if (v10 != 0) {
          goto LABEL_27;
        }
      }
      return false;
    }
  }
  v10 = *(_QWORD*)(v3 + 5112);
  if (v10 == 0) {
    return false;
  }
  goto LABEL_27;
}

__int64 game_zview_d16b40(float a1, double a2, double a3, double a4, double a5,
                          double a6, long double a7, __int64 a8, __int64 a9,
                          __int128* a10, unsigned __int64* a11, __int64 a12)
{
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char v17;
  int v18;
  __int64* v19;
  char v20;
  unsigned int v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float i;
  unsigned __int64 v30;
  unsigned __int64 v31;
  int v32;
  char v33;
  bool v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  int v39;
  char v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  int v46;
  char v47;
  bool v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  float v55;
  float v56;
  float32x4_t v57;
  __int128 v58;
  _OWORD* v59;
  __int128 v60;
  int v62;
  float32x4_t v63;
  float v66;
  int v67;
  char v68;
  int8x16_t v69;
  long double v70;
  float v71;
  float32x4_t v72;
  float32x4_t v73;
  struct {
    float v74;
    float v75;
  } v74_;
  struct {
    int8x16_t v76;
    __int64 v77;
  } v76_;
  _QWORD v78[2];

  v12 = a11[1];
  v13 = *(_QWORD*)a12;
  v14 = *(_QWORD*)(a12 + 8);
  v17 = 0;
  v18 = 0;
  LANES128(v73).n128_u64[0] = *a11;
  LANES128(v73).n128_u64[1] = v12;
  LANES128(v72).n128_u64[0] = v13;
  LANES128(v72).n128_u64[1] = v14;
  v19 = (__int64*)fw_memory_g_heap_manager_ptr;
LABEL_2:
  LOBYTE(a7) = 0;
  if (*(_BYTE*)(a9 + 32) == 1) {
    v76_.v76 = (__typeof__(v76_.v76)){0};
    v69 = *(int8x16_t*)&a7;
    v20 = game_ff0ea0(&v76_.v76, &v73, &v72, a9 + 16, a1);
    if ((v20 & 1) != 0) {
      v21 = -1;
    }
    else {
      v21 = 0;
    }
    a7 = COERCE_LONG_DOUBLE(vbslq_s8(vdupq_n_s8(v21), v76_.v76, v69));
  }
  else {
    v20 = 0;
  }
  if (*(_BYTE*)(a9 + 12) == 1) {
    v22 = LANES128(v72).n128_f32[0];
    v66 = *((float*)&a7 + 2);
    v23 = LANES128(v72).n128_f32[2];
    if ((v20 & 1) != 0) {
      v22 = *(float*)&a7;
      v23 = *((float*)&a7 + 2);
    }
    v24 = LANES128(v73).n128_f32[2];
    v25 = v22 - LANES128(v73).n128_f32[0];
    v71 = LANES128(v73).n128_f32[0];
    v26 = v23 - LANES128(v73).n128_f32[2];
    if ((float)(v22 - LANES128(v73).n128_f32[0]) != 0.0 || v26 != 0.0) {
      v27 = sqrtf((float)(v26 * v26) + (float)(v25 * v25));
      v25 = v25 / v27;
      v26 = v26 / v27;
    }
    v28 = 0.0;
    v67 = v18;
    v68 = v20;
    v70 = a7;
    for (i = sqrtf((float)((float)(LANES128(v73).n128_f32[2] - v23) *
                           (float)(LANES128(v73).n128_f32[2] - v23)) +
                   (float)((float)(LANES128(v73).n128_f32[0] - v22) *
                           (float)(LANES128(v73).n128_f32[0] - v22)));
         ;
         v28 = fminf(fmaxf((float)(a1 * 0x1.ff7cee0000000p-1) + v28, 0.0), i)) {
      v76_.v77 = 0;
      v76_.v76 = (__typeof__(v76_.v76)){0};
      v74_.v74 = v71 + (float)(v25 * v28);
      v74_.v75 = v24 + (float)(v26 * v28);
      GameRoutine_d74b60(&v76_.v76, &v74_.v74, a1);
      v31 = LANES128(v76_.v76).n128_u64[1];
      v30 = LANES128(v76_.v76).n128_u64[0];
      v78[0] = &v74_.v74;
      if (LANES128(v76_.v76).n128_u64[0] != LANES128(v76_.v76).n128_u64[1]) {
        GameRoutine_d17480(
            LANES128(v76_.v76).n128_u64[0], LANES128(v76_.v76).n128_u64[1], v78,
            (2 * __clz(0xCCCCCCCCCCCCCCCDLL *
                       ((__int64)(LANES128(v76_.v76).n128_u64[1] -
                                  LANES128(v76_.v76).n128_u64[0]) >>
                        3))) ^
                0x7E,
            1);
        v31 = LANES128(v76_.v76).n128_u64[1];
        v30 = LANES128(v76_.v76).n128_u64[0];
      }
      if (v30 == v31) {
        v34 = true;
        if (v30 == 0) {
          goto LABEL_25;
        }
      }
      else {
        v32 = 0;
        do {
          v33 = game_d74600(v30, &v74_.v74, a9, a1);
          v30 += 40LL;
          v32 += v33 & 1;
        } while (v30 != v31);
        v30 = LANES128(v76_.v76).n128_u64[0];
        v34 = v32 == 0;
        if (LANES128(v76_.v76).n128_u64[0] == 0) {
          goto LABEL_25;
        }
      }
      v35 = *v19;
      LANES128(v76_.v76).n128_u64[1] = v30;
      if (*(_QWORD*)(v35 + 200) != 0) {
        v36 = 128;
      }
      else {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(v35 + v36, v30);
    LABEL_25:
      if (!v34) {
        v76_.v77 = 0;
        v76_.v76 = (__typeof__(v76_.v76)){0};
        GameRoutine_d74b60(&v76_.v76, &v74_.v74, a1);
        v38 = LANES128(v76_.v76).n128_u64[1];
        v37 = LANES128(v76_.v76).n128_u64[0];
        v78[0] = &v74_.v74;
        if (LANES128(v76_.v76).n128_u64[0] != LANES128(v76_.v76).n128_u64[1]) {
          GameRoutine_d17480(
              LANES128(v76_.v76).n128_u64[0], LANES128(v76_.v76).n128_u64[1],
              v78,
              (2 * __clz(0xCCCCCCCCCCCCCCCDLL *
                         ((__int64)(LANES128(v76_.v76).n128_u64[1] -
                                    LANES128(v76_.v76).n128_u64[0]) >>
                          3))) ^
                  0x7E,
              1);
          v38 = LANES128(v76_.v76).n128_u64[1];
          v37 = LANES128(v76_.v76).n128_u64[0];
        }
        if (v37 == v38) {
          v41 = true;
          if (v37 != 0) {
          LABEL_36:
            v42 = *v19;
            LANES128(v76_.v76).n128_u64[1] = v37;
            if (*(_QWORD*)(v42 + 200) != 0) {
              v43 = 128;
            }
            else {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free(v42 + v43, v37);
          }
        }
        else {
          v39 = 0;
          do {
            v40 = game_d74600(v37, &v74_.v74, a9, a1);
            v37 += 40LL;
            v39 += v40 & 1;
          } while (v37 != v38);
          v37 = LANES128(v76_.v76).n128_u64[0];
          v41 = v39 == 0;
          if (LANES128(v76_.v76).n128_u64[0] != 0) {
            goto LABEL_36;
          }
        }
        if (!v41) {
          v76_.v77 = 0;
          v76_.v76 = (__typeof__(v76_.v76)){0};
          GameRoutine_d74b60(&v76_.v76, &v74_.v74, a1);
          v45 = LANES128(v76_.v76).n128_u64[1];
          v44 = LANES128(v76_.v76).n128_u64[0];
          v78[0] = &v74_.v74;
          if (LANES128(v76_.v76).n128_u64[0] !=
              LANES128(v76_.v76).n128_u64[1]) {
            GameRoutine_d17480(
                LANES128(v76_.v76).n128_u64[0], LANES128(v76_.v76).n128_u64[1],
                v78,
                (2 * __clz(0xCCCCCCCCCCCCCCCDLL *
                           ((__int64)(LANES128(v76_.v76).n128_u64[1] -
                                      LANES128(v76_.v76).n128_u64[0]) >>
                            3))) ^
                    0x7E,
                1);
            v45 = LANES128(v76_.v76).n128_u64[1];
            v44 = LANES128(v76_.v76).n128_u64[0];
          }
          if (v44 == v45) {
            v48 = true;
            if (v44 != 0) {
            LABEL_47:
              v49 = *v19;
              LANES128(v76_.v76).n128_u64[1] = v44;
              if (*(_QWORD*)(v49 + 200) != 0) {
                v50 = 128;
              }
              else {
                v50 = 56;
              }
              nn_mem_StandardAllocator_Free(v49 + v50, v44);
            }
          }
          else {
            v46 = 0;
            do {
              v47 = game_d74600(v44, &v74_.v74, a9, a1);
              v44 += 40LL;
              v46 += v47 & 1;
            } while (v44 != v45);
            v44 = LANES128(v76_.v76).n128_u64[0];
            v48 = v46 == 0;
            if (LANES128(v76_.v76).n128_u64[0] != 0) {
              goto LABEL_47;
            }
          }
          if (!v48) {
            v76_.v77 = 0;
            v76_.v76 = (__typeof__(v76_.v76)){0};
            GameRoutine_d74b60(&v76_.v76, &v74_.v74, a1);
            v52 = LANES128(v76_.v76).n128_u64[1];
            v51 = LANES128(v76_.v76).n128_u64[0];
            v78[0] = &v74_.v74;
            if (LANES128(v76_.v76).n128_u64[0] !=
                LANES128(v76_.v76).n128_u64[1]) {
              GameRoutine_d17480(
                  LANES128(v76_.v76).n128_u64[0],
                  LANES128(v76_.v76).n128_u64[1], v78,
                  (2 * __clz(0xCCCCCCCCCCCCCCCDLL *
                             ((__int64)(LANES128(v76_.v76).n128_u64[1] -
                                        LANES128(v76_.v76).n128_u64[0]) >>
                              3))) ^
                      0x7E,
                  1);
              v52 = LANES128(v76_.v76).n128_u64[1];
              v51 = LANES128(v76_.v76).n128_u64[0];
            }
            if (v51 != v52) {
              do {
                game_d74600(v51, &v74_.v74, a9, a1);
                v51 += 40LL;
              } while (v51 != v52);
              v51 = LANES128(v76_.v76).n128_u64[0];
            }
            if (v51 != 0) {
              v53 = *v19;
              LANES128(v76_.v76).n128_u64[1] = v51;
              if (*(_QWORD*)(v53 + 200) != 0) {
                v54 = 128;
              }
              else {
                v54 = 56;
              }
              nn_mem_StandardAllocator_Free(v53 + v54, v51);
            }
          }
        }
        v55 = v74_.v75;
        if ((v68 & 1) != 0) {
          a7 = v70;
          v56 = LANES128_OF(vsubq_f32(*(float32x4_t*)&v70, v73)).n128_f32[0];
          if ((float)((float)((float)(v74_.v75 - LANES128(v73).n128_f32[2]) *
                              (float)(v74_.v75 - LANES128(v73).n128_f32[2])) +
                      (float)((float)(v74_.v74 - LANES128(v73).n128_f32[0]) *
                              (float)(v74_.v74 - LANES128(v73).n128_f32[0]))) <=
              (float)((float)((float)(v66 - LANES128(v73).n128_f32[2]) *
                              (float)(v66 - LANES128(v73).n128_f32[2])) +
                      (float)(v56 * v56))) {
            LANES128(v72).n128_u64[0] =
                __PAIR64__(*(_DWORD*)(a12 + 4), LODWORD(v74_.v74));
            LANES128(v57).n128_u64[0] = LANES128(v72).n128_u64[0];
            LANES128(v57).n128_f32[2] = v74_.v75;
          }
          else {
            LANES128(v72).n128_u64[0] = *(_QWORD*)&v70;
            LANES128(v57).n128_u64[0] = *(_QWORD*)&v70;
            LANES128(v57).n128_u32[2] = DWORD2(v70);
          }
          LANES128(v57).n128_u32[3] = 0;
          v72 = v57;
          if (v67 != 7) {
            v18 = v67 + 1;
            v17 = 1;
            *(_QWORD*)a10 = LANES128(v57).n128_u64[0];
            v58 = *a10;
            *((_QWORD*)&v58 + 1) = LANES128(v57).n128_u32[2];
            *a10 = v58;
            goto LABEL_2;
          }
          v59 = a10;
          v63 = vmlaq_f32(v73, vdupq_n_s32(0x3C23D70Au), vsubq_f32(v57, v73));
          *(_QWORD*)a10 = LANES128(v63).n128_u64[0];
          v60 = *a10;
          DWORD2(v60) = LANES128(v63).n128_u32[2];
        }
        else {
          v59 = a10;
          v62 = *(_DWORD*)(a12 + 4);
          *(float*)a10 = v74_.v74;
          *((_DWORD*)a10 + 1) = v62;
          v60 = *a10;
          *((float*)&v60 + 2) = v55;
        }
      LABEL_75:
        DWORD3(v60) = 0;
        v17 = 1;
        *v59 = v60;
        return v17 & 1;
      }
      if (v28 >= i) {
        a7 = v70;
        v20 = v68;
        break;
      }
    }
  }
  if ((v20 & 1) != 0) {
    v59 = a10;
    *(_QWORD*)a10 = *(_QWORD*)&a7;
    v60 = *a10;
    DWORD2(v60) = DWORD2(a7);
    goto LABEL_75;
  }
  return v17 & 1;
}

__int64 game_zview_dad0a0()
{
  __int64 v0;

  v0 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      672, 16, 0);
  *(_BYTE*)v0 = 16;
  *(_BYTE*)(v0 + 24) = 16;
  *(_BYTE*)(v0 + 96) = 16;
  *(_BYTE*)(v0 + 120) = 16;
  *(_BYTE*)(v0 + 192) = 16;
  *(_QWORD*)(v0 + 216) = 0;
  *(_QWORD*)(v0 + 504) = 0;
  *(_QWORD*)(v0 + 56) = 0x29B495CE3FC00000LL;
  *(_QWORD*)(v0 + 64) = 0x400000003F800000LL;
  *(_DWORD*)(v0 + 444) = 699700687;
  *(_QWORD*)(v0 + 344) = 0x29B495CE3F800000LL;
  *(_QWORD*)(v0 + 352) = 0x400000003F800000LL;
  *(_QWORD*)(v0 + 560) = 0x3FC0000040400000LL;
  strcpy((char*)(v0 + 121), "Short_L3");
  strcpy((char*)(v0 + 193), "Short_L3");
  *(_QWORD*)(v0 + 72) = 0x3F4CCCCD3D4CCCCDLL;
  *(_QWORD*)(v0 + 80) = 0x3FC0000040100000LL;
  *(_QWORD*)(v0 + 160) = 0x400000003F800000LL;
  *(_QWORD*)(v0 + 168) = 0x3F4CCCCD3D4CCCCDLL;
  strcpy((char*)(v0 + 1), "Short_L1");
  *(_DWORD*)(v0 + 48) = 1;
  *(_BYTE*)(v0 + 52) = 1;
  *(_QWORD*)(v0 + 256) = 0x40A000003F800000LL;
  *(_QWORD*)(v0 + 264) = 0x3F4CCCCD3D4CCCCDLL;
  *(_QWORD*)(v0 + 88) = 0x3E19999A3E4CCCCDLL;
  *(_DWORD*)(v0 + 144) = 1;
  *(_BYTE*)(v0 + 148) = 1;
  *(_QWORD*)(v0 + 176) = 0x3FC0000040100000LL;
  *(_QWORD*)(v0 + 184) = 0x3E19999A3E4CCCCDLL;
  *(_DWORD*)(v0 + 240) = 1;
  *(_BYTE*)(v0 + 244) = 1;
  *(_DWORD*)(v0 + 336) = 1;
  *(_BYTE*)(v0 + 340) = 1;
  *(_DWORD*)(v0 + 432) = 1;
  *(_BYTE*)(v0 + 436) = 1;
  *(_QWORD*)(v0 + 464) = 0x3FC0000040400000LL;
  *(_QWORD*)(v0 + 472) = 0x3E19999A3E4CCCCDLL;
  *(_DWORD*)(v0 + 528) = 1;
  *(_BYTE*)(v0 + 532) = 1;
  *(_QWORD*)(v0 + 568) = 0x3E19999A3E4CCCCDLL;
  *(_BYTE*)(v0 + 628) = 1;
  strcpy((char*)(v0 + 25), "Short_L2");
  strcpy((char*)(v0 + 97), "Short_L2");
  *(_QWORD*)(v0 + 648) = 0x3E4CCCCD3F000000LL;
  GameData_22137b8 = v0;
  *(_DWORD*)(v0 + 152) = 1069547520;
  *(_DWORD*)(v0 + 156) = 699700687;
  *(_DWORD*)(v0 + 248) = 1069547520;
  *(_DWORD*)(v0 + 252) = 699700688;
  *(_QWORD*)(v0 + 360) = 0x3FE666663D4CCCCDLL;
  *(_QWORD*)(v0 + 368) = 0x3FC0000040400000LL;
  *(_DWORD*)(v0 + 440) = 1065353216;
  *(_QWORD*)(v0 + 448) = 0x400000003F800000LL;
  *(_QWORD*)(v0 + 456) = 0x3FE666663D4CCCCDLL;
  *(_DWORD*)(v0 + 536) = 1065353216;
  *(_DWORD*)(v0 + 540) = 699700688;
  *(_QWORD*)(v0 + 544) = 0x40A000003F800000LL;
  *(_QWORD*)(v0 + 552) = 0x3FE666663D4CCCCDLL;
  *(_QWORD*)(v0 + 584) = 0;
  *(_QWORD*)(v0 + 600) = 0;
  *(_DWORD*)(v0 + 624) = 0;
  *(_QWORD*)(v0 + 632) = 1065353216;
  *(_QWORD*)(v0 + 640) = 1065353216;
  *(_QWORD*)(v0 + 656) = 1069547520;
  *(_QWORD*)(v0 + 664) = 0;
  GameData_22137c0 = v0 + 672;
  GameData_22137c8 = v0 + 672;
  *(_QWORD*)(v0 + 272) = 0x3FC0000040100000LL;
  *(_QWORD*)(v0 + 280) = 0x3E19999A3ECCCCCDLL;
  *(_QWORD*)(v0 + 376) = 0x3E19999A3E4CCCCDLL;
  *(_QWORD*)(v0 + 384) = 0x5F6D756964654D12LL;
  *(_QWORD*)(v0 + 288) = 0x5F6D756964654D12LL;
  *(_QWORD*)(v0 + 296) = 12620;
  *(_QWORD*)(v0 + 312) = 0x5F6D756964654D12LL;
  *(_QWORD*)(v0 + 320) = 12876;
  *(_QWORD*)(v0 + 392) = 12876;
  *(_QWORD*)(v0 + 408) = 0x5F6D756964654D12LL;
  *(_QWORD*)(v0 + 416) = 13132;
  *(_QWORD*)(v0 + 480) = 0x5F6D756964654D12LL;
  *(_QWORD*)(v0 + 488) = 13132;
  *(_QWORD*)(v0 + 576) = 0x61727541676E440ELL;
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
