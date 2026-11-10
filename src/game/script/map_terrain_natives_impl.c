#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7c9580(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7c9660(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7c9850(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7ca100(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7ca1f0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7ca2d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7cbd00(_QWORD, _QWORD);
__int64 GameRoutine_7d5160(_QWORD, _QWORD);
__int64 StringIsEmpty_25eef0(_QWORD);
__int64 as_string_c_str(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_map_anonymous_TrickEntity_TryBroken(_QWORD, _QWORD, _QWORD);
__int64 game_map_anonymous_TrickEntity_TryRepair(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1ae7032;
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21c9bc0;
extern __int64 GameData_21c9bd0;
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd158;
extern __int64 GameData_22400f8;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c890[3];
extern __int64* GameData_212cfb0[12];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_21309c8[5];
extern char game_script_map_terrain_g_terrain_changing;
extern unsigned __int8 GameData_1b41aa9[22];
extern unsigned __int8 GameData_1b41abf[17];
bool map_terrain_IsTrickExist(int a1, int a2, __int64 a3);
__int64 map_terrain_GetTrickPosByTID(__int64 a1, _DWORD* a2, _DWORD* a3);
__int64 map_terrain_IsCostEnable(__int64 a1, unsigned __int8 a2);
void map_terrain_SetEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6);
unsigned __int64 map_terrain_SetTrickRange(unsigned int a1, unsigned int a2,
                                           unsigned int a3, unsigned int a4,
                                           __int64 a5);
bool map_terrain_IsSetTrickItem(int a1, int a2);
unsigned __int64 map_terrain_SetTrickItem(unsigned int a1, unsigned int a2,
                                          __int64 a3);
__int64 map_terrain_DeleteTrick(unsigned int a1, unsigned int a2, __int64 a3);
__int64 map_terrain_BreakTrick(int a1, int a2);
__int64 map_terrain_RepairTrick(int a1, int a2);
__int64 map_terrain_SetTargetByRect(int a1, int a2, unsigned int a3,
                                    unsigned int a4, unsigned int a5,
                                    unsigned int a6);
__int64 map_terrain_SetTargetByCircle(int a1, int a2, unsigned int a3,
                                      unsigned int a4, unsigned int a5);
unsigned __int64 map_terrain_SetTargetByPid(int a1, int a2, __int64 a3);
unsigned __int64 map_terrain_SetTargetBySid(int a1, int a2, __int64 a3);
void map_terrain_UpdateTrickForContinue();

bool map_terrain_IsTrickExist(int a1, int a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v15;

  v5 = *GameData_212cfb8[0];
  v6 = as_string_c_str(a3);
  GameRoutine_7cbd00(&v15, v6);
  v7 = *(_QWORD*)(v5 + 16);
  v8 = v15;
  if (v15 != 0) {
    v8 = GameData_1b41aa9[*(unsigned __int8*)(v15 + 57)];
  }
  v9 = GameData_1b41abf[v8];
  v10 = a1 + 32 * a2;
  if (v10 >= 0x400) {
    v10 = 0;
  }
  v11 = v7 + (v9 << 11);
  v12 = *(_QWORD*)(v7 + 8);
  return *(__int16*)(v11 + 2LL * v10 + 104) > -1 && v12 != 0;
}

__int64 map_terrain_GetTrickPosByTID(__int64 a1, _DWORD* a2, _DWORD* a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v3 = GameData_21cd158;
  if (GameData_21cd158 == 0) {
    return 0;
  }
  v6 = as_string_c_str(a1);
  GameRoutine_7cbd00(&v14, v6);
  v7 = v14;
  if (v14 == 0) {
    return 0;
  }
  v8 = *(_QWORD*)(v3 + 16);
  v10 = *(__int64**)(v8 + 32);
  v9 = *(__int64**)(v8 + 40);
  if (v10 == v9) {
    return 0;
  }
  while (1) {
    v12 = *v10++;
    v11 = v12;
    if ((*(__int64 (**)(__int64))(*(_QWORD*)v12 + 224LL))(v12) == v7) {
      break;
    }
    if (v10 == v9) {
      return 0;
    }
  }
  *a2 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
  *a3 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
  return 1;
}

__int64 map_terrain_IsCostEnable(__int64 a1, unsigned __int8 a2)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  v3 = as_string_c_str(a1);
  v4 = game_HashString(v3);
  if (v4 == 0) {
    goto LABEL_25;
  }
  v5 = *(_QWORD*)(GameData_21c9bc0 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21c9bc0 + 112) == 0) {
    goto LABEL_25;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = v4;
    if (v4 >= v5) {
      v8 = v4 % v5;
    }
  }
  else {
    v8 = v7 & v4;
  }
  v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c9bc0 + 88) + 8 * v8);
  if (v9 == nullptr || (v10 = (_QWORD*)*v9) == nullptr) {
  LABEL_25:
    LODWORD(v12) = 0;
    return (unsigned int)v12;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v13 = v10[1];
      if (v13 == v4) {
        if (v10[2] == v4) {
          goto LABEL_27;
        }
      }
      else if ((v13 & v7) != v8) {
        goto LABEL_25;
      }
      v10 = (_QWORD*)*v10;
      LODWORD(v12) = 0;
      if (v10 == nullptr) {
        return (unsigned int)v12;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v4) {
      break;
    }
    if (v11 >= v5) {
      v11 %= v5;
    }
    if (v11 != v8) {
      goto LABEL_25;
    }
  LABEL_15:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      goto LABEL_25;
    }
  }
  if (v10[2] != v4) {
    goto LABEL_15;
  }
