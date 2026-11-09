#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_80a5b0(_QWORD, _QWORD);
__int64 GameRoutine_989ea0(_QWORD, _QWORD);
__int64 GameRoutine_a7d640(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dbc1e0(_QWORD, _QWORD);
__int64 GameRoutine_dbc2c0(_QWORD, _QWORD);
__int64 GameRoutine_dfc1e0(_QWORD);
__int64 GameRoutine_dfcc60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dfcd80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dfd100(_QWORD, _QWORD);
__int64 GameRoutine_e1be10(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a8a12f;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_21f3d00;
__int64 ObjectControllerDone_Unknown6(__int64 a1);
__int64 ObjectControllerDone_Unknown2(__int64 result);
__int64 ObjectControllerDone_ec04c0(__int64 a1);
__int64 ObjectControllerDone_ec05a0(__int64 a1);

__int64 ObjectControllerDone_Unknown6(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  int v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)GameData_212c6a0[0];
  v3 = GameRoutine_dbc1e0(*(_QWORD*)GameData_212c6a0[0],
                          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 72LL));
  v4 = *(_QWORD**)(a1 + 8);
  v5 = *(_DWORD*)(v3 + 12);
  v6 = v4[100];
  if (v6 != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6) & 1) != 0) {
    result = 1;
  LABEL_7:
    if (v5 != 0) {
      if ((result & 1) != 0) {
        return result;
      }
      goto LABEL_13;
    }
    if ((result & 1) != 0) {
      return result;
    }
    goto LABEL_16;
  }
  v8 = v4[103];
  v9 = v4[104];
  if (v8 != v9) {
    do {
      result = GameRoutine_e1be10(GameData_21f3d00, v8);
      if ((result & 1) != 0) {
        break;
      }
      v8 += 24;
    } while (v8 != v9);
    goto LABEL_7;
  }
  if (v5 != 0) {
  LABEL_13:
    *(_DWORD*)(GameRoutine_dbc2c0(*v2, *(_QWORD*)(a1 + 8)) + 12) = 1;
    GameRoutine_dfcd80(*(_QWORD*)(a1 + 8), "Done", 4);
    result = GameRoutine_dfc1e0(*(_QWORD*)(a1 + 8));
    if (result != 0) {
      result = GameRoutine_a7d640(result, &GameData_1a8a12f, 3, 0);
    }
    *(_BYTE*)(a1 + 17) = 1;
    return result;
  }

LABEL_16:
  *(_DWORD*)(GameRoutine_dbc2c0(*v2, *(_QWORD*)(a1 + 8)) + 12) = 0;
  GameRoutine_dfcd80(*(_QWORD*)(a1 + 8), "Idle", 4);
  result = GameRoutine_dfc1e0(*(_QWORD*)(a1 + 8));
  if (result != 0) {
    result = GameRoutine_a7d640(result, &GameData_1a8a12f, 3, 1);
  }
  *(_BYTE*)(a1 + 17) = 0;
  return result;
}

