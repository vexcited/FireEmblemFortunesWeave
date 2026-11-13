#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64* game_UnitPool_Get(_BYTE*);
__int64 GameHr_c8b5a0(__int64, unsigned int, __int64, unsigned int,
                      unsigned int, unsigned int, unsigned int);
__int64 GameRoutine_78d0e0();
__int64 GameRoutine_845bc0(__int64, __int64);
__int64 GameRoutine_f098f0(__int64 result, __int64*, char);
__int64 ProcMapSeqTargetSelect_78f500(__int64);
__int64 Situation_7653d0();
__int64 UnitActor_81ab40(__int64, float, float);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_809dc0(__int64, _QWORD*, __n128);
__int64 game_gameui_FloatingHelp_CheckNeedUpdateTargetElement(__int64 result,
                                                              __int64);
__int64 game_map_7d1920(__int64, char**);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
bool game_map_782c60(_QWORD*, int, int, long double);
bool game_map_786420(_QWORD*, int, int, long double);
bool game_map_Cursor_Impl_Tick(__int64*, __int64, double, double, double,
                               long double, long double, long double,
                               long double, long double);
char* GameRoutine_6e7840(char*, char*, char*);
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN GameData_1b47d78;
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a83090;
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca060;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd120;
extern __int64 GameData_21cd128;
extern __int64 GameData_21cd148;
extern __int64 GameData_21f1e08;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_g_game_setting_ptr;
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
void __attribute__((noreturn)) GameRoutine_60a310();
void game_map_a18af0(int*, int*, int*, __int64*);
void game_map_a18eb0(int*, int*, int*, int*, int*, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_map_726d70();
__int64 game_map_75eb40(__int64 a1);
__int64 game_map_783be0(__int64 result, int* a2, int* a3, _QWORD* a4,
                        __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                        long double a9);
__int64 game_map_7873a0(__int64 result, int* a2, int* a3, _QWORD* a4,
                        __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                        long double a9);
__int64 game_map_7890a0(__int64 a1, double a2, double a3, double a4,
                        long double a5, long double a6, long double a7,
                        long double a8, long double a9);
__int64 game_map_78c350(__int64 a1, double a2, double a3, double a4,
                        long double a5, long double a6, long double a7,
                        long double a8, long double a9);
__int64 game_map_7c91c0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5);
void game_map_a17d20(int* a1, int* a2, __int64* a3, __int64 a4, char a5);
void game_map_a18d30(int* a1, int* a2, int* a3, int* a4, __int64* a5);
bool game_map_a190c0(int* a1, int* a2, __int64* a3);

__int64 game_map_726d70()
{

#pragma clang fp contract(off)
  __int64 result;
  __n128 v1;
  __int64 v2;
  unsigned __int64 v3;
  __n128* v4;
  __n128 v5;
  __n128 v6;

  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = Situation_7653d0(),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((result & 1) == 0) {
    v2 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v3 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v3 + 172) == *(float*)(v3 + 168) &&
          (v4 = (__n128*)(v3 + 160),
           v1 = ((__n128 (*)(unsigned __int64)) *
                 (_QWORD*)(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160),
           LANES128(v1).n128_f32[3] == 0x1.0000000000000p+0f)) {
        if (LANES128(*(v4)).n128_f32[3] == LANES128(*(v4)).n128_f32[2]) {
          (*(void (**)(__n128*))(LANES128(*(v4)).n128_u64[0] + 16))(v4),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v5 = v4[3];
        }
        v6 = v5;
        PSEUDO_LOW_LANE128(v5, n128_u32,
                           COERCE_UNSIGNED_INT((float)(0x1.0000000000000p-2f)));
        return game_809dc0(v2, &v6, v5);
      }
      else {
        LANES128(v1).n128_u32[0] =
            COERCE_UNSIGNED_INT((float)(0x1.0000000000000p-2f));
        return game_809dc0(v2, GameData_212c960, v1);
      }
    }
  }
  return result;
}

__int64 game_map_75eb40(__int64 a1)
{
  __int64* v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  long double v10;
  __int64 v11;
  float32x4_t v12;
  float v13;
  float32x4_t v14;
  int8x16_t v15;
  float v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  float32x4_t v23;
  float v24;
  float32x4_t v25;
  int8x16_t v26;
  float v27;
  int8x16_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  float32x4_t v37;
  long double v38;
  float32x4_t v39;
  __int128 v40;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  {
    v2 = GameData_212cfd0[0];
    __asm__ volatile("" ::"r"(v2));
  }
  {
    result = *GameData_212cfd0[0] + 8;
    __asm__ volatile("" ::"r"(result));
  }
  if (*(_BYTE*)result == 0) {
    return result;
  }
  result = (__int64)game_UnitPool_Get((_BYTE*)result),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (result == 0) {
    return result;
  }
  if (*(_BYTE*)(*v2 + 317) == 0) {
    return result;
  }
  v4 = (_QWORD*)result;
  result = (__int64)game_UnitPool_Get((_BYTE*)(*v2 + 317)),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (result == 0) {
    return result;
  }
  {
    v5 = v4[55];
    __asm__ volatile("" ::"r"(v5));
  }
  v6 = result;
  if (v5 == 0) {
    v7 = 9;
    {
      v8 = *(_QWORD*)(result + 440);
      __asm__ volatile("" ::"r"(v8));
    }
    if (v8 != 0) {
      goto LABEL_7;
    }
  LABEL_9:
    v9 = 9;
    goto LABEL_10;
  }
  {
    v7 = *(unsigned __int8*)(v5 + 16);
    __asm__ volatile("" ::"r"(v7));
  }
  {
    v8 = *(_QWORD*)(result + 440);
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 == 0) {
    goto LABEL_9;
  }
LABEL_7:
  {
    v9 = *(unsigned __int8*)(v8 + 16);
    __asm__ volatile("" ::"r"(v9));
  }
LABEL_10:
  if (GameData_21cd148 != 0) {
    result = GameHr_c8b5a0(
        a1, 0x16u, (__int64)v4, *(unsigned __int16*)(v4[49] + 16LL), v7,
        *(unsigned __int16*)(*(_QWORD*)(result + 392) + 16LL), v9),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((result & 1) != 0) {
      {
        v11 = v4[1];
        __asm__ volatile("" ::"r"(v11));
      }
      if (v11 != 0) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)(v6 + 48) + 16LL))((void*)(&v38), v6 + 48),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = (__int64)X8CALL_X0(
            _QWORD*,
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
                *(_QWORD*)(v11 + 48) + 16LL))((void*)&v37, v11 + 48)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v10 = v38;
        v12 = vsubq_f32(*(float32x4_t*)&v38, v37);
        *(float*)&v10 =
            vmuls_lane_f32(LANES128(v12).n128_f32[2], v12, 2) +
            (float)(LANES128(v12).n128_f32[0] * LANES128(v12).n128_f32[0]);
        if (*(float*)&v10 >= 0x1.0000000000000p-4f) {
          v13 = 0x0.0p+0f;
          if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                                   COERCE_AS(float32x2_t, 1065353216LL)))
                  .n64_f32[0] > 0x0.0p+0f) {
            LANES128(v14).n128_u64[0] = LANES128(v12).n128_u32[0];
            LANES128(v14).n128_u64[1] = LANES128(v12).n128_u32[2];
            v15 = vmulq_f32(v14, v14);
            LANES128(v15).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                    .n64_f32[0] > 0x0.0p+0f) {
              {
                v33 = LANES128(v12).n128_u32[2];
                __asm__ volatile("" ::"r"(v33));
              }
              {
                v35 = LANES128(v12).n128_u32[0];
                __asm__ volatile("" ::"r"(v35));
              }
              v39 = v14;
              v40 = GameData_1a83090;
              v16 = math_Vec3_Angle((float32x4_t*)&v40, &v39),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              LANES128(v17).n128_u64[0] = v35;
              LANES128(v17).n128_u64[1] = v33;
              LANES128(v18).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v19).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v20).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v18).n128_i8[8] =
                  vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                            COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              LANES128(v21).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v20).n128_i8[8] =
                  vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              *(int8x8_t*)&LANES128(v19).n128_i8[8] =
                  vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              *(int8x8_t*)&LANES128(v21).n128_i8[8] =
                  vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                            COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              if (LANES128_OF(vmlsq_f32(vmulq_f32(v18, v19), v20, v21))
                      .n128_f32[1] < 0x0.0p+0f) {
                v16 = -v16;
              }
              v13 = v16 * 0x1.ca5dc00000000p+5f;
            }
          }
          result = UnitActor_81ab40((__int64)v4, v13, -0x1.0000000000000p+0f),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      {
        v22 = *(_QWORD*)(v6 + 8);
        __asm__ volatile("" ::"r"(v22));
      }
      if (v22 != 0) {
        (*(__attribute__((swiftcall)) void (**)(
            PSEUDO_X8, _QWORD*, long double))(v4[6] + 16LL))((void*)(&v38),
                                                             v4 + 6, v10),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = (__int64)X8CALL_X0(
            _QWORD*,
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
                *(_QWORD*)(v22 + 48) + 16LL))((void*)&v37, v22 + 48)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v23 = vsubq_f32(*(float32x4_t*)&v38, v37);
        if ((float)(vmuls_lane_f32(LANES128(v23).n128_f32[2], v23, 2) +
                    (float)(LANES128(v23).n128_f32[0] *
                            LANES128(v23).n128_f32[0])) >=
            0x1.0000000000000p-4f) {
          v24 = 0x0.0p+0f;
          if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                                   COERCE_AS(float32x2_t, 1065353216LL)))
                  .n64_f32[0] > 0x0.0p+0f) {
            LANES128(v25).n128_u64[0] = LANES128(v23).n128_u32[0];
            LANES128(v25).n128_u64[1] = LANES128(v23).n128_u32[2];
            v26 = vmulq_f32(v25, v25);
            LANES128(v26).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
                    .n64_f32[0] > 0x0.0p+0f) {
              {
                v34 = LANES128(v23).n128_u32[2];
                __asm__ volatile("" ::"r"(v34));
              }
              {
                v36 = LANES128(v23).n128_u32[0];
                __asm__ volatile("" ::"r"(v36));
              }
              v39 = v25;
              v40 = GameData_1a83090;
              v27 = math_Vec3_Angle((float32x4_t*)&v40, &v39),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              LANES128(v28).n128_u64[0] = v36;
              LANES128(v28).n128_u64[1] = v34;
              LANES128(v29).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v30).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v31).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v29).n128_i8[8] =
                  vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                            COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              LANES128(v32).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v31).n128_i8[8] =
                  vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              *(int8x8_t*)&LANES128(v30).n128_i8[8] =
                  vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              *(int8x8_t*)&LANES128(v32).n128_i8[8] =
                  vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                            COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              if (LANES128_OF(vmlsq_f32(vmulq_f32(v29, v30), v31, v32))
                      .n128_f32[1] < 0x0.0p+0f) {
                v27 = -v27;
              }
              v24 = v27 * 0x1.ca5dc00000000p+5f;
            }
          }
          return UnitActor_81ab40(v6, v24, -0x1.0000000000000p+0f);
        }
      }
    }
  }
  return result;
}

