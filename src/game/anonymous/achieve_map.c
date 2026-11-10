#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_682fb0(_QWORD);
__int64 GameRoutine_70cdd0(_QWORD);
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, unsigned int);
__int64 GameRoutine_9b2000(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_util_Format(const char*, ...);
extern _UNKNOWN GameData_1a9cb6f;
extern _UNKNOWN* GameData_1f92d50;
extern _UNKNOWN* GameData_1f92dd0;
extern __int64 (*GameData_1fb3608[])();
extern __int64 (*GameData_1fb3678[])();
extern __int64 GameData_21c6980;
extern __int64 GameData_21c9868;
extern __int64 GameData_21c9870;
extern __int64* GameData_212c650[5];
extern char GameData_1a857f2[];
extern char GameData_1a9f09e;
__int64 game_anonymous_AchieveMap_Build_closure_Invoke_9b2a00(__int64 a1);
__int64 game_anonymous_AchieveMap_Build_closure_Invoke_9b2db0(__int64 a1,
                                                              char* a2);
__int64
game_anonymous_AchieveMap_Build_closure_Invoke_9b2f20(__int64 result,
                                                      unsigned __int8* a2);
__int64
game_anonymous_AchieveMap_GetMasteryCount_closure_Invoke(__int64 result,
                                                         unsigned __int8* a2);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");

__int64 game_anonymous_AchieveMap_Build_closure_Invoke_9b2a00(__int64 a1)
{
  _QWORD* v1;
  unsigned __int64** v2;
  __int64 v3;
  unsigned int v4;
  __int64* v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64*** v21;
  __int64** v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v28[2];

  v1 = *(_QWORD**)(a1 + 8);
  v28[1] = (unsigned __int64)&GameData_1a9cb6f;
  v28[0] = game_HashString(&GameData_1a9cb6f);
  v2 = (unsigned __int64**)GameData_21c9868;
  v3 = GameData_21c9870;
  if (GameData_21c9868 == GameData_21c9870) {
    v4 = 0;
  }
  else {
    v4 = 0;
    v5 = GameData_212c650[0];
    do {
      if (*v2 == nullptr) {
        goto LABEL_28;
      }
      v6 = v1[872];
      if (v6 == 0 || v1[874] == 0) {
        goto LABEL_28;
      }
      v8 = **v2;
      v9 = v6 - 1;
      if ((v6 & (v6 - 1)) != 0) {
        v10 = **v2;
        if (v8 >= v6) {
          v10 = v8 % v6;
        }
      }
      else {
        v10 = v9 & v8;
      }
      v11 = *(_QWORD**)(v1[871] + 8 * v10);
      if (v11 != nullptr && (v12 = (_QWORD*)*v11) != nullptr) {
        if ((v6 & v9) == 0) {
          while (1) {
            v15 = v12[1];
            if (v8 == v15) {
              if (v12[2] == v8) {
                goto LABEL_59;
              }
            }
            else if ((v15 & v9) != v10) {
              goto LABEL_28;
            }
            v12 = (_QWORD*)*v12;
            v14 = v5;
            if (v12 == nullptr) {
              goto LABEL_31;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v8 == v13) {
            if (v12[2] == v8) {
            LABEL_59:
              v16 = v12[3];
              if (v16 == 0) {
                goto LABEL_3;
              }
              goto LABEL_32;
            }
          }
          else {
            if (v13 >= v6) {
              v13 %= v6;
            }
            if (v13 != v10) {
              goto LABEL_28;
            }
          }
          v12 = (_QWORD*)*v12;
        } while (v12 != nullptr);
        v14 = v5;
      LABEL_31:
        v16 = *v14;
        if (*v14 == 0) {
          goto LABEL_3;
        }
      }
      else {
      LABEL_28:
        v16 = *v5;
        if (*v5 == 0) {
          goto LABEL_3;
        }
      }
    LABEL_32:
      v17 = v1[22];
      if (v17 != 0 && v1[24] != 0) {
        v19 = v17 - 1;
        if ((v17 & (v17 - 1)) != 0) {
          v20 = v16;
          if (v16 >= v17) {
            v20 = v16 % v17;
          }
        }
        else {
          v20 = v19 & v16;
        }
        v21 = *(__int64****)(v1[21] + 8 * v20);
        if (v21 != nullptr) {
          v22 = *v21;
          if (v22 != nullptr) {
            if ((v17 & v19) == 0) {
              while (1) {
                v24 = v22[1];
                if ((__int64*)v16 == v24) {
                  if (v22[2] == (__int64*)v16) {
                    goto LABEL_56;
                  }
                }
                else if (((unsigned __int64)v24 & v19) != v20) {
                  goto LABEL_3;
                }
                v22 = (__int64**)*v22;
                if (v22 == nullptr) {
                  goto LABEL_3;
                }
              }
            }
            do {
              v23 = (unsigned __int64)v22[1];
              if (v16 == v23) {
                if (v22[2] == (__int64*)v16) {
                LABEL_56:
                  v25 = *((unsigned int*)v22 + 6);
                  if ((v25 & 0x80000000) == 0) {
                    v26 = v1[18];
                    if (v26 != 0) {
                      v4 += GameRoutine_682fb0(v26 + (v25 << 8));
                    }
                  }
                  break;
                }
              }
              else {
                if (v23 >= v17) {
                  v23 %= v17;
                }
                if (v23 != v20) {
                  break;
                }
              }
              v22 = (__int64**)*v22;
            } while (v22 != nullptr);
          }
        }
      }
    LABEL_3:
      ++v2;
    } while (v2 != (unsigned __int64**)v3);
  }
  return GameRoutine_9b11a0(v1, v28, v4);
}

__int64 game_anonymous_AchieveMap_Build_closure_Invoke_9b2db0(__int64 a1,
                                                              char* a2)
{
  char v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;
  char v8;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v7 = v6;
  v8 = v2;
  v6[0] = GameData_1fb3608;
  v6[1] = v3;
  v6[2] = &v8;
  GameRoutine_70cdd0(v6);
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

__int64

game_anonymous_AchieveMap_Build_closure_Invoke_9b2f20(__int64 result,
                                                      unsigned __int8* a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  v2 = *(_QWORD*)(result + 8);
  v3 = **(unsigned __int8**)(result + 16);
  v4 = v2 + 520LL * **(unsigned __int8**)(result + 16) + 40LL * *a2 + 208;
  if (v3 > 0xC || ((1 << v3) & 0x1AA0) == 0) {
    *(_QWORD*)v4 = 0;
    *(_QWORD*)(v4 + 8) = &GameData_1a9f09e;
    if ((*(_BYTE*)(v4 + 16) & 1) != 0) {
      **(_BYTE**)(v4 + 32) = 0;
      *(_QWORD*)(v4 + 24) = 0;
    }
    else {
      *(_WORD*)(v4 + 16) = 0;
    }
  }
  else {
    v6 = result;
    v7 = game_util_Format(
        GameData_1a857f2,
        *(&GameData_1f92dd0 + **(unsigned __int8**)(result + 16)),
        *(&GameData_1f92d50 + *a2));
    GameRoutine_60a020(v4 + 16, v7);
    if ((*(_BYTE*)(v4 + 16) & 1) != 0) {
      v9 = *(_QWORD*)(v4 + 32);
    }
    else {
      v9 = v4 + 17;
    }
    *(_QWORD*)v4 = game_HashString_alt1(v9, v8);
    *(_QWORD*)(v4 + 8) = v9;
    v10 = **(unsigned __int8**)(v6 + 16);
    v12[0] = GameData_1fb3678;
    v12[1] = v2;
    v13 = v12;
    v12[2] = v10;
    GameRoutine_9b2000(v2, v4, v12);
    result = (__int64)v13;
    if (v13 == v12) {
      v11 = 32;
    }
    else {
      if (v13 == nullptr) {
        return result;
      }
      v11 = 40;
    }
    return (*(__int64 (**)(__int64))(*v13 + v11))((__int64)v13);
  }
  return result;
}

__int64

game_anonymous_AchieveMap_GetMasteryCount_closure_Invoke(__int64 result,
                                                         unsigned __int8* a2)
{
  _QWORD* v2;
  bool v3;
  __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64*** v10;
  __int64** v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(_QWORD**)(result + 8);
  v3 = **(unsigned __int8**)(result + 16) >= 0xDuLL || *a2 >= 0xDuLL;
  v4 = &v2[65 * **(unsigned __int8**)(result + 16) + 26 + 5 * *a2];
  if (v3) {
    v4 = &GameData_21c6980;
  }
  v5 = *v4;
  if (v5 != 0) {
    v6 = v2[22];
    if (v6 != 0 && v2[24] != 0) {
      v8 = v6 - 1;
      if ((v6 & (v6 - 1)) != 0) {
        v9 = v5;
        if (v5 >= v6) {
          v9 = v5 % v6;
        }
      }
      else {
        v9 = v8 & v5;
      }
      v10 = *(__int64****)(v2[21] + 8 * v9);
      if (v10 != nullptr) {
        v11 = *v10;
        if (v11 != nullptr) {
          if ((v6 & v8) == 0) {
            while (1) {
              v13 = v11[1];
              if ((__int64*)v5 == v13) {
                if (v11[2] == (__int64*)v5) {
                  goto LABEL_32;
                }
              }
              else if (((unsigned __int64)v13 & v8) != v9) {
                return result;
              }
              v11 = (__int64**)*v11;
              if (v11 == nullptr) {
                return result;
              }
            }
          }
          do {
            v12 = (unsigned __int64)v11[1];
            if (v5 == v12) {
              if (v11[2] == (__int64*)v5) {
              LABEL_32:
                v14 = *((unsigned int*)v11 + 6);
                if ((v14 & 0x80000000) == 0) {
                  v15 = v2[18];
                  if (v15 != 0) {
                    v16 = result;
                    result = GameRoutine_682fb0(v15 + (v14 << 8));
                    **(_DWORD**)(v16 + 24) += result;
                  }
                }
                return result;
              }
            }
            else {
              if (v12 >= v6) {
                v12 %= v6;
              }
              if (v12 != v9) {
                return result;
              }
            }
            v11 = (__int64**)*v11;
          } while (v11 != nullptr);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