LABEL_27:
  v12 = v10[3];
  if (v12 != 0) {
    LODWORD(v12) = *(unsigned __int8*)(v12 + a2 + 32) != 255;
  }
  return (unsigned int)v12;
}

void map_terrain_SetEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, __int64 a6)
{
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  if (game_script_map_terrain_g_terrain_changing == 1) {
    v6 = GameData_21ca300;
    if (GameData_21ca300 != 0) {
      memset(*(_QWORD*)(GameData_21ca300 + 72) + 8LL, 0, 2048, a4, a5, a6);
      v7 = *(unsigned __int8*)(v6 + 21);
      v8 = *(unsigned __int8*)(v6 + 23);
      v9 = *(unsigned __int8*)(v6 + 20);
      v10 = *(unsigned __int8*)(v6 + 22);
      if (v7 <= v8 && v9 <= v10) {
        v12 = v10 + 1;
        v13 = 32 * v7;
        v14 = v10 - v9;
        v15 = 32 * v7 + v9;
        do {
          v17 = v9;
          if ((((_BYTE)v12 - (_BYTE)v9) & 3) != 0) {
            v18 = ((_BYTE)v12 - (_BYTE)v9) & 3;
            v19 = v15;
            v20 = -v9;
            do {
              if (v19 >= 0x400) {
                v21 = 0;
              }
              else {
                v21 = v19;
              }
              v22 = 2LL * (unsigned int)v21;
              if (*(_WORD*)(*(_QWORD*)(v6 + 48) + v22 + 8) != 0) {
                *(_WORD*)(*(_QWORD*)(v6 + 72) + 2 * v21 + 8) =
                    *(_WORD*)(*(_QWORD*)(v6 + 48) + v22 + 8);
              }
              else {
                v23 = *(_QWORD*)(v6 + 72) + 8LL;
                if (*(_WORD*)(*(_QWORD*)(v6 + 40) + v22 + 8) != 0) {
                  *(_WORD*)(v23 + 2 * v21) =
                      *(_WORD*)(*(_QWORD*)(v6 + 40) + v22 + 8);
                }
                else {
                  *(_WORD*)(v23 + 2 * v21) =
                      *(_WORD*)(*(_QWORD*)(v6 + 32) + v22 + 8);
                }
              }
              --v20;
              ++v19;
              --v18;
            } while (v18 != 0);
            v17 = -v20;
          }
          if (v14 >= 3) {
            do {
              LODWORD(v24) = v13 + v17;
              if ((unsigned int)(v13 + v17) >= 0x400) {
                v24 = 0;
              }
              else {
                v24 = (unsigned int)v24;
              }
              v25 = 2LL * (unsigned int)v24;
              if (*(_WORD*)(*(_QWORD*)(v6 + 48) + v25 + 8) != 0) {
                *(_WORD*)(*(_QWORD*)(v6 + 72) + 2 * v24 + 8) =
                    *(_WORD*)(*(_QWORD*)(v6 + 48) + v25 + 8);
              }
              else {
                v26 = *(_QWORD*)(v6 + 72) + 8LL;
                if (*(_WORD*)(*(_QWORD*)(v6 + 40) + v25 + 8) != 0) {
                  *(_WORD*)(v26 + 2 * v24) =
                      *(_WORD*)(*(_QWORD*)(v6 + 40) + v25 + 8);
                }
                else {
                  *(_WORD*)(v26 + 2 * v24) =
                      *(_WORD*)(*(_QWORD*)(v6 + 32) + v25 + 8);
                }
              }
              if ((unsigned int)(v13 + v17 + 1) < 0x400) {
                v27 = (unsigned int)(v13 + v17 + 1);
              }
              else {
                v27 = 0;
              }
              v28 = 2LL * (unsigned int)v27;
              if (*(_WORD*)(*(_QWORD*)(v6 + 48) + v28 + 8) != 0) {
                *(_WORD*)(*(_QWORD*)(v6 + 72) + 2 * v27 + 8) =
                    *(_WORD*)(*(_QWORD*)(v6 + 48) + v28 + 8);
              }
              else {
                v29 = *(_QWORD*)(v6 + 72) + 8LL;
                if (*(_WORD*)(*(_QWORD*)(v6 + 40) + v28 + 8) != 0) {
                  *(_WORD*)(v29 + 2 * v27) =
                      *(_WORD*)(*(_QWORD*)(v6 + 40) + v28 + 8);
                }
                else {
                  *(_WORD*)(v29 + 2 * v27) =
                      *(_WORD*)(*(_QWORD*)(v6 + 32) + v28 + 8);
                }
              }
              LODWORD(v30) = v13 + v17 + 2;
              if ((unsigned int)v30 >= 0x400) {
                v30 = 0;
              }
              else {
                v30 = (unsigned int)v30;
              }
              v31 = 2LL * (unsigned int)v30;
              if (*(_WORD*)(*(_QWORD*)(v6 + 48) + v31 + 8) != 0) {
                *(_WORD*)(*(_QWORD*)(v6 + 72) + 2 * v30 + 8) =
                    *(_WORD*)(*(_QWORD*)(v6 + 48) + v31 + 8);
              }
              else {
                v32 = *(_QWORD*)(v6 + 72) + 8LL;
                if (*(_WORD*)(*(_QWORD*)(v6 + 40) + v31 + 8) != 0) {
                  *(_WORD*)(v32 + 2 * v30) =
                      *(_WORD*)(*(_QWORD*)(v6 + 40) + v31 + 8);
                }
                else {
                  *(_WORD*)(v32 + 2 * v30) =
                      *(_WORD*)(*(_QWORD*)(v6 + 32) + v31 + 8);
                }
              }
              LODWORD(v33) = v13 + v17 + 3;
              if ((unsigned int)v33 >= 0x400) {
                v33 = 0;
              }
              else {
                v33 = (unsigned int)v33;
              }
              v34 = 2LL * (unsigned int)v33;
              if (*(_WORD*)(*(_QWORD*)(v6 + 48) + v34 + 8) != 0) {
                *(_WORD*)(*(_QWORD*)(v6 + 72) + 2 * v33 + 8) =
                    *(_WORD*)(*(_QWORD*)(v6 + 48) + v34 + 8);
              }
              else {
                v35 = *(_QWORD*)(v6 + 72) + 8LL;
                if (*(_WORD*)(*(_QWORD*)(v6 + 40) + v34 + 8) != 0) {
                  *(_WORD*)(v35 + 2 * v33) =
                      *(_WORD*)(*(_QWORD*)(v6 + 40) + v34 + 8);
                }
                else {
                  *(_WORD*)(v35 + 2 * v33) =
                      *(_WORD*)(*(_QWORD*)(v6 + 32) + v34 + 8);
                }
              }
              v17 += 4;
            } while (v12 != v17);
          }
          v15 += 32;
          v13 += 32;
        } while (v7++ != v8);
      }
    }
    if (GameData_21cd158 != 0) {
      GameRoutine_7d5160(*(_QWORD*)(GameData_21cd158 + 16), 1);
    }
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
    }
    game_script_map_terrain_g_terrain_changing = 0;
  }
}

