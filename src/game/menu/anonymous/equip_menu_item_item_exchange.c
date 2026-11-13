#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157b5c0(__int64 result, unsigned __int16*);
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
__int64 EquipMenuItem_ItemExchange_Unknown58(__int64 a1);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_20577e0;
extern __int64* GameData_212e008[9];
extern __int64* game_g_empty_item_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 EquipMenuItem_ItemExchange_15c9400(_QWORD* a1, _QWORD* a2, __int64 a3);
bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure_Invoke(
    __int64 a1, __int64 a2);
bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure0_Invoke(
    __int64 a1, __int64 a2);
bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure1_Invoke(
    __int64 a1, __int64 a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 EquipMenuItem_ItemExchange_15c9400_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "EquipMenuItem_ItemExchange_15c9400");
__int64 ExchangeMenu_15c7680(void);
__int64 GameRoutine_15de9d0(_QWORD, _QWORD);
__int64 GameRoutine_15dea90(_QWORD, _QWORD, _QWORD);
__int64 MultiMenuSequence_17871c0(_QWORD, _QWORD, _QWORD);
__int64 Util_15792c0(__int64*, unsigned __int16*, char, char, _QWORD*, __int64,
                     __int64, char);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_15de140(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 (*GameData_2057838[])();
extern __int64 (*GameData_20578c8[])();
extern __int64 (*GameData_2057948[])();
extern __int64* GameData_212e030[4];
extern __int64* GameData_2131a08[6];
extern __int64 game_g_game_setting_ptr;
extern __int64 ui_LayoutAccessor_empty_;
__int64 game_menu_anonymous_EquipMenuItem_ItemExchange_ACall(__int64 a1);
__n128 EquipMenuItem_ItemExchange_Unknown55_alt1(__int64 a1) __asm__(
    "EquipMenuItem_ItemExchange_Unknown55");
extern __int64* GameData_21319f0[9];
__int64 EquipMenuItem_ItemExchange_Unknown5(__int64 a1);
__int64 ExchangeMenu_15c7680_alt1(__int64) __asm__("ExchangeMenu_15c7680");
__int64 GameRoutine_15de9d0_alt1(__int64, char) __asm__("GameRoutine_15de9d0");
__int64 GameRoutine_15dea90_alt1(__int64, __int64,
                                 char) __asm__("GameRoutine_15dea90");
__int64
MultiMenuSequence_17871c0_alt1(__int64 result, unsigned int,
                               int) __asm__("MultiMenuSequence_17871c0");
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(
    __int64 result, char, unsigned __int8,
    unsigned __int8) __asm__("_ZN4game4menu9BasicMenu13Unknown16dea40Ebbb");
__int64 game_15de140_alt1(__int64, __int64, __int64, __int64,
                          char) __asm__("game_15de140");
__int64 game_IsVibrationEnabled_alt1(_BYTE*) __asm__("game_IsVibrationEnabled");
__int64 game_menu_BasicMenu_Unknown16dd9a0_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown16dd9a0");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 Util_15792c0_alt1(__int64*, unsigned __int16*, char, char, _QWORD*,
                          const char*, const char*,
                          char) __asm__("Util_15792c0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__int64 EquipMenuItem_ItemExchange_Unknown55(__int64 a1);
__int64 EquipMenuItem_ItemExchange_Unknown7(__int64 result, char a2);

__int64 EquipMenuItem_ItemExchange_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  int v9;
  __int64 v10;
  _WORD* v11;
  int v12;
  bool v13;
  unsigned int v14;

  v1 = *(int*)(a1 + 40);
  if ((_DWORD)v1 == -1) {
    v2 = game_g_empty_item_ptr;
  }
  else {
    v2 = (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v1 + 828);
  }
  if (*(_WORD*)v2 != 0) {
    return 1;
  }
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 96) + 356LL) & 1) != 0) {
    v5 = ExchangeMenu_15c7680();
    if (v5 != 0) {
      v6 = v5;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 480LL))(v5) & 1) != 0) {
        return 0;
      }
      v7 = GameData_212e030[0];
      v8 = GameData_21319f0[0];
      v9 = *(_DWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                     GameData_21319f0[0], 0) +
                      1064);
      if (v9 ==
          *(_DWORD*)(__dynamic_cast(*(_QWORD*)(v6 + 8), v7, v8, 0) + 1064)) {
        return 0;
      }
    }
  }
  v10 = 304;
  if (*(_BYTE*)(a1 + 104) != 0) {
    v10 = 312;
  }
  if (((v11 = *(_WORD**)(__dynamic_cast(*(_QWORD*)(*(_QWORD*)(a1 + 96) + v10),
                                        GameData_21319f0[0],
                                        GameData_2131a08[0], 0) +
                         1072)) == nullptr ||
       v11[414] != 0 || v11[418] != 0 || v11[422] != 0 || v11[426] != 0 ||
       v11[430] != 0 || v11[434] != 0) &&
      ((v12 = *(_DWORD*)(a1 + 40), v13 = __OFSUB__(v12, 1),
        (((v14 = v12 - 1) & 0x80000000) != 0) ^ v13) ||
       *(_WORD*)(*(_QWORD*)(a1 + 88) + 8LL * v14 + 828) != 0)) {
    return 1;
  }
  else {
    return 0;
  }
}

