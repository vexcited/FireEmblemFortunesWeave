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
  __n128 v2;
  __int64 v3;
  __int64* v4;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  const char* v16;
  __int64* v17;
  __int64* v18;
  unsigned int v19;
  __int64 v20;
  _BOOL8 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  __int64 result;
  __int64 v29;
  int v30;
  int v31;
  unsigned int v32;
  float v33;
  __int64* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  int v38;
  int v39;
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
  __int64 v52;

  LayoutAccessor_1560070((void*)(&v34), a1 + 848, "L_Title");
  if (v35 == 0) {
    goto LABEL_29;
  }
  v3 = std___1___shared_weak_count_lock(v35);
  v4 = v34;
  if (v35 != 0) {
    v2 = std___1___shared_weak_count___release_weak();
  }
  if (v3 == 0 || v4 == nullptr) {
    if (v3 == 0) {
      goto LABEL_29;
    }
    goto LABEL_27;
  }
  LANES128(v2).n128_u32[0] = 1.0;
  LayoutAccessor_1562680(v4, "Type_Common", *(long double*)&v2);
  v6 = *(_DWORD*)(a1 + 1060);
  if (v6 > 2) {
    if (v6 > 6 && v6 != 7) {
      goto LABEL_27;
    }
    goto LABEL_19;
  }
  if (v6 != 0) {
    if (v6 != 1) {
      if (v6 != 2) {
        goto LABEL_27;
      }
    LABEL_19:
      LANES128(v2).n128_u32[0] = 1.0;
      LayoutAccessor_1562680(v4, "Title_Ank", *(long double*)&v2);
      v40 = -1;
      v41 = -1;
      v42 = -1;
      v43 = -1;
      v7 = *msg_MessageManager_instance__ptr[0];
      v44 = -1;
      v45 = -1;
      v46 = -1;
      v47 = -1;
      v48 = -1;
      v49 = -1;
      v50 = -1;
      v51 = -1;
      v34 = GameData_212e348 + 2;
      v35 = 0xFFFF0001FFFF0000LL;
      v36 = 0xFFFF0004FFFF0002LL;
      v37 = 0xFFFF0006FFFF0005LL;
      v52 = 8;
      v38 = -65529;
      v39 = -65528;
      v8 = GameRoutine_a4dbe0(v7, "MID_Sys_Result_Headline_Result", 0, &v34);
      if (v8 != 0) {
        v9 = v8;
        v10 = "T_Title_Ank";
        goto LABEL_25;
      }
      goto LABEL_27;
    }
    LANES128(v2).n128_u32[0] = 1.0;
    LayoutAccessor_1562680(v4, "Title_System", *(long double*)&v2);
    v11 = "MID_Sys_Result_Headline_EXP_Get";
  }
  else {
    LANES128(v2).n128_u32[0] = 1.0;
    LayoutAccessor_1562680(v4, "Title_System", *(long double*)&v2);
    v11 = "MID_Sys_Result_Headline_EXP_Bonus";
  }
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v12 = *msg_MessageManager_instance__ptr[0];
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v47 = -1;
  v48 = -1;
  v49 = -1;
  v50 = -1;
  v51 = -1;
  v34 = GameData_212e348 + 2;
  v35 = 0xFFFF0001FFFF0000LL;
  v36 = 0xFFFF0004FFFF0002LL;
  v37 = 0xFFFF0006FFFF0005LL;
  v52 = 8;
  v38 = -65529;
  v39 = -65528;
  v13 = GameRoutine_a4dbe0(v12, v11, 0, &v34);
  if (v13 != 0) {
    v10 = "T_Title";
    v9 = v13;
  LABEL_25:
    v14 = ui_LayoutAccessor_FindTextBox(v4, v10);
    if (v14 != 0) {
      GameRoutine_156c5d0(v14, v9, 0);
    }
  }
LABEL_27:
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v3 + 16LL))(
        v3, *(long double*)&v2);
    v2 = std___1___shared_weak_count___release_weak();
  }
