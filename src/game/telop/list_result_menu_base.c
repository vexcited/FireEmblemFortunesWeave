#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155cda0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155d940(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_2131d18[23];
extern __int64 GameData_22736d0;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64* GameData_212e008[9];
extern __int64* game_g_frame_clock_ptr[3];
__int64 ListResultMenuBase_1754380(__int64 result);
_DWORD* ListResultMenuBase_1754800(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 game_8224a0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak();
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 game_GameModeData_instance_;
__int64 ListResultMenuBase_1753ea0(__int64 a1);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameRoutine_173f310(__int64, __int64*, char, __int64, __int64, float);
__int64 GameRoutine_173ff00(__int64, const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void game_menu_BasicMenu_Unknown57(__int64, __int64*);
__int64 ListResultMenuBase_1753b90(__int64 a1, __int64* a2);
__int64* game_8224a0_alt1(unsigned __int8) __asm__("game_8224a0");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
unsigned __int64 GameHr_1562680(unsigned __int64 result, char*, float);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");

__int64 ListResultMenuBase_1753b90(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD v6[2];
  _QWORD v7[2];
  __int64 v8[2];

  game_menu_BasicMenu_Unknown57(a1, a2);
  LayoutAccessor_1560070_alt1((void*)(v8), (__int64*)(a1 + 848), "L_Title");
  v7[0] = "In_Judege01";
  v7[1] = 11;
  v6[0] = "Out";
  v6[1] = 3;
  v3 = GameRoutine_173f310(a1, v8, 0, (__int64)v7, (__int64)v6,
                           -0x1.0000000000000p+0f);
  v4 = v8[1];
  *(_QWORD*)(a1 + 1064) = v3;
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v4);
    v3 = *(_QWORD*)(a1 + 1064);
  }
  return GameRoutine_173ff00(v3, "TitleTxt_Judege01");
}

__int64 ListResultMenuBase_1753ea0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  int v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  const char* v9;
  const char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  int v14;
  const char* v15;
  __int64* v16;
  __int64* v17;
  unsigned int v18;
  __int64 v19;
  char v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _DWORD* v26;
  __int64 result;
  __int64 v28;
  int v29;
  int v30;
  unsigned int v31;
  float v32;
  struct {
    __int64* v33;
    __int64 v34;
    unsigned __int64 v35;
    unsigned __int64 v36;
    int v37;
    int v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v33_;

  LayoutAccessor_1560070_alt1((void*)(&v33_.v33), (__int64*)(a1 + 848),
                              "L_Title");
  if (v33_.v34 == 0) {
    goto LABEL_29;
  }
  v2 = std___1___shared_weak_count_lock_alt1(v33_.v34);
  v3 = v33_.v33;
  if (v33_.v34 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v33_.v34);
  }
  if (v2 == 0 || v3 == nullptr) {
    if (v2 == 0) {
      goto LABEL_29;
    }
    goto LABEL_27;
  }
  GameHr_1562680((unsigned __int64)v3, "Type_Common", 0x1.0000000000000p+0f);
  v5 = *(_DWORD*)(a1 + 1060);
  if (v5 > 2) {
    if (v5 > 6 && v5 != 7) {
      goto LABEL_27;
    }
    goto LABEL_19;
  }
  if (v5 != 0) {
    if (v5 != 1) {
      if (v5 != 2) {
        goto LABEL_27;
      }
    LABEL_19:
      GameHr_1562680((unsigned __int64)v3, "Title_Ank", 0x1.0000000000000p+0f);
      v33_.v39 = -1;
      v33_.v40 = -1;
      v33_.v41 = -1;
      v33_.v42 = -1;
      v6 = *msg_MessageManager_instance__ptr[0];
      v33_.v43 = -1;
      v33_.v44 = -1;
      v33_.v45 = -1;
      v33_.v46 = -1;
      v33_.v47 = -1;
      v33_.v48 = -1;
      v33_.v49 = -1;
      v33_.v50 = -1;
      v33_.v33 = GameData_212e348 + 2;
      v33_.v34 = 0xFFFF0001FFFF0000LL;
      v33_.v35 = 0xFFFF0004FFFF0002LL;
      v33_.v36 = 0xFFFF0006FFFF0005LL;
      v33_.v51 = 8;
      v33_.v37 = -65529;
      v33_.v38 = -65528;
      v7 = GameRoutine_a4dbe0_alt1(v6, "MID_Sys_Result_Headline_Result", 0);
      if (v7 != nullptr) {
        v8 = (__int64)v7;
        v9 = "T_Title_Ank";
        goto LABEL_25;
      }
      goto LABEL_27;
    }
    GameHr_1562680((unsigned __int64)v3, "Title_System", 0x1.0000000000000p+0f);
    v10 = "MID_Sys_Result_Headline_EXP_Get";
  }
  else {
    GameHr_1562680((unsigned __int64)v3, "Title_System", 0x1.0000000000000p+0f);
    v10 = "MID_Sys_Result_Headline_EXP_Bonus";
  }
  v33_.v39 = -1;
  v33_.v40 = -1;
  v33_.v41 = -1;
  v33_.v42 = -1;
  v11 = *msg_MessageManager_instance__ptr[0];
  v33_.v43 = -1;
  v33_.v44 = -1;
  v33_.v45 = -1;
  v33_.v46 = -1;
  v33_.v47 = -1;
  v33_.v48 = -1;
  v33_.v49 = -1;
  v33_.v50 = -1;
  v33_.v33 = GameData_212e348 + 2;
  v33_.v34 = 0xFFFF0001FFFF0000LL;
  v33_.v35 = 0xFFFF0004FFFF0002LL;
  v33_.v36 = 0xFFFF0006FFFF0005LL;
  v33_.v51 = 8;
  v33_.v37 = -65529;
  v33_.v38 = -65528;
  v12 = GameRoutine_a4dbe0_alt1(v11, v10, 0);
  if (v12 != nullptr) {
    v9 = "T_Title";
    v8 = (__int64)v12;
  LABEL_25:
    v13 = ui_LayoutAccessor_FindTextBox_alt1(v3, v9);
    if (v13 != 0) {
      GameRoutine_156c5d0_alt1(v13, v8, 0);
    }
  }
