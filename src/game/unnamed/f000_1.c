#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern _UNKNOWN GameData_1a9c738;
extern _UNKNOWN GameData_1a9c92c;
extern _UNKNOWN GameData_1ab7bc4;
extern _UNKNOWN GameData_1ad29ae;
extern __int64 (*GameData_1fa2230[])();
extern __int64 (*GameData_1fa2518[])();
extern __int64 (*GameData_1ff0600[])();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c5c0[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212cf60;
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d458[7];
extern __int64 GameData_212dc38[7];
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ec50[3];
extern char GameData_21c67a8;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern int GameData_21c67c8;
extern __int64 GameData_21c67d0;
extern int GameData_21c67d8;
extern __int64 GameData_21c67e0;
extern char GameData_21c67e8;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern int GameData_21c6808;
extern __int64 GameData_21c6810;
extern int GameData_21c6818;
extern __int64 GameData_21c6820;
extern char GameData_21c6828;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern int GameData_21c6848;
extern __int64 GameData_21c6850;
extern int GameData_21c6858;
extern __int64 GameData_21c6860;
extern _UNKNOWN GameData_21c6868;
extern __int64 GameData_21c6978;
extern __int64 GameData_21caab0;
extern __int64 GameData_21d9150;
extern __int64 GameData_21d9158;
extern _UNKNOWN GameData_21d9160;
extern __int64 GameData_21d9168;
extern __int64 GameData_21d9170;
extern _UNKNOWN GameData_21d9178;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21ee240;
extern __int64 GameData_21ee248;
extern __int64 GameData_21ee250;
extern _UNKNOWN GameData_21ee258;
extern __int64 GameData_21ee260;
extern __int64 GameData_21ee268;
extern __int64 GameData_220b6f0;
extern __int64 GameData_220d638;
extern __int64 GameData_220f820;
extern __int64 GameData_2265ef0;
extern __int64 GameData_2265ef8;
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_112290(_QWORD);
__int64 GameRoutine_1163b0(void);
struct PseudoSret GameRoutine_1181f0(_QWORD, _QWORD);
__int64 GameRoutine_149a40(_QWORD, _QWORD);
__int64 GameRoutine_14a1460(void);
__int64 GameRoutine_14a15e0(void);
__int64 GameRoutine_14a16a0(_QWORD, _QWORD, float);
__int64 GameRoutine_1a09c50(_QWORD);
float GameRoutine_1a09fb0(float);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
float GameRoutine_1a0a550(_QWORD, float, float);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 GameRoutine_610540(_QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65a7c0(void);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD, _QWORD);
__int64 GameRoutine_7a96a0(float);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 GameRoutine_869280(_QWORD, _QWORD);
__int16* GameRoutine_8697c0(__int16* result, char, float);
struct PseudoSret GameRoutine_86bbc0(_QWORD);
__int64 GameRoutine_9bd2e0(_QWORD, _QWORD);
__int64 GameRoutine_9bd480(_QWORD);
struct PseudoSret GameRoutine_a3aba0(_QWORD, _QWORD, _QWORD, float);
void __attribute__((noreturn)) GameRoutine_b790d0(_QWORD);
__int64 GameRoutine_cac250(_QWORD);
__int64 GameRoutine_ceca80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cf12a0(void);
__int64 GameRoutine_cf2500(_QWORD, _QWORD);
__int64 GameRoutine_d523c0(_QWORD);
__int64 GameRoutine_d783a0(_QWORD, float);
float GameRoutine_d78a40(_QWORD);
struct PseudoSret GameRoutine_d98c0(void);
__int64 GameRoutine_e2920(_QWORD, _QWORD);
float GameRoutine_efb160(__int64, __int64*);
float GameRoutine_efc240(void);
void __attribute__((noreturn)) GameRoutine_efd940(void);
float GameRoutine_fe090(_QWORD, _QWORD);

__int64 GameHr_7bd3a0(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  int v4;
  int v5;
  float v6;
  float v7;
  __int64 v8;

  v1 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9160,
                            memory_order_acquire) &
       1) == 0) {
    result = GameRoutine_1a09fd0(&GameData_21d9160);
    if ((_DWORD)result != 0) {
      GameData_21d9158 = (__int64)&GameData_1a9c738;
      GameData_21d9150 = GameRoutine_7a86e0(&GameData_1a9c738, v8);
      result = GameRoutine_1a09fe0(&GameData_21d9160);
    }
  }
  if (GameData_21caab0 != 0) {
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d9150);
    if (result != 0) {
      v2 = *(_DWORD*)(result + 32);
      if (v2 != 0) {
        v3 = (int)(float)((float)v2 * 0.06f);
        if (v3 >= 1) {
          if (GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
              (((v4 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v5 = 2)
                                                                    : (v5 = 3),
               (v5 & v4) != 0)) {
            v6 = *(float*)(v1 + 144);
            v7 = (float)(unsigned int)v3;
            *(_WORD*)(v1 + 136) = *(_WORD*)(v1 + 136) & 0xFF97 | 0x60;
            if (v6 >= (float)(unsigned int)v3) {
              v7 = v6;
            }
            *(float*)(v1 + 144) = v7;
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_7bd590(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  int v4;
  int v5;
  float v6;
  float v7;
  __int64 v8;

  v1 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d9178,
                            memory_order_acquire) &
       1) == 0) {
    result = GameRoutine_1a09fd0(&GameData_21d9178);
    if ((_DWORD)result != 0) {
      GameData_21d9170 = (__int64)&GameData_1ab7bc4;
      GameData_21d9168 = GameRoutine_7a86e0(&GameData_1ab7bc4, v8);
      result = GameRoutine_1a09fe0(&GameData_21d9178);
    }
  }
  if (GameData_21caab0 != 0) {
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d9168);
    if (result != 0) {
      v2 = *(_DWORD*)(result + 32);
      if (v2 != 0) {
        v3 = (int)(float)((float)v2 * 0.06f);
        if (v3 >= 1) {
          if (GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
              (((v4 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v5 = 2)
                                                                    : (v5 = 3),
               (v5 & v4) != 0)) {
            v6 = *(float*)(v1 + 144);
            v7 = (float)(unsigned int)v3;
            *(_WORD*)(v1 + 136) = *(_WORD*)(v1 + 136) & 0xFF97 | 0x60;
            if (v6 >= (float)(unsigned int)v3) {
              v7 = v6;
            }
            *(float*)(v1 + 144) = v7;
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_80fde0(__int64 a1, __int64 a2, float* a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  float v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  _QWORD v18[2];

  if (a1 != 0) {
    result = GameRoutine_610540(a1, a2);
    if (result == 0) {
      return result;
    }
    if (*(_QWORD*)(result + 48) == 0) {
      return 0;
    }
  }
  *(struct PseudoSret*)(v18) = GameRoutine_d98c0();
  v5 = GameRoutine_112290(v18);
  if (v5 != 0 && (GameRoutine_149a40(v5 - 5592, 14) & 1) == 0) {
    return 0;
  }
  GameRoutine_e2920(*(_QWORD*)(GameData_2265ef8 + 32), a3);
  if (GameData_21c6978 == 0) {
    return 1;
  }
  v6 = *(_QWORD*)(GameData_2265ef8 + 32);
  v7 = *(_DWORD*)(v6 + 376);
  if (v7 < 0) {
    LOBYTE(v7) = 0;
    v9 = false;
  }
  else {
    v8 = *(float*)(v6 + 384);
    if (v7 != 0) {
      if (v7 != 1) {
        if (*(_DWORD*)(GameData_2265ef8 + 2808) == 1) {
          return 2;
        }
        else {
          return 1;
        }
      }
      v9 = false;
      LOBYTE(v7) = v8 > 0.0f;
    }
    else {
      v9 = v8 > 0.0f;
    }
  }
  if (*(_DWORD*)(GameData_2265ef8 + 2808) != 1 && v9) {
    result = 1;
  }
  else {
    result = 2;
  }
  if ((*(_DWORD*)(GameData_2265ef8 + 2808) == 1 || !v9) && (v7 & 1) == 0) {
    if (GameData_21ec7c0 != 0) {
      v10 = *(_QWORD*)(GameData_21ec7c0 + 80);
      if (v10 != 0) {
        v11 = *(_QWORD*)(GameData_21ec7c0 + 72);
        v12 = *(_QWORD*)(GameData_21ec7c0 + 80);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                  memory_order_relaxed);
        v13 = GameRoutine_1a0a0c0(v12);
        if (v13 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v14 = v13;
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            GameRoutine_1a09c50(v14);
          }
          GameRoutine_1a09c50(v10);
          if (v11 != 0) {
            v15 = a3[2];
            v16 = a3[3];
            if (v16 < 20.0f && v15 < -130.0f) {
              return 1;
            }
            if (v16 < 80.0f && v16 > 50.0f && v15 > -15.0f && v15 < -3.0f) {
              v17 = a3[4];
              if (v17 > -208.0f && v17 < -68.0f) {
                return 2;
              }
            }
          }
        }
        else {
          GameRoutine_1a09c50(v10);
        }
      }
    }
    return 0;
  }
  return result;
}

__int64 GameHr_868190(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  float v7;
  char v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  _QWORD v17[4];
  _QWORD* v18;

  v1 = GameData_21ee240;
  if (GameData_21ee240 == 0 || (*(_DWORD*)(GameData_21ee240 + 156) & 5) != 4) {
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ee258,
                            memory_order_acquire) &
       1) == 0) {
    v14 = a1;
    v16 = GameRoutine_1a09fd0(&GameData_21ee258);
    a1 = v14;
    if (v16 != 0) {
      GameData_21ee250 = (__int64)&GameData_1a9c92c;
      GameData_21ee248 = GameRoutine_7a86e0(&GameData_1a9c92c, v15);
      GameRoutine_1a09fe0(&GameData_21ee258);
      a1 = v14;
    }
  }
  if (GameData_21caab0 == 0) {
    return 0;
  }
  v2 = a1;
  v3 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21ee248);
  v4 = 0;
  if (v3 != 0) {
    v5 = *(_DWORD*)(v3 + 32);
    if (v5 != 0) {
      v6 = (int)(float)((float)v5 * 0.06f);
      if (v6 != 0) {
        v7 = *(float*)(v1 + 224);
        if (v7 < (float)v6 && (float)(v7 / (float)v6) <= 0.0f) {
          return 0;
        }
        v9 = GameData_21ee240;
        if (GameData_21ee240 != 0) {
          if (*(_BYTE*)(GameData_21ee240 + 152) == 3) {
            v10 = *(_DWORD*)(GameData_21ee240 + 156);
            if ((v10 & 8) != 0) {
              v11 = 2;
            }
            else {
              v11 = 3;
            }
            v9 = (v11 & v10) == 0;
          }
          else {
            v9 = 0;
          }
        }
        v4 = 0;
        if (v2 != 0 && (v9 & 1) == 0) {
          v12 = GameRoutine_9bd480(v2);
          v17[0] = GameData_1fa2230;
          v18 = v17;
          GameRoutine_9bd2e0(v12, v17);
          if (v18 == v17) {
            v13 = 32;
          }
          else {
            if (v18 == nullptr) {
              return v12;
            }
            v13 = 40;
          }
          (*(void (**)(__int64))(*v18 + v13))((__int64)v18);
          return v12;
        }
      }
    }
  }
  return v4;
}

__int64 GameHr_868fe0()
{
  __int64 v0;
  __int64 v1;
  int v2;
  __int64 result;
  int v4;
  float v5;
  int v6;
  int v7;
  __int64 v8;

  v0 = GameData_21ee240;
  if (GameData_21ee240 == 0 || (*(_DWORD*)(GameData_21ee240 + 156) & 5) != 4) {
    return 2;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ee258,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_21ee258) != 0) {
    GameData_21ee250 = (__int64)&GameData_1a9c92c;
    GameData_21ee248 = GameRoutine_7a86e0(&GameData_1a9c92c, v8);
    GameRoutine_1a09fe0(&GameData_21ee258);
  }
  if (GameData_21caab0 == 0) {
    return 2;
  }
  v1 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21ee248);
  if (v1 == 0) {
    return 2;
  }
  v2 = *(_DWORD*)(v1 + 32);
  result = 2;
  if (v2 != 0) {
    v4 = (int)(float)((float)v2 * 0.06f);
    if (v4 != 0) {
      v5 = *(float*)(v0 + 224);
      if (v5 >= (float)v4 || (float)(v5 / (float)v4) != 0.0f) {
        if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
          v6 = *(_DWORD*)(GameData_21ee240 + 156);
          if ((v6 & 8) != 0) {
            v7 = 2;
          }
          else {
            v7 = 3;
          }
          if ((v7 & v6) != 0) {
            return 0;
          }
          else {
            return 2;
          }
        }
        else {
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_86a320(__int64 a1, __int16* a2)
{
  int v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int16* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int16 v20;
  __int64 v21;
  __int16 v22;
  __int16 v23;
  __int64 v24;
  __int16 v26;
  __int16 v27;
  __int64 v28;
  __int16 v29;
  __int64 v30;
  __int64 v31;
  __int16* v32;
  float v33;
  __int64 v34;
  float v35;
  __int64 v36;
  __int64 v38;
  __int16 v39;
  __int64 v40;
  __int16 v41;
  __int16 v42;
  __int64 v43;
  void* v44;
  __int64 v45;

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  if (v3 * v2 * v4 == 0) {
    return 0;
  }
  v5 = *a2;
  v6 = a2[3];
  v7 = a2[4];
  v8 = a2[5];
  v9 = a2[2];
  v10 = (__int16*)(GameData_21ee260 + 8);
  if (GameData_21ee260 == 0) {
    v10 = (__int16*)GameData_212cf60;
  }
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v14 = v10[3];
  v15 = v10[4];
  v16 = v10[5];
  if (GameData_21ee260 != 0) {
    v17 = v10[1];
    v45 = v10[2];
    v18 = v14;
    v40 = v15;
    v19 = v16;
    v38 = v7;
    GameRoutine_869280(GameData_21ee260, a2);
    v5 = v2;
    v7 = v38;
    v15 = v40;
    v9 = v4;
    v16 = v19;
    v14 = v18;
    v12 = v17;
    v13 = v45;
  }
  if ((v12 << 24) + (v11 << 32) + (v13 << 18) + (v14 << 12) + (v15 << 6) +
          v16 >=
      (unsigned __int64)(((__int64)v3 << 24) + (v5 << 32) + (v9 << 18) +
                         (v6 << 12) + (v7 << 6) + v8)) {
    return 0;
  }
  v20 = v2;
  v21 = GameData_21ee268;
  v22 = v7;
  v23 = v8;
  if (GameData_21ee268 != 0) {
    *(struct PseudoSret*)(&v43) = GameRoutine_86bbc0(GameData_21ee268);
    v24 = v43;
    *(_WORD*)(v21 + 164) = v20;
    *(_WORD*)(v21 + 166) = v3;
    *(_WORD*)(v21 + 168) = v4;
    *(_WORD*)(v21 + 170) = v6;
    *(_WORD*)(v21 + 172) = v22;
    *(_WORD*)(v21 + 174) = v8;
    *(_DWORD*)(v21 + 180) = 0;
    *(_QWORD*)(v21 + 152) = v24;
    *(_DWORD*)(v21 + 160) = (_DWORD)v44;
  }
  else {
    v26 = v11;
    LODWORD(v45) = (unsigned __int16)v12;
    v27 = v16;
    v42 = v13;
    v41 = v14;
    v39 = v15;
    v21 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 184, 16, 0);
    v28 = GameData_212c608[0];
    *(_QWORD*)(v21 + 96) = 0;
    *(_QWORD*)(v21 + 104) = 0;
    *(_QWORD*)(v21 + 112) = 0;
    *(_QWORD*)(v21 + 120) = 0;
    *(_QWORD*)(v21 + 128) = 0;
    *(_WORD*)(v21 + 136) = 0;
    *(_QWORD*)(v21 + 16) = 0;
    *(_QWORD*)(v21 + 24) = "NULL";
    *(_QWORD*)(v21 + 138) = 0;
    *(_QWORD*)(v21 + 144) = 0;
    *(_QWORD*)(v21 + 32) = 0;
    *(_QWORD*)(v21 + 40) = 0;
    *(_QWORD*)(v21 + 48) = 0;
    *(_QWORD*)(v21 + 56) = 0;
    *(_QWORD*)(v21 + 64) = 0;
    *(_QWORD*)(v21 + 72) = 0;
    *(_QWORD*)(v21 + 80) = 0;
    *(_QWORD*)(v21 + 88) = 0;
    *(_QWORD*)v21 = v28 + 16;
    *(_QWORD*)(v21 + 8) = 0;
    GameRoutine_65a7c0();
    *(_WORD*)(v21 + 152) = v26;
    GameData_21ee268 = v21;
    *(_WORD*)(v21 + 162) = v27;
    *(_WORD*)(v21 + 164) = v20;
    *(_WORD*)(v21 + 166) = v3;
    *(_WORD*)(v21 + 168) = v4;
    *(_WORD*)(v21 + 170) = v6;
    *(_WORD*)(v21 + 172) = v22;
    *(_QWORD*)v21 = GameData_1fa2518;
    v29 = v45;
    *(_WORD*)(v21 + 174) = v23;
    *(_QWORD*)(v21 + 176) = 0;
    *(_WORD*)(v21 + 154) = v29;
    *(_WORD*)(v21 + 156) = v42;
    *(_WORD*)(v21 + 158) = v41;
    *(_WORD*)(v21 + 160) = v39;
    v30 = GameData_21ee260;
    if (GameData_21ee260 != 0) {
      v31 = *(_QWORD*)(v21 + 152);
      *(_DWORD*)(GameData_21ee260 + 40) = *(_DWORD*)(v21 + 160);
      *(_QWORD*)(v30 + 32) = v31;
    }
    if (v30 != 0) {
      v32 = (__int16*)(v30 + 32);
    }
    else {
      v32 = (__int16*)GameData_212cf60;
    }
    if (v32[1] * *v32 * v32[2] != 0 ||
        (v30 != 0 ? (v32 = (__int16*)(v30 + 8))
                  : (v32 = (__int16*)GameData_212cf60),
         v30 == 0)) {
      v33 = 0.0f;
    }
    else {
      v33 = *(float*)(v30 + 44);
    }
    GameRoutine_8697c0(v32, 0, v33);
    v44 = &GameData_1ad29ae;
    v35 = 0.0f;
    v43 = GameRoutine_7a86e0(&GameData_1ad29ae, v34);
    if (GameData_21caab0 != 0) {
      v36 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v43);
      if (v36 != 0) {
        v35 = (float)(int)(float)((float)*(int*)(v36 + 32) * 0.06f);
      }
    }
    *(float*)(v21 + 176) = v35;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)GameRoutine_1a09fd0(&GameData_21c6868) != 0) {
      GameData_21c67a8 = 3;
      GameData_21c67d0 = 0;
      GameData_21c67d8 = 0;
      GameData_21c67e0 = 0;
      GameData_21c67b0 = 0;
      GameData_21c67b8 = 0;
      GameData_21c67c0 = 0;
      GameData_21c67c8 = 0;
      GameData_21c6808 = 0;
      GameData_21c6810 = 0;
      GameData_21c6818 = 0;
      GameData_21c6820 = 0;
      GameData_21c6828 = 0;
      GameData_21c6850 = 0;
      GameData_21c6858 = 0;
      GameData_21c6860 = 0;
      GameData_21c6848 = 0;
      GameData_21c6838 = 0;
      GameData_21c6840 = 0;
      GameData_21c6830 = 0;
      GameData_21c67e8 = 14;
      GameData_21c67f0 = 0;
      GameData_21c67f8 = 16;
      GameData_21c6800 = 1;
      GameRoutine_1a09fe0(&GameData_21c6868);
    }
    GameRoutine_657850(v21, &GameData_21c67a8, "ProcProgressAsync", 0, a1);
  }
  return v21;
}

float* GameHr_a1b580(__int64 a1, float a2)
{
  __int64 v2;
  float v5;
  __int64 v6;
  float v7;
  float* result;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (*(_BYTE*)(a1 + 40) != 1) {
    return nullptr;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_DWORD*)(a1 + 16) == 0) {
    if (v2 != 0) {
      return nullptr;
    }
  LABEL_13:
    if ((GameRoutine_1120d0(a1 + 24) & 1) != 0) {
      v9 = GameRoutine_112290(a1 + 24);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9) & 1) != 0) {
        v10 = GameRoutine_112290(a1 + 24);
        *(_QWORD*)(a1 + 8) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 72LL))(v10);
        v11 = GameRoutine_112290(a1 + 24);
        *(_DWORD*)(a1 + 16) =
            (*(unsigned int (**)(__int64))(*(_QWORD*)v11 + 80LL))(v11) >> 3;
        return nullptr;
      }
    }
    return nullptr;
  }
  if (v2 == 0) {
    goto LABEL_13;
  }
  v5 = (*(float (**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 + 40LL) + 1088LL))(
      *(_QWORD*)a1 + 40LL);
  v6 = *(unsigned int*)(a1 + 16);
  v7 = (float)((float)(a2 * 1000.0f) / 16.667f) + v5;
  if (v7 < 0.0f) {
    v7 = 0.0f;
  }
  if ((int)v6 < 1) {
    return nullptr;
  }
  for (result = *(float**)(a1 + 8);
       v7 >= (float)((float)(*result * 1000.0f) / 16.667f); result += 2) {
    if (--v6 == 0) {
      return nullptr;
    }
  }
  return result;
}