unsigned __int64 map_terrain_SetTrickRange(unsigned int a1, unsigned int a2,
                                           unsigned int a3, unsigned int a4,
                                           __int64 a5)
{
  __int64 v9;
  unsigned __int64 result;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  char v21;
  __int64 v22;
  __int64 v23;

  v9 = as_string_c_str(a5);
  result = game_HashString(v9);
  if (result == 0) {
    return result;
  }
  v11 = *(_QWORD*)(GameData_21c9bd0 + 96);
  if (v11 == 0 || *(_QWORD*)(GameData_21c9bd0 + 112) == 0) {
    return result;
  }
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v14 = result;
    if (result >= v11) {
      v14 = result % v11;
    }
  }
  else {
    v14 = v13 & result;
  }
  v15 = *(_QWORD**)(*(_QWORD*)(GameData_21c9bd0 + 88) + 8 * v14);
  if (v15 == nullptr) {
    return result;
  }
  v16 = (_QWORD*)*v15;
  if (v16 == nullptr) {
    return result;
  }
  if ((v11 & v13) == 0) {
    while (1) {
      v18 = v16[1];
      if (v18 == result) {
        if (v16[2] == result) {
          goto LABEL_26;
        }
      }
      else if ((v18 & v13) != v14) {
        return result;
      }
      v16 = (_QWORD*)*v16;
      if (v16 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == result) {
      break;
    }
    if (v17 >= v11) {
      v17 %= v11;
    }
    if (v17 != v14) {
      return result;
    }
  LABEL_15:
    v16 = (_QWORD*)*v16;
    if (v16 == nullptr) {
      return result;
    }
  }
  if (v16[2] != result) {
    goto LABEL_15;
  }
LABEL_26:
  v19 = v16[3];
  if (v19 == 0) {
    return result;
  }
  v20 = GameData_212cfb8[0];
  v23 = v16[3];
  v21 = GameRoutine_7ca2d0(*GameData_212cfb8[0], a1, a2, &v23);
  v22 = *v20;
  if ((v21 & 1) != 0) {
    v23 = v19;
    result = GameRoutine_7ca1f0(v22, a1, a2, &v23);
    if ((result & 1) == 0) {
      return result;
    }
  }
  else {
    v23 = v19;
    result = GameRoutine_7c9580(v22, a1, a2, a3, a4, &v23);
    if ((result & 1) == 0) {
      return result;
    }
  }
  result = GameRoutine_7d5160(*(_QWORD*)(*v20 + 16), 1);
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
  }
  return result;
}