LABEL_27:
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
LABEL_29:
  v14 = *(_DWORD*)(a1 + 1060);
  if (v14 <= 5) {
    if (v14 != 3) {
      if (v14 == 4) {
        ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, "T_Txt", 0);
      }
      goto LABEL_46;
    }
    v16 = *(__int64**)(a1 + 232);
    v17 = *(__int64**)(a1 + 240);
    if (v16 == v17) {
      v20 = 0;
    }
    else {
      v18 = 0;
      do {
        v19 = *v16++;
        v18 += (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 48LL))(v19) & 1;
      } while (v16 != v17);
      v20 = v18 > 1;
    }
    ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, "T_Txt", v20);
    v15 = "MID_Sys_Result_Msg_FullMem_Reliance_EXP_Up_Small";
    goto LABEL_43;
  }
  if (v14 == 6) {
    LayoutAccessor_1562cf0_alt1(a1 + 848, (unsigned int*)"TxtOff");
    goto LABEL_46;
  }
  if (v14 == 7) {
    LayoutAccessor_1562cf0_alt1(a1 + 848, (unsigned int*)"TxtOn");
    v15 = "MID_Sys_Result_Msg_FullMem_Watching_EXP_Up";
  LABEL_43:
    v33_.v39 = -1;
    v33_.v40 = -1;
    v33_.v41 = -1;
    v33_.v42 = -1;
    v21 = *msg_MessageManager_instance__ptr[0];
    v33_.v43 = -1;
    v33_.v44 = -1;
    v33_.v45 = -1;
    v33_.v46 = -1;
    v33_.v47 = -1;
    v33_.v48 = -1;
    v33_.v49 = -1;
    v33_.v50 = -1;
    v33_.v33 = GameData_212e348 + 2;
    v33_.v34 = 0xFFFF0001FFFF0000LL;
    v33_.v35 = 0xFFFF0004FFFF0002LL;
    v33_.v36 = 0xFFFF0006FFFF0005LL;
    v33_.v51 = 8;
    v33_.v37 = -65529;
    v33_.v38 = -65528;
    v22 = GameRoutine_a4dbe0_alt1(v21, v15, 0);
    if (v22 != nullptr) {
      v23 = (__int64)v22;
      v24 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 848), "T_Txt");
      if (v24 != 0) {
        GameRoutine_156c5d0_alt1(v24, v23, 0);
      }
    }
  }
