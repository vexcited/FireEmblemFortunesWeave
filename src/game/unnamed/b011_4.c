#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 GameData_1ae634d;
extern __int64 GameData_1af9d26;
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c028;
extern __int64* GameData_212f088;
extern __int64 GameData_22127b0;
extern __int64 GameData_22127c0;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_1a09c60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a890(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
_QWORD* GameRoutine_d99f80(_QWORD* __return_ptr);
__int64 GameRoutine_d9a500(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d9d380(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_d9e110(void);
__int64 GameRoutine_d9e140(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameHr_d98e20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* i;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
  _BYTE* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD v47[3];
  char v48;
  _QWORD* v49;

  v1 = result + 160;
  v2 = result;
  v3 = 0;
  v4 = (_QWORD*)GameData_212bf68;
  v45 = result;
  v46 = result + 160;
  do {
    v5 = (_QWORD*)(v1 + 40 * v3);
    if (v5[3] != 0) {
      for (i = (_QWORD*)v5[2]; i != nullptr;
           result = GameRoutine_1a0a4e0(*v4 + v9, v10)) {
        v10 = i;
        i = (_QWORD*)*i;
        if ((v10[5] & 1) != 0) {
          v11 = v10[7];
          if (v11 != 0) {
            if (*(_QWORD*)(*v4 + 200LL) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            GameRoutine_1a0a4e0(*v4 + v12, v11);
          }
        }
        if ((v10[2] & 1) != 0) {
          v13 = v10[4];
          if (v13 != 0) {
            if (*(_QWORD*)(*v4 + 200LL) != 0) {
              v14 = 128;
            }
            else {
              v14 = 56;
            }
            GameRoutine_1a0a4e0(*v4 + v14, v13);
          }
        }
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
      }
      v7 = v5[1];
      v5[2] = 0;
      if (v7 != 0) {
        if (v7 >= 8) {
          v8 = 0;
          do {
            *(_QWORD*)(*v5 + 8 * v8) = 0;
            *(_QWORD*)(*v5 + 8 * v8 + 8) = 0;
            *(_QWORD*)(*v5 + 8 * v8 + 16) = 0;
            *(_QWORD*)(*v5 + 8 * v8 + 24) = 0;
            *(_QWORD*)(*v5 + 8 * v8 + 32) = 0;
            *(_QWORD*)(*v5 + 8 * v8 + 40) = 0;
            *(_QWORD*)(*v5 + 8 * v8 + 48) = 0;
            v15 = *v5 + 8 * v8;
            v8 += 8;
            *(_QWORD*)(v15 + 56) = 0;
          } while ((v7 & 0xFFFFFFFFFFFFFFF8LL) != v8);
        }
        else {
          v8 = 0;
        }
        v16 = v7 & 7;
        if (v16 != 0) {
          v17 = 8 * v8;
          do {
            --v16;
            *(_QWORD*)(*v5 + v17) = 0;
            v17 += 8;
          } while (v16 != 0);
        }
      }
      v5[3] = 0;
    }
    if ((int)v3 <= 3) {
      switch ((_DWORD)v3) {
      case 1:
        LOBYTE(v47[2]) = 0;
        LOBYTE(v47[0]) = 30;
        *(_QWORD*)((char*)v47 + 1) = 0x83E3A383E3AD82E3LL;
        v47[1] = 0xB28CE9BB99E7A983LL;
        GameRoutine_d9d380(v2, 1, v47);
        if ((v47[0] & 1) != 0 && v47[2] != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v38 = 128;
          }
          else {
            v38 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v38, v47[2]);
        }
        v39 = GameRoutine_651b90(*v4, 26, 16, 0);
        *(_BYTE*)(v39 + 23) = 0;
        v47[0] = 27;
        v47[1] = 23;
        v47[2] = v39;
        *(_QWORD*)v39 = 0x83E3A383E3AD82E3LL;
        *(_QWORD*)(v39 + 8) = 0x289CBDE4958BE5A9LL;
        *(_QWORD*)(v39 + 15) = 0x29B982E7A08BE628LL;
        GameRoutine_d9d380(v2, 1, v47);
        if ((v47[0] & 1) != 0 && v47[2] != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v40 = 128;
          }
          else {
            v40 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v40, v47[2]);
        }
        LOBYTE(v47[0]) = 40;
        v41 = v2;
        v42 = 1;
        strcpy((char*)&v47[2] + 1, "Dng)");
        *(_QWORD*)((char*)v47 + 1) = 0x83E3A383E3AD82E3LL;
        *(_QWORD*)((char*)&v47[1] + 1) = 0x289CBDE4958BE5A9LL;
        break;
      case 2:
        v44 = GameRoutine_651b90(*v4, 56, 16, 0);
        *(_BYTE*)(v44 + 51) = 0;
        v47[0] = 57;
        v42 = 2;
        v47[1] = 51;
        v47[2] = v44;
        *(_DWORD*)(v44 + 47) = -1984106584;
        *(_QWORD*)(v44 + 16) = 0x9D88E588BCEFB29BLL;
        *(_QWORD*)(v44 + 24) = 0x82E3968CE59F9CE6LL;
        *(_QWORD*)(v44 + 32) = 0xE3AA83E3AF82E3B9LL;
        *(_QWORD*)(v44 + 40) = 0xA883E98883E39783LL;
        *(_QWORD*)v44 = 0x83E39983E3A482E3LL;
        *(_QWORD*)(v44 + 8) = 0xE584AFE78883E3B3LL;
        v41 = v2;
        break;
      case 3:
        v20 = GameRoutine_651b90(*v4, 56, 16, 0);
        *(_BYTE*)(v20 + 54) = 0;
        v47[0] = 57;
        v19 = 3;
        v47[1] = 54;
        v47[2] = v20;
        *(_QWORD*)(v20 + 32) = 0xE3AF82E3B982E388LL;
        *(_QWORD*)(v20 + 40) = 0x8883E39783E3AA83LL;
        *(_QWORD*)(v20 + 46) = 0x89BCEFA883E98883LL;
        *(_QWORD*)v20 = 0x83E39983E3A482E3LL;
        *(_QWORD*)(v20 + 8) = 0xE584AFE78883E3B3LL;
        *(_QWORD*)(v20 + 16) = 0xA482E388BCEFB29BLL;
        *(_QWORD*)(v20 + 24) = 0x83E3B383E39983E3LL;
        v18 = v2;
        goto LABEL_40;
      default:
        goto LABEL_3;
      }
    }
    else {
      if ((int)v3 > 5) {
        if ((_DWORD)v3 != 6) {
          if ((_DWORD)v3 != 7) {
            goto LABEL_3;
          }
          v24 = GameData_22127c0;
          v25 = *(_QWORD*)(GameData_22127c0 + 64);
          if ((int)((unsigned __int64)(*(_QWORD*)(GameData_22127c0 + 72) -
                                       v25) >>
                    3) < 1) {
            goto LABEL_3;
          }
          v26 = 0;
          while (2) {
            v27 = *(_QWORD*)(v25 + 8 * v26);
            v28 = *(_BYTE**)(v27 + 40);
            if (v28 != nullptr && *v28 != 0) {
              v29 = *(_BYTE**)(v27 + 32);
              if (v29 != nullptr && *v29 != 0) {
                v30 = GameRoutine_1a09c70(v28);
                if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
                  GameRoutine_60a1d0(v30);
                }
                v31 = v30;
                if (v30 >= 0x17) {
                  if ((v30 | 7) == 0x17) {
                    v33 = 26;
                  }
                  else {
                    v33 = (v30 | 7) + 1;
                  }
                  v34 = GameRoutine_651b90(*v4, v33, 16, 0);
                  v35 = v33 | 1;
                  v2 = v45;
                  v32 = (char*)v34;
                  v47[1] = v31;
                  v47[2] = v34;
                  v47[0] = v35;
                }
                else {
                  v32 = (char*)v47 + 1;
                  LOBYTE(v47[0]) = 2 * v30;
                  if (v30 == 0) {
                    goto LABEL_64;
                  }
                }
                GameRoutine_1a0b940(v32, v28, v31);
              LABEL_64:
                v32[v31] = 0;
                v49 = v47;
                v36 = GameRoutine_d9e140(v5, v47, GameData_212c028, &v49, &v48);
                result = GameRoutine_60a020(v36 + 40, v29);
                if ((v47[0] & 1) != 0 && v47[2] != 0) {
                  v37 = 128;
                  if (*(_QWORD*)(*v4 + 200LL) == 0) {
                    v37 = 56;
                  }
                  result = GameRoutine_1a0a4e0(*v4 + v37, v47[2]);
                }
                v1 = v46;
                v24 = *GameData_212f088;
              }
            }
            v25 = *(_QWORD*)(v24 + 64);
            if (++v26 >=
                (int)((unsigned __int64)(*(_QWORD*)(v24 + 72) - v25) >> 3)) {
              goto LABEL_3;
            }
            continue;
          }
        }
        BYTE5(v47[1]) = 0;
        v41 = v2;
        v42 = 6;
        LOBYTE(v47[0]) = 24;
        *(_DWORD*)((char*)&v47[1] + 1) = -1229200223;
        v43 = &GameData_1af9d26;
      }
      else {
        if ((_DWORD)v3 != 4) {
          if ((_DWORD)v3 != 5) {
            goto LABEL_3;
          }
          BYTE3(v47[2]) = 0;
          v18 = v2;
          LOBYTE(v47[0]) = 36;
          v19 = 5;
          *(_WORD*)((char*)&v47[2] + 1) = -30589;
          *(_QWORD*)((char*)v47 + 1) = 0x82E39683E3AA82E3LL;
          *(_QWORD*)((char*)&v47[1] + 1) = 0xE3AF82E3A782E3B8LL;
        LABEL_40:
          result = GameRoutine_d9d380(v18, v19, v47);
          if ((v47[0] & 1) != 0) {
            v21 = v47[2];
            if (v47[2] != 0) {
              v22 = *v4;
              if (*(_QWORD*)(*v4 + 200LL) != 0) {
                v23 = 128;
              }
              else {
                v23 = 56;
              }
            LABEL_2:
              result = GameRoutine_1a0a4e0(v22 + v23, v21);
              goto LABEL_3;
            }
          }
          goto LABEL_3;
        }
        BYTE5(v47[1]) = 0;
        v41 = v2;
        v42 = 4;
        LOBYTE(v47[0]) = 24;
        *(_DWORD*)((char*)&v47[1] + 1) = -1081941060;
        v43 = &GameData_1ae634d;
      }
      *(_QWORD*)((char*)v47 + 1) = *v43;
    }
    result = GameRoutine_d9d380(v41, v42, v47);
    if ((v47[0] & 1) != 0) {
      v21 = v47[2];
      if (v47[2] != 0) {
        v22 = *v4;
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        goto LABEL_2;
      }
    }
  LABEL_3:
    ++v3;
  } while (v3 != 8);
  return result;
}

_QWORD* GameHr_d99d20(__int64 a1)
{
  _QWORD* result;
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  char* v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  unsigned __int8* v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int8* v29;
  unsigned __int8* v30;

  result = GameRoutine_d99f80(&v29);
  v3 = v29;
  v4 = v30;
  if (v29 != v30) {
    do {
      v5 = *v3;
      v6 = (v5 & 1) == 0;
      v7 = v5 >> 1;
      if (v6) {
        v8 = v7;
      }
      else {
        v8 = *((_QWORD*)v3 + 1);
      }
      if (v6) {
        v9 = v3 + 1;
      }
      else {
        v9 = *((unsigned __int8**)v3 + 2);
      }
      v10 = v8 + 10;
      if (v8 + 10 >= 0xFFFFFFFFFFFFFFF7LL) {
        GameRoutine_60a1d0(result);
      }
      if (v10 > 0x16) {
        if ((v10 | 7) == 0x17) {
          v13 = 26;
        }
        else {
          v13 = (v10 | 7) + 1;
        }
        v12 = GameRoutine_651b90(GameData_2265ee0, v13, 16, 0);
        v27 = v8 + 10;
        v28 = (char*)v12;
        v26 = v13 | 1;
        v11 = v13 | 1;
      }
      else {
        v11 = 2 * v10;
        v12 = 0;
        v27 = 0;
        v28 = nullptr;
        v26 = (unsigned __int8)(2 * v10);
      }
      v14 = (v11 & 1) == 0;
      if ((v11 & 1) != 0) {
        v15 = (char*)v12;
      }
      else {
        v15 = (char*)&v26 + 1;
      }
      *(_QWORD*)v15 = *(_QWORD*)"Initialize";
      *((_WORD*)v15 + 4) = 25978;
      if (v14) {
        v16 = (char*)&v27 + 3;
      }
      else {
        v16 = (char*)(v12 + 10);
      }
      if (v8 != 0) {
        GameRoutine_1a0b940(v16, v9, v8);
      }
      v16[v8] = 0;
      if ((v26 & 1) != 0) {
        v17 = v28;
      }
      else {
        v17 = (char*)&v26 + 1;
      }
      if ((v26 & 1) != 0) {
        v18 = v27;
      }
      else {
        v18 = (unsigned __int64)(unsigned __int8)v26 >> 1;
      }
      result = (_QWORD*)GameRoutine_d9a500(a1, v17, v18);
      if ((v26 & 1) != 0 && v28 != nullptr) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v19 = 56;
        }
        result =
            (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v19, v28);
      }
      v3 += 24;
    } while (v3 != v4);
    v3 = v29;
  }
  if (v3 != nullptr) {
    v20 = v30;
    if (v3 == v30) {
      goto LABEL_48;
    }
    v21 = v30;
    do {
      v22 = *(v21 - 24);
      v21 -= 24;
      if ((v22 & 1) != 0) {
        v23 = *((_QWORD*)v20 - 1);
        if (v23 != 0) {
          if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          result = (_QWORD*)GameRoutine_1a0a4e0(GameData_2265ee0 + v24, v23);
        }
      }
      v20 = v21;
    } while (v21 != v3);
    v30 = v3;
    v3 = v29;
    if (v29 != nullptr) {
    LABEL_48:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v25 = 56;
      }
      return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v25, v3);
    }
  }
  return result;
}

