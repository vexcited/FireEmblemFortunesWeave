#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern __int64* GameData_212d480[2];

extern __int64 GameData_212e2d0[2];

extern __int64* GameData_2134428;

extern __int16* GameData_21344c0[16];

__int64 GameRoutine_1056a0(__int64, __int64, __int64, ...);

__int64 GameRoutine_106040(void);

struct PseudoSret GameRoutine_10df70(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_112180(_QWORD, _QWORD);

__int64 GameRoutine_112290(_QWORD, float);

__int64 GameRoutine_118df0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_118ff0(_QWORD);

__int64 GameRoutine_1678f0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_190020(_QWORD, _QWORD);

__int64 GameRoutine_190200(_QWORD, _QWORD);

__int64 GameRoutine_190240(_QWORD);

struct PseudoSret GameRoutine_190340(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09b70(_QWORD);

__int64 GameRoutine_1a09b80(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09d30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

float GameRoutine_1a0a8d0(_QWORD, float);

__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_2a7520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_2a7620(_QWORD);

__int64 GameRoutine_2a76e0(_QWORD);

void __attribute__((noreturn)) GameRoutine_a36650(void);

__int64 GameRoutine_a3a260(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a3a3a0(_QWORD, _QWORD, _QWORD);

struct PseudoSret GameRoutine_c3e0(_QWORD, _QWORD);

__int64 GameHr_bae0(__int64 a1, unsigned int a2, __int64 a3)
{
  _BYTE* v4;
  _QWORD v6[3];

  v4 = *(_BYTE**)(**(_QWORD**)(a1 + 8) + 80LL);
  if (v4 == nullptr || *v4 != 0) {
    return a2;
  }
  *(struct PseudoSret*)(v6) = GameRoutine_c3e0(*(_QWORD*)a1, a3);
  return a2;
}

__int64 GameHr_105c80(__int64 a1, const char* a2, const char* a3,
                      const char* a4)
{
  const char* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
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
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  const char* v42;
  const char* v43;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  float v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  float v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  float v57;
  __int64 v58;
  _QWORD v59[2];

  GameRoutine_1a09b70(GameData_21344c0[0]);
  if (a2 != nullptr) {
    v8 = a2;
  }
  else {
    v8 = "noname";
  }
  if (a3 == nullptr) {
    a3 = "noname";
  }
  v9 = *(_QWORD**)(a1 + 8);
  v10 = *(_QWORD*)(a1 + 16) - (_QWORD)v9;
  if (v10 == 0) {
  LABEL_45:
    v42 = "#SoundLibrary error : Can't open SoundArchive [%s]\n";
    v43 = v8;
  LABEL_46:
    (*(void (**)(_QWORD, const char*, const char*))(
        **(_QWORD**)GameData_212e2d0[0] + 392LL))(*(_QWORD*)GameData_212e2d0[0],
                                                  v42, v43);
    return GameRoutine_1a09b80(GameData_21344c0[0]);
  }
  v11 = v10 >> 5;
  while (1) {
    v12 = *v9;
    if (*(_DWORD*)(*v9 + 144LL) != 0) {
      v13 = GameRoutine_1a09c70(v8);
      v14 = *(_BYTE*)v12 >> 1;
      if ((*(_BYTE*)v12 & 1) != 0) {
        v14 = *(_QWORD*)(v12 + 8);
      }
      if (v13 == v14) {
        v15 = v13;
        if (v13 == -1) {
        LABEL_51:
          GameRoutine_a36650();
        }
        v16 = (*(_BYTE*)v12 & 1) != 0 ? *(_QWORD*)(v12 + 16) : v12 + 1;
        if ((unsigned int)GameRoutine_1a09cf0(v16, v8, v15) == 0) {
          break;
        }
      }
    }
    v9 += 4;
    if (--v11 == 0) {
      goto LABEL_45;
    }
  }
  v17 = (__int64*)v9[1];
  v18 = v9[2] - (_QWORD)v17;
  if (v18 == 0) {
  LABEL_48:
    v45 = GameRoutine_106040();
    if (v45 != 0) {
      v46 = v45;
      GameRoutine_190200(v45, a3);
      GameRoutine_1056a0(v46 + 24, 256, (__int64)"%s.bfsar", a4);
      GameRoutine_1056a0(v46 + 48, 256, (__int64)"%s.bin", a4);
      GameRoutine_1056a0(v46 + 72, 256, (__int64)"%s.fsid.bin", a4);
      v47 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
      v48 = GameRoutine_190240(v46 + 24);
      *(struct PseudoSret*)(v59) = GameRoutine_10df70(v47, v48, 32);
      GameRoutine_112180(v46 + 96, v59);
      v50 = GameRoutine_112290(v46 + 96, v49);
      (*(void (**)(__int64))(*(_QWORD*)v50 + 40LL))(v50);
      v51 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
      v52 = GameRoutine_190240(v46 + 48);
      *(struct PseudoSret*)(v59) = GameRoutine_10df70(v51, v52, 32);
      GameRoutine_112180(v46 + 112, v59);
      v54 = GameRoutine_112290(v46 + 112, v53);
      (*(void (**)(__int64))(*(_QWORD*)v54 + 40LL))(v54);
      v55 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
      v56 = GameRoutine_190240(v46 + 72);
      *(struct PseudoSret*)(v59) = GameRoutine_10df70(v55, v56, 32);
      GameRoutine_112180(v46 + 128, v59);
      v58 = GameRoutine_112290(v46 + 128, v57);
      (*(void (**)(__int64))(*(_QWORD*)v58 + 40LL))(v58);
      *(_BYTE*)(v46 + 264) = 0;
      *(_QWORD*)(v46 + 144) = 0x100000001LL;
      *(_BYTE*)(a1 + 41) = 0;
      return GameRoutine_1a09b80(GameData_21344c0[0]);
    }
    v42 = "#SoundLibrary error : Can't open AdditionalSoundArchive into [%s]\n";
    v43 = a3;
    goto LABEL_46;
  }
  v19 = v18 >> 3;
  v20 = (__int64*)v9[1];
  v21 = v18 >> 3;
  do {
    v23 = *v20++;
    v22 = v23;
    v24 = *(_DWORD*)(v23 + 144);
    if (v24 != 0 && v24 != 3) {
      v26 = GameRoutine_1a09c70(a3);
      v27 = *(_BYTE*)v22 >> 1;
      if ((*(_BYTE*)v22 & 1) != 0) {
        v27 = *(_QWORD*)(v22 + 8);
      }
      if (v26 == v27) {
        v28 = v26;
        if (v26 == -1) {
          goto LABEL_51;
        }
        v29 = (*(_BYTE*)v22 & 1) != 0 ? *(_QWORD*)(v22 + 16) : v22 + 1;
        if ((unsigned int)GameRoutine_1a09cf0(v29, a3, v28) == 0) {
          ++*(_DWORD*)(v22 + 148);
          return GameRoutine_1a09b80(GameData_21344c0[0]);
        }
      }
    }
    --v21;
  } while (v21 != 0);
  while (1) {
    v31 = *v17++;
    v30 = v31;
    if (*(_DWORD*)(v31 + 144) == 3) {
      v32 = GameRoutine_1a09c70(a3);
      v33 = *(_BYTE*)v30 >> 1;
      if ((*(_BYTE*)v30 & 1) != 0) {
        v33 = *(_QWORD*)(v30 + 8);
      }
      if (v32 == v33) {
        v34 = v32;
        if (v32 == -1) {
          goto LABEL_51;
        }
        v35 = (*(_BYTE*)v30 & 1) != 0 ? *(_QWORD*)(v30 + 16) : v30 + 1;
        if ((unsigned int)GameRoutine_1a09cf0(v35, a3, v34) == 0) {
          break;
        }
      }
    }
    if (--v19 == 0) {
      goto LABEL_48;
    }
  }
  v36 = *(_QWORD*)(a1 + 32);
  v37 = GameRoutine_190240(v12);
  v38 = *(_QWORD*)(v30 + 248);
  v39 = *(_QWORD*)(v30 + 256);
  v40 = v37;
  v41 = GameRoutine_190240(v30);
  GameRoutine_118df0(v36, v40, v38, v39, v41);
  *(_QWORD*)(v30 + 144) = 0x100000002LL;
  *(_BYTE*)(v30 + 264) = 1;
  return GameRoutine_1a09b80(GameData_21344c0[0]);
}

__int64 GameHr_1078a0(__int64 a1, unsigned int a2, unsigned int* a3, __int64 a4,
                      unsigned int a5)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 i;
  unsigned __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
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
  unsigned __int64 v41;
  _QWORD* v42;
  __int64 v43;
  unsigned __int64 v44;
  _QWORD* v45;
  __int64 vars0;
  __int64 vars8;
  __int64 vars10;
  __int64 vars18;

  if (a2 == 0) {
    return 0;
  }
  v5 = *a3;
  v6 = a1 + 8LL * a2;
  v7 = a1;
  for (i = a2;; i >>= 1) {
    while (1) {
      v9 = i >> 1;
      v10 = v7 + 8 * (i >> 1);
      v11 = *(_DWORD*)(*(_QWORD*)v10 + 8LL);
      if (v11 >= v5) {
        break;
      }
      v7 = v10 + 8;
      i += ~v9;
      if (i == 0) {
        return 0;
      }
    }
    if (v5 >= v11) {
      break;
    }
    v6 = v7 + 8 * (i >> 1);
    if (v9 == 0) {
      return 0;
    }
  }
  if (i != 1) {
    do {
      v16 = v9 >> 1;
      v17 = v7 + 8 * (v9 >> 1);
      if (*(_DWORD*)(*(_QWORD*)v17 + 8LL) < v5) {
        v7 = v17 + 8;
        v16 = v9 + ~v16;
      }
      v9 = v16;
    } while (v16 != 0);
  }
  v12 = v10 + 8;
  if (v6 != v12) {
    v13 = (v6 - v12) >> 3;
    v6 = v12;
    do {
      v14 = v13 >> 1;
      v15 = v6 + 8 * (v13 >> 1);
      if (v5 >= *(_DWORD*)(*(_QWORD*)v15 + 8LL)) {
        v6 = v15 + 8;
        v14 = v13 + ~v14;
      }
      v13 = v14;
    } while (v14 != 0);
  }
  if (v7 == v6) {
    return 0;
  }
  if (v7 + 8 != v6) {
    GameRoutine_190020(&v43, a4);
    if (a5 != 0) {
      *(struct PseudoSret*)(&v40) = GameRoutine_190340(&v43, 0, a5);
      if ((v43 & 1) != 0) {
        v20 = (v40 & 1) != 0 ? v42 : (__int64*)((char*)&v40 + 1);
        v21 =
            (v40 & 1) != 0 ? v41 : (unsigned __int64)(unsigned __int8)v40 >> 1;
        GameRoutine_a3a260(&v43, v20, v21);
      }
      else if ((v40 & 1) != 0) {
        GameRoutine_a3a3a0(&v43, v42, v41);
      }
      else {
        v43 = v40;
        v44 = v41;
        v45 = v42;
      }
      if ((v40 & 1) != 0) {
        (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)GameData_212d480[0] + 24LL))(
            *GameData_212d480[0], v42);
      }
    }
    v28 = GameRoutine_190240(&v43);
    v29 = (v6 - v7) >> 3;
    do {
      v30 = v29 >> 1;
      v31 = v7 + 8 * (v29 >> 1);
      if ((GameRoutine_1a09d30(*(_QWORD*)(*(_QWORD*)v31 + 16LL), v28, v22, v23,
                               v24, v25, v26, v27, v40, v41, v42, v43, v44, v45,
                               vars0, vars8, vars10, vars18) &
           0x80000000) != 0) {
        v7 = v31 + 8;
        v30 = v29 + ~v30;
      }
      v29 = v30;
    } while (v30 != 0);
    if (v7 == v6 ||
        (v32 = *(_QWORD*)(*(_QWORD*)v7 + 16LL), v33 = GameRoutine_190240(&v43),
         (unsigned int)GameRoutine_1a09d30(
             v32, v33, v34, v35, v36, v37, v38, v39, v40, v41, v42, v43, v44,
             v45, vars0, vars8, vars10, vars18) != 0)) {
      v7 = 0;
    }
    if ((v43 & 1) != 0) {
      (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)GameData_212d480[0] + 24LL))(
          *GameData_212d480[0], v45);
    }
  }
  return v7;
}

