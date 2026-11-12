#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18a57c0(_QWORD, long double);
__int64 GameRoutine_18a5bc0(__int64);
__int64 GameRoutine_18b26a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_820d50(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _QWORD GameData_2104478[4];
extern _QWORD GameData_2104498[4];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_2104458;
extern __int64 (*GameData_2105948[])();
extern __int64 (*GameData_2105970[])();
extern __int64 (*GameData_21059b0[])();
extern __int64 (*GameData_2105b88[])();
extern __int64 (*GameData_2105bb0[])();
extern __int64 (
    *game_gameui_control_IconSkill_Destroy_IconSkill_18b4f60_ptr[])();
extern __int64 (*game_gameui_control_IconSkill_vtable[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 GameData_212c638;
extern __int64 GameData_21ec7b0;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
__int64 game_gameui_control_18aa140_alt1(__int64 a1, __int64 a2) __asm__(
    "game_gameui_control_18aa140");
__attribute__((swiftcall)) void
game_gameui_control_18b4660(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3);
__int64 game_gameui_control_18bee90(__int64 result, __int64 a2, char a3,
                                    char a4);
__int64* game_820d50_alt1(int) __asm__("game_820d50");
__int64 GameHr_18a57c0(__int64);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 Manager_136a920_alt1(__int64, __int64, int, unsigned int,
                             const char*) __asm__("Manager_136a920");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
extern _UNKNOWN GameData_2104478_alt1 __asm__("GameData_2104478");
void GameRoutine_18a5bc0_alt1(__int64) __asm__("GameRoutine_18a5bc0");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void LayoutAccessor_1562060_alt1(__int64*, __int64,
                                 const char*) __asm__("LayoutAccessor_1562060");
void game_gameui_control_18aa140(__int64 a1, __int64 a2);

void game_gameui_control_18aa140(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  char v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  int v16;
  int v17;
  char v18;
  float v19;
  _DWORD v20[2];
  int v21;

  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  if (a2 == 0 ||
      ((v4 = *(_QWORD*)(a2 + 440)) == 0 ? (v5 = 9) : (v5 = *(_BYTE*)(v4 + 16)),
       ((1 << v5) & 0xF1) == 0 ||
           (v6 = game_820d50_alt1(2), game_GameModeData_instance_ != 0) &&
               (v7 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v6)) != 0 &&
               *(_DWORD*)(v7 + 32) != 0)) {
    GameHr_18a57c0(a1);
  }
  else {
    v8 = game_g_shared_system_skills_ptr;
    v21 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    if ((game_HasSkill_alt1((_QWORD*)(a2 + 1744), (unsigned int*)&v21) & 1) !=
        0) {
      v9 = 3;
    }
    else {
      v21 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v8) & 0xFFF;
      if ((game_HasSkill_alt1((_QWORD*)(a2 + 1744), (unsigned int*)&v21) & 1) !=
          0) {
        v9 = 2;
      }
      else {
        v21 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v8) & 0xFFF;
        v9 = game_HasSkill_alt1((_QWORD*)(a2 + 1744), (unsigned int*)&v21) & 1;
      }
    }
    LayoutAccessor_1562cf0_alt1(a1 + 88, "Icon");
    v10 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 88), (__int64)"Icon");
    if (v10 != 0) {
      v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0);
      if (v11 != 0) {
        Manager_136a920_alt1(ui_Manager_instance_ + 1264, v11, 0, 7u,
                             *((const char**)&GameData_2104458 + v9));
      }
    }
    v12 = (const char*)GameData_2104498[v9];
    LayoutAccessor_1562060_alt1((__int64*)(a1 + 88), (__int64)"T_Txt",
                                *((const char**)&GameData_2104478_alt1 + v9));
    ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 88, (__int64)"L_InfoTxt", 1);
    LayoutAccessor_1562060_alt1((__int64*)(a1 + 88), (__int64)"L_InfoTxt/T_Txt",
                                v12);
    v13 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 88),
                                             (__int64)"L_InfoTxt/T_Txt");
    if (v13 != 0) {
      v14 = v13;
      v15 = (_QWORD*)ui_LayoutAccessor_FindTextBox_alt1(
          (__int64*)(a1 + 88), (__int64)"L_InfoTxt/T_Txt");
      if (v15 != nullptr) {
        GameRoutine_190a0c0_alt1((float*)&v21, (__int64)v20, &v19, v15,
                                 v15[27]);
        v16 = v20[0];
        v17 = v20[1];
      }
      else {
        v16 = 0;
        v17 = 0;
      }
      v18 = *(_BYTE*)(v14 + 88);
      *(_DWORD*)(v14 + 80) = v16;
      *(_DWORD*)(v14 + 84) = v17;
      *(_BYTE*)(v14 + 88) = v18 | 0x10;
    }
    LayoutAccessor_1562cf0_alt1(a1 + 88, "InfoTitleOn");
    LayoutAccessor_1562cf0_alt1(a1 + 88, "NumNone");
    LayoutAccessor_1562cf0_alt1(a1 + 88, "StatusDetailOff");
    LayoutAccessor_1562cf0_alt1(a1 + 88, "StatusOff");
    LayoutAccessor_1562cf0_alt1(a1 + 88, "Wdw_TitleOn_Status02");
    GameRoutine_18a5bc0_alt1(a1);
  }
}

