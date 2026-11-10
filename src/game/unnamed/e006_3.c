#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern __int64 (*GameData_2009ad0)();

extern __int64* GameData_212d448[9];

extern __int64* GameData_212ee68[4];

extern __int64 GameData_21ec550;

extern __int64 GameData_21ec7b0;

extern __int64 GameData_2265ef0;

__n128 GameRoutine_106dcd0(_QWORD*, char, char);

__int64 GameRoutine_106e320(_QWORD);

__int64 GameRoutine_1070c00(_QWORD, _QWORD);

__int64 GameRoutine_1096780(__int64, unsigned __int8*, char);

__int64 GameRoutine_1097e40(void);

void GameRoutine_10a9ec0(__int64*);

void GameRoutine_10ab1a0(__int64*, __int64*, unsigned __int64, __int64*,
                         signed __int64);

__int64 GameRoutine_10d6f00(__int64 result, __n128);

__int64 GameRoutine_10dd6a0(_QWORD);

__int64 GameRoutine_10f0680(__int64);

__int64 GameRoutine_10f0920(__int64, __n128);

__int64 GameRoutine_10f0fa0(_QWORD);

__int64 GameRoutine_10f1120(__int64, char, __n128);

__int64 GameRoutine_10f1a20(_QWORD, _QWORD);

__n128 GameRoutine_1a09c50(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);

__int64 GameRoutine_657a50(_QWORD, _QWORD);

__int64 GameRoutine_809ba0(float);

void __attribute__((noreturn)) GameRoutine_d38e30(long double);

__int64 GameRoutine_e5a880(_QWORD, _QWORD, _QWORD);

__n128 GameHr_106e1a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  bool v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  bool v15;
  __n128 result;

  if (*(_DWORD*)(a1 + 256) == 1) {
    *(_DWORD*)(a1 + 256) = 2;
    v2 = *(_QWORD*)(a1 + 32);
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v3 = *(_QWORD*)(a1 + 40);
      v4 = *(_QWORD*)(v2 + 8) == -1 || v3 == 0;
      if (v4 || (v5 = *(_QWORD*)(v3 + 80)) == 0 ||
          (*(_QWORD*)(v5 + 8) != -1 ? (v6 = *(_QWORD*)(v3 + 88) == 0)
                                    : (v6 = true),
           v6 || *(_QWORD*)(v2 + 8) == -1)) {
        GameRoutine_1a09c50(v2);
      }
      else {
        GameRoutine_1a09c50(v2);
        v7 = *(_QWORD*)(v3 + 88);
        v8 = *(_QWORD*)(*(_QWORD*)(v3 + 80) + 8LL) == -1 || v7 == 0;
        if (v8 || (*(_BYTE*)(v7 + 341) & 2) == 0) {
          *(_BYTE*)(*(_QWORD*)(v7 + 8) + 289LL) = 1;
        }
      }
    }
    v9 = *(_QWORD*)(a1 + 56);
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                memory_order_relaxed);
      v10 = *(_QWORD*)(a1 + 64);
      v11 = *(_QWORD*)(v9 + 8) == -1 || v10 == 0;
      if (v11 || (v12 = *(_QWORD*)(v10 + 80)) == 0 ||
          (*(_QWORD*)(v12 + 8) != -1 ? (v13 = *(_QWORD*)(v10 + 88) == 0)
                                     : (v13 = true),
           v13 || *(_QWORD*)(v9 + 8) == -1)) {
        GameRoutine_1a09c50(v9);
      }
      else {
        GameRoutine_1a09c50(v9);
        v14 = *(_QWORD*)(v10 + 88);
        v15 = *(_QWORD*)(*(_QWORD*)(v10 + 80) + 8LL) == -1 || v14 == 0;
        if (v15 || (*(_BYTE*)(v14 + 341) & 2) == 0) {
          *(_BYTE*)(*(_QWORD*)(v14 + 8) + 289LL) = 1;
        }
      }
    }
    GameRoutine_106e320(a1);
    return GameRoutine_106dcd0((_QWORD*)a1,
                               *(_BYTE*)(*(_QWORD*)(a1 + 8) + 185LL) &
                                   *(_BYTE*)(*(_QWORD*)(a1 + 8) + 184LL),
                               (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 196LL) & 1) ==
                                   0);
  }
  return result;
}

