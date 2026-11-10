#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_65c660(_QWORD, _QWORD);
__int64 GameRoutine_8305a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_TransporterConst_List_Impl_EachData(_QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1ac849d;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1f93008[])();
extern __int64 (*GameData_2019548[])();
extern __int64 (*GameData_20195c8[])();
extern __int64 (*GameData_20198d8[])();
extern __int64 GameData_21c99b8;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21ca310;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 UnitUtil_1211e40(__int64 result);
__int64 UnitUtil_1212140(unsigned __int64 a1);
__int64 UnitUtil_12122d0(__int64* a1);
__int64 UnitUtil_12123e0(__int64* a1, __int64* a2);
__int64 UnitUtil_12124a0(unsigned __int64 a1);
__int64 UnitUtil_1212520(unsigned __int16* a1, __int64 a2);
__int64 UnitUtil_1212ac0(_QWORD* a1, _WORD* a2);
__int64 UnitUtil_1213180(__int64 result, __int64 a2);
__int64 game_UnitUtil_AutoEquipItem_lambda0_Invoke(__int64 result,
                                                   unsigned __int16* a2);
bool game_UnitUtil_SortSortieOrder_lambda0_Invoke(__int64 a1, __int64 a2,
                                                  __int64 a3);
__int64 game_UnitUtil_TryEscapeCorps_lambda0_Invoke(__int64 result, __int64 a2);
__int64 game_UnitUtil_TryEscapeCorps_lambda1_Invoke(__int64 result, __int64 a2);
__int64 game_UnitUtil_GetStockCount_lambda0_Invoke(__int64 result, __int64 a2,
                                                   _DWORD* a3);
__int64 game_UnitUtil_GetDeliverCount_lambda0_Invoke(__int64 result,
                                                     __int64 a2);
__int64 game_UnitUtil_GetDeliverCount_lambda1_Invoke(__int64 result, _WORD* a2);
bool game_UnitUtil_UniqueMap_Commit_lambda0_Invoke_1216430(
    __int64 a1, unsigned __int16* a2);
__int64 game_UnitUtil_UniqueMap_Commit_lambda0_Invoke_1216570(__int64 result,
                                                              __int64 a2);
__int64 game_UnitUtil_UniqueMap_Commit_lambda1_Invoke(__int64 result,
                                                      unsigned __int16* a2);
__int64 game_UnitUtil_EachFlagUnit_lambda0_Invoke(__int64 result, __int64* a2);

__int64 UnitUtil_1211e40(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  char v9[4];
  char v10[4];
  char v11[4];
  char v12[4];
  char v13[4];
  char v14[4];
  char v15[4];
  char v16[4];

  if (result != 0) {
    v1 = result;
    v9[0] = 1;
    v2 = game_Unit_GetParam(result, v9, 1);
    v10[0] = 2;
    v3 = game_Unit_GetParam(v1, v10, 1) + v2;
    v11[0] = 3;
    v4 = game_Unit_GetParam(v1, v11, 1);
    v12[0] = 4;
    v5 = v3 + v4 + game_Unit_GetParam(v1, v12, 1);
    v13[0] = 5;
    v6 = game_Unit_GetParam(v1, v13, 1);
    v14[0] = 6;
    v7 = v6 + game_Unit_GetParam(v1, v14, 1);
    v15[0] = 7;
    v8 = v5 + v7 + game_Unit_GetParam(v1, v15, 1);
    v16[0] = 8;
    return v8 + (unsigned int)game_Unit_GetParam(v1, v16, 1);
  }
  return result;
}

__int64 UnitUtil_1212140(unsigned __int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;

  v1 = *(_QWORD*)a1;
  if (*(_QWORD*)a1 == 0) {
    return 0;
  }
  v2 = a1;
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 15) == 7) {
    goto LABEL_32;
  }
  a1 = game_HashString(&GameData_1ac849d);
  if (a1 == 0) {
    goto LABEL_32;
  }
  v3 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_32;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = a1;
    if (a1 >= v3) {
      v6 = a1 % v3;
    }
  }
  else {
    v6 = v5 & a1;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v6);
  if (v7 == nullptr) {
    goto LABEL_32;
  }
  v8 = (_QWORD*)*v7;
  if (v8 == nullptr) {
    goto LABEL_32;
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == a1) {
        if (v8[2] == a1) {
          goto LABEL_29;
        }
      }
      else if ((v10 & v5) != v6) {
        goto LABEL_32;
      }
      v8 = (_QWORD*)*v8;
      if (v8 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == a1) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      goto LABEL_32;
    }
  LABEL_18:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      goto LABEL_32;
    }
  }
  if (v8[2] != a1) {
    goto LABEL_18;
  }
