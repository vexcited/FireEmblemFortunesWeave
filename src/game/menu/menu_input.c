#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_menu_MenuInput_CheckMove_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);
__int64 game_IsVibrationEnabled(_BYTE*);
extern __int64 (*GameData_2125318[])();
extern __int64 game_g_game_setting;
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 MenuInput_19edcf0(_QWORD* a1, unsigned int a2, char a3, char a4);
__int64 MenuInput_19ee540(__int64 a1, int a2, char a3);
__int64 MenuInput_19ee930(_QWORD* a1, int a2, char a3);

__int64 MenuInput_19edcf0(_QWORD* a1, unsigned int a2, char a3, char a4)
{
  unsigned int v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  char v12;
  char v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  char* v20;
  char* v21;
  unsigned __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  _QWORD* v39;
  _QWORD* v40;
  char v41;
  char v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  _QWORD* v52;
  _QWORD* v53;
  _QWORD* v54;
  int v55;
  int v56;
  __int64 v57;
  int v58;
  int v59;
  char v60;
  int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  char v78;
  int v79;
  int v80;
  char v81;
  unsigned int v82;
  int v83;
  int v84;
  struct {
    _QWORD v85[4];
    _QWORD* v86;
  } v85_;
  _BYTE v87[4];
  struct {
    __int64 v88;
    __int64 v89;
    __int64 v90;
    char gap128_[32];
    __int64 vars0;
    __int64 vars8;
  } v88_;

  if ((*(unsigned int (**)(_QWORD*))*a1)(a1) == 0) {
    v9 = a2;
    v88_.v89 = v88_.vars0;
    v88_.v90 = v88_.vars8;
    v10 = (_QWORD*)a1[1];
    if (v10[42] == 0) {
      return 0;
    }
    v11 = v85_.v85;
    v12 = a4 & 1;
    v13 = a3 & 1;
    v14 = v9;
    v87[0] = 0;
    v85_.v85[0] = GameData_2125318;
    v85_.v85[1] = v87;
    v16 = v10[29];
    v15 = v10[30];
    v85_.v86 = v85_.v85;
    if (v15 == v16) {
      goto LABEL_14;
    }
    v17 = 0;
    while (1) {
      if (*(_QWORD*)(v16 + 8 * v17) != 0) {
        v88_.v88 = *(_QWORD*)(v16 + 8 * v17);
        if (v85_.v86 == nullptr) {
          GameRoutine_60a310();
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v85_.v86 + 48LL))(v85_.v86,
                                                                    &v88_.v88) &
             1) != 0) {
        LABEL_11:
          v11 = v85_.v86;
          if (v85_.v86 != v85_.v85) {
            if (v85_.v86 != nullptr) {
              v18 = 40;
              goto LABEL_15;
            }
            goto LABEL_16;
          }
        LABEL_14:
          v18 = 32;
        LABEL_15:
          (*(void (**)(_QWORD*, __int64))(*v11 + v18))(v11, v9);
        LABEL_16:
          if (v87[0] != 1) {
            return 0;
          }
          v19 = (_QWORD*)a1[1];
          v21 = (char*)v19[29];
          v20 = (char*)v19[30];
          v22 = (unsigned __int64)(v20 - v21) >> 3;
          if (v20 == v21) {
          LABEL_21:
            v23 = -1;
          }
          else {
            v23 = 0;
            while (1) {
              v24 = *(_QWORD*)v21;
              v21 += 8;
              if (v24 == v19[42]) {
                break;
              }
              ++v23;
              if (v21 == v20) {
                goto LABEL_21;
              }
            }
          }
          if ((v13 & 1) != 0) {
            v25 = v23;
            while (1) {
              v25 += v14;
              if (v25 >= (int)v22) {
                if (((*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1) & 1) == 0) {
                  return 14;
                }
                v25 = 0;
              }
              else if (v25 < 0) {
                v25 = v22 - 1;
                if (((*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1) & 1) == 0) {
                  return 14;
                }
              }
              v26 = *(_QWORD*)(v19[29] + 8LL * v25);
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v26 + 48LL))(v26) & 1) !=
                  0) {
                v27 = v25;
                v28 = *(_QWORD*)(v19[29] + 8LL * v25);
                if (((*(__int64 (**)(__int64))(*(_QWORD*)v28 + 40LL))(v28) &
                     1) != 0) {
                  break;
                }
              }
            }
          }
          else {
            v25 = v23 + v14;
            result = 0;
            if (v23 + v14 >= (int)v22 || v25 < 0) {
              return result;
            }
            v30 = v23 + 2 * v14;
            while (1) {
              v31 = v30;
              v32 = *(_QWORD*)(v19[29] + 8LL * (unsigned int)v25);
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v32 + 48LL))(v32) & 1) !=
                  0) {
                v27 = (unsigned int)v25;
                v33 = *(_QWORD*)(v19[29] + 8LL * (unsigned int)v25);
                if (((*(__int64 (**)(__int64))(*(_QWORD*)v33 + 40LL))(v33) &
                     1) != 0) {
                  break;
                }
              }
              result = 0;
              if (v31 < (int)v22) {
                v25 += v14;
                v30 = v31 + v14;
                if ((v31 & 0x80000000) == 0) {
                  continue;
                }
              }
              return result;
            }
          }
          if (v23 == v25) {
            return 0;
          }
          v34 = a1[1];
          v35 = *(_QWORD*)(v19[29] + 8 * v27);
          v36 = *(_QWORD*)(v34 + 336);
          if (v36 == v35) {
          LABEL_49:
            v38 = 4;
            if (v36 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v36 + 120LL))(v36) &
                   1) != 0) {
                v38 = 4;
              }
              else {
                v38 = 0;
              }
            }
          }
          else {
            if (v36 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)v36 + 168LL))(v36);
            }
            *(_QWORD*)(v34 + 336) = v35;
            BasicMenu_16dea40(v34, v12 & 1, 1u, v13 & 1);
            v37 = *(_QWORD*)(v34 + 336);
            if (v37 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)v37 + 160LL))(v37);
              game_IsVibrationEnabled((_BYTE*)(game_g_game_setting + 712));
              v36 = *(_QWORD*)(v34 + 336);
              goto LABEL_49;
            }
            v38 = 4;
          }
          *(_DWORD*)(v34 + 356) = *(_DWORD*)(v34 + 356) & 0xFFFFFFFB | v38;
          return 13;
        }
        v16 = v10[29];
        v15 = v10[30];
      }
      if (++v17 >= (unsigned __int64)((v15 - v16) >> 3)) {
        goto LABEL_11;
      }
    }
  }
  v8 = a2;
  v88_.v89 = v88_.vars0;
  v88_.v90 = v88_.vars8;
  v39 = (_QWORD*)a1[1];
  if (v39[42] == 0) {
    return 0;
  }
  v40 = v85_.v85;
  v41 = a4 & 1;
  v42 = a3 & 1;
  v43 = v8;
  v87[0] = 0;
  v85_.v85[0] = GameData_2125318;
  v85_.v85[1] = v87;
  v45 = v39[29];
  v44 = v39[30];
  v85_.v86 = v85_.v85;
  if (v44 == v45) {
    goto LABEL_67;
  }
  v46 = 0;
  while (*(_QWORD*)(v45 + 8 * v46) == 0) {
  LABEL_59:
    if (++v46 >= (unsigned __int64)((v44 - v45) >> 3)) {
      goto LABEL_64;
    }
  }
  v88_.v88 = *(_QWORD*)(v45 + 8 * v46);
  if (v85_.v86 == nullptr) {
    GameRoutine_60a310();
  }
  if (((*(__int64 (**)(_QWORD*, __int64*))(*v85_.v86 + 48LL))(v85_.v86,
                                                              &v88_.v88) &
       1) == 0) {
    v45 = v39[29];
    v44 = v39[30];
    goto LABEL_59;
  }
