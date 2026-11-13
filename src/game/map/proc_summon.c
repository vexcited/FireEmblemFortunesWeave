#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1084780(void);
__int64 Cursor_734a80(__int64, __int64*);
__int64 GameRoutine_12272a0(_QWORD, _QWORD);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitActor_81ba20(_QWORD);
__int64 Unit_6ca760(_QWORD, _QWORD);
__int64 game_6d7270(__int64, __int64, int);
__int64 game_HasSkill(_QWORD, _QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1f94210[])();
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_21309c8[5];
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
float Unit_6c7fa0(__int64, __int64);
long double UnitActor_8194d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 game_map_ProcSummon_CreateImpl_closure_Invoke(__int64 result,
                                                      __int64* a2);
__int64 UnitActor_81ab40(__int64, float, float);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int128 GameData_1a83090;
extern __int64 fw_memory_g_heap_manager_ptr;
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6c1f60();
__int64 game_map_ProcSummon_CreateUnit_closure_Invoke(__int64 a1, __int64* a2,
                                                      long double a3,
                                                      long double a4);
__int64 GameRoutine_6c47b0_alt1(__int64, _BYTE*, char,
                                char) __asm__("GameRoutine_6c47b0");
__int64 UnitActor_8194d0_alt1(__int64 result) __asm__("UnitActor_8194d0");
__int64 Unit_6ca760_alt1(__int64, _DWORD*) __asm__("Unit_6ca760");
bool game_HasSkill_alt1(_QWORD*, _DWORD*) __asm__("game_HasSkill");
float Unit_6c7fa0_alt1(__int64, _OWORD*) __asm__("Unit_6c7fa0");
long double UnitActor_81ba20_alt1(__int64) __asm__("UnitActor_81ba20");
void CharacterBuilder_1084780_alt1(__int64) __asm__("CharacterBuilder_1084780");
void GameRoutine_12272a0_alt1(__int64, __int64) __asm__("GameRoutine_12272a0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void game_6d7270_alt1(unsigned __int64, __int64, int) __asm__("game_6d7270");

__int64 game_map_ProcSummon_CreateImpl_closure_Invoke(__int64 result,
                                                      __int64* a2)
{
  unsigned __int64 v2;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  float v17;
  __int128 v18;
  __int128 v19;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  __int128* v26;
  char* v27;
  char* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  struct {
    __int128 v34;
    unsigned __int64 v35;
    char gap56_[8];
    __int128* v36;
  } v34_;
  int v37;
  int v38;

  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
  if (v2 == 0) {
    return result;
  }
  v4 = result;
  game_6d7270_alt1(v2, a2[2], *(unsigned __int8*)(*a2 + 498));
  v5 = *((unsigned __int8*)a2 + 8);
  v6 = *(_QWORD*)(v2 + 392);
  v7 = game_GameModeData_instance_;
  LOBYTE(v38) = *((_BYTE*)a2 + 8);
  if (game_GameModeData_instance_ != 0) {
    v7 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  v8 = game_g_shared_system_skills_ptr;
  v9 = v6 != v7 && (*(_BYTE*)(v2 + 418) & 8) == 0 &&
           (LODWORD(v34_.v34) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                           game_g_shared_system_skills_ptr) &
                                0xFFF,
            !game_HasSkill_alt1((_QWORD*)(v2 + 1744), &v34_.v34)) ||
       v5 == 9;
  GameRoutine_6c47b0_alt1(v2, &v38, v9, 0);
  v10 = *((_DWORD*)a2 + 9);
  v11 = *(_QWORD*)(v2 + 8);
  *(_BYTE*)(v2 + 584) = *((_DWORD*)a2 + 8);
  *(_BYTE*)(v2 + 585) = v10;
  if (v11 != 0) {
    v12 = *(char*)(v11 + 584);
    if ((v12 & 0x80000000) == 0) {
      v13 = *(char*)(v11 + 585);
      if ((v13 & 0x80000000) == 0) {
        v14 = *(_DWORD*)(v11 + 592);
        v15 = v12 | 0x100;
        v16 = v13 | 0x100;
        v17 = (float)(unsigned int)(v14 - 1) * 0x1.4000000000000p+1f;
        if (v14 <= 0) {
          v17 = 0x0.0p+0f;
        }
        *(_QWORD*)&v18 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v15 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v17);
        v32 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v16 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v17);
        *(float*)&v33 =
            (float)((float)((float)((float)v15 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v17;
        *((_QWORD*)&v18 + 1) = v32;
        v34_.v34 = v18;
        *(_QWORD*)&v19 = __PAIR64__(
            COERCE_UNSIGNED_INT(Unit_6c7fa0_alt1(v11, &v34_.v34)), v33);
        *((_QWORD*)&v19 + 1) = v32;
        v34_.v34 = v19;
        Cursor_734a80(v2 + 48, (__int64*)&v34_.v34);
        UnitActor_81ba20_alt1(v2);
      }
    }
    v21 = *(_QWORD*)(v2 + 264);
    if (v21 != 0) {
      CharacterBuilder_1084780_alt1(v21);
    }
  }
  v22 = *a2;
  if (*a2 != 0) {
    LOBYTE(v22) = *(_BYTE*)(v22 + 2088);
  }
  *(_BYTE*)(v2 + 2089) = v22;
  LODWORD(v34_.v34) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C4LL) + v8 + 4) & 0xFFF;
  Unit_6ca760_alt1(v2, &v34_.v34);
  UnitActor_8194d0_alt1(v2);
  if (*GameData_212ce90[0] != 0 &&
      *(unsigned __int8*)(*GameData_212ce90[0] + 24) ==
          *((unsigned __int8*)a2 + 8)) {
    v23 = *(_DWORD*)(v2 + 416);
    if ((v23 & 1) == 0) {
      *(_DWORD*)(v2 + 416) = v23 & 0xFFFEFFFE | 1;
      *(_WORD*)(v2 + 20) |= 4u;
    }
  }
  if ((*(_WORD*)(v2 + 417) & 0x4004) == 0) {
    v24 = *(char*)(v2 + 584);
    v25 = *(char*)(v2 + 585);
    v26 = &v34_.v34;
    v27 = *(char**)(v2 + 600);
    v28 = *(char**)(v2 + 608);
    v34_.v35 = v2;
    v34_.v36 = &v34_.v34;
    v29 = *(_QWORD*)(*GameData_212ce98[0] + 96);
    *(_QWORD*)&v34_.v34 = GameData_1f94210;
    *((_QWORD*)&v34_.v34 + 1) = v29;
    if (v27 == v28) {
      goto LABEL_31;
    }
    do {
      v30 = *v27 + v24;
      v37 = v27[1] + v25;
      v38 = v30;
      if (v34_.v36 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(__int128*, int*, int*))(*(_QWORD*)v34_.v36 + 48LL))(
          v34_.v36, &v38, &v37);
      v27 += 4;
    } while (v27 != v28);
    v26 = v34_.v36;
    if (v34_.v36 == &v34_.v34) {
    LABEL_31:
      v31 = 32;
      goto LABEL_32;
    }
    if (v34_.v36 != nullptr) {
      v31 = 40;
    LABEL_32:
      (*(void (**)(__int64))(*(_QWORD*)v26 + v31))((__int64)v26);
    }
  }
  if (*GameData_21309c8[0] != 0) {
    GameRoutine_12272a0_alt1(*GameData_21309c8[0], v2);
  }
  result = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 32LL);
  if (result != 0) {
    *(_QWORD*)&v34_.v34 = v2;
    return (*(__int64 (**)(__int64, __int128*))(*(_QWORD*)result + 48LL))(
        result, &v34_.v34);
  }
  return result;
}

