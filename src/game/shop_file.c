#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 (*GameData_1fa8688[])();
extern __int64 GameData_21c6980;
extern __int64 GameData_21ca018;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_ShopFile_Supply(__int64 result, __int64 a2);
__int64 game_ShopFile_Supply_lambda0_Invoke(__int64 result, __int64* a2);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");

__int64 game_ShopFile_Supply(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 (*v16)(_QWORD);
  __int64 v17;
  _QWORD* v18;
  _QWORD v19[4];
  _QWORD* v20;

  v2 = *(__int64**)(GameData_21ca018 + 64);
  v3 = *(__int64**)(GameData_21ca018 + 72);
  if (v2 != v3) {
    while (1) {
      v5 = *v2;
      v20 = v19;
      v19[0] = GameData_1fa8688;
      v6 = *(__int64***)(v5 + 24);
      v7 = *v6;
      v8 = v6[1];
      if (*v6 == v8) {
        break;
      }
      do {
        v10 = *v7;
        v9 = v7[1];
        if (v9 != *v7) {
          while (1) {
            v11 = *(_QWORD*)(*(_QWORD*)v10 + 24LL);
            v12 = *(_QWORD*)(v11 + 48);
            v13 = *(_QWORD*)(v11 + 56);
            if (v13 == v12) {
              break;
            }
            while (1) {
              if (*(_QWORD*)v12 != 0) {
                v14 = game_GameModeData_instance_;
                if (game_GameModeData_instance_ != 0) {
                  v15 = game_GameVariableTable_Find(
                      *(_QWORD*)(game_GameModeData_instance_ + 48), v12);
                  if (v15 != 0) {
                    v16 = *(__int64 (**)(_QWORD))(v15 + 72);
                    v17 = *(_QWORD*)(v15 + 80);
                    v18 = (_QWORD*)(v15 + (v17 >> 1));
                    if ((v17 & 1) != 0) {
                      v16 = *(__int64 (**)(_QWORD))((char*)v16 + *v18);
                    }
                    LOBYTE(result) = v16(v18);
                  }
                  else {
                    LOBYTE(result) = 1;
                  }
                }
                if (*(_BYTE*)(v12 + 16) != ((v14 == 0) | result & 1)) {
                  break;
                }
              }
              v12 += 24;
              if (v12 == v13) {
                goto LABEL_22;
              }
            }
            v10 += 8;
            if (v10 == v9) {
              goto LABEL_24;
            }
          }
        }
      LABEL_22:
        if (v20 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        LOBYTE(result) =
            (*(__int64 (**)(_QWORD*, __int64*))(*v20 + 48LL))(v20, v7);
      LABEL_24:
        v7 += 3;
      } while (v7 != v8);
      result = (__int64)v20;
      if (v20 == v19) {
        goto LABEL_4;
      }
      if (v20 != nullptr) {
        v4 = 40;
      LABEL_5:
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v4))(result);
      }
      if (++v2 == v3) {
        return result;
      }
    }
    result = (__int64)v19;
  LABEL_4:
    v4 = 32;
    goto LABEL_5;
  }
  return result;
}