LABEL_64:
  v40 = v85_.v86;
  if (v85_.v86 != v85_.v85) {
    if (v85_.v86 != nullptr) {
      v47 = 40;
      goto LABEL_68;
    }
    goto LABEL_69;
  }
LABEL_67:
  v47 = 32;
LABEL_68:
  (*(void (**)(__int64))(*v40 + v47))((__int64)v40);
LABEL_69:
  if (v87[0] != 1) {
    return 0;
  }
  v48 = a1[1];
  v81 = v42;
  v49 = (*(_QWORD*)(v48 + 240) - *(_QWORD*)(v48 + 232)) >> 3;
  v50 = (*(__int64 (**)(_QWORD*))(*a1 + 16LL))(a1);
  v51 = v49 - 1;
  v52 = (_QWORD*)a1[1];
  v78 = v41;
  v53 = (_QWORD*)v52[29];
  v54 = (_QWORD*)v52[30];
  v83 = (v51 + v50) / v50;
  v84 = v50;
  if (v53 != v54) {
    v55 = v50;
    v56 = 0;
    while (1) {
      v57 = *v53;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v53 + 48LL))(*v53) & 1) != 0) {
        if (v57 == v52[42]) {
          goto LABEL_79;
        }
        ++v56;
      }
      if (++v53 == v54) {
        goto LABEL_78;
      }
    }
  }
  v55 = v50;
