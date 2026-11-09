#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1c17624;
extern _QWORD GameData_1c17778[10];
extern _UNKNOWN* GameData_1f914a8;
extern char* GameData_2104400[11];
extern _UNKNOWN* GameData_2104500;
extern __int64 (*GameData_210a630[])();
extern __int64 GameData_210ba90;
extern __int64 (*GameData_210c840[])();
extern __int64 (*GameData_210ce70[])();
extern __int64 (*GameData_210d168[])();
extern __int64 (*GameData_210dc98[])();
extern __int64 (*GameData_210def8[])();
extern __int64 (*GameData_210e158[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c738[2];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern _UNKNOWN* GameData_212c8a8;
extern __int64* GameData_212d658[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d6a0[2];
extern __int64* GameData_212d6c8[2];
extern _UNKNOWN* GameData_212dfd0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e348;
extern __int64* GameData_212fd50[2];
extern _UNKNOWN* GameData_2131900;
extern _UNKNOWN* GameData_21319e0;
extern __int64 GameData_2131d58[15];
extern __int64 GameData_21c9608;
extern __int64 GameData_21c9f40;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
extern __int64 GameData_21cd0c8;
extern __int64 GameData_21f8020;
extern _UNKNOWN GameData_21f8028;
extern __int64 GameData_22416f0;
extern __int64 GameData_2259370;
extern _UNKNOWN GameData_2259378;
extern __int64 GameData_225ca88;
__int64 GameRoutine_102abb0(_QWORD);
__int64 GameRoutine_13633c0(void);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1434e70(_QWORD, _QWORD);
__int64 GameRoutine_155dea0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1560fb0(_QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1563e00(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1573500(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157b170(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157e3a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1583e80(void);
__int64 GameRoutine_158ebe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2830(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1625030(void);
__int64 GameRoutine_1638380(_QWORD);
void __attribute__((noreturn)) GameRoutine_163b3a0(void);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16e1ce0(_QWORD);
__int64 GameRoutine_16e63e0(_QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 GameRoutine_174d800(float, float);
__int64 GameRoutine_17859d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_178e950(_QWORD, _QWORD);
__int64 GameRoutine_17ab020(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_184ef30(_QWORD);
__int64 GameRoutine_184ff20(_QWORD, _QWORD);
__int64 GameRoutine_1855a20(_QWORD, _QWORD);
_QWORD* GameRoutine_1886290(__int64, _QWORD*);
__int64 GameRoutine_18863e0(__int64, _QWORD*, char);
__int64 GameRoutine_188bf10(__int64, __int64);
_QWORD* GameRoutine_1890080(__int64);
_QWORD* GameRoutine_1890220(__int64, int, int, int, char, char, int);
__int64* GameRoutine_1899480(__int64, unsigned int, char, char);
__int64 GameRoutine_189a3a0(_QWORD*, __int64);
__int64 GameRoutine_189a700(__int64);
__int64 GameRoutine_189da80(__int64, _QWORD*, __int64, __int64, __int64, int,
                            char);
__int64 GameRoutine_189f620(_QWORD);
__int64 GameRoutine_18a3b90(__int64, int, char, char);
__int64 GameRoutine_18a40e0(__int64*, __int64, int);
__int64 GameRoutine_18a4290(__int64*, int, char);
__int64 GameRoutine_18a4560(__int64, int);
__int64 GameRoutine_18a4810(__int64, int, int, int, __int64, char);
__int64 GameRoutine_18a5bc0(__int64);
void __attribute__((noreturn)) GameRoutine_18abd30(_QWORD);
_QWORD* GameRoutine_18bb1d0(__int64);
_QWORD* GameRoutine_18bb8b0(_QWORD*);
__int64 GameRoutine_18bc7d0(__int64, __int64);
__int64 GameRoutine_18bc9c0(__int64, _DWORD*);
_BYTE* GameRoutine_18cc630(_BYTE* result);
__int64 GameRoutine_18cdc40(__int64 result);
__int64 GameRoutine_18f4a00(_QWORD);
__int64 GameRoutine_18f9360(__int64);
__int64 GameRoutine_18fdde0(__int64, int*, char, __int64);
__int64 GameRoutine_1900180(void);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD, _QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a170(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b5c0(_QWORD);
__int64 GameRoutine_1a0b6e0(_QWORD);
__int64 GameRoutine_1a0b6f0(_QWORD);
__int64 GameRoutine_1a0b710(_QWORD, _QWORD);
__int64 GameRoutine_1a0b760(_QWORD);
__int64 GameRoutine_1a0b770(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_56b600(_QWORD);
__int64 GameRoutine_58f8a0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
__int64 GameRoutine_68bdf0(void);
__int64 GameRoutine_6c8530(_QWORD);
__int64 GameRoutine_6d5d00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6dd7a0(_QWORD, _QWORD);
__int64 GameRoutine_6ead60(_QWORD, _QWORD);
__int64 GameRoutine_6ed030(_QWORD);
__int64 GameRoutine_6ed1a0(_QWORD);
__int64 GameRoutine_6fbd80(_QWORD, _QWORD);
__int64 GameRoutine_7a7dc0(const char*, ...);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_93eed0(_QWORD);
__int64 GameRoutine_93f040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9b9250(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);

_QWORD* GameHr_18920d0(_QWORD* a1, __int64 a2, char a3)
{
  __int64 v4;
  _QWORD* result;
  __int64 v8;
  _QWORD* v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _BYTE v16[4];
  _BYTE v17[4];
  _QWORD v18[4];
  int v19;
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

  if (a2 != 0) {
    v4 = a1[136];
    a1[135] = a2;
    if (v4 != 0) {
      GameRoutine_156c910(v4, "%d", 1);
    }
    result = (_QWORD*)a1[138];
    if (result != nullptr) {
      result = (_QWORD*)GameRoutine_1a0a0c0(result);
      if (result != nullptr) {
        v8 = a1[137];
        v9 = result;
        if (v8 != 0) {
          LOBYTE(v18[0]) = 0;
          v10 = GameRoutine_6dd190(a2, v18, 1);
          v17[0] = 0;
          v11 = GameRoutine_6dd190(a2, v17, 0);
          v16[0] = 0;
          v12 = GameRoutine_6dd7a0(a2, v16);
          result = GameRoutine_1890220(v8, v10, v11, v12, a3 & 1, 0, -1);
        }
      LABEL_14:
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(_QWORD*))(*v9 + 16LL))(v9);
          return (_QWORD*)GameRoutine_1a09c50(v9);
        }
      }
    }
  }
  else {
    v13 = a1[136];
    if (v13 != 0) {
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v24 = -1;
      v14 = *GameData_212c738[0];
      v25 = -1;
      v26 = -1;
      v27 = -1;
      v28 = -1;
      v29 = -1;
      v30 = -1;
      v31 = -1;
      v32 = -1;
      v18[0] = GameData_212e348 + 2;
      v18[1] = 0xFFFF0001FFFF0000LL;
      v18[2] = 0xFFFF0004FFFF0002LL;
      v18[3] = 0xFFFF0006FFFF0005LL;
      v33 = 8;
      v19 = -65529;
      v20 = -65528;
      v15 = GameRoutine_a4dbe0(v14, "MID_Sys_ValueEmpty", 0, v18);
      GameRoutine_156c5d0(v13, v15, 0);
    }
    result = (_QWORD*)a1[138];
    if (result != nullptr) {
      result = (_QWORD*)GameRoutine_1a0a0c0(result);
      if (result != nullptr) {
        v9 = result;
        result = (_QWORD*)a1[137];
        if (result != nullptr) {
          result = GameRoutine_1890080((__int64)result);
        }
        goto LABEL_14;
      }
    }
  }
  return result;
}

__int64 GameHr_189dc40(__int64 result, __int64 a2, int a3, unsigned int a4,
                       char a5, float a6)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[2];

  if (*(_QWORD*)(result + 1080) == 0) {
    return result;
  }
  v11 = result;
  v23[0] = "Gauge";
  v23[1] = 5;
  result = (__int64)GameRoutine_1886290(result, v23);
  if (result == 0) {
    return result;
  }
  if ((*(_BYTE*)(*(_QWORD*)(v11 + 1080) + 88LL) & 1) == 0) {
    return result;
  }
  v13 = result;
  GameRoutine_189da80(v11, (_QWORD*)(v11 + 88), v12, result + 176, a2, a4,
                      a5 & 1);
  result = GameRoutine_1560fb0(v11 + 88, v13 + 176);
  if ((result & 1) == 0) {
    return result;
  }
  GameRoutine_1560070(&v21, v11 + 88, v13 + 176);
  if ((int)a4 < 1) {
    v16 = 1.0;
    v18 = 1.0;
    result = v22;
    if (v22 == 0) {
      return result;
    }
    goto LABEL_15;
  }
  v14 = a3 & ~(a3 >> 31);
  v15 = (float)a4;
  if (a4 < v14) {
    v14 = a4;
  }
  v16 = (float)v14 / v15;
  v17 = 0.0;
  if (a6 >= 0.0) {
    v17 = a6;
  }
  if (v17 > v15) {
    v17 = (float)a4;
  }
  v18 = v17 / v15;
  result = v22;
  if (v22 != 0) {
  LABEL_15:
    v19 = GameRoutine_1a0a0c0(result);
    if (v19 != 0) {
      v20 = v19;
      if (v21 != 0) {
        GameRoutine_174d800(v16, v18);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        GameRoutine_1a09c50(v20);
      }
    }
    result = v22;
    if (v22 != 0) {
      return GameRoutine_1a09c50(v22);
    }
  }
  return result;
}

__int64 GameHr_189f2c0(__int64 a1, unsigned __int16* a2)
{
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  __int64* v14;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  atomic_ullong* v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  const char* v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD v37[2];
  _QWORD v38[4];
  int v39;
  __int64 v40;
  __int64 v41;
  _QWORD v42[2];

  if (*a2 != 0) {
    v33 = "Icon";
    v34 = 4;
    v5 = GameRoutine_1886290(a1, &v33);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                              memory_order_acquire) &
         1) == 0) {
      v29 = GameRoutine_1a09fd0(&GameData_21f8028, v4);
      if ((_DWORD)v29 != 0) {
        GameData_21f8020 = GameRoutine_9b9250(v29, v30);
        GameRoutine_1a09fe0(&GameData_21f8028);
      }
    }
    if (v5 != nullptr) {
      v6 = (__int64*)(*(__int64 (**)(_QWORD*))(*v5 + 16LL))(v5);
      if (v6 == &GameData_21f8020) {
        goto LABEL_11;
      }
      do {
        v6 = (__int64*)*v6;
      } while (v6 != &GameData_21f8020 && v6 != nullptr);
      if (v6 != nullptr) {
      LABEL_11:
        v8 = *(_QWORD*)(a1 + 96);
        if (v8 != 0) {
          v9 = GameRoutine_1a0a0c0(v8);
          v10 = *(_QWORD*)(a1 + 88);
          v11 = v9;
          if (v9 == 0) {
            v10 = 0;
          }
        }
        else {
          v10 = 0;
          v11 = 0;
        }
        v25 = v5[29];
        v37[0] = 0;
        v37[1] = 0;
        v33 = nullptr;
        v34 = 0;
        memset(v38, 0, sizeof(v38));
        v40 = 0;
        v41 = 0;
        v42[0] = v10;
        v42[1] = v11;
        v35 = 0;
        v36 = v37;
        v39 = 1065353216;
        if (v11 == 0) {
          GameRoutine_155dea0(&v33, v42, v25);
          goto LABEL_43;
        }
        v26 = (atomic_ullong*)(v11 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        GameRoutine_155dea0(&v33, v42, v25);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (atomic_fetch_add(v26, 0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_43;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          GameRoutine_1a09c50(v11);
          if (atomic_fetch_add(v26, 0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_43;
          }
        }
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        GameRoutine_1a09c50(v11);
      LABEL_43:
        GameRoutine_157b170(
            &v33, *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2),
            (*((_BYTE*)a2 + 3) & 8) != 0);
        GameRoutine_155e140(&v33);
        v27 = v41;
        if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          GameRoutine_1a09c50(v27);
        }
        GameRoutine_1564060(v38);
        GameRoutine_1563f90(&v36, v37[0]);
        if (v34 != 0) {
          GameRoutine_1a09c50(v34);
        }
        v24 = 1;
        return v24 & 1;
      }
    }
    v33 = "Icon";
    v34 = 4;
    v13 = GameRoutine_1886290(a1, &v33);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                              memory_order_acquire) &
         1) == 0) {
      v31 = GameRoutine_1a09fd0(&GameData_2259378, v12);
      if ((_DWORD)v31 != 0) {
        GameData_2259370 = GameRoutine_9b9250(v31, v32);
        GameRoutine_1a09fe0(&GameData_2259378);
      }
    }
    if (v13 != nullptr) {
      v14 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v13 + 16LL))(v13);
      if (v14 == &GameData_2259370) {
        goto LABEL_24;
      }
      do {
        v14 = (__int64*)*v14;
      } while (v14 != &GameData_2259370 && v14 != nullptr);
      if (v14 != nullptr) {
      LABEL_24:
        v16 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
        if (v16 != 0) {
          v17 = *(_QWORD*)(v16 + 24);
          v18 = *(unsigned __int8*)(v17 + 560);
          v19 = (v18 & 1) == 0;
          if ((v18 & 1) != 0) {
            v20 = *(_QWORD*)(v17 + 568);
          }
          else {
            v20 = v18 >> 1;
          }
          v21 = *(_QWORD*)(v17 + 576);
          v22 = v17 + 561;
          if (!v19) {
            v22 = v21;
          }
          if (v20 != 0) {
            v23 = v22;
          }
          else {
            v23 = 0;
          }
          v24 = GameRoutine_136a920(GameData_22416f0 + 1264, v13, 0, 2, v23);
        }
        else {
          v24 = 0;
        }
        v13[88] = v13[88] & 0xFE | v24 & 1;
        return v24 & 1;
      }
    }
  }
  GameRoutine_189f620(a1);
  v24 = 0;
  return v24 & 1;
}

__int64 GameHr_18a0790(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[2];

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 8);
      v4 = result;
      if (v3 != 0) {
        GameRoutine_1899480(v3, 1u, 0, 0);
        *(_BYTE*)(v3 + 1072) = 6;
        GameRoutine_189a700(v3);
        GameRoutine_188bf10(v3, (__int64)"MID_Sys_Empty");
        v5 = *(_QWORD*)(v3 + 1032);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 88) |= 1u;
        }
        v6[0] = "NumNone";
        v6[1] = 7;
        result = GameRoutine_18863e0(v3, v6, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return GameRoutine_1a09c50(v4);
      }
    }
  }
  return result;
}