bool map_terrain_IsSetTrickItem(int a1, int a2)
{
  unsigned int v2;
  _BOOL8 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = a1 + 32 * a2;
  result = false;
  if (v2 >= 0x400) {
    v2 = 0;
  }
  v4 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v5 = *(__int16*)(v4 + 2LL * v2 + 8296);
  if ((v5 & 0x8000000000000000LL) == 0) {
    v6 = *(_QWORD*)(v4 + 8);
    if (v6 != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)(v6 + 144LL * (int)v5) +
                                       192LL))(v6 + 144LL * (int)v5) != 0;
    }
  }
  return result;
}

unsigned __int64 map_terrain_SetTrickItem(unsigned int a1, unsigned int a2,
                                          __int64 a3)
{
  __int64 v5;
  unsigned __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;

  v5 = as_string_c_str(a3);
  result = game_HashString(v5);
  if (result != 0) {
    v7 = *(_QWORD*)(GameData_21c99b8 + 96);
    if (v7 != 0 && *(_QWORD*)(GameData_21c99b8 + 112) != 0) {
      v9 = v7 - 1;
      if ((v7 & (v7 - 1)) != 0) {
        v10 = result;
        if (result >= v7) {
          v10 = result % v7;
        }
      }
      else {
        v10 = v9 & result;
      }
      v11 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v10);
      if (v11 != nullptr) {
        v12 = (_QWORD*)*v11;
        if (v12 != nullptr) {
          if ((v7 & v9) == 0) {
            while (1) {
              v14 = v12[1];
              if (v14 == result) {
                if (v12[2] == result) {
                  goto LABEL_26;
                }
              }
              else if ((v14 & v9) != v10) {
                return result;
              }
              v12 = (_QWORD*)*v12;
              if (v12 == nullptr) {
                return result;
              }
            }
          }
          do {
            v13 = v12[1];
            if (v13 == result) {
              if (v12[2] == result) {
              LABEL_26:
                if (v12[3] != 0) {
                  v15 = GameData_212cfb8[0];
                  result = GameRoutine_7c9660(
                      *(_QWORD*)(*GameData_212cfb8[0] + 16), a1, a2);
                  if ((result & 1) != 0) {
                    result = GameRoutine_7d5160(*(_QWORD*)(*v15 + 16), 1);
                    if (GameData_22400f8 != 0 &&
                        *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
                        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
                      *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
                    }
                  }
                }
                return result;
              }
            }
            else {
              if (v13 >= v7) {
                v13 %= v7;
              }
              if (v13 != v10) {
                return result;
              }
            }
            v12 = (_QWORD*)*v12;
          } while (v12 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 map_terrain_DeleteTrick(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v20;

  if ((StringIsEmpty_25eef0(a3) & 1) != 0) {
    v6 = GameData_212cfb8[0];
    if ((GameRoutine_7c9850(*(_QWORD*)(*GameData_212cfb8[0] + 16), a1, a2) &
         1) == 0) {
      return 0;
    }
    goto LABEL_3;
  }
  v9 = as_string_c_str(a3);
  v10 = game_HashString(v9);
  if (v10 == 0) {
    return 0;
  }
  v11 = *(_QWORD*)(GameData_21c9bd0 + 96);
  if (v11 == 0 || *(_QWORD*)(GameData_21c9bd0 + 112) == 0) {
    return 0;
  }
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v14 = v10;
    if (v10 >= v11) {
      v14 = v10 % v11;
    }
  }
  else {
    v14 = v13 & v10;
  }
  v15 = *(_QWORD**)(*(_QWORD*)(GameData_21c9bd0 + 88) + 8 * v14);
  if (v15 == nullptr) {
    return 0;
  }
  v16 = (_QWORD*)*v15;
  if (v16 == nullptr) {
    return 0;
  }
  if ((v11 & v13) == 0) {
    while (1) {
      v18 = v16[1];
      if (v18 == v10) {
        if (v16[2] == v10) {
          goto LABEL_32;
        }
      }
      else if ((v18 & v13) != v14) {
        return 0;
      }
      v16 = (_QWORD*)*v16;
      v8 = 0;
      if (v16 == nullptr) {
        return v8;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == v10) {
      break;
    }
    if (v17 >= v11) {
      v17 %= v11;
    }
    if (v17 != v14) {
      return 0;
    }
  LABEL_21:
    v16 = (_QWORD*)*v16;
    v8 = 0;
    if (v16 == nullptr) {
      return v8;
    }
  }
  if (v16[2] != v10) {
    goto LABEL_21;
  }
LABEL_32:
  if (v16[3] == 0) {
    return 0;
  }
  v6 = GameData_212cfb8[0];
  v20 = v16[3];
  if ((GameRoutine_7ca100(*GameData_212cfb8[0], a1, a2, &v20) & 1) == 0) {
    return 0;
  }
LABEL_3:
  v7 = *v6;
  v8 = 1;
  GameRoutine_7d5160(*(_QWORD*)(v7 + 16), 1);
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
  }
  return v8;
}

__int64 map_terrain_BreakTrick(int a1, int a2)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;

  v2 = GameData_212cfb8[0];
  v3 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v3 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v3 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v4 = v3[10];
    if (v4 != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(v3[6] + 8 * ((v4 + v3[9] - 1) / 0x33uLL)) +
                      80 * ((v4 + v3[9] - 1) % 0x33uLL) + 72);
      goto LABEL_9;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v5 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_9;
  }
  v5 = 0;
LABEL_9:
  v6 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v7 = a1 + 32 * a2;
  if (v7 >= 0x400) {
    v7 = 0;
  }
  v8 = *(__int16*)(v6 + 2LL * v7 + 2152);
  if (v8 < 0 || (v9 = *(_QWORD*)(v6 + 8)) == 0 ||
      (v10 = v9 + 144LL * (int)v8,
       (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10) != 1)) {
    v10 = 0;
  }
  result = game_map_anonymous_TrickEntity_TryBroken(v6, v5, v10);
  if ((result & 1) != 0) {
    result = GameRoutine_7d5160(*(_QWORD*)(*v2 + 16), 1);
    v12 = *GameData_21309c8[0];
    if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v12 + 8) == 1 &&
        (*(_BYTE*)(v12 + 9) & 1) == 0) {
      *(_DWORD*)(v12 + 12) |= 0x402u;
    }
  }
  return result;
}