LABEL_78:
  v56 = -1;
LABEL_79:
  v58 = v56 / v55;
  v59 = v83;
  v79 = v56;
  v60 = v81;
  v82 = v43;
  v80 = v55 - 1;
  do {
  LABEL_82:
    v58 += v43;
    if (v58 >= v59) {
      if ((v60 & 1) == 0) {
        return 0;
      }
      if (((*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1) & 1) == 0) {
        return 14;
      }
      v58 = 0;
    }
    else if (v58 < 0) {
      if ((v60 & 1) == 0) {
        return 0;
      }
      v58 = v83 - 1;
      if (((*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1) & 1) == 0) {
        return 14;
      }
    }
    v61 = v58 * v55;
    if (v58 * v55 + *((_DWORD*)a1 + 4) >= v51) {
      v62 = v51;
    }
    else {
      v62 = v58 * v55 + *((_DWORD*)a1 + 4);
    }
    v63 = *(_QWORD*)(*(_QWORD*)(v48 + 232) + 8LL * v62);
  } while (((*(__int64 (**)(__int64))(*(_QWORD*)v63 + 48LL))(v63) & 1) == 0);
  v64 = *(_QWORD*)(*(_QWORD*)(v48 + 232) + 8LL * v62);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v64 + 40LL))(v64) & 1) == 0) {
    LODWORD(v65) = *((_DWORD*)a1 + 4);
    if ((int)v65 + 1 >= v55) {
      v62 = -1;
      if ((int)v65 >= 1) {
        goto LABEL_106;
      }
    }
    else {
      v66 = 0;
      v67 = 8LL * (int)v65 + 8LL * v61 + 8;
      while (1) {
        v68 = *(_QWORD*)(*(_QWORD*)(v48 + 232) + v67 + 8 * v66);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v68 + 48LL))(v68) & 1) != 0) {
          v69 = *(_QWORD*)(*(_QWORD*)(v48 + 232) + v67 + 8 * v66);
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v69 + 40LL))(v69) & 1) !=
              0) {
            break;
          }
        }
        if (v80 - (_DWORD)v65 == (_DWORD)++v66) {
          v62 = -1;
          goto LABEL_105;
        }
      }
      if ((int)v65 + (__int64)v61 + v66 + 1 >= 0) {
        v60 = v81;
        v62 = v65 + v84 * v58 + v66 + 1;
        goto LABEL_113;
      }
      v62 = v65 + v61 + 1 + v66;
    LABEL_105:
      v60 = v81;
      v55 = v84;
      LODWORD(v65) = *((_DWORD*)a1 + 4);
      if ((int)v65 < 1) {
        goto LABEL_81;
      }
    LABEL_106:
      v70 = v61 - 1;
      v65 = (unsigned int)v65;
      while (1) {
        v71 = *(_QWORD*)(*(_QWORD*)(v48 + 232) + 8LL * (v70 + (int)v65));
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v71 + 48LL))(v71) & 1) != 0) {
          v72 = *(_QWORD*)(*(_QWORD*)(v48 + 232) + 8LL * (v70 + (int)v65));
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v72 + 40LL))(v72) & 1) !=
              0) {
            break;
          }
        }
        if (v65-- <= 1) {
          goto LABEL_80;
        }
      }
      v62 = v61 + v65 - 1;
    LABEL_80:
      v55 = v84;
    }
  LABEL_81:
    v43 = v82;
    v59 = v83;
    if ((v62 & 0x80000000) == 0) {
      goto LABEL_113;
    }
    goto LABEL_82;
  }