LABEL_46:
  v25 = *(_QWORD*)(a1 + 336);
  *(_DWORD*)(a1 + 1056) = 1;
  if (v25 != 0) {
    v26 = (_DWORD*)__dynamic_cast(v25, GameData_212e008[0], GameData_2131d18[0],
                                  0);
    if (v26 != nullptr && v26[21] == 0) {
      v26[21] = 1;
      (*(void (**)(_DWORD*))(*(_QWORD*)v26 + 560LL))(v26);
    }
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1112LL))(a1);
  if ((result & 1) != 0) {
    v28 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v29 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v29 & 0x10) == 0) {
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v29 & 0xFFFFFFEE;
        result = (__int64)game_8224a0_alt1(0x19u);
        if (game_GameModeData_instance_ != 0 &&
            (result = game_GameVariableTable_Find_alt1(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)result)) != 0) {
          v30 = *(_DWORD*)(v28 + 156);
          if (*(_DWORD*)(result + 32) == 1) {
            if ((v30 & 4) != 0) {
              return result;
            }
            v31 = v30 | 4;
          LABEL_61:
            v32 = *(float*)(v28 + 224);
            *(_DWORD*)(v28 + 156) = v31;
            if (v32 > 0x0.0p+0f) {
              *(_DWORD*)(v28 + 224) = 0;
            }
            return result;
          }
        }
        else {
          v30 = *(_DWORD*)(v28 + 156);
        }
        if ((v30 & 4) == 0) {
          return result;
        }
        v31 = v30 & 0xFFFFFFFB;
        goto LABEL_61;
      }
    }
  }
  return result;
}