__int64 GameHr_18a6430(__int64 a1, char* a2, char* a3, __int64 a4)
{
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD v28[2];
  unsigned __int64 v29;
  unsigned __int64 v30;
  int v31;
  int v32;
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
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _BYTE v46[4];
  _DWORD v47[4];

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  if (a2 != nullptr) {
    v7 = a2;
  }
  else {
    v7 = &GameData_1a9f09e;
  }
  v33 = -1;
  v34 = -1;
  v35 = -1;
  v36 = -1;
  v8 = *GameData_212c738[0];
  v37 = -1;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v29 = 0xFFFF0004FFFF0002LL;
  v30 = 0xFFFF0006FFFF0005LL;
  v31 = -65529;
  v32 = -65528;
  v9 = GameData_212e348 + 2;
  v28[0] = GameData_212e348 + 2;
  v28[1] = 0xFFFF0001FFFF0000LL;
  v45 = 8;
  v10 = GameRoutine_a4dbe0(v8, v7, 0, v28);
  if (v10 != 0) {
    v11 = v10;
    v12 = GameRoutine_15621a0(a1 + 88, "T_Txt");
    if (v12 != 0) {
      GameRoutine_156c5d0(v12, v11, 0);
    }
  }
  if (a3 == nullptr) {
    a3 = &GameData_1a9f09e;
  }
  GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
  v33 = -1;
  v34 = -1;
  v35 = -1;
  v36 = -1;
  v37 = -1;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  v13 = *GameData_212c738[0];
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v28[0] = v9;
  v28[1] = 0xFFFF0001FFFF0000LL;
  v29 = 0xFFFF0004FFFF0002LL;
  v30 = 0xFFFF0006FFFF0005LL;
  v31 = -65529;
  v32 = -65528;
  v45 = 8;
  v14 = GameRoutine_a4dbe0(v13, a3, 0, v28);
  if (v14 != 0) {
    v15 = v14;
    v16 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v16 != 0) {
      GameRoutine_156c5d0(v16, v15, 0);
    }
  }
  v17 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v17 != 0) {
    v18 = v17;
    v19 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v19 != 0) {
      GameRoutine_190a0c0(v28, v47, v46, v19, *(_QWORD*)(v19 + 216));
      v20 = v47[0];
      v21 = v47[1];
    }
    else {
      v20 = 0;
      v21 = 0;
    }
    v22 = *(_BYTE*)(v18 + 88);
    *(_DWORD*)(v18 + 80) = v20;
    *(_DWORD*)(v18 + 84) = v21;
    *(_BYTE*)(v18 + 88) = v22 | 0x10;
  }
  GameRoutine_1562cf0(a1 + 88, "Icon");
  v23 = GameRoutine_155f480(a1 + 88, "Icon");
  if (v23 != 0) {
    v24 = GameRoutine_1a0a6c0(v23, GameData_212d670[0], GameData_212d678[0], 0);
    if (v24 != 0) {
      if (a4 != 0) {
        *(_QWORD*)(*(_QWORD*)(GameRoutine_58f8a0(v24) + 24) + 8LL) = a4;
      }
      else {
        GameRoutine_136a920(GameData_22416f0 + 1264, v24, 0, 7, "IconEmpty");
      }
    }
  }
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOn");
  GameRoutine_1562cf0(a1 + 88, "NumNone");
  GameRoutine_1562cf0(a1 + 88, "StatusDetailOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOn_Status02");
  v25 = GameRoutine_1563e00(a1 + 88, "A_InfoDetail");
  if (v25 != 0) {
    GameRoutine_56b600(v25);
  }
  return GameRoutine_18a5bc0(a1);
}

__int64 GameHr_18a7690(__int64 a1, _WORD* a2, __int64 a3, char a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  char v17;
  __int64 v18;
  __int64 v19;
  _QWORD v21[4];
  int v22;
  int v23;
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
  __int64 v36;
  _BYTE v37[4];
  _DWORD v38[2];

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  GameRoutine_1562cf0(a1 + 88, "StatusDetailOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status08");
  *(_BYTE*)(a1 + 1060) = 1;
  if (*a2 != 0) {
    v8 = GameRoutine_6ed1a0(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * (unsigned __int16)*a2));
    if (v8 == 0) {
      goto LABEL_7;
    }
  }
  else {
    GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v9 = *GameData_212c738[0];
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = -1;
    v35 = -1;
    v21[0] = GameData_212e348 + 2;
    v21[1] = 0xFFFF0001FFFF0000LL;
    v21[2] = 0xFFFF0004FFFF0002LL;
    v21[3] = 0xFFFF0006FFFF0005LL;
    v36 = 8;
    v22 = -65529;
    v23 = -65528;
    v8 = GameRoutine_a4dbe0(v9, "MID_Sys_ValueEmptyLong", 0, v21);
    if (v8 == 0) {
      goto LABEL_7;
    }
  }
  v10 = v8;
  v11 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v11 != 0) {
    GameRoutine_156c5d0(v11, v10, 0);
  }
LABEL_7:
  v12 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v12 != 0) {
    v13 = v12;
    v14 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v14 != 0) {
      GameRoutine_190a0c0(v21, v38, v37, v14, *(_QWORD*)(v14 + 216));
      v15 = v38[0];
      v16 = v38[1];
    }
    else {
      v15 = 0;
      v16 = 0;
    }
    v17 = *(_BYTE*)(v13 + 88);
    *(_DWORD*)(v13 + 80) = v15;
    *(_DWORD*)(v13 + 84) = v16;
    *(_BYTE*)(v13 + 88) = v17 | 0x10;
  }
  v18 = a1 + 88;
  if ((a4 & 1) != 0) {
    GameRoutine_15d2830(v18, a2, a3);
  }
  else {
    GameRoutine_15d2000(v18, a2, a3);
  }
  v19 = GameRoutine_1563e00(a1 + 88, "A_InfoDetail");
  if (v19 != 0) {
    GameRoutine_56b600(v19);
  }
  return GameRoutine_18a5bc0(a1);
}

__int64 GameHr_18a78d0(__int64 a1, _WORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  char v13;
  __int64 v14;
  _QWORD v16[4];
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
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
  _BYTE v32[4];
  _DWORD v33[2];

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  if (*a2 != 0) {
    v4 = GameRoutine_6ed1a0(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * (unsigned __int16)*a2));
    if (v4 == 0) {
      goto LABEL_7;
    }
  }
  else {
    GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v5 = *GameData_212c738[0];
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v16[0] = GameData_212e348 + 2;
    v16[1] = 0xFFFF0001FFFF0000LL;
    v16[2] = 0xFFFF0004FFFF0002LL;
    v16[3] = 0xFFFF0006FFFF0005LL;
    v31 = 8;
    v17 = -65529;
    v18 = -65528;
    v4 = GameRoutine_a4dbe0(v5, "MID_Sys_ValueEmptyLong", 0, v16);
    if (v4 == 0) {
      goto LABEL_7;
    }
  }
  v6 = v4;
  v7 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v7 != 0) {
    GameRoutine_156c5d0(v7, v6, 0);
  }
LABEL_7:
  v8 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v8 != 0) {
    v9 = v8;
    v10 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v10 != 0) {
      GameRoutine_190a0c0(v16, v33, v32, v10, *(_QWORD*)(v10 + 216));
      v11 = v33[0];
      v12 = v33[1];
    }
    else {
      v11 = 0;
      v12 = 0;
    }
    v13 = *(_BYTE*)(v9 + 88);
    *(_DWORD*)(v9 + 80) = v11;
    *(_DWORD*)(v9 + 84) = v12;
    *(_BYTE*)(v9 + 88) = v13 | 0x10;
  }
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  GameRoutine_1562cf0(a1 + 88, "StatusDetailOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v14 = GameRoutine_1563e00(a1 + 88, "A_InfoDetail");
  if (v14 != 0) {
    GameRoutine_56b600(v14);
  }
  return GameRoutine_18a5bc0(a1);
}

__int64 GameHr_18a80b0(__int64 a1, unsigned int* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  char v15;
  __int64 v16;
  _QWORD v18[4];
  int v19;
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
  _BYTE v34[4];
  _DWORD v35[2];

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  v4 = *a2;
  if ((*a2 & 0xFFF) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v4 & 0xFFF));
    if (v5 == 0) {
      goto LABEL_8;
    }
    v6 = GameRoutine_6fbd80(v5, *(unsigned __int8*)(v5 + 304) -
                                    (HIBYTE(v4) & 0x1F));
    if (v6 == 0) {
      goto LABEL_8;
    }
  }
  else {
    GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v7 = *GameData_212c738[0];
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v18[0] = GameData_212e348 + 2;
    v18[1] = 0xFFFF0001FFFF0000LL;
    v18[2] = 0xFFFF0004FFFF0002LL;
    v18[3] = 0xFFFF0006FFFF0005LL;
    v33 = 8;
    v19 = -65529;
    v20 = -65528;
    v6 = GameRoutine_a4dbe0(v7, "MID_Sys_ValueEmptyLong", 0, v18);
    if (v6 == 0) {
      goto LABEL_8;
    }
  }
  v8 = v6;
  v9 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v9 != 0) {
    GameRoutine_156c5d0(v9, v8, 0);
  }
LABEL_8:
  v10 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v10 != 0) {
    v11 = v10;
    v12 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v12 != 0) {
      GameRoutine_190a0c0(v18, v35, v34, v12, *(_QWORD*)(v12 + 216));
      v13 = v35[0];
      v14 = v35[1];
    }
    else {
      v13 = 0;
      v14 = 0;
    }
    v15 = *(_BYTE*)(v11 + 88);
    *(_DWORD*)(v11 + 80) = v13;
    *(_DWORD*)(v11 + 84) = v14;
    *(_BYTE*)(v11 + 88) = v15 | 0x10;
  }
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  GameRoutine_1562cf0(a1 + 88, "StatusDetailOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v16 = GameRoutine_1563e00(a1 + 88, "A_InfoDetail");
  if (v16 != 0) {
    GameRoutine_56b600(v16);
  }
  return GameRoutine_18a5bc0(a1);
}

