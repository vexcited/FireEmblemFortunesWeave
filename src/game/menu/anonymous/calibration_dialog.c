#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_menu_BasicMenu_Unknown96(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 CalibrationDialog_Unknown96(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 BasicMenuCursor_16ddaa0(_QWORD, _QWORD);
__int64 BasicMenuCursor_16ddbe0(_QWORD);
__int64 GameRoutine_16df7a0(__int64 result);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 game_1552980(void);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count_lock_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count_lock");
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_20d14a0[])();
extern __int64 GameData_2258138;
extern __int64 GameData_2258178;
extern __int64 game_GameModeData_instance_;
void game_menu_anonymous_CalibrationDialog_Tick_alt1(__int64 a1) __asm__(
    "game_menu_anonymous_CalibrationDialog_Tick");
__int64 GameRoutine_155da20(__int64 result, long double);
__int64 GameRoutine_156bee0(__int64 result, __int64, __int64, __int64, char,
                            float, float);
__int64 LayoutAccessor_155c910(__int64, __int64*);
__int64 LayoutAccessor_155cda0(__int64 result, __int64, char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64, long double);
__int64 ui_LayoutAccessor_SetPaneSize(__int64 result, __int64, long double,
                                      float);
float ui_LayoutAccessor_GetPaneSize(__int64*, __int64);
void GameRoutine_1648c60(__int64, long double);
__int64 CalibrationDialog_Unknown135(__int64 a1, long double a2);
_QWORD*
BasicMenuCursor_16ddbe0_alt1(_QWORD* result) __asm__("BasicMenuCursor_16ddbe0");
_QWORD* GameRoutine_6680e0_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_6680e0");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 BasicMenuCursor_16ddaa0_alt1(__int64 result,
                                     int) __asm__("BasicMenuCursor_16ddaa0");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_1563280_alt1(__int64*, __int64,
                                    char) __asm__("LayoutAccessor_1563280");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog_alt1(
    __int64, __int64) __asm__("game_menu_Dialog__CreateBind_game_menu_Dialog");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt2(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool game_1552980_alt1() __asm__("game_1552980");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 game_menu_anonymous_CalibrationDialog_Tick(__int64 result);
__int64 BasicMenu_16df7a0(__int64 result);
__int64 game_menu_BasicMenu_Unknown96_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown96");
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog_alt2(
    __int64,
    const char**) __asm__("game_menu_Dialog__CreateBind_game_menu_Dialog");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
unsigned __int64 GameHr_1562680_alt1(unsigned __int64 result, char*,
                                     float) __asm__("GameHr_1562680");
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 CalibrationDialog_Unknown93(__int64 a1);

__int64 game_menu_anonymous_CalibrationDialog_Tick(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  int v2;
  __int64 v3;
  __int64 v4;
  float v5;
  int v6;
  float v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BOOL4 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
  } v26_;
  struct {
    unsigned __int64 v28;
    __int64 v29;
    char gap64_[16];
    unsigned __int64* v30;
  } v28_;
  const char* v31;

  v2 = *(_DWORD*)(result + 1492);
  v3 = result;
  if (v2 != 2) {
    if (v2 != 1) {
      if (v2 == 0) {
        v4 = GameData_2258178;
        if (GameData_2258178 != 0) {
          v5 = 0x0.0p+0f;
          if (game_GameModeData_instance_ != 0) {
            result = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&GameData_2258138);
            if (result != 0) {
              v5 = (float)*(int*)(result + 32);
            }
          }
          *(float*)(v4 + 536) = v5;
          *(_QWORD*)(v4 + 540) = 0;
          *(_QWORD*)(v4 + 548) = 0;
          *(_BYTE*)(v4 + 556) = 1;
          v6 = *(_DWORD*)(v3 + 1492) + 1;
        }
        else {
          v6 = 1;
        }
        *(_DWORD*)(v3 + 1496) = 0;
        *(_DWORD*)(v3 + 1492) = v6;
      }
      return result;
    }
    game_1552980_alt1();
    if (GameData_2258178 != 0) {
      v7 = *(float*)(GameData_2258178 + 536);
      if (v7 <= 0x0.0p+0f) {
        v8 = 0x0.0p+0f;
      }
      else {
        v8 = (float)(*(float*)(GameData_2258178 + 548) / v7) *
             0x1.9000000000000p+6f;
      }
    }
    else {
      v8 = 0x0.0p+0f;
    }
    if (vabds_f32(*(float*)(v3 + 1496), v8) >= 0x1.0000000000000p-1f) {
      *(float*)(v3 + 1496) = v8;
      snd_Fade_Fade_10c830_alt1((__int64)&v28_.v28, 0x0.0p+0f);
      snd_play_ff2d0_alt1((__int64)"SE_SYS_MouseAdjust_Meter",
                          (__int64)"SE_SYS_MouseAdjust_Meter",
                          (__int64)&v28_.v28, 0, 0x10001u, 0, 0x0.0p+0f,
                          0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade_alt1(&v28_.v28);
    }
    if (*(_QWORD*)(v3 + 1520) != 0) {
      v9 = *(_QWORD*)(v3 + 1512);
      if (v9 != 0) {
        v10 = std___1___shared_weak_count_lock_alt2(v9);
        if (v10 == 0) {
          goto LABEL_31;
        }
        v11 = *(_QWORD*)(v3 + 1504);
        if (v11 != 0) {
          v1 = *(unsigned __int8*)(v11 + 24);
          v12 = v11 + 152;
          if (v1 == 0) {
            v12 = 0;
          }
          v13 = v12 != *(_QWORD*)(v3 + 1520);
        }
        else {
          v13 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v14 = v10;
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak_alt2(v14);
        }
        if (!v13) {
          if ((v1 & 1) == 0) {
            goto LABEL_37;
          }
        }
        else {
        LABEL_31:
          v15 = *(_QWORD*)(v3 + 1512);
          if (v15 == 0 || *(_QWORD*)(v15 + 8) == -1) {
            goto LABEL_37;
          }
        }
        v16 = *(_QWORD*)(v3 + 1608);
        if (v16 != 0) {
          *(float*)(v16 + 32) = v8;
        }
      }
    }
  LABEL_37:
    if (GameData_2258178 == 0) {
      return BasicMenu_16df7a0(v3);
    }
    v17 = *(float*)(GameData_2258178 + 536);
    if (v17 <= 0x0.0p+0f || (float)(*(float*)(GameData_2258178 + 548) / v17) <
                                0x1.0000000000000p+0f) {
      return BasicMenu_16df7a0(v3);
    }
    if (fabsf(*(float*)(GameData_2258178 + 552)) > 0x1.6800000000000p+6f) {
      *(_BYTE*)(v3 + 1300) = 1;
      snd_Fade_Fade_10c830_alt1((__int64)&v28_.v28, 0x0.0p+0f);
      snd_play_ff2d0_alt1((__int64)"SE_SYS_MouseAdjust_Failure",
                          (__int64)"SE_SYS_MouseAdjust_Failure",
                          (__int64)&v28_.v28, 0, 0x10001u, 0, 0x0.0p+0f,
                          0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade_alt1(&v28_.v28);
      v18 = *(_QWORD*)(v3 + 152);
      v26_.v27 = v26_.v26;
      if (v18 != 0) {
        v19 = v18;
      }
      else {
        v19 = v3;
      }
      v31 = "MID_MouseCalibration_Failure";
      v26_.v26[0] = GameData_20d14a0;
      v20 = game_menu_Dialog__CreateBind_game_menu_Dialog_alt2(v19, &v31);
      if (v20 != 0) {
        v21 = v20;
        if (v26_.v27 != nullptr) {
          if (v26_.v27 == v26_.v26) {
            v28_.v30 = &v28_.v28;
            (*(void (**)(__int64))(*v26_.v27 + 24LL))((__int64)v26_.v27);
          }
          else {
            v28_.v30 = (unsigned __int64*)(*(__int64 (**)(__int64))(
                *v26_.v27 + 16LL))((__int64)v26_.v27);
          }
        }
        else {
          v28_.v30 = nullptr;
        }
        GameRoutine_6680e0_alt1(&v28_.v28, (_QWORD*)(v21 + 1248));
        if (v28_.v30 == &v28_.v28) {
          v24 = 32;
        }
        else {
          if (v28_.v30 == nullptr) {
            goto LABEL_67;
          }
          v24 = 40;
        }
        (*(void (**)(__int64))(*v28_.v30 + v24))((__int64)v28_.v30);
      }
    LABEL_67:
      if (v26_.v27 == v26_.v26) {
        v25 = 32;
      }
      else {
        if (v26_.v27 == nullptr) {
          return (__int64)BasicMenuCursor_16ddbe0_alt1((_QWORD*)v3);
        }
        v25 = 40;
      }
      (*(void (**)(__int64))(*v26_.v27 + v25))((__int64)v26_.v27);
      return (__int64)BasicMenuCursor_16ddbe0_alt1((_QWORD*)v3);
    }
    snd_Fade_Fade_10c830_alt1((__int64)&v28_.v28, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)"SE_SYS_MouseAdjust_Success",
                        (__int64)"SE_SYS_MouseAdjust_Success",
                        (__int64)&v28_.v28, 0, 0x10001u, 0, 0x0.0p+0f,
                        0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(&v28_.v28);
    GameHr_1562680_alt1(v3 + 848, "Success", 0x1.0000000000000p+0f);
    LayoutAccessor_1560070_alt1((void*)(&v28_.v28), (__int64*)(v3 + 848),
                                "L_NextCursor");
    result = v28_.v29;
    if (v28_.v29 != 0) {
      v22 = std___1___shared_weak_count_lock_alt2(v28_.v29);
      v23 = v28_.v28;
      result = v28_.v29;
      if (v28_.v29 != 0) {
        result = std___1___shared_weak_count___release_weak_alt2(v28_.v29);
      }
      if (v22 != 0 && v23 != 0) {
        result = GameHr_1562680_alt1(v23, "Out", 0x1.0000000000000p+0f);
        goto LABEL_57;
      }
      if (v22 != 0) {
      LABEL_57:
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          result = std___1___shared_weak_count___release_weak_alt2(v22);
        }
      }
    }
    ++*(_DWORD*)(v3 + 1492);
    return result;
  }
  result = LayoutAccessor_1563280_alt1((__int64*)(result + 848),
                                       (__int64)"Success", 0);
  if ((result & 1) == 0) {
    return BasicMenuCursor_16ddaa0_alt1(v3, 2);
  }
  return result;
}