__int64 EquipMenuItem_ItemExchange_Unknown7(__int64 result, char a2)
{
  __int64 (**v2)(void);

  if ((*(_BYTE*)(*(_QWORD*)(result + 96) + 356LL) & 1) == 0) {
    *(_BYTE*)(result + 79) = a2 & 1;
    if ((a2 & 1) != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 520LL))(result);
    }
    else {
      v2 = (__int64 (**)(void))(*(_QWORD*)result + 504LL);
      if (*(_QWORD*)(*(_QWORD*)(result + 8) + 336LL) == result) {
        v2 = (__int64 (**)(void))(*(_QWORD*)result + 512LL);
      }
      return ((__typeof__((*v2)()) (*)())(*v2))(result);
    }
  }
  return result;
}

__int64 game_menu_anonymous_EquipMenuItem_ItemExchange_ACall(__int64 a1)
{
  _QWORD handle[2];
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 result;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  char* v32;
  unsigned __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64* v44;
  char v45;
  __int64 v46;
  __int64 v47;
  _BOOL4 v48;
  _BOOL4 v49;
  __int64 v50;
  unsigned int v51;
  char v52;
  __int64 v53;
  _BOOL4 v54;
  _BOOL4 v55;
  unsigned int v56;
  unsigned int v57;
  bool v58;
  unsigned int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  int v66;
  __int64* v67;
  __int64* v68;
  unsigned __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  _WORD* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  int v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  unsigned int v93;
  int v94;
  _QWORD v95[2];
  struct {
    _QWORD v96[4];
    _QWORD* v97;
  } v96_;

  v1 = *(int*)(a1 + 40);
  v2 = game_g_empty_item_ptr;
  if ((_DWORD)v1 == -1) {
    v3 = game_g_empty_item_ptr;
  }
  else {
    v3 = (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v1 + 828);
  }
  if ((*((_BYTE*)v3 + 3) & 0x10) == 0) {
    result = 1;
    v6 = GameData_212c878[0];
    v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                    8LL * *(unsigned __int16*)v3);
    if ((*(_BYTE*)(v7 + 336) & 4) != 0 ||
        ((1LL << *(_BYTE*)(v7 + 72)) & 0xE01F) == 0 ||
        (*(_BYTE*)(a1 + 79) & 1) != 0) {
      return result;
    }
    v8 = *(_QWORD*)(a1 + 8);
    if (v8 != 0) {
      v9 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                          GameData_2131a08[0], 0);
    }
    else {
      v9 = 0;
    }
    v10 = *(_QWORD*)(a1 + 96);
    if ((*(_BYTE*)(v10 + 356) & 1) == 0) {
      v11 = __dynamic_cast(v8, GameData_212e030[0], GameData_2131a08[0], 0);
      v12 = v96_.v96;
      v13 = *(_QWORD*)(*(_QWORD*)(v11 + 1056) +
                       8LL * (*(_DWORD*)(v11 + 1064) == 0) + 304);
      snd_Fade_Fade_10c830_alt1((__int64)v96_.v96, 0x0.0p+0f);
      snd_play_ff2d0_alt1((void*)(handle), (__int64)"SE_SYS_Decide_L_Next",
                          (__int64)"SE_SYS_Decide_L_Next", (__int64)v96_.v96, 0,
                          0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade_alt1(v96_.v96);
      (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 64LL))(a1, 1);
      *(_DWORD*)(*(_QWORD*)(a1 + 96) + 356LL) |= 1u;
      MultiMenuSequence_17871c0_alt1(*(_QWORD*)(a1 + 96),
                                     *(unsigned __int8*)(a1 + 104), 0);
      v14 = *(int*)(a1 + 40);
      if ((_DWORD)v14 == -1) {
        v15 = v2;
      }
      else {
        v15 = (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v14 + 828);
      }
      if (*(_WORD*)v15 != 0) {
        v96_.v97 = v96_.v96;
        v96_.v96[0] = GameData_2057948;
        v16 = *(_QWORD**)(v13 + 232);
        v17 = *(_QWORD**)(v13 + 240);
        if (v16 == v17) {
          v20 = 0;
        }
        else {
          v18 = GameData_212e008[0];
          while (1) {
            if (*v16 != 0) {
              v19 = __dynamic_cast(*v16, v18, &GameData_20577e0, 0);
              if (v19 != 0) {
                v20 = v19;
                v95[0] = v19;
                if (v96_.v97 == nullptr) {
                  goto LABEL_177;
                }
                if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v96_.v97 + 48LL))(
                         v96_.v97, v95) &
                     1) != 0) {
                  break;
                }
              }
            }
            if (++v16 == v17) {
              v20 = 0;
              break;
            }
          }
          v12 = v96_.v97;
          if (v96_.v97 != v96_.v96) {
            if (v96_.v97 != nullptr) {
              v29 = 40;
            LABEL_42:
              (*(void (**)(_QWORD*))(*v12 + v29))(v12);
            }
            if (v20 == 0) {
              LODWORD(v30) = *(_DWORD*)(v9 + 640);
              goto LABEL_45;
            }
            goto LABEL_125;
          }
        }
        v29 = 32;
        goto LABEL_42;
      }
      v96_.v97 = v96_.v96;
      v96_.v96[0] = GameData_20578c8;
      v25 = *(_QWORD**)(v13 + 232);
      v26 = *(_QWORD**)(v13 + 240);
      if (v25 == v26) {
        v20 = 0;
      }
      else {
        v27 = GameData_212e008[0];
        while (1) {
          if (*v25 != 0) {
            v28 = __dynamic_cast(*v25, v27, &GameData_20577e0, 0);
            if (v28 != 0) {
              v20 = v28;
              v95[0] = v28;
              if (v96_.v97 == nullptr) {
              LABEL_177:
                GameRoutine_60a310_alt1();
              }
              if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v96_.v97 + 48LL))(
                       v96_.v97, v95) &
                   1) != 0) {
                break;
              }
            }
          }
          if (++v25 == v26) {
            v20 = 0;
            break;
          }
        }
        v12 = v96_.v97;
        if (v96_.v97 != v96_.v96) {
          if (v96_.v97 != nullptr) {
            v75 = 40;
          LABEL_116:
            (*(void (**)(_QWORD*))(*v12 + v75))(v12);
          }
          if (v20 == 0) {
            v78 = *(_QWORD*)(v13 + 232);
            if (*(_QWORD*)(v13 + 240) == v78) {
            LABEL_124:
              v20 = 0;
              goto LABEL_125;
            }
            v30 = 0;
            while (1) {
              v79 = *(_QWORD*)(v78 + 8 * v30);
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v79 + 48LL))(v79) & 1) !=
                      0 &&
                  ((*(__int64 (**)(__int64))(*(_QWORD*)v79 + 40LL))(v79) & 1) !=
                      0) {
                break;
              }
              v78 = *(_QWORD*)(v13 + 232);
              if (++v30 >=
                  (unsigned __int64)((*(_QWORD*)(v13 + 240) - v78) >> 3)) {
                goto LABEL_124;
              }
            }
          LABEL_45:
            if ((v30 & 0x80000000) == 0) {
              v31 = *(char**)(v13 + 232);
              v32 = *(char**)(v13 + 240);
              if (v31 != v32) {
                v33 = v32 - v31 - 8;
                v34 = (v33 >> 3) + 1;
                if (v33 >= 0x18) {
                  v84 = 0;
                  while ((_DWORD)v30 != (_DWORD)v84) {
                    if ((_DWORD)v30 == (_DWORD)v84 + 1) {
                      v31 += 8;
                      goto LABEL_151;
                    }
                    if ((_DWORD)v30 == (_DWORD)v84 + 2) {
                      v20 = *((_QWORD*)v31 + 2);
                      goto LABEL_125;
                    }
                    if ((_DWORD)v30 == (_DWORD)v84 + 3) {
                      v20 = *((_QWORD*)v31 + 3);
                      goto LABEL_125;
                    }
                    v31 += 32;
                    v84 += 4;
                    v35 = v84;
                    if ((v34 & 0x3FFFFFFFFFFFFFFCLL) == v84) {
                      goto LABEL_49;
                    }
                  }
                  goto LABEL_151;
                }
                v35 = 0;
              LABEL_49:
                v36 = v34 & 3;
                if (v36 != 0) {
                  v37 = v30 - v35;
                  v20 = 0;
                  while (v37 != 0) {
                    v31 += 8;
                    --v37;
                    if (--v36 == 0) {
                      goto LABEL_125;
                    }
                  }
                LABEL_151:
                  v20 = *(_QWORD*)v31;
                  goto LABEL_125;
                }
              }
            }
            goto LABEL_124;
          }
        LABEL_125:
          v80 = *(_QWORD*)(v13 + 336);
          if (v80 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v80 + 168LL))(v80);
          }
          *(_QWORD*)(v13 + 336) = v20;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(v13, 1, 0, 0);
          v81 = *(_QWORD*)(v13 + 336);
          if (v81 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v81 + 160LL))(v81);
            game_IsVibrationEnabled_alt1(
                (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
            v82 = *(_QWORD*)(v13 + 336);
            v83 = 4;
            if (v82 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v82 + 120LL))(v82) &
                   1) != 0) {
                v83 = 4;
              }
              else {
                v83 = 0;
              }
            }
          }
          else {
            v83 = 4;
          }
          *(_DWORD*)(v13 + 356) = *(_DWORD*)(v13 + 356) & 0xFFFFFFFB | v83;
          game_menu_BasicMenu_Unknown16dd9a0_alt1(*(_QWORD*)(a1 + 8));
          return 0;
        }
      }
      v75 = 32;
      goto LABEL_116;
    }
    v21 = ExchangeMenu_15c7680_alt1(v10);
    if (v21 != 0) {
      v22 = v21;
      v23 = *(_QWORD*)(v21 + 8);
      if (v23 != 0) {
        v24 = __dynamic_cast(v23, GameData_212e030[0], GameData_2131a08[0], 0);
      }
      else {
        v24 = 0;
      }
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 328LL))(a1, 0);
      v38 = *v6;
      *(_DWORD*)(*(_QWORD*)(a1 + 96) + 356LL) &= ~1u;
      v39 = *(int*)(v22 + 40);
      v40 = *(_QWORD*)(v22 + 88) + 8 * v39;
      v58 = (_DWORD)v39 == -1;
      v41 = *(int*)(a1 + 40);
      v42 = (__int64*)(v40 + 828);
      if (v58) {
        v42 = v2;
      }
      v43 = *(unsigned __int16*)v42;
      v44 = (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v41 + 828);
      if ((_DWORD)v41 == -1) {
        v44 = v2;
      }
      v45 = *((_BYTE*)v44 + 3);
      v46 = *(unsigned __int16*)v44;
      v47 = *(_QWORD*)(v38 + 64);
      if ((v45 & 1) != 0) {
        v50 = *(_QWORD*)(v47 + 8 * v46);
        v51 = *(unsigned __int8*)(v50 + 72);
        v48 = v51 < 8;
        v49 = v51 == 13;
      }
      else {
        v48 = false;
        v49 = false;
        v50 = *(_QWORD*)(v47 + 8 * v46);
      }
      v52 = *((_BYTE*)v42 + 3);
      v53 = *(_QWORD*)(v47 + 8 * v43);
      v94 = v43;
      if ((v52 & 1) != 0) {
        v56 = *(unsigned __int8*)(v53 + 72);
        v54 = v56 < 8;
        v55 = v56 == 13;
      }
      else {
        v54 = false;
        v55 = false;
      }
      v57 = *(unsigned __int8*)(v53 + 73);
      v58 = (v45 & 1) == 0;
      v59 = *(unsigned __int8*)(v50 + 73);
      if ((v45 & 1) != 0) {
        v60 = v9;
      }
      else {
        v60 = v24;
      }
      if (v58) {
        v61 = v9;
      }
      else {
        v61 = v24;
      }
      if (v58) {
        v62 = a1;
      }
      else {
        v62 = v22;
      }
      v93 = v57;
      if (v58) {
        v63 = v22;
      }
      else {
        v63 = a1;
      }
      game_15de140_alt1(*(_QWORD*)(v60 + 1072), *(unsigned int*)(v63 + 40),
                        *(_QWORD*)(v61 + 1072), *(unsigned int*)(v62 + 40), 0);
      if (v48) {
        GameRoutine_15de9d0_alt1(*(_QWORD*)(a1 + 88), 0);
      }
      else if (v49) {
        GameRoutine_15dea90_alt1(*(_QWORD*)(a1 + 88), v59, 0);
      }
      if (v54) {
        GameRoutine_15de9d0_alt1(*(_QWORD*)(v24 + 1072), 0);
      }
      else if (v55) {
        GameRoutine_15dea90_alt1(*(_QWORD*)(v24 + 1072), v93, 0);
      }
      MultiMenuSequence_17871c0_alt1(*(_QWORD*)(a1 + 96),
                                     *(_DWORD*)(v24 + 1064) == 1, 0);
      if (v9 != v24) {
        if (v94 != 0) {
          v64 = *(int*)(v22 + 40);
          if ((_DWORD)v64 == -1) {
            v65 = v2;
          }
          else {
            v65 = (__int64*)(*(_QWORD*)(v22 + 88) + 8 * v64 + 828);
          }
          if (*(_WORD*)v65 == 0) {
            v66 = *(_DWORD*)(v24 + 640);
            if (v66 >= 1) {
              v67 = *(__int64**)(v24 + 232);
              v68 = *(__int64**)(v24 + 240);
              if (v67 != v68) {
                v69 = (char*)v68 - (char*)v67 - 8;
                v70 = (v69 >> 3) + 1;
                if (v69 >= 0x18) {
                  v85 = 0;
                  while (v66 - 1 != (_DWORD)v85) {
                    if (v66 == (_DWORD)v85 + 2) {
                      ++v67;
                      goto LABEL_157;
                    }
                    if (v66 == (_DWORD)v85 + 3) {
                      v67 += 2;
                      goto LABEL_157;
                    }
                    if (v66 == (_DWORD)v85 + 4) {
                      v67 += 3;
                      goto LABEL_157;
                    }
                    v67 += 4;
                    v85 += 4;
                    v71 = v85;
                    if ((v70 & 0x3FFFFFFFFFFFFFFCLL) == v85) {
                      goto LABEL_95;
                    }
                  }
                  goto LABEL_157;
                }
                v71 = 0;
              LABEL_95:
                v72 = v70 & 3;
                if (v72 != 0) {
                  v73 = ~v71 + v66;
                  while (v73 != 0) {
                    ++v67;
                    --v73;
                    if (--v72 == 0) {
                      goto LABEL_99;
                    }
                  }
                LABEL_157:
                  v74 = *v67;
                LABEL_158:
                  if (v74 != 0) {
                    v22 = v74;
                  }
                  goto LABEL_160;
                }
              }
            }
          LABEL_99:
            v74 = 0;
            goto LABEL_158;
          }
        LABEL_160:
          v86 = *(_QWORD*)(v24 + 336);
          if (v86 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v86 + 168LL))(v86);
          }
          *(_QWORD*)(v24 + 336) = v22;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(v24, 1, 0, 0);
          v87 = *(_QWORD*)(v24 + 336);
          if (v87 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v87 + 160LL))(v87);
            game_IsVibrationEnabled_alt1(
                (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
            v88 = *(_QWORD*)(v24 + 336);
            v89 = 4;
            if (v88 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v88 + 120LL))(v88) &
                   1) != 0) {
                v89 = 4;
              }
              else {
                v89 = 0;
              }
            }
          }
          else {
            v89 = 4;
          }
          *(_DWORD*)(v24 + 356) = *(_DWORD*)(v24 + 356) & 0xFFFFFFFB | v89;
          goto LABEL_169;
        }
        v76 = *(_WORD**)(v9 + 1072);
        if (v76 != nullptr && v76[414] == 0 && v76[418] == 0 && v76[422] == 0 &&
            v76[426] == 0 && v76[430] == 0 && v76[434] == 0) {
          goto LABEL_160;
        }
        v96_.v96[0] = GameData_2057838;
        v96_.v97 = v96_.v96;
        v22 = EquipMenuItem_ItemExchange_15c9400(
            *(_QWORD**)(v24 + 232), *(_QWORD**)(v24 + 240), (__int64)v96_.v96);
        if (v96_.v97 == v96_.v96) {
          v77 = 32;
        }
        else {
          if (v96_.v97 == nullptr) {
            goto LABEL_160;
          }
          v77 = 40;
        }
        (*(void (**)(__int64))(*v96_.v97 + v77))((__int64)v96_.v97);
        goto LABEL_160;
      }
    LABEL_169:
      v90 = *(_QWORD**)(a1 + 96);
      v91 = v90[38];
      if (v91 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v91 + 1080LL))(v91);
      }
      v92 = v90[39];
      if (v92 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v92 + 1080LL))(v92);
      }
      result = v90[40];
      if (result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 1080LL))(result);
        return 0;
      }
      return result;
    }
  }
  return 1;
}