__int64 GameHr_18a82e0(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v8;
  const char* v9;
  const char* v10;
  const char* v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  char* v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  char v30;
  int v31;
  int v32;
  __int64 v33;
  int* v34;
  int v35;
  int v36;
  int* v37;
  int v38;
  int v39;
  int v40;
  char v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int* v46;
  int v47;
  int* v48;
  __int64 v49;
  const char* v50;
  __int64 v51;
  bool v52;
  __int64 v53;
  const char* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 result;
  __int64 v61;
  int v62;
  _QWORD v63[3];
  char v64[4];
  _DWORD v65[2];
  int* v66;
  int* v67;
  __int64 v68;

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v8 = 0;
  memset(v63, 0, sizeof(v63));
  switch (a2) {
  case 0u:
    v8 = 32;
    v9 = "MID_H_Sys_Attack";
    goto LABEL_23;
  case 1u:
    GameRoutine_60a020(v63, "MID_H_Sys_Physicalattack");
    v8 = LOBYTE(v63[0]);
    break;
  case 2u:
    v8 = 42;
    v11 = "MID_H_Sys_Magicattack";
    goto LABEL_18;
  case 3u:
    v8 = 42;
    v11 = "MID_H_Sys_Otherattack";
    goto LABEL_18;
  case 0xAu:
    v8 = 26;
    v10 = "MID_H_Sys_Hit";
    goto LABEL_28;
  case 0xBu:
    v8 = 42;
    v11 = "MID_H_Sys_Attackspeed";
    goto LABEL_18;
  case 0xCu:
    v8 = 30;
    LOBYTE(v63[0]) = 30;
    strcpy((char*)v63 + 1, "MID_H_Sys_Avoid");
    break;
  case 0xDu:
    v8 = 36;
    BYTE3(v63[2]) = 0;
    *(_WORD*)((char*)&v63[2] + 1) = 27745;
    v12 = "MID_H_Sys_Critical";
    LOBYTE(v63[0]) = 36;
    goto LABEL_21;
  case 0xEu:
    v8 = 32;
    v9 = "MID_H_Sys_Secure";
  LABEL_23:
    LOBYTE(v63[0]) = 32;
    v17 = *(_QWORD*)v9;
    v16 = *((_QWORD*)v9 + 1);
    BYTE1(v63[2]) = 0;
    goto LABEL_24;
  case 0xFu:
    v8 = 40;
    BYTE5(v63[2]) = 0;
    LOBYTE(v63[0]) = 40;
    *(_DWORD*)((char*)&v63[2] + 1) = 1852795252;
    v12 = "MID_H_Sys_Protection";
  LABEL_21:
    v17 = *(_QWORD*)v12;
    v16 = *((_QWORD*)v12 + 1);
  LABEL_24:
    *(_QWORD*)((char*)v63 + 1) = v17;
    *(_QWORD*)((char*)&v63[1] + 1) = v16;
    break;
  case 0x10u:
    v8 = 42;
    v11 = "MID_H_Sys_Enduremagic";
  LABEL_18:
    LOBYTE(v63[0]) = 42;
    v13 = *(_QWORD*)v11;
    v14 = *((_QWORD*)v11 + 1);
    v15 = *(_QWORD*)(v11 + 13);
    BYTE6(v63[2]) = 0;
    *(_QWORD*)((char*)v63 + 1) = v13;
    *(_QWORD*)((char*)&v63[1] + 1) = v14;
    *(_QWORD*)((char*)&v63[1] + 6) = v15;
    break;
  case 0x11u:
    v8 = 26;
    v10 = "MID_H_Sys_Rng";
    goto LABEL_28;
  case 0x1Cu:
    v8 = 24;
    LOBYTE(v63[0]) = 24;
    strcpy((char*)v63 + 1, "MID_H_Sys_Hp");
    break;
  case 0x1Du:
    v8 = 26;
    v10 = "MID_H_Sys_Str";
    goto LABEL_28;
  case 0x1Eu:
    v8 = 26;
    v10 = "MID_H_Sys_Mag";
    goto LABEL_28;
  case 0x1Fu:
    v8 = 26;
    v10 = "MID_H_Sys_Tec";
    goto LABEL_28;
  case 0x20u:
    v8 = 26;
    v10 = "MID_H_Sys_Spd";
    goto LABEL_28;
  case 0x21u:
    v8 = 26;
    v10 = "MID_H_Sys_Lck";
    goto LABEL_28;
  case 0x22u:
    v8 = 26;
    v10 = "MID_H_Sys_Def";
    goto LABEL_28;
  case 0x23u:
    v8 = 26;
    v10 = "MID_H_Sys_Res";
    goto LABEL_28;
  case 0x24u:
    v8 = 26;
    v10 = "MID_H_Sys_Cha";
    goto LABEL_28;
  case 0x25u:
    v8 = 26;
    v10 = "MID_H_Sys_Mov";
  LABEL_28:
    LOBYTE(v63[0]) = 26;
    v18 = *(_QWORD*)v10;
    v19 = *(_QWORD*)(v10 + 5);
    BYTE6(v63[1]) = 0;
    *(_QWORD*)((char*)v63 + 1) = v18;
    *(_QWORD*)((char*)v63 + 6) = v19;
    break;
  default:
    break;
  }
  v20 = v8 >> 1;
  v21 = (v8 & 1) == 0;
  v22 = v63[1];
  if (v21) {
    v22 = v20;
    v23 = (char*)v63 + 1;
  }
  else {
    v23 = (char*)v63[2];
  }
  if (v22 != 0) {
    v24 = v23;
  }
  else {
    v24 = &GameData_1a9f09e;
  }
  GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
  GameRoutine_1562060(a1 + 88, "L_InfoTxt/T_Txt", v24);
  v25 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v25 != 0) {
    v26 = v25;
    v27 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v27 != 0) {
      GameRoutine_190a0c0(&v66, v65, v64, v27, *(_QWORD*)(v27 + 216));
      v28 = v65[0];
      v29 = v65[1];
    }
    else {
      v28 = 0;
      v29 = 0;
    }
    v30 = *(_BYTE*)(v26 + 88);
    *(_DWORD*)(v26 + 80) = v28;
    *(_DWORD*)(v26 + 84) = v29;
    *(_BYTE*)(v26 + 88) = v30 | 0x10;
  }
  if (a2 <= 0x25) {
    if (((1LL << a2) & 0x3FC07) != 0) {
      GameRoutine_1562cf0(a1 + 88, "StatusDetail01");
      v31 = GameRoutine_18a3b90(a3, a2, 0, 0);
      v32 = GameRoutine_18a3b90(a3, a2, 1, 0);
      GameRoutine_18a4290((__int64*)(a1 + 88), v31, 1);
      if ((a4 & 1) != 0 || v31 < 0) {
        goto LABEL_93;
      }
      v67 = nullptr;
      v68 = 0;
      v66 = nullptr;
      GameRoutine_18a40e0((__int64*)&v66, a3, a2);
      v33 = (__int64)v66;
      v34 = v67;
      if (v66 == v67) {
        v35 = 1;
        v36 = 0;
      }
      else {
        v35 = 1;
        v36 = 0;
        v37 = v66;
        do {
          if ((unsigned int)*v37 >= 3) {
            GameRoutine_18a4810(a1 + 88, v35++, *v37, v37[1], a3, 1);
            v36 += v37[1];
          }
          v37 += 2;
        } while (v37 != v34);
      }
      if (v32 != v36 + v31) {
        GameRoutine_18a4810(a1 + 88, v35++, 0, v32 - (v36 + v31), a3, 1);
      }
      v49 = GameRoutine_7a7dc0("StatusDetail%02d", v35);
      GameRoutine_1562cf0(a1 + 88, v49);
      v50 = "Wdw_TitleOff_Status04";
      v51 = a1 + 88;
      if (v35 <= 2) {
        v50 = "Wdw_TitleOff_Status02";
      }
      v52 = v35 <= 4;
      goto LABEL_79;
    }
    if (((1LL << a2) & 0x3FF0000000LL) != 0) {
      GameRoutine_1562cf0(a1 + 88, "StatusDetail01");
      v38 = GameRoutine_18a3b90(a3, a2, 0, 1);
      v39 = GameRoutine_18a3b90(a3, a2, 0, 0);
      v40 = GameRoutine_18a3b90(a3, a2, 1, 0);
      if (a2 == 37) {
        v41 = *((_BYTE*)*(&GameData_1f914a8 + *(unsigned __int8*)(a3 + 804)) +
                10);
        v38 = GameRoutine_1573500(a3, 1, 1);
        LOBYTE(v66) = v41;
        v62 = GameRoutine_6dd190(a3, &v66, 1);
      }
      else {
        v62 = v40;
      }
      v42 = GameRoutine_6c8530(a3);
      if (v38 == 0 && v39 != 0 && v42 != 0) {
        v38 = *(__int16*)(v42 + 2LL * GameData_1c17778[a2 - 28] + 288);
      }
      v43 = 1;
      GameRoutine_18a4290((__int64*)(a1 + 88), v38, 1);
      v44 = GameRoutine_6c8530(a3);
      if (v44 != 0) {
        v45 = v44 + 2LL * *((unsigned __int8*)*(&GameData_1f914a8 +
                                                *(unsigned __int8*)(a3 + 804)) +
                            GameData_1c17778[a2 - 28]);
        if (*(_WORD*)(v45 + 310) != 0) {
          GameRoutine_18a4560(a1 + 88, *(__int16*)(v45 + 310));
          v43 = 2;
        }
      }
      if ((a4 & 1) == 0 && (v39 & 0x80000000) == 0) {
        v67 = nullptr;
        v68 = 0;
        v66 = nullptr;
        GameRoutine_18a40e0((__int64*)&v66, a3, a2);
        v33 = (__int64)v66;
        v46 = v67;
        if (v66 == v67) {
          v47 = 0;
        }
        else {
          v47 = 0;
          v48 = v66;
          do {
            if ((unsigned int)*v48 >= 3) {
              GameRoutine_18a4810(a1 + 88, v43++, *v48, v48[1], a3, 0);
              v47 += v48[1];
            }
            v48 += 2;
          } while (v48 != v46);
        }
        if (v62 != v47 + v39) {
          GameRoutine_18a4810(a1 + 88, v43++, 0, v62 - (v47 + v39), a3, 0);
        }
        v53 = GameRoutine_7a7dc0("StatusDetail%02d", v43);
        GameRoutine_1562cf0(a1 + 88, v53);
        v50 = "Wdw_TitleOff_Status04";
        v51 = a1 + 88;
        if (v43 <= 2) {
          v50 = "Wdw_TitleOff_Status02";
        }
        v52 = v43 <= 4;
      LABEL_79:
        if (v52) {
          v54 = v50;
        }
        else {
          v54 = "Wdw_TitleOff_Status08";
        }
        GameRoutine_1562cf0(v51, v54);
        v55 = GameRoutine_1563e00(a1 + 88, "A_StatusDetail");
        if (v55 != 0) {
          GameRoutine_56b600(v55);
          v56 = *(_QWORD*)(a1 + 96);
          if (v56 != 0) {
            v57 = GameRoutine_1a0a0c0(v56);
            if (v57 != 0) {
              v58 = v57;
              if (*(_QWORD*)(a1 + 88) != 0) {
                GameRoutine_13633c0();
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
                GameRoutine_1a09c50(v58);
              }
            }
          }
        }
        if (v33 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v59 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v59);
        }
      }
    LABEL_93:
      result = GameRoutine_18a5bc0(a1);
      if ((v63[0] & 1) != 0 && v63[2] != 0) {
        v61 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v61 = 56;
        }
        return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v61);
      }
      return result;
    }
  }
  GameRoutine_18a4290((__int64*)(a1 + 88), 0, 0);
  GameRoutine_1562cf0(a1 + 88, "StatusDetailOff");
  goto LABEL_93;
}