__int64 ObjectControllerDone_Unknown2(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  if ((*(_BYTE*)(result + 17) & 1) == 0) {
    v1 = result;
    v2 = (_QWORD*)GameData_212c6a0[0];
    result = GameRoutine_dbc1e0(*(_QWORD*)GameData_212c6a0[0],
                                *(_QWORD*)(*(_QWORD*)(result + 8) + 72LL));
    if (*(_DWORD*)(result + 12) == 1) {
      result = *(_QWORD*)(v1 + 8);
      v4 = *(_QWORD*)(result + 784);
      if ((*(_BYTE*)(result + 776) & 1) == 0) {
        v4 = *(_BYTE*)(result + 776) >> 1;
      }
      if (v4 == 4) {
        v5 = (*(_BYTE*)(result + 776) & 1) != 0 ? *(_DWORD**)(result + 792)
                                                : (_DWORD*)(result + 777);
        if (*v5 == 1701736260) {
          v6 = GameRoutine_dfd100(result, v3);
          if ((v6 & 1) != 0 ||
              ((result = GameRoutine_80a5b0(v6, v7)) & 1) != 0) {
            v8 = *(_QWORD**)(v1 + 8);
            result = v8[100];
            if (result == 0 || ((result = (*(__int64 (**)(__int64))(
                                     *(_QWORD*)result + 24LL))(result)) &
                                1) == 0) {
              v9 = v8[103];
              v10 = v8[104];
              if (v9 == v10) {
              LABEL_18:
                if ((*(_BYTE*)(v1 + 17) & 1) == 0) {
                  *(_DWORD*)(GameRoutine_dbc2c0(*v2, *(_QWORD*)(v1 + 8)) + 12) =
                      1;
                  GameRoutine_dfcd80(*(_QWORD*)(v1 + 8), "Done", 4);
                  result = GameRoutine_dfc1e0(*(_QWORD*)(v1 + 8));
                  if (result != 0) {
                    result =
                        GameRoutine_a7d640(result, &GameData_1a8a12f, 3, 0);
                  }
                  *(_BYTE*)(v1 + 17) = 1;
                }
              }
              else {
                while (1) {
                  result = GameRoutine_e1be10(GameData_21f3d00, v9);
                  if ((result & 1) != 0) {
                    break;
                  }
                  v9 += 24;
                  if (v9 == v10) {
                    goto LABEL_18;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 ObjectControllerDone_ec04c0(__int64 a1)
{
  _QWORD* v1;
  __int64 result;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD**)(a1 + 8);
  result = v1[100];
  if (result == 0 ||
      ((result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result)) &
       1) == 0) {
    v4 = v1[103];
    v5 = v1[104];
    if (v4 == v5) {
    LABEL_6:
      if (*(_BYTE*)(a1 + 17) != 0) {
        *(_DWORD*)(GameRoutine_dbc2c0(*(_QWORD*)GameData_212c6a0[0],
                                      *(_QWORD*)(a1 + 8)) +
                   12) = 0;
        GameRoutine_dfcd80(*(_QWORD*)(a1 + 8), "Idle", 4);
        result = GameRoutine_dfc1e0(*(_QWORD*)(a1 + 8));
        if (result != 0) {
          result = GameRoutine_a7d640(result, &GameData_1a8a12f, 3, 1);
        }
        *(_BYTE*)(a1 + 17) = 0;
      }
    }
    else {
      while (1) {
        result = GameRoutine_e1be10(GameData_21f3d00, v4);
        if ((result & 1) != 0) {
          break;
        }
        v4 += 24;
        if (v4 == v5) {
          goto LABEL_6;
        }
      }
    }
  }
  return result;
}

__int64 ObjectControllerDone_ec05a0(__int64 a1)
{
  _QWORD* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = (_QWORD*)GameData_212c6a0[0];
  result = GameRoutine_dbc1e0(*(_QWORD*)GameData_212c6a0[0],
                              *(_QWORD*)(*(_QWORD*)(a1 + 8) + 72LL));
  if (*(_DWORD*)(result + 12) != 1) {
    v4 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)(v4 + 816) != 0) {
      v6 = *(_QWORD*)(*(_QWORD*)(v4 + 800) + 8LL);
      v5 = *(_QWORD*)(*(_QWORD*)(v4 + 800) + 16LL);
      if (v5 != v6) {
        while (*(_DWORD*)(*(_QWORD*)(v6 + 8) + 284LL) != 2) {
          v6 += 32;
          if (v6 == v5) {
            goto LABEL_8;
          }
        }
        GameRoutine_989ea0(*(_QWORD*)(v4 + 816), 1);
        v4 = *(_QWORD*)(a1 + 8);
      }
    }
  LABEL_8:
    GameRoutine_dfcc60(v4, "Done", 4);
    result = GameRoutine_dbc2c0(*v2, *(_QWORD*)(a1 + 8));
    *(_DWORD*)(result + 12) = 1;
  }
  return result;
}

#pragma GCC visibility pop