__int64 game_map_783be0(__int64 result, int* a2, int* a3, _QWORD* a4,
                        __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                        long double a9)
{

#pragma clang fp contract(off)
  __int64 v11;
  int* v16;
  __int64 v17;
  int* v18;
  unsigned __int64 v19;
  int* v20;
  int* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  int* v26;
  int* v27;
  int v28;
  int* v29;
  long double v30;
  int* v31;
  int* v32;
  __int64 v33;
  __int64 v34;
  int* v35;
  int* v36;
  __int64 v37;
  int* v38;
  int* v39;
  int v40;
  int* v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int* v51;
  _QWORD v52[2];

  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a6 != 0) {
    v11 = a6;
    v16 = (int*)result;
    while (a5 > a8 && v11 > a8) {
      if (a5 == 0) {
        return result;
      }
      while (1) {
        result = ((__int64 (*)(_QWORD*, int, int, long double))game_map_782c60)(
            a4, *a2, *v16, a9),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((result & 1) != 0) {
          break;
        }
        ++v16;
        if (--a5 == 0) {
          return result;
        }
      }
      v50 = a7;
      v51 = a3;
      if (a5 >= v11) {
        if (a5 == 1) {
          v45 = *v16;
          *v16 = *a2;
          *a2 = v45;
          return result;
        }
        v23 = a5 / 2;
        v24 = a4[1];
        v18 = &v16[a5 / 2];
        v52[0] = *a4;
        v52[1] = v24;
        if (a3 != a2) {
          v25 = a3 - a2;
          v49 = a8;
          a3 = a2;
          do {
            v26 = &a3[v25 >> 1];
            v28 = *v26;
            v27 = v26 + 1;
            if (game_map_782c60(v52, v28, *v18, a9)) {
              a3 = v27;
              v25 += ~(v25 >> 1);
            }
            else {
              v25 >>= 1;
            }
          } while (v25 != 0);
          v23 = a5 / 2;
          a8 = v49;
        }
        v17 = a3 - a2;
      }
      else {
        v17 = v11 / 2;
        a3 = &a2[v11 / 2];
        if (v16 == a2) {
          v18 = a2;
        }
        else {
          v48 = a8;
          v18 = v16;
          v19 = a2 - v16;
          do {
            v20 = &v18[v19 >> 1];
            v22 = *v20;
            v21 = v20 + 1;
            if (game_map_782c60(a4, *a3, v22, a9)) {
              v19 >>= 1;
            }
            else {
              v18 = v21;
              v19 += ~(v19 >> 1);
            }
          } while (v19 != 0);
          v17 = v11 / 2;
          a8 = v48;
        }
        v23 = v18 - v16;
      }
      a5 -= v23;
      v11 -= v17;
      v29 = (int*)GameRoutine_6e7840((char*)v18, (char*)a2, (char*)a3),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v31 = v29;
      if (v23 + v17 >= a5 + v11) {
        v33 = v11;
        v11 = v17;
        result =
            game_map_783be0((__int64)v29, a3, v51, a4, a5, v33, v50, a8, v30),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        a3 = v18;
        a7 = v50;
        a5 = v23;
        v51 = v31;
      }
      else {
        v32 = v18;
        a7 = v50;
        result =
            game_map_783be0((__int64)v16, v32, v29, a4, v23, v17, v50, a8, v30),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v16 = v31;
      }
      a2 = a3;
      a3 = v51;
      if (v11 == 0) {
        return result;
      }
    }
    if (a5 <= v11) {
      if (v16 != a2) {
        v37 = -a7;
        v38 = (int*)a7;
        v39 = v16;
        do {
          v40 = *v39++;
          v37 -= 4;
          *v38++ = v40;
        } while (v39 != a2);
        while (a2 != a3) {
          result =
              ((__int64 (*)(_QWORD*, int, int, long double))game_map_782c60)(
                  a4, *a2, *(_DWORD*)a7, a9),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((result & 1) != 0) {
            v41 = a2;
          }
          else {
            v41 = (int*)a7;
          }
          if ((result & 1) != 0) {
            v42 = 4;
          }
          else {
            v42 = 0;
          }
          v43 = *v41;
          a2 = (int*)((char*)a2 + v42);
          if ((result & 1) != 0) {
            v44 = 0;
          }
          else {
            v44 = 4;
          }
          a7 += v44;
          *v16++ = v43;
          if (v38 == (int*)a7) {
            return result;
          }
        }
        return memmove((__int64)v16, a7, -(a7 + v37));
      }
    }
    else if (a2 != a3) {
      v34 = 0;
      do {
        *(_DWORD*)(a7 + v34 * 4) = a2[v34];
        ++v34;
      } while (&a2[v34] != a3);
      v35 = (int*)(a7 + v34 * 4);
      while (a2 != v16) {
        result = ((__int64 (*)(_QWORD*, int, int, long double))game_map_782c60)(
            a4, *(v35 - 1), *(a2 - 1), a9),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((result & 1) != 0) {
          v36 = a2;
        }
        else {
          v36 = v35;
        }
        if ((result & 1) != 0) {
          --a2;
        }
        else {
          --v35;
        }
        *--a3 = *(v36 - 1);
        if (v35 == (int*)a7) {
          return result;
        }
      }
      if ((int*)a7 != v35) {
        v46 = 0x3FFFFFFFFFFFFFFFLL;
        do {
          v47 = *--v35;
          a3[v46--] = v47;
        } while (v35 != (int*)a7);
      }
    }
  }
  return result;
}

__int64 game_map_7873a0(__int64 result, int* a2, int* a3, _QWORD* a4,
                        __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                        long double a9)
{

#pragma clang fp contract(off)
  __int64 v11;
  int* v16;
  __int64 v17;
  int* v18;
  unsigned __int64 v19;
  int* v20;
  int* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  int* v26;
  int* v27;
  int v28;
  int* v29;
  long double v30;
  int* v31;
  int* v32;
  __int64 v33;
  __int64 v34;
  int* v35;
  int* v36;
  __int64 v37;
  int* v38;
  int* v39;
  int v40;
  int* v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int* v51;
  _QWORD v52[2];

  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a6 != 0) {
    v11 = a6;
    v16 = (int*)result;
    while (a5 > a8 && v11 > a8) {
      if (a5 == 0) {
        return result;
      }
      while (1) {
        result = ((__int64 (*)(_QWORD*, int, int, long double))game_map_786420)(
            a4, *a2, *v16, a9),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((result & 1) != 0) {
          break;
        }
        ++v16;
        if (--a5 == 0) {
          return result;
        }
      }
      v50 = a7;
      v51 = a3;
      if (a5 >= v11) {
        if (a5 == 1) {
          v45 = *v16;
          *v16 = *a2;
          *a2 = v45;
          return result;
        }
        v23 = a5 / 2;
        v24 = a4[1];
        v18 = &v16[a5 / 2];
        v52[0] = *a4;
        v52[1] = v24;
        if (a3 != a2) {
          v25 = a3 - a2;
          v49 = a8;
          a3 = a2;
          do {
            v26 = &a3[v25 >> 1];
            v28 = *v26;
            v27 = v26 + 1;
            if (game_map_786420(v52, v28, *v18, a9)) {
              a3 = v27;
              v25 += ~(v25 >> 1);
            }
            else {
              v25 >>= 1;
            }
          } while (v25 != 0);
          v23 = a5 / 2;
          a8 = v49;
        }
        v17 = a3 - a2;
      }
      else {
        v17 = v11 / 2;
        a3 = &a2[v11 / 2];
        if (v16 == a2) {
          v18 = a2;
        }
        else {
          v48 = a8;
          v18 = v16;
          v19 = a2 - v16;
          do {
            v20 = &v18[v19 >> 1];
            v22 = *v20;
            v21 = v20 + 1;
            if (game_map_786420(a4, *a3, v22, a9)) {
              v19 >>= 1;
            }
            else {
              v18 = v21;
              v19 += ~(v19 >> 1);
            }
          } while (v19 != 0);
          v17 = v11 / 2;
          a8 = v48;
        }
        v23 = v18 - v16;
      }
      a5 -= v23;
      v11 -= v17;
      v29 = (int*)GameRoutine_6e7840((char*)v18, (char*)a2, (char*)a3),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v31 = v29;
      if (v23 + v17 >= a5 + v11) {
        v33 = v11;
        v11 = v17;
        result =
            game_map_7873a0((__int64)v29, a3, v51, a4, a5, v33, v50, a8, v30),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        a3 = v18;
        a7 = v50;
        a5 = v23;
        v51 = v31;
      }
      else {
        v32 = v18;
        a7 = v50;
        result =
            game_map_7873a0((__int64)v16, v32, v29, a4, v23, v17, v50, a8, v30),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v16 = v31;
      }
      a2 = a3;
      a3 = v51;
      if (v11 == 0) {
        return result;
      }
    }
    if (a5 <= v11) {
      if (v16 != a2) {
        v37 = -a7;
        v38 = (int*)a7;
        v39 = v16;
        do {
          v40 = *v39++;
          v37 -= 4;
          *v38++ = v40;
        } while (v39 != a2);
        while (a2 != a3) {
          result =
              ((__int64 (*)(_QWORD*, int, int, long double))game_map_786420)(
                  a4, *a2, *(_DWORD*)a7, a9),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((result & 1) != 0) {
            v41 = a2;
          }
          else {
            v41 = (int*)a7;
          }
          if ((result & 1) != 0) {
            v42 = 4;
          }
          else {
            v42 = 0;
          }
          v43 = *v41;
          a2 = (int*)((char*)a2 + v42);
          if ((result & 1) != 0) {
            v44 = 0;
          }
          else {
            v44 = 4;
          }
          a7 += v44;
          *v16++ = v43;
          if (v38 == (int*)a7) {
            return result;
          }
        }
        return memmove((__int64)v16, a7, -(a7 + v37));
      }
    }
    else if (a2 != a3) {
      v34 = 0;
      do {
        *(_DWORD*)(a7 + v34 * 4) = a2[v34];
        ++v34;
      } while (&a2[v34] != a3);
      v35 = (int*)(a7 + v34 * 4);
      while (a2 != v16) {
        result = ((__int64 (*)(_QWORD*, int, int, long double))game_map_786420)(
            a4, *(v35 - 1), *(a2 - 1), a9),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((result & 1) != 0) {
          v36 = a2;
        }
        else {
          v36 = v35;
        }
        if ((result & 1) != 0) {
          --a2;
        }
        else {
          --v35;
        }
        *--a3 = *(v36 - 1);
        if (v35 == (int*)a7) {
          return result;
        }
      }
      if ((int*)a7 != v35) {
        v46 = 0x3FFFFFFFFFFFFFFFLL;
        do {
          v47 = *--v35;
          a3[v46--] = v47;
        } while (v35 != (int*)a7);
      }
    }
  }
  return result;
}