void GameHr_a32d60(__int64 a1, __int64 a2, float* a3, float* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  float v13;
  float v14;
  __int64 v16;
  __int64 v17;
  int v18;
  float v19;
  __int64 v20;
  __int64* v21;
  _BYTE* v22;
  float v23;
  _QWORD v24[2];
  int v25;
  _QWORD v26[2];
  int v27;
  __int64 v28;
  __int64 v29;
  _DWORD v30[12];
  __int64 v31;
  int v32;
  __int64* v33;
  __int64 v34;
  int v35;
  __int64* v36;
  __int64 v37;
  int v38;

  *a3 = 1.0f;
  *a4 = 0.0f;
  v8 = GameRoutine_112290(a2 + 5848);
  if (v8 != 0) {
    v9 = v8;
    v10 = GameRoutine_1163b0();
    *(struct PseudoSret*)(&v28) = GameRoutine_1181f0(v10, 0xFFFFFFFFLL);
    v11 = GameRoutine_112290(&v28);
    if (v11 != 0) {
      (*(void (**)(__int64* __return_ptr, __int64))(*(_QWORD*)(v11 - 5552) +
                                                    1048LL))(&v28, v11 - 5552);
      v38 = v30[0];
      v12 = GameData_212d1e0[0] + 2;
      v36 = GameData_212d1e0[0] + 2;
      v37 = v29;
      (*(void (**)(__int64* __return_ptr, __int64))(*(_QWORD*)(v9 - 5592) +
                                                    96LL))(&v28, v9 - 5592);
      v33 = v12;
      v34 = v29;
      v35 = v30[0];
      v13 = GameRoutine_fe090(&v36, &v33);
      v14 = (*(float (**)(__int64))(*(_QWORD*)a2 + 112LL))(a2);
      if (v14 <= 0.0f || v13 < v14) {
        v26[0] = v12;
        v26[1] = v34;
        v27 = v35;
        v24[0] = v12;
        v24[1] = v37;
        v25 = v38;
        *(struct PseudoSret*)(&v28) =
            GameRoutine_a3aba0(a1 + 544, v26, v24, 1.0f);
        if ((v28 & 1) != 0 || (v28 & 0x100) != 0) {
          if (v32 < 1) {
            v19 = 0.0f;
          }
          else {
            v16 = v32 & 7;
            if ((unsigned int)v32 >= 8) {
              v20 = 0;
              v18 = 0;
              v21 = &v31;
              do {
                if ((*(_BYTE*)(v21 - 6) & 1) != 0 || *((_BYTE*)v21 - 47) == 1) {
                  ++v18;
                }
                if ((*(_BYTE*)(v21 - 4) & 1) != 0 || *((_BYTE*)v21 - 31) == 1) {
                  ++v18;
                }
                if ((*(_BYTE*)(v21 - 2) & 1) != 0 || *((_BYTE*)v21 - 15) == 1) {
                  ++v18;
                }
                if ((*(_BYTE*)v21 & 1) != 0 || *((_BYTE*)v21 + 1) == 1) {
                  ++v18;
                }
                if ((v21[2] & 1) != 0 || *((_BYTE*)v21 + 17) == 1) {
                  ++v18;
                }
                if ((v21[4] & 1) != 0 || *((_BYTE*)v21 + 33) == 1) {
                  ++v18;
                }
                if ((v21[6] & 1) != 0 || *((_BYTE*)v21 + 49) == 1) {
                  ++v18;
                }
                if ((v21[8] & 1) != 0 || *((_BYTE*)v21 + 65) == 1) {
                  ++v18;
                }
                v20 -= 8;
                v21 += 16;
              } while (-(__int64)(v32 & 0x7FFFFFF8) != v20);
              v17 = -v20;
            }
            else {
              v17 = 0;
              v18 = 0;
            }
            if ((v32 & 7) != 0) {
              v22 = (char*)&v30[4 * v17] + 1;
              do {
                if ((*(v22 - 1) & 1) != 0 || *v22 == 1) {
                  ++v18;
                }
                v22 += 16;
                --v16;
              } while (v16 != 0);
            }
            v19 = (float)v18;
          }
          v23 = v19 / (float)v32;
          *a3 = 1.0f - (float)(v23 * 0.8f);
          *a4 = v23 * 0.8f;
        }
      }
    }
  }
}

