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
void game_menu_anonymous_CalibrationDialog_Tick(__int64 a1);
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

void game_menu_anonymous_CalibrationDialog_Tick(__int64 a1)
{
  int v1;
  int v2;
  __int64 v4;
  float v5;
  __int64 v6;
  int v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BOOL4 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  long double v22;
  __int64 v23;
  long double v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[4];
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  const char* v33;

  v2 = *(_DWORD*)(a1 + 1492);
  if (v2 != 2) {
    if (v2 != 1) {
      if (v2 == 0) {
        v4 = GameData_2258178;
        if (GameData_2258178 != 0) {
          v5 = 0.0;
          if (game_GameModeData_instance_ != 0) {
            v6 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48),
                &GameData_2258138);
            if (v6 != 0) {
              v5 = (float)*(int*)(v6 + 32);
            }
          }
          *(float*)(v4 + 536) = v5;
          *(_QWORD*)(v4 + 540) = 0;
          *(_QWORD*)(v4 + 548) = 0;
          *(_BYTE*)(v4 + 556) = 1;
          v7 = *(_DWORD*)(a1 + 1492) + 1;
        }
        else {
          v7 = 1;
        }
        *(_DWORD*)(a1 + 1496) = 0;
        *(_DWORD*)(a1 + 1492) = v7;
      }
      return;
    }
    game_1552980();
    if (GameData_2258178 != 0) {
      v8 = *(float*)(GameData_2258178 + 536);
      if (v8 <= 0.0) {
        v9 = 0.0;
      }
      else {
        v9 = (float)(*(float*)(GameData_2258178 + 548) / v8) *
             0x1.9000000000000p+6;
      }
    }
    else {
      v9 = 0.0;
    }
    if (vabds_f32(*(float*)(a1 + 1496), v9) >= 0.5) {
      *(float*)(a1 + 1496) = v9;
      snd_Fade_Fade_10c830(&v30, 0.0);
      snd_play_ff2d0((void*)(v28), "SE_SYS_MouseAdjust_Meter",
                     "SE_SYS_MouseAdjust_Meter", &v30, 0, 65537, 0, 0.0, 1.0);
      snd_Fade_Destroy_Fade(&v30);
    }
    if (*(_QWORD*)(a1 + 1520) != 0) {
      v10 = *(_QWORD*)(a1 + 1512);
      if (v10 != 0) {
        v11 = std___1___shared_weak_count_lock_alt1(v10);
        if (v11 == 0) {
          goto LABEL_31;
        }
        v12 = *(_QWORD*)(a1 + 1504);
        if (v12 != 0) {
          v1 = *(unsigned __int8*)(v12 + 24);
          v13 = v12 + 152;
          if (v1 == 0) {
            v13 = 0;
          }
          v14 = v13 != *(_QWORD*)(a1 + 1520);
        }
        else {
          v14 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak_alt1();
        }
        if (!v14) {
          if ((v1 & 1) == 0) {
            goto LABEL_37;
          }
        }
        else {
        LABEL_31:
          v15 = *(_QWORD*)(a1 + 1512);
          if (v15 == 0 || *(_QWORD*)(v15 + 8) == -1) {
            goto LABEL_37;
          }
        }
        v16 = *(_QWORD*)(a1 + 1608);
        if (v16 != 0) {
          *(float*)(v16 + 32) = v9;
        }
      }
    }
  LABEL_37:
    if (GameData_2258178 == 0 ||
        (v17 = *(float*)(GameData_2258178 + 536)) <= 0.0 ||
        (float)(*(float*)(GameData_2258178 + 548) / v17) < 1.0) {
      GameRoutine_16df7a0(a1);
      return;
    }
    if (fabsf(*(float*)(GameData_2258178 + 552)) > 0x1.6800000000000p+6) {
      *(_BYTE*)(a1 + 1300) = 1;
      snd_Fade_Fade_10c830(&v30, 0.0);
      snd_play_ff2d0((void*)(v28), "SE_SYS_MouseAdjust_Failure",
                     "SE_SYS_MouseAdjust_Failure", &v30, 0, 65537, 0, 0.0, 1.0);
      snd_Fade_Destroy_Fade(&v30);
      v18 = *(_QWORD*)(a1 + 152);
      v29 = v28;
      if (v18 != 0) {
        v19 = v18;
      }
      else {
        v19 = a1;
      }
      v33 = "MID_MouseCalibration_Failure";
      v28[0] = GameData_20d14a0;
      v20 = game_menu_Dialog__CreateBind_game_menu_Dialog(v19, &v33);
      if (v20 != 0) {
        v21 = v20;
        if (v29 != nullptr) {
          if (v29 == v28) {
            v32 = &v30;
            (*(void (**)(__int64))(*v29 + 24LL))((__int64)v29);
          }
          else {
            v32 =
                (__int64*)(*(__int64 (**)(__int64))(*v29 + 16LL))((__int64)v29);
          }
        }
        else {
          v32 = nullptr;
        }
        GameRoutine_6680e0(&v30, v21 + 1248);
        if (v32 == &v30) {
          v26 = 32;
        }
        else {
          if (v32 == nullptr) {
            goto LABEL_67;
          }
          v26 = 40;
        }
        (*(void (**)(__int64))(*v32 + v26))((__int64)v32);
      }
    LABEL_67:
      if (v29 == v28) {
        v27 = 32;
      }
      else {
        if (v29 == nullptr) {
        LABEL_72:
          BasicMenuCursor_16ddbe0(a1);
          return;
        }
        v27 = 40;
      }
      (*(void (**)(__int64))(*v29 + v27))((__int64)v29);
      goto LABEL_72;
    }
    snd_Fade_Fade_10c830(&v30, 0.0);
    snd_play_ff2d0((void*)(v28), "SE_SYS_MouseAdjust_Success",
                   "SE_SYS_MouseAdjust_Success", &v30, 0, 65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(&v30);
    LODWORD(v22) = 1.0;
    LayoutAccessor_1562680(a1 + 848, "Success", v22);
    LayoutAccessor_1560070((void*)(&v30), a1 + 848, "L_NextCursor");
    if (v31 != 0) {
      v23 = std___1___shared_weak_count_lock_alt1(v31);
      v25 = v30;
      if (v31 != 0) {
        *(__n128*)&v24 = std___1___shared_weak_count___release_weak_alt1();
      }
      if (v23 != 0 && v25 != 0) {
        LODWORD(v24) = 1.0;
        LayoutAccessor_1562680(v25, "Out", v24);
        goto LABEL_57;
      }
      if (v23 != 0) {
      LABEL_57:
        if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          std___1___shared_weak_count___release_weak_alt1();
        }
      }
    }
    ++*(_DWORD*)(a1 + 1492);
    return;
  }
  if ((LayoutAccessor_1563280(a1 + 848, "Success", 0) & 1) == 0) {
    BasicMenuCursor_16ddaa0(a1, 2);
  }
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

  game_menu_BasicMenu_Unknown96();
  *(_BYTE*)(a1 + 1300) = 0;
  result = ui_LayoutAccessor_SetPaneVisible(a1 + 848, "L_NextCursor", 0);
  if (*(_QWORD*)(a1 + 1520) == 0) {
    goto LABEL_18;
  }
  result = *(_QWORD*)(a1 + 1512);
  if (result == 0) {
    goto LABEL_18;
  }
  result = std___1___shared_weak_count_lock();
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
    result = std___1___shared_weak_count___release_weak(v8);
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