__int64 CalibrationDialog_Unknown93(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  struct {
    __int64 v6;
    __int64 v7;
  } v6_;

  LayoutAccessor_1560070_alt1((void*)(&v6_.v6), (__int64*)(a1 + 848),
                              "L_NextCursor");
  result = v6_.v7;
  if (v6_.v7 != 0) {
    v3 = std___1___shared_weak_count_lock_alt2(v6_.v7);
    v4 = v6_.v6;
    result = v6_.v7;
    if (v6_.v7 != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(v6_.v7);
    }
    if (v3 == 0 || v4 == 0) {
      if (v3 == 0) {
        goto LABEL_12;
      }
    }
    else {
      LayoutAccessor_155e830(v4, 1);
      GameHr_1562680(v4, "Wait", 0x1.0000000000000p+0f);
      result = GameHr_1562680(v4, "In", 0x1.0000000000000p+0f);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      result = std___1___shared_weak_count___release_weak_alt2(v3);
    }
  }
LABEL_12:
  *(_DWORD*)(a1 + 1492) = 0;
  return result;
}

__int64 CalibrationDialog_Unknown96(__int64 a1)
{
  int v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  game_menu_BasicMenu_Unknown96_alt1(a1);
  *(_BYTE*)(a1 + 1300) = 0;
  result = ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, "L_NextCursor", 0);
  if (*(_QWORD*)(a1 + 1520) == 0) {
    goto LABEL_18;
  }
  result = *(_QWORD*)(a1 + 1512);
  if (result == 0) {
    goto LABEL_18;
  }
  result = std___1___shared_weak_count_lock_alt2(result);
  if (result == 0) {
    goto LABEL_11;
  }
  v4 = *(_QWORD*)(a1 + 1504);
  if (v4 != 0) {
    v1 = *(unsigned __int8*)(v4 + 24);
    v5 = v4 + 152;
    if (v1 == 0) {
      v5 = 0;
    }
    v6 = v5 != *(_QWORD*)(a1 + 1520);
  }
  else {
    v6 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6) {
    LABEL_11:
      v7 = *(_QWORD*)(a1 + 1512);
      if (v7 == 0 || *(_QWORD*)(v7 + 8) == -1) {
        goto LABEL_18;
      }
      goto LABEL_16;
    }
  }
  else {
    v8 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak_alt2(v8);
    if (v6) {
      goto LABEL_11;
    }
  }
  if ((v1 & 1) != 0) {
  LABEL_16:
    v9 = *(_QWORD*)(a1 + 1608);
    if (v9 != 0) {
      *(_DWORD*)(v9 + 32) = 0;
    }
  }