LABEL_113:
  if (v79 == v62) {
    return 0;
  }
  v73 = a1[1];
  v74 = *(_QWORD*)(*(_QWORD*)(v48 + 232) + 8LL * v62);
  v75 = *(_QWORD*)(v73 + 336);
  if (v75 == v74) {
  LABEL_121:
    v77 = 4;
    if (v75 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v75 + 120LL))(v75) & 1) != 0) {
        v77 = 4;
      }
      else {
        v77 = 0;
      }
    }
  }
  else {
    if (v75 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v75 + 168LL))(v75);
    }
    *(_QWORD*)(v73 + 336) = v74;
    BasicMenu_16dea40(v73, v78 & 1, 1u, v60 & 1);
    v76 = *(_QWORD*)(v73 + 336);
    if (v76 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v76 + 160LL))(v76);
      game_IsVibrationEnabled((_BYTE*)(game_g_game_setting + 712));
      v75 = *(_QWORD*)(v73 + 336);
      goto LABEL_121;
    }
    v77 = 4;
  }
  *(_DWORD*)(v73 + 356) = *(_DWORD*)(v73 + 356) & 0xFFFFFFFB | v77;
  return 13;
}

__int64 MenuInput_19ee540(__int64 a1, int a2, char a3)
{
  __int64 result;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  _QWORD* v16;
  int v17;
  _QWORD* v18;
  _QWORD* v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  char v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  int v32;
  signed __int64 v34;
  int v35;
  signed __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  char v45;
  int v46;
  int v47;
  int v48;
  struct {
    _QWORD v49[4];
    _QWORD* v50;
  } v49_;
  char v51;
  __int64 v52;

  result = (**(__int64 (***)(__int64))a1)(a1);
  if ((_DWORD)result == 0) {
    return result;
  }
  v7 = *(_QWORD**)(a1 + 8);
  if (v7[42] == 0) {
    return 0;
  }
  v8 = v49_.v49;
  v51 = 0;
  v49_.v49[0] = GameData_2125318;
  v49_.v49[1] = &v51;
  v10 = v7[29];
  v9 = v7[30];
  v49_.v50 = v49_.v49;
  if (v9 == v10) {
    goto LABEL_13;
  }
  v11 = 0;
  while (*(_QWORD*)(v10 + 8 * v11) == 0) {
  LABEL_5:
    if (++v11 >= (unsigned __int64)((v9 - v10) >> 3)) {
      goto LABEL_10;
    }
  }
  v52 = *(_QWORD*)(v10 + 8 * v11);
  if (v49_.v50 == nullptr) {
    GameRoutine_60a310();
  }
  if (((*(__int64 (**)(_QWORD*, __int64*))(*v49_.v50 + 48LL))(v49_.v50, &v52) &
       1) == 0) {
    v10 = v7[29];
    v9 = v7[30];
    goto LABEL_5;
  }
LABEL_10:
  v8 = v49_.v50;
  if (v49_.v50 != v49_.v49) {
    if (v49_.v50 != nullptr) {
      v12 = 40;
      goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_13:
  v12 = 32;
LABEL_14:
  (*(void (**)(__int64))(*v8 + v12))((__int64)v8);
LABEL_15:
  if (v51 != 1) {
    return 0;
  }
  v13 = *(_QWORD*)(a1 + 8);
  v48 = a2;
  v14 = (*(_QWORD*)(v13 + 240) - *(_QWORD*)(v13 + 232)) >> 3;
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  v16 = *(_QWORD**)(a1 + 8);
  v17 = v15;
  v18 = (_QWORD*)v16[29];
  v19 = (_QWORD*)v16[30];
  if (v18 != v19) {
    v20 = 0;
    do {
      v21 = *v18;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v18 + 48LL))(*v18) & 1) != 0) {
        if (v21 == v16[42]) {
          goto LABEL_24;
        }
        ++v20;
      }
      ++v18;
    } while (v18 != v19);
  }
  v20 = -1;