__int64 GameHr_b78dc0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  int v3;
  bool v7;
  int v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  int v14;
  int v15;
  float v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;

  v3 = *(_DWORD*)(a1 + 344);
  v7 = v3 < -1;
  v8 = ((_BYTE)v3 + 1) & 1;
  if (v7) {
    v8 = -v8;
  }
  *(_DWORD*)(a1 + 344) = v8;
  v9 = *(_QWORD*)(a1 + 8LL * v8 + 328);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9);
  *(_DWORD*)v10 = *((_DWORD*)a3 + 24);
  *(_DWORD*)(v10 + 4) = *((_DWORD*)a3 + 29);
  *(_DWORD*)(v10 + 8) = *((_DWORD*)a3 + 25);
  *(_DWORD*)(v10 + 12) = *((_DWORD*)a3 + 26);
  *(_DWORD*)(v10 + 16) = *((_DWORD*)a3 + 27);
  *(_DWORD*)(v10 + 20) = *((_DWORD*)a3 + 28);
  if (*((_BYTE*)a3 + 120) == 1) {
    v11 = GameRoutine_1a09fb0((float)(90.0f - *((float*)a3 + 33)) * 0.017453f);
    v12 = GameRoutine_1a09fb0(*((float*)a3 + 34) * 0.017453f);
    v13 = v11 - v12;
    v14 = *((_DWORD*)a3 + 31);
    v15 = *((_DWORD*)a3 + 32);
    if ((float)(v11 - v12) < 0.0001f) {
      v13 = 0.0001f;
    }
    v16 = 1.0f / v13;
  }
  else {
    v16 = 1.0f;
    v14 = 0;
    v15 = 0;
    v12 = 0.0f;
  }
  *(_DWORD*)(v10 + 32) = v14;
  *(_DWORD*)(v10 + 36) = v15;
  *(float*)(v10 + 40) = v12;
  *(float*)(v10 + 44) = v16;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
      *a2, 8,
      *(_QWORD*)(*(_QWORD*)(a1 +
                            16LL * ((6 * *((unsigned __int8*)a3 + 92) +
                                     2 * *((_DWORD*)a3 + 22)) |
                                    *((unsigned __int8*)a3 + 120)) +
                            8) +
                 144LL));
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, a3[2], a3[3],
                              *(unsigned int*)(a1 + 320));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 248LL))(*a2, 8, 1, a3[4], a3[5],
                              *(unsigned int*)(a1 + 320));
  if (*((_BYTE*)a3 + 92) == 1) {
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 248LL))(*a2, 8, 2, a3[6], a3[7],
                                *(unsigned int*)(a1 + 320));
    (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 248LL))(*a2, 8, 3, a3[8], a3[9],
                                *(unsigned int*)(a1 + 320));
  }
  v17 = a1 + 16LL * *(int*)(a1 + 344);
  result = (*(__int64 (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 224LL))(*a2, 8, 1, *(_QWORD*)(v17 + 352),
                              *(_QWORD*)(v17 + 360));
  if (*((int*)a3 + 20) >= 1) {
    v19 = 0;
    v20 = 0;
    v21 = 0;
    do {
      v22 = 0;
      v23 = v20;
      do {
        v24 = *(_QWORD*)a3[1];
        if (v19 + v22 >=
            (unsigned __int64)((*(_QWORD*)(a3[1] + 8LL) - v24) >> 4)) {
          GameRoutine_b790d0(result);
        }
        (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, *(_QWORD*)(v24 + v23),
                                    *(_QWORD*)(v24 + v23 + 8));
        v25 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a3 + 72LL))(
            *a3, (unsigned int)v21, (unsigned int)v22);
        (*(void (**)(_QWORD* __return_ptr, _QWORD, __int64, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 256LL))((_QWORD*)*a2, *a2, 8, 0, v25);
        result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
            *(_QWORD*)*a2 + 304LL))(
            *a2, (unsigned int)((*((int*)a3 + 21) >> v21) / 8),
            (unsigned int)((*((int*)a3 + 21) >> v21) / 8), 1);
        ++v22;
        v23 += 16;
      } while (v22 != 6);
      ++v21;
      v20 += 96;
      v19 += 6;
    } while (v21 < *((int*)a3 + 20));
  }
  return result;
}