__int64 game_map_7890a0(__int64 a1, double a2, double a3, double a4,
                        long double a5, long double a6, long double a7,
                        long double a8, long double a9)
{

#pragma clang fp contract(off)
  int v10;
  __int64 result;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int8* v16;
  unsigned int v17;
  bool v18;
  int v19;
  __int64* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char v24;
  _QWORD v25[25];

  v10 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
  if ((v10 & 1) != 0) {
    if ((GameRoutine_78d0e0() & 1) == 0) {
      snd_Fade_Fade_10c830((__int64)v25, 0x0.0p+0f);
      snd_play_ff2d0((__int64)"SE_SYS_NG", (__int64)"SE_SYS_NG", (__int64)v25,
                     0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      return snd_Fade_Destroy_Fade(v25);
    }
    snd_Fade_Fade_10c830((__int64)v25, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_Decide_M", (__int64)"SE_SYS_Decide_M",
                   (__int64)v25, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    result = snd_Fade_Destroy_Fade(v25);
    v15 = 4;
    goto LABEL_18;
  }
  if ((v10 & 2) != 0) {
    snd_Fade_Fade_10c830((__int64)v25, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_Cancel_M", (__int64)"SE_SYS_Cancel_M",
                   (__int64)v25, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    result = snd_Fade_Destroy_Fade(v25);
    v15 = 7;
  LABEL_18:
    *(_DWORD*)(a1 + 152) = v15;
    v16 = *(unsigned __int8**)(a1 + 16);
    if (v16 != nullptr) {
      v17 = *v16;
      v18 = v17 > 0x10;
      v19 = (1 << v17) & 0x1CE00;
      if (!v18 && v19 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    return result;
  }
  if ((v10 & 0x40) != 0 &&
      (GameData_21f1e08 == 0 || (*(_BYTE*)(GameData_21f1e08 + 256) & 1) == 0) &&
      (GameData_21cd128 == 0 || *(_QWORD*)(GameData_21cd128 + 96) ==
                                    *(_QWORD*)(GameData_21cd128 + 88))) {
    v25[0] = 0;
    v25[1] = 0;
    result =
        game_gameui_FloatingHelp_CheckNeedUpdateTargetElement(a1, (__int64)v25);
    if ((result & 1) != 0) {
      return result;
    }
  }
  result = ((__int64 (*)(__int64*, __int64, double, double, double, long double,
                         long double, long double, long double,
                         long double))game_map_Cursor_Impl_Tick)(
      *(__int64**)(*GameData_212cfc0[0] + 48), 0, a2, a3, a4, a5, a6, a7, a8,
      a9);
  if ((result & 1) == 0) {
    return result;
  }
  snd_Fade_Fade_10c830((__int64)v25, 0x0.0p+0f);
  snd_play_ff2d0((__int64)"SE_SYS_Cursor_Target",
                 (__int64)"SE_SYS_Cursor_Target", (__int64)v25, 0, 0x10001u, 0,
                 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v25);
  GameRoutine_78d0e0();
  result = GameData_21cd120;
  if (GameData_21cd120 == 0) {
    return result;
  }
  v12 = *(_DWORD*)(a1 + 276);
  if ((v12 & 0x80000000) != 0 ||
      (v13 = *GameData_212cff0[0],
       *(char*)(*GameData_212cff0[0] + 12LL * v12 + 12413) < 0) ||
      *(char*)(*GameData_212cff0[0] + 12LL * v12 + 12414) < 0) {
    v12 = *(_DWORD*)(a1 + 272);
    if ((v12 & 0x80000000) != 0) {
      v21 = (__int64*)&GameData_1b47d78;
      goto LABEL_30;
    }
    v13 = *GameData_212cff0[0];
    v14 = 64;
  }
  else {
    v14 = 12408;
  }
  v21 = (__int64*)(v13 + v14 + 12LL * v12 + 4);
LABEL_30:
  v23 = *(_QWORD*)(a1 + 8);
  v22 = *(_QWORD*)(a1 + 16);
  if (v23 > v22) {
  LABEL_33:
    v24 = 0;
  }
  else {
    while (*(_BYTE*)v22 != 2) {
      v22 -= 64LL;
      if (v23 > v22) {
        goto LABEL_33;
      }
    }
    v24 = (unsigned int)(*(_DWORD*)(v22 + 32) - 5) < 2;
  }
  return GameRoutine_f098f0(GameData_21cd120, v21, v24);
}

__int64 game_map_78c350(__int64 a1, double a2, double a3, double a4,
                        long double a5, long double a6, long double a7,
                        long double a8, long double a9)
{

#pragma clang fp contract(off)
  int v10;
  __int64 result;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned int v20;
  const char* v21;
  unsigned __int8* v22;
  unsigned int v23;
  bool v24;
  int v25;
  const char* v27;
  float v28;
  const char* v29;
  __int64 v30;
  __int64*** v31;
  __int64** v32;
  char v33;
  unsigned __int64 v34;
  __int64* v35;
  _QWORD v36[25];

  v10 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
  if ((v10 & 1) != 0) {
    if ((ProcMapSeqTargetSelect_78f500(a1) & 1) == 0) {
      snd_Fade_Fade_10c830((__int64)v36, 0x0.0p+0f);
      v27 = "SE_SYS_NG";
      v28 = 0x1.0000000000000p+0f;
      v29 = "SE_SYS_NG";
    LABEL_36:
      snd_play_ff2d0((__int64)v27, (__int64)v29, (__int64)v36, 0, 0x10001u, 0,
                     0x0.0p+0f, v28);
      return snd_Fade_Destroy_Fade(v36);
    }
    if (*(_DWORD*)(a1 + 152) == 8) {
      v20 = *(unsigned __int8*)(GameData_21cd0e8 + 32) - 3;
      if (v20 <= 6 && ((0x6Fu >> v20) & 1) != 0) {
        v21 = "SE_SYS_Decide_Battle";
      LABEL_35:
        snd_Fade_Fade_10c830((__int64)v36, 0x0.0p+0f);
        v28 = 0x1.0000000000000p+0f;
        v27 = v21;
        v29 = v21;
        goto LABEL_36;
      }
      if ((*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF) != 0) {
        v30 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                         8LL * (*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF));
        if (v30 != 0 && *(_BYTE*)(v30 + 104) == 9) {
          v21 = "SE_SYS_Decide_H";
          goto LABEL_35;
        }
      }
    }
    v21 = "SE_SYS_Decide_M";
    goto LABEL_35;
  }
  if ((v10 & 2) != 0) {
    snd_Fade_Fade_10c830((__int64)v36, 0x0.0p+0f);
    snd_play_ff2d0((__int64)"SE_SYS_Cancel_M", (__int64)"SE_SYS_Cancel_M",
                   (__int64)v36, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
    result = snd_Fade_Destroy_Fade(v36);
    *(_DWORD*)(a1 + 152) = 4;
    v22 = *(unsigned __int8**)(a1 + 16);
    if (v22 != nullptr) {
      v23 = *v22;
      v24 = v23 > 0x10;
      v25 = (1 << v23) & 0x1CE00;
      if (!v24 && v25 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
  }
  else if ((v10 & 0x40) == 0 ||
           GameData_21f1e08 != 0 &&
               (*(_BYTE*)(GameData_21f1e08 + 256) & 1) != 0 ||
           GameData_21cd128 != 0 && *(_QWORD*)(GameData_21cd128 + 96) !=
                                        *(_QWORD*)(GameData_21cd128 + 88) ||
           (v36[0] = 0, v36[1] = 0,
            ((result = game_gameui_FloatingHelp_CheckNeedUpdateTargetElement(
                  a1, (__int64)v36)) &
             1) == 0)) {
    v12 = GameData_212cfc0[0];
    result = ((__int64 (*)(__int64*, __int64, double, double, double,
                           long double, long double, long double, long double,
                           long double))game_map_Cursor_Impl_Tick)(
        *(__int64**)(*GameData_212cfc0[0] + 48), 0, a2, a3, a4, a5, a6, a7, a8,
        a9);
    if ((result & 1) != 0) {
      snd_Fade_Fade_10c830((__int64)v36, 0x0.0p+0f);
      snd_play_ff2d0((__int64)"SE_SYS_Cursor_Target",
                     (__int64)"SE_SYS_Cursor_Target", (__int64)v36, 0, 0x10001u,
                     0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v36);
      v13 = *v12;
      v14 = GameData_212cff0[0];
      result = GameRoutine_845bc0(*GameData_212cff0[0] + 12408,
                                  *GameData_212cff0[0] + 8);
      if ((result & 1) != 0) {
        v15 = *(_QWORD*)(*v14 + 24712);
        if (v15 != 0 && *(_QWORD*)(*v14 + 24728) != 0) {
          v17 = v15 - 1;
          v18 = (unsigned __int16)(*(_DWORD*)(*(_QWORD*)(*v12 + 48) + 8LL) |
                                   ((unsigned __int16)*(
                                        _DWORD*)(*(_QWORD*)(*v12 + 48) + 12LL)
                                    << 8));
          if ((v15 & (v15 - 1)) != 0) {
            v19 = (unsigned __int16)(*(_DWORD*)(*(_QWORD*)(*v12 + 48) + 8LL) |
                                     ((unsigned __int16)*(
                                          _DWORD*)(*(_QWORD*)(*v12 + 48) + 12LL)
                                      << 8));
            if (v15 <= v18) {
              v19 = (unsigned int)v18 % (unsigned int)v15;
            }
          }
          else {
            v19 = ((_DWORD)v15 - 1) & (unsigned int)v18;
          }
          v31 = *(__int64****)(*(_QWORD*)(*v14 + 24704) + 8 * v19);
          if (v31 != nullptr) {
            v32 = *v31;
            if (v32 != nullptr) {
              if ((v15 & v17) == 0) {
                while (1) {
                  v35 = v32[1];
                  if (v35 == (__int64*)v18) {
                    if (*((unsigned __int16*)v32 + 8) == (_DWORD)v18) {
                      goto LABEL_54;
                    }
                  }
                  else if (((unsigned __int64)v35 & v17) != v19) {
                    goto LABEL_55;
                  }
                  v32 = (__int64**)*v32;
                  v33 = 0;
                  if (v32 == nullptr) {
                    goto LABEL_56;
                  }
                }
              }
              while (1) {
                v34 = (unsigned __int64)v32[1];
                if (v34 == v18) {
                  if (*((unsigned __int16*)v32 + 8) == (_DWORD)v18) {
                  LABEL_54:
                    v33 = 1;
                    goto LABEL_56;
                  }
                }
                else {
                  if (v34 >= v15) {
                    v34 %= v15;
                  }
                  if (v34 != v19) {
                    break;
                  }
                }
                v32 = (__int64**)*v32;
                v33 = 0;
                if (v32 == nullptr) {
                  goto LABEL_56;
                }
              }
            }
          }
        }
      }
    LABEL_55:
      v33 = 0;
    LABEL_56:
      *(_BYTE*)(*(_QWORD*)(v13 + 48) + 240LL) = v33;
    }
  }
  return result;
}

__int64 game_map_7c91c0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64* v10;
  __int64 v11;
  __int64 v12;
  char v13;
  char v14;
  __int64 v15;
  float32x4_t v16;
  int8x16_t v17;
  unsigned __int64 v18;
  float v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  int v25;
  char v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  char* v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  char v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int16 v43;
  __int64 v44;
  int v45;
  float32x4_t v46;
  __int128 v47;

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v44 = 0;
  v45 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v39 = 9;
  v35 = a2;
  v36 = a3;
  v37 = 0x100000001LL;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       4, 16, 0),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w"));
  *(_BYTE*)v11 = a2;
  *(_BYTE*)(v11 + 1) = a3;
  *(_WORD*)(v11 + 2) = 0;
  v38 = a4;
  v32 = (char*)v11;
  v33 = (char*)(v11 + 4);
  v34 = v11 + 4;
  if (a4 != 0) {
    {
      v12 = *(_QWORD*)(a4 + 440);
      __asm__ volatile("" ::"r"(v12));
    }
    if (v12 != 0) {
      v13 = *(_BYTE*)(v12 + 16);
      __asm__ volatile("" ::"r"(v13));
    }
    else {
      v13 = 9;
    }
    v39 = v13;
    {
      v15 = *(unsigned __int8*)(a4 + 1944);
      __asm__ volatile("" ::"r"(v15));
    }
    v40 = a5;
    if (v15 != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) + 8 * v15);
      __asm__ volatile("" ::"r"(v15));
    }
    v42 = v15;
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                             COERCE_AS(float32x2_t, 1065353216LL)))
                .n64_f32[0] <= 0x0.0p+0f ||
        (LANES128(v16).n128_u32[1] = 0, LANES128(v16).n128_u32[3] = 0,
         LANES128(v16).n128_f32[0] =
             (float)((float)((float)((float)(unsigned int)(*(char*)(a4 + 584) +
                                                           256) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f) -
             (float)((float)((float)((float)(a2 + 256) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f),
         LANES128(v16).n128_f32[2] =
             (float)((float)((float)((float)(unsigned int)(*(char*)(a4 + 585) +
                                                           256) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f) -
             (float)((float)((float)((float)(a3 + 256) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f),
         v17 = vmulq_f32(v16, v16),
         LANES128(v17).n128_u64[0] =
             LANES64_OF(
                 vadd_f32(
                     COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
                 .n64_u64[0],
         LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
                 .n64_f32[0] <= 0x0.0p+0f)) {
      v25 = 0;
    }
    else {
      HIDWORD(v18) = 0;
      *(float*)&v18 =
          (float)((float)((float)((float)(unsigned int)(*(char*)(a4 + 584) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) -
          (float)((float)((float)((float)(a2 + 256) * 0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f);
      v30 = COERCE_UNSIGNED_INT(
          (float)((float)((float)((float)(unsigned int)(*(char*)(a4 + 585) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) -
          (float)((float)((float)((float)(a3 + 256) * 0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f));
      v31 = v18;
      v46 = v16;
      v47 = GameData_1a82c50;
      v19 = math_Vec3_Angle((float32x4_t*)&v47, &v46),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w"));
      LANES128(v20).n128_u64[0] = v31;
      LANES128(v20).n128_u64[1] = v30;
      LANES128(v21).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v22).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v23).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v21).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                    COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v24).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v23).n128_i8[8] =
          vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v22).n128_i8[8] =
          vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v24).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82c50),
                    COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      if (LANES128_OF(vmlsq_f32(vmulq_f32(v21, v22), v23, v24)).n128_f32[1] <
          0x0.0p+0f) {
        v19 = -v19;
      }
      v25 = (int)(float)(v19 * 0x1.ca5dc00000000p+5f);
    }
  }
  else {
    if (GameData_21ca2f8 != 0) {
      v14 = *(_BYTE*)(GameData_21ca2f8 + 24);
      __asm__ volatile("" ::"r"(v14));
    }
    else {
      v14 = 9;
    }
    v25 = 0;
    v39 = v14;
    v40 = a5;
    v42 = 0;
  }
  v45 = v25;
  v43 = 128;
  v26 = game_map_7d1920(a1, &v32),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (v32 != nullptr) {
    {
      v27 = *v10;
      __asm__ volatile("" ::"r"(v27));
    }
    v33 = v32;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(v27 + v28, (__int64)v32),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  return v26 & 1;
}

void game_map_a17d20(int* a1, int* a2, __int64* a3, __int64 a4, char a5)
{

#pragma clang fp contract(off)
  int* v9;
  int* v10;
  int* v11;
  __int64 v12;
  unsigned __int64 v13;
  int* v14;
  int v15;
  int v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  int* v27;
  int* v28;
  int v29;
  __int64 v30;
  float v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  float v36;
  __int64 v37;
  __int64 v38;
  int* v39;
  int* v40;
  int v41;
  int v42;
  __int64 v43;
  float v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  float v49;
  __int64 v50;
  __int64 v51;
  int* v52;
  bool v53;
  int v54;
  int v55;
  __int64 v56;
  float v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  int v62;
  __int64 v63;
  float v64;
  __int64 v65;
  __int64 v66;
  int* v67;
  __int64 v68;
  int v69;
  __int64 v70;
  float v71;
  __int64 v72;
  __int64 v73;
  float v74;
  float v75;
  int* v76;
  __int64 v77;
  int v78;
  int v79;
  __int64 v80;
  float v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  int v86;
  int v87;
  __int64 v88;
  float v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  int v93;
  int v94;
  __int64 v95;
  float v96;
  __int64 v97;
  __int64 v98;
  int* v99;
  int v100;
  __int64 v101;
  float v102;
  __int64 v103;
  __int64 v104;
  int v105;
  int* v106;
  bool v108;
  __int64 v109;
  int* v110;
  int* v111;
  int v112;
  int v113;
  __int64 v114;
  float v115;
  __int64 v116;
  __int64 v117;
  int v118;
  __int64 v119;
  int v120;
  __int64 v121;
  __int64 v122;
  float v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  signed __int64 v127;
  signed __int64 v128;
  __int64 v129;
  __int64 v130;
  int* v131;
  int v132;
  __int64 v133;
  float v134;
  __int64 v135;
  __int64 v136;
  float v137;
  float v138;
  int* v139;
  int v140;
  __int64 v141;
  float v142;
  __int64 v143;
  __int64 v144;
  float v145;
  float v146;
  int v147;
  int* v148;
  __int64 v149;
  __int64 v150;
  int v151;
  __int64 v152;
  float v153;
  __int64 v154;
  __int64 v155;
  float v156;
  float v157;
  __int64 v158;
  float v159;
  __int64 v160;
  __int64 v161;
  bool v162;
  __int64 v163;
  int* v164;
  int* v165;
  int* v166;
  __int64 v167;
  int v168;
  int* v169;
  int v170;
  __int64 v171;
  float v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  int v178;
  int* v179;
  __int64 v180;
  float v181;
  __int64 v182;
  __int64 v183;
  int v184;
  int* v185;
  __int64 v186;
  float v187;
  __int64 v188;
  __int64 v189;
  int v190;
  int v191;
  __int64 v192;
  float v193;
  __int64 v194;
  __int64 v195;
  int v196;
  int* v197;
  int v198;
  __int64 v199;
  float v200;
  __int64 v201;
  __int64 v202;
  int* v203;
  int* v204;
  signed __int64 v205;
  __int64 v206;
  int v207;
  int* v208;
  int* v209;
  int v210;

  v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
  v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
  v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
  v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
  v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
  v153 = COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
  v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
  v172 = COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v181 = COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
  v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
  v193 = COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
  v200 = COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
  v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
  v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
  v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
LABEL_1:
  v9 = a2 - 1;
  v208 = a2;
  v10 = a1;
  v203 = a2 - 3;
  v204 = a2 - 2;
  while (1) {
    v11 = v208;
    a1 = v10;
    v12 = v208 - v10;
    v13 = v12 - 2;
    if (v12 <= 2) {
      break;
    }
    switch (v12) {
    case 3LL:
      game_map_a18af0(v10, v10 + 1, v9, a3),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
          v172 =
              COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
          v200 =
              COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
      return;
    case 4LL:
      game_map_a18d30(v10, v10 + 1, v10 + 2, v9, a3),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
          v172 =
              COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
          v200 =
              COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
      return;
    case 5LL:
      game_map_a18eb0(v10, v10 + 1, v10 + 2, v10 + 3, v9, a3),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
          v172 =
              COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
          v200 =
              COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
      return;
    default:
      break;
    }
  LABEL_9:
    if (v12 <= 23) {
      v106 = v10 + 1;
      v108 = v10 == v208 || v106 == v208;
      if ((a5 & 1) != 0) {
        if (v108) {
          return;
        }
        v109 = 0;
        v110 = v10;
        while (1) {
          {
            v113 = *v110;
            __asm__ volatile("" ::"r"(v113));
          }
          {
            v112 = v110[1];
            __asm__ volatile("" ::"r"(v112));
          }
          v110 = v106;
          {
            v114 = *(_QWORD*)(*a3 + 32);
            __asm__ volatile("" ::"r"(v114));
          }
          v210 = v112;
          if (v114 == 0) {
            break;
          }
          (*(void (**)(__int64, int*))(*(_QWORD*)v114 + 48LL))(v114, &v210),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v153 = COERCE_AS(__typeof__(v153),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v159 = COERCE_AS(__typeof__(v159),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v172 = COERCE_AS(__typeof__(v172),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v181 = COERCE_AS(__typeof__(v181),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v193 = COERCE_AS(__typeof__(v193),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v200 = COERCE_AS(__typeof__(v200),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          {
            v116 = *a3;
            __asm__ volatile("" ::"r"(v116));
          }
          v210 = v113;
          {
            v117 = *(_QWORD*)(v116 + 32);
            __asm__ volatile("" ::"r"(v117));
          }
          if (v117 == 0) {
            break;
          }
          if (v115 < (*(float (**)(__int64, int*))(*(_QWORD*)v117 + 48LL))(
                         v117, &v210)) {
            {
              v118 = *v110;
              __asm__ volatile("" ::"r"(v118));
            }
            v119 = v109;
            do {
              *(int*)((char*)v10 + v119 + 4) = *(int*)((char*)v10 + v119);
              if (v119 == 0) {
                v111 = v10;
                goto LABEL_99;
              }
              {
                v120 = *(int*)((char*)v10 + v119 - 4);
                __asm__ volatile("" ::"r"(v120));
              }
              {
                v121 = *a3;
                __asm__ volatile("" ::"r"(v121));
              }
              v210 = v118;
              {
                v122 = *(_QWORD*)(v121 + 32);
                __asm__ volatile("" ::"r"(v122));
              }
              if (v122 == 0) {
                goto LABEL_169;
              }
              (*(void (**)(__int64, int*))(*(_QWORD*)v122 + 48LL))(v122, &v210),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v123 = COERCE_AS(__typeof__(v123),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v134 = COERCE_AS(__typeof__(v134),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v153 = COERCE_AS(__typeof__(v153),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v159 = COERCE_AS(__typeof__(v159),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v172 = COERCE_AS(__typeof__(v172),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v181 = COERCE_AS(__typeof__(v181),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v187 = COERCE_AS(__typeof__(v187),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v193 = COERCE_AS(__typeof__(v193),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v200 = COERCE_AS(__typeof__(v200),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v36 = COERCE_AS(__typeof__(v36),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v57 = COERCE_AS(__typeof__(v57),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v64 = COERCE_AS(__typeof__(v64),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v71 = COERCE_AS(__typeof__(v71),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v81 = COERCE_AS(__typeof__(v81),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              {
                v124 = *a3;
                __asm__ volatile("" ::"r"(v124));
              }
              v210 = v120;
              {
                v125 = *(_QWORD*)(v124 + 32);
                __asm__ volatile("" ::"r"(v125));
              }
              if (v125 == 0) {
                goto LABEL_169;
              }
              v119 -= 4;
            } while (v123 < (*(float (**)(__int64, int*))(*(_QWORD*)v125 +
                                                          48LL))(v125, &v210));
            v111 = (int*)((char*)v10 + v119 + 4);
          LABEL_99:
            *v111 = v118;
          }
          v106 = v110 + 1;
          v109 += 4;
          if (v110 + 1 == v208) {
            return;
          }
        }
      }
      else {
        if (v108) {
          return;
        }
        while (1) {
          {
            v191 = *a1;
            __asm__ volatile("" ::"r"(v191));
          }
          {
            v190 = a1[1];
            __asm__ volatile("" ::"r"(v190));
          }
          a1 = v106;
          {
            v192 = *(_QWORD*)(*a3 + 32);
            __asm__ volatile("" ::"r"(v192));
          }
          v210 = v190;
          if (v192 == 0) {
            break;
          }
          (*(void (**)(__int64, int*))(*(_QWORD*)v192 + 48LL))(v192, &v210),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v153 = COERCE_AS(__typeof__(v153),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v159 = COERCE_AS(__typeof__(v159),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v172 = COERCE_AS(__typeof__(v172),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v181 = COERCE_AS(__typeof__(v181),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v193 = COERCE_AS(__typeof__(v193),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v200 = COERCE_AS(__typeof__(v200),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          {
            v194 = *a3;
            __asm__ volatile("" ::"r"(v194));
          }
          v210 = v191;
          {
            v195 = *(_QWORD*)(v194 + 32);
            __asm__ volatile("" ::"r"(v195));
          }
          if (v195 == 0) {
            break;
          }
          if (v193 < (*(float (**)(__int64, int*))(*(_QWORD*)v195 + 48LL))(
                         v195, &v210)) {
            {
              v196 = *a1;
              __asm__ volatile("" ::"r"(v196));
            }
            v197 = a1;
            do {
              {
                v198 = *(v197 - 2);
                __asm__ volatile("" ::"r"(v198));
              }
              *v197 = *(v197 - 1);
              --v197;
              v210 = v196;
              {
                v199 = *(_QWORD*)(*a3 + 32);
                __asm__ volatile("" ::"r"(v199));
              }
              if (v199 != 0) {
                (*(void (**)(__int64, int*))(*(_QWORD*)v199 + 48LL))(v199,
                                                                     &v210),
                    v102 = COERCE_AS(__typeof__(v102),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v115 = COERCE_AS(__typeof__(v115),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v123 = COERCE_AS(__typeof__(v123),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v134 = COERCE_AS(__typeof__(v134),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v142 = COERCE_AS(__typeof__(v142),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v153 = COERCE_AS(__typeof__(v153),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v159 = COERCE_AS(__typeof__(v159),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v172 = COERCE_AS(__typeof__(v172),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v181 = COERCE_AS(__typeof__(v181),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v187 = COERCE_AS(__typeof__(v187),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v193 = COERCE_AS(__typeof__(v193),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v200 = COERCE_AS(__typeof__(v200),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v24 = COERCE_AS(__typeof__(v24),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v36 = COERCE_AS(__typeof__(v36),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v44 = COERCE_AS(__typeof__(v44),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v49 = COERCE_AS(__typeof__(v49),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v57 = COERCE_AS(__typeof__(v57),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v71 = COERCE_AS(__typeof__(v71),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v81 = COERCE_AS(__typeof__(v81),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v89 = COERCE_AS(__typeof__(v89),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v96 = COERCE_AS(__typeof__(v96),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                {
                  v201 = *a3;
                  __asm__ volatile("" ::"r"(v201));
                }
                v210 = v198;
                {
                  v202 = *(_QWORD*)(v201 + 32);
                  __asm__ volatile("" ::"r"(v202));
                }
                if (v202 != 0) {
                  continue;
                }
              }
              goto LABEL_169;
            } while (v200 < (*(float (**)(__int64, int*))(*(_QWORD*)v202 +
                                                          48LL))(v202, &v210));
            *v197 = v196;
          }
          v106 = a1 + 1;
          if (a1 + 1 == v208) {
            return;
          }
        }
      }
    LABEL_169:
      GameRoutine_60a310(),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
          v172 =
              COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
          v200 =
              COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    if (a4 == 0) {
      if (v10 != v208) {
        v126 = v13 >> 1;
        v206 = v208 - v10;
        v127 = v13 >> 1;
        while (1) {
          v128 = v127;
          if (v126 >= v127) {
            v205 = v127;
            v129 = (2 * (v127 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v130 = 2 * v127 + 2;
            {
              v131 = &a1[v129];
              __asm__ volatile("" ::"r"(v131));
            }
            if (v130 < v12) {
              {
                v132 = v131[1];
                __asm__ volatile("" ::"r"(v132));
              }
              {
                v133 = *(_QWORD*)(*a3 + 32);
                __asm__ volatile("" ::"r"(v133));
              }
              {
                v210 = *v131;
                __asm__ volatile("" ::"r"(v210));
              }
              if (v133 == 0) {
                goto LABEL_169;
              }
              (*(void (**)(__int64, int*))(*(_QWORD*)v133 + 48LL))(v133, &v210),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v123 = COERCE_AS(__typeof__(v123),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v134 = COERCE_AS(__typeof__(v134),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v153 = COERCE_AS(__typeof__(v153),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v159 = COERCE_AS(__typeof__(v159),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v172 = COERCE_AS(__typeof__(v172),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v181 = COERCE_AS(__typeof__(v181),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v187 = COERCE_AS(__typeof__(v187),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v193 = COERCE_AS(__typeof__(v193),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v200 = COERCE_AS(__typeof__(v200),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v36 = COERCE_AS(__typeof__(v36),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v57 = COERCE_AS(__typeof__(v57),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v64 = COERCE_AS(__typeof__(v64),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v71 = COERCE_AS(__typeof__(v71),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v81 = COERCE_AS(__typeof__(v81),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              {
                v135 = *a3;
                __asm__ volatile("" ::"r"(v135));
              }
              v210 = v132;
              {
                v136 = *(_QWORD*)(v135 + 32);
                __asm__ volatile("" ::"r"(v136));
              }
              if (v136 == 0) {
                goto LABEL_169;
              }
              v137 = v134;
              v138 = (*(float (**)(__int64, int*))(*(_QWORD*)v136 + 48LL))(
                  v136, &v210),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v153 = COERCE_AS(__typeof__(v153),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v159 = COERCE_AS(__typeof__(v159),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v172 = COERCE_AS(__typeof__(v172),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v181 = COERCE_AS(__typeof__(v181),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v193 = COERCE_AS(__typeof__(v193),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v200 = COERCE_AS(__typeof__(v200),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              v128 = v205;
              if (v137 < v138) {
                ++v131;
                v129 = v130;
              }
            }
            {
              v139 = &a1[v128];
              __asm__ volatile("" ::"r"(v139));
            }
            {
              v140 = *v139;
              __asm__ volatile("" ::"r"(v140));
            }
            {
              v141 = *(_QWORD*)(*a3 + 32);
              __asm__ volatile("" ::"r"(v141));
            }
            {
              v210 = *v131;
              __asm__ volatile("" ::"r"(v210));
            }
            if (v141 == 0) {
              goto LABEL_169;
            }
            (*(void (**)(__int64, int*))(*(_QWORD*)v141 + 48LL))(v141, &v210),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v123 = COERCE_AS(__typeof__(v123),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v134 = COERCE_AS(__typeof__(v134),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v153 = COERCE_AS(__typeof__(v153),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v159 = COERCE_AS(__typeof__(v159),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v172 = COERCE_AS(__typeof__(v172),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v181 = COERCE_AS(__typeof__(v181),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v187 = COERCE_AS(__typeof__(v187),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v193 = COERCE_AS(__typeof__(v193),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v200 = COERCE_AS(__typeof__(v200),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v36 = COERCE_AS(__typeof__(v36),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v71 = COERCE_AS(__typeof__(v71),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v81 = COERCE_AS(__typeof__(v81),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            {
              v143 = *a3;
              __asm__ volatile("" ::"r"(v143));
            }
            v210 = v140;
            {
              v144 = *(_QWORD*)(v143 + 32);
              __asm__ volatile("" ::"r"(v144));
            }
            if (v144 == 0) {
              goto LABEL_169;
            }
            v145 = v142;
            v146 = (*(float (**)(__int64, int*))(*(_QWORD*)v144 + 48LL))(v144,
                                                                         &v210),
            v102 =
                COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
            v115 =
                COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
            v123 =
                COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
            v134 =
                COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
            v142 =
                COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
            v153 =
                COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
            v159 =
                COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
            v172 =
                COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v181 =
                COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
            v187 =
                COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
            v193 =
                COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
            v200 =
                COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
            v71 =
                COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
            v128 = v205;
            if (v145 >= v146) {
              {
                v147 = *v139;
                __asm__ volatile("" ::"r"(v147));
              }
              do {
                v148 = v131;
                *v139 = *v131;
                if (v126 < v129) {
                  break;
                }
                v149 = (2 * v129) | 1;
                v129 = 2 * v129 + 2;
                {
                  v131 = &a1[v149];
                  __asm__ volatile("" ::"r"(v131));
                }
                if (v129 >= v12) {
                  v129 = v149;
                }
                else {
                  v150 = v126;
                  {
                    v151 = v131[1];
                    __asm__ volatile("" ::"r"(v151));
                  }
                  {
                    v152 = *(_QWORD*)(*a3 + 32);
                    __asm__ volatile("" ::"r"(v152));
                  }
                  {
                    v210 = *v131;
                    __asm__ volatile("" ::"r"(v210));
                  }
                  if (v152 == 0) {
                    goto LABEL_169;
                  }
                  (*(void (**)(__int64, int*))(*(_QWORD*)v152 + 48LL))(v152,
                                                                       &v210),
                      v102 = COERCE_AS(__typeof__(v102),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v115 = COERCE_AS(__typeof__(v115),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v123 = COERCE_AS(__typeof__(v123),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v134 = COERCE_AS(__typeof__(v134),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v142 = COERCE_AS(__typeof__(v142),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v153 = COERCE_AS(__typeof__(v153),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v159 = COERCE_AS(__typeof__(v159),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v172 = COERCE_AS(__typeof__(v172),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v181 = COERCE_AS(__typeof__(v181),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v187 = COERCE_AS(__typeof__(v187),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v193 = COERCE_AS(__typeof__(v193),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v200 = COERCE_AS(__typeof__(v200),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v24 = COERCE_AS(__typeof__(v24),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v31 = COERCE_AS(__typeof__(v31),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v36 = COERCE_AS(__typeof__(v36),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v49 = COERCE_AS(__typeof__(v49),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v57 = COERCE_AS(__typeof__(v57),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v64 = COERCE_AS(__typeof__(v64),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v71 = COERCE_AS(__typeof__(v71),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v81 = COERCE_AS(__typeof__(v81),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v89 = COERCE_AS(__typeof__(v89),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v96 = COERCE_AS(__typeof__(v96),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  {
                    v154 = *a3;
                    __asm__ volatile("" ::"r"(v154));
                  }
                  v210 = v151;
                  {
                    v155 = *(_QWORD*)(v154 + 32);
                    __asm__ volatile("" ::"r"(v155));
                  }
                  if (v155 == 0) {
                    goto LABEL_169;
                  }
                  v156 = v153;
                  v157 = (*(float (**)(__int64, int*))(*(_QWORD*)v155 + 48LL))(
                      v155, &v210),
                  v102 = COERCE_AS(__typeof__(v102),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v115 = COERCE_AS(__typeof__(v115),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v123 = COERCE_AS(__typeof__(v123),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v134 = COERCE_AS(__typeof__(v134),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v142 = COERCE_AS(__typeof__(v142),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v153 = COERCE_AS(__typeof__(v153),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v159 = COERCE_AS(__typeof__(v159),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v172 = COERCE_AS(__typeof__(v172),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v181 = COERCE_AS(__typeof__(v181),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v187 = COERCE_AS(__typeof__(v187),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v193 = COERCE_AS(__typeof__(v193),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v200 = COERCE_AS(__typeof__(v200),
                                   PSEUDO_REGISTER(float, "s0", "=w")),
                  v24 = COERCE_AS(__typeof__(v24),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v36 = COERCE_AS(__typeof__(v36),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v44 = COERCE_AS(__typeof__(v44),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v49 = COERCE_AS(__typeof__(v49),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v57 = COERCE_AS(__typeof__(v57),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v64 = COERCE_AS(__typeof__(v64),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v71 = COERCE_AS(__typeof__(v71),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v81 = COERCE_AS(__typeof__(v81),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v89 = COERCE_AS(__typeof__(v89),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v96 = COERCE_AS(__typeof__(v96),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  v126 = v150;
                  if (v156 < v157) {
                    ++v131;
                  }
                  v12 = v206;
                  if (v156 >= v157) {
                    v129 = v149;
                  }
                }
                {
                  v158 = *(_QWORD*)(*a3 + 32);
                  __asm__ volatile("" ::"r"(v158));
                }
                {
                  v210 = *v131;
                  __asm__ volatile("" ::"r"(v210));
                }
                if (v158 == 0) {
                  goto LABEL_169;
                }
                (*(void (**)(__int64, int*))(*(_QWORD*)v158 + 48LL))(v158,
                                                                     &v210),
                    v102 = COERCE_AS(__typeof__(v102),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v115 = COERCE_AS(__typeof__(v115),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v123 = COERCE_AS(__typeof__(v123),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v134 = COERCE_AS(__typeof__(v134),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v142 = COERCE_AS(__typeof__(v142),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v153 = COERCE_AS(__typeof__(v153),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v159 = COERCE_AS(__typeof__(v159),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v172 = COERCE_AS(__typeof__(v172),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v181 = COERCE_AS(__typeof__(v181),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v187 = COERCE_AS(__typeof__(v187),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v193 = COERCE_AS(__typeof__(v193),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v200 = COERCE_AS(__typeof__(v200),
                                     PSEUDO_REGISTER(float, "s0", "=w")),
                    v24 = COERCE_AS(__typeof__(v24),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v31 = COERCE_AS(__typeof__(v31),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v36 = COERCE_AS(__typeof__(v36),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v44 = COERCE_AS(__typeof__(v44),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v49 = COERCE_AS(__typeof__(v49),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v57 = COERCE_AS(__typeof__(v57),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v71 = COERCE_AS(__typeof__(v71),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v81 = COERCE_AS(__typeof__(v81),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v89 = COERCE_AS(__typeof__(v89),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v96 = COERCE_AS(__typeof__(v96),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                {
                  v160 = *a3;
                  __asm__ volatile("" ::"r"(v160));
                }
                v210 = v147;
                {
                  v161 = *(_QWORD*)(v160 + 32);
                  __asm__ volatile("" ::"r"(v161));
                }
                if (v161 == 0) {
                  goto LABEL_169;
                }
                v139 = v148;
              } while (v159 >= (*(float (**)(__int64, int*))(
                                   *(_QWORD*)v161 + 48LL))(v161, &v210));
              *v148 = v147;
              v11 = v208;
              v128 = v205;
            }
          }
          v127 = v128 - 1;
          if (v128 == 0) {
            while (1) {
              v209 = v11;
              v163 = 0;
              v164 = a1;
              {
                v207 = *a1;
                __asm__ volatile("" ::"r"(v207));
              }
              do {
                {
                  v165 = &v164[v163];
                  __asm__ volatile("" ::"r"(v165));
                }
                v166 = v164;
                v164 = v165 + 1;
                v167 = 2 * v163 + 2;
                v163 = (2 * v163) | 1;
                if (v167 < v12) {
                  {
                    v170 = v165[2];
                    __asm__ volatile("" ::"r"(v170));
                  }
                  v169 = v165 + 2;
                  v168 = v170;
                  {
                    v171 = *(_QWORD*)(*a3 + 32);
                    __asm__ volatile("" ::"r"(v171));
                  }
                  {
                    v210 = *(v169 - 1);
                    __asm__ volatile("" ::"r"(v210));
                  }
                  if (v171 == 0) {
                    goto LABEL_169;
                  }
                  (*(void (**)(__int64, int*))(*(_QWORD*)v171 + 48LL))(v171,
                                                                       &v210),
                      v102 = COERCE_AS(__typeof__(v102),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v115 = COERCE_AS(__typeof__(v115),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v123 = COERCE_AS(__typeof__(v123),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v134 = COERCE_AS(__typeof__(v134),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v142 = COERCE_AS(__typeof__(v142),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v153 = COERCE_AS(__typeof__(v153),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v159 = COERCE_AS(__typeof__(v159),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v172 = COERCE_AS(__typeof__(v172),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v181 = COERCE_AS(__typeof__(v181),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v187 = COERCE_AS(__typeof__(v187),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v193 = COERCE_AS(__typeof__(v193),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v200 = COERCE_AS(__typeof__(v200),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v24 = COERCE_AS(__typeof__(v24),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v31 = COERCE_AS(__typeof__(v31),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v36 = COERCE_AS(__typeof__(v36),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v49 = COERCE_AS(__typeof__(v49),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v57 = COERCE_AS(__typeof__(v57),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v64 = COERCE_AS(__typeof__(v64),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v71 = COERCE_AS(__typeof__(v71),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v81 = COERCE_AS(__typeof__(v81),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v89 = COERCE_AS(__typeof__(v89),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v96 = COERCE_AS(__typeof__(v96),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  {
                    v173 = *a3;
                    __asm__ volatile("" ::"r"(v173));
                  }
                  v210 = v168;
                  {
                    v174 = *(_QWORD*)(v173 + 32);
                    __asm__ volatile("" ::"r"(v174));
                  }
                  if (v174 == 0) {
                    goto LABEL_169;
                  }
                  if (v172 < (*(float (**)(__int64, int*))(
                                 *(_QWORD*)v174 + 48LL))(v174, &v210)) {
                    v164 = v169;
                    v163 = v167;
                  }
                }
                *v166 = *v164;
              } while (v163 <= (__int64)((unsigned __int64)(v12 - 2) >> 1));
              v11 = v209 - 1;
              if (v164 == v209 - 1) {
                *v164 = v207;
              }
              else {
                *v164 = *v11;
                *v11 = v207;
                v175 = ((char*)v164 - (char*)a1 + 4) >> 2;
                v162 = v175 < 2;
                v176 = v175 - 2;
                if (!v162) {
                  v177 = v176 >> 1;
                  {
                    v178 = *v164;
                    __asm__ volatile("" ::"r"(v178));
                  }
                  {
                    v179 = &a1[v176 >> 1];
                    __asm__ volatile("" ::"r"(v179));
                  }
                  {
                    v180 = *(_QWORD*)(*a3 + 32);
                    __asm__ volatile("" ::"r"(v180));
                  }
                  {
                    v210 = *v179;
                    __asm__ volatile("" ::"r"(v210));
                  }
                  if (v180 == 0) {
                    goto LABEL_169;
                  }
                  (*(void (**)(__int64, int*))(*(_QWORD*)v180 + 48LL))(v180,
                                                                       &v210),
                      v102 = COERCE_AS(__typeof__(v102),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v115 = COERCE_AS(__typeof__(v115),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v123 = COERCE_AS(__typeof__(v123),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v134 = COERCE_AS(__typeof__(v134),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v142 = COERCE_AS(__typeof__(v142),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v153 = COERCE_AS(__typeof__(v153),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v159 = COERCE_AS(__typeof__(v159),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v172 = COERCE_AS(__typeof__(v172),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v181 = COERCE_AS(__typeof__(v181),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v187 = COERCE_AS(__typeof__(v187),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v193 = COERCE_AS(__typeof__(v193),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v200 = COERCE_AS(__typeof__(v200),
                                       PSEUDO_REGISTER(float, "s0", "=w")),
                      v24 = COERCE_AS(__typeof__(v24),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v31 = COERCE_AS(__typeof__(v31),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v36 = COERCE_AS(__typeof__(v36),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v44 = COERCE_AS(__typeof__(v44),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v49 = COERCE_AS(__typeof__(v49),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v57 = COERCE_AS(__typeof__(v57),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v64 = COERCE_AS(__typeof__(v64),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v71 = COERCE_AS(__typeof__(v71),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v81 = COERCE_AS(__typeof__(v81),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v89 = COERCE_AS(__typeof__(v89),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v96 = COERCE_AS(__typeof__(v96),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  {
                    v182 = *a3;
                    __asm__ volatile("" ::"r"(v182));
                  }
                  v210 = v178;
                  {
                    v183 = *(_QWORD*)(v182 + 32);
                    __asm__ volatile("" ::"r"(v183));
                  }
                  if (v183 == 0) {
                    goto LABEL_169;
                  }
                  if (v181 < (*(float (**)(__int64, int*))(
                                 *(_QWORD*)v183 + 48LL))(v183, &v210)) {
                    {
                      v184 = *v164;
                      __asm__ volatile("" ::"r"(v184));
                    }
                    do {
                      v185 = v179;
                      *v164 = *v179;
                      if (v177 == 0) {
                        break;
                      }
                      v177 = (v177 - 1) >> 1;
                      {
                        v179 = &a1[v177];
                        __asm__ volatile("" ::"r"(v179));
                      }
                      {
                        v186 = *(_QWORD*)(*a3 + 32);
                        __asm__ volatile("" ::"r"(v186));
                      }
                      {
                        v210 = *v179;
                        __asm__ volatile("" ::"r"(v210));
                      }
                      if (v186 == 0) {
                        goto LABEL_169;
                      }
                      (*(void (**)(__int64, int*))(*(_QWORD*)v186 + 48LL))(
                          v186, &v210),
                          v102 = COERCE_AS(__typeof__(v102),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v115 = COERCE_AS(__typeof__(v115),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v123 = COERCE_AS(__typeof__(v123),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v134 = COERCE_AS(__typeof__(v134),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v142 = COERCE_AS(__typeof__(v142),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v153 = COERCE_AS(__typeof__(v153),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v159 = COERCE_AS(__typeof__(v159),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v172 = COERCE_AS(__typeof__(v172),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v18 = COERCE_AS(__typeof__(v18),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v181 = COERCE_AS(__typeof__(v181),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v187 = COERCE_AS(__typeof__(v187),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v193 = COERCE_AS(__typeof__(v193),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v200 = COERCE_AS(__typeof__(v200),
                                           PSEUDO_REGISTER(float, "s0", "=w")),
                          v24 = COERCE_AS(__typeof__(v24),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v31 = COERCE_AS(__typeof__(v31),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v36 = COERCE_AS(__typeof__(v36),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v44 = COERCE_AS(__typeof__(v44),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v49 = COERCE_AS(__typeof__(v49),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v57 = COERCE_AS(__typeof__(v57),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v64 = COERCE_AS(__typeof__(v64),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v71 = COERCE_AS(__typeof__(v71),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v81 = COERCE_AS(__typeof__(v81),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v89 = COERCE_AS(__typeof__(v89),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v96 = COERCE_AS(__typeof__(v96),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                      {
                        v188 = *a3;
                        __asm__ volatile("" ::"r"(v188));
                      }
                      v210 = v184;
                      {
                        v189 = *(_QWORD*)(v188 + 32);
                        __asm__ volatile("" ::"r"(v189));
                      }
                      if (v189 == 0) {
                        goto LABEL_169;
                      }
                      v164 = v185;
                    } while (v187 < (*(float (**)(__int64, int*))(
                                        *(_QWORD*)v189 + 48LL))(v189, &v210));
                    *v185 = v184;
                  }
                }
              }
              v162 = v12-- <= 2;
              if (v162) {
                return;
              }
            }
          }
        }
      }
      return;
    }
    {
      v14 = &v10[(unsigned __int64)v12 >> 1];
      __asm__ volatile("" ::"r"(v14));
    }
    if ((unsigned __int64)v12 < 0x81) {
      game_map_a18af0(&a1[(unsigned __int64)v12 >> 1], a1, v9, a3),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
          v172 =
              COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
          v200 =
              COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
      --a4;
      if ((a5 & 1) != 0) {
        goto LABEL_18;
      }
    }
    else {
      game_map_a18af0(a1, &a1[(unsigned __int64)v12 >> 1], v9, a3),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
          v172 =
              COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
          v200 =
              COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
      game_map_a18af0(a1 + 1, v14 - 1, v204, a3),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
          v172 =
              COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
          v200 =
              COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
      game_map_a18af0(a1 + 2, v14 + 1, v203, a3),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
          v172 =
              COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
          v200 =
              COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
      game_map_a18af0(v14 - 1, &a1[(unsigned __int64)v12 >> 1], v14 + 1, a3),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
          v172 =
              COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
          v200 =
              COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
      {
        v15 = *a1;
        __asm__ volatile("" ::"r"(v15));
      }
      *a1 = *v14;
      *v14 = v15;
      --a4;
      if ((a5 & 1) != 0) {
        goto LABEL_18;
      }
    }
    {
      v16 = *a1;
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v17 = *(_QWORD*)(*a3 + 32);
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v210 = *(a1 - 1);
      __asm__ volatile("" ::"r"(v210));
    }
    if (v17 == 0) {
      goto LABEL_169;
    }
    (*(void (**)(__int64, int*))(*(_QWORD*)v17 + 48LL))(v17, &v210),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
        v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
        v153 = COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
        v172 = COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v181 = COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
        v193 = COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
        v200 = COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
    {
      v19 = *a3;
      __asm__ volatile("" ::"r"(v19));
    }
    v210 = v16;
    {
      v20 = *(_QWORD*)(v19 + 32);
      __asm__ volatile("" ::"r"(v20));
    }
    if (v20 == 0) {
      goto LABEL_169;
    }
    if (v18 >=
        (*(float (**)(__int64, int*))(*(_QWORD*)v20 + 48LL))(v20, &v210)) {
      {
        v54 = *a1;
        __asm__ volatile("" ::"r"(v54));
      }
      {
        v55 = *v9;
        __asm__ volatile("" ::"r"(v55));
      }
      {
        v56 = *(_QWORD*)(*a3 + 32);
        __asm__ volatile("" ::"r"(v56));
      }
      {
        v210 = *a1;
        __asm__ volatile("" ::"r"(v210));
      }
      if (v56 == 0) {
        goto LABEL_169;
      }
      (*(void (**)(__int64, int*))(*(_QWORD*)v56 + 48LL))(v56, &v210),
          v102 =
              COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
          v115 =
              COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
          v123 =
              COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
          v134 =
              COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
          v142 =
              COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
          v153 =
              COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
          v159 =
              COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
          v172 =
              COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v181 =
              COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
          v187 =
              COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
          v193 =
              COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
          v200 =
              COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
          v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
          v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
          v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
          v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
          v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
      {
        v58 = *a3;
        __asm__ volatile("" ::"r"(v58));
      }
      v210 = v55;
      {
        v59 = *(_QWORD*)(v58 + 32);
        __asm__ volatile("" ::"r"(v59));
      }
      if (v59 == 0) {
        goto LABEL_169;
      }
      if (v57 <
          (*(float (**)(__int64, int*))(*(_QWORD*)v59 + 48LL))(v59, &v210)) {
        v10 = a1;
        while (1) {
          {
            v60 = *a3;
            __asm__ volatile("" ::"r"(v60));
          }
          {
            v62 = v10[1];
            __asm__ volatile("" ::"r"(v62));
          }
          ++v10;
          v61 = v62;
          v210 = v54;
          {
            v63 = *(_QWORD*)(v60 + 32);
            __asm__ volatile("" ::"r"(v63));
          }
          if (v63 == 0) {
            goto LABEL_169;
          }
          (*(void (**)(__int64, int*))(*(_QWORD*)v63 + 48LL))(v63, &v210),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v153 = COERCE_AS(__typeof__(v153),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v159 = COERCE_AS(__typeof__(v159),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v172 = COERCE_AS(__typeof__(v172),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v181 = COERCE_AS(__typeof__(v181),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v193 = COERCE_AS(__typeof__(v193),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v200 = COERCE_AS(__typeof__(v200),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          {
            v65 = *a3;
            __asm__ volatile("" ::"r"(v65));
          }
          v210 = v61;
          {
            v66 = *(_QWORD*)(v65 + 32);
            __asm__ volatile("" ::"r"(v66));
          }
          if (v66 == 0) {
            goto LABEL_169;
          }
          if (v64 < (*(float (**)(__int64, int*))(*(_QWORD*)v66 + 48LL))(
                        v66, &v210)) {
            goto LABEL_63;
          }
        }
      }
      v67 = a1 + 1;
      do {
        v10 = v67;
        if (v67 >= v208) {
          break;
        }
        {
          v68 = *a3;
          __asm__ volatile("" ::"r"(v68));
        }
        {
          v69 = *v10;
          __asm__ volatile("" ::"r"(v69));
        }
        v210 = v54;
        {
          v70 = *(_QWORD*)(v68 + 32);
          __asm__ volatile("" ::"r"(v70));
        }
        if (v70 == 0) {
          goto LABEL_169;
        }
        (*(void (**)(__int64, int*))(*(_QWORD*)v70 + 48LL))(v70, &v210),
            v102 =
                COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
            v115 =
                COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
            v123 =
                COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
            v134 =
                COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
            v142 =
                COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
            v153 =
                COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
            v159 =
                COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
            v172 =
                COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v181 =
                COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
            v187 =
                COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
            v193 =
                COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
            v200 =
                COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
            v71 =
                COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
        {
          v72 = *a3;
          __asm__ volatile("" ::"r"(v72));
        }
        v210 = v69;
        {
          v73 = *(_QWORD*)(v72 + 32);
          __asm__ volatile("" ::"r"(v73));
        }
        if (v73 == 0) {
          goto LABEL_169;
        }
        v74 = v71;
        v75 = (*(float (**)(__int64, int*))(*(_QWORD*)v73 + 48LL))(v73, &v210),
        v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
        v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
        v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
        v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
        v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
        v153 = COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
        v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
        v172 = COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v181 = COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
        v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
        v193 = COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
        v200 = COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
        v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
        v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
        v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
        v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
        v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
        v67 = v10 + 1;
      } while (v74 >= v75);
    LABEL_63:
      v76 = v208;
      if (v10 < v208) {
        v76 = v208;
        do {
          {
            v77 = *a3;
            __asm__ volatile("" ::"r"(v77));
          }
          v79 = *--v76;
          v78 = v79;
          v210 = v54;
          {
            v80 = *(_QWORD*)(v77 + 32);
            __asm__ volatile("" ::"r"(v80));
          }
          if (v80 == 0) {
            goto LABEL_169;
          }
          (*(void (**)(__int64, int*))(*(_QWORD*)v80 + 48LL))(v80, &v210),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v153 = COERCE_AS(__typeof__(v153),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v159 = COERCE_AS(__typeof__(v159),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v172 = COERCE_AS(__typeof__(v172),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v181 = COERCE_AS(__typeof__(v181),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v193 = COERCE_AS(__typeof__(v193),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v200 = COERCE_AS(__typeof__(v200),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          {
            v82 = *a3;
            __asm__ volatile("" ::"r"(v82));
          }
          v210 = v78;
          {
            v83 = *(_QWORD*)(v82 + 32);
            __asm__ volatile("" ::"r"(v83));
          }
          if (v83 == 0) {
            goto LABEL_169;
          }
        } while (v81 < (*(float (**)(__int64, int*))(*(_QWORD*)v83 + 48LL))(
                           v83, &v210));
      }
    LABEL_76:
      if (v10 < v76) {
        {
          v84 = *v10;
          __asm__ volatile("" ::"r"(v84));
        }
        *v10 = *v76;
        *v76 = v84;
        do {
          {
            v85 = *a3;
            __asm__ volatile("" ::"r"(v85));
          }
          {
            v87 = v10[1];
            __asm__ volatile("" ::"r"(v87));
          }
          ++v10;
          v86 = v87;
          v210 = v54;
          {
            v88 = *(_QWORD*)(v85 + 32);
            __asm__ volatile("" ::"r"(v88));
          }
          if (v88 != 0) {
            (*(void (**)(__int64, int*))(*(_QWORD*)v88 + 48LL))(v88, &v210),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v123 = COERCE_AS(__typeof__(v123),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v134 = COERCE_AS(__typeof__(v134),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v153 = COERCE_AS(__typeof__(v153),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v159 = COERCE_AS(__typeof__(v159),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v172 = COERCE_AS(__typeof__(v172),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v181 = COERCE_AS(__typeof__(v181),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v187 = COERCE_AS(__typeof__(v187),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v193 = COERCE_AS(__typeof__(v193),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v200 = COERCE_AS(__typeof__(v200),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v36 = COERCE_AS(__typeof__(v36),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v71 = COERCE_AS(__typeof__(v71),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v81 = COERCE_AS(__typeof__(v81),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            {
              v90 = *a3;
              __asm__ volatile("" ::"r"(v90));
            }
            v210 = v86;
            {
              v91 = *(_QWORD*)(v90 + 32);
              __asm__ volatile("" ::"r"(v91));
            }
            if (v91 != 0) {
              continue;
            }
          }
          goto LABEL_169;
        } while (v89 >= (*(float (**)(__int64, int*))(*(_QWORD*)v91 + 48LL))(
                            v91, &v210));
        while (1) {
          {
            v92 = *a3;
            __asm__ volatile("" ::"r"(v92));
          }
          v94 = *--v76;
          v93 = v94;
          v210 = v54;
          {
            v95 = *(_QWORD*)(v92 + 32);
            __asm__ volatile("" ::"r"(v95));
          }
          if (v95 == 0) {
            goto LABEL_169;
          }
          (*(void (**)(__int64, int*))(*(_QWORD*)v95 + 48LL))(v95, &v210),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v153 = COERCE_AS(__typeof__(v153),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v159 = COERCE_AS(__typeof__(v159),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v172 = COERCE_AS(__typeof__(v172),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v181 = COERCE_AS(__typeof__(v181),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v193 = COERCE_AS(__typeof__(v193),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v200 = COERCE_AS(__typeof__(v200),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          {
            v97 = *a3;
            __asm__ volatile("" ::"r"(v97));
          }
          v210 = v93;
          {
            v98 = *(_QWORD*)(v97 + 32);
            __asm__ volatile("" ::"r"(v98));
          }
          if (v98 == 0) {
            goto LABEL_169;
          }
          if (v96 >= (*(float (**)(__int64, int*))(*(_QWORD*)v98 + 48LL))(
                         v98, &v210)) {
            goto LABEL_76;
          }
        }
      }
      v99 = v10 - 1;
      if (a1 != v10 - 1) {
        *a1 = *v99;
      }
      a5 = 0;
      *v99 = v54;
    }
    else {
    LABEL_18:
      {
        v21 = *a1;
        __asm__ volatile("" ::"r"(v21));
      }
      v22 = 0;
      do {
        {
          v23 = *(_QWORD*)(*a3 + 32);
          __asm__ volatile("" ::"r"(v23));
        }
        {
          v210 = a1[v22 + 1];
          __asm__ volatile("" ::"r"(v210));
        }
        if (v23 == 0) {
          goto LABEL_169;
        }
        (*(void (**)(__int64, int*))(*(_QWORD*)v23 + 48LL))(v23, &v210),
            v102 =
                COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
            v115 =
                COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
            v123 =
                COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
            v134 =
                COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
            v142 =
                COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
            v153 =
                COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
            v159 =
                COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
            v172 =
                COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v181 =
                COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
            v187 =
                COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
            v193 =
                COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
            v200 =
                COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
            v71 =
                COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
        {
          v25 = *a3;
          __asm__ volatile("" ::"r"(v25));
        }
        v210 = v21;
        {
          v26 = *(_QWORD*)(v25 + 32);
          __asm__ volatile("" ::"r"(v26));
        }
        if (v26 == 0) {
          goto LABEL_169;
        }
        ++v22;
      } while (v24 < (*(float (**)(__int64, int*))(*(_QWORD*)v26 + 48LL))(
                         v26, &v210));
      {
        v27 = &a1[v22];
        __asm__ volatile("" ::"r"(v27));
      }
      v28 = v208;
      if (v22 != 1) {
        while (1) {
          v29 = *--v28;
          {
            v30 = *(_QWORD*)(*a3 + 32);
            __asm__ volatile("" ::"r"(v30));
          }
          v210 = v29;
          if (v30 == 0) {
            goto LABEL_169;
          }
          (*(void (**)(__int64, int*))(*(_QWORD*)v30 + 48LL))(v30, &v210),
              v102 = COERCE_AS(__typeof__(v102),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v115 = COERCE_AS(__typeof__(v115),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v123 = COERCE_AS(__typeof__(v123),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v134 = COERCE_AS(__typeof__(v134),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v142 = COERCE_AS(__typeof__(v142),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v153 = COERCE_AS(__typeof__(v153),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v159 = COERCE_AS(__typeof__(v159),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v172 = COERCE_AS(__typeof__(v172),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v181 = COERCE_AS(__typeof__(v181),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v187 = COERCE_AS(__typeof__(v187),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v193 = COERCE_AS(__typeof__(v193),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v200 = COERCE_AS(__typeof__(v200),
                               PSEUDO_REGISTER(float, "s0", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v36 = COERCE_AS(__typeof__(v36),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v44 = COERCE_AS(__typeof__(v44),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v81 = COERCE_AS(__typeof__(v81),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v96 = COERCE_AS(__typeof__(v96),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          {
            v32 = *a3;
            __asm__ volatile("" ::"r"(v32));
          }
          v210 = v21;
          {
            v33 = *(_QWORD*)(v32 + 32);
            __asm__ volatile("" ::"r"(v33));
          }
          if (v33 == 0) {
            goto LABEL_169;
          }
          if (v31 < (*(float (**)(__int64, int*))(*(_QWORD*)v33 + 48LL))(
                        v33, &v210)) {
            goto LABEL_32;
          }
        }
      }
      v28 = v208;
      while (v27 < v28) {
        v34 = *--v28;
        {
          v35 = *(_QWORD*)(*a3 + 32);
          __asm__ volatile("" ::"r"(v35));
        }
        v210 = v34;
        if (v35 == 0) {
          goto LABEL_169;
        }
        (*(void (**)(__int64, int*))(*(_QWORD*)v35 + 48LL))(v35, &v210),
            v102 =
                COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
            v115 =
                COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
            v123 =
                COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
            v134 =
                COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
            v142 =
                COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
            v153 =
                COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
            v159 =
                COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
            v172 =
                COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v181 =
                COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
            v187 =
                COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
            v193 =
                COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
            v200 =
                COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
            v71 =
                COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
        {
          v37 = *a3;
          __asm__ volatile("" ::"r"(v37));
        }
        v210 = v21;
        {
          v38 = *(_QWORD*)(v37 + 32);
          __asm__ volatile("" ::"r"(v38));
        }
        if (v38 == 0) {
          goto LABEL_169;
        }
        if (v36 <
            (*(float (**)(__int64, int*))(*(_QWORD*)v38 + 48LL))(v38, &v210)) {
          break;
        }
      }
    LABEL_32:
      if (v27 >= v28) {
        v52 = v27 - 1;
        if (a1 == v27 - 1) {
          goto LABEL_46;
        }
      LABEL_45:
        *a1 = *v52;
        goto LABEL_46;
      }
      {
        v39 = &a1[v22];
        __asm__ volatile("" ::"r"(v39));
      }
      v40 = v28;
      do {
        {
          v41 = *v39;
          __asm__ volatile("" ::"r"(v41));
        }
        *v39 = *v40;
        *v40 = v41;
        do {
          {
            v42 = v39[1];
            __asm__ volatile("" ::"r"(v42));
          }
          ++v39;
          {
            v43 = *(_QWORD*)(*a3 + 32);
            __asm__ volatile("" ::"r"(v43));
          }
          v210 = v42;
          if (v43 != 0) {
            (*(void (**)(__int64, int*))(*(_QWORD*)v43 + 48LL))(v43, &v210),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v123 = COERCE_AS(__typeof__(v123),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v134 = COERCE_AS(__typeof__(v134),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v153 = COERCE_AS(__typeof__(v153),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v159 = COERCE_AS(__typeof__(v159),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v172 = COERCE_AS(__typeof__(v172),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v181 = COERCE_AS(__typeof__(v181),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v187 = COERCE_AS(__typeof__(v187),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v193 = COERCE_AS(__typeof__(v193),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v200 = COERCE_AS(__typeof__(v200),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v36 = COERCE_AS(__typeof__(v36),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v71 = COERCE_AS(__typeof__(v71),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v81 = COERCE_AS(__typeof__(v81),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            {
              v45 = *a3;
              __asm__ volatile("" ::"r"(v45));
            }
            v210 = v21;
            {
              v46 = *(_QWORD*)(v45 + 32);
              __asm__ volatile("" ::"r"(v46));
            }
            if (v46 != 0) {
              continue;
            }
          }
          goto LABEL_169;
        } while (v44 < (*(float (**)(__int64, int*))(*(_QWORD*)v46 + 48LL))(
                           v46, &v210));
        do {
          v47 = *--v40;
          {
            v48 = *(_QWORD*)(*a3 + 32);
            __asm__ volatile("" ::"r"(v48));
          }
          v210 = v47;
          if (v48 != 0) {
            (*(void (**)(__int64, int*))(*(_QWORD*)v48 + 48LL))(v48, &v210),
                v102 = COERCE_AS(__typeof__(v102),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v115 = COERCE_AS(__typeof__(v115),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v123 = COERCE_AS(__typeof__(v123),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v134 = COERCE_AS(__typeof__(v134),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v142 = COERCE_AS(__typeof__(v142),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v153 = COERCE_AS(__typeof__(v153),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v159 = COERCE_AS(__typeof__(v159),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v172 = COERCE_AS(__typeof__(v172),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v181 = COERCE_AS(__typeof__(v181),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v187 = COERCE_AS(__typeof__(v187),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v193 = COERCE_AS(__typeof__(v193),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v200 = COERCE_AS(__typeof__(v200),
                                 PSEUDO_REGISTER(float, "s0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v36 = COERCE_AS(__typeof__(v36),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v49 = COERCE_AS(__typeof__(v49),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v64 = COERCE_AS(__typeof__(v64),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v71 = COERCE_AS(__typeof__(v71),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v81 = COERCE_AS(__typeof__(v81),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v96 = COERCE_AS(__typeof__(v96),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            {
              v50 = *a3;
              __asm__ volatile("" ::"r"(v50));
            }
            v210 = v21;
            {
              v51 = *(_QWORD*)(v50 + 32);
              __asm__ volatile("" ::"r"(v51));
            }
            if (v51 != 0) {
              continue;
            }
          }
          goto LABEL_169;
        } while (v49 >= (*(float (**)(__int64, int*))(*(_QWORD*)v51 + 48LL))(
                            v51, &v210));
      } while (v39 < v40);
      v52 = v39 - 1;
      if (a1 != v52) {
        goto LABEL_45;
      }
    LABEL_46:
      *v52 = v21;
      if (v27 < v28) {
        goto LABEL_49;
      }
      v10 = v52 + 1;
      v53 = game_map_a190c0(a1, v52, a3),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
      v153 = COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
      v172 = COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v181 = COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
      v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
      v193 = COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
      v200 = COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
      v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
      v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
      if (game_map_a190c0(v52 + 1, v208, a3)) {
        a2 = v52;
        if (v53) {
          return;
        }
        goto LABEL_1;
      }
      if (!v53) {
      LABEL_49:
        game_map_a17d20(a1, v52, a3, a4, a5 & 1),
            v102 =
                COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
            v115 =
                COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
            v123 =
                COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
            v134 =
                COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
            v142 =
                COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
            v153 =
                COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
            v159 =
                COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
            v172 =
                COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
            v181 =
                COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
            v187 =
                COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
            v193 =
                COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
            v200 =
                COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
            v36 =
                COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
            v44 =
                COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
            v49 =
                COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
            v71 =
                COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
            v81 =
                COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
            v96 =
                COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
        a5 = 0;
        v10 = v52 + 1;
      }
    }
  }
  if ((unsigned __int64)v12 < 2) {
    return;
  }
  if (v12 != 2) {
    goto LABEL_9;
  }
  {
    v100 = *v10;
    __asm__ volatile("" ::"r"(v100));
  }
  {
    v101 = *(_QWORD*)(*a3 + 32);
    __asm__ volatile("" ::"r"(v101));
  }
  {
    v210 = *(v208 - 1);
    __asm__ volatile("" ::"r"(v210));
  }
  if (v101 == 0) {
    goto LABEL_169;
  }
  (*(void (**)(__int64, int*))(*(_QWORD*)v101 + 48LL))(v101, &v210),
      v102 = COERCE_AS(__typeof__(v102), PSEUDO_REGISTER(float, "s0", "=w")),
      v115 = COERCE_AS(__typeof__(v115), PSEUDO_REGISTER(float, "s0", "=w")),
      v123 = COERCE_AS(__typeof__(v123), PSEUDO_REGISTER(float, "s0", "=w")),
      v134 = COERCE_AS(__typeof__(v134), PSEUDO_REGISTER(float, "s0", "=w")),
      v142 = COERCE_AS(__typeof__(v142), PSEUDO_REGISTER(float, "s0", "=w")),
      v153 = COERCE_AS(__typeof__(v153), PSEUDO_REGISTER(float, "s0", "=w")),
      v159 = COERCE_AS(__typeof__(v159), PSEUDO_REGISTER(float, "s0", "=w")),
      v172 = COERCE_AS(__typeof__(v172), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v181 = COERCE_AS(__typeof__(v181), PSEUDO_REGISTER(float, "s0", "=w")),
      v187 = COERCE_AS(__typeof__(v187), PSEUDO_REGISTER(float, "s0", "=w")),
      v193 = COERCE_AS(__typeof__(v193), PSEUDO_REGISTER(float, "s0", "=w")),
      v200 = COERCE_AS(__typeof__(v200), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(float, "s0", "=w")),
      v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(float, "s0", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w")),
      v49 = COERCE_AS(__typeof__(v49), PSEUDO_REGISTER(float, "s0", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(float, "s0", "=w")),
      v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(float, "s0", "=w")),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w")),
      v81 = COERCE_AS(__typeof__(v81), PSEUDO_REGISTER(float, "s0", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(float, "s0", "=w")),
      v96 = COERCE_AS(__typeof__(v96), PSEUDO_REGISTER(float, "s0", "=w"));
  {
    v103 = *a3;
    __asm__ volatile("" ::"r"(v103));
  }
  v210 = v100;
  {
    v104 = *(_QWORD*)(v103 + 32);
    __asm__ volatile("" ::"r"(v104));
  }
  if (v104 == 0) {
    goto LABEL_169;
  }
  if (v102 <
      (*(float (**)(__int64, int*))(*(_QWORD*)v104 + 48LL))(v104, &v210)) {
    {
      v105 = *v10;
      __asm__ volatile("" ::"r"(v105));
    }
    *v10 = *(v208 - 1);
    *(v208 - 1) = v105;
  }
}

void game_map_a18d30(int* a1, int* a2, int* a3, int* a4, __int64* a5)
{

#pragma clang fp contract(off)
  int v10;
  __int64 v11;
  float v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  game_map_a18af0(a1, a2, a3, a5),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  {
    v10 = *a3;
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = *(_QWORD*)(*a5 + 32);
    __asm__ volatile("" ::"r"(v11));
  }
  {
    v28 = *a4;
    __asm__ volatile("" ::"r"(v28));
  }
  if (v11 == 0) {
    goto LABEL_12;
  }
  (*(void (**)(__int64, int*))(*(_QWORD*)v11 + 48LL))(v11, &v28),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  {
    v13 = *a5;
    __asm__ volatile("" ::"r"(v13));
  }
  v28 = v10;
  {
    v14 = *(_QWORD*)(v13 + 32);
    __asm__ volatile("" ::"r"(v14));
  }
  if (v14 == 0) {
    goto LABEL_12;
  }
  if (v12 >= (*(float (**)(__int64, int*))(*(_QWORD*)v14 + 48LL))(v14, &v28)) {
    return;
  }
  {
    v15 = *a3;
    __asm__ volatile("" ::"r"(v15));
  }
  *a3 = *a4;
  *a4 = v15;
  {
    v16 = *a2;
    __asm__ volatile("" ::"r"(v16));
  }
  {
    v17 = *(_QWORD*)(*a5 + 32);
    __asm__ volatile("" ::"r"(v17));
  }
  {
    v28 = *a3;
    __asm__ volatile("" ::"r"(v28));
  }
  if (v17 == 0) {
    goto LABEL_12;
  }
  (*(void (**)(__int64, int*))(*(_QWORD*)v17 + 48LL))(v17, &v28),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  {
    v19 = *a5;
    __asm__ volatile("" ::"r"(v19));
  }
  v28 = v16;
  {
    v20 = *(_QWORD*)(v19 + 32);
    __asm__ volatile("" ::"r"(v20));
  }
  if (v20 == 0) {
    goto LABEL_12;
  }
  if (v18 >= (*(float (**)(__int64, int*))(*(_QWORD*)v20 + 48LL))(v20, &v28)) {
    return;
  }
  {
    v21 = *a2;
    __asm__ volatile("" ::"r"(v21));
  }
  *a2 = *a3;
  *a3 = v21;
  {
    v22 = *a1;
    __asm__ volatile("" ::"r"(v22));
  }
  {
    v23 = *(_QWORD*)(*a5 + 32);
    __asm__ volatile("" ::"r"(v23));
  }
  {
    v28 = *a2;
    __asm__ volatile("" ::"r"(v28));
  }
  if (v23 == 0 ||
      ((*(void (**)(__int64, int*))(*(_QWORD*)v23 + 48LL))(v23, &v28),
       v25 = *a5, v28 = v22, (v26 = *(_QWORD*)(v25 + 32)) == 0)) {
  LABEL_12:
    GameRoutine_60a310(),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  if (v24 < (*(float (**)(__int64, int*))(*(_QWORD*)v26 + 48LL))(v26, &v28)) {
    {
      v27 = *a1;
      __asm__ volatile("" ::"r"(v27));
    }
    *a1 = *a2;
    *a2 = v27;
  }
}

bool game_map_a190c0(int* a1, int* a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  int v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int* v13;
  int* v14;
  __int64 v15;
  int v16;
  int* v17;
  int v18;
  __int64 v19;
  float v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  float v28;
  __int64 v29;
  __int64 v30;
  int v32;

  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  v6 = a2 - a1;
  if (v6 <= 2) {
    if ((unsigned __int64)v6 >= 2) {
      if (v6 == 2) {
        {
          v7 = *a1;
          __asm__ volatile("" ::"r"(v7));
        }
        {
          v8 = *(_QWORD*)(*a3 + 32);
          __asm__ volatile("" ::"r"(v8));
        }
        {
          v32 = *(a2 - 1);
          __asm__ volatile("" ::"r"(v32));
        }
        if (v8 == 0 ||
            ((*(void (**)(__int64, int*))(*(_QWORD*)v8 + 48LL))(v8, &v32),
             v10 = *a3, v32 = v7, (v11 = *(_QWORD*)(v10 + 32)) == 0)) {
        LABEL_30:
          GameRoutine_60a310(),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v9 =
                  COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        if (v9 <
            (*(float (**)(__int64, int*))(*(_QWORD*)v11 + 48LL))(v11, &v32)) {
          {
            v12 = *a1;
            __asm__ volatile("" ::"r"(v12));
          }
          *a1 = *(a2 - 1);
          *(a2 - 1) = v12;
        }
        return true;
      }
      goto LABEL_13;
    }
    return true;
  }
  switch (v6) {
  case 3LL:
    game_map_a18af0(a1, a1 + 1, a2 - 1, a3),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
    return true;
  case 4LL:
    game_map_a18d30(a1, a1 + 1, a1 + 2, a2 - 1, a3),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
    return true;
  case 5LL:
    game_map_a18eb0(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
    return true;
  default:
    break;
  }
LABEL_13:
  v13 = a1 + 2;
  game_map_a18af0(a1, a1 + 1, a1 + 2, a3),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
  v14 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v15 = 0;
  v16 = 0;
  while (1) {
    {
      v18 = *v13;
      __asm__ volatile("" ::"r"(v18));
    }
    {
      v19 = *(_QWORD*)(*a3 + 32);
      __asm__ volatile("" ::"r"(v19));
    }
    {
      v32 = *v14;
      __asm__ volatile("" ::"r"(v32));
    }
    if (v19 == 0) {
      goto LABEL_30;
    }
    (*(void (**)(__int64, int*))(*(_QWORD*)v19 + 48LL))(v19, &v32),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
    {
      v21 = *a3;
      __asm__ volatile("" ::"r"(v21));
    }
    v32 = v18;
    {
      v22 = *(_QWORD*)(v21 + 32);
      __asm__ volatile("" ::"r"(v22));
    }
    if (v22 == 0) {
      goto LABEL_30;
    }
    if (v20 < (*(float (**)(__int64, int*))(*(_QWORD*)v22 + 48LL))(v22, &v32)) {
      {
        v23 = *v14;
        __asm__ volatile("" ::"r"(v23));
      }
      v24 = v15;
      do {
        *(int*)((char*)a1 + v24 + 12) = *(int*)((char*)a1 + v24 + 8);
        if (v24 == -8) {
          v17 = a1;
          goto LABEL_16;
        }
        {
          v25 = *(int*)((char*)a1 + v24 + 4);
          __asm__ volatile("" ::"r"(v25));
        }
        {
          v26 = *a3;
          __asm__ volatile("" ::"r"(v26));
        }
        v32 = v23;
        {
          v27 = *(_QWORD*)(v26 + 32);
          __asm__ volatile("" ::"r"(v27));
        }
        if (v27 == 0) {
          goto LABEL_30;
        }
        (*(void (**)(__int64, int*))(*(_QWORD*)v27 + 48LL))(v27, &v32),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(float, "s0", "=w")),
            v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s0", "=w"));
        {
          v29 = *a3;
          __asm__ volatile("" ::"r"(v29));
        }
        v32 = v25;
        {
          v30 = *(_QWORD*)(v29 + 32);
          __asm__ volatile("" ::"r"(v30));
        }
        if (v30 == 0) {
          goto LABEL_30;
        }
        v24 -= 4;
      } while (v28 <
               (*(float (**)(__int64, int*))(*(_QWORD*)v30 + 48LL))(v30, &v32));
      v17 = (int*)((char*)a1 + v24 + 12);
    LABEL_16:
      ++v16;
      *v17 = v23;
      if (v16 == 8) {
        return v14 + 1 == a2;
      }
    }
    v13 = v14++;
    v15 += 4;
    if (v14 == a2) {
      return true;
    }
  }
}

#pragma GCC visibility pop