LABEL_24:
  v22 = v20 / v17 * v17;
  v23 = v20 % v17;
  if ((a3 & 1) != 0) {
    v45 = a3;
    v46 = v20;
    while (1) {
      v24 = v23 + v48;
      if (v23 + v48 < v17 && v23 + v48 + v22 < (int)v14) {
        if (v24 < 0) {
          v26 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
          v24 = v17 - 1;
          if ((v26 & 1) == 0) {
            return 14;
          }
        }
      }
      else {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) & 1) == 0) {
          return 14;
        }
        v24 = 0;
      }
      if (v24 + v22 >= (int)v14) {
        v23 = ((int)v14 - 1) % v17;
      }
      else {
        v23 = v24;
      }
      if (v24 + v22 >= (int)v14) {
        v27 = v14 - 1;
      }
      else {
        v27 = v24 + v22;
      }
      v28 = *(_QWORD*)(*(_QWORD*)(v13 + 232) + 8LL * v27);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v28 + 48LL))(v28) & 1) != 0) {
        v29 = v27;
        v30 = *(_QWORD*)(*(_QWORD*)(v13 + 232) + 8LL * v27);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v30 + 40LL))(v30) & 1) != 0) {
          goto LABEL_58;
        }
      }
    }
  }
  result = 0;
  v31 = v23 + v48;
  if (v23 + v48 >= 0) {
    v32 = v20 + v48;
    v45 = a3;
    v46 = v20;
    v47 = v23 + v48;
    if ((int)v31 < v17 && v32 < (int)v14) {
      v34 = v17;
      v35 = 0;
      v36 = v48 + (unsigned __int64)v31;
      while (1) {
        LODWORD(v29) = v32 + v35;
        v37 = *(_QWORD*)(*(_QWORD*)(v13 + 232) + 8LL * (v32 + v35));
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v37 + 48LL))(v37) & 1) != 0) {
          v29 = (int)v29;
          v38 = *(_QWORD*)(*(_QWORD*)(v13 + 232) + 8LL * (int)v29);
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v38 + 40LL))(v38) & 1) !=
              0) {
            break;
          }
        }
        result = 0;
        if ((v36 & 0x8000000000000000LL) == 0 && v36 < v34) {
          v39 = v20 + 2 * v48 + v35;
          v36 += v48;
          v35 += v48;
          if (v39 < (int)v14) {
            continue;
          }
        }
        return result;
      }
      v23 = v47 + v35;
      v27 = v32 + v35;
    LABEL_58:
      *(_DWORD*)(a1 + 16) = v23;
      if (v46 == v27) {
        return 0;
      }
      v40 = *(_QWORD*)(a1 + 8);
      v41 = *(_QWORD*)(*(_QWORD*)(v13 + 232) + 8 * v29);
      v42 = *(_QWORD*)(v40 + 336);
      if (v42 != v41) {
        if (v42 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v42 + 168LL))(v42);
        }
        *(_QWORD*)(v40 + 336) = v41;
        BasicMenu_16dea40(v40, 0, 1u, v45 & 1);
        v43 = *(_QWORD*)(v40 + 336);
        if (v43 == 0) {
          v44 = 4;
        LABEL_71:
          *(_DWORD*)(v40 + 356) = *(_DWORD*)(v40 + 356) & 0xFFFFFFFB | v44;
          return 13;
        }
        (*(void (**)(__int64))(*(_QWORD*)v43 + 160LL))(v43);
        game_IsVibrationEnabled((_BYTE*)(game_g_game_setting + 712));
        v42 = *(_QWORD*)(v40 + 336);
      }
      v44 = 4;
      if (v42 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v42 + 120LL))(v42) & 1) != 0) {
          v44 = 4;
        }
        else {
          v44 = 0;
        }
      }
      goto LABEL_71;
    }
  }
  return result;
}