LABEL_29:
  v15 = *(_DWORD*)(a1 + 1060);
  if (v15 <= 5) {
    if (v15 != 3) {
      if (v15 == 4) {
        v2 = ui_LayoutAccessor_SetPaneVisible(a1 + 848, "T_Txt", 0);
      }
      goto LABEL_46;
    }
    v17 = *(__int64**)(a1 + 232);
    v18 = *(__int64**)(a1 + 240);
    if (v17 == v18) {
      v21 = false;
    }
    else {
      v19 = 0;
      do {
        v20 = *v17++;
        v19 += (*(__int64 (**)(__int64, long double))(*(_QWORD*)v20 + 48LL))(
                   v20, *(long double*)&v2) &
               1;
      } while (v17 != v18);
      v21 = v19 > 1;
    }
    ui_LayoutAccessor_SetPaneVisible(a1 + 848, "T_Txt", v21);
    v16 = "MID_Sys_Result_Msg_FullMem_Reliance_EXP_Up_Small";
    goto LABEL_43;
  }
  if (v15 == 6) {
    LayoutAccessor_1562cf0(a1 + 848, "TxtOff");
    goto LABEL_46;
  }
  if (v15 == 7) {
    LayoutAccessor_1562cf0(a1 + 848, "TxtOn");
    v16 = "MID_Sys_Result_Msg_FullMem_Watching_EXP_Up";
  LABEL_43:
    v40 = -1;
    v41 = -1;
    v42 = -1;
    v43 = -1;
    v22 = *msg_MessageManager_instance__ptr[0];
    v44 = -1;
    v45 = -1;
    v46 = -1;
    v47 = -1;
    v48 = -1;
    v49 = -1;
    v50 = -1;
    v51 = -1;
    v34 = GameData_212e348 + 2;
    v35 = 0xFFFF0001FFFF0000LL;
    v36 = 0xFFFF0004FFFF0002LL;
    v37 = 0xFFFF0006FFFF0005LL;
    v52 = 8;
    v38 = -65529;
    v39 = -65528;
    v23 = GameRoutine_a4dbe0(v22, v16, 0, &v34);
    if (v23 != 0) {
      v24 = v23;
      v25 = ui_LayoutAccessor_FindTextBox(a1 + 848, "T_Txt");
      if (v25 != 0) {
        GameRoutine_156c5d0(v25, v24, 0);
      }
    }
  }
LABEL_46:
  v26 = *(_QWORD*)(a1 + 336);
  *(_DWORD*)(a1 + 1056) = 1;
  if (v26 != 0) {
    v27 = (_DWORD*)__dynamic_cast(v26, GameData_212e008[0], GameData_2131d18[0],
                                  0);
    if (v27 != nullptr && v27[21] == 0) {
      v27[21] = 1;
      (*(void (**)(_DWORD*))(*(_QWORD*)v27 + 560LL))(v27);
    }
  }
  result = (*(__int64 (**)(__int64, long double))(*(_QWORD*)a1 + 1112LL))(
      a1, *(long double*)&v2);
  if ((result & 1) != 0) {
    v29 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v30 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v30 & 0x10) == 0) {
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v30 & 0xFFFFFFEE;
        result = game_8224a0(25);
        if (game_GameModeData_instance_ != 0 &&
            (result = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), result)) != 0) {
          v31 = *(_DWORD*)(v29 + 156);
          if (*(_DWORD*)(result + 32) == 1) {
            if ((v31 & 4) != 0) {
              return result;
            }
            v32 = v31 | 4;
          LABEL_61:
            v33 = *(float*)(v29 + 224);
            *(_DWORD*)(v29 + 156) = v32;
            if (v33 > 0.0) {
              *(_DWORD*)(v29 + 224) = 0;
            }
            return result;
          }
        }
        else {
          v31 = *(_DWORD*)(v29 + 156);
        }
        if ((v31 & 4) == 0) {
          return result;
        }
        v32 = v31 & 0xFFFFFFFB;
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