__int64 map_terrain_RepairTrick(int a1, int a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v2 = *(_QWORD*)(GameData_21cd158 + 16);
  v3 = a1 + 32 * a2;
  if (v3 >= 0x400) {
    v3 = 0;
  }
  v4 = *(__int16*)(v2 + 2LL * v3 + 2152);
  if (v4 < 0 || (v5 = *(_QWORD*)(v2 + 8)) == 0 ||
      (v6 = v5 + 144LL * (int)v4,
       (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v6 + 40LL))(v6) != 1)) {
    v6 = 0;
  }
  result = game_map_anonymous_TrickEntity_TryRepair(v2, 0, v6);
  if ((result & 1) != 0) {
    result = GameRoutine_7d5160(*(_QWORD*)(GameData_21cd158 + 16), 1);
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      *(_DWORD*)(GameData_22400f8 + 12) |= 0x402u;
    }
  }
  return result;
}

__int64 map_terrain_SetTargetByRect(int a1, int a2, unsigned int a3,
                                    unsigned int a4, unsigned int a5,
                                    unsigned int a6)
{
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v12 = *GameData_212cfb8[0];
  result = GameRoutine_7cbd00(&v21, &GameData_1ae7032);
  v14 = *(_QWORD*)(v12 + 16);
  v15 = v21;
  if (v21 != 0) {
    v15 = GameData_1b41aa9[*(unsigned __int8*)(v21 + 57)];
  }
  v16 = GameData_1b41abf[v15];
  v17 = a1 + 32 * a2;
  if (v17 >= 0x400) {
    v17 = 0;
  }
  v18 = *(__int16*)(v14 + (v16 << 11) + 2LL * v17 + 104);
  if ((v18 & 0x8000000000000000LL) == 0) {
    v19 = *(_QWORD*)(v14 + 8);
    if (v19 != 0) {
      result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)(v19 + 144LL * (int)v18) + 616LL))(v19 + 144LL * (int)v18,
                                                       a3, a4, a5, a6);
      v20 = *GameData_21309c8[0];
      if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v20 + 8) == 1 &&
          (*(_BYTE*)(v20 + 9) & 1) == 0) {
        *(_DWORD*)(v20 + 12) |= 0x402u;
      }
    }
  }
  return result;
}