LABEL_29:
  v11 = v8[3];
  if (v11 != 0 && *(_QWORD*)(*(_QWORD*)(v1 + 24) + 1672LL) ==
                      *(_QWORD*)(*(_QWORD*)(v11 + 24) + 1672LL)) {
    return 0;
  }
LABEL_32:
  v13 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    LOBYTE(a1) =
        GameRoutine_65c660(*(_QWORD*)(game_GameModeData_instance_ + 48),
                           *(_QWORD*)(*(_QWORD*)v2 + 24LL) + 1512LL);
  }
  return (v13 != 0) & (unsigned __int8)a1;
}

__int64 UnitUtil_12122d0(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v1 = *a1;
  if (*a1 == 0) {
    return 0;
  }
  if (*(_QWORD*)(v1 + 272) == 0 || game_GameModeData_instance_ == 0) {
    return 0;
  }
  v3 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   *(_QWORD*)(v1 + 24) + 1032LL);
  if (v3 != 0 && *(_DWORD*)(v3 + 32) != 0) {
    return 1;
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v4 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   *(_QWORD*)(*a1 + 24) + 992LL);
  if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
    return 1;
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result =
      game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  *(_QWORD*)(*a1 + 24) + 1152LL);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 UnitUtil_12123e0(__int64* a1, __int64* a2)
{
  __int64 result;

  if (*a1 == 0 || game_GameModeData_instance_ == 0) {
    return 0;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    if ((UnitUtil_12122d0(a1) & 1) == 0) {
      return 0;
    }
  }
  else {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        *(_QWORD*)(*a1 + 24) + 1032LL);
    if (result == 0) {
      return result;
    }
    if (*(_DWORD*)(result + 32) == 0) {
      return 0;
    }
  }
  if (*a2 == 0 || game_GameModeData_instance_ == 0) {
    return 0;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    return UnitUtil_12122d0(a2);
  }
  result =
      game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  *(_QWORD*)(*a2 + 24) + 1032LL);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 UnitUtil_12124a0(unsigned __int64 a1)
{
  __int64 result;

  if ((UnitUtil_1212140(a1) & 1) == 0 || *(_QWORD*)a1 == 0 ||
      game_GameModeData_instance_ == 0) {
    return 0;
  }
  result =
      game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  *(_QWORD*)(*(_QWORD*)a1 + 24LL) + 1512LL);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 UnitUtil_1212520(unsigned __int16* a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  unsigned int v23;
  _QWORD v24[4];
  _QWORD* v25;
  unsigned int v26;
  _QWORD v27[4];
  _QWORD* v28;
  _QWORD v29[4];
  _QWORD* v30;

  v3 = v24;
  v26 = 0;
  v24[0] = GameData_20198d8;
  v24[1] = &v26;
  v4 = *a1;
  v25 = v24;
  if (v4 == 0) {
  LABEL_39:
    v21 = 32;
    goto LABEL_40;
  }
  v5 = GameData_212c878[0];
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v4);
  v30 = v29;
  v29[0] = GameData_2019548;
  v29[1] = v24;
  game_TransporterConst_List_Impl_EachData(
      *(_QWORD*)(game_TransporterConst_List_instance_ + 8), v6, v29);
  if (v30 == v29) {
    v7 = 32;
    goto LABEL_6;
  }
  if (v30 != nullptr) {
    v7 = 40;
  LABEL_6:
    (*(void (**)(_QWORD*, __int64))(*v30 + v7))(v30, a2);
  }
  v8 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * *a1);
  if ((((0x10000000000LL << *(_BYTE*)(v8 + 72)) | (1LL << *(_BYTE*)(v8 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    LODWORD(v29[0]) = 17;
    v9 = game_UnitPool_GetFirst(v29);
    if (v9 != 0) {
      v10 = *(_QWORD*)(v9 + 432);
      if (v10 == 0) {
        v10 = *(_QWORD*)(v9 + 440);
        if (v10 != 0) {
          v11 = *(unsigned __int8*)(v10 + 16);
          if (v11 <= 8) {
            v23 = v11 - 3;
            do {
              if (v23 == 0) {
                v10 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v10 != 0) {
                  goto LABEL_15;
                }
              }
              ++v23;
            } while (v23 != 6);
          }
          v10 = 0;
          goto LABEL_15;
        }
      }
      while (1) {
      LABEL_15:
        v12 = v10;
        v13 = *a1;
        v27[0] = GameData_20195c8;
        v27[1] = v24;
        v28 = v27;
        if (v13 == 0) {
          v16 = v27;
        LABEL_25:
          v17 = 32;
          goto LABEL_26;
        }
        v14 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * v13);
        v29[2] = v27;
        v30 = v29;
        v29[0] = GameData_1f93008;
        v29[1] = v14;
        game_UnitItemList_EachItem(v9 + 828, v29);
        if (v30 == v29) {
          v15 = 32;
        }
        else {
          if (v30 == nullptr) {
            goto LABEL_22;
          }
          v15 = 40;
        }
        (*(void (**)(_QWORD*, __int64))(*v30 + v15))(v30, a2);
      LABEL_22:
        v16 = v28;
        if (v28 == v27) {
          goto LABEL_25;
        }
        if (v28 != nullptr) {
          v17 = 40;
        LABEL_26:
          (*(void (**)(_QWORD*, __int64))(*v16 + v17))(v16, a2);
        }
        if (v12 == 0) {
          break;
        }
        v10 = *(_QWORD*)(v12 + 432);
        v9 = v12;
        if (v10 == 0) {
          v18 = *(_QWORD*)(v12 + 440);
          v9 = v12;
          if (v18 != 0) {
            v19 = *(unsigned __int8*)(v18 + 16);
            v10 = 0;
            v9 = v12;
            if (v19 <= 8) {
              v20 = v19 - 3;
              while (1) {
                if (v20 == 0) {
                  v10 =
                      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v10 != 0) {
                    break;
                  }
                }
                if (++v20 == 6) {
                  v10 = 0;
                  v9 = v12;
                  goto LABEL_15;
                }
              }
              v9 = v12;
            }
          }
        }
      }
    }
  }
  v3 = v25;
  if (v25 == v24) {
    goto LABEL_39;
  }
  if (v25 != nullptr) {
    v21 = 40;
  LABEL_40:
    (*(void (**)(_QWORD*, __int64))(*v3 + v21))(v3, a2);
  }
  return v26;
}