__int64 GameHr_18a8f40(__int64 a1, __int64 a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  char v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int* v24;
  char* v25;
  _DWORD* v26;
  int v27;
  int v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  int* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  _DWORD* v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  int* v64;
  __int64 v65;
  const char* v66;
  const char* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  char* v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  char* v79;
  __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  char* v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  char* v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  char* v92;
  char* v93;
  __int64 v94;
  int v95;
  int v96;
  int v97;
  _QWORD v98[4];
  int v99;
  int v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  char v114[4];
  _DWORD v115[4];

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
  v101 = -1;
  v102 = -1;
  v103 = -1;
  v104 = -1;
  v6 = *GameData_212c738[0];
  v105 = -1;
  v106 = -1;
  v107 = -1;
  v108 = -1;
  v109 = -1;
  v110 = -1;
  v111 = -1;
  v112 = -1;
  v98[0] = GameData_212e348 + 2;
  v98[1] = 0xFFFF0001FFFF0000LL;
  v98[2] = 0xFFFF0004FFFF0002LL;
  v98[3] = 0xFFFF0006FFFF0005LL;
  v113 = 8;
  v99 = -65529;
  v100 = -65528;
  v7 = GameRoutine_a4dbe0(v6, "MID_H_Sys_Phy", 0, v98);
  if (v7 != 0) {
    v8 = v7;
    v9 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v9 != 0) {
      GameRoutine_156c5d0(v9, v8, 0);
    }
  }
  v10 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v10 != 0) {
    v11 = v10;
    v12 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v12 != 0) {
      GameRoutine_190a0c0(v98, v115, v114, v12, *(_QWORD*)(v12 + 216));
      v13 = v115[0];
      v14 = v115[1];
    }
    else {
      v13 = 0;
      v14 = 0;
    }
    v15 = *(_BYTE*)(v11 + 88);
    *(_DWORD*)(v11 + 80) = v13;
    *(_DWORD*)(v11 + 84) = v14;
    *(_BYTE*)(v11 + 88) = v15 | 0x10;
  }
  GameRoutine_1562cf0(a1 + 88, "StatusDetail01");
  LOBYTE(v98[0]) = 1;
  v16 = GameRoutine_6dd190(a2, v98, 0);
  LOBYTE(v98[0]) = 1;
  v17 = GameRoutine_6dd190(a2, v98, 1);
  v18 = *(char*)(a2 + 807);
  v19 = v17;
  GameRoutine_18a4290((__int64*)(a1 + 88), (v16 / 5) & ~((v16 / 5) >> 31), 0);
  if ((a3 & 1) == 0 && v16 >= 5) {
    v95 = v19;
    v96 = v18;
    v97 = (v16 / 5) & ~((v16 / 5) >> 31);
    LOBYTE(v98[0]) = 1;
    v20 = (int)GameRoutine_6dd190(a2, v98, 1) / 5 + *(char*)(a2 + 807);
    v21 = v20 & ~(v20 >> 31);
    GameRoutine_93f040(v98, a2, 0);
    LOBYTE(v115[0]) = 1;
    v22 = (int)GameRoutine_6dd190(a2, v115, 1) / 5 + *(char*)(a2 + 807);
    v23 = v21 - (v22 & ~(v22 >> 31));
    if (v23 != 0) {
      v26 = (_DWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8, 16, 0);
      v24 = v26 + 2;
      v25 = (char*)v26;
      *v26 = 0;
      v26[1] = v23;
    }
    else {
      v24 = nullptr;
      v25 = nullptr;
    }
    GameRoutine_93eed0(v98);
    LOBYTE(v98[0]) = 1;
    v27 = (int)GameRoutine_6dd190(a2, v98, 1) / 5 + *(char*)(a2 + 807);
    v28 = v27 & ~(v27 >> 31);
    GameRoutine_93f040(v98, a2, 2);
    LOBYTE(v115[0]) = 1;
    v29 = GameRoutine_6dd190(a2, v115, 1);
    v30 = (int)v29 / 5 + *(char*)(a2 + 807);
    v31 = v30 & ~(v30 >> 31);
    v32 = v28 - v31;
    if (v28 == v31) {
      v33 = v24;
      v34 = (__int64)v25;
    }
    else {
      v35 = (char*)v24 - v25;
      v36 = ((char*)v24 - v25) >> 3;
      v37 = v36 + 1;
      if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
        goto LABEL_108;
      }
      if (v35 >> 2 > v37) {
        v37 = v35 >> 2;
      }
      if (v35 >= 0x7FFFFFFFFFFFFFF8LL) {
        v38 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v38 = v37;
      }
      if (v38 != 0) {
        if (v38 >> 61 != 0) {
          goto LABEL_109;
        }
        v39 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v38, 16, 0);
      }
      else {
        v39 = 0;
      }
      v40 = (_DWORD*)(v39 + v35);
      v24 = (int*)(v39 + 8 * v38);
      v34 = v39 + v35 - 8 * v36;
      *v40 = 2;
      v40[1] = v32;
      v33 = (int*)(v39 + v35 + 8);
      GameRoutine_1a0b950(v34, v25, v35);
      if (v25 != nullptr) {
        v41 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v41 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v41);
      }
    }
    GameRoutine_93eed0(v98);
    LOBYTE(v98[0]) = 1;
    v42 = (int)GameRoutine_6dd190(a2, v98, 1) / 5 + *(char*)(a2 + 807);
    v43 = v42 & ~(v42 >> 31);
    GameRoutine_93f040(v98, a2, 1);
    LOBYTE(v115[0]) = 1;
    v29 = GameRoutine_6dd190(a2, v115, 1);
    v44 = (int)v29 / 5 + *(char*)(a2 + 807);
    v45 = v44 & ~(v44 >> 31);
    v46 = v43 - v45;
    if (v43 != v45) {
      if (v33 >= v24) {
        v74 = (char*)v33 - v34;
        v75 = ((__int64)v33 - v34) >> 3;
        v76 = v75 + 1;
        if ((unsigned __int64)(v75 + 1) >> 61 != 0) {
          goto LABEL_108;
        }
        if (((__int64)v24 - v34) >> 2 > v76) {
          v76 = ((__int64)v24 - v34) >> 2;
        }
        if ((unsigned __int64)v24 - v34 >= 0x7FFFFFFFFFFFFFF8LL) {
          v77 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v77 = v76;
        }
        if (v77 != 0) {
          if (v77 >> 61 != 0) {
            goto LABEL_109;
          }
          v78 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v77, 16, 0);
        }
        else {
          v78 = 0;
        }
        v88 = &v74[v78];
        v24 = (int*)(v78 + 8 * v77);
        *(_DWORD*)v88 = 1;
        *((_DWORD*)v88 + 1) = v46;
        v47 = (__int64)&v74[v78 + -8 * v75];
        v33 = (int*)&v74[v78 + 8];
        GameRoutine_1a0b950(v47, v34, v74);
        if (v34 != 0) {
          v89 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v89 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v89);
        }
      LABEL_34:
        GameRoutine_93eed0(v98);
        LOBYTE(v98[0]) = 1;
        v48 = (int)GameRoutine_6dd190(a2, v98, 1) / 5 + *(char*)(a2 + 807);
        v49 = v48 & ~(v48 >> 31);
        GameRoutine_93f040(v98, a2, 3);
        LOBYTE(v115[0]) = 1;
        v29 = GameRoutine_6dd190(a2, v115, 1);
        v50 = (int)v29 / 5 + *(char*)(a2 + 807);
        v51 = v50 & ~(v50 >> 31);
        v52 = v49 - v51;
        if (v49 != v51) {
          if (v33 >= v24) {
            v79 = (char*)v33 - v47;
            v80 = ((__int64)v33 - v47) >> 3;
            v81 = v80 + 1;
            if ((unsigned __int64)(v80 + 1) >> 61 != 0) {
              goto LABEL_108;
            }
            if (((__int64)v24 - v47) >> 2 > v81) {
              v81 = ((__int64)v24 - v47) >> 2;
            }
            if ((unsigned __int64)v24 - v47 >= 0x7FFFFFFFFFFFFFF8LL) {
              v82 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v82 = v81;
            }
            if (v82 != 0) {
              if (v82 >> 61 != 0) {
                goto LABEL_109;
              }
              v83 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v82, 16,
                                       0);
            }
            else {
              v83 = 0;
            }
            v90 = &v79[v83];
            v24 = (int*)(v83 + 8 * v82);
            v53 = (__int64)&v79[v83 + -8 * v80];
            *(_DWORD*)v90 = 3;
            *((_DWORD*)v90 + 1) = v52;
            v33 = (int*)&v79[v83 + 8];
            GameRoutine_1a0b950(v53, v47, v79);
            if (v47 != 0) {
              v91 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v91 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v91);
            }
          LABEL_38:
            GameRoutine_93eed0(v98);
            LOBYTE(v98[0]) = 1;
            v54 = (int)GameRoutine_6dd190(a2, v98, 1) / 5 + *(char*)(a2 + 807);
            v55 = v54 & ~(v54 >> 31);
            GameRoutine_93f040(v98, a2, 4);
            LOBYTE(v115[0]) = 1;
            v29 = GameRoutine_6dd190(a2, v115, 1);
            v56 = (int)v29 / 5 + *(char*)(a2 + 807);
            v57 = v56 & ~(v56 >> 31);
            v58 = v55 - v57;
            if (v55 == v57) {
            LABEL_41:
              v59 = v97;
              v60 = v53;
            LABEL_42:
              v61 = (v95 / 5 + v96) & ~((v95 / 5 + v96) >> 31);
              GameRoutine_93eed0(v98);
              if ((int*)v60 == v33) {
                v62 = 1;
                v63 = 0;
              }
              else {
                v62 = 1;
                v63 = 0;
                v64 = (int*)v60;
                do {
                  if ((unsigned int)*v64 >= 3) {
                    GameRoutine_18a4810(a1 + 88, v62++, *v64, v64[1], a2, 1);
                    v63 += v64[1];
                  }
                  v64 += 2;
                } while (v64 != v33);
              }
              if (v61 != v63 + v59) {
                GameRoutine_18a4810(a1 + 88, v62++, 0, v61 - (v63 + v59), a2,
                                    1);
              }
              v65 = GameRoutine_7a7dc0("StatusDetail%02d", v62);
              GameRoutine_1562cf0(a1 + 88, v65);
              v66 = "Wdw_TitleOff_Status04";
              if (v62 <= 2) {
                v66 = "Wdw_TitleOff_Status02";
              }
              if (v62 <= 4) {
                v67 = v66;
              }
              else {
                v67 = "Wdw_TitleOff_Status08";
              }
              GameRoutine_1562cf0(a1 + 88, v67);
              v68 = GameRoutine_1563e00(a1 + 88, "A_StatusDetail");
              if (v68 != 0) {
                GameRoutine_56b600(v68);
                v69 = *(_QWORD*)(a1 + 96);
                if (v69 != 0) {
                  v70 = GameRoutine_1a0a0c0(v69);
                  if (v70 != 0) {
                    v71 = v70;
                    if (*(_QWORD*)(a1 + 88) != 0) {
                      GameRoutine_13633c0();
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
                      GameRoutine_1a09c50(v71);
                    }
                  }
                }
              }
              if (v60 != 0) {
                v72 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v72 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v72);
              }
              return GameRoutine_18a5bc0(a1);
            }
            if (v33 < v24) {
              *v33 = 4;
              v33[1] = v58;
              v33 += 2;
              goto LABEL_41;
            }
            v84 = (char*)v33 - v53;
            v85 = ((__int64)v33 - v53) >> 3;
            v86 = v85 + 1;
            if ((unsigned __int64)(v85 + 1) >> 61 == 0) {
              if (((__int64)v24 - v53) >> 2 > v86) {
                v86 = ((__int64)v24 - v53) >> 2;
              }
              if ((unsigned __int64)v24 - v53 >= 0x7FFFFFFFFFFFFFF8LL) {
                v86 = 0x1FFFFFFFFFFFFFFFLL;
              }
              if (v86 == 0) {
                v87 = 0;
              LABEL_104:
                v59 = v97;
                v92 = &v84[v87];
                v93 = (char*)v33 - v53;
                *(_DWORD*)v92 = 4;
                *((_DWORD*)v92 + 1) = v58;
                v60 = (__int64)&v84[v87 + -8 * v85];
                v33 = (int*)&v84[v87 + 8];
                GameRoutine_1a0b950(v60, v53, v93);
                if (v53 != 0) {
                  v94 = 128;
                  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                    v94 = 56;
                  }
                  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v94);
                }
                goto LABEL_42;
              }
              if (v86 >> 61 == 0) {
                v87 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v86,
                                         16, 0);
                goto LABEL_104;
              }
            LABEL_109:
              GameRoutine_60a210(v29);
            }
          LABEL_108:
            GameRoutine_18abd30(v29);
          }
          *v33 = 3;
          v33[1] = v52;
          v33 += 2;
        }
        v53 = v47;
        goto LABEL_38;
      }
      *v33 = 1;
      v33[1] = v46;
      v33 += 2;
    }
    v47 = v34;
    goto LABEL_34;
  }
  return GameRoutine_18a5bc0(a1);
}

__int64 GameHr_18a9940(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v5;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  char v22;
  __int64 v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int* v30;
  unsigned __int64 v31;
  __int64 i;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int* v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  __int64 v57;
  const char* v58;
  const char* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v66;
  int v67;
  int v68;
  __int64 v69;
  int* v70;
  _QWORD v71[2];
  unsigned __int64 v72;
  unsigned __int64 v73;
  int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  char v89[4];
  _DWORD v90[4];

  v5 = a2;
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v7 = GameData_212c738[0];
  v8 = GameData_212e348;
  if (v5 > 0xA) {
    GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
    v12 = &GameData_1a9f09e;
  }
  else {
    v9 = *GameData_212c738[0];
    v76 = -1;
    v77 = -1;
    v78 = -1;
    v79 = -1;
    v80 = -1;
    v81 = -1;
    v82 = -1;
    v83 = -1;
    v10 = GameData_2104400[a2];
    v84 = -1;
    v85 = -1;
    v86 = -1;
    v87 = -1;
    v71[0] = GameData_212e348 + 2;
    v71[1] = 0xFFFF0001FFFF0000LL;
    v72 = 0xFFFF0004FFFF0002LL;
    v73 = 0xFFFF0006FFFF0005LL;
    v88 = 8;
    v74 = -65529;
    v75 = -65528;
    v11 = GameRoutine_a4dbe0(v9, v10, 0, v71);
    GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
    if (v11 != 0) {
      GameRoutine_60a020(*v7 + 14704, v11);
    }
    v12 = "MID_H_Sys_GrowthRate";
  }
  v13 = *v7;
  v76 = -1;
  v77 = -1;
  v78 = -1;
  v79 = -1;
  v80 = -1;
  v81 = -1;
  v82 = -1;
  v83 = -1;
  v84 = -1;
  v85 = -1;
  v86 = -1;
  v87 = -1;
  v71[0] = v8 + 2;
  v71[1] = 0xFFFF0001FFFF0000LL;
  v72 = 0xFFFF0004FFFF0002LL;
  v73 = 0xFFFF0006FFFF0005LL;
  v88 = 8;
  v74 = -65529;
  v75 = -65528;
  v14 = GameRoutine_a4dbe0(v13, v12, 0, v71);
  if (v14 != 0) {
    v15 = v14;
    v16 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v16 != 0) {
      GameRoutine_156c5d0(v16, v15, 0);
    }
  }
  v17 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v17 != 0) {
    v18 = v17;
    v19 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v19 != 0) {
      GameRoutine_190a0c0(v71, v90, v89, v19, *(_QWORD*)(v19 + 216));
      v20 = v90[0];
      v21 = v90[1];
    }
    else {
      v20 = 0;
      v21 = 0;
    }
    v22 = *(_BYTE*)(v18 + 88);
    *(_DWORD*)(v18 + 80) = v20;
    *(_DWORD*)(v18 + 84) = v21;
    *(_BYTE*)(v18 + 88) = v22 | 0x10;
  }
  GameRoutine_1562cf0(a1 + 88, "StatusDetail01");
  v23 = *(_QWORD*)(a3 + 392);
  v24 = *(_WORD*)(v23 + 2LL * a2 + 540);
  if (v24 == 0) {
    v25 = GameRoutine_6c8530(a3);
    v23 = *(_QWORD*)(a3 + 392);
    v24 = *(_WORD*)(v25 + 2LL * a2 + 354);
  }
  v26 = *(_QWORD*)(a3 + 400);
  LOBYTE(v71[0]) = a2;
  v27 = GameRoutine_6d5d00(a3, v71, v23, v26, 0);
  v28 = *(_QWORD*)(a3 + 392);
  v29 = *(_QWORD*)(a3 + 400);
  v68 = v27;
  LOBYTE(v71[0]) = a2;
  v67 = GameRoutine_6d5d00(a3, v71, v28, v29, 1);
  v69 = a1;
  v66 = v24;
  GameRoutine_18a4290((__int64*)(a1 + 88), v24, 0);
  v70 = nullptr;
  v30 = nullptr;
  v31 = 0;
  for (i = 0; i != 20; i += 4) {
    v33 = *(_QWORD*)(a3 + 392);
    v34 = *(_QWORD*)(a3 + 400);
    v35 = *(_DWORD*)((char*)&GameData_1c17624 + i);
    LOBYTE(v71[0]) = a2;
    v36 = GameRoutine_6d5d00(a3, v71, v33, v34, 1);
    GameRoutine_93f040(v71, a3, v35);
    v37 = *(_QWORD*)(a3 + 392);
    v38 = *(_QWORD*)(a3 + 400);
    LOBYTE(v90[0]) = a2;
    v39 = GameRoutine_6d5d00(a3, v90, v37, v38, 1);
    v40 = GameRoutine_93eed0(v71);
    v41 = v36 - v39;
    if (v41 != 0) {
      if ((unsigned __int64)v30 < v31) {
        *v30 = v35;
        v30[1] = v41;
        v30 += 2;
      }
      else {
        v42 = (char*)((char*)v30 - (char*)v70);
        v43 = ((char*)v30 - (char*)v70) >> 3;
        v44 = v43 + 1;
        if ((unsigned __int64)(v43 + 1) >> 61 != 0) {
          GameRoutine_18abd30(v40);
        }
        if ((__int64)(v31 - (_QWORD)v70) >> 2 > v44) {
          v44 = (__int64)(v31 - (_QWORD)v70) >> 2;
        }
        if (v31 - (unsigned __int64)v70 >= 0x7FFFFFFFFFFFFFF8LL) {
          v45 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v45 = v44;
        }
        if (v45 != 0) {
          if (v45 >> 61 != 0) {
            GameRoutine_60a210(v40);
          }
          v46 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v45, 16, 0);
        }
        else {
          v46 = 0;
        }
        v47 = &v42[v46];
        v31 = v46 + 8 * v45;
        *(_DWORD*)v47 = v35;
        *((_DWORD*)v47 + 1) = v41;
        v48 = (__int64)&v42[v46 + -8 * v43];
        v30 = (int*)&v42[v46 + 8];
        GameRoutine_1a0b950(v48, v70, v42);
        if (v70 != nullptr) {
          v49 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v49 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v49);
        }
        v70 = (int*)v48;
      }
    }
  }
  if (v68 == v66) {
    v50 = 1;
  }
  else {
    GameRoutine_18a4560(v69 + 88, v68 - v66);
    v50 = 2;
  }
  v51 = v70;
  if (v70 == v30) {
    v52 = 0;
  }
  else {
    v52 = 0;
    do {
      if ((unsigned int)*v51 >= 3) {
        v53 = v50 + 1;
        GameRoutine_18a4810(v69 + 88, v50, *v51, v51[1], 0, 0);
        v50 = v53;
        v52 += v51[1];
      }
      v51 += 2;
    } while (v51 != v30);
  }
  v54 = v67 - (v52 + v68);
  if (v67 != v52 + v68) {
    v55 = v50 + 1;
    GameRoutine_18a4810(v69 + 88, v50, 0, v54, 0, 0);
    v50 = v55;
  }
  v56 = v50;
  v57 = GameRoutine_7a7dc0("StatusDetail%02d", v50);
  GameRoutine_1562cf0(v69 + 88, v57);
  v58 = "Wdw_TitleOff_Status04";
  if (v56 <= 2) {
    v58 = "Wdw_TitleOff_Status02";
  }
  if (v56 <= 4) {
    v59 = v58;
  }
  else {
    v59 = "Wdw_TitleOff_Status08";
  }
  GameRoutine_1562cf0(v69 + 88, v59);
  v60 = GameRoutine_1563e00(v69 + 88, "A_StatusDetail");
  if (v60 != 0) {
    GameRoutine_56b600(v60);
    v61 = *(_QWORD*)(v69 + 96);
    if (v61 != 0) {
      v62 = GameRoutine_1a0a0c0(v61);
      if (v62 != 0) {
        v63 = v62;
        if (*(_QWORD*)(v69 + 88) != 0) {
          GameRoutine_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
          GameRoutine_1a09c50(v63);
        }
      }
    }
  }
  if (v70 != nullptr) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v64 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v64);
  }
  return GameRoutine_18a5bc0(v69);
}