__int64 GameHr_c25d60(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v9;
  __int64 v10;

  v2 = *(_QWORD*)(a2 + 8);
  v9 = *(_DWORD**)a2;
  v10 = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = *(_QWORD*)(a1 + 32);
  if (v4 == 0) {
    GameRoutine_60a310(0);
  }
  v5 = (*(__int64 (**)(__int64, _DWORD**))(*(_QWORD*)v4 + 48LL))(v4, &v9);
  if ((v5 & 1) != 0) {
    v6 = *(_QWORD*)(a2 + 48);
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
    }
    if (fabsf(*((float*)&v5 + 1)) >= 0.00000011921f) {
      if (*((float*)&v5 + 1) > 0.0f) {
        GameRoutine_14a16a0(&v9, 1, *((float*)&v5 + 1));
        goto LABEL_18;
      }
      if (*((float*)&v5 + 1) < 0.0f && *(_QWORD*)v9 != 0 &&
          *(_DWORD*)(*(_QWORD*)v9 + 16LL) == v9[2]) {
        GameRoutine_14a15e0();
        goto LABEL_11;
      }
    }
    else if (*(_QWORD*)v9 != 0 && *(_DWORD*)(*(_QWORD*)v9 + 16LL) == v9[2]) {
      GameRoutine_14a1460();
    LABEL_11:
      GameRoutine_1120d0(v9 + 4);
    }
  }