void GameHr_10ab720(__int64* a1, __int64* a2, unsigned __int64 a3, __int64* a4)
{
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  float v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v29;
  __int64 v30;
  float v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  bool v47;
  __int64 v48;
  bool v49;
  float v50;
  __int64 v51;
  bool v52;
  float v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64* v57;

  if (a3 != 0) {
    v4 = a4;
    v6 = a1;
    if (a3 == 2) {
      v7 = *(a2 - 2);
      v8 = a2 - 3;
      if (v7 == 0 ||
          ((v9 = *(a2 - 1), *(_QWORD*)(v7 + 8) != -1) ? (v10 = v9 == 0)
                                                      : (v10 = true),
           v10 || (v51 = v6[1]) != 0 &&
                      (*(_QWORD*)(v51 + 8) != -1 ? (v52 = v6[2] == 0)
                                                 : (v52 = true),
                       !v52 && (v53 = (*(float (**)(__int64))(*(_QWORD*)v9 +
                                                              144LL))(v9)) >=
                                   (*(float (**)(__int64))(*(_QWORD*)v6[2] +
                                                           144LL))(v6[2])))) {
        *v4 = *v6;
        v4[1] = v6[1];
        *v6 = 0;
        v6[1] = 0;
        v4[2] = v6[2];
        v4[3] = *(a2 - 3);
        v4[4] = *(a2 - 2);
        *v8 = 0;
        *(a2 - 2) = 0;
        v11 = *(a2 - 1);
      }
      else {
        *v4 = *(a2 - 3);
        v4[1] = *(a2 - 2);
        *v8 = 0;
        *(a2 - 2) = 0;
        v4[2] = *(a2 - 1);
        v4[3] = *v6;
        v4[4] = v6[1];
        *v6 = 0;
        v6[1] = 0;
        v11 = v6[2];
      }
      v4[5] = v11;
    }
    else {
      if (a3 == 1) {
        *a4 = *a1;
        a4[1] = a1[1];
        *a1 = 0;
        a1[1] = 0;
        a4[2] = a1[2];
        return;
      }
      if ((__int64)a3 > 8) {
        v39 = a3 >> 1;
        v41 = 3 * (a3 >> 1);
        v42 = &a1[3 * (a3 >> 1)];
        GameRoutine_10ab1a0(a1, v42, v39, a4, v39);
        GameRoutine_10ab1a0(&v6[v41], a2, a3 - v39, &v4[v41], a3 - v39);
        if (8 * v41 != 0) {
          v43 = &v6[v41];
          while (v43 != a2) {
            v45 = v43[1];
            if (v45 == 0 ||
                ((v46 = v43[2], *(_QWORD*)(v45 + 8) != -1) ? (v47 = v46 == 0)
                                                           : (v47 = true),
                 v47 ||
                     (v48 = v6[1]) != 0 &&
                         (*(_QWORD*)(v48 + 8) != -1 ? (v49 = v6[2] == 0)
                                                    : (v49 = true),
                          !v49 && (v50 = (*(float (**)(__int64))(
                                       *(_QWORD*)v46 + 144LL))(v46)) >=
                                      (*(float (**)(__int64))(
                                          *(_QWORD*)v6[2] + 144LL))(v6[2])))) {
              *v4 = *v6;
              v4[1] = v6[1];
              *v6 = 0;
              v6[1] = 0;
              v44 = v6[2];
              v6 += 3;
            }
            else {
              *v4 = *v43;
              v4[1] = v43[1];
              *v43 = 0;
              v43[1] = 0;
              v44 = v43[2];
              v43 += 3;
            }
            v4[2] = v44;
            v4 += 3;
            if (v6 == v42) {
              goto LABEL_79;
            }
          }
          if (v6 != v42) {
            v55 = 0;
            do {
              v56 = &v6[v55];
              v57 = &v4[v55];
              v55 += 3;
              *v57 = *v56;
              v57[1] = v56[1];
              *v56 = 0;
              v56[1] = 0;
              v57[2] = v56[2];
            } while (v56 + 3 != v42);
          }
        }
        else {
          v43 = &v6[v41];
        LABEL_79:
          while (v43 != a2) {
            *v4 = *v43;
            v4[1] = v43[1];
            *v43 = 0;
            v43[1] = 0;
            v54 = v43[2];
            v43 += 3;
            v4[2] = v54;
            v4 += 3;
          }
        }
      }
      else if (a1 != a2) {
        *a4 = *a1;
        a4[1] = a1[1];
        *a1 = 0;
        a1[1] = 0;
        a4[2] = a1[2];
        v12 = a1 + 3;
        if (a1 + 3 != a2) {
          v13 = 0;
          v14 = a4;
          while (1) {
            v15 = v12;
            v16 = v6[4];
            if (v16 != 0) {
              v17 = v6[5];
              if (*(_QWORD*)(v16 + 8) != -1 && v17 != 0) {
                v19 = v14[1];
                if (v19 == 0) {
                  goto LABEL_30;
                }
                if (*(_QWORD*)(v19 + 8) == -1 || v14[2] == 0) {
                  goto LABEL_30;
                }
                v21 = (*(float (**)(__int64))(*(_QWORD*)v17 + 144LL))(v17);
                if (v21 < (*(float (**)(__int64))(*(_QWORD*)v14[2] + 144LL))(
                              v14[2])) {
                  break;
                }
              }
            }
            v14[3] = *v15;
            v14[4] = v6[4];
            *v15 = 0;
            v15[1] = 0;
            v14[5] = v6[5];
          LABEL_17:
            v14 += 3;
            v12 = v15 + 3;
            v13 += 24;
            v6 = v15;
            if (v15 + 3 == a2) {
              return;
            }
          }
          v19 = v14[1];
        LABEL_30:
          v22 = *v14;
          *v14 = 0;
          v14[1] = 0;
          v23 = v4;
          v14[3] = v22;
          v14[4] = v19;
          v14[5] = v14[2];
          if (v14 != v4) {
            v24 = v13;
            v23 = v14;
            while (1) {
              v26 = v6[4];
              if (v26 == 0) {
                break;
              }
              v27 = v6[5];
              if (*(_QWORD*)(v26 + 8) == -1 || v27 == 0) {
                break;
              }
              v29 = (__int64*)((char*)v4 + v24);
              v30 = *(__int64*)((char*)v4 + v24 - 16);
              if (v30 != 0 && *(_QWORD*)(v30 + 8) != -1 && *(v29 - 1) != 0) {
                v32 = (*(float (**)(__int64))(*(_QWORD*)v27 + 144LL))(v27);
                if (v32 >= (*(float (**)(_QWORD))(*(_QWORD*)*(v29 - 1) +
                                                  144LL))(*(v29 - 1))) {
                  v23 = (__int64*)((char*)v4 + v24);
                  break;
                }
                v30 = *(v29 - 2);
              }
              v33 = v29[1];
              v34 = (__int64*)((char*)v4 + v24 - 24);
              v35 = *v34;
              *v34 = 0;
              v34[1] = 0;
              *v29 = v35;
              v29[1] = v30;
              if (v33 != 0) {
                GameRoutine_1a09c50(v33);
              }
              v25 = (char*)v4 + v24;
              v23 -= 3;
              v24 -= 24;
              *((_QWORD*)v25 + 2) = *((_QWORD*)v25 - 1);
              if (v24 == 0) {
                v23 = v4;
                break;
              }
            }
          }
          v36 = *v15;
          v37 = v6[4];
          *v15 = 0;
          v15[1] = 0;
          v38 = v23[1];
          *v23 = v36;
          v23[1] = v37;
          if (v38 != 0) {
            GameRoutine_1a09c50(v38);
          }
          v23[2] = v6[5];
          goto LABEL_17;
        }
      }
    }
  }
}