__int64 GameHr_18a9f60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  char v11;
  __int64 v12;
  _QWORD v14[4];
  int v15;
  int v16;
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
  __int64 v28;
  __int64 v29;
  _BYTE v30[4];
  _DWORD v31[2];

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v2 = *GameData_212c738[0];
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v14[0] = GameData_212e348 + 2;
  v14[1] = 0xFFFF0001FFFF0000LL;
  v14[2] = 0xFFFF0004FFFF0002LL;
  v14[3] = 0xFFFF0006FFFF0005LL;
  v29 = 8;
  v15 = -65529;
  v16 = -65528;
  v3 = GameRoutine_a4dbe0(v2, "MID_H_Sys_StatusTotal", 0, v14);
  if (v3 != 0) {
    v4 = v3;
    v5 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0);
    }
  }
  v6 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v6 != 0) {
    v7 = v6;
    v8 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v8 != 0) {
      GameRoutine_190a0c0(v14, v31, v30, v8, *(_QWORD*)(v8 + 216));
      v9 = v31[0];
      v10 = v31[1];
    }
    else {
      v9 = 0;
      v10 = 0;
    }
    v11 = *(_BYTE*)(v7 + 88);
    *(_DWORD*)(v7 + 80) = v9;
    *(_DWORD*)(v7 + 84) = v10;
    *(_BYTE*)(v7 + 88) = v11 | 0x10;
  }
  v12 = GameRoutine_1563e00(a1 + 88, "A_InfoDetail");
  if (v12 != 0) {
    GameRoutine_56b600(v12);
  }
  return GameRoutine_18a5bc0(a1);
}

__int64 GameHr_18aadd0(__int64 a1, _QWORD* a2, char a3)
{
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  char v27;
  __int64 v28;
  _QWORD v30[2];
  unsigned __int64 v31;
  unsigned __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _BYTE v48[4];
  _DWORD v49[2];

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  v6 = GameData_212c738[0];
  v7 = GameData_212e348;
  if ((a3 & 1) != 0) {
    GameRoutine_1562cf0(a1 + 88, "InfoTitleOn");
    GameRoutine_1562cf0(a1 + 88, "NumNone");
    GameRoutine_1562cf0(a1 + 88, "Icon");
    v8 = GameRoutine_155f480(a1 + 88, "Icon");
    if (v8 != 0) {
      v8 = GameRoutine_1a0a6c0(v8, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841930(v8, a2[8], 0);
    v9 = *v6;
    v10 = a2[4];
    v35 = -1;
    v36 = -1;
    v37 = -1;
    v38 = -1;
    v39 = -1;
    v40 = -1;
    v41 = -1;
    v42 = -1;
    v43 = -1;
    v44 = -1;
    v45 = -1;
    v46 = -1;
    v30[0] = v7 + 2;
    v30[1] = 0xFFFF0001FFFF0000LL;
    v31 = 0xFFFF0004FFFF0002LL;
    v32 = 0xFFFF0006FFFF0005LL;
    v47 = 8;
    v33 = -65529;
    v34 = -65528;
    v11 = GameRoutine_a4dbe0(v9, v10, 0, v30);
    if (v11 != 0) {
      v12 = v11;
      v13 = GameRoutine_15621a0(a1 + 88, "T_Txt");
      if (v13 != 0) {
        GameRoutine_156c5d0(v13, v12, 0);
      }
    }
    v14 = a2[5];
    if (v14 == 0) {
      goto LABEL_13;
    }
  }
  else {
    GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
    v14 = a2[5];
    if (v14 == 0) {
    LABEL_13:
      GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
      v17 = v7 + 2;
      v18 = *v6;
      v16 = "MID_Sys_ValueEmptyLong";
      goto LABEL_14;
    }
  }
  v15 = *v6;
  v35 = -1;
  v36 = -1;
  v37 = -1;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v30[0] = v7 + 2;
  v30[1] = 0xFFFF0001FFFF0000LL;
  v31 = 0xFFFF0004FFFF0002LL;
  v32 = 0xFFFF0006FFFF0005LL;
  v47 = 8;
  v33 = -65529;
  v34 = -65528;
  if (GameRoutine_a4dbe0(v15, v14, 0, v30) == 0) {
    goto LABEL_13;
  }
  v16 = (const char*)a2[5];
  if (v16 == nullptr) {
    goto LABEL_17;
  }
  v17 = v7 + 2;
  v18 = *v6;
LABEL_14:
  v35 = -1;
  v36 = -1;
  v37 = -1;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v30[0] = v17;
  v30[1] = 0xFFFF0001FFFF0000LL;
  v31 = 0xFFFF0004FFFF0002LL;
  v32 = 0xFFFF0006FFFF0005LL;
  v47 = 8;
  v33 = -65529;
  v34 = -65528;
  v19 = GameRoutine_a4dbe0(v18, v16, 0, v30);
  if (v19 != 0) {
    v20 = v19;
    v21 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v21 != 0) {
      GameRoutine_156c5d0(v21, v20, 0);
    }
  }
LABEL_17:
  v22 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v22 != 0) {
    v23 = v22;
    v24 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v24 != 0) {
      GameRoutine_190a0c0(v30, v49, v48, v24, *(_QWORD*)(v24 + 216));
      v25 = v49[0];
      v26 = v49[1];
    }
    else {
      v25 = 0;
      v26 = 0;
    }
    v27 = *(_BYTE*)(v23 + 88);
    *(_DWORD*)(v23 + 80) = v25;
    *(_DWORD*)(v23 + 84) = v26;
    *(_BYTE*)(v23 + 88) = v27 | 0x10;
  }
  GameRoutine_1562cf0(a1 + 88, "StatusDetailOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v28 = GameRoutine_1563e00(a1 + 88, "A_InfoDetail");
  if (v28 != 0) {
    GameRoutine_56b600(v28);
  }
  return GameRoutine_18a5bc0(a1);
}

__int64 GameHr_18ab160(__int64 a1, __int64 a2, char a3)
{
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  const char* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  char v29;
  __int64 v30;
  _QWORD v32[2];
  unsigned __int64 v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _BYTE v50[4];
  _DWORD v51[2];

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  v6 = GameData_212c738[0];
  v7 = GameData_212e348;
  if ((a3 & 1) != 0) {
    GameRoutine_1562cf0(a1 + 88, "InfoTitleOn");
    GameRoutine_1562cf0(a1 + 88, "NumNone");
    GameRoutine_1562cf0(a1 + 88, "Icon");
    v8 = GameRoutine_155f480(a1 + 88, "Icon");
    if (v8 != 0) {
      v9 = GameRoutine_1a0a6c0(v8, GameData_212d670[0], GameData_212d678[0], 0);
      if (a2 != 0 && v9 != 0) {
        if ((unsigned int)*(unsigned __int8*)(a2 + 32) - 1 > 4) {
          v10 = &GameData_1a9f09e;
        }
        else {
          v10 = (char*)*(&GameData_2104500 +
                         (unsigned __int8)(*(_BYTE*)(a2 + 32) - 1));
        }
        GameRoutine_136a920(GameData_22416f0 + 1264, v9, 0, 2, v10);
      }
    }
    v11 = *v6;
    v12 = *(_QWORD*)(a2 + 40);
    v37 = -1;
    v38 = -1;
    v39 = -1;
    v40 = -1;
    v41 = -1;
    v42 = -1;
    v43 = -1;
    v44 = -1;
    v45 = -1;
    v46 = -1;
    v47 = -1;
    v48 = -1;
    v32[0] = v7 + 2;
    v32[1] = 0xFFFF0001FFFF0000LL;
    v33 = 0xFFFF0004FFFF0002LL;
    v34 = 0xFFFF0006FFFF0005LL;
    v49 = 8;
    v35 = -65529;
    v36 = -65528;
    v13 = GameRoutine_a4dbe0(v11, v12, 0, v32);
    if (v13 != 0) {
      v14 = v13;
      v15 = GameRoutine_15621a0(a1 + 88, "T_Txt");
      if (v15 != 0) {
        GameRoutine_156c5d0(v15, v14, 0);
      }
    }
  }
  else {
    GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  }
  v16 = *(_QWORD*)(a2 + 48);
  if (v16 == 0) {
    goto LABEL_17;
  }
  v17 = *v6;
  v37 = -1;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v47 = -1;
  v48 = -1;
  v32[0] = v7 + 2;
  v32[1] = 0xFFFF0001FFFF0000LL;
  v33 = 0xFFFF0004FFFF0002LL;
  v34 = 0xFFFF0006FFFF0005LL;
  v49 = 8;
  v35 = -65529;
  v36 = -65528;
  if (GameRoutine_a4dbe0(v17, v16, 0, v32) != 0) {
    v18 = *(const char**)(a2 + 48);
    if (v18 == nullptr) {
      goto LABEL_21;
    }
    v19 = v7 + 2;
    v20 = *v6;
  }
  else {
  LABEL_17:
    GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
    v19 = v7 + 2;
    v20 = *v6;
    v18 = "MID_Sys_ValueEmptyLong";
  }
  v37 = -1;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v47 = -1;
  v48 = -1;
  v32[0] = v19;
  v32[1] = 0xFFFF0001FFFF0000LL;
  v33 = 0xFFFF0004FFFF0002LL;
  v34 = 0xFFFF0006FFFF0005LL;
  v49 = 8;
  v35 = -65529;
  v36 = -65528;
  v21 = GameRoutine_a4dbe0(v20, v18, 0, v32);
  if (v21 != 0) {
    v22 = v21;
    v23 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v23 != 0) {
      GameRoutine_156c5d0(v23, v22, 0);
    }
  }
LABEL_21:
  v24 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v24 != 0) {
    v25 = v24;
    v26 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v26 != 0) {
      GameRoutine_190a0c0(v32, v51, v50, v26, *(_QWORD*)(v26 + 216));
      v27 = v51[0];
      v28 = v51[1];
    }
    else {
      v27 = 0;
      v28 = 0;
    }
    v29 = *(_BYTE*)(v25 + 88);
    *(_DWORD*)(v25 + 80) = v27;
    *(_DWORD*)(v25 + 84) = v28;
    *(_BYTE*)(v25 + 88) = v29 | 0x10;
  }
  GameRoutine_1562cf0(a1 + 88, "StatusDetailOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v30 = GameRoutine_1563e00(a1 + 88, "A_InfoDetail");
  if (v30 != 0) {
    GameRoutine_56b600(v30);
  }
  return GameRoutine_18a5bc0(a1);
}

__int64 GameHr_18ab530(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  const char* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  char v19;
  __int64 v20;
  _QWORD v22[2];
  unsigned __int64 v23;
  unsigned __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _BYTE v40[4];
  _DWORD v41[2];

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  v4 = *(_QWORD*)(a2 + 40);
  v5 = GameData_212c738[0];
  v6 = GameData_212e348;
  if (v4 == 0) {
    goto LABEL_5;
  }
  v7 = *GameData_212c738[0];
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v33 = -1;
  v34 = -1;
  v35 = -1;
  v36 = -1;
  v37 = -1;
  v38 = -1;
  v22[0] = GameData_212e348 + 2;
  v22[1] = 0xFFFF0001FFFF0000LL;
  v23 = 0xFFFF0004FFFF0002LL;
  v24 = 0xFFFF0006FFFF0005LL;
  v39 = 8;
  v25 = -65529;
  v26 = -65528;
  if (GameRoutine_a4dbe0(v7, v4, 0, v22) != 0) {
    v8 = *(const char**)(a2 + 40);
    if (v8 == nullptr) {
      goto LABEL_9;
    }
    v9 = v6 + 2;
    v10 = *v5;
  }
  else {
  LABEL_5:
    GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
    v9 = v6 + 2;
    v10 = *v5;
    v8 = "MID_Sys_ValueEmptyLong";
  }
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v33 = -1;
  v34 = -1;
  v35 = -1;
  v36 = -1;
  v37 = -1;
  v38 = -1;
  v22[0] = v9;
  v22[1] = 0xFFFF0001FFFF0000LL;
  v23 = 0xFFFF0004FFFF0002LL;
  v24 = 0xFFFF0006FFFF0005LL;
  v39 = 8;
  v25 = -65529;
  v26 = -65528;
  v11 = GameRoutine_a4dbe0(v10, v8, 0, v22);
  if (v11 != 0) {
    v12 = v11;
    v13 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v13 != 0) {
      GameRoutine_156c5d0(v13, v12, 0);
    }
  }
LABEL_9:
  v14 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v14 != 0) {
    v15 = v14;
    v16 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v16 != 0) {
      GameRoutine_190a0c0(v22, v41, v40, v16, *(_QWORD*)(v16 + 216));
      v17 = v41[0];
      v18 = v41[1];
    }
    else {
      v17 = 0;
      v18 = 0;
    }
    v19 = *(_BYTE*)(v15 + 88);
    *(_DWORD*)(v15 + 80) = v17;
    *(_DWORD*)(v15 + 84) = v18;
    *(_BYTE*)(v15 + 88) = v19 | 0x10;
  }
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  GameRoutine_1562cf0(a1 + 88, "StatusDetailOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v20 = GameRoutine_1563e00(a1 + 88, "A_InfoDetail");
  if (v20 != 0) {
    GameRoutine_56b600(v20);
  }
  return GameRoutine_18a5bc0(a1);
}