LABEL_18:
  v7 = v10;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    GameRoutine_1a09c50(v7);
  }
  return v5 & 1;
}

void GameHr_d46e40()
{
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  float* v7;
  float v8;
  float v9;
  float v10;
  float v11;
  _BYTE* v12;

  v0 = GameData_220f820;
  if (GameData_220f820 != 0) {
    v1 = GameRoutine_d783a0(
        *(_QWORD*)(GameData_220f820 + 8),
        (float)(*(float*)(GameData_2265ef0 + 48) * 16.683f) / 1000.0f);
    v2 = *(__int64**)(v0 + 8);
    v3 = *v2;
    v4 = v2[1];
    if (*v2 == v4) {
      v12 = (_BYTE*)(v0 + 16);
    }
    else {
      v5 = 1.0f;
      do {
        v7 = *(float**)v3;
        v6 = *(_QWORD*)(v3 + 8);
        if (v6 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v7 != nullptr) {
          v8 = v7[3];
          if (v8 <= 0.0f) {
            v11 = *v7;
          }
          else {
            v9 = v7[1];
            v10 = v7[2] / v8;
            if (v9 > 0.0f) {
              v10 = GameRoutine_1a0a550(v1, v10, v9);
            }
            v11 =
                (float)(fminf(fmaxf(v10, 0.0f), 1.0f) * (float)(*v7 + -1.0f)) +
                1.0f;
          }
          v5 = v5 * v11;
        }
        if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          v1 = GameRoutine_1a09c50(v6);
        }
        v3 += 16;
      } while (v3 != v4);
      v12 = (_BYTE*)(v0 + 16);
      if (v5 != 1.0f) {
        *v12 = 1;
      LABEL_21:
        *(float*)(GameData_2265ef0 + 156) = v5;
        return;
      }
    }
    v5 = 1.0f;
    if (*v12 != 1) {
      return;
    }
    goto LABEL_21;
  }
}