__int64 EquipMenuItem_ItemExchange_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int16* v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64* v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v23 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v23);
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v5 = *(int*)(a1 + 40);
  v6 = *(_QWORD**)(a1 + 88);
  v7 = game_g_empty_item_ptr;
  if ((_DWORD)v5 == -1) {
    v8 = (unsigned __int16*)game_g_empty_item_ptr;
  }
  else {
    v8 = (unsigned __int16*)&v6[v5 + 103] + 2;
  }
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  Util_15792c0_alt1(v4, v8, 0, 1, v6, "L_Icon", "T_Txt", v9 & 1);
  v10 = *(_QWORD*)(a1 + 56);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = std___1___shared_weak_count_lock_alt1(v10);
  if (v11 == 0) {
    goto LABEL_13;
  }
  v12 = v11;
  v13 = (atomic_ullong*)(v11 + 8);
  v14 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v14 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v24 = v14;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak_alt1(v12);
  v14 = v24;
  if (v24 == nullptr) {
  LABEL_13:
    v14 = &ui_LayoutAccessor_empty_;
  }
LABEL_14:
  LayoutAccessor_1560070_alt1((void*)(&v25_.v25), v14, "L_Icon");
  result = v25_.v26;
  if (v25_.v26 == 0) {
    return result;
  }
  v16 = std___1___shared_weak_count_lock_alt1(v25_.v26);
  v17 = v25_.v25;
  result = v25_.v26;
  if (v25_.v26 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v25_.v26);
  }
  if (v16 != 0 && v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                              memory_order_relaxed);
    v18 = *(int*)(a1 + 40);
    v19 = *(_QWORD*)(a1 + 88);
    v20 = std___1___shared_weak_count_lock_alt1(v16);
    if (v20 != 0) {
      v21 = v20;
      v22 = v19 + 8 * v18 + 828;
      if ((_DWORD)v18 == -1) {
        v22 = (__int64)v7;
      }
      ui_LayoutAccessor_SetPaneVisible_alt1(v17, "IconLock",
                                            (*(_BYTE*)(v22 + 3) & 0x10) != 0);
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak_alt1(v21);
      }
    }
    result = std___1___shared_weak_count___release_weak_alt1(v16);
  }
  else if (v16 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    return std___1___shared_weak_count___release_weak_alt1(v16);
  }
  return result;
}