__int64 GameHr_18ab7b0(__int64 a1, unsigned int* a2, __int64 a3, __int64 a4,
                       char a5)
{
  __int64* v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  char v22;
  const char* v23;
  const char* v24;
  __int64 v25;
  _QWORD v27[4];
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
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
  _BYTE v43[4];
  _DWORD v44[2];

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  v10 = GameData_212c880[0];
  if ((a5 & 1) != 0) {
    GameRoutine_1562cf0(a1 + 88, "L_Icon");
    GameRoutine_157e3a0(a1 + 88, a2,
                        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                                                       8LL * (*a2 & 0xFFF)) +
                                            104LL),
                        a3);
  }
  v11 = *a2;
  if ((*a2 & 0xFFF) != 0 && *(_QWORD*)((v12 = *(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                                                         8LL * (v11 & 0xFFF))) +
                                       48) != 0) {
    v13 = GameRoutine_6fbd80(v12, *(unsigned __int8*)(v12 + 304) -
                                      (HIBYTE(v11) & 0x1F));
    if (v13 == 0) {
      goto LABEL_10;
    }
  }
  else {
    GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v14 = *GameData_212c738[0];
    v34 = -1;
    v35 = -1;
    v36 = -1;
    v37 = -1;
    v38 = -1;
    v39 = -1;
    v40 = -1;
    v41 = -1;
    v27[0] = GameData_212e348 + 2;
    v27[1] = 0xFFFF0001FFFF0000LL;
    v27[2] = 0xFFFF0004FFFF0002LL;
    v27[3] = 0xFFFF0006FFFF0005LL;
    v42 = 8;
    v28 = -65529;
    v29 = -65528;
    v13 = GameRoutine_a4dbe0(v14, "MID_Sys_ValueEmptyLong", 0, v27);
    if (v13 == 0) {
      goto LABEL_10;
    }
  }
  v15 = v13;
  v16 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v16 != 0) {
    GameRoutine_156c5d0(v16, v15, 0);
  }
LABEL_10:
  v17 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v17 != 0) {
    v18 = v17;
    v19 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v19 != 0) {
      GameRoutine_190a0c0(v27, v44, v43, v19, *(_QWORD*)(v19 + 216));
      v20 = v44[0];
      v21 = v44[1];
    }
    else {
      v20 = 0;
      v21 = 0;
    }
    v22 = *(_BYTE*)(v18 + 88);
    *(_DWORD*)(v18 + 80) = v20;
    *(_DWORD*)(v18 + 84) = v21;
    *(_BYTE*)(v18 + 88) = v22 | 0x10;
  }
  if ((a5 & 1) != 0) {
    v23 = "InfoTitleOn";
  }
  else {
    v23 = "InfoTitleOff";
  }
  if ((a5 & 1) != 0) {
    v24 = "Wdw_TitleOn_Status02";
  }
  else {
    v24 = "Wdw_TitleOff_Status02";
  }
  GameRoutine_1562cf0(a1 + 88, v23);
  GameRoutine_1562cf0(a1 + 88, "StatusDetailOff");
  GameRoutine_1562cf0(a1 + 88, "Status02");
  GameRoutine_1562cf0(a1 + 88, v24);
  GameRoutine_158ebe0(a1 + 88, a2, a3, a4);
  v25 = GameRoutine_1563e00(a1 + 88, "A_InfoDetail");
  if (v25 != 0) {
    GameRoutine_56b600(v25);
  }
  return GameRoutine_18a5bc0(a1);
}

__int64 GameHr_18bbd50(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[2];

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 8);
      v4 = result;
      if (v3 != 0) {
        GameRoutine_1899480(v3, 1u, 0, 0);
        GameRoutine_189a700(v3);
        GameRoutine_188bf10(v3, (__int64)"MID_Sys_Empty");
        v5 = *(_QWORD*)(v3 + 1032);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 88) |= 1u;
        }
        v6[0] = "NumNone";
        v6[1] = 7;
        result = GameRoutine_18863e0(v3, v6, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return GameRoutine_1a09c50(v4);
      }
    }
  }
  return result;
}

__int64 GameHr_18bc7d0(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD v26[2];

  v2 = *(_QWORD**)(a1 + 1088);
  if (a2 == 0) {
    v24 = *(_QWORD**)(a1 + 1088);
  LABEL_26:
    GameRoutine_18bb8b0(v24);
    goto LABEL_27;
  }
  v4 = *(_QWORD*)(a1 + 1064);
  v5 = v2[2];
  v2[3] = v4;
  if (v5 != 0) {
    v7 = GameRoutine_1a0a0c0(v5);
    if (v7 != 0) {
      v8 = v2[1];
      if (v8 != 0) {
        *(_QWORD*)(v8 + 1096) = v2[3];
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v9 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        GameRoutine_1a09c50(v9);
      }
    }
  }
  v10 = *(_QWORD**)(a1 + 1088);
  v11 = v10[2];
  v10[4] = a2;
  if (v11 != 0) {
    v12 = GameRoutine_1a0a0c0(v11);
    if (v12 != 0) {
      v13 = v10[1];
      if (v13 != 0) {
        v14 = v10[4];
        *(_QWORD*)(v13 + 1088) = v14;
        *(_BYTE*)(v13 + 1108) = v14 != 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v15 = v12;
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        GameRoutine_1a09c50(v15);
      }
    }
  }
  v16 = *(__int64**)(a1 + 1088);
  if (v16[4] == 0) {
    v24 = *(_QWORD**)(a1 + 1088);
    goto LABEL_26;
  }
  v17 = v16[2];
  if (v17 != 0) {
    v18 = GameRoutine_1a0a0c0(v17);
    if (v18 != 0) {
      v19 = v16[1];
      v20 = v18;
      if (v19 != 0) {
        GameRoutine_1899480(v16[1], 1u, 0, 0);
        *(_QWORD*)(v19 + 1096) = v16[3];
        GameRoutine_189a3a0((_QWORD*)v19, v16[4]);
        v21 = GameRoutine_6ed030(v16[4]);
        v22 = *(_QWORD*)(v19 + 1032);
        if (v22 != 0) {
          GameRoutine_156c5d0(v22, v21, 0);
          v23 = *(_QWORD*)(v19 + 1032);
          if (v23 != 0) {
            *(_BYTE*)(v23 + 88) |= 1u;
          }
        }
        *(_BYTE*)(v19 + 1108) = 1;
        v26[0] = "NumNone";
        v26[1] = 7;
        GameRoutine_18863e0(v19, v26, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        GameRoutine_1a09c50(v20);
      }
    }
  }
LABEL_27:
  GameRoutine_18bb8b0(*(_QWORD**)(a1 + 1096));
  return GameRoutine_1562cf0(a1 + 88, "DragonInfo_Attack00");
}

__int64 GameHr_18bccc0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _DWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  _DWORD* v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 1064);
  if (v2 == 0) {
    *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 48LL) = *(_DWORD*)(a1 + 1112);
    *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 24LL) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 32LL) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 40LL) = *(_QWORD*)(a1 + 1064);
    GameRoutine_18bb1d0(*(_QWORD*)(a1 + 1080));
    GameRoutine_18bb8b0(*(_QWORD**)(a1 + 1088));
    GameRoutine_18bb8b0(*(_QWORD**)(a1 + 1096));
    GameRoutine_1562cf0(a1 + 88, "DragonInfo_Attack00");
    v10 = GameData_212c8a8;
    goto LABEL_41;
  }
  if ((*(_WORD*)(v2 + 1536) & 0x200) == 0) {
    v3 = GameRoutine_6c8530(v2);
    v4 = *(_QWORD*)(a1 + 1064);
    v5 = *(unsigned __int16*)(v4 + 1952);
    if ((*(_WORD*)(v4 + 1536) & 0x40) == 0 ||
        (v6 = *(_QWORD*)(v4 + 1496), v7 = *(_QWORD*)(v4 + 1488), v6 == v7)) {
      v10 = GameData_212c8a8;
    }
    else {
      v8 = (v6 - v7) >> 2;
      v9 = 0;
      v10 = GameData_212c8a8;
      while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*(_DWORD*)(v7 + 4 * v9) & 0xFFF)) +
                       104LL) != 6) {
        if (v8 == ++v9) {
          goto LABEL_19;
        }
      }
      v27 = (_DWORD*)(v7 + 4LL * (unsigned int)v9);
      if (v9 > -1) {
        v10 = v27;
      }
    }
  LABEL_19:
    *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 48LL) = *(_DWORD*)(a1 + 1112);
    *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 24LL) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 32LL) = v3;
    *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 40LL) = *(_QWORD*)(a1 + 1064);
    GameRoutine_18bb1d0(*(_QWORD*)(a1 + 1080));
    if (v5 != 0) {
      v21 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                       8LL * *(unsigned __int16*)(v4 + 1952));
    }
    else {
      v21 = 0;
    }
    v26 = a1;
    goto LABEL_40;
  }
  v11 = *(_QWORD*)(a1 + 1072);
  if (v11 != 0) {
    v12 = *(unsigned __int16*)(v11 + 16);
    v13 = *(_QWORD*)(v2 + 1456);
    v14 = (v12 >> 5) & 0x7F;
    if (v14 + 1 <= (unsigned __int64)((*(_QWORD*)(v2 + 1464) - v13) >> 2)) {
      v15 = v12 & 0xFFF;
      if (((*(_DWORD*)(v13 + 4LL * (unsigned int)v14) >> v15) & 1) != 0) {
        v16 = *(_QWORD*)(v2 + 1496);
        v17 = *(_QWORD*)(v2 + 1488);
        if (v16 != v17) {
          v18 = (v16 - v17) >> 2;
          v19 = 0;
          v20 = GameData_212c8a8;
          while ((*(_DWORD*)(v17 + 4 * v19) & 0xFFF) != v15) {
            if (v18 == ++v19) {
              goto LABEL_36;
            }
          }
          v28 = (_DWORD*)(v17 + 4LL * (unsigned int)v19);
          v29 = v19 <= -1;
        LABEL_34:
          if (!v29) {
            v20 = v28;
          }
          goto LABEL_36;
        }
      }
    }
  }
  else {
    v22 = *(_QWORD*)(v2 + 1496);
    v23 = *(_QWORD*)(v2 + 1488);
    if (v22 != v23) {
      v24 = (v22 - v23) >> 2;
      v25 = 0;
      v20 = GameData_212c8a8;
      while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*(_DWORD*)(v23 + 4 * v25) & 0xFFF)) +
                       104LL) != 9) {
        if (v24 == ++v25) {
          goto LABEL_36;
        }
      }
      v28 = (_DWORD*)(v23 + 4LL * (unsigned int)v25);
      v29 = v25 <= -1;
      goto LABEL_34;
    }
  }
  v20 = GameData_212c8a8;
LABEL_36:
  v30 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (*v20 & 0xFFF)) +
                   592LL);
  if (*(_WORD*)(v30 + 128) != 0) {
    v31 = *(_QWORD*)(*(_QWORD*)(v30 + 136) + 8LL);
  }
  else {
    v31 = 0;
  }
  v10 = (_DWORD*)GameRoutine_1583e80();
  *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 48LL) = *(_DWORD*)(a1 + 1112);
  *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 24LL) = *v20;
  *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 32LL) = v30;
  *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 40LL) = *(_QWORD*)(a1 + 1064);
  GameRoutine_18bb1d0(*(_QWORD*)(a1 + 1080));
  v26 = a1;
  v21 = v31;
LABEL_40:
  GameRoutine_18bc7d0(v26, v21);
LABEL_41:
  GameRoutine_18bc9c0(a1, v10);
  result = GameRoutine_1563e00(a1 + 88, "A_MenuItem");
  if (result != 0) {
    return GameRoutine_56b600(result);
  }
  return result;
}

__int64 GameHr_18d17a0(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  int v5;

  if (*(_BYTE*)(a1 + 680) == 1) {
    GameRoutine_18cc630((_BYTE*)(a1 + 3096));
    GameRoutine_18cdc40(a1 + 4048);
    GameRoutine_1a0b5c0(a1 + 2400);
    v2 = a1 + 696;
    GameRoutine_1a09b70(a1 + 736);
    if (*(_QWORD*)(a1 + 768) == a1 + 696) {
      v4 = 0;
    }
    else if (*(_QWORD*)(a1 + 776) == v2) {
      v4 = 1;
    }
    else if (*(_QWORD*)(a1 + 784) == v2) {
      v4 = 2;
    }
    else {
      if (*(_QWORD*)(a1 + 792) != v2) {
        v3 = 23;
      LABEL_13:
        GameRoutine_1a09b80(a1 + 736);
        return v3;
      }
      v4 = 3;
    }
    GameRoutine_1a0a170(a1 + 696);
    v5 = *(_DWORD*)(a1 + 800);
    v3 = 0;
    *(_QWORD*)(a1 + 768 + 8 * v4) = 0;
    *(_DWORD*)(a1 + 800) = v5 - 1;
    goto LABEL_13;
  }
  return 0;
}

__int64 GameHr_18d2d60(__int64 a1, __int64* a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  _QWORD v11[2];

  v4 = GameRoutine_1a0b6e0(a1 + 24);
  v5 = *(_DWORD*)(a1 + 40);
  if ((v5 & 8) != 0) {
  LABEL_11:
    v9 = 2;
  }
  else {
    if ((v5 & 4) == 0) {
      while (1) {
        v6 = GameRoutine_1a0b760(v4);
        if (v6 >= *a2) {
          break;
        }
        v4 = GameRoutine_1a0b760(v6);
        v7 = *a2;
        if (*a2 > v4) {
          v11[0] = v7 / 1000000000;
          v11[1] = v7 % 1000000000;
          v8 = GameRoutine_1a0b770(a1 + 32, a1 + 24, 1, v11);
          if ((_DWORD)v8 != 0 && (_DWORD)v8 != 110) {
            GameRoutine_1a0b710(v8, "condition_variable timed_wait failed");
            goto LABEL_11;
          }
          v4 = GameRoutine_1a0b760(v8);
        }
        v5 = *(_DWORD*)(a1 + 40);
        if ((v5 & 4) != 0) {
          goto LABEL_13;
        }
      }
      v5 = *(_DWORD*)(a1 + 40);
    }
  LABEL_13:
    v9 = (v5 & 4) == 0;
  }
  GameRoutine_1a0b6f0(a1 + 24);
  return v9;
}