void GameHr_da5fe0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  float v13;

  v1 = a1;
  v2 = GameData_212c5c0[0];
  v3 = (float)(*(float*)(*(_QWORD*)GameData_212c5c0[0] + 104LL) * 16.683f) /
       1000.0f;
  if (*(_BYTE*)(a1 + 225) == 1) {
    v4 = 1.0f;
    if (*(_BYTE*)(a1 + 224) == 0) {
      v4 = 0.0f;
    }
    v5 = *(float*)(a1 + 228);
    v6 = fabsf(v3 / 0.05f);
    if (v5 <= v4) {
      if (v5 >= v4) {
        goto LABEL_10;
      }
      v5 = v6 + v5;
      if (v5 <= v4) {
        goto LABEL_10;
      }
    }
    else {
      v5 = v5 - v6;
      if (v5 >= v4) {
        goto LABEL_10;
      }
    }
    v5 = v4;
  LABEL_10:
    *(float*)(a1 + 228) = v5;
    v7 = GameRoutine_1a0a550(a1, v5, 0.5f);
    a1 = GameRoutine_7a96a0(v7 * 0.05f);
    v8 = *(_QWORD*)GameData_212dc38[0];
    v9 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 1016LL);
    *(float*)(v8 + 1012) = -v7;
    *(float*)(v8 + 1008) = (float)(0.0f - v7) + v9;
  }
  if (*(_BYTE*)(v1 + 216) == 0) {
    return;
  }
  v10 = *(float*)(v1 + 220);
  v11 = fabsf(v3 / 1.1f);
  if (v10 > 0.0f) {
    v10 = v10 - v11;
    if (v10 >= 0.0f) {
      goto LABEL_18;
    }
  LABEL_17:
    v10 = 0.0f;
    goto LABEL_18;
  }
  if (v10 < 0.0f) {
    v10 = v11 + v10;
    if (v10 > 0.0f) {
      goto LABEL_17;
    }
  }
