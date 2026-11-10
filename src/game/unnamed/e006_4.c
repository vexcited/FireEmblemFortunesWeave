#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1aa1728;

extern _UNKNOWN GameData_1abbaec;

extern __int64 (*GameData_2006198[])();

extern __int64 (*GameData_2010fd0[])();

extern __int64 (*GameData_2011030[])();

extern __int64 GameData_212bf68;

extern _UNKNOWN* GameData_212df28;

extern _UNKNOWN GameData_2167580;

extern int GameData_2236590;

extern _UNKNOWN GameData_2236598;

__int64 GameRoutine_10adb80(_QWORD, _QWORD, long double);

void GameRoutine_10b2280(__int64, unsigned int, float);

__int64 GameRoutine_1129780(_QWORD, _QWORD, long double);

__int64 GameRoutine_1a09b70(_QWORD);

__n128 GameRoutine_1a09b80(_QWORD);

__n128 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_98f140(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);

__int64 GameRoutine_a8c0c0(_QWORD);

void GameHr_10c0490(__int64 a1, __int64 a2, __n128 a3)
{
  __int64 v3;
  __int64 v4;
  _WORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  __int16 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char v23;

  v3 = *(_QWORD*)(a1 + 8);
  v20 = 0;
  v21 = 0;
  v19 = 0;
  v4 = *(_QWORD*)(v3 + 16);
  v22 = a2;
  if ((*(_QWORD*)(v4 + 384) & 0x10LL) != 0) {
    v5 = &GameData_1aa1728;
  }
  else {
    v5 = &GameData_1abbaec;
  }
  v6 = *(_DWORD*)v5;
  v18 = v5[2];
  v17 = v6;
  v23 = BYTE4(a2);
  if (*(_BYTE*)(v3 + 145) == 1) {
    v7 = *(_QWORD*)(v3 + 232);
    if (v7 != 0) {
      v8 = *(_QWORD*)(v7 + 88);
      if (v8 != 0) {
        ((uint32_t*)&a3)[0] = a2;
        v9 = *(_QWORD*)(v8 + 32);
        v10 = (a2 & 0x100000000LL) != 0 ? *(float*)&a2 : -1.0;
        if (v9 != 0) {
          v11 = *(_QWORD*)(v9 + 8);
          v12 = *(_QWORD*)(v8 + 40);
          if (v11 != -1 && v12 != 0) {
            v15 = *(_QWORD*)(v12 + 392);
            v14 = *(_QWORD*)(v12 + 400);
            if (v14 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
                a3 = GameRoutine_1a09c50(v14);
              }
            }
            v16 = GameRoutine_10adb80(v15 + 1432, &v17, *(long double*)&a3);
            if ((v16 & 0x80000000) == 0) {
              GameRoutine_10b2280(v8, v16, v10);
            }
          }
        }
      }
    }
  }
}

__int64 GameHr_10c05f0(__int64 result, __n128 a2)
{
  __int64 v2;
  __int64 v3;
  _WORD* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int16 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  int v24;
  char v25;

  v2 = *(_QWORD*)(result + 8);
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v3 = *(_QWORD*)(v2 + 16);
  v24 = 0;
  if ((*(_QWORD*)(v3 + 384) & 0x10LL) != 0) {
    v4 = &GameData_1aa1728;
  }
  else {
    v4 = &GameData_1abbaec;
  }
  v5 = *(_DWORD*)v4;
  v20 = v4[2];
  v19 = v5;
  v25 = 1;
  if (*(_BYTE*)(v2 + 145) == 1) {
    v6 = *(_QWORD*)(v2 + 232);
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 88);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v7 + 32);
        if (v8 != 0) {
          v9 = *(_QWORD*)(v8 + 8);
          v10 = *(_QWORD*)(v7 + 40);
          if (v9 != -1 && v10 != 0) {
            v13 = *(_QWORD*)(v10 + 392);
            v12 = *(_QWORD*)(v10 + 400);
            v14 = result;
            if (v12 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                a2 = GameRoutine_1a09c50(v12);
              }
            }
            v15 = GameRoutine_10adb80(v13 + 1432, &v19, *(long double*)&a2);
            result = v14;
            if ((v15 & 0x80000000) == 0) {
              GameRoutine_10b2280(v7, v15, 0.0);
              result = v14;
            }
          }
        }
      }
    }
  }
  v16 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v16 + 145) == 1) {
    v17 = *(_QWORD*)(v16 + 232);
    if (v17 != 0) {
      v18 = *(_QWORD*)(v17 + 88);
      if (v18 != 0) {
        *(_DWORD*)(v18 + 340) = 0;
      }
    }
  }
  return result;
}