__attribute__((swiftcall)) void

game_gameui_control_18b4660(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;

  v8 = (_QWORD*)LayoutEx_579160(1152, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_21059b0;
  GameRoutine_18b26a0(v8 + 3, a1, a2, a3);
  v10[141] = 0;
  v10[142] = 0;
  v10[143] = 0;
  v11 = v10 + 138;
  v10[3] = game_gameui_control_IconSkill_vtable;
  v10[138] = 0;
  v10[139] = 0;
  *((_DWORD*)v10 + 280) = 0;
  v10[12] = GameData_2105948;
  v10[132] = GameData_2105970;
  v12 = ui_LayoutAccessor_FindPane(v10 + 14, "Img");
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
    *v11 = v13;
    if (v13 != 0) {
      goto LABEL_8;
    }
  }
  else {
    *v11 = 0;
  }
  v14 = ui_LayoutAccessor_FindPane(v10 + 14, "Icon");
  if (v14 != 0) {
    v14 = __dynamic_cast(v14, GameData_212d670[0], GameData_212d678[0], 0);
  }
  *v11 = v14;
LABEL_8:
  result = (*(__int64 (**)(_QWORD*, _QWORD))(v10[3] + 40LL))(v9, 0);
  *a4 = v9;
  a4[1] = v10;
  v10[3] = game_gameui_control_IconSkill_Destroy_IconSkill_18b4f60_ptr;
  v10[12] = GameData_2105b88;
  v10[132] = GameData_2105bb0;
  {
    result;
    return;
  }
}