LABEL_18:
  *(float*)(v1 + 220) = v10;
  **(float**)(GameData_220d638 + 16) =
      GameRoutine_1a0a550(a1, v10, 1.25f) * 0.3f;
  v12 = *GameData_212ec50[0];
  GameRoutine_d783a0(*(_QWORD*)(*GameData_212ec50[0] + 8), 0.0f);
  v13 = GameRoutine_d78a40(*(_QWORD*)(v12 + 8));
  if (v13 == 1.0f) {
    if (*(_BYTE*)(v12 + 16) != 1) {
      return;
    }
  }
  else {
    *(_BYTE*)(v12 + 16) = 1;
  }
  *(float*)(*(_QWORD*)v2 + 156LL) = v13;
}

__int64 GameHr_efaca0(__int64 result, __int64* a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64** v6;
  __int64** v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  atomic_ullong* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  char* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;

  if (*(int*)(result + 16) >= 1) {
    v2 = (_QWORD*)result;
    result = a2[1];
    if (result != 0) {
      result = GameRoutine_1a0a0c0(result);
      if (result != 0) {
        v4 = *a2;
        v5 = result;
        if (*a2 != 0) {
          v6 = (__int64**)v2[5];
          v7 = (__int64**)v2[6];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8), 1u,
                                    memory_order_relaxed);
          if (v6 != v7) {
            while (1) {
              v8 = *v6;
              result = (*v6)[1];
              if (result != 0) {
                result = GameRoutine_1a0a0c0(result);
                if (result != 0) {
                  v9 = *v8;
                  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v10 = result;
                    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
                    result = GameRoutine_1a09c50(v10);
                  }
                  if (v9 == v4) {
                    break;
                  }
                }
              }
              v6 += 2;
              if (v6 == v7) {
                v6 = v7;
                break;
              }
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            result = GameRoutine_1a09c50(v5);
          }
          if (v6 == (__int64**)v2[6]) {
            v11 = (_QWORD*)GameData_212bf68;
            result = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 56, 16, 0);
            *(_QWORD*)(result + 8) = 0;
            v12 = (atomic_ullong*)(result + 8);
            *(_QWORD*)(result + 24) = 0;
            v13 = (_QWORD*)(result + 24);
            v14 = result;
            *(_QWORD*)(result + 16) = 0;
            *(_QWORD*)(result + 32) = 0;
            *(_QWORD*)(result + 40) = 0;
            *(_QWORD*)(result + 48) = 0;
            *(_QWORD*)result = GameData_1ff0600;
            v15 = *a2;
            v16 = a2[1];
            if (v16 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                        memory_order_relaxed);
              *(_QWORD*)(result + 24) = v15;
              *(_QWORD*)(result + 32) = v16;
              result = a2[1];
              if (result != 0) {
                result = GameRoutine_1a0a0c0(result);
                if (result != 0) {
                  v17 = *a2;
                  v18 = result;
                  if (v17 != 0) {
                    GameRoutine_ceca80(*(_QWORD*)(v17 + 24), 1024, 1);
                    GameRoutine_ceca80(*(_QWORD*)(v17 + 24), 4096, 1);
                    GameRoutine_ceca80(*(_QWORD*)(v17 + 24), 0x4000, 1);
                    GameRoutine_cf2500(GameData_220b6f0, *(_QWORD*)(v17 + 24));
                    result = GameRoutine_cac250(v17);
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
                    result = GameRoutine_1a09c50(v18);
                  }
                }
              }
            }
            else {
              *v13 = v15;
            }
            if (*(_DWORD*)(v4 + 1112) == 0) {
              v19 = *(float*)(v4 + 404);
              *(_BYTE*)(v14 + 44) = 1;
              *(float*)(v14 + 40) = v19 * 0.017453f;
            }
            v20 = (_QWORD*)v2[6];
            v21 = v2[7];
            if ((unsigned __int64)v20 >= v21) {
              v23 = v2[5];
              v24 = (char*)v20 - v23;
              v25 = ((__int64)v20 - v23) >> 4;
              v26 = v25 + 1;
              if ((unsigned __int64)(v25 + 1) >> 60 != 0) {
                GameRoutine_efd940();
              }
              v27 = v21 - v23;
              if (v27 >> 3 > v26) {
                v26 = v27 >> 3;
              }
              if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF0LL) {
                v28 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v28 = v26;
              }
              if (v28 >> 60 != 0) {
                GameRoutine_60a210(result);
              }
              v29 = GameRoutine_651b90(*v11, 16 * v28, 16, 0);
              v30 = &v24[v29];
              v31 = v29 + 16 * v28;
              *(_QWORD*)v30 = v13;
              *((_QWORD*)v30 + 1) = v14;
              v32 = (__int64)&v24[v29 + -16 * v25];
              v22 = (__int64)&v24[v29 + 16];
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                        memory_order_relaxed);
              result = GameRoutine_1a0b950(v32, v23, v24);
              v2[5] = v32;
              v2[6] = v22;
              v2[7] = v31;
              if (v23 != 0) {
                v33 = 128;
                if (*(_QWORD*)(*v11 + 200LL) == 0) {
                  v33 = 56;
                }
                result = GameRoutine_1a0a4e0(*v11 + v33);
              }
            }
            else {
              *v20 = v13;
              v20[1] = v14;
              v22 = (__int64)(v20 + 2);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                        memory_order_relaxed);
            }
            v2[6] = v22;
            if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
              result = GameRoutine_1a09c50(v14);
            }
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return GameRoutine_1a09c50(v5);
        }
      }
    }
  }
  return result;
}