void GameHr_10e9660(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  _BYTE* v22;
  bool v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  long double v52;
  int v53;
  __int64 v54;

  if (a1 != nullptr) {
    v2 = a1[49];
    v1 = a1[50];
    if (v1 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
        GameRoutine_1a09c50(v1);
      }
    }
    if (*(_QWORD*)(v2 + 11632) != *(_QWORD*)(v2 + 11640)) {
      v4 = a1[56];
      if (v4 != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236598,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)GameRoutine_1a09fd0(&GameData_2236598) != 0) {
          GameData_2236590 = GameRoutine_540(0, "FootprintModule2", 16);
          GameRoutine_1a09fe0(&GameData_2236598);
        }
        v5 = *(_QWORD*)(v4 + 512);
        v6 = v5;
        v7 = v5;
        while (v7 != *(_QWORD*)(v4 + 504)) {
          v8 = *(_DWORD*)(v7 - 16);
          v7 -= 16;
          v6 -= 16;
          if (v8 == GameData_2236590) {
            goto LABEL_17;
          }
        }
        goto LABEL_20;
      }
      v4 = a1[51];
      if (v4 != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236598,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)GameRoutine_1a09fd0(&GameData_2236598) != 0) {
          GameData_2236590 = GameRoutine_540(0, "FootprintModule2", 16);
          GameRoutine_1a09fe0(&GameData_2236598);
        }
        v5 = *(_QWORD*)(v4 + 512);
        v6 = v5;
        v9 = v5;
        do {
          if (v9 == *(_QWORD*)(v4 + 504)) {
            goto LABEL_20;
          }
          v10 = *(_DWORD*)(v9 - 16);
          v9 -= 16;
          v6 -= 16;
        } while (v10 != GameData_2236590);
      LABEL_17:
        if (v5 == v6 || *(_QWORD*)(v6 + 8) == 0) {
        LABEL_20:
          GameRoutine_1a09b70(&GameData_2167580);
          v11 = (_QWORD*)GameData_212bf68;
          v12 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 136, 16, 0);
          *(_QWORD*)(v12 + 8) = v4;
          *(_BYTE*)(v12 + 16) = 0;
          *(_DWORD*)(v12 + 17) = 33686018;
          v13 = GameRoutine_651b90(*v11, 32, 16, 0);
          *(_QWORD*)v13 = GameData_2006198;
          *(_QWORD*)(v13 + 8) = 0;
          *(_DWORD*)(v13 + 24) = 0;
          *(_QWORD*)(v12 + 32) = v13 + 24;
          *(_QWORD*)(v12 + 40) = v13;
          *(_QWORD*)(v12 + 48) = v13 + 24;
          *(_QWORD*)(v12 + 56) = v13;
          *(_QWORD*)(v13 + 16) = 0;
          v14 = (atomic_ullong*)(v13 + 16);
          atomic_fetch_add_explicit(v14, 1u, memory_order_relaxed);
          *(_QWORD*)(v12 + 64) = 0;
          *(_QWORD*)(v12 + 72) = 0;
          *(_QWORD*)(v12 + 80) = 0;
          *(_QWORD*)(v12 + 88) = 0;
          *(_QWORD*)(v12 + 96) = 0;
          *(_QWORD*)(v12 + 104) = 0;
          *(_QWORD*)(v12 + 112) = 0;
          *(_QWORD*)(v12 + 120) = 0;
          *(_QWORD*)(v12 + 128) = 0;
          *(_QWORD*)v12 = GameData_2010fd0;
          *(_QWORD*)(v12 + 24) = GameData_2011030;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236598,
                                    memory_order_acquire) &
               1) == 0) {
            v14 = (atomic_ullong*)GameRoutine_1a09fd0(&GameData_2236598);
            if ((_DWORD)v14 != 0) {
              GameData_2236590 = GameRoutine_540(0, "FootprintModule2", 16);
              v14 = (atomic_ullong*)GameRoutine_1a09fe0(&GameData_2236598);
            }
          }
          v15 = *(_QWORD*)(v4 + 504);
          v16 = *(_QWORD*)(v4 + 512);
          v17 = v16;
          v53 = GameData_2236590;
          v54 = v12;
          while (v17 != v15) {
            v18 = *(_DWORD*)(v17 - 16);
            v17 -= 16;
            if (v18 == GameData_2236590) {
              if ((*(_BYTE*)(v12 + 16) & 1) != 0) {
                goto LABEL_39;
              }
              goto LABEL_33;
            }
          }
          if (v15 == v16 &&
              (unsigned __int64)(*(_QWORD*)(v4 + 520) - v15) <= 0x6F) {
            v19 = GameRoutine_651b90(*v11, 112, 16, 0);
            *(_QWORD*)(v4 + 504) = v19;
            *(_QWORD*)(v4 + 512) = v19;
            *(_QWORD*)(v4 + 520) = v19 + 112;
            if (v16 != 0) {
              v20 = 128;
              if (*(_QWORD*)(*v11 + 200LL) == 0) {
                v20 = 56;
              }
              GameRoutine_1a0a4e0(*v11 + v20);
            }
          }
          v14 = (atomic_ullong*)GameRoutine_98f140(v4 + 504, &v53);
          if ((*(_BYTE*)(v12 + 16) & 1) == 0) {
          LABEL_33:
            *(_BYTE*)(v12 + 16) = 1;
            *(_BYTE*)(v12 + 17) &= ~2u;
            *(_BYTE*)(v12 + 18) &= ~2u;
            *(_BYTE*)(v12 + 19) &= ~2u;
            *(_BYTE*)(v12 + 20) &= ~2u;
            v21 = *(_BYTE**)(v12 + 8);
            v21[632] = 0;
            v21[664] = 0;
            v21[696] = 0;
            v21[728] = 0;
            v14 = (atomic_ullong*)(*(__int64 (**)(__int64))(*(_QWORD*)v12 +
                                                            64LL))(v12);
            v22 = *(_BYTE**)(v12 + 8);
            v23 = v22[300] == 3 && v22[301] == 3;
            if (v23 || v22[302] == 1) {
              v14 = (atomic_ullong*)(*(__int64 (**)(__int64))(*(_QWORD*)v12 +
                                                              72LL))(v12);
            }
          }
        LABEL_39:
          v24 = *(__int64**)(v4 + 536);
          v25 = *(_QWORD*)(v4 + 544);
          if ((unsigned __int64)v24 >= v25) {
            v27 = *(_QWORD*)(v4 + 528);
            v28 = (char*)v24 - v27;
            v29 = ((__int64)v24 - v27) >> 3;
            v30 = v29 + 1;
            if ((unsigned __int64)(v29 + 1) >> 61 != 0) {
              goto LABEL_74;
            }
            v31 = v25 - v27;
            if (v31 >> 2 > v30) {
              v30 = v31 >> 2;
            }
            if ((unsigned __int64)v31 >= 0x7FFFFFFFFFFFFFF8LL) {
              v32 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v32 = v30;
            }
            if (v32 != 0) {
              if (v32 >> 61 != 0) {
                goto LABEL_77;
              }
              v33 = GameRoutine_651b90(*v11, 8 * v32, 16, 0);
            }
            else {
              v33 = 0;
            }
            v34 = v33 + 8 * v32;
            v35 = (char*)v24 - v27;
            v36 = (__int64)&v28[v33 + -8 * v29];
            *(_QWORD*)&v28[v33] = v12;
            v26 = (__int64)&v28[v33 + 8];
            v14 = (atomic_ullong*)GameRoutine_1a0b950(v36, v27, v35);
            *(_QWORD*)(v4 + 528) = v36;
            *(_QWORD*)(v4 + 536) = v26;
            *(_QWORD*)(v4 + 544) = v34;
            if (v27 != 0) {
              v37 = 128;
              if (*(_QWORD*)(*v11 + 200LL) == 0) {
                v37 = 56;
              }
              v14 = (atomic_ullong*)GameRoutine_1a0a4e0(*v11 + v37);
            }
          }
          else {
            *v24 = v12;
            v26 = (__int64)(v24 + 1);
          }
          *(_QWORD*)(v4 + 536) = v26;
          v38 = *(__int64**)(v4 + 560);
          v39 = *(_QWORD*)(v4 + 568);
          if ((unsigned __int64)v38 < v39) {
            *v38 = v12;
            v40 = (__int64)(v38 + 1);
          LABEL_71:
            *(_QWORD*)(v4 + 560) = v40;
            GameRoutine_a8c0c0(v4);
            *(_BYTE*)(v4 + 576) = 1;
            *(__n128*)&v52 = GameRoutine_1a09b80(GameData_212df28);
            GameRoutine_1129780(v12, a1, v52);
            return;
          }
          v41 = *(_QWORD*)(v4 + 552);
          v42 = (char*)v38 - v41;
          v43 = ((__int64)v38 - v41) >> 3;
          v44 = v43 + 1;
          if ((unsigned __int64)(v43 + 1) >> 61 == 0) {
            v45 = v39 - v41;
            if (v45 >> 2 > v44) {
              v44 = v45 >> 2;
            }
            if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFF8LL) {
              v46 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v46 = v44;
            }
            if (v46 == 0) {
              v47 = 0;
            LABEL_67:
              v48 = v47 + 8 * v46;
              v49 = (char*)v38 - v41;
              v50 = (__int64)&v42[v47 + -8 * v43];
              *(_QWORD*)&v42[v47] = v12;
              v40 = (__int64)&v42[v47 + 8];
              GameRoutine_1a0b950(v50, v41, v49);
              *(_QWORD*)(v4 + 552) = v50;
              *(_QWORD*)(v4 + 560) = v40;
              *(_QWORD*)(v4 + 568) = v48;
              if (v41 != 0) {
                v51 = 128;
                if (*(_QWORD*)(*v11 + 200LL) == 0) {
                  v51 = 56;
                }
                GameRoutine_1a0a4e0(*v11 + v51);
              }
              goto LABEL_71;
            }
            if (v46 >> 61 == 0) {
              v47 = GameRoutine_651b90(*v11, 8 * v46, 16, 0);
              goto LABEL_67;
            }
          LABEL_77:
            GameRoutine_60a210(v14);
          }
        LABEL_74:
          GameRoutine_98f290(v14);
        }
      }
    }
  }
}

#pragma GCC visibility pop