__n128 GameHr_10c3110(_QWORD* a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;

  *a1 = &GameData_2009ad0;
  GameRoutine_10a9ec0(a1 + 17);
  v3 = a1[7];
  if (v3 != 0) {
    result = GameRoutine_1a09c50(v3);
  }
  v4 = a1[4];
  if (v4 != 0) {
    return GameRoutine_1a09c50(v4);
  }
  return result;
}

void GameHr_10d7320(__int64 a1, __n128 a2)
{
  char v3;
  int v4;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  int v22;

  if (GameData_21ec550 != 0) {
    v3 = *(_BYTE*)(GameData_21ec550 + 480);
    *(_BYTE*)(GameData_21ec550 + 480) = 2;
  }
  else {
    v3 = 1;
  }
  v4 = *(_DWORD*)(a1 + 56);
  if (*(_BYTE*)(a1 + 64) == 1 && v4 == 1) {
    GameRoutine_10d6f00(a1, a2);
    v4 = *(_DWORD*)(a1 + 56);
  }
  if (v4 == 4) {
    if (GameData_21ec550 == 0 ||
        *(float*)((v14 = GameData_21ec550 +
                         ((unsigned __int64)*(
                              unsigned __int8*)(GameData_21ec550 + 480)
                          << 6)) +
                  172) == *(float*)(v14 + 168)) {
      *(_DWORD*)(a1 + 56) = 5;
    }
    goto LABEL_38;
  }
  if (v4 == 3) {
    v11 =
        *(float*)(a1 + 60) +
        (float)((float)(*(float*)(GameData_2265ef0 + 48) * -16.683f) / 1000.0f);
    *(float*)(a1 + 60) = v11;
    if (v11 > 0.0f) {
      goto LABEL_38;
    }
    *(_DWORD*)(a1 + 56) = 4;
    if (GameData_21ec7b0 == 0) {
      goto LABEL_31;
    }
    v12 = *(_QWORD*)(GameData_21ec7b0 + 8);
    if (v12 != 0) {
      LODWORD(v12) = *(_DWORD*)(v12 + 112);
      if ((v12 & 0x40) != 0) {
        goto LABEL_38;
      }
      LOBYTE(v12) = (v12 & 0x1020) != 0;
    }
    if ((v12 & 1) == 0) {
    LABEL_31:
      if (*(_DWORD*)(a1 + 68) == -1) {
        if (GameData_21ec550 == 0) {
          return;
        }
        GameRoutine_809ba0(0.1f);
        v13 = GameData_21ec550;
        if (GameData_21ec550 == 0) {
          return;
        }
      LABEL_39:
        *(_BYTE*)(v13 + 480) = v3;
        return;
      }
    }
  LABEL_38:
    v13 = GameData_21ec550;
    if (GameData_21ec550 == 0) {
      return;
    }
    goto LABEL_39;
  }
  if (v4 != 2) {
    goto LABEL_38;
  }
  if (GameData_21ec550 != 0) {
    v6 = GameData_21ec550 +
         ((unsigned __int64)*(unsigned __int8*)(GameData_21ec550 + 480) << 6);
    if (*(float*)(v6 + 172) != *(float*)(v6 + 168)) {
      goto LABEL_38;
    }
  }
  GameRoutine_10dd6a0(GameData_21ec7b0);
  v7 = *(_QWORD*)(a1 + 24);
  v8 = *(_QWORD*)(a1 + 32);
  *(_BYTE*)(a1 + 48) = 1;
  while (v7 != v8) {
    if (*(_DWORD*)v7 != 0) {
      v9 = *(_QWORD*)(v7 + 16);
      if (v9 == 0 || *(_QWORD*)(v9 + 8) == -1) {
        goto LABEL_16;
      }
      v10 = *(_QWORD*)(v7 + 64);
      v22 = 0;
      if (v10 == 0) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(__int64, int*))(*(_QWORD*)v10 + 48LL))(v10, &v22);
      if ((*(_DWORD*)v7 & 0x80000000) != 0) {
      LABEL_16:
        *(_DWORD*)v7 = 0;
      }
    }
    v7 += 80;
  }
  v15 = *(_QWORD*)a1;
  v16 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(a1 + 48) = 0;
  if (v15 != v16) {
    do {
      v17 = *(_QWORD*)(v15 + 8);
      if (v17 != 0) {
        v18 = *(_QWORD*)(v15 + 16);
        v19 = *(_QWORD*)(v17 + 8) == -1 || v18 == 0;
        if (!v19 && (*(_WORD*)(v18 + 136) & 1) == 0) {
          GameRoutine_657a50(v18, 1);
        }
      }
      v15 += 24;
    } while (v15 != v16);
    v15 = *(_QWORD*)a1;
    v20 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)a1 != v20) {
      do {
        v21 = *(_QWORD*)(v20 - 16);
        if (v21 != 0) {
          GameRoutine_1a09c50(v21);
        }
        v20 -= 24;
      } while (v20 != v15);
    }
  }
  *(_QWORD*)(a1 + 8) = v15;
  *(_QWORD*)(a1 + 56) = 0x3E4CCCCD00000003LL;
  v13 = GameData_21ec550;
  if (GameData_21ec550 != 0) {
    goto LABEL_39;
  }
}