__int64 GameHr_efbda0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64** v8;
  __int64* v9;
  float v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _BOOL8 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 result;
  __int64 v37;
  __int64 v38[4];
  __int64 v39;

  v2 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v2 != 0) {
    v3 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v4 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v5 = GameRoutine_1a0a0c0(v4);
    if (v5 != 0) {
      v6 = v3;
    }
    else {
      v6 = 0;
    }
  }
  else {
    v5 = 0;
    v6 = 0;
  }
  v7 = (__int64**)a1[5];
  v8 = (__int64**)a1[6];
  if (v7 != v8) {
    v39 = v5;
    v9 = GameData_212eba8[0];
    while (1) {
      v11 = *v7;
      v12 = (*v7)[1];
      if (v12 != 0) {
        v13 = GameRoutine_1a0a0c0(v12);
        if (v13 != 0) {
          break;
        }
      }
    LABEL_13:
      v7 += 2;
      if (v7 == v8) {
        v7 = (__int64**)a1[5];
        v8 = (__int64**)a1[6];
        v5 = v39;
        goto LABEL_57;
      }
    }
    v14 = *v11;
    v15 = v13;
    if (v14 == 0) {
    LABEL_11:
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        GameRoutine_1a09c50(v15);
      }
      goto LABEL_13;
    }
    if (((*v7)[3] & 2) == 0) {
    LABEL_25:
      if (((*v7)[3] & 4) != 0) {
        v17 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 24LL);
        if (*(_BYTE*)(v17 + 336) == 1) {
          *(_BYTE*)(v17 + 336) = 0;
        }
      }
      GameRoutine_ceca80(*(_QWORD*)(v14 + 24), 1024, 0);
      GameRoutine_ceca80(*(_QWORD*)(v14 + 24), 4096, 0);
      GameRoutine_ceca80(*(_QWORD*)(v14 + 24), 0x4000, 0);
      v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 24) + 8LL) + 232LL);
      if (v18 != 0) {
        *(_DWORD*)(*(_QWORD*)(v18 + 88) + 340LL) = 0;
      }
      v19 = *(_DWORD*)(v14 + 1208) - 1;
      *(_DWORD*)(v14 + 1208) = v19;
      if (v19 == 0) {
        (*(void (**)(__int64))(*(_QWORD*)(v14 + 1200) + 8LL))(v14 + 1200);
        v19 = *(_DWORD*)(v14 + 1208);
      }
      v21 = v19 > 0 || *(_DWORD*)(v14 + 1216) == 1;
      GameRoutine_ceca80(*(_QWORD*)(v14 + 24), 256, v21);
      v22 = *(_QWORD*)(*v9 + 232);
      v23 = *(_QWORD*)(*v9 + 240);
      if (v22 != v23) {
        while (*(_QWORD*)v22 != *(_QWORD*)(v14 + 24)) {
          v22 += 16;
          if (v22 == v23) {
            goto LABEL_11;
          }
        }
      }
      if (v22 != v23) {
        if (*(_BYTE*)(v22 + 12) == 1) {
          v10 = *(float*)(v22 + 8);
          if (v10 < 0.2f) {
            v10 = 0.2f;
          }
        }
        else {
          v10 = 0.2f;
        }
        *(float*)(v22 + 8) = v10;
        *(_BYTE*)(v22 + 12) = 1;
        GameRoutine_cf12a0();
      }
      goto LABEL_11;
    }
    if (v14 == v6 || *((_BYTE*)*v7 + 20) != 1 || *(_DWORD*)(v14 + 1112) != 0 ||
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v14 + 24) + 24LL) + 176LL) & 1) != 0) {
      v16 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 24LL);
      if (*(_BYTE*)(v16 + 96) == 1) {
        *(_BYTE*)(v16 + 96) = 0;
      }
      *(_BYTE*)(v16 + 25) = 0;
      goto LABEL_25;
    }
    v38[2] = v14;
    v38[3] = v13;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v24 = GameRoutine_efc240();
    GameRoutine_1a09c50(v15);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
    v25 = GameRoutine_1a0a0c0(v15);
    if (v25 != 0) {
      v26 = *(_QWORD*)(v14 + 24);
      if (*(_BYTE*)(v26 + 272) == 1) {
        v27 = *(_QWORD*)(v26 + 264);
        v28 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v26 + 8) + 344LL) + 352LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v37 = v25;
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          GameRoutine_1a09c50(v37);
        }
        v29 = GameRoutine_1a09c50(v15);
        if (v28 != v27) {
          goto LABEL_54;
        }
        v38[0] = v14;
        v38[1] = v15;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                  memory_order_relaxed);
        v24 = GameRoutine_efb160(v29, v38);
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v30 = v25;
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        GameRoutine_1a09c50(v30);
      }
    }
    v29 = GameRoutine_1a09c50(v15);
  LABEL_54:
    v31 = *v7;
    if ((*((_BYTE*)*v7 + 20) & 1) == 0) {
      GameRoutine_8123d0(v29);
    }
    v32 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 24LL);
    *(_BYTE*)(v32 + 25) = 0;
    *(_QWORD*)(v32 + 32) = 0;
    *(_QWORD*)(v32 + 37) = 0;
    *(_BYTE*)(v32 + 48) = 0;
    *(_BYTE*)(v32 + 64) = 0;
    *(_QWORD*)(v32 + 80) = 0;
    *(_BYTE*)(v32 + 96) = 1;
    *(float*)(v32 + 32) = v24;
    v33 = *((_DWORD*)v31 + 4);
    v34 = *(_QWORD*)(v32 + 16);
    *(_BYTE*)(v32 + 84) = 1;
    *(_DWORD*)(v32 + 80) = v33;
    GameRoutine_d523c0(*(_QWORD*)(v34 + 488));
    *(_BYTE*)(v32 + 25) = 1;
    v9 = &GameData_220b6f0;
    goto LABEL_25;
  }
LABEL_57:
  while (v8 != v7) {
    v35 = (__int64)*(v8 - 1);
    if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      GameRoutine_1a09c50(v35);
    }
    v8 -= 2;
  }
  result = a1[4];
  a1[6] = v7;
  a1[3] = 0;
  a1[4] = 0;
  if (result != 0) {
    result = GameRoutine_1a09c50(result);
  }
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = GameRoutine_1a09c50(v5);
    if (v2 != 0) {
      return GameRoutine_1a09c50(v2);
    }
  }
  else if (v2 != 0) {
    return GameRoutine_1a09c50(v2);
  }
  return result;
}

#pragma GCC visibility pop