__int64 UnitUtil_1212ac0(_QWORD* a1, _WORD* a2)
{
  unsigned __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64*** v8;
  __int64** v9;
  __int64 result;
  unsigned __int64 v11;
  __int64* v12;

  if (*a2 != 0) {
    v2 = *(
        unsigned __int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 +
                                                             64) +
                                                  8LL * (unsigned __int16)*a2) +
                                       24LL) +
                            600LL);
    if (v2 != nullptr) {
      v3 = a1[1];
      if (v3 != 0 && a1[3] != 0) {
        v5 = *v2;
        v6 = v3 - 1;
        if ((v3 & (v3 - 1)) != 0) {
          v7 = v5;
          if (v5 >= v3) {
            v7 = v5 % v3;
          }
        }
        else {
          v7 = v6 & v5;
        }
        v8 = *(__int64****)(*a1 + 8 * v7);
        if (v8 != nullptr) {
          v9 = *v8;
          if (v9 != nullptr) {
            if ((v3 & v6) == 0) {
              while (1) {
                v12 = v9[1];
                if ((__int64*)v5 == v12) {
                  if (v9[2] == (__int64*)v5) {
                    return *((unsigned int*)v9 + 6);
                  }
                }
                else if (((unsigned __int64)v12 & v6) != v7) {
                  return 0;
                }
                v9 = (__int64**)*v9;
                result = 0;
                if (v9 == nullptr) {
                  return result;
                }
              }
            }
            while (1) {
              v11 = (unsigned __int64)v9[1];
              if (v5 == v11) {
                if (v9[2] == (__int64*)v5) {
                  return *((unsigned int*)v9 + 6);
                }
              }
              else {
                if (v11 >= v3) {
                  v11 %= v3;
                }
                if (v11 != v7) {
                  return 0;
                }
              }
              v9 = (__int64**)*v9;
              result = 0;
              if (v9 == nullptr) {
                return result;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

__int64 UnitUtil_1213180(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  _QWORD* v6;
  _DWORD* v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  _DWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if (result != 0) {
    v2 = *(_QWORD*)(result + 392);
    v4 = result;
    v5 = GameData_212c880[0];
    if (v2 != 0) {
      v6 = *(_QWORD**)(v2 + 24);
      v7 = (_DWORD*)v6[4];
      v8 = (_DWORD*)v6[5];
      if (v7 != v8) {
        v9 = *GameData_212c880[0];
        do {
          v10 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*v7 & 0xFFF));
          if (v10 != 0 && *(_BYTE*)(*(_QWORD*)(v10 + 24) + 1121LL) == 1) {
            v11 = *(_QWORD*)(a2 + 32);
            v19 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*v7 & 0xFFF));
            if (v11 == 0) {
            LABEL_10:
              GameRoutine_60a310(v11, a2);
            }
            result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
                v11, &v19);
            v9 = *v5;
          }
          ++v7;
        } while (v7 != v8);
        v6 = *(_QWORD**)(v2 + 24);
      }
      v12 = v6[116];
      v13 = v6[117];
      while (v12 != v13) {
        v14 = *(_QWORD*)(*(_QWORD*)v12 + 48LL);
        if (v14 != 0 && *(_BYTE*)(*(_QWORD*)(v14 + 24) + 1121LL) == 1) {
          v11 = *(_QWORD*)(a2 + 32);
          v19 = *(_QWORD*)(*(_QWORD*)v12 + 48LL);
          if (v11 == 0) {
            goto LABEL_10;
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
              v11, &v19);
        }
        v12 += 8;
      }
    }
    v15 = *(_DWORD**)(v4 + 1392);
    v16 = *(_DWORD**)(v4 + 1400);
    if (v15 != v16) {
      v17 = *v5;
      do {
        v18 = *(_QWORD*)(*(_QWORD*)(v17 + 64) + 8LL * (*v15 & 0xFFF));
        if (v18 != 0 && *(_BYTE*)(*(_QWORD*)(v18 + 24) + 1121LL) == 1) {
          v11 = *(_QWORD*)(a2 + 32);
          v19 = *(_QWORD*)(*(_QWORD*)(v17 + 64) + 8LL * (*v15 & 0xFFF));
          if (v11 == 0) {
            goto LABEL_10;
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(
              v11, &v19);
          v17 = *v5;
        }
        ++v15;
      } while (v15 != v16);
    }
  }
  return result;
}

__int64 game_UnitUtil_AutoEquipItem_lambda0_Invoke(__int64 result,
                                                   unsigned __int16* a2)
{
  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL *
                                         **(unsigned __int16**)(result + 16)) +
                          73LL) ==
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *a2) +
                          73LL)) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