__int64 ListResultMenuBase_1754380(__int64 result)
{
  int v1;
  bool v2;
  __int64 v3;
  __int64 v4;
  float v5;
  unsigned int v6;
  float v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  float v18;
  __int64 v19;
  float* v20;
  int v21;
  int v22;
  __int64 v23;

  v1 = *(_DWORD*)(result + 1056);
  if (v1 == 2) {
    v10 = GameData_22736d0;
    if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2) {
      v11 = result;
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) != 0 ||
          (result = v11, *(_DWORD*)(v10 + 624) != 1)) {
        GameRoutine_155cda0(v10 + 272, "Out", 0);
        if (*(_DWORD*)(v10 + 624) == 1) {
          v12 = 2;
        }
        else {
          GameRoutine_155d940(v10 + 272);
          GameRoutine_155e830(v10 + 168, 0);
          v12 = 1;
        }
        *(_DWORD*)(v10 + 624) = v12;
        result = v11;
      }
    }
    v16 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
        v17 |= 2u;
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v17;
      }
      if ((v17 & 0x10) == 0) {
        v18 = *(float*)(v16 + 224);
        *(_DWORD*)(v16 + 156) = v17 & 0xFFFFFFE2 | 1;
        if (v18 > 0.0) {
          *(_DWORD*)(v16 + 224) = 0;
        }
      }
    }
    return GameRoutine_16df7a0(result);
  }
  if (v1 != 1) {
    return result;
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) != 0 ||
      (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3
           ? (v2 = (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) == 0)
           : (v2 = false),
       !v2)) {
    if (*(_QWORD*)(result + 336) == 0) {
      return result;
    }
    v3 = result;
    result = __dynamic_cast(*(_QWORD*)(result + 336), GameData_212e008[0],
                            GameData_2131d18[0], 0);
    v4 = result;
    if (result == 0) {
      return result;
    }
    result = v3;
    v5 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v5 <= 0.0) {
      v5 = 1.0;
    }
    v6 = (int)v5;
    if ((int)v5 <= 1) {
      v6 = 1;
    }
    v7 = (float)v6;
    if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) != 0) {
      v8 = GameData_22736d0;
      v7 = v7 * 8.0;
      if (GameData_22736d0 == 0 || *(_DWORD*)(GameData_22736d0 + 624) == 0) {
        goto LABEL_65;
      }
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) == 0 ||
          *(_DWORD*)(v8 + 624) != 1) {
        GameRoutine_155e830(v8 + 168, 1);
        GameRoutine_155cda0(v8 + 272, "In", 0);
        if (*(_DWORD*)(v8 + 624) == 1) {
          v9 = 0;
        LABEL_64:
          result = v3;
          *(_DWORD*)(v8 + 624) = v9;
        LABEL_65:
          v22 = *(_DWORD*)(v4 + 84);
          if (v22 == 1) {
            v23 = *(_QWORD*)v4;
            *(float*)(v4 + 88) = v7 + *(float*)(v4 + 88);
            (*(void (**)(__int64))(v23 + 576))(v4);
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 568LL))(v4, 0);
            v22 = *(_DWORD*)(v4 + 84);
            result = v3;
          }
          if (v22 == 2) {
            return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result +
                                                      1104LL))(result, 1);
          }
          return result;
        }
        GameRoutine_155d940(v8 + 272);
        goto LABEL_63;
      }
    }
    else {
      v8 = GameData_22736d0;
      if (GameData_22736d0 == 0 || *(_DWORD*)(GameData_22736d0 + 624) == 2) {
        goto LABEL_65;
      }
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) != 0 ||
          *(_DWORD*)(v8 + 624) != 1) {
        GameRoutine_155cda0(v8 + 272, "Out", 0);
        if (*(_DWORD*)(v8 + 624) == 1) {
          v9 = 2;
          goto LABEL_64;
        }
        GameRoutine_155d940(v8 + 272);
        GameRoutine_155e830(v8 + 168, 0);
      LABEL_63:
        v9 = 1;
        goto LABEL_64;
      }
    }
    result = v3;
    goto LABEL_65;
  }
  v13 = GameData_22736d0;
  if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2) {
    v14 = result;
    if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) != 0 ||
        (result = v14, *(_DWORD*)(v13 + 624) != 1)) {
      GameRoutine_155cda0(v13 + 272, "Out", 0);
      if (*(_DWORD*)(v13 + 624) == 1) {
        v15 = 2;
      }
      else {
        GameRoutine_155d940(v13 + 272);
        GameRoutine_155e830(v13 + 168, 0);
        v15 = 1;
      }
      *(_DWORD*)(v13 + 624) = v15;
      result = v14;
    }
  }
  if (*(_QWORD*)(result + 336) != 0) {
    v19 = result;
    result = __dynamic_cast(*(_QWORD*)(result + 336), GameData_212e008[0],
                            GameData_2131d18[0], 0);
    if (result != 0) {
      v20 = (float*)result;
      (*(void (**)(__int64))(*(_QWORD*)result + 600LL))(result);
      v20[22] = 8.0;
      result = (*(__int64 (**)(float*, _QWORD))(*(_QWORD*)v20 + 568LL))(v20, 0);
      v21 = *((_DWORD*)v20 + 21);
      if (v21 != 2 && v20[22] >= 8.0) {
        result = (*(__int64 (**)(float*))(*(_QWORD*)v20 + 584LL))(v20);
        if ((result & 1) != 0) {
          *((_DWORD*)v20 + 21) = 2;
          result = (*(__int64 (**)(float*))(*(_QWORD*)v20 + 592LL))(v20);
        }
        v21 = *((_DWORD*)v20 + 21);
      }
      if (v21 == 2) {
        result = v19;
        return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 1104LL))(
            result, 1);
      }
    }
  }
  return result;
}

_DWORD* ListResultMenuBase_1754800(__int64 a1)
{
  _DWORD* result;

  result = *(_DWORD**)(a1 + 336);
  if (result != nullptr) {
    result = (_DWORD*)__dynamic_cast(result, GameData_212e008[0],
                                     GameData_2131d18[0], 0);
    if (result != nullptr) {
      (*(void (**)(_DWORD*))(*(_QWORD*)result + 440LL))(result);
      result = (_DWORD*)(*(__int64 (**)(__int64, _QWORD, _QWORD))(
          *(_QWORD*)(a1 + 176) + 48LL))(a1 + 176, 0, 0);
      if ((_DWORD)result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)(a1 + 176) + 144LL))(a1 + 176);
        result = *(_DWORD**)(a1 + 336);
        if (result != nullptr) {
          result = (_DWORD*)__dynamic_cast(result, GameData_212e008[0],
                                           GameData_2131d18[0], 0);
        }
        if (result[21] == 0) {
          result[21] = 1;
          return (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 560LL))(
              result);
        }
      }
      else {
        *(_DWORD*)(a1 + 1056) = 2;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