__int64 map_terrain_SetTargetByCircle(int a1, int a2, unsigned int a3,
                                      unsigned int a4, unsigned int a5)
{
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v10 = *GameData_212cfb8[0];
  result = GameRoutine_7cbd00(&v19, &GameData_1ae7032);
  v12 = *(_QWORD*)(v10 + 16);
  v13 = v19;
  if (v19 != 0) {
    v13 = GameData_1b41aa9[*(unsigned __int8*)(v19 + 57)];
  }
  v14 = GameData_1b41abf[v13];
  v15 = a1 + 32 * a2;
  if (v15 >= 0x400) {
    v15 = 0;
  }
  v16 = *(__int16*)(v12 + (v14 << 11) + 2LL * v15 + 104);
  if ((v16 & 0x8000000000000000LL) == 0) {
    v17 = *(_QWORD*)(v12 + 8);
    if (v17 != 0) {
      result = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)(v17 + 144LL * (int)v16) + 624LL))(v17 + 144LL * (int)v16,
                                                       a3, a4, a5);
      v18 = *GameData_21309c8[0];
      if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v18 + 8) == 1 &&
          (*(_BYTE*)(v18 + 9) & 1) == 0) {
        *(_DWORD*)(v18 + 12) |= 0x402u;
      }
    }
  }
  return result;
}