unsigned __int64 GameHr_18f34a0(__int64 a1, unsigned __int8* a2)
{
  unsigned __int8* v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  _BYTE* v33;
  unsigned __int64 v34;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;

  if ((*a2 & 1) != 0) {
    v4 = *((unsigned __int8**)a2 + 2);
  }
  else {
    v4 = a2 + 1;
  }
  result = GameRoutine_7a86e0(v4);
  if (result == 0) {
    goto LABEL_78;
  }
  v6 = *(_QWORD*)(GameData_21c9f40 + 96);
  if (v6 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
    goto LABEL_78;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = result;
    if (result >= v6) {
      v9 = result % v6;
    }
  }
  else {
    v9 = v8 & result;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_78;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_78;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == result) {
        if (v11[2] == result) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v8) != v9) {
        goto LABEL_78;
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        goto LABEL_78;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == result) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      goto LABEL_78;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      goto LABEL_78;
    }
  }
  if (v11[2] != result) {
    goto LABEL_18;
  }
LABEL_29:
  v14 = v11[3];
  if (v14 == 0) {
    goto LABEL_78;
  }
  v15 = (_BYTE*)GameRoutine_18f4a00(v11[3]);
  if (v15 != nullptr && *v15 != 0) {
    result = a1 + 624;
    if ((unsigned __int8*)(a1 + 624) != a2) {
      v16 = *a2;
      if ((*(_BYTE*)result & 1) != 0) {
        v23 = (v16 & 1) == 0;
        v24 = v16 >> 1;
        if (v23) {
          v25 = a2 + 1;
        }
        else {
          v25 = *((unsigned __int8**)a2 + 2);
        }
        if (v23) {
          v26 = v24;
        }
        else {
          v26 = *((_QWORD*)a2 + 1);
        }
        result = GameRoutine_64dde0(result, v25, v26);
      }
      else if ((v16 & 1) != 0) {
        result =
            GameRoutine_64df20(result, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
      }
      else {
        v17 = *(_QWORD*)a2;
        v18 = *((_QWORD*)a2 + 2);
        *(_QWORD*)(a1 + 632) = *((_QWORD*)a2 + 1);
        *(_QWORD*)(a1 + 640) = v18;
        *(_QWORD*)result = v17;
      }
    }
    v31 = *(_DWORD*)(v14 + 124);
    *(_QWORD*)(a1 + 672) = v14;
    *(_BYTE*)(a1 + 778) = v31 != 0;
    goto LABEL_78;
  }
  result = GameRoutine_7a86e0(*(_QWORD*)(v14 + 32));
  if (result == 0) {
    goto LABEL_74;
  }
  v19 = *(_QWORD*)(GameData_21c9f40 + 96);
  if (v19 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
    goto LABEL_74;
  }
  v21 = v19 - 1;
  if ((v19 & (v19 - 1)) != 0) {
    v22 = result;
    if (result >= v19) {
      v22 = result % v19;
    }
  }
  else {
    v22 = v21 & result;
  }
  v27 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v22);
  if (v27 == nullptr) {
    goto LABEL_74;
  }
  v28 = (_QWORD*)*v27;
  if (v28 == nullptr) {
    goto LABEL_74;
  }
  if ((v19 & v21) == 0) {
    while (1) {
      v30 = v28[1];
      if (v30 == result) {
        if (v28[2] == result) {
          goto LABEL_70;
        }
      }
      else if ((v30 & v21) != v22) {
        goto LABEL_74;
      }
      v28 = (_QWORD*)*v28;
      if (v28 == nullptr) {
        goto LABEL_74;
      }
    }
  }
  while (2) {
    v29 = v28[1];
    if (v29 != result) {
      if (v29 >= v19) {
        v29 %= v19;
      }
      if (v29 != v22) {
        goto LABEL_74;
      }
    }
    else if (v28[2] == result) {
    LABEL_70:
      v32 = v28[3];
      if (v32 != 0) {
        result = GameRoutine_18f4a00(v28[3]);
        if (result != 0 && *(_BYTE*)result != 0) {
          *(_BYTE*)(a1 + 778) = *(_DWORD*)(v14 + 124) != 0;
          result = GameRoutine_60a020(a1 + 624, *(_QWORD*)(v32 + 32));
          *(_QWORD*)(a1 + 672) = v32;
          goto LABEL_78;
        }
      }
    LABEL_74:
      if ((*(_BYTE*)(a1 + 624) & 1) != 0) {
        v33 = *(_BYTE**)(a1 + 640);
        *(_QWORD*)(a1 + 632) = 0;
      }
      else {
        *(_BYTE*)(a1 + 624) = 0;
        v33 = (_BYTE*)(a1 + 625);
      }
      *v33 = 0;
      *(_QWORD*)(a1 + 672) = 0;
      *(_BYTE*)(a1 + 778) = 0;
    LABEL_78:
      if (*(_QWORD*)(a1 + 672) != 0) {
        return result;
      }
      result = GameRoutine_7a86e0("NoMap");
      if (result == 0) {
        goto LABEL_103;
      }
      v34 = *(_QWORD*)(GameData_21c9f40 + 96);
      if (v34 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
        goto LABEL_103;
      }
      v36 = v34 - 1;
      if ((v34 & (v34 - 1)) != 0) {
        v37 = result;
        if (result >= v34) {
          v37 = result % v34;
        }
      }
      else {
        v37 = v36 & result;
      }
      v38 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v37);
      if (v38 == nullptr || (v39 = (_QWORD*)*v38) == nullptr) {
      LABEL_103:
        v41 = 0;
        goto LABEL_104;
      }
      if ((v34 & v36) == 0) {
        while (1) {
          v42 = v39[1];
          if (v42 == result) {
            if (v39[2] == result) {
              goto LABEL_106;
            }
          }
          else if ((v42 & v36) != v37) {
            goto LABEL_103;
          }
          v39 = (_QWORD*)*v39;
          v41 = 0;
          if (v39 == nullptr) {
            goto LABEL_104;
          }
        }
      }
      while (2) {
        v40 = v39[1];
        if (v40 != result) {
          if (v40 >= v34) {
            v40 %= v34;
          }
          if (v40 != v37) {
            goto LABEL_103;
          }
        }
        else if (v39[2] == result) {
        LABEL_106:
          v41 = v39[3];
        LABEL_104:
          *(_QWORD*)(a1 + 672) = v41;
          return result;
        }
        v39 = (_QWORD*)*v39;
        if (v39 == nullptr) {
          goto LABEL_103;
        }
        continue;
      }
    }
    v28 = (_QWORD*)*v28;
    if (v28 == nullptr) {
      goto LABEL_74;
    }
    continue;
  }
}

__int64 GameHr_18f3b60(__int64 a1, char a2, __int64* a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;

  v17 = 0;
  v18 = 0;
  v16 = 0;
  v19 = a2;
  if (&v16 != a3) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      GameRoutine_64df20(&v16, a3[2], a3[1]);
    }
    else {
      v4 = a3[1];
      v16 = *a3;
      v17 = v4;
      v18 = a3[2];
    }
  }
  v5 = GameData_212bf68;
  v6 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 280, 16, 0);
  *(_QWORD*)(v6 + 16) = 0;
  v7 = v6;
  v8 = v6;
  v9 = GameData_212fd50[0];
  *(_QWORD*)v6 = GameData_210a630;
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_BYTE*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  v10 = (_QWORD*)(v6 + 32);
  *(_QWORD*)(v8 + 96) = 0;
  *(_QWORD*)(v8 + 104) = 0;
  *(_QWORD*)(v8 + 112) = 0;
  *(_QWORD*)(v8 + 120) = 0;
  *(_QWORD*)(v8 + 128) = 0;
  *(_QWORD*)(v8 + 136) = 0;
  *(_QWORD*)(v8 + 144) = 0;
  *(_QWORD*)(v8 + 152) = 0;
  *(_QWORD*)(v8 + 160) = 0;
  *(_QWORD*)(v8 + 168) = 0;
  *(_QWORD*)(v8 + 176) = 0;
  *(_QWORD*)(v8 + 184) = 0;
  *(_QWORD*)(v8 + 192) = 0;
  *(_QWORD*)(v8 + 200) = 0;
  *(_QWORD*)(v8 + 208) = 0;
  *(_QWORD*)(v8 + 216) = 0;
  *(_QWORD*)(v8 + 224) = 0;
  *(_QWORD*)(v8 + 232) = 0;
  *(_QWORD*)(v8 + 240) = 0;
  *(_QWORD*)(v8 + 248) = 0;
  *(_QWORD*)(v8 + 256) = 0;
  *(_QWORD*)(v8 + 264) = 0;
  *(_QWORD*)(v8 + 272) = 0;
  *(_QWORD*)(v7 + 24) = v9 + 2;
  v11 = v7 + 24;
  if ((v16 & 1) != 0) {
    GameRoutine_64df20(v10, v18, v17);
  }
  else {
    v12 = v17;
    *v10 = v16;
    v10[1] = v12;
    v10[2] = v18;
  }
  *(_BYTE*)(v8 + 56) = v19;
  result = GameRoutine_102abb0(v11);
  *(_QWORD*)(a1 + 608) = v11;
  v14 = *(_QWORD*)(a1 + 616);
  *(_QWORD*)(a1 + 616) = v8;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = GameRoutine_1a09c50(v14);
    if ((v16 & 1) == 0) {
      return result;
    }
  }
  else if ((v16 & 1) == 0) {
    return result;
  }
  if (v18 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v15 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v5 + v15);
  }
  return result;
}

__int64 GameHr_18f9e80(_QWORD* a1)
{
  __int64 result;

  GameRoutine_18f9360((__int64)a1);
  GameRoutine_16e1ce0(a1);
  result = (*(__int64 (**)(_QWORD*))(*a1 + 168LL))(a1);
  if ((unsigned int)(result - 8) <= 0xFFFFFFF9) {
    return (*(__int64 (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return result;
}

__int64 GameHr_18ff840(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  GameRoutine_1900180();
  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 && (result = GameRoutine_1a0a6c0(v2, GameData_212e008[0],
                                               GameData_2131d58[0], 0)) != 0 ||
      (result = GameRoutine_16e63e0(
           *(_QWORD*)(*(_QWORD*)(a1 + 1056) + 336LL))) != 0 &&
          (result = GameRoutine_1a0a6c0(result, GameData_212e008[0],
                                        GameData_2131d58[0], 0)) != 0) {
    v4 = *(_QWORD*)(a1 + 152);
    if (v4 == 0) {
      v4 = a1;
    }
    GameRoutine_18fdde0(*(_QWORD*)(v4 + 32), (int*)(a1 + 1184),
                        *(_BYTE*)(a1 + 1216), *(_QWORD*)(result + 88));
    return 8;
  }
  return result;
}

__int64 GameHr_18ffa60(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  int v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  int v14;
  __int64 v15;

  if ((*(_BYTE*)(GameData_21c9608 + 328) & 4) != 0) {
    v1 = 1;
  }
  else {
    v1 = *(_DWORD*)(GameData_21c9608 + 308);
  }
  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
  if (v2 != 0) {
    v3 = result;
    v4 = 0;
    do {
      v7 = *(_QWORD*)(v2 + 432);
      if ((*(_BYTE*)(v2 + 416) & 8) == 0) {
        v8 = *(_QWORD*)(v3 + 1192);
        v9 = *(_QWORD*)(v3 + 1200);
        if (v8 == v9) {
          v5 = false;
        }
        else {
          v10 = v8 + 8;
          do {
            v11 = *(_QWORD*)(v10 - 8);
            v14 = 16;
            v15 = v11;
            v12 = GameRoutine_6ead60(&v15, &v14);
            v5 = v2 == v12;
            v13 = v2 == v12 || v10 == v9;
            v10 += 8;
          } while (!v13);
        }
        v6 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 104, 16, 0);
        *(_WORD*)(v6 + 16) = 0;
        *(_DWORD*)(v6 + 40) = 0;
        *(_QWORD*)(v6 + 48) = 0;
        *(_QWORD*)(v6 + 56) = 0;
        *(_QWORD*)(v6 + 64) = 0;
        *(_QWORD*)(v6 + 72) = 0;
        *(_QWORD*)(v6 + 88) = v2;
        *(_DWORD*)(v6 + 96) = 0;
        *(_QWORD*)v6 = GameData_210ce70;
        *(_QWORD*)(v6 + 8) = 0;
        *(_BYTE*)(v6 + 100) = v5;
        *(_BYTE*)(v6 + 101) = v4 < v1;
        *(_WORD*)(v6 + 80) = 257;
        *(_BYTE*)(v6 + 82) = 1;
        result = GameRoutine_16e0c00(v3, v6);
      }
      ++v4;
      v2 = v7;
    } while (v7 != 0);
  }
  return result;
}

bool GameHr_18ffe20(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 i;
  __int64 (***v7)();
  __int64 v8;
  _QWORD v10[4];
  _QWORD* v11;
  int v12;
  __int64 v13;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0 || *(__int64 (***)())v2 != GameData_210c840) {
    v2 = 0;
  }
  v3 = v10;
  v12 = 0;
  v10[0] = GameData_210d168;
  v10[1] = &v12;
  v5 = *(_QWORD*)(v2 + 232);
  v4 = *(_QWORD*)(v2 + 240);
  v11 = v10;
  if (v4 == v5) {
    goto LABEL_15;
  }
  for (i = 0; i < (v4 - v5) >> 3; ++i) {
    v7 = *(__int64 (****)())(v5 + 8 * i);
    if (v7 == nullptr || *v7 != GameData_210ce70) {
      continue;
    }
    v13 = *(_QWORD*)(v5 + 8 * i);
    if (v11 == nullptr) {
      GameRoutine_60a310(0);
    }
    if (((*(__int64 (**)(_QWORD*, __int64*))(*v11 + 48LL))(v11, &v13) & 1) !=
        0) {
      break;
    }
    v5 = *(_QWORD*)(v2 + 232);
    v4 = *(_QWORD*)(v2 + 240);
  }
  v3 = v11;
  if (v11 != v10) {
    if (v11 != nullptr) {
      v8 = 40;
      goto LABEL_16;
    }
    return v12 >= *(_DWORD*)(v2 + 1184);
  }
LABEL_15:
  v8 = 32;
LABEL_16:
  (*(void (**)(_QWORD*, __int64))(*v3 + v8))(v3, a2);
  return v12 >= *(_DWORD*)(v2 + 1184);
}

__int64 GameHr_1900000(__int64 a1, __int64 a2)
{
  if ((*(_BYTE*)(*(_QWORD*)a2 + 101LL) & 1) != 0 ||
      *(_BYTE*)(*(_QWORD*)a2 + 100LL) == 1) {
    ++**(_DWORD**)(a1 + 8);
  }
  return 0;
}

bool GameHr_1900130(__int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

__int64 GameHr_1900780(__int64 a1, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(__int64**)(a1 + 8);
  v3 = *a2;
  v5 = (_QWORD*)v2[1];
  v4 = v2[2];
  if ((unsigned __int64)v5 >= v4) {
    v7 = *v2;
    v8 = (__int64)v5 - *v2;
    v9 = (v8 >> 3) + 1;
    if (v9 >> 61 != 0) {
      GameRoutine_163b3a0();
    }
    v10 = v4 - v7;
    v11 = GameData_212bf68;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(a1);
      }
      v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 8 * v12;
    v15 = v13 + v8 - 8 * (v8 >> 3);
    *(_QWORD*)(v13 + v8) = v3;
    v6 = v13 + v8 + 8;
    GameRoutine_1a0b950(v15, v7, v8);
    *v2 = v15;
    v2[1] = v6;
    v2[2] = v14;
    if (v7 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v11 + v16);
    }
  }
  else {
    *v5 = v3;
    v6 = (__int64)(v5 + 1);
  }
  v2[1] = v6;
  return 0;
}