float GameHr_16afe0(__int64 a1, float a2, float a3, float a4, float a5,
                    float a6, float a7)
{
  *(float*)(*(_QWORD*)(a1 + 16) + 8LL) = a5 / a2;
  *(float*)(*(_QWORD*)(a1 + 16) + 12LL) = a6 / a2;
  *(float*)(*(_QWORD*)(a1 + 16) + 16LL) = a7 / a2;
  **(float**)(a1 + 16) = a3 / a2;
  *(float*)(*(_QWORD*)(a1 + 16) + 4LL) = a4 / a2;
  return *(float*)(*(_QWORD*)(a1 + 16) + 4LL);
}

void GameHr_16ee40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
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
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int* v26;
  float v27;
  float v28;
  __int64 v29;
  unsigned int v30;
  float v31;
  float v32;
  unsigned int v33;

  GameRoutine_1678f0(a1, a2, a3);
  v4 = GameData_2134428;
  *(_QWORD*)a1 = GameData_2134428 + 2;
  *(_QWORD*)(a1 + 5592) = v4 + 174;
  *(_QWORD*)(a1 + 40) = v4 + 33;
  *(_DWORD*)(a1 + 5680) = 1107480595;
  GameRoutine_1a0ba50(a1 + 5684, 0, 920, v5, v6, v7);
  *(_QWORD*)(a1 + 6616) = 0;
  *(_QWORD*)(a1 + 6624) = 0;
  *(_QWORD*)(a1 + 6632) = 0;
  *(_QWORD*)(a1 + 6640) = 0;
  *(_QWORD*)(a1 + 6648) = 0;
  *(_QWORD*)(a1 + 6664) = 0;
  *(_WORD*)(a1 + 6672) = 0;
  *(_QWORD*)(a1 + 6604) = 0x473B800000002000LL;
  *(_QWORD*)(a1 + 6656) = 0x100000000LL;
  *(_DWORD*)(a1 + 6676) = -100;
  v8 = GameData_212d480[0];
  v9 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 0x10000,
                                               32);
  v10 = *(_QWORD*)(a1 + 6616);
  *(_QWORD*)(a1 + 6616) = v9;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v8 + 24LL))(*v8);
  }
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v8 + 16LL))(
      *v8, 4LL * *(unsigned int*)(a1 + 6604), 32);
  v12 = *(_QWORD*)(a1 + 6624);
  *(_QWORD*)(a1 + 6624) = v11;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v8 + 24LL))(*v8);
  }
  v13 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v8 + 16LL))(
      *v8, 4LL * *(unsigned int*)(a1 + 6604), 32);
  v17 = *(_QWORD*)(a1 + 6632);
  *(_QWORD*)(a1 + 6632) = v13;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v8 + 24LL))(*v8);
  }
  GameRoutine_1a0ba50(*(_QWORD*)(a1 + 6624), 0,
                      4LL * *(unsigned int*)(a1 + 6604), v14, v15, v16);
  GameRoutine_1a0ba50(*(_QWORD*)(a1 + 6632), 0,
                      4LL * *(unsigned int*)(a1 + 6604), v18, v19, v20);
  v21 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v8 + 16LL))(
      *v8, 4LL * *(unsigned int*)(a1 + 6604), 32);
  v22 = *(_QWORD*)(a1 + 6640);
  *(_QWORD*)(a1 + 6640) = v21;
  if (v22 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v8 + 24LL))(*v8);
  }
  v23 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v8 + 16LL))(
      *v8, 4LL * *(unsigned int*)(a1 + 6604), 32);
  v24 = *(_QWORD*)(a1 + 6648);
  *(_QWORD*)(a1 + 6648) = v23;
  if (v24 != 0) {
    v23 = (*(__int64 (**)(__int64))(*(_QWORD*)*v8 + 24LL))(*v8);
  }
  v25 = 0;
  v26 = (unsigned int*)(a1 + 5688);
  v27 = 48000.0 / (float)*(unsigned int*)(a1 + 6604);
  while (1) {
    v28 = *(float*)(a1 + 5680);
    v30 =
        (int)(float)((float)(v28 * GameRoutine_1a0a8d0(
                                       v23, (float)(unsigned int)v25 / 12.0)) /
                     v27);
    if (v30 >= 0xFFF) {
      v30 = 4095;
    }
    *(v26 - 1) = v30;
    if (v25 == 114) {
      break;
    }
    v31 = *(float*)(a1 + 5680);
    v32 = GameRoutine_1a0a8d0(v29, (float)((unsigned int)v25 | 1) / 12.0);
    v25 += 2;
    v33 = (int)(float)((float)(v31 * v32) / v27);
    if (v33 >= 0xFFF) {
      v33 = 4095;
    }
    *v26 = v33;
    v26 += 2;
  }
}

