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
__n128 EquipMenuItem_ItemExchange_Unknown55(__int64 a1);
extern __int64* GameData_21319f0[9];
__int64 EquipMenuItem_ItemExchange_Unknown5(__int64 a1);

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

__int64 game_menu_anonymous_EquipMenuItem_ItemExchange_ACall(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 result;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64* v45;
  char v46;
  __int64 v47;
  __int64 v48;
  _BOOL4 v49;
  _BOOL4 v50;
  __int64 v51;
  unsigned int v52;
  char v53;
  __int64 v54;
  _BOOL4 v55;
  _BOOL4 v56;
  unsigned int v57;
  unsigned int v58;
  bool v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  int v67;
  __int64* v68;
  __int64* v69;
  unsigned __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  _WORD* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  unsigned int v94;
  int v95;
  _QWORD v96[2];
  _QWORD v97[4];
  _QWORD* v98;

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
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 96) + 356LL) & 1) == 0) {
      v10 = __dynamic_cast(v8, GameData_212e030[0], GameData_2131a08[0], 0);
      v11 = v97;
      v12 = *(_QWORD*)(*(_QWORD*)(v10 + 1056) +
                       8LL * (*(_DWORD*)(v10 + 1064) == 0) + 304);
      snd_Fade_Fade_10c830(v97, 0.0f);
      snd_play_ff2d0((void*)(v96), "SE_SYS_Decide_L_Next",
                     "SE_SYS_Decide_L_Next", v97, 0, 65537, 0, 0.0f, 1.0f);
      snd_Fade_Destroy_Fade(v97);
      (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 64LL))(a1, 1);
      *(_DWORD*)(*(_QWORD*)(a1 + 96) + 356LL) |= 1u;
      MultiMenuSequence_17871c0(*(_QWORD*)(a1 + 96),
                                *(unsigned __int8*)(a1 + 104), 0);
      v13 = *(int*)(a1 + 40);
      if ((_DWORD)v13 == -1) {
        v14 = v2;
      }
      else {
        v14 = (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v13 + 828);
      }
      if (*(_WORD*)v14 != 0) {
        v98 = v97;
        v97[0] = GameData_2057948;
        v15 = *(_QWORD**)(v12 + 232);
        v16 = *(_QWORD**)(v12 + 240);
        if (v15 == v16) {
          v20 = 0;
        }
        else {
          v17 = GameData_212e008[0];
          while (1) {
            if (*v15 != 0) {
              v18 = __dynamic_cast(*v15, v17, &GameData_20577e0, 0);
              if (v18 != 0) {
                v20 = v18;
                v21 = v98;
                v96[0] = v20;
                if (v98 == nullptr) {
                  goto LABEL_177;
                }
                if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v98 + 48LL))(v98,
                                                                      v96) &
                     1) != 0) {
                  break;
                }
              }
            }
            if (++v15 == v16) {
              v20 = 0;
              break;
            }
          }
          v11 = v98;
          if (v98 != v97) {
            if (v98 != nullptr) {
              v30 = 40;
            LABEL_42:
              (*(void (**)(_QWORD*))(*v11 + v30))(v11);
            }
            if (v20 == 0) {
              LODWORD(v31) = *(_DWORD*)(v9 + 640);
              goto LABEL_45;
            }
            goto LABEL_125;
          }
        }
        v30 = 32;
        goto LABEL_42;
      }
      v98 = v97;
      v97[0] = GameData_20578c8;
      v26 = *(_QWORD**)(v12 + 232);
      v27 = *(_QWORD**)(v12 + 240);
      if (v26 == v27) {
        v20 = 0;
      }
      else {
        v28 = GameData_212e008[0];
        while (1) {
          if (*v26 != 0) {
            v29 = __dynamic_cast(*v26, v28, &GameData_20577e0, 0);
            if (v29 != 0) {
              v20 = v29;
              v21 = v98;
              v96[0] = v20;
              if (v98 == nullptr) {
              LABEL_177:
                GameRoutine_60a310(v21, v19);
              }
              if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v98 + 48LL))(v98, v96) &
                   1) != 0) {
                break;
              }
            }
          }
          if (++v26 == v27) {
            v20 = 0;
            break;
          }
        }
        v11 = v98;
        if (v98 != v97) {
          if (v98 != nullptr) {
            v76 = 40;
          LABEL_116:
            (*(void (**)(_QWORD*))(*v11 + v76))(v11);
          }
          if (v20 == 0) {
            v79 = *(_QWORD*)(v12 + 232);
            if (*(_QWORD*)(v12 + 240) == v79) {
            LABEL_124:
              v20 = 0;
              goto LABEL_125;
            }
            v31 = 0;
            while (1) {
              v80 = *(_QWORD*)(v79 + 8 * v31);
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v80 + 48LL))(v80) & 1) !=
                      0 &&
                  ((*(__int64 (**)(__int64))(*(_QWORD*)v80 + 40LL))(v80) & 1) !=
                      0) {
                break;
              }
              v79 = *(_QWORD*)(v12 + 232);
              if (++v31 >=
                  (unsigned __int64)((*(_QWORD*)(v12 + 240) - v79) >> 3)) {
                goto LABEL_124;
              }
            }
          LABEL_45:
            if ((v31 & 0x80000000) == 0) {
              v32 = *(char**)(v12 + 232);
              v33 = *(char**)(v12 + 240);
              if (v32 != v33) {
                v34 = v33 - v32 - 8;
                v35 = (v34 >> 3) + 1;
                if (v34 >= 0x18) {
                  v85 = 0;
                  while ((_DWORD)v31 != (_DWORD)v85) {
                    if ((_DWORD)v31 == (_DWORD)v85 + 1) {
                      v32 += 8;
                      goto LABEL_151;
                    }
                    if ((_DWORD)v31 == (_DWORD)v85 + 2) {
                      v20 = *((_QWORD*)v32 + 2);
                      goto LABEL_125;
                    }
                    if ((_DWORD)v31 == (_DWORD)v85 + 3) {
                      v20 = *((_QWORD*)v32 + 3);
                      goto LABEL_125;
                    }
                    v32 += 32;
                    v85 += 4;
                    v36 = v85;
                    if ((v35 & 0x3FFFFFFFFFFFFFFCLL) == v85) {
                      goto LABEL_49;
                    }
                  }
                  goto LABEL_151;
                }
                v36 = 0;
              LABEL_49:
                v37 = v35 & 3;
                if (v37 != 0) {
                  v38 = v31 - v36;
                  v20 = 0;
                  while (v38 != 0) {
                    v32 += 8;
                    --v38;
                    if (--v37 == 0) {
                      goto LABEL_125;
                    }
                  }
                LABEL_151:
                  v20 = *(_QWORD*)v32;
                  goto LABEL_125;
                }
              }
            }
            goto LABEL_124;
          }
        LABEL_125:
          v81 = *(_QWORD*)(v12 + 336);
          if (v81 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v81 + 168LL))(v81);
          }
          *(_QWORD*)(v12 + 336) = v20;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v12, 1, 0, 0);
          v82 = *(_QWORD*)(v12 + 336);
          if (v82 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v82 + 160LL))(v82);
            game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
            v83 = *(_QWORD*)(v12 + 336);
            v84 = 4;
            if (v83 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v83 + 120LL))(v83) &
                   1) != 0) {
                v84 = 4;
              }
              else {
                v84 = 0;
              }
            }
          }
          else {
            v84 = 4;
          }
          *(_DWORD*)(v12 + 356) = *(_DWORD*)(v12 + 356) & 0xFFFFFFFB | v84;
          game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(a1 + 8));
          return 0;
        }
      }
      v76 = 32;
      goto LABEL_116;
    }
    v22 = ExchangeMenu_15c7680();
    if (v22 != 0) {
      v23 = v22;
      v24 = *(_QWORD*)(v22 + 8);
      if (v24 != 0) {
        v25 = __dynamic_cast(v24, GameData_212e030[0], GameData_2131a08[0], 0);
      }
      else {
        v25 = 0;
      }
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 328LL))(a1, 0);
      v39 = *v6;
      *(_DWORD*)(*(_QWORD*)(a1 + 96) + 356LL) &= ~1u;
      v40 = *(int*)(v23 + 40);
      v41 = *(_QWORD*)(v23 + 88) + 8 * v40;
      v59 = (_DWORD)v40 == -1;
      v42 = *(int*)(a1 + 40);
      v43 = (__int64*)(v41 + 828);
      if (v59) {
        v43 = v2;
      }
      v44 = *(unsigned __int16*)v43;
      v45 = (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v42 + 828);
      if ((_DWORD)v42 == -1) {
        v45 = v2;
      }
      v46 = *((_BYTE*)v45 + 3);
      v47 = *(unsigned __int16*)v45;
      v48 = *(_QWORD*)(v39 + 64);
      if ((v46 & 1) != 0) {
        v51 = *(_QWORD*)(v48 + 8 * v47);
        v52 = *(unsigned __int8*)(v51 + 72);
        v49 = v52 < 8;
        v50 = v52 == 13;
      }
      else {
        v49 = false;
        v50 = false;
        v51 = *(_QWORD*)(v48 + 8 * v47);
      }
      v53 = *((_BYTE*)v43 + 3);
      v54 = *(_QWORD*)(v48 + 8 * v44);
      v95 = v44;
      if ((v53 & 1) != 0) {
        v57 = *(unsigned __int8*)(v54 + 72);
        v55 = v57 < 8;
        v56 = v57 == 13;
      }
      else {
        v55 = false;
        v56 = false;
      }
      v58 = *(unsigned __int8*)(v54 + 73);
      v59 = (v46 & 1) == 0;
      v60 = *(unsigned __int8*)(v51 + 73);
      if ((v46 & 1) != 0) {
        v61 = v9;
      }
      else {
        v61 = v25;
      }
      if (v59) {
        v62 = v9;
      }
      else {
        v62 = v25;
      }
      if (v59) {
        v63 = a1;
      }
      else {
        v63 = v23;
      }
      v94 = v58;
      if (v59) {
        v64 = v23;
      }
      else {
        v64 = a1;
      }
      game_15de140(*(_QWORD*)(v61 + 1072), *(unsigned int*)(v64 + 40),
                   *(_QWORD*)(v62 + 1072), *(unsigned int*)(v63 + 40), 0);
      if (v49) {
        GameRoutine_15de9d0(*(_QWORD*)(a1 + 88), 0);
      }
      else if (v50) {
        GameRoutine_15dea90(*(_QWORD*)(a1 + 88), v60, 0);
      }
      if (v55) {
        GameRoutine_15de9d0(*(_QWORD*)(v25 + 1072), 0);
      }
      else if (v56) {
        GameRoutine_15dea90(*(_QWORD*)(v25 + 1072), v94, 0);
      }
      MultiMenuSequence_17871c0(*(_QWORD*)(a1 + 96),
                                *(_DWORD*)(v25 + 1064) == 1, 0);
      if (v9 != v25) {
        if (v95 != 0) {
          v65 = *(int*)(v23 + 40);
          if ((_DWORD)v65 == -1) {
            v66 = v2;
          }
          else {
            v66 = (__int64*)(*(_QWORD*)(v23 + 88) + 8 * v65 + 828);
          }
          if (*(_WORD*)v66 == 0) {
            v67 = *(_DWORD*)(v25 + 640);
            if (v67 >= 1) {
              v68 = *(__int64**)(v25 + 232);
              v69 = *(__int64**)(v25 + 240);
              if (v68 != v69) {
                v70 = (char*)v69 - (char*)v68 - 8;
                v71 = (v70 >> 3) + 1;
                if (v70 >= 0x18) {
                  v86 = 0;
                  while (v67 - 1 != (_DWORD)v86) {
                    if (v67 == (_DWORD)v86 + 2) {
                      ++v68;
                      goto LABEL_157;
                    }
                    if (v67 == (_DWORD)v86 + 3) {
                      v68 += 2;
                      goto LABEL_157;
                    }
                    if (v67 == (_DWORD)v86 + 4) {
                      v68 += 3;
                      goto LABEL_157;
                    }
                    v68 += 4;
                    v86 += 4;
                    v72 = v86;
                    if ((v71 & 0x3FFFFFFFFFFFFFFCLL) == v86) {
                      goto LABEL_95;
                    }
                  }
                  goto LABEL_157;
                }
                v72 = 0;
              LABEL_95:
                v73 = v71 & 3;
                if (v73 != 0) {
                  v74 = ~v72 + v67;
                  while (v74 != 0) {
                    ++v68;
                    --v74;
                    if (--v73 == 0) {
                      goto LABEL_99;
                    }
                  }
                LABEL_157:
                  v75 = *v68;
                LABEL_158:
                  if (v75 != 0) {
                    v23 = v75;
                  }
                  goto LABEL_160;
                }
              }
            }
          LABEL_99:
            v75 = 0;
            goto LABEL_158;
          }
        LABEL_160:
          v87 = *(_QWORD*)(v25 + 336);
          if (v87 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v87 + 168LL))(v87);
          }
          *(_QWORD*)(v25 + 336) = v23;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v25, 1, 0, 0);
          v88 = *(_QWORD*)(v25 + 336);
          if (v88 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v88 + 160LL))(v88);
            game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
            v89 = *(_QWORD*)(v25 + 336);
            v90 = 4;
            if (v89 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v89 + 120LL))(v89) &
                   1) != 0) {
                v90 = 4;
              }
              else {
                v90 = 0;
              }
            }
          }
          else {
            v90 = 4;
          }
          *(_DWORD*)(v25 + 356) = *(_DWORD*)(v25 + 356) & 0xFFFFFFFB | v90;
          goto LABEL_169;
        }
        v77 = *(_WORD**)(v9 + 1072);
        if (v77 != nullptr && v77[414] == 0 && v77[418] == 0 && v77[422] == 0 &&
            v77[426] == 0 && v77[430] == 0 && v77[434] == 0) {
          goto LABEL_160;
        }
        v97[0] = GameData_2057838;
        v98 = v97;
        v23 = EquipMenuItem_ItemExchange_15c9400_alt1(
            *(_QWORD*)(v25 + 232), *(_QWORD*)(v25 + 240), v97);
        if (v98 == v97) {
          v78 = 32;
        }
        else {
          if (v98 == nullptr) {
            goto LABEL_160;
          }
          v78 = 40;
        }
        (*(void (**)(__int64))(*v98 + v78))((__int64)v98);
        goto LABEL_160;
      }
    LABEL_169:
      v91 = *(_QWORD**)(a1 + 96);
      v92 = v91[38];
      if (v92 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v92 + 1080LL))(v92);
      }
      v93 = v91[39];
      if (v93 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v93 + 1080LL))(v93);
      }
      result = v91[40];
      if (result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 1080LL))(result);
        return 0;
      }
      return result;
    }
  }
  return 1;
}