bool game_UnitUtil_SortSortieOrder_lambda0_Invoke(__int64 a1, __int64 a2,
                                                  __int64 a3)
{
  return (unsigned __int8)(*(_BYTE*)(*(_QWORD*)a2 + 2093LL) - 1) <
         (unsigned int)(unsigned __int8)(*(_BYTE*)(*(_QWORD*)a3 + 2093LL) - 1);
}

__int64 game_UnitUtil_TryEscapeCorps_lambda0_Invoke(__int64 result, __int64 a2)
{
  **(_DWORD**)(result + 8) |= 1 << *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  return result;
}

__int64 game_UnitUtil_TryEscapeCorps_lambda1_Invoke(__int64 result, __int64 a2)
{
  **(_DWORD**)(result + 8) |= 1 << *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  return result;
}

__int64 game_UnitUtil_GetStockCount_lambda0_Invoke(__int64 result, __int64 a2,
                                                   _DWORD* a3)
{
  **(_DWORD**)(result + 8) += *a3;
  return result;
}

__int64 game_UnitUtil_GetDeliverCount_lambda0_Invoke(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(GameData_21c99b8 + 64);
  v3 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(a2 + 4)) +
                          24LL) +
               600LL);
  if (v3 ==
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 +
                                           8LL * **(unsigned __int16**)(result +
                                                                        8)) +
                                24LL) +
                     600LL) &&
      **(_WORD**)(v3 + 24) != 0) {
    **(_DWORD**)(result + 16) += *(unsigned __int16*)(a2 + 2);
  }
  return result;
}