__int64 MenuInput_19ee930(_QWORD* a1, int a2, char a3)
{
  char v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  _BOOL4 v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  int v48;
  __int64 v49;
  int v50;
  char v51;
  int v52;
  struct {
    _QWORD v53[4];
    _QWORD* v54;
  } v53_;
  char v55;
  _QWORD v56[11];

  if ((*(unsigned int (**)(_QWORD*))*a1)(a1) != 0) {
    return 0;
  }
  v7 = a3 & 1;
  v56[1] = v56[7];
  v56[2] = v56[8];
  v56[10] = v56[9];
  v8 = (_QWORD*)a1[1];
  v51 = v7;
  v52 = a2;
  if (v8[42] == 0) {
    return 0;
  }
  v9 = a1;
  v10 = v53_.v53;
  v55 = 0;
  v53_.v53[0] = GameData_2125318;
  v53_.v53[1] = &v55;
  v12 = v8[29];
  v11 = v8[30];
  v53_.v54 = v53_.v53;
  if (v11 == v12) {
    goto LABEL_14;
  }
  v13 = 0;
  while (*(_QWORD*)(v12 + 8 * v13) == 0) {
  LABEL_6:
    if (++v13 >= (unsigned __int64)((v11 - v12) >> 3)) {
      goto LABEL_11;
    }
  }
  v56[0] = *(_QWORD*)(v12 + 8 * v13);
  if (v53_.v54 == nullptr) {
    GameRoutine_60a310();
  }
  if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v53_.v54 + 48LL))(v53_.v54, v56) &
       1) == 0) {
    v12 = v8[29];
    v11 = v8[30];
    goto LABEL_6;
  }
LABEL_11:
  v10 = v53_.v54;
  if (v53_.v54 != v53_.v53) {
    if (v53_.v54 != nullptr) {
      v14 = 40;
      goto LABEL_15;
    }
    goto LABEL_16;
  }
LABEL_14:
  v14 = 32;
LABEL_15:
  (*(void (**)(__int64))(*v10 + v14))((__int64)v10);