unsigned __int64 map_terrain_SetTargetByPid(int a1, int a2, __int64 a3)
{
  __int64 v6;
  unsigned __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v6 = *GameData_212cfb8[0];
  result = GameRoutine_7cbd00(&v24, &GameData_1ae7032);
  v8 = *(_QWORD*)(v6 + 16);
  v9 = v24;
  if (v24 != 0) {
    v9 = GameData_1b41aa9[*(unsigned __int8*)(v24 + 57)];
  }
  v10 = GameData_1b41abf[v9];
  v11 = a1 + 32 * a2;
  if (v11 >= 0x400) {
    v11 = 0;
  }
  v12 = *(__int16*)(v8 + (v10 << 11) + 2LL * v11 + 104);
  if ((v12 & 0x8000000000000000LL) == 0) {
    v13 = *(_QWORD*)(v8 + 8);
    if (v13 != 0) {
      v14 = as_string_c_str(a3);
      result = game_HashString(v14);
      if (result != 0) {
        v15 = *(_QWORD*)(*GameData_212c890[0] + 96);
        if (v15 != 0 && *(_QWORD*)(*GameData_212c890[0] + 112) != 0) {
          v17 = v15 - 1;
          if ((v15 & (v15 - 1)) != 0) {
            v18 = result;
            if (result >= v15) {
              v18 = result % v15;
            }
          }
          else {
            v18 = v17 & result;
          }
          v19 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v18);
          if (v19 != nullptr) {
            v20 = (_QWORD*)*v19;
            if (v20 != nullptr) {
              if ((v15 & v17) == 0) {
                while (1) {
                  v22 = v20[1];
                  if (v22 == result) {
                    if (v20[2] == result) {
                      goto LABEL_32;
                    }
                  }
                  else if ((v22 & v17) != v18) {
                    return result;
                  }
                  v20 = (_QWORD*)*v20;
                  if (v20 == nullptr) {
                    return result;
                  }
                }
              }
              do {
                v21 = v20[1];
                if (v21 == result) {
                  if (v20[2] == result) {
                  LABEL_32:
                    if (v20[3] != 0) {
                      result = (*(__int64 (**)(__int64))(
                          *(_QWORD*)(v13 + 144LL * (unsigned int)v12) + 632LL))(
                          v13 + 144LL * (unsigned int)v12);
                      v23 = *GameData_21309c8[0];
                      if (*GameData_21309c8[0] != 0 &&
                          *(_BYTE*)(v23 + 8) == 1 &&
                          (*(_BYTE*)(v23 + 9) & 1) == 0) {
                        *(_DWORD*)(v23 + 12) |= 0x402u;
                      }
                    }
                    return result;
                  }
                }
                else {
                  if (v21 >= v15) {
                    v21 %= v15;
                  }
                  if (v21 != v18) {
                    return result;
                  }
                }
                v20 = (_QWORD*)*v20;
              } while (v20 != nullptr);
            }
          }
        }
      }
    }
  }
  return result;
}