__int64 GameHr_10f1120(__int64 a1, char a2, __n128 a3)
{
  int v4;
  __int64 result;
  bool v9;
  __int64* v11;
  __int64* v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  bool v19;
  char v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  bool v33;
  unsigned __int64 v34;
  char v35;
  char v36;
  __int64 v37;
  __int64 v38;
  int* v39;
  __int64 v40;
  int v41;
  __int64 v42;
  unsigned __int8* v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  bool v48;
  __int64 v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  char v56;
  char v57;
  __int64 v58;
  __int64 v59;
  int* v60;
  __int64 v61;
  int v62;
  unsigned __int8* v63;

  if ((a2 & 1) != 0 || *(_QWORD*)(a1 + 48) == 0) {
    goto LABEL_25;
  }
  v4 = *(_DWORD*)(a1 + 64);
  result = 0;
  if (v4 <= 309207208) {
    if (v4 != 82343 && v4 != 309207023 && v4 != 309207191) {
      return result;
    }
  LABEL_25:
    v11 = GameData_212d448[0];
    v12 = GameData_212ee68[0];
    if (*GameData_212d448[0] == 0) {
      v20 = 0;
      goto LABEL_66;
    }
    v13 = *(_DWORD*)(a1 + 8);
    if (v13 <= 3) {
      v14 = *GameData_212d448[0] + 24LL * v13;
      v15 = *(_QWORD*)(v14 + 32);
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                  memory_order_relaxed);
        v16 = *(_QWORD*)(v14 + 40);
        if (*(_QWORD*)(v15 + 8) != -1 && v16 != 0) {
          v18 = *(_QWORD*)(v16 + 80);
          if (v18 != 0) {
            v19 = *(_QWORD*)(v18 + 8) == -1 || *(_QWORD*)(v16 + 88) == 0;
            if (!v19 && *(_QWORD*)(v15 + 8) != -1) {
              a3 = GameRoutine_1a09c50(v15);
              v20 = (*(_DWORD*)(v16 + 96) & 0xFFFFFFFD) != 0;
              v21 = *v11;
              if (*v11 == 0) {
                goto LABEL_66;
              }
            LABEL_43:
              v22 = *(_DWORD*)(a1 + 8);
              if (v22 <= 3) {
                v23 = v21 + 24LL * v22;
                v24 = *(_QWORD*)(v23 + 32);
                if (v24 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16),
                                            1u, memory_order_relaxed);
                  v25 = *(_QWORD*)(v23 + 40);
                  v26 = *(_QWORD*)(v24 + 8) == -1 || v25 == 0;
                  if (v26 || (v27 = *(_QWORD*)(v25 + 80)) == 0 ||
                      (*(_QWORD*)(v27 + 8) != -1
                           ? (v28 = *(_QWORD*)(v25 + 88) == 0)
                           : (v28 = true),
                       v28 || *(_QWORD*)(v24 + 8) == -1)) {
                    a3 = GameRoutine_1a09c50(v24);
                  }
                  else {
                    a3 = GameRoutine_1a09c50(v24);
                    v29 = *(_QWORD*)(v25 + 88);
                    v30 = *(_QWORD*)(v29 + 392);
                    v31 = *(_QWORD*)(v29 + 400);
                    if (v31 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v31 + 8), 1u,
                          memory_order_relaxed);
                    }
                    v32 = *(unsigned int*)(v30 + 11784);
                    v33 = v32 >= 0x22;
                    v34 = 0x36C260000uLL >> v32;
                    v35 = !v33;
                    v36 = v35 & v34;
                    if (v31 != 0 &&
                        atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64, long double))(
                          *(_QWORD*)v31 + 16LL))(v31, *(long double*)&a3);
                      a3 = GameRoutine_1a09c50(v31);
                    }
                    if ((v36 & 1) != 0) {
                      goto LABEL_78;
                    }
                  }
                }
              }
            LABEL_66:
              v37 = *(_QWORD*)(*v12 + 8);
              v38 = *(_QWORD*)(*v12 + 16) - v37;
              if (v38 != 0) {
                v39 = (int*)(v37 + 24);
                v40 = 0;
                while (1) {
                  v41 = *v39;
                  v39 += 26;
                  if (v41 == 1986002266) {
                    break;
                  }
                  if (0x4EC4EC4EC4EC4EC5LL * (v38 >> 3) == ++v40) {
                    goto LABEL_70;
                  }
                }
              }
              else {
              LABEL_70:
                LODWORD(v40) = -1;
              }
              if (*v11 == 0) {
              LABEL_102:
                v58 = *(_QWORD*)(*v12 + 8);
                v59 = *(_QWORD*)(*v12 + 16) - v58;
                if (v59 != 0) {
                  v60 = (int*)(v58 + 24);
                  v61 = 0;
                  while (1) {
                    v62 = *v60;
                    v60 += 26;
                    if (v62 == 1986002266) {
                      break;
                    }
                    if (0x4EC4EC4EC4EC4EC5LL * (v59 >> 3) == ++v61) {
                      goto LABEL_106;
                    }
                  }
                }
                else {
                LABEL_106:
                  LODWORD(v61) = -1;
                }
                if (*v11 == 0) {
                  return 0;
                }
                result = *(_QWORD*)(*v11 + 128);
                if (result == 0) {
                  return result;
                }
                if ((v61 & 0x80000000) != 0) {
                  v63 = nullptr;
                  return (GameRoutine_1096780(result, v63, v20 ^ 1u) & 1) != 0;
                }
                if (0x4EC4EC4EC4EC4EC5LL * (v59 >> 3) >
                    (unsigned __int64)(unsigned int)v61) {
                  v63 = (unsigned __int8*)(v58 + 104LL * (unsigned int)v61);
                  return (GameRoutine_1096780(result, v63, v20 ^ 1u) & 1) != 0;
                }
              LABEL_117:
                GameRoutine_d38e30(*(long double*)&a3);
              }
              v42 = *(_QWORD*)(*v11 + 128);
              if (v42 != 0) {
                if ((v40 & 0x80000000) != 0) {
                  v43 = nullptr;
                }
                else {
                  if (0x4EC4EC4EC4EC4EC5LL * (v38 >> 3) <=
                      (unsigned __int64)(unsigned int)v40) {
                    goto LABEL_117;
                  }
                  v43 = (unsigned __int8*)(v37 + 104LL * (unsigned int)v40);
                }
                if ((GameRoutine_1096780(v42, v43, v20) & 1) != 0) {
                  return 1;
                }
              }
            LABEL_78:
              if (*v11 != 0) {
                v44 = *(_DWORD*)(a1 + 12);
                if (v44 <= 3) {
                  v45 = *v11 + 24LL * v44;
                  v46 = *(_QWORD*)(v45 + 32);
                  if (v46 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v46 + 16), 1u,
                        memory_order_relaxed);
                    v47 = *(_QWORD*)(v45 + 40);
                    v48 = *(_QWORD*)(v46 + 8) == -1 || v47 == 0;
                    if (v48 || (v49 = *(_QWORD*)(v47 + 80)) == 0 ||
                        (*(_QWORD*)(v49 + 8) != -1
                             ? (v50 = *(_QWORD*)(v47 + 88) == 0)
                             : (v50 = true),
                         v50 || *(_QWORD*)(v46 + 8) == -1)) {
                      a3 = GameRoutine_1a09c50(v46);
                    }
                    else {
                      a3 = GameRoutine_1a09c50(v46);
                      v51 = *(_QWORD*)(v47 + 88);
                      v52 = *(_QWORD*)(v51 + 392);
                      v53 = *(_QWORD*)(v51 + 400);
                      if (v53 != 0) {
                        atomic_fetch_add_explicit(
                            (atomic_ullong* volatile)(v53 + 8), 1u,
                            memory_order_relaxed);
                      }
                      v54 = *(unsigned int*)(v52 + 11784);
                      v33 = v54 >= 0x22;
                      v55 = 0x36C260000uLL >> v54;
                      v56 = !v33;
                      v57 = v56 & v55;
                      if (v53 != 0 &&
                          atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64, long double))(
                            *(_QWORD*)v53 + 16LL))(v53, *(long double*)&a3);
                        a3 = GameRoutine_1a09c50(v53);
                      }
                      if ((v57 & 1) != 0) {
                        return 0;
                      }
                    }
                  }
                }
              }
              goto LABEL_102;
            }
          }
        }
        a3 = GameRoutine_1a09c50(v15);
      }
    }
    v20 = 0;
    v21 = *v11;
    if (*v11 == 0) {
      goto LABEL_66;
    }
    goto LABEL_43;
  }
  if ((unsigned int)(v4 - 603384300) <= 0x12 &&
      ((1 << (v4 + 20)) & 0x40007) != 0) {
    goto LABEL_25;
  }
  v9 = (unsigned int)(v4 - 603384486) > 0x12 ||
       ((1 << (v4 + 90)) & 0x40007) == 0;
  if (!v9 || v4 == 309207209) {
    goto LABEL_25;
  }
  return result;
}