__int64 game_ShopFile_Supply_lambda0_Invoke(__int64 result, __int64* a2)
{
  __int64* v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 (*v11)(_QWORD);
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64* v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 (*v24)(_QWORD);
  __int64 v25;
  _QWORD* v26;
  int v27;
  unsigned __int64* v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 (*v41)(_QWORD);
  __int64 v42;
  _QWORD* v43;
  int v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64* v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  int v51;
  int v52;
  int v53;
  int v54;

  v3 = (__int64*)*a2;
  v2 = (__int64*)a2[1];
  if (v2 == (__int64*)*a2) {
    return result;
  }
  v4 = 0;
  do {
    v5 = *v3;
    v6 = *(_QWORD*)(*v3 + 24);
    v7 = *(_QWORD*)(v6 + 48);
    v8 = *(_QWORD*)(v6 + 56);
    if (v8 == v7) {
    LABEL_3:
      v4 += *(unsigned __int8*)(v5 + 108);
    }
    else {
      while (1) {
        if (*(_QWORD*)v7 != 0) {
          v9 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v10 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v7);
            if (v10 != 0) {
              v11 = *(__int64 (**)(_QWORD))(v10 + 72);
              v12 = *(_QWORD*)(v10 + 80);
              v13 = (_QWORD*)(v10 + (v12 >> 1));
              if ((v12 & 1) != 0) {
                v11 = *(__int64 (**)(_QWORD))((char*)v11 + *v13);
              }
              result = v11(v13);
            }
            else {
              result = 1;
            }
          }
          if (*(_BYTE*)(v7 + 16) != ((v9 == 0) | result & 1)) {
            break;
          }
        }
        v7 += 24;
        if (v7 == v8) {
          goto LABEL_3;
        }
      }
    }
    ++v3;
  } while (v3 != v2);
  if (v4 < 1) {
    return result;
  }
  v15 = (__int64*)*a2;
  v14 = (__int64*)a2[1];
  if (v14 != (__int64*)*a2) {
    v16 = 1;
    v17 = 0;
    do {
      v18 = *v15;
      v19 = *(_QWORD*)(*v15 + 24);
      v20 = *(_QWORD*)(v19 + 48);
      v21 = *(_QWORD*)(v19 + 56);
      if (v21 == v20) {
      LABEL_22:
        if (*(_BYTE*)(v18 + 107) != 0) {
          v17 += *(unsigned __int8*)(v18 + 107);
        }
        else {
          v16 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v20 != 0) {
            v22 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v23 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v20);
              if (v23 != 0) {
                v24 = *(__int64 (**)(_QWORD))(v23 + 72);
                v25 = *(_QWORD*)(v23 + 80);
                v26 = (_QWORD*)(v23 + (v25 >> 1));
                if ((v25 & 1) != 0) {
                  v24 = *(__int64 (**)(_QWORD))((char*)v24 + *v26);
                }
                result = v24(v26);
              }
              else {
                result = 1;
              }
            }
            if (*(_BYTE*)(v20 + 16) != ((v22 == 0) | result & 1)) {
              break;
            }
          }
          v20 += 24;
          if (v20 == v21) {
            goto LABEL_22;
          }
        }
      }
      ++v15;
    } while (v15 != v14);
    v27 = v17 * v16;
    v15 = (__int64*)*a2;
    v14 = (__int64*)a2[1];
    if (v17 * v16 >= 1) {
      if (v14 == v15) {
        v28 = (unsigned __int64*)&GameData_21c6980;
        v29 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_43;
        }
      }
      else {
        v28 = (unsigned __int64*)(*(_QWORD*)(*v15 + 24) + 32LL);
        v29 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
        LABEL_43:
          v31 = v27 - v29;
          if (v27 >= v31) {
            v32 = v31;
          }
          else {
            v32 = v17 * v16;
          }
          if (v31 >= 0) {
            v30 = v32;
          }
          else {
            v30 = 0;
          }
          if (v14 == v15) {
            return result;
          }
          goto LABEL_50;
        }
      }
      result = game_GameVariableTable_Find_alt1(*(_QWORD**)(v29 + 48), v28);
      if (result != 0) {
        LODWORD(v29) = *(_DWORD*)(result + 32) & 0x7F;
      }
      else {
        LODWORD(v29) = 0;
      }
      goto LABEL_43;
    }
  }
  v30 = -1;
  if (v14 == v15) {
    return result;
  }
LABEL_50:
  v33 = 1;
  v54 = v30;
  v34 = 0;
  do {
    v35 = *v15;
    v36 = *(_QWORD*)(*v15 + 24);
    v37 = *(_QWORD*)(v36 + 48);
    v38 = *(_QWORD*)(v36 + 56);
    if (v38 == v37) {
    LABEL_54:
      if (*(_BYTE*)(v35 + 107) != 0) {
        v34 += *(unsigned __int8*)(v35 + 107);
      }
      else {
        v33 = 0;
      }
    }
    else {
      while (1) {
        if (*(_QWORD*)v37 != 0) {
          v39 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v40 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v37);
            if (v40 != 0) {
              v41 = *(__int64 (**)(_QWORD))(v40 + 72);
              v42 = *(_QWORD*)(v40 + 80);
              v43 = (_QWORD*)(v40 + (v42 >> 1));
              if ((v42 & 1) != 0) {
                v41 = *(__int64 (**)(_QWORD))((char*)v41 + *v43);
              }
              result = v41(v43);
            }
            else {
              result = 1;
            }
          }
          if (*(_BYTE*)(v37 + 16) != ((v39 == 0) | result & 1)) {
            break;
          }
        }
        v37 += 24;
        if (v37 == v38) {
          goto LABEL_54;
        }
      }
    }
    ++v15;
  } while (v15 != v14);
  v44 = v34 * v33;
  if (v34 * v33 >= 1) {
    v45 = *a2;
    v46 = a2[1];
    if (v46 == *a2) {
      v47 = (unsigned __int64*)&GameData_21c6980;
      v48 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
      LABEL_68:
        if (v46 != v45) {
        LABEL_69:
          v49 = (__int64*)(*(_QWORD*)(*(_QWORD*)v45 + 24LL) + 32LL);
        LABEL_75:
          v51 = v44 - (v54 + v4);
          if (v44 >= v51) {
            v52 = v44 - (v54 + v4);
          }
          else {
            v52 = v34 * v33;
          }
          if (v51 >= 0) {
            v53 = v52;
          }
          else {
            v53 = 0;
          }
          return game_VariableManager_SetFlag_alt1((__int64)v49,
                                                   (unsigned int)v48 | v53);
        }
      LABEL_74:
        v49 = &GameData_21c6980;
        goto LABEL_75;
      }
    }
    else {
      v47 = (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)v45 + 24LL) + 32LL);
      v48 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_68;
      }
    }
    v50 = game_GameVariableTable_Find_alt1(*(_QWORD**)(v48 + 48), v47);
    if (v50 != 0) {
      LODWORD(v48) = *(_DWORD*)(v50 + 32) & 0x80;
      if (v46 != v45) {
        goto LABEL_69;
      }
    }
    else {
      LODWORD(v48) = 0;
      if (v46 != v45) {
        goto LABEL_69;
      }
    }
    goto LABEL_74;
  }
  return result;
}

#pragma GCC visibility pop