__int64 game_UnitUtil_GetDeliverCount_lambda1_Invoke(__int64 result, _WORD* a2)
{
  if (*a2 != 0 &&
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * (unsigned __int16)*a2) +
                            24LL) +
                 600LL) ==
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                           8LL * **(unsigned __int16**)(result +
                                                                        8)) +
                                24LL) +
                     600LL)) {
    ++**(_DWORD**)(result + 16);
  }
  return result;
}

bool game_UnitUtil_UniqueMap_Commit_lambda0_Invoke_1216430(__int64 a1,
                                                           unsigned __int16* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8);
  return v2 != 0 &&
         *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                          8LL * *a2) +
                               24LL) +
                    600LL) == *(_QWORD*)(*(_QWORD*)(v2 + 24) + 600LL);
}

__int64 game_UnitUtil_UniqueMap_Commit_lambda0_Invoke_1216570(__int64 result,
                                                              __int64 a2)
{
  unsigned __int16* v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v8;
  int v9;
  __int64 v10;
  char v11;
  __int64* v12;

  v2 = (unsigned __int16*)(a2 + 4);
  v3 = GameData_212c878[0];
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)(a2 + 4));
  if ((*(_BYTE*)(v4 + 336) & 4) == 0 &&
      ((1LL << *(_BYTE*)(v4 + 72)) & 0xE01F) != 0) {
    v5 = *(_QWORD**)(*(_QWORD*)(result + 16) + 32LL);
    if (v5 == nullptr) {
      GameRoutine_60a310(result, a2);
    }
    v6 = *(_QWORD*)(result + 8);
    result = (__int64)(*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD, __int64))(
        *v5 + 48LL))(v5, *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL), a2 + 4);
    if ((result & 1) != 0) {
      v8 =
          *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v2) +
                                  24LL) +
                       600LL);
      if (v8 != nullptr) {
        v9 = *(unsigned __int16*)(a2 + 2);
        v10 = *v8;
        v12 = &v10;
        result = GameRoutine_8305a0(v6, &v10, std___1_piecewise_construct_ptr,
                                    &v12, &v11);
        *(_DWORD*)(result + 24) += v9;
      }
    }
  }
  return result;
}

__int64 game_UnitUtil_UniqueMap_Commit_lambda1_Invoke(__int64 result,
                                                      unsigned __int16* a2)
{
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64* v7;
  __int64 v8;
  char v9;
  __int64* v10;

  if ((*((_BYTE*)a2 + 3) & 0x10) == 0) {
    v2 = GameData_212c878[0];
    v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
    if ((*(_BYTE*)(v3 + 336) & 4) == 0 &&
        ((1LL << *(_BYTE*)(v3 + 72)) & 0xE01F) != 0) {
      v4 = *(_QWORD**)(*(_QWORD*)(result + 16) + 32LL);
      if (v4 == nullptr) {
        GameRoutine_60a310(result, a2);
      }
      v5 = *(_QWORD*)(result + 8);
      result = (__int64)(*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(
          *v4 + 48LL))(v4, *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL));
      if ((result & 1) != 0) {
        v7 = *(
            __int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * *a2) +
                                  24LL) +
                       600LL);
        if (v7 != nullptr) {
          v8 = *v7;
          v10 = &v8;
          result = GameRoutine_8305a0(v5, &v8, std___1_piecewise_construct_ptr,
                                      &v10, &v9);
          ++*(_DWORD*)(result + 24);
        }
      }
    }
  }
  return result;
}

__int64 game_UnitUtil_EachFlagUnit_lambda0_Invoke(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;

  v2 = *a2;
  if (*a2 != 0) {
    LODWORD(v2) = *(_WORD*)(v2 + 16) & 0xFFF;
  }
  v3 = **(_QWORD**)(result + 16);
  if (((unsigned int)v2 >> 5) + 1 <=
      (unsigned __int64)((*(_QWORD*)(*(_QWORD*)(result + 16) + 8LL) - v3) >>
                         2)) {
    v4 = (*(_DWORD*)(v3 + 4LL * ((unsigned int)v2 >> 5)) >> v2) & 1;
  }
  else {
    LOBYTE(v4) = 0;
  }
  **(_BYTE**)(result + 8) |= v4;
  return result;
}

#pragma GCC visibility pop