unsigned __int64 GameHr_d9d380(__int64 a1, unsigned int a2, __int64 a3)
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
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  void* v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  _BYTE* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  void* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[2];
  __int64 v35;
  char v36;
  _QWORD* v37;

  if ((*(_BYTE*)a3 & 1) != 0) {
    v5 = *(_QWORD*)(a3 + 16);
  }
  else {
    v5 = a3 + 1;
  }
  result = GameRoutine_7a86e0(v5);
  if (result != 0) {
    v7 = *(_QWORD*)(GameData_22127b0 + 96);
    if (v7 != 0 && *(_QWORD*)(GameData_22127b0 + 112) != 0) {
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
      v11 = *(_QWORD**)(*(_QWORD*)(GameData_22127b0 + 88) + 8 * v10);
      if (v11 != nullptr) {
        v12 = (_QWORD*)*v11;
        if (v12 != nullptr) {
          if ((v7 & v9) == 0) {
            while (1) {
              v14 = v12[1];
              if (v14 == result) {
                if (v12[2] == result) {
                  goto LABEL_29;
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
          while (1) {
            v13 = v12[1];
            if (v13 == result) {
              break;
            }
            if (v13 >= v7) {
              v13 %= v7;
            }
            if (v13 != v10) {
              return result;
            }
          LABEL_18:
            v12 = (_QWORD*)*v12;
            if (v12 == nullptr) {
              return result;
            }
          }
          if (v12[2] != result) {
            goto LABEL_18;
          }
        LABEL_29:
          v15 = v12[3];
          if (v15 != 0) {
            v16 = *(__int64**)(v15 + 40);
            v17 = *v16;
            v18 = v16[1] - *v16;
            if ((int)((unsigned __int64)v18 >> 3) >= 1) {
              v19 = 0;
              v20 = GameData_212c028;
              v21 = a1 + 40LL * a2;
              while (1) {
                if (v19 >= v18 >> 3) {
                  GameRoutine_d9e110();
                }
                v22 = *(_QWORD*)(v17 + 8 * v19);
                if (v22 == 0) {
                  goto LABEL_33;
                }
                v23 = *(_BYTE**)(v22 + 40);
                if (v23 == nullptr) {
                  goto LABEL_33;
                }
                if (*v23 == 0) {
                  goto LABEL_33;
                }
                v24 = *(_BYTE**)(v22 + 32);
                if (v24 == nullptr || *v24 == 0) {
                  goto LABEL_33;
                }
                v25 = GameRoutine_1a09c70(v23);
                if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
                  GameRoutine_60a1d0(v25);
                }
                v26 = v25;
                if (v25 >= 0x17) {
                  break;
                }
                v27 = (char*)v34 + 1;
                LOBYTE(v34[0]) = 2 * v25;
                if (v25 != 0) {
                  goto LABEL_48;
                }
              LABEL_49:
                v27[v26] = 0;
                v37 = v34;
                v32 = GameRoutine_d9e140(v21 + 160, v34, v20, &v37, &v36);
                result = GameRoutine_60a020(v32 + 40, v24);
                if ((v34[0] & 1) != 0 && v35 != 0) {
                  v33 = 128;
                  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                    v33 = 56;
                  }
                  result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v33,
                                               v35);
                }
                v16 = *(__int64**)(v15 + 40);
                v17 = *v16;
              LABEL_33:
                ++v19;
                v18 = v16[1] - v17;
                if ((__int64)v19 >= (int)((unsigned __int64)v18 >> 3)) {
                  return result;
                }
              }
              v28 = v20;
              if ((v25 | 7) == 0x17) {
                v29 = 26;
              }
              else {
                v29 = (v25 | 7) + 1;
              }
              v30 = GameRoutine_651b90(GameData_2265ee0, v29, 16, 0);
              v31 = v29 | 1;
              v27 = (char*)v30;
              v34[1] = v26;
              v35 = v30;
              v20 = v28;
              v34[0] = v31;
            LABEL_48:
              GameRoutine_1a0b940(v27, v23, v26);
              goto LABEL_49;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_db1980(__int64 a1, __int64 a2, _DWORD* a3, unsigned __int8* a4,
                      __int64 a5)
{
  __int64 v5;
  unsigned int v7;
  __int64 v8;
  _DWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  _DWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  int v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  char* v25;
  char* v26;
  int v27;
  unsigned int v28;
  __int64 v29;
  _BYTE* v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;

  v5 = a1;
  if (a5 != 0) {
    if (a2 >= a5) {
      v7 = *a4;
      v8 = a1 + a2;
      v10 = a3;
      v11 = a2;
      v12 = a2;
      while (1) {
        result = GameRoutine_1a09c60(a1, v7, v12 - a5 + 1);
        if (result == 0) {
          return result;
        }
        v14 = result;
        result = GameRoutine_1a09cf0(result, a4, a5);
        if ((_DWORD)result == 0) {
          if (v14 != v8) {
            v15 = v14 - v5;
            a2 = v11;
            a3 = v10;
            if (v14 - v5 != -1) {
              goto LABEL_9;
            }
          }
          return result;
        }
        a1 = v14 + 1;
        v12 = v8 - (v14 + 1);
        if (v12 < a5) {
          return 0;
        }
      }
    }
    return 0;
  }
  v15 = 0;
LABEL_9:
  if (v15 != a2 - 1) {
    return 0;
  }
  v16 = a3;
  v17 = GameRoutine_1a09c70(v5);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v17);
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = (char*)GameRoutine_651b90(GameData_2265ee0, v20, 16, 0);
    v32 = v18;
    v33 = v19;
    v31 = v20 | 1;
  }
  else {
    LOBYTE(v31) = 2 * v17;
    v19 = (char*)&v31 + 1;
    if (v17 == 0) {
      goto LABEL_21;
    }
  }
  GameRoutine_1a0b940(v19, v5, v18);
LABEL_21:
  v19[v18] = 0;
  v21 = v31 & 1;
  v22 = (unsigned __int64)(unsigned __int8)v31 >> 1;
  if (v21 != 0) {
    v22 = v32;
  }
  if (v22 < 2) {
    goto LABEL_34;
  }
  v23 = v22 - 1;
  if (v21 != 0) {
    v24 = v33;
    v32 = v23;
  }
  else {
    v24 = (char*)&v31 + 1;
    LOBYTE(v31) = 2 * v23;
  }
  v24[v23] = 0;
  v25 = v33;
  v21 = v31 & 1;
  v26 = (v31 & 1) != 0 ? v33 : (char*)&v31 + 1;
  v27 = GameRoutine_1a0a890(v26, &v30, 10);
  if (*v30 != 0) {
  LABEL_34:
    result = 0;
    if (v21 == 0) {
      return result;
    }
    v25 = v33;
  }
  else {
    *v16 = v27;
    result = 1;
    if (v21 == 0) {
      return result;
    }
  }
  if (v25 != nullptr) {
    v28 = result;
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v29 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v29, v25);
    return v28;
  }
  return result;
}

#pragma GCC visibility pop