bool GameHr_1900990(__int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == **(_QWORD**)(a1 + 8);
}

bool GameHr_1900aa0(__int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == **(_QWORD**)(a1 + 8);
}

__int64 GameHr_1900cd0(__int64 a1)
{
  GameRoutine_1638380(*(_QWORD*)(a1 + 8));
  if (GameData_225ca88 != 0) {
    GameRoutine_1625030();
  }
  return 4;
}

bool GameHr_1900df0(__int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

__int64 GameHr_1900ee0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 1;
  }
  v3 = GameRoutine_1a0a6c0(v2, GameData_212e030[0], &GameData_210ba90, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  v5 = GameRoutine_820d50(8);
  if (GameData_21caab0 != 0 &&
      (v6 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v5)) != 0) {
    v7 = *(_DWORD*)(v6 + 32) == 0;
    result = 1;
    if (!v7) {
      return result;
    }
  }
  else {
    result = 1;
  }
  if ((*(_BYTE*)(a1 + 82) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)(v9 + 152) != 0) {
      v10 = *(_QWORD*)(v9 + 152);
    }
    else {
      v10 = *(_QWORD*)(a1 + 8);
    }
    GameRoutine_17ab020(v10, v4 + 1080, 0);
    return 9;
  }
  return result;
}

__int64 GameHr_1901040(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _WORD v9[12];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 == 0) {
    return 1;
  }
  v3 = GameRoutine_1a0a6c0(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                           &GameData_210ba90, 0);
  result = 1;
  if (v3 != 0 && (*(_BYTE*)(a1 + 82) & 1) != 0) {
    v5 = *(_QWORD*)(v1 + 152);
    v9[0] = 0;
    if (v5 != 0) {
      v6 = v5;
    }
    else {
      v6 = v1;
    }
    v7 = GameRoutine_1434e70(v6, v9);
    if (v7 != 0) {
      v8 = v7;
      if (v7 + 248 != v3 + 1088) {
        GameRoutine_68bdf0();
      }
      *(_DWORD*)(v8 + 272) = *(_DWORD*)(v3 + 1080);
      *(_BYTE*)(v8 + 240) = 1;
      *(_BYTE*)(v8 + 152) = 2;
    }
    return 9;
  }
  return result;
}

__int64 GameHr_19011b0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  int v30;
  __int64 v31;
  __int64 v32;
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
  int v43;
  __int64 v44;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 1;
  }
  v3 = GameRoutine_1a0a6c0(v2, GameData_212e030[0], &GameData_210ba90, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  v5 = GameRoutine_820d50(11);
  if (GameData_21caab0 != 0 &&
      (v6 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v5)) != 0) {
    v7 = *(_DWORD*)(v6 + 32) == 0;
    result = 1;
    if (!v7) {
      return result;
    }
  }
  else {
    result = 1;
  }
  if ((*(_BYTE*)(a1 + 82) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 8);
    v42 = a1;
    v44 = 0;
    v10 = *(_QWORD*)(v9 + 152);
    v43 = 1;
    if (v10 != 0) {
      v11 = v10;
    }
    else {
      v11 = v9;
    }
    v12 = GameRoutine_16eb960(v11, &v42);
    v13 = (_QWORD*)GameData_212bf68;
    v14 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 176, 16, 0);
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    v15 = (_QWORD*)v14;
    *(_QWORD*)(v14 + 80) = 0;
    *(_QWORD*)(v14 + 88) = 0;
    *(_QWORD*)(v14 + 96) = 0;
    *(_QWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 112) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_QWORD*)(v14 + 128) = 0;
    *(_QWORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 17) = 0;
    *(_QWORD*)(v14 + 48) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 257;
    *(_BYTE*)(v14 + 82) = 1;
    *(_QWORD*)v14 = GameData_210dc98;
    *(_QWORD*)(v14 + 8) = 0;
    v16 = *(_DWORD*)(v4 + 1080);
    *(_QWORD*)(v14 + 152) = 0;
    *(_QWORD*)(v14 + 160) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_DWORD*)(v14 + 144) = v16;
    v17 = *(_QWORD*)(v4 + 1088);
    v18 = *(_QWORD*)(v4 + 1096);
    v19 = v18 - v17;
    if (v18 != v17) {
      if (v19 < 0) {
        goto LABEL_30;
      }
      v20 = GameRoutine_651b90(*v13, v18 - v17, 16, 0);
      v21 = v20 + v19;
      v15[19] = v20;
      v15[21] = v20 + v19;
      GameRoutine_1a0b950(v20, v17, v19);
      v15[20] = v21;
    }
    GameRoutine_16e0c00(v12, v15);
    v14 = GameRoutine_651b90(*v13, 176, 16, 0);
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    v22 = (_QWORD*)v14;
    *(_QWORD*)(v14 + 80) = 0;
    *(_QWORD*)(v14 + 88) = 0;
    *(_QWORD*)(v14 + 96) = 0;
    *(_QWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 112) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_QWORD*)(v14 + 128) = 0;
    *(_QWORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 17) = 0;
    *(_QWORD*)(v14 + 48) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 257;
    *(_BYTE*)(v14 + 82) = 1;
    *(_QWORD*)v14 = GameData_210def8;
    *(_QWORD*)(v14 + 8) = 0;
    v23 = *(_DWORD*)(v4 + 1080);
    *(_QWORD*)(v14 + 152) = 0;
    *(_QWORD*)(v14 + 160) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_DWORD*)(v14 + 144) = v23;
    v24 = *(_QWORD*)(v4 + 1088);
    v25 = *(_QWORD*)(v4 + 1096);
    v26 = v25 - v24;
    if (v25 != v24) {
      if (v26 < 0) {
        goto LABEL_30;
      }
      v27 = GameRoutine_651b90(*v13, v25 - v24, 16, 0);
      v28 = v27 + v26;
      v22[19] = v27;
      v22[21] = v27 + v26;
      GameRoutine_1a0b950(v27, v24, v26);
      v22[20] = v28;
    }
    GameRoutine_16e0c00(v12, v22);
    v14 = GameRoutine_651b90(*v13, 176, 16, 0);
    *(_QWORD*)(v14 + 80) = 0;
    *(_QWORD*)(v14 + 88) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    v29 = (_QWORD*)v14;
    *(_QWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_QWORD*)(v14 + 96) = 0;
    *(_QWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 112) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_QWORD*)(v14 + 128) = 0;
    *(_QWORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 17) = 0;
    *(_QWORD*)(v14 + 48) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 257;
    *(_BYTE*)(v14 + 82) = 1;
    *(_QWORD*)v14 = GameData_210e158;
    *(_QWORD*)(v14 + 8) = 0;
    v30 = *(_DWORD*)(v4 + 1080);
    *(_QWORD*)(v14 + 152) = 0;
    *(_QWORD*)(v14 + 160) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_DWORD*)(v14 + 144) = v30;
    v31 = *(_QWORD*)(v4 + 1088);
    v32 = *(_QWORD*)(v4 + 1096);
    v33 = v32 - v31;
    if (v32 == v31) {
    LABEL_22:
      GameRoutine_16e0c00(v12, v29);
      if ((*(_BYTE*)(a1 + 83) & 1) == 0) {
        v36 = GameRoutine_651b90(*v13, 144, 16, 0);
        v37 = *(_QWORD*)(a1 + 8);
        if (v37 != 0 &&
            (v38 = GameRoutine_1a0a6c0(v37, GameData_212e030[0],
                                       GameData_212d6a0[0], 0)) != 0) {
          v39 = *(unsigned int*)(v38 + 1068);
        }
        else {
          v39 = 0;
        }
        GameRoutine_1855a20(v36, v39);
        GameRoutine_16e0c00(v12, v36);
      }
      v40 = GameRoutine_651b90(*v13, 144, 16, 0);
      *(_QWORD*)(v40 + 16) = 0;
      *(_QWORD*)(v40 + 24) = 0;
      *(_QWORD*)(v40 + 32) = 0;
      *(_QWORD*)(v40 + 40) = 0;
      *(_QWORD*)(v40 + 80) = 0;
      *(_QWORD*)(v40 + 88) = 0;
      *(_QWORD*)(v40 + 96) = 0;
      *(_QWORD*)(v40 + 104) = 0;
      *(_QWORD*)(v40 + 112) = 0;
      *(_QWORD*)(v40 + 120) = 0;
      *(_QWORD*)(v40 + 128) = 0;
      *(_QWORD*)(v40 + 136) = 0;
      *(_BYTE*)(v40 + 17) = 0;
      *(_QWORD*)(v40 + 48) = 0;
      *(_QWORD*)(v40 + 56) = 0;
      *(_QWORD*)(v40 + 64) = 0;
      *(_QWORD*)(v40 + 72) = 0;
      *(_WORD*)(v40 + 80) = 257;
      *(_BYTE*)(v40 + 82) = 1;
      *(_QWORD*)v40 = GameData_212d658[0] + 2;
      *(_QWORD*)(v40 + 8) = 0;
      GameRoutine_16e0c00(v12, v40);
      v41 = GameRoutine_651b90(*v13, 144, 16, 0);
      *(_QWORD*)(v41 + 16) = 0;
      *(_QWORD*)(v41 + 24) = 0;
      *(_QWORD*)(v41 + 32) = 0;
      *(_QWORD*)(v41 + 40) = 0;
      *(_QWORD*)(v41 + 80) = 0;
      *(_QWORD*)(v41 + 88) = 0;
      *(_QWORD*)(v41 + 96) = 0;
      *(_QWORD*)(v41 + 104) = 0;
      *(_QWORD*)(v41 + 112) = 0;
      *(_QWORD*)(v41 + 120) = 0;
      *(_QWORD*)(v41 + 128) = 0;
      *(_QWORD*)(v41 + 136) = 0;
      *(_BYTE*)(v41 + 17) = 0;
      *(_QWORD*)(v41 + 48) = 0;
      *(_QWORD*)(v41 + 56) = 0;
      *(_QWORD*)(v41 + 64) = 0;
      *(_QWORD*)(v41 + 72) = 0;
      *(_WORD*)(v41 + 80) = 257;
      *(_BYTE*)(v41 + 82) = 1;
      *(_QWORD*)v41 = GameData_212d6c8[0] + 2;
      *(_QWORD*)(v41 + 8) = 0;
      GameRoutine_16e0c00(v12, v41);
      return 10;
    }
    if ((v33 & 0x8000000000000000LL) == 0) {
      v34 = GameRoutine_651b90(*v13, v32 - v31, 16, 0);
      v35 = v34 + v33;
      v29[19] = v34;
      v29[21] = v34 + v33;
      GameRoutine_1a0b950(v34, v31, v33);
      v29[20] = v35;
      goto LABEL_22;
    }
  LABEL_30:
    GameRoutine_688200(v14);
  }
  return result;
}

__int64 GameHr_19017f0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v3 = *(_QWORD*)(v1 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 544, 16, 0);
  GameRoutine_178e950(v4, a1 + 144);
  GameRoutine_657850(v4, GameData_21319e0, "CmdBtlInfoUnitTroopSequence", 1,
                     v3);
  return 9;
}

__int64 GameHr_1901cb0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  if (GameData_21cd0c8 == 0) {
    if ((GameRoutine_184ef30(1) & 1) != 0) {
      goto LABEL_6;
    }
    return 1;
  }
  if (GameData_21caab0 == 0) {
    if ((GameRoutine_184ef30(3) & 1) != 0) {
      goto LABEL_6;
    }
    return 1;
  }
  if ((GameRoutine_184ef30(*(_DWORD*)(GameData_21caab0 + 92) & 1 ^ 3u) & 1) ==
      0) {
    return 1;
  }
LABEL_6:
  v2 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  GameRoutine_184ff20(v3, a1 + 144);
  return 9;
}

void GameHr_1901de0()
{
  if (GameData_21caab0 != 0) {
    *(_DWORD*)(GameData_21caab0 + 92) |= 0x10u;
  }
}

__int64 GameHr_1901eb0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE v5[32];
  _BYTE* v6;

  if (*(_BYTE*)(a1 + 82) != 1 || (*(_BYTE*)(GameData_21c9608 + 328) & 4) == 0 &&
                                     *(int*)(GameData_21c9608 + 308) < 1) {
    return 1;
  }
  v1 = *(_QWORD*)(a1 + 8);
  v6 = nullptr;
  v2 = GameRoutine_17859d0(v1, 1, v5);
  if (v6 == v5) {
    v3 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_9;
    }
    v3 = 40;
  }
  (*(void (**)(void))(*(_QWORD*)v6 + v3))();
LABEL_9:
  if (v2 != 0) {
    return 12;
  }
  return 1;
}

#pragma GCC visibility pop