__int64 EquipMenuItem_ItemExchange_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  v1 = *(int*)(a1 + 40);
  v2 = *(_QWORD*)(a1 + 88);
  if ((_DWORD)v1 == -1) {
    v3 = &game_g_empty_item;
  }
  else {
    v3 = (__int64*)(v2 + 8 * v1 + 828);
  }
  if ((*((_BYTE*)v3 + 3) & 0x10) != 0) {
    return 0;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)v3);
  if ((*(_BYTE*)(v4 + 336) & 4) != 0 ||
      ((1LL << *(_BYTE*)(v4 + 72)) & 0xE01F) == 0) {
    return 0;
  }
  else {
    return GameRoutine_157b5c0(v2, (unsigned __int16*)v3);
  }
}

__int64 EquipMenuItem_ItemExchange_15c9400(_QWORD* a1, _QWORD* a2, __int64 a3)
{
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;

  if (a1 == a2) {
    return 0;
  }
  v5 = a1;
  v6 = GameData_212e008[0];
  while (1) {
    if (*v5 != 0) {
      v7 = __dynamic_cast(*v5, v6, &GameData_20577e0, 0);
      if (v7 != 0) {
        v8 = v7;
        v9 = *(_QWORD*)(a3 + 32);
        v11 = v8;
        if (v9 == 0) {
          GameRoutine_60a310_alt1();
        }
        if (((*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(v9,
                                                                       &v11) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v5 == a2) {
      return 0;
    }
  }
  return v8;
}

bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;

  v2 = *(int*)(*(_QWORD*)a2 + 40LL);
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)a2 + 88LL) + 8 * v2 + 828);
  if ((_DWORD)v2 == -1) {
    v3 = game_g_empty_item_ptr;
  }
  return *(unsigned __int16*)v3 == 0;
}

bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure0_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;

  v2 = *(int*)(*(_QWORD*)a2 + 40LL);
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)a2 + 88LL) + 8 * v2 + 828);
  if ((_DWORD)v2 == -1) {
    v3 = game_g_empty_item_ptr;
  }
  return *(unsigned __int16*)v3 != 0;
}

bool game_menu_anonymous_EquipMenuItem_ItemExchange_ACall_closure1_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;

  v2 = *(int*)(*(_QWORD*)a2 + 40LL);
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)a2 + 88LL) + 8 * v2 + 828);
  if ((_DWORD)v2 == -1) {
    v3 = game_g_empty_item_ptr;
  }
  return *(unsigned __int16*)v3 == 0;
}

#pragma GCC visibility pop