LABEL_18:
  *(_DWORD*)(a1 + 1492) = 0;
  return result;
}

__int64 CalibrationDialog_Unknown135(__int64 a1, long double a2)
{
  long double v4;
  float v5;
  long double v7;
  int v8;
  __int64 v9;
  long double v10;
  unsigned __int64 v11;
  __int64 v13;
  unsigned __int64 v14;
  _BYTE v15[4];

  GameRoutine_1648c60(a1, a2);
  LayoutAccessor_155c910(a1 + 1504, (__int64*)(a1 + 848));
  LayoutAccessor_155cda0(a1 + 1504, (__int64)"Gauge", nullptr);
  *(_QWORD*)&v4 = 0;
  v5 = 0x0.0p+0f;
  GameRoutine_155da20(a1 + 1504, v4);
  *(float*)&v7 =
      ui_LayoutAccessor_GetPaneSize((__int64*)(a1 + 848), (__int64)"A_Txt");
  v8 = LODWORD(v7);
  v9 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 848), (__int64)"A_Txt", v7);
  v15[0] = 0;
  v14 = 0xFF7FFFFF7F7FFFFFLL;
  v13 = 0x7F7FFFFFFF7FFFFFLL;
  if (v9 != 0) {
    v11 = LANES128_OF(
              vmulq_f32(*(float32x4_t*)(v9 + 128), *(float32x4_t*)(v9 + 128)))
              .n128_u64[0];
    GameRoutine_156bee0(
        v9, (__int64)&v14, (__int64)&v13, (__int64)v15, 0,
        sqrtf((float)(*(float*)&v11 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v9 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v9 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(v9 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(v9 + 144)))) /
            *(float*)(v9 + 72),
        sqrtf((float)(*((float*)&v11 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v9 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v9 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v9 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v9 + 144))))) /
            *(float*)(v9 + 76));
    if (v15[0] == 1) {
      v5 = vabds_f32(*((float*)&v13 + 1), *((float*)&v14 + 1));
    }
  }
  LODWORD(v10) = v8;
  return ui_LayoutAccessor_SetPaneSize(a1 + 848, (__int64)"A_Txt", v10, v5);
}

#pragma GCC visibility pop