_QWORD* GameHr_2aa3e0(_QWORD* a1, int a2, unsigned int a3, __int64 a4,
                      __int64 a5)
{
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* result;
  _QWORD* v19;
  int v20;
  int v21;
  int v23;
  int i;
  __int64 v26;
  int v27;
  void (*v28)(__int64, __int64, __int64);
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  int v32;
  int v33;
  int v35;
  int v37;
  __int64 v38;
  int v39;
  void (*v40)(__int64, __int64, __int64);
  __int64 v41;
  __int64 v42;
  __int64 v44;
  __int64 v46;

  v5 = (_QWORD*)a1[4];
  v6 = a1 + 3;
  v7 = a5;
  v8 = a4;
  if (v5 == a1 + 3) {
    result = nullptr;
    if (a2 < 1) {
      return result;
    }
    v19 = (_QWORD*)a1[2];
    if (v19 == a1 + 1) {
      return result;
    }
    v20 = 0;
    while (1) {
      v21 = *((_DWORD*)v19 - 35);
      if (v21 == 255 || v21 > (int)a3) {
        return nullptr;
      }
      v23 = *((_DWORD*)v19 - 51);
      v19 = (_QWORD*)v19[1];
      v20 += v23;
      if (v19 == a1 + 1 || v20 >= a2) {
        if (v20 >= a2) {
          for (i = 0; i < a2; i += v27) {
            v26 = a1[2];
            v27 = *(_DWORD*)(v26 - 204);
            v28 = *(void (**)(__int64, __int64, __int64))(v26 - 200);
            v29 = *(_QWORD*)(v26 - 192);
            v30 = v26 - 400;
            GameRoutine_2a76e0(v26 - 400);
            GameRoutine_2a7620(v30);
            if (v28 != nullptr) {
              v28(v30, 2, v29);
            }
          }
          if (i != 0) {
            v5 = (_QWORD*)a1[4];
            v7 = a5;
            v8 = a4;
            break;
          }
        }
        return nullptr;
      }
    }
  }
  v12 = v5 - 50;
  if ((GameRoutine_2a7520(v5 - 50, (unsigned int)a2, a3, v8, v7) & 1) == 0) {
    result = nullptr;
    if (a2 < 1) {
      return result;
    }
    v31 = (_QWORD*)a1[2];
    if (v31 == a1 + 1) {
      return result;
    }
    v32 = 0;
    while (1) {
      v33 = *((_DWORD*)v31 - 35);
      if (v33 == 255 || v33 > (int)a3) {
        return nullptr;
      }
      v35 = *((_DWORD*)v31 - 51);
      v31 = (_QWORD*)v31[1];
      v32 += v35;
      if (v31 == a1 + 1 || v32 >= a2) {
        if (v32 >= a2) {
          v44 = v8;
          v46 = v7;
          v37 = 0;
          do {
            v38 = a1[2];
            v39 = *(_DWORD*)(v38 - 204);
            v40 = *(void (**)(__int64, __int64, __int64))(v38 - 200);
            v41 = *(_QWORD*)(v38 - 192);
            v42 = v38 - 400;
            GameRoutine_2a76e0(v38 - 400);
            GameRoutine_2a7620(v42);
            if (v40 != nullptr) {
              v40(v42, 2, v41);
            }
            v37 += v39;
          } while (v37 < a2);
          if (v37 != 0) {
            v12 = v5 - 50;
            if ((GameRoutine_2a7520(v5 - 50, (unsigned int)a2, a3, v44, v46) &
                 1) != 0) {
              break;
            }
          }
        }
        return nullptr;
      }
    }
  }
  *((_DWORD*)v5 - 35) = (unsigned __int8)a3;
  if (v5 != v6) {
    v13 = (__int64*)v5[1];
    v14 = *v13;
    *(_QWORD*)(*v5 + 8LL) = v13;
    *v13 = *v5;
    *(_QWORD*)(v14 + 8) = v5;
    *v5 = v14;
  }
  v15 = a1 + 1;
  do {
    v16 = v15;
    v15 = (_QWORD*)*v15;
  } while (v16 != (_QWORD*)a1[2] && *((_DWORD*)v15 - 35) > *((_DWORD*)v5 - 35));
  v17 = *v5;
  *v5 = v15;
  *(_QWORD*)(v17 + 8) = v16;
  *(_QWORD*)(*v16 + 8LL) = v5;
  *v16 = v17;
  return v12;
}

#pragma GCC visibility pop