__int64 GameHr_10f16c0(__int64 result, __n128 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  bool v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  bool v28;
  __int64 v29;
  __int64 v30;
  int* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  unsigned __int8* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  bool v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __n128 v46;
  __n128 v47;
  int v48;
  int v49;

  v2 = result;
  v3 = GameData_212d448[0];
  v4 = *GameData_212d448[0];
  if (*GameData_212d448[0] != 0) {
    v5 = *(_QWORD*)(v4 + 8);
    if (v5 != 0) {
      if ((*(_BYTE*)(v5 + 113) & 0x80) != 0) {
        return result;
      }
      v6 = result + 48;
      if (*(_QWORD*)(result + 48) == 0 && (*(_BYTE*)(v5 + 112) & 0x20) == 0) {
        return result;
      }
    }
    else {
      v6 = result + 48;
      if (*(_QWORD*)(result + 48) == 0) {
        return result;
      }
    }
    v7 = *(_DWORD*)(result + 8);
    if (v7 <= 3) {
      v8 = v4 + 24LL * v7;
      v9 = *(_QWORD*)(v8 + 32);
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
        v10 = *(_QWORD**)(v8 + 40);
        v11 = *(_QWORD*)(v9 + 8) == -1 || v10 == nullptr;
        if (v11 || (v12 = v10[10]) == 0 ||
            (*(_QWORD*)(v12 + 8) != -1 ? (v13 = v10[11] == 0) : (v13 = true),
             v13 || *(_QWORD*)(v9 + 8) == -1)) {
          a2 = GameRoutine_1a09c50(v9);
        }
        else {
          GameRoutine_1a09c50(v9);
          v14 = *(unsigned int*)(v2 + 64);
          v15 = *(_QWORD*)(v10[46] + 40LL);
          v16 = *(_QWORD*)(v15 + 392);
          v17 = *(_QWORD*)(v15 + 400);
          if (v17 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                      memory_order_relaxed);
            result = GameRoutine_1070c00(*(_QWORD*)(v16 + 11608), v14);
            if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v18 = result;
              (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
              a2 = GameRoutine_1a09c50(v17);
              result = v18;
            }
          }
          else {
            result = GameRoutine_1070c00(*(_QWORD*)(v16 + 11608), v14);
          }
          if ((*(_BYTE*)(result + 96) & 1) != 0) {
            return result;
          }
        }
      }
    }
  }
  else {
    v6 = result + 48;
    if (*(_QWORD*)(result + 48) == 0) {
      return result;
    }
  }
  v19 = (_QWORD*)*v3;
  if (*v3 == 0) {
    goto LABEL_62;
  }
  v20 = v19[1];
  if (v20 == 0) {
    goto LABEL_62;
  }
  if ((*(_BYTE*)(v20 + 112) & 8) != 0) {
    v21 = v19[15];
    if (v21 != 0) {
      v22 = *(_QWORD*)(v21 + 40);
      v23 = *(_QWORD*)(v22 + 176);
      if ((*(_BYTE*)(v22 + 168) & 1) == 0) {
        v23 = *(_BYTE*)(v22 + 168) >> 1;
      }
      if (v23 == 12) {
        if ((*(_BYTE*)(v22 + 168) & 1) != 0) {
          v24 = *(__int64**)(v22 + 184);
        }
        else {
          v24 = (__int64*)(v22 + 169);
        }
        v25 = *v24;
        v26 = *((unsigned int*)v24 + 2);
        v28 = v25 == *(_QWORD*)"GambitAwake1" && v26 == *(unsigned int*)"ake1";
      }
      else {
        v28 = false;
      }
      *(_BYTE*)(*(_QWORD*)(v22 + 96) + 149LL) = v28;
      v36 = v22 + 169;
      v37 = *(unsigned __int8*)(v22 + 168);
      v38 = *(_QWORD*)(v22 + 96);
      v39 = (v37 & 1) == 0;
      v42 = v22 + 176;
      v40 = *(_QWORD*)(v22 + 176);
      v41 = *(_QWORD*)(v42 + 8);
      v43 = v37 >> 1;
      if (v39) {
        v44 = v36;
      }
      else {
        v44 = v41;
      }
      if (v39) {
        v45 = v43;
      }
      else {
        v45 = v40;
      }
      return GameRoutine_e5a880(v38, v44, v45);
    }
  }
  if ((*(_BYTE*)(v20 + 113) & 0x10) == 0) {
    goto LABEL_62;
  }
  v29 = *(_QWORD*)(*GameData_212ee68[0] + 8);
  v30 = *(_QWORD*)(*GameData_212ee68[0] + 16) - v29;
  if (v30 != 0) {
    v31 = (int*)(v29 + 24);
    v32 = 0;
    while (1) {
      v33 = *v31;
      v31 += 26;
      if (v33 == 70809164) {
        break;
      }
      if (0x4EC4EC4EC4EC4EC5LL * (v30 >> 3) == ++v32) {
        goto LABEL_47;
      }
    }
  }
  else {
  LABEL_47:
    LODWORD(v32) = -1;
  }
  v34 = v19[16];
  if (v34 == 0) {
    goto LABEL_62;
  }
  if ((v32 & 0x80000000) != 0) {
    v35 = nullptr;
  }
  else {
    if (0x4EC4EC4EC4EC4EC5LL * (v30 >> 3) <=
        (unsigned __int64)(unsigned int)v32) {
      GameRoutine_d38e30(*(long double*)&a2);
    }
    v35 = (unsigned __int8*)(v29 + 104LL * (unsigned int)v32);
  }
  result = GameRoutine_1096780(v34, v35, 0);
  if ((result & 1) == 0) {
  LABEL_62:
    result = GameRoutine_10f0680(v2);
    if ((result & 1) == 0) {
      result = GameRoutine_10f0920(v2, v46);
      if ((result & 1) == 0) {
        result = GameRoutine_10f0fa0(v2);
        if ((result & 1) == 0) {
          if (*(_QWORD*)v6 == 0 || (v48 = *(_DWORD*)(*(_QWORD*)v6 + 8LL),
                                    v49 = *(_DWORD*)(v2 + 8), v48 != v49) &&
                                       ((v49 ^ v48) & 1) != 0) {
            result = GameRoutine_10f1120(v2, 0, v47);
            if ((result & 1) == 0) {
              result = GameRoutine_10f1a20("Auto", 0);
              if ((result & 1) == 0 && *v3 != 0) {
                result = *(_QWORD*)(*v3 + 128);
                if (result != 0) {
                  return GameRoutine_1097e40();
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

#pragma GCC visibility pop