LABEL_16:
  if (v55 != 1) {
    return 0;
  }
  v15 = (_QWORD*)v9[1];
  v17 = (char*)v15[29];
  v16 = (char*)v15[30];
  v18 = (unsigned __int64)(v16 - v17) >> 3;
  if (v16 == v17) {
  LABEL_21:
    v19 = -1;
  }
  else {
    v19 = 0;
    while (1) {
      v20 = *(_QWORD*)v17;
      v17 += 8;
      if (v20 == v15[42]) {
        break;
      }
      ++v19;
      if (v17 == v16) {
        goto LABEL_21;
      }
    }
  }
  v50 = (*(__int64 (**)(_QWORD*))(*v9 + 8LL))(v9);
  v21 = 0;
  v22 = 0;
  v23 = v19;
  v24 = v19;
  while (1) {
    v24 += v52;
    if (v24 >= (int)v18) {
      if ((v51 & 1) == 0) {
        return 0;
      }
      if (((*(__int64 (**)(_QWORD*))(*v9 + 24LL))(v9) & 1) == 0) {
        return 14;
      }
      v24 = 0;
      v22 = 1;
    }
    else if (v24 < 0) {
      if ((v51 & 1) == 0) {
        return 0;
      }
      if (((*(__int64 (**)(_QWORD*))(*v9 + 24LL))(v9) & 1) == 0) {
        return 14;
      }
      v22 = 1;
      v24 = v18 - 1;
    }
    if (v19 == v24) {
      return 0;
    }
    v25 = v24;
    v26 = *(_QWORD*)(v15[29] + 8LL * v24);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v26 + 40LL))(v26) & 1) != 0) {
      v27 = *(_QWORD*)(v15[29] + 8LL * v24);
      v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 48LL))(v27);
      v21 += v28 & 1;
      if ((v28 & 1) != 0) {
        v23 = v24;
      }
    }
    v30 = v24 >= (int)v18 - 1 || v24 < 1;
    v31 = v30 | v22;
    if (v30) {
      v32 = v23;
    }
    else {
      v32 = v24;
    }
    if (v21 >= 1) {
      v24 = v32;
      v22 = v31;
      v25 = v32;
    }
    v33 = *(_QWORD*)(v15[29] + 8 * v25);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v33 + 40LL))(v33) & 1) != 0) {
      v34 = *(_QWORD*)(v15[29] + 8 * v25);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v34 + 48LL))(v34) & 1) != 0 &&
          ((v21 >= v50) | v22 & 1) != 0) {
        break;
      }
    }
  }
  v35 = v9[1];
  v36 = *(_QWORD**)(v35 + 232);
  v37 = *(_QWORD**)(v35 + 240);
  if (v36 == v37) {
    v38 = -1;
  }
  else {
    v38 = 0;
    do {
      v39 = *v36;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v36 + 48LL))(*v36) & 1) != 0) {
        if (v39 == *(_QWORD*)(v35 + 336)) {
          goto LABEL_58;
        }
        ++v38;
      }
      ++v36;
    } while (v36 != v37);
    v38 = -1;
  LABEL_58:
    v35 = v9[1];
  }
  v40 = *(_DWORD*)(v35 + 552);
  v41 = *(_QWORD*)(v35 + 336);
  v42 = *(_QWORD*)(v15[29] + 8 * v25);
  if (v41 == v42) {
  LABEL_65:
    v44 = 4;
    if (v41 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v41 + 120LL))(v41) & 1) != 0) {
        v44 = 4;
      }
      else {
        v44 = 0;
      }
    }
  }
  else {
    if (v41 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v41 + 168LL))(v41);
    }
    *(_QWORD*)(v35 + 336) = v42;
    BasicMenu_16dea40(v35, 1, 1u, v51 & 1);
    v43 = *(_QWORD*)(v35 + 336);
    if (v43 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 160LL))(v43);
      game_IsVibrationEnabled((_BYTE*)(game_g_game_setting + 712));
      v41 = *(_QWORD*)(v35 + 336);
      goto LABEL_65;
    }
    v44 = 4;
  }
  *(_DWORD*)(v35 + 356) = *(_DWORD*)(v35 + 356) & 0xFFFFFFFB | v44;
  if ((v22 & 1) == 0) {
    v45 = v9[1];
    v46 = *(_QWORD**)(v45 + 232);
    v47 = *(_QWORD**)(v45 + 240);
    if (v46 != v47) {
      v48 = 0;
      do {
        v49 = *v46;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v46 + 48LL))(*v46) & 1) != 0) {
          if (v49 == *(_QWORD*)(v45 + 336)) {
            goto LABEL_79;
          }
          ++v48;
        }
        ++v46;
      } while (v46 != v47);
    }
    v48 = -1;
  LABEL_79:
    *(_DWORD*)(v45 + 552) = v40 - v38 + v48;
    BasicMenu_16dea40(v45, 1, 0, 0);
  }
  return 13;
}

__int64 game_menu_MenuInput_CheckMove_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 48LL))(*a2) & 1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2) & 1) == 0) {
    return 0;
  }
  **(_BYTE**)(a1 + 8) = 1;
  return 1;
}

#pragma GCC visibility pop