unsigned __int64 map_terrain_SetTargetBySid(int a1, int a2, __int64 a3)
{
  __int64 v6;
  unsigned __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v6 = *GameData_212cfb8[0];
  result = GameRoutine_7cbd00(&v24, &GameData_1ae7032);
  v8 = *(_QWORD*)(v6 + 16);
  v9 = v24;
  if (v24 != 0) {
    v9 = GameData_1b41aa9[*(unsigned __int8*)(v24 + 57)];
  }
  v10 = GameData_1b41abf[v9];
  v11 = a1 + 32 * a2;
  if (v11 >= 0x400) {
    v11 = 0;
  }
  v12 = *(__int16*)(v8 + (v10 << 11) + 2LL * v11 + 104);
  if ((v12 & 0x8000000000000000LL) == 0) {
    v13 = *(_QWORD*)(v8 + 8);
    if (v13 != 0) {
      v14 = as_string_c_str(a3);
      result = game_HashString(v14);
      if (result != 0) {
        v15 = *(_QWORD*)(*GameData_212c880[0] + 96);
        if (v15 != 0 && *(_QWORD*)(*GameData_212c880[0] + 112) != 0) {
          v17 = v15 - 1;
          if ((v15 & (v15 - 1)) != 0) {
            v18 = result;
            if (result >= v15) {
              v18 = result % v15;
            }
          }
          else {
            v18 = v17 & result;
          }
          v19 = *(_QWORD**)(*(_QWORD*)(*GameData_212c880[0] + 88) + 8 * v18);
          if (v19 != nullptr) {
            v20 = (_QWORD*)*v19;
            if (v20 != nullptr) {
              if ((v15 & v17) == 0) {
                while (1) {
                  v22 = v20[1];
                  if (v22 == result) {
                    if (v20[2] == result) {
                      goto LABEL_32;
                    }
                  }
                  else if ((v22 & v17) != v18) {
                    return result;
                  }
                  v20 = (_QWORD*)*v20;
                  if (v20 == nullptr) {
                    return result;
                  }
                }
              }
              do {
                v21 = v20[1];
                if (v21 == result) {
                  if (v20[2] == result) {
                  LABEL_32:
                    if (v20[3] != 0) {
                      result = (*(__int64 (**)(__int64))(
                          *(_QWORD*)(v13 + 144LL * (unsigned int)v12) + 640LL))(
                          v13 + 144LL * (unsigned int)v12);
                      v23 = *GameData_21309c8[0];
                      if (*GameData_21309c8[0] != 0 &&
                          *(_BYTE*)(v23 + 8) == 1 &&
                          (*(_BYTE*)(v23 + 9) & 1) == 0) {
                        *(_DWORD*)(v23 + 12) |= 0x402u;
                      }
                    }
                    return result;
                  }
                }
                else {
                  if (v21 >= v15) {
                    v21 %= v15;
                  }
                  if (v21 != v18) {
                    return result;
                  }
                }
                v20 = (_QWORD*)*v20;
              } while (v20 != nullptr);
            }
          }
        }
      }
    }
  }
  return result;
}

void map_terrain_UpdateTrickForContinue()
{
  __int64 v0;
  _WORD** v1;
  _WORD** v2;
  char v3;
  _WORD* v4;
  __int16 v5;

  v0 = *(_QWORD*)(GameData_21cd158 + 16);
  v1 = *(_WORD***)(v0 + 32);
  v2 = *(_WORD***)(v0 + 40);
  if (v1 != v2) {
    v3 = 0;
    do {
      v4 = *v1;
      v5 = 128;
      if (((*(__int64 (**)(_WORD*, __int16*))(*(_QWORD*)v4 + 784LL))(v4, &v5) &
           1) != 0) {
        if (((*(__int64 (**)(_WORD*))(*(_QWORD*)v4 + 480LL))(v4) & 1) != 0) {
          v4[10] |= 2u;
        }
        else {
          (*(void (**)(_WORD*))(*(_QWORD*)v4 + 416LL))(v4);
        }
        v3 = 1;
      }
      ++v1;
    } while (v1 != v2);
    if ((v3 & 1) != 0) {
      GameRoutine_7d5160(v0, 1);
    }
  }
}

#pragma GCC visibility pop