__int64 game_gameui_control_18bee90(__int64 result, __int64 a2, char a3,
                                    char a4)
{
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
  float32x2_t* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float v34;
  float v35;
  float32x4_t v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v43;
  float v44;
  float v45;
  unsigned __int64 v46;
  __int128 v47;
  float32x4_t v48;
  _DWORD v49[23];

  if (*(_BYTE*)(*(_QWORD*)(result + 72) + 24LL) == 1) {
    *(_QWORD*)&v49[3] = v13;
    *(_QWORD*)&v49[5] = v12;
    *(_QWORD*)&v49[7] = v11;
    *(_QWORD*)&v49[9] = v10;
    *(_QWORD*)&v49[11] = v9;
    *(_QWORD*)&v49[13] = v8;
    *(_QWORD*)&v49[15] = v7;
    *(_QWORD*)&v49[17] = v6;
    *(_QWORD*)&v49[19] = v4;
    *(_QWORD*)&v49[21] = v5;
    v17 = (float32x2_t*)result;
    v18 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
    if (*(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL) == v18 ||
        (v19 = *(_QWORD*)(v18 - 8)) == 0) {
      v20 = 0;
    }
    else {
      v20 = *(_QWORD*)(v19 + 24);
      v21 = *(_QWORD*)(v19 + 32);
      if (v21 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak(v21);
        }
      }
    }
    v22 = (*(float (**)(float32x2_t*))(LANES64(*(v17)).n64_u64[0] + 112))(v17);
    v24 = v23;
    *(long double*)&v25 =
        ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v20 + 16LL))(v20);
    v48 = vaddq_f32(
        v28, vmlaq_laneq_f32(
                 vmlaq_lane_f32(
                     vmulq_n_f32(
                         v25, COERCE_FLOAT(*(_OWORD*)LANES64(v17[24]).n64_u64)),
                     v26, v17[24], 1),
                 v27, *(float32x4_t*)LANES64(v17[24]).n64_u64, 2));
    *(long double*)&v29 =
        ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v20 + 24LL))(v20);
    v33 = vaddq_f32(
        v32, vmlaq_laneq_f32(
                 vmlaq_lane_f32(
                     vmulq_n_f32(v29, LANES128(v48).n128_f32[0]), v30,
                     COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]), 1),
                 v31, v48, 2));
    v36 = vmulq_n_f32(v33, 1.0 / LANES128(v33).n128_f32[3]);
    v34 = 0x1.e000000000000p+9 * LANES128(v36).n128_f32[0];
    v35 = vmuls_lane_f32(0x1.0e00000000000p+9,
                         COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1);
    LANES128(v36).n128_f32[0] =
        -(float)(LANES128(v36).n128_f32[0] * 0x1.e000000000000p+9);
    if (LANES128(v36).n128_f32[2] >= 0.0) {
      v37 = v34;
    }
    else {
      v37 = LANES128(v36).n128_f32[0];
    }
    if (LANES128(v36).n128_f32[2] >= 0.0) {
      v38 = v35;
    }
    else {
      v38 = -(float)(LANES128(v36).n128_f32[1] * 0x1.0e00000000000p+9);
    }
    v39 = fabsf(v37 / (float)((float)(0x1.e000000000000p+10 - v22) * 0.5));
    v40 = fabsf(v38 / (float)((float)(0x1.0e00000000000p+10 - v24) * 0.5));
    if (v39 < v40) {
      v39 = v40;
    }
    if (LANES128(v36).n128_f32[2] < 0.0 || v39 > 1.0) {
      if (GameData_21ec7b0 != 0) {
        v37 = v37 / v39;
        v38 = v38 / v39;
      }
      else {
        v41 = fabsf(v38 / (float)((float)(v24 + 0x1.0e00000000000p+10) * 0.5));
        if (fabsf(v37 / (float)((float)(v22 + 0x1.e000000000000p+10) * 0.5)) >
                1.0 ||
            v41 > 1.0) {
          (*(void (**)(float32x2_t*, _QWORD))(LANES64(*(v17)).n64_u64[0] + 40))(
              v17, 0);
        }
      }
    }
    if ((a4 & 1) == 0 && (GameData_21ec7b0 == 0 ||
                          (v43 = *(_QWORD*)(GameData_21ec7b0 + 8)) != 0 &&
                              (*(_BYTE*)(v43 + 113) & 0x80) != 0)) {
      v44 = 0x1.e000000000000p+5;
      if ((a3 & 1) != 0) {
        v44 = 10.0;
      }
      v38 = v38 - v44;
      if (*(_BYTE*)(a2 + 8) == 1) {
        LODWORD(v45) = HIDWORD(*(_QWORD*)a2);
        v37 = v37 + COERCE_FLOAT(*(_QWORD*)a2);
        LANES64(v17[28]).n64_u64[0] = *(unsigned __int64*)a2;
        v38 = v38 + v45;
      }
    }
    LANES64(v17[26]).n64_f32[0] = v37;
    LANES64(v17[26]).n64_f32[1] = v38;
    v46 = LANES64(*(v17)).n64_u64[0];
    LANES64(v17[34]).n64_u8[0] = a3 & 1;
    v47 = *(_OWORD*)LANES64(v17[26]).n64_u64;
    LANES64(v17[34]).n64_u8[1] = a4 & 1;
    *(float*)v49 = v37;
    *(float*)&v49[1] = v38;
    v49[2] = 0;
    *(_OWORD*)LANES64(v17[26]).n64_u64 = (unsigned __int64)v47;
    return (*(__int64 (**)(float32x2_t*, _DWORD*))(v46 + 56))(v17, v49);
  }
  return result;
}

#pragma GCC visibility pop