__n128 EquipMenuItem_ItemExchange_Unknown55(__int64 a1)
{

#pragma clang fp contract(off)
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
  __n128 result;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  Util_15792c0(v4, v8, 0, 1, v6, (__int64)"L_Icon", (__int64)"T_Txt", v9 & 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v10 = *(_QWORD*)(a1 + 56);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = std___1___shared_weak_count_lock(v10),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
  v23 = v14;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  std___1___shared_weak_count___release_weak(),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v14 = v23;
  if (v23 == nullptr) {
  LABEL_13:
    v14 = &ui_LayoutAccessor_empty_;
  }
LABEL_14:
  LayoutAccessor_1560070((void*)(&v24_.v24), v14, (__int64)"L_Icon"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v24_.v25 == 0) {
    return result;
  }
  v16 = std___1___shared_weak_count_lock(v24_.v25),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v17 = v24_.v24;
  if (v24_.v25 != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if (v16 != 0 && v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                              memory_order_relaxed);
    v18 = *(int*)(a1 + 40);
    v19 = *(_QWORD*)(a1 + 88);
    v20 = std___1___shared_weak_count_lock(v16),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v20 != 0) {
      v21 = v20;
      v22 = v19 + 8 * v18 + 828;
      if ((_DWORD)v18 == -1) {
        v22 = (__int64)v7;
      }
      ui_LayoutAccessor_SetPaneVisible(v17, (__int64)"IconLock",
                                       (*(_BYTE*)(v22 + 3) & 0x10) != 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    result = std___1___shared_weak_count___release_weak();
  }
  else if (v16 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v16 + 16LL))(
        v16, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak();
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
  __int64 v10;
  __int64 v12;

  if (a1 == a2) {
    return 0;
  }
  v5 = a1;
  v6 = GameData_212e008[0];
  while (1) {
    if (*v5 != 0) {
      v7 = __dynamic_cast(*v5, v6, &GameData_20577e0, 0);
      if (v7 != 0) {
        v9 = v7;
        v10 = *(_QWORD*)(a3 + 32);
        v12 = v9;
        if (v10 == 0) {
          GameRoutine_60a310(0, v8);
        }
        if (((*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v10 + 48LL))(v10,
                                                                        &v12) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v5 == a2) {
      return 0;
    }
  }
  return v9;
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