__int64 game_map_ProcSummon_CreateUnit_closure_Invoke(__int64 a1, __int64* a2,
                                                      long double a3,
                                                      long double a4)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  float32x4_t v9;
  float v10;
  float32x4_t v11;
  int8x16_t v12;
  float v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  long double v30;
  long double v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  __int128 v41;

  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *a2;
  v5 = *(_QWORD**)(a1 + 8);
  LODWORD(v41) = 0;
  if (*(_BYTE*)(v4 + 176) == 1) {
    v6 = *(_QWORD*)(v4 + 152);
    *(_QWORD*)&a3 = 0;
  LABEL_5:
    *(_QWORD*)&a4 = 0;
    result = (*(__int64 (**)(__int64, long double, long double))(v6 + 24))(
        v4 + 152, a3, a4),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_6;
  }
  if (*(float*)(v4 + 160) > 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)(v4 + 152) + 16LL))(v4 + 152),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = *(_QWORD*)(v4 + 152);
    goto LABEL_5;
  }
  result = (*(__int64 (**)(__int64, __int128*, __int64))(
      *(_QWORD*)(v4 + 152) + 8LL))(v4 + 152, &v41, v4 + 184),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((result & 1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v4 + 152) + 16LL))(v4 + 152),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LODWORD(v30) = v41;
    result = (*(__int64 (**)(__int64, long double, long double))(
        *(_QWORD*)(v4 + 152) + 24LL))(v4 + 152, v31, v30),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_6:
    *(_QWORD*)(v4 + 160) = 0;
    *(_WORD*)(v4 + 176) = 256;
    *(_WORD*)(v4 + 20) |= 8u;
  }
  v8 = v5[19];
  if (v8 != 0) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(v4 + 48) + 16LL))((void*)(&v39), v4 + 48),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = (__int64)X8CALL_X0(
        _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
                     *(_QWORD*)(v8 + 48) + 16LL))((void*)&v38, v8 + 48)),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v9 = vsubq_f32(v39, v38);
    if (!((float)(vmuls_lane_f32(LANES128(v9).n128_f32[2], v9, 2) +
                  (float)(LANES128(v9).n128_f32[0] *
                          LANES128(v9).n128_f32[0])) <
          0x1.0000000000000p-4f)) {
      v10 = 0x0.0p+0f;
      if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                               COERCE_AS(float32x2_t, 1065353216LL)))
              .n64_f32[0] > 0x0.0p+0f) {
        LANES128(v11).n128_u64[0] = LANES128(v9).n128_u32[0];
        LANES128(v11).n128_u64[1] = LANES128(v9).n128_u32[2];
        v12 = vmulq_f32(v11, v11);
        LANES128(v12).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                .n64_f32[0] > 0x0.0p+0f) {
          v36 = LANES128(v9).n128_u32[2];
          v37 = LANES128(v9).n128_u32[0];
          v40 = v11;
          v41 = GameData_1a83090;
          v13 = math_Vec3_Angle((float32x4_t*)&v41, &v40),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
          LANES128(v14).n128_u64[0] = v37;
          LANES128(v14).n128_u64[1] = v36;
          LANES128(v15).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v16).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v17).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v15).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                        COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v18).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v17).n128_i8[8] =
              vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          *(int8x8_t*)&LANES128(v16).n128_i8[8] =
              vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v18).n128_i8[8] =
              vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                        COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          if (LANES128_OF(vmlsq_f32(vmulq_f32(v15, v16), v17, v18))
                  .n128_f32[1] < 0x0.0p+0f) {
            v13 = -v13;
          }
          v10 = v13 * 0x1.ca5dc00000000p+5f;
        }
      }
      result = UnitActor_81ab40(v4, v10, 0x0.0p+0f),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v20 = (__int64*)v5[22];
  v19 = v5[23];
  if ((unsigned __int64)v20 >= v19) {
    v22 = v5[21];
    v23 = (char*)v20 - v22;
    v24 = ((__int64)v20 - v22) >> 3;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
      GameRoutine_6c1f60(),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v26 = v19 - v22;
    v27 = fw_memory_g_heap_manager_ptr;
    if (v26 >> 2 > v25) {
      v25 = v26 >> 2;
    }
    if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
      v28 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v28 = v25;
    }
    if (v28 != 0) {
      if (v28 >> 61 != 0) {
        GameRoutine_60a210(),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v29 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v29 = 0;
    }
    v32 = v29 + 8 * v28;
    v33 = (char*)v20 - v22;
    v34 = (__int64)&v23[v29 + -8 * v24];
    *(_QWORD*)&v23[v29] = v4;
    v21 = (__int64)&v23[v29 + 8];
    result = memcpy(v34, v22, v33),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v5[21] = v34;
    v5[22] = v21;
    v5[23] = v32;
    if (v22 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
        v35 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v35, v22),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else {
    *v20 = v4;
    v21 = (__int64)(v20 + 1);
  }
  v5[22] = v21;
  return result;
}

#pragma GCC visibility pop
