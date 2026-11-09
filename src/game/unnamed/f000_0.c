#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)
struct PseudoSret {
  _QWORD words[3];
};

extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1ad35e8;
extern _UNKNOWN GameData_1ae2ba3;
extern _UNKNOWN GameData_1af1e76;
extern _QWORD GameData_1b01568[4];
extern float GameData_1b10228[965];
extern _DWORD GameData_1b5e540[10];
extern __int64 (*GameData_1f8f7e8[])();
extern __int64 (*GameData_1f91e68[])();
extern __int64 (*GameData_1f92f88[])();
extern __int64 (*GameData_1f93088[])();
extern __int64 (*GameData_1f94310[])();
extern __int64 (*GameData_1f94aa8[])();
extern __int64 (*GameData_1f960e8[])();
extern __int64 (*GameData_1fad738[])();
extern __int64 (*GameData_1fc7690[])();
extern __int64 (*GameData_1fe8378[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c010[3];
extern _UNKNOWN* GameData_212c028;
extern __int64* GameData_212c370;
extern __int64 GameData_212c470;
extern __int64 GameData_212c5c0[3];
extern __int64 GameData_212c638;
extern __int64 GameData_212c6a0[3];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64 GameData_212d310;
extern __int64* GameData_212d458[7];
extern __int64* GameData_212d468[5];
extern __int64* GameData_212d480[2];
extern __int64 GameData_212dbe8[3];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_212dc38[7];
extern __int64* GameData_212e250;
extern _UNKNOWN** GameData_212e738;
extern __int64* GameData_212ea58;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ebc8[4];
extern __int64* GameData_212eda8[10];
extern __int64* GameData_212edb0[9];
extern __int64* GameData_212ee20[6];
extern __int64 GameData_212f520[4];
extern __int64 GameData_212f5c0[3];
extern __int64* GameData_212f878;
extern __int64 GameData_2132398[3];
extern __int64 GameData_21323e8[4];
extern char* GameData_2135468;
extern __int64* GameData_21359e0;
extern int* GameData_21359e8;
extern _UNKNOWN GameData_2167748;
extern __int64 GameData_21a35c8;
extern __int64 GameData_21a6070;
extern __int64 GameData_21a60b0;
extern __int64 GameData_21a60d8;
extern __int64 GameData_21caab0;
extern __int64 GameData_21cd130;
extern int GameData_21cfa58;
extern int GameData_21cfa5c;
extern int GameData_21cfa60;
extern int GameData_21cfa64;
extern __int64 GameData_21d1f40;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21ed098;
extern __int64 GameData_21ee240;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3d10;
extern int GameData_21fdec4;
extern int GameData_21fdedc;
extern int GameData_21fdee0;
extern int GameData_21fdf0c;
extern int GameData_21fdf10;
extern int GameData_21fdf14;
extern __int64 GameData_2203490;
extern __int64 GameData_220b6f0;
extern __int64 GameData_220f848;
extern __int64 GameData_2212270;
extern __int64 GameData_22197d8;
extern __int64 GameData_2265ae0;
extern __int64 GameData_2265ed8;
extern __int64 GameData_2265ef0;
__int64 GameRoutine_1002b40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1002ca0(_QWORD);
__int64 GameRoutine_1003260(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1006d0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_104e1d0(_QWORD, _QWORD);
__int64 GameRoutine_107a7e0(void);
__int64 GameRoutine_10b000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10b0e0(_QWORD);
__int64 GameRoutine_10c1070(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10c830(_QWORD, float);
__int64 GameRoutine_10c910(_QWORD, _QWORD);
__int64 GameRoutine_10c9b80(float);
__int64 GameRoutine_10cb00(_QWORD, _QWORD);
__int64 GameRoutine_10cd70(_QWORD, _QWORD);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_10d050(_QWORD, _QWORD);
float GameRoutine_10d1b0(_QWORD);
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_120360(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_137cd90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14e360(_QWORD);
__int64 GameRoutine_17c1f00(void);
__int64 GameRoutine_18c4dd0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18c6550(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09bb0(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
float GameRoutine_1a0a010(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
float GameRoutine_1a0a820(float);
float GameRoutine_1a0a950(float);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
float GameRoutine_283c40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_283c80(_QWORD);
__int64 GameRoutine_283ca0(_QWORD, _QWORD);
__int64 GameRoutine_283cd0(_QWORD);
float GameRoutine_2a51c0(_BYTE*, int, float);
float GameRoutine_2a5270(_QWORD, float);
__int64 GameRoutine_327a60(_QWORD, _QWORD);
__int64 GameRoutine_32ffe0(_QWORD, _QWORD, float);
float GameRoutine_3328d0(__int64, unsigned int, unsigned int, char, float,
                         float, float, float);
__int64 GameRoutine_3865a0(void);
__int64 GameRoutine_3dae00(_QWORD);
__int64 GameRoutine_506fa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, float);
__int64 GameRoutine_507c70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_55af80(_QWORD);
void GameRoutine_5a3500(__int64, float);
__int64 GameRoutine_5f040(_QWORD);
__int64 GameRoutine_5f050(_QWORD, _QWORD);
__int64 GameRoutine_5f060(_QWORD);
__int64 GameRoutine_5f070(_QWORD, _QWORD);
__int64 GameRoutine_5f100(_QWORD, _QWORD);
__int64 GameRoutine_5f200(_QWORD, _QWORD);
__int64 GameRoutine_5f290(_QWORD, _QWORD);
__int64 GameRoutine_60a270(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_65a940(_QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_6725f0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_6bc220(_QWORD);
__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c9cf0(_QWORD, _QWORD);
__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_710540(_QWORD, _QWORD);
void GameRoutine_730b20(__int64, int, int);
__int64 GameRoutine_73e2a0(__int64 result, _QWORD*, unsigned __int16, int, int,
                           __int64);
__int64 GameRoutine_764060(_QWORD, _QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_7a96a0(float);
__int64 GameRoutine_80cb30(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
struct PseudoSret GameRoutine_81d430(void);
__int64 GameRoutine_9185e0(void);
__int64 GameRoutine_a2c9c0(_QWORD, _QWORD);
__int64 GameRoutine_a738c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a73e50(__int64 result, _QWORD*);
__int64 GameRoutine_a7fda0(_QWORD, _QWORD);
__int64 GameRoutine_b86fb0(_QWORD, _QWORD);
__int64 GameRoutine_c44560(_QWORD, _QWORD);
__int64 GameRoutine_c51a60(_QWORD, _QWORD, float);
__int64 GameRoutine_c5fca0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_c72b30(_QWORD, _QWORD);
__int64 GameRoutine_cb90b0(_QWORD, float);
__int64 GameRoutine_cdeee0(_QWORD, _QWORD);
struct PseudoSret GameRoutine_cfdb00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d0e440(_QWORD, _QWORD);
float GameRoutine_d28060(_QWORD);
__int64 GameRoutine_d2af80(_QWORD, float);
struct PseudoSret GameRoutine_d31ee0(_QWORD);
__int64 GameRoutine_d477c0(_QWORD, _QWORD);
__int64 GameRoutine_d48320(void);
__int64 GameRoutine_d48970(_QWORD, float);
__int64 GameRoutine_d86560(_QWORD);
__int64 GameRoutine_d8d1a0(_QWORD);
__int64 GameRoutine_d97c00(_QWORD, _QWORD);
struct PseudoSret GameRoutine_d98c0(void);
__int64 GameRoutine_d9db0(_QWORD, _QWORD, double);
struct PseudoSret GameRoutine_dabf0(_QWORD);
__int64 GameRoutine_e1a6d0(_QWORD, _QWORD);
__int64 GameRoutine_e2cfa0(_QWORD, _QWORD);
__int64 GameRoutine_e3f8b0(_QWORD);
__int64 GameRoutine_e41bc0(_QWORD);
__int64 GameRoutine_e7fde0(_QWORD, _QWORD, _QWORD, _QWORD, float, double);

__int64 GameHr_10ab80(__int64 a1)
{
  __int64 v2;
  float v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;

  v2 = 0;
  v3 = (*(float (**)(_QWORD))(*(_QWORD*)*GameData_212e250 + 72LL))(
           *GameData_212e250) /
       16.667f;
  do {
    v4 = a1 + v2;
    v5 = *(float*)(a1 + v2 + 56);
    v6 = *(float*)(a1 + v2 + 64);
    v7 = v5;
    if (v6 != 0.0f) {
      v8 = *(float*)(v4 + 60);
      v7 = v5 + (float)(v6 * v3);
      *(float*)(v4 + 56) = v7;
      if (v6 >= 0.0f) {
        if (v7 <= v8) {
          goto LABEL_10;
        }
      LABEL_9:
        v7 = v8;
        *(float*)(v4 + 56) = v8;
        *(_DWORD*)(v4 + 64) = 0;
        goto LABEL_10;
      }
      if (v7 < v8) {
        goto LABEL_9;
      }
    }
  LABEL_10:
    if (v5 == v7) {
      v9 = a1 + v2;
      v10 = *(float*)(a1 + v2 + 68);
      v11 = *(float*)(a1 + v2 + 76);
      v12 = v10;
      if (v11 == 0.0f) {
        goto LABEL_19;
      }
    }
    else {
      GameRoutine_120360(*(_QWORD*)(a1 + 8), 0, *(unsigned int*)(v4 + 372),
                         v7 * *(float*)(v4 + 188));
      v9 = a1 + v2;
      v10 = *(float*)(a1 + v2 + 68);
      v11 = *(float*)(a1 + v2 + 76);
      v12 = v10;
      if (v11 == 0.0f) {
        goto LABEL_19;
      }
    }
    v13 = *(float*)(v9 + 72);
    v12 = v10 + (float)(v11 * v3);
    *(float*)(v9 + 68) = v12;
    if (v11 >= 0.0f) {
      if (v12 <= v13) {
        goto LABEL_19;
      }
    LABEL_18:
      v12 = v13;
      *(float*)(v9 + 68) = v13;
      *(_DWORD*)(v9 + 76) = 0;
      goto LABEL_19;
    }
    if (v12 < v13) {
      goto LABEL_18;
    }
  LABEL_19:
    if (v10 == v12) {
      v14 = a1 + v2;
      v15 = *(float*)(a1 + v2 + 80);
      v16 = *(float*)(a1 + v2 + 88);
      v17 = v15;
      if (v16 == 0.0f) {
        goto LABEL_28;
      }
    }
    else {
      GameRoutine_120360(*(_QWORD*)(a1 + 8), 1, *(unsigned int*)(v4 + 372),
                         v12 * *(float*)(a1 + v2 + 192));
      v14 = a1 + v2;
      v15 = *(float*)(a1 + v2 + 80);
      v16 = *(float*)(a1 + v2 + 88);
      v17 = v15;
      if (v16 == 0.0f) {
        goto LABEL_28;
      }
    }
    v18 = *(float*)(v14 + 84);
    v17 = v15 + (float)(v16 * v3);
    *(float*)(v14 + 80) = v17;
    if (v16 >= 0.0f) {
      if (v17 <= v18) {
        goto LABEL_28;
      }
    LABEL_27:
      v17 = v18;
      *(float*)(v14 + 80) = v18;
      *(_DWORD*)(v14 + 88) = 0;
      goto LABEL_28;
    }
    if (v17 < v18) {
      goto LABEL_27;
    }
  LABEL_28:
    if (v15 == v17) {
      v19 = a1 + v2;
      v20 = *(float*)(a1 + v2 + 100);
      if (v20 == 0.0f) {
        goto LABEL_37;
      }
    }
    else {
      GameRoutine_120360(*(_QWORD*)(a1 + 8), 2, *(unsigned int*)(v4 + 372),
                         v17 * *(float*)(a1 + v2 + 196));
      v19 = a1 + v2;
      v20 = *(float*)(a1 + v2 + 100);
      if (v20 == 0.0f) {
        goto LABEL_37;
      }
    }
    v21 = *(float*)(v19 + 96);
    v22 = *(float*)(v19 + 92) + (float)(v20 * v3);
    *(float*)(v19 + 92) = v22;
    if (v20 >= 0.0f) {
      if (v22 <= v21) {
        goto LABEL_37;
      }
    LABEL_36:
      *(float*)(v19 + 92) = v21;
      *(_DWORD*)(v19 + 100) = 0;
      goto LABEL_37;
    }
    if (v22 < v21) {
      goto LABEL_36;
    }
  LABEL_37:
    v23 = *(float*)(v19 + 112);
    if (v23 != 0.0f) {
      v24 = *(float*)(v19 + 104) + (float)(v23 * v3);
      v25 = *(float*)(a1 + v2 + 108);
      *(float*)(v19 + 104) = v24;
      if (v23 >= 0.0f) {
        if (v24 <= v25) {
          goto LABEL_43;
        }
      LABEL_42:
        *(float*)(v19 + 104) = v25;
        *(_DWORD*)(v19 + 112) = 0;
        goto LABEL_43;
      }
      if (v24 < v25) {
        goto LABEL_42;
      }
    }
  LABEL_43:
    v26 = a1 + v2;
    v27 = *(float*)(a1 + v2 + 124);
    if (v27 != 0.0f) {
      v28 = *(float*)(v26 + 120);
      v29 = *(float*)(v26 + 116) + (float)(v27 * v3);
      *(float*)(v26 + 116) = v29;
      if (v27 >= 0.0f) {
        if (v29 <= v28) {
          goto LABEL_49;
        }
      LABEL_48:
        *(float*)(v26 + 116) = v28;
        *(_DWORD*)(v26 + 124) = 0;
        goto LABEL_49;
      }
      if (v29 < v28) {
        goto LABEL_48;
      }
    }
  LABEL_49:
    v30 = *(float*)(v26 + 136);
    if (v30 != 0.0f) {
      v31 = *(float*)(v26 + 128) + (float)(v30 * v3);
      v32 = *(float*)(a1 + v2 + 132);
      *(float*)(v26 + 128) = v31;
      if (v30 >= 0.0f) {
        if (v31 <= v32) {
          goto LABEL_55;
        }
      LABEL_54:
        *(float*)(v26 + 128) = v32;
        *(_DWORD*)(v26 + 136) = 0;
        goto LABEL_55;
      }
      if (v31 < v32) {
        goto LABEL_54;
      }
    }
  LABEL_55:
    v33 = a1 + v2;
    v34 = *(float*)(a1 + v2 + 148);
    if (v34 != 0.0f) {
      v35 = *(float*)(v33 + 144);
      v36 = *(float*)(v33 + 140) + (float)(v34 * v3);
      *(float*)(v33 + 140) = v36;
      if (v34 >= 0.0f) {
        if (v36 <= v35) {
          goto LABEL_61;
        }
      LABEL_60:
        *(float*)(v33 + 140) = v35;
        *(_DWORD*)(v33 + 148) = 0;
        goto LABEL_61;
      }
      if (v36 < v35) {
        goto LABEL_60;
      }
    }
  LABEL_61:
    v37 = *(float*)(v33 + 160);
    if (v37 != 0.0f) {
      v38 = *(float*)(v33 + 152) + (float)(v37 * v3);
      v39 = *(float*)(a1 + v2 + 156);
      *(float*)(v33 + 152) = v38;
      if (v37 >= 0.0f) {
        if (v38 <= v39) {
          goto LABEL_67;
        }
      LABEL_66:
        *(float*)(v33 + 152) = v39;
        *(_DWORD*)(v33 + 160) = 0;
        goto LABEL_67;
      }
      if (v38 < v39) {
        goto LABEL_66;
      }
    }
  LABEL_67:
    v40 = a1 + v2;
    v41 = *(float*)(a1 + v2 + 172);
    if (v41 != 0.0f) {
      v42 = *(float*)(v40 + 168);
      v43 = *(float*)(v40 + 164) + (float)(v41 * v3);
      *(float*)(v40 + 164) = v43;
      if (v41 >= 0.0f) {
        if (v43 <= v42) {
          goto LABEL_73;
        }
      LABEL_72:
        *(float*)(v40 + 164) = v42;
        *(_DWORD*)(v40 + 172) = 0;
        goto LABEL_73;
      }
      if (v43 < v42) {
        goto LABEL_72;
      }
    }
  LABEL_73:
    v44 = *(float*)(v40 + 184);
    if (v44 != 0.0f) {
      v45 = *(float*)(v40 + 176) + (float)(v44 * v3);
      v46 = *(float*)(a1 + v2 + 180);
      *(float*)(v40 + 176) = v45;
      if (v44 >= 0.0f) {
        if (v45 > v46) {
        LABEL_2:
          *(float*)(v40 + 176) = v46;
          *(_DWORD*)(v40 + 184) = 0;
        }
      }
      else if (v45 < v46) {
        goto LABEL_2;
      }
    }
    v2 += 360;
  } while (v2 != 1440);
  return GameRoutine_10b0e0(a1);
}

void GameHr_10c480(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4,
                   float a5)
{
  float* v9;
  __int64 v10;
  float v11;
  float v12;
  bool v13;
  float* v15;
  float v16;
  float v17;

  v9 = (float*)(a1 + 360LL * (int)a2 + 56);
  if (a4 == 11) {
    v10 = 0;
    while (1) {
      v11 = *v9;
      v12 = GameRoutine_10d1b0(a3);
      v9[1] = a5;
      if (v12 == 0.0f) {
        break;
      }
      v13 = v11 == *v9;
      v9[2] = (float)(a5 - *v9) / (float)(v12 / 16.667f);
      if (!v13) {
        goto LABEL_8;
      }
    LABEL_3:
      ++v10;
      v9 += 3;
      if (v10 == 11) {
        return;
      }
    }
    *v9 = a5;
    v9[2] = 0.0f;
    if (v11 == a5) {
      goto LABEL_3;
    }
  LABEL_8:
    GameRoutine_10b000(a1, a2, (unsigned int)v10);
    goto LABEL_3;
  }
  v15 = &v9[3 * a4];
  v16 = *v15;
  v17 = GameRoutine_10d1b0(a3);
  v15[1] = a5;
  if (v17 == 0.0f) {
    *v15 = a5;
    v15[2] = 0.0f;
    if (v16 == a5) {
      return;
    }
    goto LABEL_11;
  }
  v13 = v16 == *v15;
  v15[2] = (float)(a5 - *v15) / (float)(v17 / 16.667f);
  if (!v13) {
  LABEL_11:
    GameRoutine_10b000(a1, a2, a4);
  }
}

__int64 GameHr_1129c0(__int64 a1)
{
  __int64 v2;

  if (*(_BYTE*)(a1 + 5760) == 1) {
    *(_BYTE*)(a1 + 5760) = 0;
    v2 = *(_QWORD*)(a1 + 5632);
    if (v2 != 0) {
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 32LL))(
          *(_QWORD*)(a1 + 5624), *(float*)(v2 + 4));
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 40LL))(
          *(_QWORD*)(a1 + 5624), *(float*)(*(_QWORD*)(a1 + 5632) + 8LL));
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 48LL))(
          *(_QWORD*)(a1 + 5624), *(float*)(*(_QWORD*)(a1 + 5632) + 12LL));
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 56LL))(
          *(_QWORD*)(a1 + 5624),
          *(float*)(*(_QWORD*)(a1 + 5632) + 16LL) / 59.999f);
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 24LL))(
          *(_QWORD*)(a1 + 5624), *(float*)(*(_QWORD*)(a1 + 5632) + 32LL));
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 16LL))(
          *(_QWORD*)(a1 + 5624), *(float*)(*(_QWORD*)(a1 + 5632) + 36LL));
    }
  }
  return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5624) + 88LL))(
      *(_QWORD*)(a1 + 5624), a1);
}

__int64 GameHr_2a4fe0(float a1)
{
  bool v1;
  float v2;
  float v3;

  v1 = a1 < 0.0f;
  v2 = fminf(a1, 1.0f);
  v3 = 0.0f;
  if (!v1) {
    v3 = v2;
  }
  if (v3 < 0.13561f) {
    return 80;
  }
  if (v3 >= 0.9f) {
    return 16000;
  }
  return *(unsigned __int16*)&GameData_2135468
      [2 * (int)(float)((float)(v3 + -0.13561f) / 0.033333f)];
}

float GameHr_2a5490(float a1)
{
  float v1;
  float v2;
  bool v3;
  float v4;

  v1 = -90.4f;
  if (a1 >= -90.4f) {
    v1 = a1;
  }
  v2 = v1 * 10.0f;
  v3 = a1 <= 6.0f;
  v4 = 60.0f;
  if (v3) {
    v4 = v2;
  }
  return GameData_1b10228[(int)v4 + 904];
}

void GameHr_2a8b80(_DWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                   unsigned int a5, __int64 a6)
{
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  float v25;
  float v26;
  __int64 i;
  unsigned int v28;
  int v29;
  int v30;
  int v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  int v39;
  float v40;
  float v41;
  float v42;
  float v43;
  __int64 v44;
  int v45;
  __int64 v46;

  v12 = GameRoutine_14e360(a1);
  v13 = *(_DWORD*)(v12 + 224);
  v14 = GameRoutine_14e360(v12);
  if (*(_DWORD*)(a3 + 4) != 0) {
    v15 = a3 + 24LL * (int)a5;
    v17 = *(float*)(v15 + 8);
    v16 = *(float*)(v15 + 12);
    v19 = *(float*)(v15 + 16);
    v18 = *(float*)(v15 + 20);
    v21 = *(_DWORD*)(v15 + 24);
    v20 = *(_DWORD*)(v15 + 28);
    v22 = *(_DWORD*)(GameRoutine_14e360(v14) + 228);
    if (v22 != 1) {
      goto LABEL_3;
    }
    goto LABEL_88;
  }
  v23 = *(unsigned __int8*)(v14 + 1961);
  v46 = 0;
  if (v23 == 1) {
    HIBYTE(v46) = 1;
  }
  v24 = a1[62];
  if (v24 <= 3) {
    if (v24 > 1) {
      if (v24 == 2) {
        LODWORD(v46) = 0;
        goto LABEL_51;
      }
      LODWORD(v46) = 1;
      if ((unsigned int)(v13 - 1) < 2) {
        goto LABEL_56;
      }
    }
    else {
      if (v24 != 1) {
      LABEL_48:
        LODWORD(v46) = 0;
        if ((unsigned int)(v13 - 1) < 2) {
          goto LABEL_56;
        }
        goto LABEL_71;
      }
      LODWORD(v46) = 0;
      BYTE4(v46) = 1;
      if ((unsigned int)(v13 - 1) < 2) {
        goto LABEL_56;
      }
    }
  LABEL_71:
    v33 = 0.0f;
    v32 = 0.0f;
    v37 = 0.0f;
    v38 = 0.0f;
    if (v13 != 0) {
      goto LABEL_87;
    }
    v32 = GameRoutine_2a51c0(&v46, 0, 0.0f);
    v33 = v32;
    goto LABEL_85;
  }
  if (v24 > 5) {
    switch (v24) {
    case 6:
      LODWORD(v46) = 2;
      if ((unsigned int)(v13 - 1) >= 2) {
        goto LABEL_71;
      }
      goto LABEL_56;
    case 7:
      LODWORD(v46) = 2;
      BYTE4(v46) = 1;
      if ((unsigned int)(v13 - 1) < 2) {
        goto LABEL_56;
      }
      goto LABEL_71;
    case 8:
      LODWORD(v46) = 2;
      goto LABEL_51;
    default:
      break;
    }
    goto LABEL_48;
  }
  if (v24 == 4) {
    LODWORD(v46) = 1;
    BYTE4(v46) = 1;
    if ((unsigned int)(v13 - 1) < 2) {
      goto LABEL_56;
    }
    goto LABEL_71;
  }
  LODWORD(v46) = 1;
LABEL_51:
  WORD2(v46) = 257;
  if ((unsigned int)(v13 - 1) >= 2) {
    goto LABEL_71;
  }
LABEL_56:
  v30 = a1[49];
  v31 = a1[61];
  if (v30 < 2 || v31 != 1) {
    if (a1[48] != 0 && v31 != 0) {
      if (*(_BYTE*)(GameRoutine_14e360(v14) + 1961) != 1) {
        v40 = *(float*)(a3 + 56);
        if (a1[48] == 1) {
          v33 = GameRoutine_2a51c0(&v46, v13, v40);
          v32 = 0.0f;
          goto LABEL_83;
        }
        goto LABEL_81;
      }
      v30 = a1[49];
    }
    v34 = *(float*)(a3 + 56);
    if (a5 != 0 || v30 != 2) {
      v39 = a1[48];
      if (a5 == 1 && v30 == 2) {
        if (v39 != 1) {
        LABEL_111:
          v35 = 1.0f;
          goto LABEL_68;
        }
      }
      else if (v39 != 1) {
        if (v39 != 2) {
          goto LABEL_69;
        }
        goto LABEL_111;
      }
    }
    v35 = -1.0f;
  LABEL_68:
    v34 = v34 + v35;
  LABEL_69:
    v33 = GameRoutine_2a51c0(&v46, v13, v34);
    v36 = 0.0f - v34;
  LABEL_82:
    v32 = GameRoutine_2a51c0(&v46, v13, v36);
    goto LABEL_83;
  }
  if (a5 == 1) {
    v40 = *(float*)(a3 + 56);
  LABEL_81:
    v33 = 0.0f;
    v36 = 0.0f - v40;
    goto LABEL_82;
  }
  v32 = 0.0f;
  if (a5 != 0) {
    v33 = 0.0f;
  }
  else {
    v33 = GameRoutine_2a51c0(&v46, v13, *(float*)(a3 + 56));
  }
LABEL_83:
  if (v13 != 2) {
  LABEL_85:
    v37 = GameRoutine_2a5270(&v46, 0.0f);
    v41 = 2.0f;
    goto LABEL_86;
  }
  v37 = GameRoutine_2a5270(&v46, *(float*)(a3 + 60));
  v41 = 2.0f - *(float*)(a3 + 60);
LABEL_86:
  v38 = GameRoutine_2a5270(&v46, v41);
LABEL_87:
  v17 = v33 * v37;
  v16 = v32 * v37;
  v19 = v33 * v38;
  v18 = v32 * v38;
  v20 = 0;
  v21 = 0;
  v22 = *(_DWORD*)(GameRoutine_14e360(v14) + 228);
  if (v22 != 1) {
  LABEL_3:
    if (v22 == 0) {
      if (v13 == 2) {
        v25 = v19 + v17;
        v26 = v18 + v16;
        v18 = 0.0f;
        v19 = 0.0f;
        v16 = (float)(v26 + v25) * 0.5f;
        v17 = v16;
      }
      else if (v13 == 1) {
        v16 = (float)(v16 + v17) * 0.5f;
        v17 = v16;
        if (a4 == 0) {
          goto LABEL_91;
        }
        goto LABEL_22;
      }
    }
    if (a4 == 0) {
    LABEL_91:
      v44 = 0;
      while (1) {
        if (v44 < (*(int (**)(__int64))(*(_QWORD*)a6 + 56LL))(a6)) {
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)a6 + 72LL))(
              a6, (unsigned int)v44);
          v45 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a6 + 80LL))(
              a6, (unsigned int)v44);
          if (v45 > 2) {
            switch (v45) {
            case 3:
              *(float*)(a2 + 4 * v44) = v18;
              goto LABEL_93;
            case 4:
              *(_DWORD*)(a2 + 4 * v44) = v21;
              goto LABEL_93;
            case 5:
              *(_DWORD*)(a2 + 4 * v44) = v20;
              goto LABEL_93;
            default:
              break;
            }
          }
          else {
            switch (v45) {
            case 0:
              *(float*)(a2 + 4 * v44) = v17;
              goto LABEL_93;
            case 1:
              *(float*)(a2 + 4 * v44) = v16;
              goto LABEL_93;
            case 2:
              *(float*)(a2 + 4 * v44) = v19;
              goto LABEL_93;
            default:
              break;
            }
          }
        }
        *(_DWORD*)(a2 + 4 * v44) = 0;
      LABEL_93:
        if (++v44 == 24) {
          return;
        }
      }
    }
    goto LABEL_22;
  }
LABEL_88:
  v42 = v19 + v17;
  v43 = v18 + v16;
  if (v13 == 2) {
    v18 = 0.0f;
    v19 = 0.0f;
    v16 = v43;
    v17 = v42;
  }
  if (a4 == 0) {
    goto LABEL_91;
  }
LABEL_22:
  for (i = 0; i != 24; ++i) {
    if (i >= (*(int (**)(__int64))(*(_QWORD*)a6 + 56LL))(a6)) {
    LABEL_23:
      *(_DWORD*)(a2 + 4 * i) = 0;
      continue;
    }
    v28 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a6 + 72LL))(
        a6, (unsigned int)i);
    if ((GameRoutine_283cd0(a4) & 1) != 0 &&
        (GameRoutine_283c80(a4) & 1) != 0 &&
        (GameRoutine_283ca0(a4, v28) & 1) != 0) {
      *(float*)(a2 + 4 * i) = GameRoutine_283c40(a4, a5, (unsigned int)i);
    }
    else {
      v29 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a6 + 80LL))(
          a6, (unsigned int)i);
      if (v29 > 2) {
        switch (v29) {
        case 3:
          *(float*)(a2 + 4 * i) = v18;
          break;
        case 4:
          *(_DWORD*)(a2 + 4 * i) = v21;
          break;
        case 5:
          *(_DWORD*)(a2 + 4 * i) = v20;
          break;
        default:
          goto LABEL_23;
        }
      }
      else if (v29 != 0) {
        if (v29 == 1) {
          *(float*)(a2 + 4 * i) = v16;
        }
        else {
          if (v29 != 2) {
            goto LABEL_23;
          }
          *(float*)(a2 + 4 * i) = v19;
        }
      }
      else {
        *(float*)(a2 + 4 * i) = v17;
      }
    }
  }
}

float GameHr_310130(__int64 a1)
{
  float v1;
  float result;

  *(_QWORD*)a1 = 0;
  *(_BYTE*)(a1 + 10) = 0;
  v1 = *(float*)(GameData_21a35c8 + 4);
  *(_WORD*)(a1 + 8) = 260;
  *(float*)(a1 + 12) = v1 * (float)(v1 * 0.00005f);
  *(float*)(a1 + 16) = v1 * (float)(v1 * 0.000005f);
  result = *(float*)GameData_21359e8;
  *(_DWORD*)(a1 + 24) = -1;
  *(float*)(a1 + 20) = result;
  return result;
}

float GameHr_335480(float result, __int64 a2, __int64 a3, _QWORD* a4)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float* v18;
  float v19;
  float v20;
  float v21;
  float* v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  float v33;
  float* v34;
  _QWORD* v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  unsigned int* v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  float* v48;
  unsigned int v49;
  float v50;
  float v51;
  float* v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float* v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float* v68;
  float* v69;
  float v70;
  float v71;
  float v72;
  float v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  float* v77;
  float* v78;
  float v79;

  v4 = (_QWORD*)a4[1];
  v5 = a4[2];
  v6 = a4[7];
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v7 = *(unsigned int*)(a3 + 808);
  if ((unsigned int)v7 >= 2) {
    v8 = *(_QWORD*)(a3 + 800);
    v9 = *(_QWORD*)(a3 + 704);
    v10 = *(_QWORD*)(a3 + 840);
    v11 = 1;
    v12 = *(_QWORD*)(a3 + 672);
    do {
      v43 = 0.0f;
      if (v6 != 0) {
        v44 = (unsigned int*)(v10 + 8 * v11);
        v13 = 0.0f;
        v14 = 0.0f;
        v45 = *((unsigned __int8*)v44 + 4);
        v15 = 0.0f;
        v16 = 0.0f;
        v17 = 0.0f;
        if (*((_BYTE*)v44 + 4) != 0) {
          v46 = *v44;
          if (v45 >= 4) {
            v48 = (float*)(v6 + 8 + 4 * v46);
            v47 = 0;
            do {
              v49 = v46 + v47;
              v50 = *(v48 - 2);
              v51 = *(v48 - 1);
              v47 += 4;
              v52 = (float*)(v12 + 24LL * v49);
              v53 = v43 + (float)(v50 * *v52);
              v54 = v13 + (float)(v50 * v52[1]);
              v55 = v14 + (float)(v50 * v52[2]);
              v56 = v52[4];
              v57 = v52[5];
              v58 = v15 + (float)(v50 * v52[3]);
              v59 = (float*)(v12 + 24LL * (v49 + 1));
              v60 = v16 + (float)(v50 * v56);
              v61 = v17 + (float)(v50 * v57);
              v62 = v53 + (float)(v51 * *v59);
              v63 = v54 + (float)(v51 * v59[1]);
              v64 = v51 * v59[3];
              v65 = v55 + (float)(v51 * v59[2]);
              v66 = v59[4];
              v67 = v59[5];
              v68 = (float*)(v12 + 24LL * (v49 + 2));
              v69 = (float*)(v12 + 24LL * (v49 + 3));
              v70 = v60 + (float)(v51 * v66);
              v71 = v61 + (float)(v51 * v67);
              v72 = *v48;
              v73 = v48[1];
              v48 += 4;
              v43 = (float)(v62 + (float)(v72 * *v68)) + (float)(v73 * *v69);
              v13 =
                  (float)(v63 + (float)(v72 * v68[1])) + (float)(v73 * v69[1]);
              v14 =
                  (float)(v65 + (float)(v72 * v68[2])) + (float)(v73 * v69[2]);
              v15 = (float)((float)(v58 + v64) + (float)(v72 * v68[3])) +
                    (float)(v73 * v69[3]);
              v16 =
                  (float)(v70 + (float)(v72 * v68[4])) + (float)(v73 * v69[4]);
              v17 =
                  (float)(v71 + (float)(v72 * v68[5])) + (float)(v73 * v69[5]);
            } while ((v45 & 0xFC) != v47);
          }
          else {
            v47 = 0;
          }
          v74 = v45 & 3;
          if (v74 != 0) {
            v75 = 4 * v47 + 4 * v46;
            v76 = v46 + v47;
            v77 = (float*)(v6 + v75);
            do {
              v78 = (float*)(v12 + 24LL * v76);
              v79 = *v77++;
              ++v76;
              --v74;
              v43 = v43 + (float)(v79 * *v78);
              v13 = v13 + (float)(v79 * v78[1]);
              v14 = v14 + (float)(v79 * v78[2]);
              v15 = v15 + (float)(v79 * v78[3]);
              v16 = v16 + (float)(v79 * v78[4]);
              v17 = v17 + (float)(v79 * v78[5]);
            } while (v74 != 0);
          }
        }
      }
      else {
        v13 = 0.0f;
        v14 = 0.0f;
        v15 = 0.0f;
        v16 = 0.0f;
        v17 = 0.0f;
      }
      v18 = (float*)(v9 + 12 * v11);
      v19 = *v18;
      v20 = v18[1];
      v21 = v18[2];
      v22 = (float*)&v4[4 * *(unsigned int*)(v8 + 40 * v11 + 32)];
      v24 = v22[1];
      v23 = v22[2];
      v25 = *v22;
      v26 = (float)(v21 * v24) - (float)(v20 * v23);
      v27 = (float)(v19 * v23) - (float)(v21 * *v22);
      v28 = (float)(v20 * *v22) - (float)(v19 * v24);
      v29 = v22[5];
      v30 = v22[4] + v26;
      v31 = v22[6];
      v32 = 4 * v11;
      v33 = v27 + v29;
      ++v11;
      v34 = (float*)(v5 + v32 * 8);
      v35 = &v4[v32];
      *((_DWORD*)v35 + 3) = 0;
      *((_DWORD*)v35 + 7) = 0;
      v36 = v28 + v31;
      v37 = v13 + (float)(v24 + v34[1]);
      v38 = v23 + v34[2];
      v39 = v34[4];
      v40 = v34[5];
      *(float*)v35 = v43 + (float)(v25 + *v34);
      *((float*)v35 + 1) = v37;
      v41 = v30 + v39;
      v42 = v34[6];
      *((float*)v35 + 2) = v14 + v38;
      *((float*)v35 + 4) = v15 + v41;
      *((float*)v35 + 5) = v16 + (float)(v33 + v40);
      result = v17 + (float)(v36 + v42);
      *((float*)v35 + 6) = result;
    } while (v11 != v7);
  }
  return result;
}

__int64 GameHr_3697a0(__int64 result, __int64 a2, __int64 a3, unsigned int a4,
                      __int64* a5, __int64 a6, int a7, int a8, float a9,
                      float a10, char a11)
{
  __int64 v18;
  __int64 v19;
  _OWORD* v20;
  _OWORD* v21;
  __int64 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int64 v32;
  __int128* v33;
  _OWORD* v34;
  __int128 v35;
  __int128 v36;
  int i;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 j;
  __int64 v44;
  float v45;
  int v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;

  if ((_DWORD)result != 0) {
    v18 = result & 7;
    if ((unsigned int)result < 8) {
      v19 = 0;
      if ((result & 7) == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v20 = (_OWORD*)(a2 + 128);
    v21 = (_OWORD*)(a3 + 128);
    v22 = 0;
    do {
      v23 = *(v20 - 7);
      v22 -= 8;
      *(v21 - 8) = *(v20 - 8);
      *(v21 - 7) = v23;
      v24 = *(v20 - 5);
      *(v21 - 6) = *(v20 - 6);
      *(v21 - 5) = v24;
      v25 = *(v20 - 3);
      *(v21 - 4) = *(v20 - 4);
      *(v21 - 3) = v25;
      v26 = *(v20 - 1);
      *(v21 - 2) = *(v20 - 2);
      *(v21 - 1) = v26;
      v27 = v20[1];
      *v21 = *v20;
      v21[1] = v27;
      v28 = v20[3];
      v21[2] = v20[2];
      v21[3] = v28;
      v29 = v20[5];
      v21[4] = v20[4];
      v21[5] = v29;
      v30 = v20[6];
      v31 = v20[7];
      v20 += 16;
      v21[6] = v30;
      v21[7] = v31;
      v21 += 16;
    } while (-(__int64)((unsigned int)result & 0xFFFFFFF8) != v22);
    v19 = -v22;
    if ((result & 7) != 0) {
    LABEL_8:
      v32 = (32 * v19) | 0x10;
      v33 = (__int128*)(a2 + v32);
      v34 = (_OWORD*)(a3 + v32);
      do {
        v35 = *(v33 - 1);
        v36 = *v33;
        v33 += 2;
        --v18;
        *(v34 - 1) = v35;
        *v34 = v36;
        v34 += 2;
      } while (v18 != 0);
    }
  }
LABEL_10:
  if (a4 != 0) {
    if (a7 != 0) {
      for (i = 0; i != a7; ++i) {
        v38 = a4;
        v39 = a5;
        do {
          v40 = *v39;
          v39 += 9;
          GameRoutine_3328d0(v40, 0, 0, a11 & 1, a9, a10, 0.0f, 0.8f);
          --v38;
        } while (v38 != 0);
      }
    }
    v41 = a5;
    if (a4 <= 1) {
      v42 = 1;
    }
    else {
      v42 = a4;
    }
    for (j = v42; j != 0; --j) {
      v44 = *v41;
      v41 += 9;
      GameRoutine_327a60(v44, a6);
    }
    if (a8 != 0) {
      v46 = 0;
      do {
        v47 = v42;
        v48 = a5;
        do {
          v49 = *v48;
          v48 += 9;
          v45 = GameRoutine_3328d0(v49, 1u, 0, a11 & 1, a9, a10, 0.0f, 0.8f);
          --v47;
        } while (v47 != 0);
        ++v46;
      } while (v46 != a8);
    }
    do {
      v50 = *a5;
      a5 += 9;
      result = GameRoutine_32ffe0(v50, 0, v45);
      --v42;
    } while (v42 != 0);
  }
  return result;
}

__int64 GameHr_377570(__int64 a1, int a2, _DWORD* a3)
{
  __int64 result;
  float** v7;
  int v8;
  float* v9;
  float v10;
  float v11;
  int v12;
  int v13;
  int v14;
  int v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;

  result = GameRoutine_3865a0();
  v7 = (float**)GameData_21359e0;
  *(_DWORD*)(a1 + 44) = 0;
  *(_WORD*)(a1 + 174) = 0;
  v8 = a3[5];
  v9 = *v7;
  v10 = *v9;
  v11 = v9[1];
  *(_DWORD*)(a1 + 32) = a3[4];
  *(_DWORD*)(a1 + 36) = v8;
  v12 = a3[6];
  *(_QWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 72) = 0;
  *(_WORD*)(a1 + 46) = 260;
  *(_WORD*)(a1 + 44) = 0x8000;
  *(_DWORD*)(a1 + 40) = v12;
  v13 = a3[1];
  *(_DWORD*)(a1 + 16) = *a3;
  *(_DWORD*)(a1 + 20) = v13;
  v14 = a3[2];
  v15 = a3[3];
  *(_QWORD*)(a1 + 76) = 1041865114;
  *(_DWORD*)(a1 + 24) = v14;
  *(_DWORD*)(a1 + 28) = v15;
  v16 = 0.0f;
  if (a2 != 1) {
    v16 = 0.05f;
  }
  v17 = 2500.0f;
  *(float*)(a1 + 120) = v16;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_DWORD*)(a1 + 60) = 1065353216;
  *(_DWORD*)(a1 + 84) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 92) = 4103980462LL;
  *(_DWORD*)(a1 + 100) = 0;
  *(_DWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 132) = 1065353216;
  *(_DWORD*)(a1 + 136) = 1065353216;
  *(_DWORD*)(a1 + 168) = 0;
  *(_WORD*)(a1 + 172) = 0;
  *(_BYTE*)(a1 + 174) = 0;
  if (a2 == 1) {
    v17 = 10000.0f;
  }
  *(_DWORD*)(a1 + 108) = 2139095039;
  v18 = v10 * (float)(v10 * 10000.0f);
  *(_QWORD*)(a1 + 124) = 0x3F8000003D4CCCCDLL;
  if (a2 == 1) {
    v18 = 1.0e32f;
  }
  *(_DWORD*)(a1 + 156) = 1053609164;
  *(float*)(a1 + 112) = v17;
  *(float*)(a1 + 116) = v18;
  *(_QWORD*)(a1 + 140) = 0x749DC5AE3F800000LL;
  v19 = v11 * (float)(v11 * 0.00005f);
  v20 = v11 * (float)(v11 * 0.000025f);
  if (a2 == 2) {
    v20 = 0.025f;
  }
  *(float*)(a1 + 148) = v19;
  *(float*)(a1 + 152) = v20;
  return result;
}

__int64 GameHr_3db0c0(__int64 a1, __int64 a2, _BYTE* a3, _WORD* a4,
                      unsigned __int16 a5, char a6, char a7)
{
  __int64 v11;
  char v12;
  float* v13;
  __int64 result;
  _WORD* v15;
  char v16;
  float v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  _WORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;

  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 56) = 0x44480000FFFFFFFFLL;
  v11 = a1 + 56;
  if ((a6 & 1) != 0) {
    v12 = 3;
  }
  else {
    v12 = 1;
  }
  *(_BYTE*)(a1 + 49) = v12 | a7;
  v13 = (float*)GameData_21a35c8;
  GameRoutine_3dae00(v11);
  *(_QWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 40) = 0;
  result = a1;
  v15 = a4;
  *(_DWORD*)(a1 + 52) = 0;
  *(_QWORD*)(a1 + 24) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 32) = 0;
  v16 = *(_BYTE*)(a1 + 49) | 4;
  v17 = *v13;
  *(_QWORD*)(a1 + 120) = 0;
  *(_BYTE*)(a1 + 49) = v16;
  *(_BYTE*)(a1 + 48) = *a3;
  *(float*)(a1 + 44) = v17 * 0.02f;
  *(_WORD*)(a1 + 50) = *a4;
  v18 = *(_DWORD*)(a1 + 56) - 6;
  if (v18 <= 3) {
    v19 = a5;
    v20 = a1 + GameData_1b01568[v18];
    if (*(unsigned __int16*)(v20 + 8) >= (unsigned int)a5) {
      if (a5 == 0) {
      LABEL_12:
        *(_WORD*)(v20 + 8) = v19;
        return result;
      }
    }
    else {
      v21 = *(_QWORD*)v20;
      v22 = v15;
      if (*(_QWORD*)v20 != 0 && (*(_BYTE*)(result + 49) & 1) != 0) {
        v23 = result;
        v24 = GameRoutine_55af80(0);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v24 + 24LL))(v24, v21);
        result = v23;
        *(_QWORD*)v20 = 0;
        *(_WORD*)(v20 + 8) = 0;
      }
      v25 = result;
      v26 = GameRoutine_55af80(0);
      v27 = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
          *(_QWORD*)v26 + 16LL))(
          v26, 2LL * v19, &GameData_1a9f09e,
          "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../"
          "../source/lowlevel/api/include\\PxvGeometry.h",
          88);
      v28 = *(_BYTE*)(v25 + 49);
      *(_QWORD*)v20 = v27;
      *(_WORD*)(v20 + 8) = v19;
      v15 = v22;
      *(_BYTE*)(v25 + 49) = v28 | 1;
    }
    result = GameRoutine_1a0b950(*(_QWORD*)v20, v15, 2LL * v19);
    goto LABEL_12;
  }
  return result;
}

__int64 GameHr_464600(float* a1, unsigned int a2, int a3, float* a4, _DWORD* a5)
{
  float v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  int v10;
  float v11;
  unsigned int v12;
  float* v13;
  float* v14;
  float* v15;
  float v16;
  bool v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float* v22;
  float v23;
  float v24;
  int v25;
  unsigned int v26;
  float* v27;
  __int64 result;
  float v29;
  float v30;
  float v31;
  float v32;
  float* v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  int v42;
  float v43;
  float v44;
  int v45;
  unsigned int v46;
  float v47;
  float v48;
  float* v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  float* v54;
  float v55;
  float v56;
  float v57;

  if (a2 != 0) {
    v5 = *a1;
    v6 = a1[1];
    v7 = a1[2];
    v8 = a2 & 3;
    if (a2 >= 4) {
      v12 = 0;
      v9 = 0;
      v10 = -1;
      v11 = -3.4028e38f;
      do {
        v13 = &a1[v12 / 4];
        v14 = (float*)((char*)a1 + 2 * a3 + v12);
        if ((float)((float)((float)((float)(v13[1] - v6) *
                                    (float)(v13[1] - v6)) +
                            (float)((float)(*v13 - v5) * (float)(*v13 - v5))) +
                    (float)((float)(v13[2] - v7) * (float)(v13[2] - v7))) >
            (float)(v11 + 0.00000011921f)) {
          v11 = (float)((float)((float)(v13[1] - v6) * (float)(v13[1] - v6)) +
                        (float)((float)(*v13 - v5) * (float)(*v13 - v5))) +
                (float)((float)(v13[2] - v7) * (float)(v13[2] - v7));
          v10 = v9;
        }
        v15 = (float*)((char*)a1 + a3 + v12);
        v16 = (float)((float)((float)(v15[1] - v6) * (float)(v15[1] - v6)) +
                      (float)((float)(*v15 - v5) * (float)(*v15 - v5))) +
              (float)((float)(v15[2] - v7) * (float)(v15[2] - v7));
        v17 = v16 <= (float)(v11 + 0.00000011921f);
        v18 = v14[2] - v7;
        if (v16 > (float)(v11 + 0.00000011921f)) {
          v11 = (float)((float)((float)(v15[1] - v6) * (float)(v15[1] - v6)) +
                        (float)((float)(*v15 - v5) * (float)(*v15 - v5))) +
                (float)((float)(v15[2] - v7) * (float)(v15[2] - v7));
        }
        v19 = *v14;
        v20 = v14[1];
        if (!v17) {
          v10 = v9 + 1;
        }
        v21 = 3 * a3 + v12;
        v12 += 4 * a3;
        v22 = (float*)((char*)a1 + v21);
        v23 = (float)((float)((float)(v20 - v6) * (float)(v20 - v6)) +
                      (float)((float)(v19 - v5) * (float)(v19 - v5))) +
              (float)(v18 * v18);
        if (v23 > (float)(v11 + 0.00000011921f)) {
          v11 = v23;
          v10 = v9 + 2;
        }
        v25 = v9 + 3;
        v9 += 4;
        v24 = v22[2] - v7;
        if ((float)((float)((float)((float)(v22[1] - v6) *
                                    (float)(v22[1] - v6)) +
                            (float)((float)(*v22 - v5) * (float)(*v22 - v5))) +
                    (float)(v24 * v24)) > (float)(v11 + 0.00000011921f)) {
          v11 = (float)((float)((float)(v22[1] - v6) * (float)(v22[1] - v6)) +
                        (float)((float)(*v22 - v5) * (float)(*v22 - v5))) +
                (float)(v24 * v24);
          v10 = v25;
        }
      } while ((a2 & 0xFFFFFFFC) != v9);
    }
    else {
      LODWORD(v9) = 0;
      v10 = -1;
      v11 = -3.4028e38f;
    }
    if ((a2 & 3) != 0) {
      v26 = a3 * v9;
      do {
        v27 = (float*)((char*)a1 + v26);
        v26 += a3;
        if ((float)((float)((float)((float)(v27[1] - v6) *
                                    (float)(v27[1] - v6)) +
                            (float)((float)(*v27 - v5) * (float)(*v27 - v5))) +
                    (float)((float)(v27[2] - v7) * (float)(v27[2] - v7))) >
            (float)(v11 + 0.00000011921f)) {
          v11 = (float)((float)((float)(v27[1] - v6) * (float)(v27[1] - v6)) +
                        (float)((float)(*v27 - v5) * (float)(*v27 - v5))) +
                (float)((float)(v27[2] - v7) * (float)(v27[2] - v7));
          v10 = v9;
        }
        LODWORD(v9) = v9 + 1;
        --v8;
      } while (v8 != 0);
    }
    if (v10 != -1) {
      if (v10 == 0) {
        *a5 = 0;
        return 1;
      }
      v29 = *a1;
      v30 = a1[1];
      v32 = a4[1];
      v31 = a4[2];
      v33 = (float*)((char*)a1 + (unsigned int)(v10 * a3));
      v34 = *v33 - *a1;
      v35 = v33[1] - v30;
      v36 = a1[2];
      v37 = v33[2] - v36;
      v38 = (float)(v32 * v37) - (float)(v31 * v35);
      v39 = (float)(v31 * v34) - (float)(*a4 * v37);
      v40 = (float)(*a4 * v35) - (float)(v32 * v34);
      if (a2 == 1) {
        LODWORD(v41) = 0;
        v42 = -1;
        v43 = -0.00000011921f;
        v44 = 0.00000011921f;
        v45 = -1;
      LABEL_38:
        v57 =
            (float)((float)(v39 *
                            (float)(*(float*)((char*)a1 +
                                              (unsigned int)(v41 * a3) + 4) -
                                    v30)) +
                    (float)(v38 * (float)(*(float*)((char*)a1 +
                                                    (unsigned int)(v41 * a3)) -
                                          v29))) +
            (float)(v40 * (float)(*(float*)((char*)a1 +
                                            (unsigned int)(v41 * a3) + 8) -
                                  v36));
        if (v57 < v43) {
          v45 = v41;
        }
        if (v57 > v44) {
          v42 = v41;
        }
        goto LABEL_42;
      }
      v42 = -1;
      v45 = -1;
      v46 = 0;
      v41 = 0;
      v47 = 0.0f;
      v48 = 0.0f;
      do {
        v49 = (float*)((char*)a1 + v46);
        v50 = *v49;
        v51 = v49[1];
        v52 = v49[2];
        v53 = a3 + v46;
        v46 += 2 * a3;
        v54 = (float*)((char*)a1 + v53);
        v55 = (float)((float)(v39 * (float)(v51 - v30)) +
                      (float)(v38 * (float)(v50 - v29))) +
              (float)(v40 * (float)(v52 - v36));
        if (v55 < (float)(v48 + -0.00000011921f)) {
          v45 = v41;
          v48 = v55;
        }
        if (v55 > (float)(v47 + 0.00000011921f)) {
          v47 = v55;
          v42 = v41;
        }
        v56 = (float)((float)(v39 * (float)(v54[1] - v30)) +
                      (float)(v38 * (float)(*v54 - v29))) +
              (float)(v40 * (float)(v54[2] - v36));
        if (v56 < (float)(v48 + -0.00000011921f)) {
          v45 = v41 + 1;
          v48 = (float)((float)(v39 * (float)(v54[1] - v30)) +
                        (float)(v38 * (float)(*v54 - v29))) +
                (float)(v40 * (float)(v54[2] - v36));
        }
        if (v56 > (float)(v47 + 0.00000011921f)) {
          v47 = (float)((float)(v39 * (float)(v54[1] - v30)) +
                        (float)(v38 * (float)(*v54 - v29))) +
                (float)(v40 * (float)(v54[2] - v36));
          v42 = v41 + 1;
        }
        v41 += 2;
      } while ((a2 & 0xFFFFFFFE) != v41);
      v43 = v48 + -0.00000011921f;
      v44 = v47 + 0.00000011921f;
      if ((a2 & 1) != 0) {
        goto LABEL_38;
      }
    LABEL_42:
      *a5 = 0;
      a5[1] = v10;
      if ((unsigned int)(v45 + 1) < 2 || v45 == v10) {
        result = 2;
        if ((unsigned int)(v42 + 1) >= 2 && v42 != v10 && v42 != v45) {
          goto LABEL_60;
        }
      }
      else {
        result = 3;
        a5[2] = v45;
        if ((unsigned int)(v42 + 1) >= 2 && v42 != v10 && v42 != v45) {
        LABEL_60:
          a5[(unsigned int)result] = v42;
          return (unsigned int)(result + 1);
        }
      }
      return result;
    }
  }
  return 0;
}

__int64 GameHr_4a1f80(__int64 a1, float* a2, float* a3, float* a4, float* a5,
                      float* a6, float* a7, _BYTE* a8, float a9, float a10)
{
  float v10;
  float v11;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  float v29;
  bool v30;
  float v31;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  char v44;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v52;
  float v53;
  float v54;
  float v56[3];
  float v57[9];
  _BYTE v58[4];
  float v59;

  v10 = a2[1];
  v11 = a3[2];
  v17 = *a4;
  v18 = a4[1];
  v19 = a4[2];
  v57[0] = *a2;
  v57[1] = v10;
  v20 = v10;
  v53 = v10;
  v21 = a2[2];
  v22 = *a3;
  v23 = a3[1];
  v24 = *a7;
  v57[6] = v17;
  v57[7] = v18;
  v57[8] = v19;
  v50 = v24;
  v57[2] = v21;
  v57[3] = v22;
  v52 = v21;
  v54 = v22;
  v57[4] = v23;
  v57[5] = v11;
  v25 = (float)((float)(v20 + v23) + v18) * 0.33333f;
  v26 = (float)((float)(v57[0] + v22) + v17) * 0.33333f;
  v27 = (float)((float)(v21 + v11) + v19) * 0.33333f;
  v29 = (float)(GameRoutine_1a0a010(a1) - a9) + -0.0001f;
  v30 = v29 < 0.0f;
  v31 = v29 * v29;
  if (!v30 &&
      v31 > (float)((float)((float)((float)(v25 - v53) * (float)(v25 - v53)) +
                            (float)((float)(v26 - v57[0]) *
                                    (float)(v26 - v57[0]))) +
                    (float)((float)(v27 - v52) * (float)(v27 - v52))) &&
      v31 > (float)((float)((float)((float)(v25 - v23) * (float)(v25 - v23)) +
                            (float)((float)(v26 - v54) * (float)(v26 - v54))) +
                    (float)((float)(v27 - v11) * (float)(v27 - v11))) &&
      v31 > (float)((float)((float)((float)(v25 - v18) * (float)(v25 - v18)) +
                            (float)((float)(v26 - v17) * (float)(v26 - v17))) +
                    (float)((float)(v27 - v19) * (float)(v27 - v19)))) {
    goto LABEL_22;
  }
  v35 = a6[1];
  v36 = a6[2];
  v37 =
      (float)((float)(v53 * v35) + (float)(v57[0] * *a6)) + (float)(v52 * v36);
  v38 = (float)((float)(v35 * v23) + (float)(v54 * *a6)) + (float)(v11 * v36);
  v39 = (float)((float)(v35 * v18) + (float)(v17 * *a6)) + (float)(v19 * v36);
  v40 = v37 >= v38 ? (float)((float)(v35 * v23) + (float)(v54 * *a6)) +
                         (float)(v11 * v36)
                   : (float)((float)(v53 * v35) + (float)(v57[0] * *a6)) +
                         (float)(v52 * v36);
  v41 = v40 >= v39 ? v39 : v40;
  if (v41 > (float)((float)(a9 + 0.002f) + (float)(v50 + a10)) ||
      (v42 = a10 - (float)(a9 + 0.002f), v37 < v42) && v38 < v42 && v39 < v42 ||
      (v43 = GameRoutine_1a0a010(v28)) == 0.0f) {
  LABEL_22:
    v44 = 0;
  }
  else {
    v46 = 1.0f / v43;
    v47 = v46 * *a5;
    v48 = v46 * a5[1];
    v56[2] = v46 * a5[2];
    v56[0] = v47;
    v56[1] = v48;
    if ((GameRoutine_506fa0(v57, v56, a1 + 300, a6, &v59, v58, 1, a9) & 1) !=
        0) {
      if (*a7 >= 1.0f) {
        v49 = *a7;
      }
      else {
        v49 = 1.0f;
      }
      if (v59 <= (float)(*a7 + (float)(v49 * 0.001f))) {
        *a7 = v59;
        *a8 = 1;
      }
    }
    v44 = v58[0];
  }
  return v44 & 1;
}

void GameHr_4a2290(__int64 a1, float* a2, float* a3, float* a4, float* a5,
                   float* a6, float* a7, float* a8, float a9, float a10,
                   _BYTE* a11)
{
  float v11;
  float v12;
  float v13;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  bool v31;
  float v32;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v59[3];
  float v60[6];
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;

  v11 = a2[1];
  v12 = *a3;
  v13 = a3[1];
  v60[0] = *a2;
  v60[1] = v11;
  v18 = a2[2];
  v19 = *a5;
  v20 = a5[1];
  v21 = a5[2];
  v55 = v11;
  v56 = v12;
  v22 = *a8;
  v63 = a4[2];
  v64 = v19;
  v65 = v20;
  v66 = v21;
  v60[2] = v18;
  v60[3] = v12;
  v23 = v18;
  v53 = v18;
  v54 = v13;
  v24 = a3[2];
  v60[4] = v13;
  v60[5] = v24;
  v52 = v24;
  v25 = a4[1];
  v61 = *a4;
  v62 = v25;
  v51 = v22;
  v26 = (float)((float)((float)(v11 + v13) + v25) + v20) * 0.25f;
  v27 = (float)((float)((float)(v60[0] + v12) + v61) + v19) * 0.25f;
  v28 = (float)((float)((float)(v23 + v24) + v63) + v21) * 0.25f;
  v30 = (float)(GameRoutine_1a0a010(a1) - a9) + -0.0001f;
  v31 = v30 < 0.0f;
  v32 = v30 * v30;
  if (v31 ||
      v32 <= (float)((float)((float)((float)(v26 - v55) * (float)(v26 - v55)) +
                             (float)((float)(v27 - v60[0]) *
                                     (float)(v27 - v60[0]))) +
                     (float)((float)(v28 - v53) * (float)(v28 - v53))) ||
      v32 <= (float)((float)((float)((float)(v26 - v54) * (float)(v26 - v54)) +
                             (float)((float)(v27 - v56) * (float)(v27 - v56))) +
                     (float)((float)(v28 - v52) * (float)(v28 - v52))) ||
      v32 <= (float)((float)((float)((float)(v26 - v25) * (float)(v26 - v25)) +
                             (float)((float)(v27 - v61) * (float)(v27 - v61))) +
                     (float)((float)(v28 - v63) * (float)(v28 - v63))) ||
      v32 <= (float)((float)((float)((float)(v26 - v20) * (float)(v26 - v20)) +
                             (float)((float)(v27 - v19) * (float)(v27 - v19))) +
                     (float)((float)(v28 - v21) * (float)(v28 - v21)))) {
    v37 = a7[1];
    v38 = a7[2];
    v39 = (float)((float)(v55 * v37) + (float)(v60[0] * *a7)) +
          (float)(v53 * v38);
    v40 = (float)((float)(v37 * v54) + (float)(v56 * *a7)) + (float)(v52 * v38);
    v41 = (float)((float)(v37 * v25) + (float)(v61 * *a7)) + (float)(v63 * v38);
    v42 = (float)((float)(v37 * v20) + (float)(v19 * *a7)) + (float)(v21 * v38);
    if (v39 >= v40) {
      v43 =
          (float)((float)(v37 * v54) + (float)(v56 * *a7)) + (float)(v52 * v38);
    }
    else {
      v43 = (float)((float)(v55 * v37) + (float)(v60[0] * *a7)) +
            (float)(v53 * v38);
    }
    if (v43 >= v41) {
      v43 = v41;
    }
    if (v43 >= v42) {
      v44 = v42;
    }
    else {
      v44 = v43;
    }
    if (v44 <= (float)((float)(a9 + 0.002f) + (float)(v51 + a10))) {
      v45 = a10 - (float)(a9 + 0.002f);
      if (v39 >= v45 || v40 >= v45 || v41 >= v45 || v42 >= v45) {
        v46 = GameRoutine_1a0a010(v29);
        if (v46 != 0.0f) {
          v47 = 1.0f / v46;
          v48 = v47 * *a6;
          v49 = v47 * a6[1];
          v59[2] = v47 * a6[2];
          v59[0] = v48;
          v59[1] = v49;
          if ((GameRoutine_507c70(v60, v59, a1 + 300, a7, &v67, a9) & 1) != 0) {
            if (*a8 >= 1.0f) {
              v50 = *a8;
            }
            else {
              v50 = 1.0f;
            }
            if (v67 <= (float)(*a8 + (float)(v50 * 0.001f))) {
              *a8 = v67;
              *a11 = 1;
            }
          }
        }
      }
    }
  }
}

__int64 GameHr_4a5700(__int64 a1, float* a2, float* a3, float* a4, float* a5,
                      float* a6, float* a7, _BYTE* a8, float a9, float a10)
{
  float v10;
  float v11;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  float v29;
  bool v30;
  float v31;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  char v44;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v52;
  float v53;
  float v54;
  float v56[3];
  float v57[9];
  _BYTE v58[4];
  float v59;

  v10 = a2[1];
  v11 = a3[2];
  v17 = *a4;
  v18 = a4[1];
  v19 = a4[2];
  v57[0] = *a2;
  v57[1] = v10;
  v20 = v10;
  v53 = v10;
  v21 = a2[2];
  v22 = *a3;
  v23 = a3[1];
  v24 = *a7;
  v57[6] = v17;
  v57[7] = v18;
  v57[8] = v19;
  v50 = v24;
  v57[2] = v21;
  v57[3] = v22;
  v52 = v21;
  v54 = v22;
  v57[4] = v23;
  v57[5] = v11;
  v25 = (float)((float)(v20 + v23) + v18) * 0.33333f;
  v26 = (float)((float)(v57[0] + v22) + v17) * 0.33333f;
  v27 = (float)((float)(v21 + v11) + v19) * 0.33333f;
  v29 = (float)(GameRoutine_1a0a010(a1) - a9) + -0.0001f;
  v30 = v29 < 0.0f;
  v31 = v29 * v29;
  if (!v30 &&
      v31 > (float)((float)((float)((float)(v25 - v53) * (float)(v25 - v53)) +
                            (float)((float)(v26 - v57[0]) *
                                    (float)(v26 - v57[0]))) +
                    (float)((float)(v27 - v52) * (float)(v27 - v52))) &&
      v31 > (float)((float)((float)((float)(v25 - v23) * (float)(v25 - v23)) +
                            (float)((float)(v26 - v54) * (float)(v26 - v54))) +
                    (float)((float)(v27 - v11) * (float)(v27 - v11))) &&
      v31 > (float)((float)((float)((float)(v25 - v18) * (float)(v25 - v18)) +
                            (float)((float)(v26 - v17) * (float)(v26 - v17))) +
                    (float)((float)(v27 - v19) * (float)(v27 - v19)))) {
    goto LABEL_22;
  }
  v35 = a6[1];
  v36 = a6[2];
  v37 =
      (float)((float)(v53 * v35) + (float)(v57[0] * *a6)) + (float)(v52 * v36);
  v38 = (float)((float)(v35 * v23) + (float)(v54 * *a6)) + (float)(v11 * v36);
  v39 = (float)((float)(v35 * v18) + (float)(v17 * *a6)) + (float)(v19 * v36);
  v40 = v37 >= v38 ? (float)((float)(v35 * v23) + (float)(v54 * *a6)) +
                         (float)(v11 * v36)
                   : (float)((float)(v53 * v35) + (float)(v57[0] * *a6)) +
                         (float)(v52 * v36);
  v41 = v40 >= v39 ? v39 : v40;
  if (v41 > (float)((float)(a9 + 0.002f) + (float)(v50 + a10)) ||
      (v42 = a10 - (float)(a9 + 0.002f), v37 < v42) && v38 < v42 && v39 < v42 ||
      (v43 = GameRoutine_1a0a010(v28)) == 0.0f) {
  LABEL_22:
    v44 = 0;
  }
  else {
    v46 = 1.0f / v43;
    v47 = v46 * *a5;
    v48 = v46 * a5[1];
    v56[2] = v46 * a5[2];
    v56[0] = v47;
    v56[1] = v48;
    if ((GameRoutine_506fa0(v57, v56, a1 + 524, a6, &v59, v58, 1, a9) & 1) !=
        0) {
      if (*a7 >= 1.0f) {
        v49 = *a7;
      }
      else {
        v49 = 1.0f;
      }
      if (v59 <= (float)(*a7 + (float)(v49 * 0.001f))) {
        *a7 = v59;
        *a8 = 1;
      }
    }
    v44 = v58[0];
  }
  return v44 & 1;
}

void GameHr_4a5a10(__int64 a1, float* a2, float* a3, float* a4, float* a5,
                   float* a6, float* a7, float* a8, float a9, float a10,
                   _BYTE* a11)
{
  float v11;
  float v12;
  float v13;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  bool v31;
  float v32;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v59[3];
  float v60[6];
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;

  v11 = a2[1];
  v12 = *a3;
  v13 = a3[1];
  v60[0] = *a2;
  v60[1] = v11;
  v18 = a2[2];
  v19 = *a5;
  v20 = a5[1];
  v21 = a5[2];
  v55 = v11;
  v56 = v12;
  v22 = *a8;
  v63 = a4[2];
  v64 = v19;
  v65 = v20;
  v66 = v21;
  v60[2] = v18;
  v60[3] = v12;
  v23 = v18;
  v53 = v18;
  v54 = v13;
  v24 = a3[2];
  v60[4] = v13;
  v60[5] = v24;
  v52 = v24;
  v25 = a4[1];
  v61 = *a4;
  v62 = v25;
  v51 = v22;
  v26 = (float)((float)((float)(v11 + v13) + v25) + v20) * 0.25f;
  v27 = (float)((float)((float)(v60[0] + v12) + v61) + v19) * 0.25f;
  v28 = (float)((float)((float)(v23 + v24) + v63) + v21) * 0.25f;
  v30 = (float)(GameRoutine_1a0a010(a1) - a9) + -0.0001f;
  v31 = v30 < 0.0f;
  v32 = v30 * v30;
  if (v31 ||
      v32 <= (float)((float)((float)((float)(v26 - v55) * (float)(v26 - v55)) +
                             (float)((float)(v27 - v60[0]) *
                                     (float)(v27 - v60[0]))) +
                     (float)((float)(v28 - v53) * (float)(v28 - v53))) ||
      v32 <= (float)((float)((float)((float)(v26 - v54) * (float)(v26 - v54)) +
                             (float)((float)(v27 - v56) * (float)(v27 - v56))) +
                     (float)((float)(v28 - v52) * (float)(v28 - v52))) ||
      v32 <= (float)((float)((float)((float)(v26 - v25) * (float)(v26 - v25)) +
                             (float)((float)(v27 - v61) * (float)(v27 - v61))) +
                     (float)((float)(v28 - v63) * (float)(v28 - v63))) ||
      v32 <= (float)((float)((float)((float)(v26 - v20) * (float)(v26 - v20)) +
                             (float)((float)(v27 - v19) * (float)(v27 - v19))) +
                     (float)((float)(v28 - v21) * (float)(v28 - v21)))) {
    v37 = a7[1];
    v38 = a7[2];
    v39 = (float)((float)(v55 * v37) + (float)(v60[0] * *a7)) +
          (float)(v53 * v38);
    v40 = (float)((float)(v37 * v54) + (float)(v56 * *a7)) + (float)(v52 * v38);
    v41 = (float)((float)(v37 * v25) + (float)(v61 * *a7)) + (float)(v63 * v38);
    v42 = (float)((float)(v37 * v20) + (float)(v19 * *a7)) + (float)(v21 * v38);
    if (v39 >= v40) {
      v43 =
          (float)((float)(v37 * v54) + (float)(v56 * *a7)) + (float)(v52 * v38);
    }
    else {
      v43 = (float)((float)(v55 * v37) + (float)(v60[0] * *a7)) +
            (float)(v53 * v38);
    }
    if (v43 >= v41) {
      v43 = v41;
    }
    if (v43 >= v42) {
      v44 = v42;
    }
    else {
      v44 = v43;
    }
    if (v44 <= (float)((float)(a9 + 0.002f) + (float)(v51 + a10))) {
      v45 = a10 - (float)(a9 + 0.002f);
      if (v39 >= v45 || v40 >= v45 || v41 >= v45 || v42 >= v45) {
        v46 = GameRoutine_1a0a010(v29);
        if (v46 != 0.0f) {
          v47 = 1.0f / v46;
          v48 = v47 * *a6;
          v49 = v47 * a6[1];
          v59[2] = v47 * a6[2];
          v59[0] = v48;
          v59[1] = v49;
          if ((GameRoutine_507c70(v60, v59, a1 + 524, a7, &v67, a9) & 1) != 0) {
            if (*a8 >= 1.0f) {
              v50 = *a8;
            }
            else {
              v50 = 1.0f;
            }
            if (v67 <= (float)(*a8 + (float)(v50 * 0.001f))) {
              *a8 = v67;
              *a11 = 1;
            }
          }
        }
      }
    }
  }
}

__int64 GameHr_593440(__int64* a1, __int64 a2, int a3, float* a4)
{
  __int64 v5;
  float v6;
  float v7;
  float v9;
  float v10;
  __int64 i;
  float v12;
  float v13;
  __int64 v14;
  float* v15;
  __int64 v16;
  float v17;
  float* v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  unsigned int v25;
  __int64 v26;
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
  __int64 v42;
  __int64 v43;
  __int64 v44;

  v5 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) + a3;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_QWORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = 0;
  *(_QWORD*)v5 = 0;
  *(_QWORD*)(v5 + 8) = 0;
  v6 = (float)(a4[6] / -100.0f) + 1.0f;
  if (v6 < 0.0039f) {
    v6 = 0.0039f;
  }
  *(float*)(v5 + 16) = 1.0f / v6;
  *(float*)v5 = a4[2] / 255.0f;
  *(float*)(v5 + 4) = a4[3] / 255.0f;
  *(float*)(v5 + 8) = a4[4] / 255.0f;
  *(float*)(v5 + 12) = a4[5] / 255.0f;
  v7 = a4[7];
  if (v7 == 0.0f) {
    *(_QWORD*)(v5 + 208) = 0;
    *(_QWORD*)(v5 + 216) = 0;
    *(_QWORD*)(v5 + 192) = 0;
    *(_QWORD*)(v5 + 200) = 0;
    *(_QWORD*)(v5 + 176) = 0;
    *(_QWORD*)(v5 + 184) = 0;
    *(_QWORD*)(v5 + 160) = 0;
    *(_QWORD*)(v5 + 168) = 0;
    *(_DWORD*)(v5 + 20) = 1065353216;
    v25 = *(unsigned __int8*)(*a1 + 90);
    *(_QWORD*)(v5 + 24) = 0x3F8000003F800000LL;
    if (v25 == 0) {
      goto LABEL_20;
    }
    goto LABEL_16;
  }
  v43 = 0;
  v44 = 0;
  v41 = 0;
  v42 = 0;
  v39 = 0;
  v40 = 0;
  v37 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v33 = 0;
  v34 = 0;
  v31 = 0;
  v32 = 0;
  v29 = 0;
  v30 = 0;
  v9 = GameRoutine_1a0a950((float)((float)(0.0f / v7) * 2.8f) *
                           (float)((float)((float)(0.0f / v7) * 2.8f) * -0.5f));
  v10 = v9 + 0.0f;
  for (i = 1; i != 32; ++i) {
    v12 = (float)((float)(unsigned int)i / a4[7]) * 2.8f;
    v13 = GameRoutine_1a0a950(v12 * (float)(v12 * -0.5f));
    v10 = v10 + (float)(v13 * 2.0f);
    *((float*)&v29 + i) = v13;
  }
  v14 = *a1;
  v15 = (float*)&v30;
  v28 = 0;
  *(float*)&v29 = v9 / v10;
  *((float*)&v29 + 1) = *((float*)&v29 + 1) / v10;
  *(float*)&v40 = *(float*)&v40 / v10;
  *((float*)&v40 + 1) = *((float*)&v40 + 1) / v10;
  *(float*)&v30 = *(float*)&v30 / v10;
  *((float*)&v30 + 1) = *((float*)&v30 + 1) / v10;
  *(float*)&v31 = *(float*)&v31 / v10;
  *((float*)&v31 + 1) = *((float*)&v31 + 1) / v10;
  *(float*)&v41 = *(float*)&v41 / v10;
  *((float*)&v41 + 1) = *((float*)&v41 + 1) / v10;
  *(float*)&v32 = *(float*)&v32 / v10;
  *((float*)&v32 + 1) = *((float*)&v32 + 1) / v10;
  *(float*)&v42 = *(float*)&v42 / v10;
  *((float*)&v42 + 1) = *((float*)&v42 + 1) / v10;
  *(float*)&v33 = *(float*)&v33 / v10;
  *((float*)&v33 + 1) = *((float*)&v33 + 1) / v10;
  *(float*)&v34 = *(float*)&v34 / v10;
  *((float*)&v34 + 1) = *((float*)&v34 + 1) / v10;
  *(float*)&v43 = *(float*)&v43 / v10;
  *((float*)&v43 + 1) = *((float*)&v43 + 1) / v10;
  *(float*)&v35 = *(float*)&v35 / v10;
  *((float*)&v35 + 1) = *((float*)&v35 + 1) / v10;
  *(float*)&v36 = *(float*)&v36 / v10;
  *((float*)&v36 + 1) = *((float*)&v36 + 1) / v10;
  *(float*)&v37 = *(float*)&v37 / v10;
  *((float*)&v37 + 1) = *((float*)&v37 + 1) / v10;
  *(float*)&v38 = *(float*)&v38 / v10;
  *((float*)&v38 + 1) = *((float*)&v38 + 1) / v10;
  *(float*)&v39 = *(float*)&v39 / v10;
  *((float*)&v39 + 1) = *((float*)&v39 + 1) / v10;
  *(float*)&v44 = *(float*)&v44 / v10;
  *((float*)&v44 + 1) = *((float*)&v44 + 1) / v10;
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v14 + 96LL))(v14, &v28);
  v16 = -28;
  v17 = 1.0f / *(float*)&v28;
  v18 = (float*)(v5 + 96);
  v19 = 1.0f /
        (float)(*((float*)&v28 + 1) +
                (float)(2 * (unsigned int)*(unsigned __int8*)(a1[11] + 12)));
  *(_DWORD*)(v5 + 20) = v29;
  while (1) {
    v20 = 0.0f;
    v21 = *(v15 - 1) + *v15;
    if (v21 > 0.0f) {
      v20 = (float)(*v15 / v21) + (float)(unsigned int)(v16 + 29);
    }
    v18[16] = v21;
    *(v18 - 16) = v17 * v20;
    *v18 = v19 * v20;
    if (v16 == 0) {
      break;
    }
    v22 = v15[2];
    v23 = 0.0f;
    v24 = v15[1] + v22;
    if (v24 > 0.0f) {
      v23 = (float)(v22 / v24) + (float)(unsigned int)(v16 + 31);
    }
    v15 += 4;
    v18[17] = v24;
    v16 += 4;
    *(v18 - 15) = v17 * v23;
    v18[1] = v19 * v23;
    v18 += 2;
  }
  *(float*)(v5 + 92) = v17 * 31.0f;
  *(float*)(v5 + 156) = v19 * 31.0f;
  *(_DWORD*)(v5 + 220) = HIDWORD(v44);
  v25 = *(unsigned __int8*)(*a1 + 90);
  *(_QWORD*)(v5 + 24) = 0x3F8000003F800000LL;
  if (v25 != 0) {
  LABEL_16:
    v26 = a1[11];
    if (v26 == 0 || (a1[69] & 4) != 0 || (*(_BYTE*)(v26 + 8) & 0x20) == 0) {
      *(float*)(v5 + 24) = (float)v25 / 255.0f;
      *(float*)(v5 + 28) = 255.0f / (float)v25;
    }
  }
LABEL_20:
  if (*(float*)(v5 + 160) < 0.000061035f) {
    return 0;
  }
  if (*(float*)(v5 + 164) < 0.000061035f) {
    return 1;
  }
  if (*(float*)(v5 + 168) < 0.000061035f) {
    return 2;
  }
  if (*(float*)(v5 + 172) < 0.000061035f) {
    return 3;
  }
  if (*(float*)(v5 + 176) < 0.000061035f) {
    return 4;
  }
  if (*(float*)(v5 + 180) < 0.000061035f) {
    return 5;
  }
  if (*(float*)(v5 + 184) < 0.000061035f) {
    return 6;
  }
  if (*(float*)(v5 + 188) < 0.000061035f) {
    return 7;
  }
  if (*(float*)(v5 + 192) < 0.000061035f) {
    return 8;
  }
  if (*(float*)(v5 + 196) < 0.000061035f) {
    return 9;
  }
  if (*(float*)(v5 + 200) < 0.000061035f) {
    return 10;
  }
  if (*(float*)(v5 + 204) < 0.000061035f) {
    return 11;
  }
  if (*(float*)(v5 + 208) < 0.000061035f) {
    return 12;
  }
  if (*(float*)(v5 + 212) < 0.000061035f) {
    return 13;
  }
  if (*(float*)(v5 + 216) < 0.000061035f) {
    return 14;
  }
  if (*(float*)(v5 + 220) < 0.000061035f) {
    return 15;
  }
  return 16;
}

__int64 GameHr_5a4c70(__int64 a1)
{
  float v1;
  float v2;

  v1 = *(float*)(a1 + 48);
  if (*(float*)(a1 + 52) > v1) {
    v1 = *(float*)(a1 + 52);
  }
  v2 = GameRoutine_1a0a820((float)(-2.0f / (float)(v1 * 0.5f)) + 1.0f);
  if (v2 <= 0.0f) {
    return 4;
  }
  else {
    return (unsigned int)(4 * (int)(float)(3.1416f / v2) + 4);
  }
}

__int64 GameHr_5a5210(__int64 a1)
{
  float v1;
  float v2;

  v1 = *(float*)(a1 + 56);
  if (v1 <= 0.0f) {
    return 1;
  }
  v2 = GameRoutine_1a0a820((float)(-2.0f / v1) + 1.0f);
  if (v2 <= 0.0f) {
    return 8;
  }
  else {
    return (unsigned int)(4 * (int)(float)(3.1416f / v2) + 8);
  }
}

void GameHr_5ab480(__int64 a1, __int64 a2, float a3)
{
  __int64 v6;
  unsigned __int16* v7;
  __int64 v8;
  unsigned __int16 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int16 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  float v18;
  float* v19;
  float v20;
  float v21;
  float* v22;
  float* v23;
  __int64 v24;
  float* v25;
  float v26;
  char v28;
  float* v29;
  float* v30;
  float v31;
  float v32;
  float v33;
  float v34;

  if (*(_DWORD*)(a1 + 192) != 0) {
    v6 = 0;
    while (1) {
      v7 = (unsigned __int16*)(*(_QWORD*)(a1 + 160) + 160 * v6);
      v8 = *(_QWORD*)(a1 + 168) + 48 * v6;
      v9 = *v7;
      if (*v7 != 0) {
        v10 = 0;
        do {
          v11 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 8 * v10);
          if (v11 != 0) {
            (*(void (**)(__int64, __int64, float))(*(_QWORD*)v11 + 40LL))(
                v11, a2, a3);
            v9 = *v7;
          }
          ++v10;
        } while (v10 < v9);
      }
      v12 = v7[8];
      if (v12 != 0) {
        break;
      }
    LABEL_3:
      if (++v6 >= (unsigned __int64)*(unsigned int*)(a1 + 192)) {
        return;
      }
    }
    v13 = 0;
    while (1) {
      v15 = *(_QWORD*)(v8 + 16) + 16 * v13;
      v16 = *(_QWORD*)(v15 + 8);
      if (v16 != 0) {
        break;
      }
    LABEL_13:
      if (++v13 >= (unsigned __int64)v12) {
        goto LABEL_3;
      }
    }
    v17 = *(unsigned __int16*)(v16 + 16);
    if (v17 <= 1) {
      v18 = *(float*)(v16 + 24);
    LABEL_38:
      v33 = v18 * 0.5f;
      *(float*)v15 = v33;
      v34 = GameRoutine_1a0a820((float)(-2.0f / v33) + 1.0f);
      if (v34 > 0.0f) {
        v14 = (int)(float)(3.1416f / v34) + 1;
      }
      else {
        v14 = 1;
      }
      *(_DWORD*)(v15 + 4) = v14;
      v12 = v7[8];
      goto LABEL_13;
    }
    v19 = *(float**)(v16 + 24);
    v20 = 0.0f;
    v21 = *v19;
    if (a3 > *v19) {
      v22 = &v19[8 * v17];
      v23 = v22 - 8;
      if (a3 < *(v22 - 8)) {
        v24 = (unsigned int)(v17 - 1);
        v25 = &v19[8 * (unsigned int)(v17 - 2)];
        do {
          v26 = v19[8];
          if (a3 >= v21 && a3 < v26) {
            v31 = (float)(a3 - v21) / (float)(v26 - v21);
            if (v31 < 0.0f) {
              v31 = 0.0f;
            }
            if (v31 > 1.0f) {
              v31 = 1.0f;
            }
            GameRoutine_5a3500((__int64)v19, v31);
            v20 = (float)(v32 * (float)(v32 * v32)) +
                  (float)((float)(v19[2] *
                                  (float)((float)(1.0f - v32) *
                                          (float)(v32 * (float)(v32 * 3.0f)))) +
                          (float)(v19[4] *
                                  (float)((float)(1.0f - v32) *
                                          (float)((float)(v32 * 3.0f) *
                                                  (float)(1.0f - v32)))));
            goto LABEL_37;
          }
          v21 = v19[8];
          v19 += 8;
          --v24;
        } while (v24 != 0);
        v20 = 0.0f;
        v19 = v25;
        if (v25 != nullptr) {
          goto LABEL_37;
        }
        goto LABEL_31;
      }
      v28 = *((_BYTE*)v22 - 4);
      v29 = v22 - 16;
      v20 = 1.0f;
      if ((v28 & 1) != 0) {
        v30 = v23;
      }
      else {
        v30 = v29;
      }
      v19 = v30;
      if (v30 == nullptr) {
      LABEL_31:
        v18 = 0.0f;
        goto LABEL_38;
      }
    }
  LABEL_37:
    v18 = v19[5] + (float)((float)(v19[6] - v19[5]) * v20);
    goto LABEL_38;
  }
}

float* GameHr_5da830(float* result, float* a2, float* a3, float* a4)
{
  float v4;
  float v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  __int64 v21;

  v4 = *a2;
  v5 = *result;
  if (*a2 >= 0.0f || v5 >= 0.0f) {
    if (v4 <= v5) {
      goto LABEL_4;
    }
  LABEL_9:
    v7 = *a3;
    if (v4 >= 0.0f || v7 >= 0.0f) {
      if (v7 <= v4) {
        goto LABEL_12;
      }
    }
    else if (v7 >= v4) {
    LABEL_12:
      v8 = *(_QWORD*)result;
      *(_QWORD*)result = *(_QWORD*)a2;
      *(_QWORD*)a2 = v8;
      v6 = *a3;
      if (*a3 >= 0.0f || *(float*)&v8 >= 0.0f) {
        if (v6 <= *(float*)&v8) {
          goto LABEL_27;
        }
      }
      else if (v6 >= *(float*)&v8) {
        goto LABEL_27;
      }
      v6 = *(float*)&v8;
      *(_QWORD*)a2 = *(_QWORD*)a3;
      *(_QWORD*)a3 = v8;
      goto LABEL_27;
    }
    v12 = *(_QWORD*)result;
    *(_QWORD*)result = *(_QWORD*)a3;
    *(_QWORD*)a3 = v12;
    v6 = *(float*)&v12;
    goto LABEL_27;
  }
  if (v4 < v5) {
    goto LABEL_9;
  }
LABEL_4:
  v6 = *a3;
  if (v4 >= 0.0f || v6 >= 0.0f) {
    if (v6 <= v4) {
      goto LABEL_27;
    }
  }
  else if (v6 >= v4) {
    goto LABEL_27;
  }
  v9 = *(_QWORD*)a2;
  *(_QWORD*)a2 = *(_QWORD*)a3;
  *(_QWORD*)a3 = v9;
  v6 = *(float*)&v9;
  v10 = *a2;
  v11 = *result;
  if (*a2 < 0.0f && v11 < 0.0f) {
    if (v10 >= v11) {
      goto LABEL_27;
    }
  }
  else if (v10 <= v11) {
  LABEL_27:
    v14 = *a4;
    if (*a4 >= 0.0f || v6 >= 0.0f) {
      if (v14 <= v6) {
        return result;
      }
    }
    else if (v14 >= v6) {
      return result;
    }
    v15 = *(_QWORD*)a3;
    *(_QWORD*)a3 = *(_QWORD*)a4;
    *(_QWORD*)a4 = v15;
    v16 = *a3;
    v17 = *a2;
    if (*a3 >= 0.0f || v17 >= 0.0f) {
      if (v16 <= v17) {
        return result;
      }
    }
    else if (v16 >= v17) {
      return result;
    }
    v18 = *(_QWORD*)a2;
    *(_QWORD*)a2 = *(_QWORD*)a3;
    *(_QWORD*)a3 = v18;
    v19 = *a2;
    v20 = *result;
    if (*a2 >= 0.0f || v20 >= 0.0f) {
      if (v19 > v20) {
      LABEL_42:
        v21 = *(_QWORD*)result;
        *(_QWORD*)result = *(_QWORD*)a2;
        *(_QWORD*)a2 = v21;
      }
    }
    else if (v19 < v20) {
      goto LABEL_42;
    }
    return result;
  }
  v13 = *(_QWORD*)result;
  *(_QWORD*)result = *(_QWORD*)a2;
  *(_QWORD*)a2 = v13;
  v6 = *a3;
  goto LABEL_27;
}

__int64 GameHr_657d40(__int64 result, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  float v6;
  __int16 v7;
  __int16 v8;

  v3 = (int)(float)((float)a2 * 0.06f);
  if (v3 >= 1) {
    if (GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
        (((v4 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v5 = 2)
                                                              : (v5 = 3),
         a3 == 0 || (v5 & v4) != 0)) {
      v6 = (float)(unsigned int)v3;
      v7 = *(_WORD*)(result + 136);
      v8 = v7 | 0x60;
      if (*(float*)(result + 144) >= v6) {
        v6 = *(float*)(result + 144);
      }
      if (a3 == 0) {
        v7 = *(_WORD*)(result + 136) & 0xFF9F;
      }
      if (a3 == 1) {
        v7 = *(_WORD*)(result + 136) & 0xFF9F | 0x20;
      }
      *(float*)(result + 144) = v6;
      if (a3 == 2) {
        v7 = v8;
      }
      *(_WORD*)(result + 136) = v7 & 0xFFF7;
    }
  }
  return result;
}

__int64 GameHr_6deeb0(__int64 a1, unsigned int a2)
{
  char v2;
  int v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  float v15;
  float v16;
  int v17;
  _QWORD v19[4];
  _QWORD* v20;
  _QWORD v21[4];
  _QWORD* v22;
  _QWORD v23[4];
  _QWORD* v24;
  int v25;

  v2 = a2;
  LOBYTE(v23[0]) = 4;
  v4 = GameRoutine_6dd190(a1, v23, a2);
  v25 = 0;
  v5 = v4;
  v6 = GameData_212c878[0];
  if (*(_WORD*)(a1 + 1952) != 0) {
    v25 =
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *(unsigned __int16*)(a1 + 1952)) +
                            89LL);
  }
  v24 = v23;
  v19[0] = GameData_1f91e68;
  v19[1] = &v25;
  v20 = v19;
  v21[0] = GameData_1f93088;
  v21[1] = v19;
  v22 = v21;
  v23[0] = GameData_1f92f88;
  v23[1] = 13;
  v23[2] = v21;
  GameRoutine_710540(a1 + 828, v23);
  if (v24 == v23) {
    v7 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_8;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v24 + v7))((__int64)v24);
LABEL_8:
  if (v22 == v21) {
    v8 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_13;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v22 + v8))((__int64)v22);
LABEL_13:
  if (v20 == v19) {
    v9 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_18;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v20 + v9))((__int64)v20);
LABEL_18:
  if ((v2 & 1) != 0) {
    v10 = (int)(float)(*(float*)(a1 + 808) * (float)v25);
  }
  else {
    v10 = v25;
  }
  if (v10 >= 1) {
    LOBYTE(v23[0]) = 1;
    v11 = GameRoutine_6dd190(a1, v23, v2 & 1);
    v12 = *(char*)(a1 + 807);
    if ((v2 & 1) == 0) {
      v12 = 0;
    }
    v13 = v10 - ((v12 + v11 / 5) & ~((v12 + v11 / 5) >> 31));
    v5 -= v13 & ~(v13 >> 31);
  }
  v14 = v5 + *(__int16*)(a1 + 642);
  if (*(_WORD*)(a1 + 1952) != 0) {
    v14 += *(__int16*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                  8LL * *(unsigned __int16*)(a1 + 1952)) +
                       124LL);
  }
  if ((v2 & 1) != 0) {
    v15 = *(float*)(a1 + 712);
    if (v15 <= 1.0f) {
      v16 = v15 * (float)(v14 + *(__int16*)(a1 + 708));
    }
    else {
      v16 = (float)*(__int16*)(a1 + 708) + (float)((float)v14 * v15);
    }
    v17 = (int)v16;
    if ((int)v16 >= 999) {
      v17 = 999;
    }
    v14 = v17 + *(__int16*)(a1 + 710);
  }
  return v14 & (unsigned int)~(v14 >> 31);
}

__int64 GameHr_7266a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  int v5;
  _QWORD v6[4];
  _QWORD* v7;

  v1 = a1;
  if (GameData_21caab0 == 0 ||
      (a1 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                               &GameData_21d1f40)) == 0 ||
      *(_DWORD*)(a1 + 32) == 0) {
    v4 = 0;
    v5 = -1;
    v7 = v6;
    v6[0] = GameData_1f960e8;
    v6[1] = &v5;
    v6[2] = &v4;
    GameRoutine_764060(a1, v6);
    if (v7 == v6) {
      v2 = 32;
    }
    else {
      if (v7 == nullptr) {
      LABEL_9:
        GameRoutine_137cd90(v1, v4,
                            *(unsigned __int16*)(*GameData_212ce90[0] + 26));
        goto LABEL_10;
      }
      v2 = 40;
    }
    (*(void (**)(__int64))(*v7 + v2))((__int64)v7);
    goto LABEL_9;
  }
LABEL_10:
  GameRoutine_10c830(v6, -1.0f);
  GameRoutine_80cb30(v6);
  return GameRoutine_10cff0(v6);
}

float GameHr_734f30()
{
  float v0;

  v0 = 60.0f / (float)*(int*)(GameData_21a60d8 + 476);
  if (v0 <= 0.0f) {
    return 0.0167f;
  }
  else {
    return v0 * 0.0167f;
  }
}

void GameHr_741960(__int64 a1)
{
  unsigned __int16 v1;
  __int64 v3;
  int v4;
  bool v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  char* v19;
  __int64 v20;
  int v21;
  char* v22;
  __int64 j;
  int v24;
  int v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  int v29;
  char* v30;
  __int64 i;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  char* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  char* v41;
  int v42;
  int v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  int v48;
  char* v49;
  int v50;
  int v51;
  int v52;
  int v53;
  float v54;
  __int64 v55;
  _QWORD v56[4];
  _QWORD* v57;
  int v58;
  char* v59;
  char* v60;
  __int64 v61;

  v1 = *(_WORD*)(a1 + 208);
  *(_QWORD*)(a1 + 224) = *(_QWORD*)(a1 + 216);
  if (GameData_21caab0 != 0 && *(_BYTE*)(GameData_21caab0 + 13) == 2) {
    v1 |= 2u;
  }
  v3 = *(_QWORD*)(a1 + 176);
  v4 = *(char*)(a1 + 240);
  v5 = (*(_BYTE*)(a1 + 160) & 1) == 0;
  v6 = *(char*)(a1 + 241);
  v58 = 0;
  v59 = nullptr;
  v60 = nullptr;
  v61 = 0;
  v57 = v56;
  if (v5) {
    v7 = a1 + 161;
  }
  else {
    v7 = v3;
  }
  v56[0] = GameData_1f94aa8;
  v56[1] = a1;
  v56[2] = &v58;
  v8 = GameRoutine_6bc220(v7);
  GameRoutine_73e2a0(*(_QWORD*)v8, *(_QWORD**)(v8 + 8), v1, v4, v6,
                     (__int64)v56);
  if (v57 == v56) {
    v9 = 32;
    goto LABEL_11;
  }
  if (v57 != nullptr) {
    v9 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v57 + v9))((__int64)v57);
  }
  v10 = v59;
  if ((*(_WORD*)(a1 + 208) & 2) == 0) {
    goto LABEL_131;
  }
  v11 = v60 - v59;
  if ((int)((unsigned __int64)(v60 - v59) >> 2) < 1) {
    goto LABEL_131;
  }
  if (v60 != v59) {
    v12 = *v59;
    v13 = v11 >> 2;
    v14 = ((unsigned __int64)v11 >> 2) & 7;
    if (v13 >= 8) {
      v19 = v59 + 16;
      v20 = 0;
      v16 = *v59;
      do {
        v20 -= 8;
        if (v16 >= *(v19 - 16)) {
          v16 = *(v19 - 16);
        }
        if (v16 >= *(v19 - 12)) {
          v16 = *(v19 - 12);
        }
        if (v16 >= *(v19 - 8)) {
          v16 = *(v19 - 8);
        }
        if (v16 >= *(v19 - 4)) {
          v16 = *(v19 - 4);
        }
        if (v16 >= *v19) {
          v16 = *v19;
        }
        if (v16 >= v19[4]) {
          v16 = v19[4];
        }
        if (v16 >= v19[8]) {
          v16 = v19[8];
        }
        v21 = v19[12];
        v19 += 32;
        if (v16 >= v21) {
          v16 = v21;
        }
      } while (-(__int64)(v13 & 0xFFFFFFFFFFFFFFF8LL) != v20);
      v15 = -v20;
      if (v14 == 0) {
      LABEL_42:
        if (v13 >= 8) {
          v27 = v59 + 16;
          v28 = 0;
          do {
            v28 -= 8;
            if (v12 <= *(v27 - 16)) {
              v12 = *(v27 - 16);
            }
            if (v12 <= *(v27 - 12)) {
              v12 = *(v27 - 12);
            }
            if (v12 <= *(v27 - 8)) {
              v12 = *(v27 - 8);
            }
            if (v12 <= *(v27 - 4)) {
              v12 = *(v27 - 4);
            }
            if (v12 <= *v27) {
              v12 = *v27;
            }
            if (v12 <= v27[4]) {
              v12 = v27[4];
            }
            if (v12 <= v27[8]) {
              v12 = v27[8];
            }
            v29 = v27[12];
            v27 += 32;
            if (v12 <= v29) {
              v12 = v29;
            }
          } while (-(__int64)(v13 & 0xFFFFFFFFFFFFFFF8LL) != v28);
          v26 = -v28;
          if (v14 == 0) {
          LABEL_68:
            v34 = v59[1];
            if (v13 >= 8) {
              v37 = v59 + 17;
              v38 = 0;
              v36 = v59[1];
              do {
                v38 -= 8;
                if (v36 >= *(v37 - 16)) {
                  v36 = *(v37 - 16);
                }
                if (v36 >= *(v37 - 12)) {
                  v36 = *(v37 - 12);
                }
                if (v36 >= *(v37 - 8)) {
                  v36 = *(v37 - 8);
                }
                if (v36 >= *(v37 - 4)) {
                  v36 = *(v37 - 4);
                }
                if (v36 >= *v37) {
                  v36 = *v37;
                }
                if (v36 >= v37[4]) {
                  v36 = v37[4];
                }
                if (v36 >= v37[8]) {
                  v36 = v37[8];
                }
                v39 = v37[12];
                v37 += 32;
                if (v36 >= v39) {
                  v36 = v39;
                }
              } while (-(__int64)(v13 & 0xFFFFFFFFFFFFFFF8LL) != v38);
              v35 = -v38;
              if (v14 == 0) {
              LABEL_94:
                if (v13 >= 8) {
                  v45 = v59 + 17;
                  v46 = 0;
                  v47 = -(__int64)(v13 & 0xFFFFFFFFFFFFFFF8LL);
                  do {
                    v46 -= 8;
                    if (v34 <= *(v45 - 16)) {
                      v34 = *(v45 - 16);
                    }
                    if (v34 <= *(v45 - 12)) {
                      v34 = *(v45 - 12);
                    }
                    if (v34 <= *(v45 - 8)) {
                      v34 = *(v45 - 8);
                    }
                    if (v34 <= *(v45 - 4)) {
                      v34 = *(v45 - 4);
                    }
                    if (v34 <= *v45) {
                      v34 = *v45;
                    }
                    if (v34 <= v45[4]) {
                      v34 = v45[4];
                    }
                    if (v34 <= v45[8]) {
                      v34 = v45[8];
                    }
                    v48 = v45[12];
                    v45 += 32;
                    if (v34 <= v48) {
                      v34 = v48;
                    }
                  } while (v47 != v46);
                  v44 = -v46;
                  if (v14 == 0) {
                    goto LABEL_120;
                  }
                }
                else {
                  v44 = 0;
                  if (v14 == 0) {
                  LABEL_120:
                    v17 = (v12 + v16) >> 1;
                    v18 = (v34 + v36) >> 1;
                    goto LABEL_121;
                  }
                }
                v49 = &v59[4 * v44 + 1];
                do {
                  v51 = *v49;
                  v49 += 4;
                  v50 = v51;
                  if (v34 <= v51) {
                    v34 = v50;
                  }
                  --v14;
                } while (v14 != 0);
                goto LABEL_120;
              }
            }
            else {
              v35 = 0;
              v36 = v59[1];
              if (v14 == 0) {
                goto LABEL_94;
              }
            }
            v40 = v14;
            v41 = &v59[4 * v35 + 1];
            do {
              v43 = *v41;
              v41 += 4;
              v42 = v43;
              if (v36 >= v43) {
                v36 = v42;
              }
              --v40;
            } while (v40 != 0);
            goto LABEL_94;
          }
        }
        else {
          v26 = 0;
          if (v14 == 0) {
            goto LABEL_68;
          }
        }
        v30 = &v59[4 * v26];
        for (i = v14; i != 0; --i) {
          v33 = *v30;
          v30 += 4;
          v32 = v33;
          if (v12 <= v33) {
            v12 = v32;
          }
        }
        goto LABEL_68;
      }
    }
    else {
      v15 = 0;
      v16 = *v59;
      if (v14 == 0) {
        goto LABEL_42;
      }
    }
    v22 = &v59[4 * v15];
    for (j = v14; j != 0; --j) {
      v25 = *v22;
      v22 += 4;
      v24 = v25;
      if (v16 >= v25) {
        v16 = v24;
      }
    }
    goto LABEL_42;
  }
  v17 = 0;
  v18 = 0;
LABEL_121:
  GameRoutine_730b20(GameData_21cd130, v17, v18);
  if (GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v52 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v53 = 2)
                                                             : (v53 = 3),
       (v53 & v52) != 0)) {
    v54 = *(float*)(a1 + 144);
    *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
    if (v54 < 30.0f) {
      v54 = 30.0f;
    }
    *(float*)(a1 + 144) = v54;
  }
  v10 = v59;
LABEL_131:
  if (v10 != nullptr) {
    v60 = v10;
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v55 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v55, v10);
  }
}

void GameHr_743460()
{
  float v0;
  float v1;
  __int64 v2;
  unsigned int v3;
  float v4;
  float v5;
  __int128 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;

  v0 = 0.0f;
  v1 = 0.0f;
  v2 = *(_QWORD*)GameData_212c470;
  v3 = *(_DWORD*)(*(_QWORD*)GameData_212c470 + 944LL);
  v4 = (float)*(int*)(*GameData_212c010[0] + 476);
  if (GameData_21cfa58 == (v3 & 0xF | (16 * ((v3 >> 12) & 3)) |
                           (v3 >> 4) & 0xC0 | (v3 >> 7) & 0xF00)) {
    v5 = 60.0f / v4;
    if ((float)(60.0f / v4) <= 0.0f) {
      v5 = 1.0f;
    }
    v1 = *(float*)&GameData_21cfa5c + v5;
  }
  GameData_21cfa5c = LODWORD(v1);
  v6 = *(_OWORD*)(v2 + 960);
  GameData_21cfa58 =
      v3 & 0xF | (16 * ((v3 >> 12) & 3)) | (v3 >> 4) & 0xC0 | (v3 >> 7) & 0xF00;
  v7 = (float)(*(float*)&v6 + 0.25f) * 1.3333f;
  if (*(float*)&v6 >= -0.25f) {
    v7 = 0.0f;
  }
  if (*(float*)&v6 > 0.25f) {
    v8 = (float)(*(float*)&v6 + -0.25f) * 1.3333f;
  }
  else {
    v8 = v7;
  }
  v9 = (float)(*((float*)&v6 + 1) + 0.25f) * 1.3333f;
  if (*((float*)&v6 + 1) >= -0.25f) {
    v9 = 0.0f;
  }
  if (*((float*)&v6 + 1) > 0.25f) {
    v10 = (float)(*((float*)&v6 + 1) + -0.25f) * 1.3333f;
  }
  else {
    v10 = v9;
  }
  v11 = 60.0f / v4;
  if (v11 <= 0.0f) {
    v12 = 8.0f;
  }
  else {
    v12 = v11 * 8.0f;
  }
  if ((v3 & 8) != 0) {
    v12 = v12 * 4.0f;
  }
  v13 = *(float*)&GameData_21cfa60 + (float)(v8 * v12);
  v14 = *(float*)&GameData_21cfa64 - (float)(v10 * v12);
  v15 = 1920.0f;
  if (v13 <= 1920.0f) {
    v15 = v13;
  }
  if (v13 >= 0.0f) {
    v16 = v15;
  }
  else {
    v16 = 0.0f;
  }
  GameData_21cfa60 = LODWORD(v16);
  v17 = 1080.0f;
  if (v14 <= 1080.0f) {
    v17 = v14;
  }
  if (v14 >= 0.0f) {
    v0 = v17;
  }
  GameData_21cfa64 = LODWORD(v0);
}

float GameHr_7c4d10(__int64 a1, float a2, float a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  float v10;
  unsigned int v11;
  float* v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;

  v3 = (int)(float)((float)(a2 + 1280.0f) * 0.2f);
  v4 = (int)(float)((float)(a3 + 1280.0f) * 0.2f);
  if (v3 >= 287) {
    v5 = 287;
  }
  else {
    v5 = (int)(float)((float)(a2 + 1280.0f) * 0.2f);
  }
  v6 = v5 - 256;
  if (v3 < 256) {
    v6 = 0;
  }
  if (v4 >= 287) {
    v7 = 287;
  }
  else {
    v7 = (int)(float)((float)(a3 + 1280.0f) * 0.2f);
  }
  v8 = v7 - 256;
  if (v4 >= 256) {
    v9 = v8;
  }
  else {
    v9 = 0;
  }
  v10 = a2 - (float)((float)v6 * 5.0f);
  v11 = v6 + 32 * v9;
  if (v11 >= 0x400) {
    v11 = 0;
  }
  v12 = (float*)(a1 + 20LL * v11);
  if (v10 <= 5.0f) {
    v13 = v10;
  }
  else {
    v13 = 5.0f;
  }
  if (v10 >= 0.0f) {
    v14 = v13;
  }
  else {
    v14 = 0.0f;
  }
  v15 = a3 - (float)((float)v9 * 5.0f);
  if (v15 <= 5.0f) {
    v16 = v15;
  }
  else {
    v16 = 5.0f;
  }
  if (v15 >= 0.0f) {
    v17 = v16;
  }
  else {
    v17 = 0.0f;
  }
  v18 = v12[4];
  if ((float)(v14 + v17) <= 5.0f) {
    v19 = 1;
  }
  else {
    v19 = 8;
  }
  if ((float)(v14 + v17) <= 5.0f) {
    v20 = 2;
  }
  else {
    v20 = 4;
  }
  if (v17 >= v14) {
    v19 = v20;
  }
  if (v19 > 3) {
    if (v19 == 4) {
      v26 = v12[2];
      v22 = v12[3];
      v29 = v18 + (float)((float)(v22 + v26) * -0.5f);
      v21 = v22 + (float)(v29 * 2.0f);
      v24 = v26 + (float)(v29 * 2.0f);
    }
    else {
      v24 = v12[1];
      v26 = v12[2];
      v27 = v18 + (float)((float)(v24 + v26) * -0.5f);
      v21 = v24 + (float)(v27 * 2.0f);
      v22 = v26 + (float)(v27 * 2.0f);
    }
    v25 = v26;
  }
  else {
    v21 = *v12;
    if (v19 == 1) {
      v24 = v12[1];
      v28 = v18 + (float)((float)(*v12 + v24) * -0.5f);
      v22 = *v12 + (float)(v28 * 2.0f);
      v25 = v24 + (float)(v28 * 2.0f);
    }
    else {
      v22 = v12[3];
      v23 = v18 + (float)((float)(*v12 + v22) * -0.5f);
      v24 = *v12 + (float)(v23 * 2.0f);
      v25 = v22 + (float)(v23 * 2.0f);
    }
  }
  return (float)(v21 + (float)((float)(v14 * (float)(v24 - v21)) / 5.0f)) +
         (float)((float)(v17 *
                         (float)((float)(v22 +
                                         (float)((float)(v14 *
                                                         (float)(v25 - v22)) /
                                                 5.0f)) -
                                 (float)(v21 +
                                         (float)((float)(v14 *
                                                         (float)(v24 - v21)) /
                                                 5.0f)))) /
                 5.0f);
}

__int64 GameHr_808650(__int64 a1, __int64 a2, int a3)
{
  char v5;
  int v6;
  int v7;
  __int64 result;
  int v9;
  int v10;
  float v11;
  _QWORD v12[2];

  v5 = GameData_21ee240;
  if (GameData_21ee240 == 0) {
    goto LABEL_7;
  }
  if (*(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v6 = *(_DWORD*)(GameData_21ee240 + 156);
    if ((v6 & 8) != 0) {
      v7 = 2;
    }
    else {
      v7 = 3;
    }
    v5 = (v7 & v6) == 0;
  LABEL_7:
    result = 0;
    if (a2 == 0) {
      return result;
    }
    goto LABEL_10;
  }
  v5 = 0;
  result = 0;
  if (a2 == 0) {
    return result;
  }
LABEL_10:
  if ((v5 & 1) == 0) {
    *(struct PseudoSret*)(v12) = GameRoutine_81d430();
    if (GameData_21ed098 != 0) {
      GameRoutine_18c4dd0(GameData_21ed098, v12, (unsigned int)-a3, 0);
    }
    if (a1 != 0) {
      if (GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
          (((v9 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v10 = 2)
                                                                : (v10 = 3),
           (v10 & v9) != 0)) {
        v11 = *(float*)(a1 + 144);
        *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
        if (v11 < 30.0f) {
          v11 = 30.0f;
        }
        *(float*)(a1 + 144) = v11;
      }
      return a1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 GameHr_8089c0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4;
  int v5;
  int v6;
  __int64 result;
  int v9;
  int v10;
  float v11;
  _QWORD v12[2];

  v4 = GameData_21ee240;
  if (GameData_21ee240 == 0) {
    goto LABEL_7;
  }
  if (*(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v5 = *(_DWORD*)(GameData_21ee240 + 156);
    if ((v5 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v4 = (v6 & v5) == 0;
  LABEL_7:
    result = 0;
    if (a2 == 0) {
      return result;
    }
    goto LABEL_10;
  }
  v4 = 0;
  result = 0;
  if (a2 == 0) {
    return result;
  }
LABEL_10:
  if ((v4 & 1) == 0) {
    *(struct PseudoSret*)(v12) = GameRoutine_81d430();
    if (GameData_21ed098 != 0) {
      GameRoutine_18c6550(GameData_21ed098, v12, a3);
    }
    if (a1 != 0) {
      if (GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
          (((v9 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v10 = 2)
                                                                : (v10 = 3),
           (v10 & v9) != 0)) {
        v11 = *(float*)(a1 + 144);
        if (v11 < 45.0f) {
          v11 = 45.0f;
        }
        *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
        *(float*)(a1 + 144) = v11;
      }
      return a1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 GameHr_80cb30(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  bool v7;
  _QWORD v10[2];
  _QWORD* v11;
  _BYTE v12[200];
  _BYTE v13[200];

  GameRoutine_10cd70(v13, a1);
  if (GameRoutine_10d1b0(v13) < 0.0f) {
    GameRoutine_10cb00(v12, "FadeTime_BGM_StageClear_Out");
    GameRoutine_10d050(v13, v12);
    GameRoutine_10cff0(v12);
  }
  v1 = GameData_212d468[0];
  *(struct PseudoSret*)(v10) =
      GameRoutine_dabf0(*(_QWORD*)(*GameData_212d468[0] + 8));
  v2 = v10[1];
  if ((v10[0] & 1) == 0) {
    v2 = LOBYTE(v10[0]) >> 1;
  }
  if (v2 == 17) {
    v3 = (v10[0] & 1) != 0 ? v11 : (_QWORD*)((char*)v10 + 1);
    v4 = *v3;
    v5 = v3[1];
    v6 = *((unsigned __int8*)v3 + 16);
    v7 = v4 == 0x5F5359535F4D4742LL && v5 == 0x7265764F656D6147LL;
    if (v7 && v6 == 49) {
      GameRoutine_10c910(v12, 1200);
      GameRoutine_10d050(v13, v12);
      GameRoutine_10cff0(v12);
    }
  }
  GameRoutine_a2c9c0(*v1, v13);
  if ((v10[0] & 1) != 0) {
    (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)GameData_212d480[0] + 24LL))(
        *GameData_212d480[0], v11);
  }
  return GameRoutine_10cff0(v13);
}

__int64 GameHr_811b80()
{
  __int64 result;
  _BYTE v1[200];
  _QWORD v2[2];

  *(struct PseudoSret*)(v2) = GameRoutine_d98c0();
  result = GameRoutine_1120d0(v2);
  if ((result & 1) != 0) {
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 0, v1, 0.0f);
    GameRoutine_10cff0(v1);
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 1, v1, 1.0f);
    GameRoutine_10cff0(v1);
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 2, v1, 1.0f);
    return GameRoutine_10cff0(v1);
  }
  return result;
}

__int64 GameHr_811c50()
{
  __int64 result;
  _BYTE v1[200];
  _QWORD v2[2];

  *(struct PseudoSret*)(v2) = GameRoutine_d98c0();
  result = GameRoutine_1120d0(v2);
  if ((result & 1) != 0) {
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 0, v1, 1.0f);
    GameRoutine_10cff0(v1);
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 1, v1, 0.0f);
    GameRoutine_10cff0(v1);
    GameRoutine_10cb00(v1, "FadeTime_BGM_Museum_BTL_XFade");
    GameRoutine_1006d0(v2, 2, v1, 0.0f);
    return GameRoutine_10cff0(v1);
  }
  return result;
}

__int64 GameHr_81cda0(__int64 a1, __int128* a2, float a3)
{
  __int128 v3;
  int v5;
  int v6;
  int v7;
  float v8;
  int v9;
  __int64 v10;
  __int128 v12;
  __int128 v13;
  __int128 v14;

  v3 = *a2;
  if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v5 = *(_DWORD*)(GameData_21ee240 + 156);
    if ((v5 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v7 = v6 & v5;
    if (a3 < 0.0f) {
      a3 = 0.3f;
    }
    if (v7 != 0) {
      v8 = a3;
    }
    else {
      v8 = 0.0f;
    }
  }
  else if (a3 >= 0.0f) {
    v8 = a3;
  }
  else {
    v8 = 0.3f;
  }
  v9 = *(unsigned __int8*)(a1 + 72);
  v12 = *a2;
  if (v9 == 1) {
    v10 = *(_QWORD*)(a1 + 48);
    v14 = v3;
    v13 = v3;
    (*(void (**)(__int64, __int128*, __int128*))(v10 + 24))(a1 + 48, &v14,
                                                            &v13);
    *(_DWORD*)(a1 + 56) = 0;
  LABEL_19:
    *(_DWORD*)(a1 + 60) = 0;
    *(_WORD*)(a1 + 72) = 256;
    return 1;
  }
  if (v8 < *(float*)(a1 + 56) ||
      ((*(__int64 (**)(__int64, __int128*, __int64))(
           *(_QWORD*)(a1 + 48) + 8LL))(a1 + 48, &v12, a1 + 96) &
       1) != 0) {
    (*(void (**)(__int128* __return_ptr, __int64))(*(_QWORD*)(a1 + 48) + 16LL))(
        &v14, a1 + 48);
    v13 = v12;
    (*(void (**)(__int64, __int128*, __int128*))(*(_QWORD*)(a1 + 48) + 24LL))(
        a1 + 48, &v14, &v13);
    *(float*)(a1 + 56) = v8;
    goto LABEL_19;
  }
  return 0;
}

__int64 GameHr_914e40(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _BYTE* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  _BYTE* v22;
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
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int128 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int128 v67;
  __int64 v68;
  _BYTE v69[32];
  _BYTE* v70;

  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v68 = 0;
  *(_QWORD*)&v67 = 0;
  *(_QWORD*)((char*)&v67 + 5) = 0;
  result = GameRoutine_d86560(&v56);
  if ((result & 1) == 0) {
  LABEL_70:
    if ((v63 & 1) != 0) {
      goto LABEL_71;
    }
    goto LABEL_75;
  }
  v3 = GameData_212d458[0];
  if (*(_DWORD*)(*(_QWORD*)GameData_212c6a0[0] + 928LL) != 0) {
    GameRoutine_cb90b0(*GameData_212d458[0], 1.0f);
  }
  v4 = *(_QWORD*)(*v3 + 80);
  if (v4 != 0) {
    v5 = *(_QWORD*)(*v3 + 72);
    v6 = *(_QWORD*)(*v3 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = GameRoutine_1a0a0c0(v6);
    GameRoutine_1a09c50(v4);
    if (v7 == 0 || v5 == 0) {
      if (v7 == 0) {
        goto LABEL_13;
      }
    }
    else {
      GameRoutine_10c1070(*(_QWORD*)GameData_212dbe8[0],
                          *(_QWORD*)(*(_QWORD*)(v5 + 24) + 16LL) + 560LL, &v66);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      GameRoutine_1a09c50(v7);
    }
  }
LABEL_13:
  if ((v56 & 1) != 0) {
    GameRoutine_60a270(&v43);
  }
  else {
    v43 = v56;
    v44 = v57;
    v45 = v58;
  }
  if ((v59 & 1) != 0) {
    GameRoutine_60a270(&v46);
  }
  else {
    v46 = v59;
    v47 = v60;
    v48 = v61;
  }
  v9 = v62;
  v49 = v62;
  if ((v63 & 1) != 0) {
    GameRoutine_60a270(&v50);
    v9 = v49;
  }
  else {
    v50 = v63;
    v51 = v64;
    v52 = v65;
  }
  v53 = v66;
  v54 = v67;
  v55 = v68;
  v10 = GameData_212bf68;
  v11 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 144, 16, 0);
  v12 = v43;
  v13 = v44;
  v14 = v45;
  v15 = (_QWORD*)v11;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  *(_DWORD*)(v11 + 80) = v9;
  *(_QWORD*)v11 = GameData_1fad738;
  *(_QWORD*)(v11 + 32) = v12;
  v16 = (_BYTE*)(v11 + 32);
  *(_QWORD*)(v11 + 40) = v13;
  *(_QWORD*)(v11 + 48) = v14;
  v17 = v46;
  v18 = v47;
  v19 = v50;
  v46 = 0;
  v50 = 0;
  *(_QWORD*)(v11 + 16) = a1;
  *(_QWORD*)(v11 + 56) = v17;
  v20 = (_BYTE*)(v11 + 56);
  v21 = v48;
  v47 = 0;
  v48 = 0;
  *(_QWORD*)(v11 + 88) = v19;
  v22 = (_BYTE*)(v11 + 88);
  *(_QWORD*)(v11 + 64) = v18;
  *(_QWORD*)(v11 + 72) = v21;
  v24 = v51;
  v23 = v52;
  v51 = 0;
  v52 = 0;
  *(_QWORD*)(v11 + 96) = v24;
  *(_QWORD*)(v11 + 104) = v23;
  v25 = v67;
  *(_QWORD*)(v11 + 112) = v66;
  *(_QWORD*)(v11 + 120) = v25;
  v26 = v68;
  *(_QWORD*)(v11 + 128) = *((_QWORD*)&v67 + 1);
  *(_QWORD*)(v11 + 136) = v26;
  v70 = (_BYTE*)GameRoutine_9185e0();
  GameRoutine_104e1d0(a1, v69);
  if (v70 == v69) {
    v27 = 32;
    goto LABEL_26;
  }
  if (v70 != nullptr) {
    v27 = 40;
  LABEL_26:
    (*(void (**)(__int64))(*(_QWORD*)v70 + v27))((__int64)v70);
  }
  if ((*v22 & 1) != 0) {
    v28 = v15[13];
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v29 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v10 + v29, v28);
    }
  }
  if ((*v20 & 1) != 0) {
    v30 = v15[9];
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v31 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v10 + v31, v30);
    }
  }
  if ((*v16 & 1) != 0) {
    v32 = v15[6];
    if (v32 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v33 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v10 + v33, v32);
    }
  }
  v34 = 128;
  if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
    v34 = 56;
  }
  GameRoutine_1a0a4e0(*(_QWORD*)v10 + v34, v15);
  if ((v50 & 1) != 0 && v52 != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v35 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v10 + v35, v52);
  }
  if ((v46 & 1) != 0 && v48 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v36 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v10 + v36, v48);
  }
  if ((v43 & 1) != 0 && v45 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v37 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v10 + v37, v45);
  }
  result = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == a1 + 160) {
    v38 = 32;
  }
  else {
    if (result == 0) {
      goto LABEL_64;
    }
    v38 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v38))((__int64)result);
LABEL_64:
  v39 = *(_QWORD*)(a1 + 8);
  if (v39 == 0) {
    goto LABEL_70;
  }
  while (*(_BYTE*)v39 != 2) {
    if (*(_BYTE*)v39 == 0) {
      goto LABEL_70;
    }
  LABEL_67:
    v39 += 64;
  }
  if (*(_DWORD*)(v39 + 32) != 1) {
    goto LABEL_67;
  }
  *(_QWORD*)(a1 + 16) = v39;
  *(_WORD*)(a1 + 136) &= ~0x80u;
  if ((v63 & 1) != 0) {
  LABEL_71:
    if (v65 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v40 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v40, v65);
    }
  }
LABEL_75:
  if ((v59 & 1) != 0 && v61 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v41 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v41, v61);
  }
  if ((v56 & 1) != 0 && v58 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v42 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v42, v58);
  }
  return result;
}

__int64 GameHr_a85ad0(__int64 result, float a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;

  v3 = *(_QWORD*)(result + 24);
  v2 = *(_QWORD*)(result + 32);
  if (a2 <= 0.00000011921f) {
    if (v2 == v3) {
      return result;
    }
    v8 = *(_QWORD*)(v2 - 8);
    if (v8 == 0) {
      return result;
    }
    v9 = *(_QWORD*)(v8 + 40);
    if (v9 == 0 || *(_DWORD*)(*(_QWORD*)(v8 + 56) + 20LL) != 1) {
      return result;
    }
    v10 = result;
    v11 = a2 > 0.0f;
    GameRoutine_b86fb0(v9, a2 > 0.0f);
    result = GameRoutine_c44560(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 32) - 8LL) + 56LL), v11);
    v7 = *(_QWORD*)(v10 + 32);
  }
  else {
    if (v2 == v3) {
      return result;
    }
    v4 = *(_QWORD*)(v2 - 8);
    if (v4 == 0) {
      return result;
    }
    v5 = *(_QWORD*)(v4 + 40);
    if (v5 == 0) {
      return result;
    }
    v6 = result;
    GameRoutine_b86fb0(v5, 1);
    result = GameRoutine_c44560(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 32) - 8LL) + 56LL), 1);
    v7 = *(_QWORD*)(v6 + 32);
  }
  v12 = *(_QWORD*)(*(_QWORD*)(v7 - 8) + 64LL);
  if (v12 != 0) {
    result = *(_QWORD*)(*(_QWORD*)(v12 + 96) + 296LL);
    if (result != 0) {
      return GameRoutine_c72b30(result, 0);
    }
  }
  return result;
}

__int64 GameHr_a976c0(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  __int64 v26;
  float v27;
  float v28;
  bool v29;
  int v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  float v35;
  __int64 v36;
  __int64 v37;
  float v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _DWORD* v46;
  int v47;
  __int64 v48;
  _DWORD* v49;
  int v50;
  _DWORD* v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _DWORD* v62;
  _QWORD* v63;
  __int64 v64;
  float v65;
  float v66;
  bool v67;
  int v68;
  __int64 v69;
  int v70;
  _QWORD* v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  float v77;
  float v78;
  bool v79;
  int v80;
  __int64 v81;
  int v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;

  v1 = *(_QWORD*)(result + 8);
  v2 = GameData_1b5e540[*(int*)(v1 + 284)];
  if (*(_BYTE*)(v1 + 300) != 2) {
    if (*(_BYTE*)(result + 216) != 0) {
      v14 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
      if (v14 != 0) {
        v15 = v14 >> 3;
        v16 = 0;
        do {
          v17 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v16);
          *(_QWORD*)(result + 96) = v17;
          *(_DWORD*)(v17 + 180) = v2;
          v18 = *(_QWORD*)(result + 96);
          if (*(_BYTE*)(v18 + 186) == 1) {
            v19 = *(_QWORD*)(v18 + 192);
            v20 = *(_QWORD*)(v18 + 200);
            while (v19 != v20) {
              if ((*(_BYTE*)(v19 + 22) & 1) == 0 &&
                  (*(_BYTE*)(v19 + 20) & 1) != 0) {
                v21 = *(_DWORD*)(v19 + 12);
                *(_DWORD*)v19 = v21;
                *(_DWORD*)(v19 + 4) = v21;
              }
              *(_DWORD*)(v19 + 16) = -2;
              *(_BYTE*)(v19 + 21) = 0;
              v19 += 24;
            }
            *(_BYTE*)(v18 + 186) = 0;
            v18 = *(_QWORD*)(result + 96);
          }
          v22 = *(_QWORD*)(v18 + 192);
          v23 = *(_QWORD*)(v18 + 200);
          while (v22 != v23) {
            if ((*(_BYTE*)(v22 + 20) & 1) == 0 &&
                (*(_BYTE*)(v22 + 21) & 1) == 0 &&
                (*(_BYTE*)(v22 + 22) & 1) == 0) {
              v24 = *(_DWORD*)(v22 + 4);
              *(_DWORD*)(v22 + 8) = 0;
              *(_DWORD*)v22 = v24;
            }
            v22 += 24;
          }
          *(_BYTE*)(v18 + 187) = 0;
          ++v16;
          *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
          *(_QWORD*)(result + 96) = 0;
        } while (v16 != v15);
      }
      *(_BYTE*)(result + 216) = 0;
    }
    if ((*(_BYTE*)(result + 164) & 1) != 0) {
      goto LABEL_48;
    }
    v54 = *(_QWORD*)(result + 48);
    v53 = *(_QWORD*)(result + 56);
    v55 = v53 - v54;
    if (v53 == v54) {
      goto LABEL_97;
    }
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = (v55 >> 3) - 1;
    while (1) {
      v60 = *(_QWORD*)(result + 136);
      v61 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
            224LL * *(_QWORD*)(v54 + 8 * v57);
      *(_QWORD*)(result + 96) = v61;
      v62 = *(_DWORD**)(v61 + 192);
      if (v62[2] == 2) {
        v58 = 1;
        v62[2] = 3;
        *(_BYTE*)(v60 + v56) = 1;
        *(_DWORD*)(result + 160) = 1065353216;
        *(_BYTE*)(result + 164) = 1;
        v62 = *(_DWORD**)(*(_QWORD*)(result + 96) + 192LL);
      }
      if (v62[8] == 2) {
        v62[8] = 3;
        v58 = 1;
        *(_BYTE*)(v60 + v56 + 1) = 1;
        *(_DWORD*)(result + 160) = 1065353216;
        *(_BYTE*)(result + 164) = 1;
        v62 = *(_DWORD**)(*(_QWORD*)(result + 96) + 192LL);
      }
      if (v62[14] == 2) {
        v58 = 1;
        v62[14] = 3;
        *(_BYTE*)(v60 + v56 + 2) = 1;
        *(_DWORD*)(result + 160) = 1065353216;
        *(_BYTE*)(result + 164) = 1;
        *(_QWORD*)(result + 96) = 0;
        if (v59 == v57) {
          goto LABEL_48;
        }
      }
      else {
        *(_QWORD*)(result + 96) = 0;
        if (v59 == v57) {
          if ((v58 & 1) == 0) {
            goto LABEL_97;
          }
        LABEL_48:
          v33 = result;
          v34 = *(_QWORD*)(*GameData_212c010[0] + 16632);
          if (*(_QWORD*)(*GameData_212c010[0] + 16616) != 0) {
            v34 = *(_QWORD*)(*GameData_212c010[0] + 16616);
          }
          v35 = *(float*)(v34 + 60);
          v36 = GameRoutine_1a09bb0(*(_QWORD*)(GameData_2265ae0 + 136));
          if ((*(_BYTE*)(v33 + 164) & 1) == 0) {
            GameRoutine_8123d0(v36);
          }
          v37 = v36;
          result = v33;
          v38 = fmaxf(
              *(float*)(v33 + 160) +
                  (float)((float)((float)(v37 / 1000000) * -0.001f) / v35),
              0.0f);
          if (v38 == 0.0f) {
            v40 = *(_QWORD*)(v33 + 48);
            v39 = *(_QWORD*)(v33 + 56);
            if (v39 != v40) {
              v41 = (v39 - v40) >> 3;
              v42 = 0;
              v43 = 0;
              do {
                v44 = *(_QWORD*)(v33 + 136);
                v45 = *(_QWORD*)(*(_QWORD*)(v33 + 40) + 56LL) +
                      224LL * *(_QWORD*)(*(_QWORD*)(v33 + 48) + 8 * v43);
                *(_QWORD*)(v33 + 96) = v45;
                if (*(_BYTE*)(v44 + v42) == 1) {
                  v46 = *(_DWORD**)(v45 + 192);
                  if (v46[2] == 3) {
                    v47 = v46[1];
                    v46[2] = 1;
                    *v46 = v47;
                  }
                  *(_BYTE*)(v44 + v42) = 0;
                }
                v48 = v44 + v42;
                if (*(_BYTE*)(v48 + 1) == 1) {
                  v49 = *(_DWORD**)(*(_QWORD*)(v33 + 96) + 192LL);
                  if (v49[8] == 3) {
                    v50 = v49[7];
                    v49[8] = 1;
                    v49[6] = v50;
                  }
                  *(_BYTE*)(v48 + 1) = 0;
                }
                if (*(_BYTE*)(v48 + 2) == 1) {
                  v51 = *(_DWORD**)(*(_QWORD*)(v33 + 96) + 192LL);
                  if (v51[14] == 3) {
                    v52 = v51[13];
                    v51[14] = 1;
                    v51[12] = v52;
                  }
                  *(_BYTE*)(v48 + 2) = 0;
                }
                ++v43;
                v42 += 3;
                *(_QWORD*)(v33 + 96) = 0;
              } while (v41 != v43);
            }
            v63 = *(_QWORD**)(v33 + 184);
            *(_DWORD*)(v33 + 160) = 0;
            *(_BYTE*)(v33 + 164) = 0;
            if (v63 == nullptr) {
            LABEL_97:
              v72 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
              if (v72 != 0) {
                v73 = v72 >> 3;
                v74 = ((unsigned __int64)v72 >> 3) & 3;
                if (v73 >= 4) {
                  v83 = v73 & 0xFFFFFFFFFFFFFFFCLL;
                  v75 = 0;
                  do {
                    v84 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                          224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v75);
                    *(_QWORD*)(result + 96) = v84;
                    *(_DWORD*)(v84 + 180) = v2;
                    *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
                    *(_QWORD*)(result + 96) = 0;
                    v85 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                          224LL *
                              *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v75 + 8);
                    *(_QWORD*)(result + 96) = v85;
                    *(_DWORD*)(v85 + 180) = v2;
                    *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
                    *(_QWORD*)(result + 96) = 0;
                    v86 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                          224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v75 +
                                             16);
                    *(_QWORD*)(result + 96) = v86;
                    *(_DWORD*)(v86 + 180) = v2;
                    *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
                    *(_QWORD*)(result + 96) = 0;
                    v87 = *(_QWORD*)(result + 48) + 8 * v75;
                    v75 += 4;
                    v88 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                          224LL * *(_QWORD*)(v87 + 24);
                    *(_QWORD*)(result + 96) = v88;
                    *(_DWORD*)(v88 + 180) = v2;
                    *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
                    *(_QWORD*)(result + 96) = 0;
                  } while (v83 != v75);
                }
                else {
                  v75 = 0;
                }
                if (v74 != 0) {
                  v89 = 8 * v75;
                  do {
                    --v74;
                    v90 = *(_QWORD*)(*(_QWORD*)(result + 48) + v89);
                    v89 += 8;
                    v91 =
                        *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) + 224 * v90;
                    *(_QWORD*)(result + 96) = v91;
                    *(_DWORD*)(v91 + 180) = v2;
                    *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
                    *(_QWORD*)(result + 96) = 0;
                  } while (v74 != 0);
                }
              }
              return result;
            }
            while (2) {
              v64 = v63[2];
              if (*(float*)(v64 + 132) == 1.0f) {
                if ((*(_BYTE*)(v64 + 169) & 1) != 0) {
                  goto LABEL_94;
                }
              }
              else {
                v65 = *(float*)(v64 + 120);
                v66 = *(float*)(v64 + 144);
                *(_DWORD*)(v64 + 132) = 1065353216;
                if (v65 == v66 &&
                    *(float*)(v64 + 124) == *(float*)(v64 + 148) &&
                    (*(float*)(v64 + 128) == *(float*)(v64 + 152)
                         ? (v67 = *(float*)(v64 + 156) == 1.0f)
                         : (v67 = false),
                     v67)) {
                  v68 = *(_DWORD*)(v64 + 136);
                  v69 = ((unsigned __int8)v68 ^
                         (unsigned __int8)*(_DWORD*)(v64 + 160)) &
                        0x3F;
                  *(_BYTE*)(v64 + 169) =
                      (((unsigned __int8)v68 ^
                        (unsigned __int8)*(_DWORD*)(v64 + 160)) &
                       0x3F) != 0;
                  if (v69 != 0) {
                    goto LABEL_94;
                  }
                }
                else {
                  *(_BYTE*)(v64 + 169) = 1;
                LABEL_94:
                  v70 = *(unsigned __int8*)(v64 + 20);
                  *(_BYTE*)(v64 + 20) = v70 & 0xFB;
                  if (v70 != (v70 & 0xFFFFFFFB)) {
                    *(_BYTE*)(*(_QWORD*)(v64 + 8) + 728LL) = 0;
                  }
                }
              }
              v63 = (_QWORD*)*v63;
              if (v63 == nullptr) {
                goto LABEL_97;
              }
              continue;
            }
          }
          v71 = *(_QWORD**)(v33 + 184);
          *(float*)(v33 + 160) = v38;
          *(_BYTE*)(v33 + 164) = 1;
          if (v71 == nullptr) {
            goto LABEL_97;
          }
          while (2) {
            v76 = v71[2];
            if (*(float*)(v76 + 132) == v38) {
              if ((*(_BYTE*)(v76 + 169) & 1) != 0) {
                goto LABEL_112;
              }
            }
            else {
              v77 = *(float*)(v76 + 120);
              v78 = *(float*)(v76 + 144);
              *(float*)(v76 + 132) = v38;
              if (v77 == v78 && *(float*)(v76 + 124) == *(float*)(v76 + 148) &&
                  (*(float*)(v76 + 128) == *(float*)(v76 + 152)
                       ? (v79 = v38 == *(float*)(v76 + 156))
                       : (v79 = false),
                   v79)) {
                v80 = *(_DWORD*)(v76 + 136);
                v81 = ((unsigned __int8)v80 ^
                       (unsigned __int8)*(_DWORD*)(v76 + 160)) &
                      0x3F;
                *(_BYTE*)(v76 + 169) =
                    (((unsigned __int8)v80 ^
                      (unsigned __int8)*(_DWORD*)(v76 + 160)) &
                     0x3F) != 0;
                if (v81 != 0) {
                  goto LABEL_112;
                }
              }
              else {
                *(_BYTE*)(v76 + 169) = 1;
              LABEL_112:
                v82 = *(unsigned __int8*)(v76 + 20);
                *(_BYTE*)(v76 + 20) = v82 & 0xFB;
                if (v82 != (v82 & 0xFFFFFFFB)) {
                  *(_BYTE*)(*(_QWORD*)(v76 + 8) + 728LL) = 0;
                }
              }
            }
            v71 = (_QWORD*)*v71;
            if (v71 == nullptr) {
              goto LABEL_97;
            }
            continue;
          }
        }
      }
      v54 = *(_QWORD*)(result + 48);
      ++v57;
      v56 += 3;
    }
  }
  if ((*(_BYTE*)(result + 216) & 1) == 0) {
    v3 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
    if (v3 != 0) {
      v4 = v3 >> 3;
      v5 = 0;
      v6 = (_QWORD*)GameData_2132398[0];
      do {
        v9 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v5);
        *(_QWORD*)(result + 96) = v9;
        *(_DWORD*)(v9 + 180) = v2;
        v10 = *(_QWORD*)(result + 96);
        v11 = *(_QWORD*)(v10 + 192);
        v12 = *(_QWORD*)(v10 + 200);
        if (v11 != v12) {
          v13 = *(_DWORD*)(*v6 + 112LL * *(int*)(v10 + 176) + 64) - 1;
          do {
            if ((*(_BYTE*)(v11 + 22) & 1) == 0) {
              *(_DWORD*)v11 = v13;
              *(_DWORD*)(v11 + 4) = v13;
              *(_DWORD*)(v11 + 8) = 1;
            }
            *(_DWORD*)(v11 + 16) = v13;
            *(_BYTE*)(v11 + 21) = 1;
            v11 += 24;
          } while (v11 != v12);
        }
        *(_BYTE*)(v10 + 186) = 1;
        v7 = 3 * v5++;
        *(_QWORD*)(result + 96) = 0;
        v8 = *(_QWORD*)(result + 136) + v7;
        *(_BYTE*)(v8 + 2) = 0;
        *(_WORD*)v8 = 0;
      } while (v5 != v4);
    }
    v25 = *(_QWORD**)(result + 184);
    *(_DWORD*)(result + 160) = 0;
    for (*(_BYTE*)(result + 164) = 0; v25 != nullptr; v25 = (_QWORD*)*v25) {
      v26 = v25[2];
      if (*(float*)(v26 + 132) == 1.0f) {
        if ((*(_BYTE*)(v26 + 169) & 1) != 0) {
          goto LABEL_44;
        }
      }
      else {
        v27 = *(float*)(v26 + 120);
        v28 = *(float*)(v26 + 144);
        *(_DWORD*)(v26 + 132) = 1065353216;
        if (v27 != v28 || *(float*)(v26 + 124) != *(float*)(v26 + 148) ||
            (*(float*)(v26 + 128) == *(float*)(v26 + 152)
                 ? (v29 = *(float*)(v26 + 156) == 1.0f)
                 : (v29 = false),
             !v29)) {
          *(_BYTE*)(v26 + 169) = 1;
        LABEL_44:
          v32 = *(unsigned __int8*)(v26 + 20);
          *(_BYTE*)(v26 + 20) = v32 & 0xFB;
          if (v32 != (v32 & 0xFFFFFFFB)) {
            *(_BYTE*)(*(_QWORD*)(v26 + 8) + 728LL) = 0;
          }
          continue;
        }
        v30 = *(_DWORD*)(v26 + 136);
        v31 = ((unsigned __int8)v30 ^ (unsigned __int8)*(_DWORD*)(v26 + 160)) &
              0x3F;
        *(_BYTE*)(v26 + 169) =
            (((unsigned __int8)v30 ^ (unsigned __int8)*(_DWORD*)(v26 + 160)) &
             0x3F) != 0;
        if (v31 != 0) {
          goto LABEL_44;
        }
      }
    }
    *(_BYTE*)(result + 216) = 1;
  }
  return result;
}

__int64 GameHr_b71ec0(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  _QWORD v31[4];
  _QWORD* v32;

  ((void (*)(__int64, __int64))*GameData_212e738)(*a3 + 8LL, 49);
  GameRoutine_5f040(a3[1]);
  GameRoutine_5f050(a3[1], *a3);
  v8 = a3[1];
  GameRoutine_5f070(v8, (unsigned int)GameData_21fdec4);
  GameRoutine_5f100(v8, (unsigned int)GameData_21fdee0);
  GameRoutine_5f200(v8, (unsigned int)GameData_21fdf10);
  GameRoutine_5f290(v8, (unsigned int)GameData_21fdf14);
  GameRoutine_5f060(a3[1]);
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a3 + 168LL))(*a3, 1);
  v9 = *a3;
  v10 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 64) + 16LL))(
      *(_QWORD*)(a1 + 64));
  v11 = v10 + 16LL * *(int*)(v10 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v9 + 224LL))(v9, 3, 1, *(_QWORD*)(v11 + 24),
                             *(_QWORD*)(v11 + 32));
  v12 = *(_QWORD*)(a1 + 72);
  if (v12 != 0) {
    v13 = *a3;
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    v15 = v14 + 16LL * *(int*)(v14 + 16);
    (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v13 + 224LL))(v13, 3, 3, *(_QWORD*)(v15 + 24),
                                *(_QWORD*)(v15 + 32));
  }
  v16 = *(_DWORD*)(a1 + 80);
  if (v16 < 1) {
    v29 = 0;
    goto LABEL_15;
  }
  v17 = 0;
  v18 = 0;
  do {
    if (((*(_QWORD*)(a4 + 8) >> v17) & 1) == 0) {
      v20 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8 * v17 + 24) + 16LL))(
          *(_QWORD*)(a1 + 8 * v17 + 24));
      v21 = v20 + 16LL * *(int*)(v20 + 16);
      (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a3 + 224LL))(*a3, 1, 0, *(_QWORD*)(v21 + 24),
                                  *(_QWORD*)(v21 + 32));
      v22 = *a3;
      v23 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 8 * v17) + 16LL))(
          *(_QWORD*)(a2 + 8 * v17));
      v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23);
      (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v22 + 112LL))(v22, v24,
                                                                       v25);
      LODWORD(v22) = *(_DWORD*)(a1 + 4 * v17);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a3 + 72LL))(*a3, 0, 0, (unsigned int)v22,
                                 (unsigned int)v22);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a3 + 88LL))(*a3, 0, 0, (unsigned int)v22,
                                 (unsigned int)v22);
      (*(void (**)(_QWORD, _QWORD, _QWORD, float))(*(_QWORD*)*a3 + 152LL))(
          *a3, 0, 0, 1.0f);
      v26 = *(_QWORD*)(a4 + 16 + 8 * v17);
      v27 = *(unsigned __int8*)(a4 + 60);
      v32 = v31;
      v31[0] = GameData_1fc7690;
      v31[1] = a4;
      v28 = GameRoutine_a738c0(v26, v31, v27);
      if (v32 == v31) {
        v19 = 32;
      }
      else {
        if (v32 == nullptr) {
          goto LABEL_7;
        }
        v19 = 40;
      }
      (*(void (**)(__int64))(*v32 + v19))((__int64)v32);
    LABEL_7:
      v18 += v28;
      GameRoutine_a73e50(v26, a3);
      v16 = *(_DWORD*)(a1 + 80);
    }
    ++v17;
  } while (v17 < v16);
  v29 = v18;
LABEL_15:
  (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)*a3 + 168LL))(*a3, 0);
  return v29;
}

__int64 GameHr_b782c0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                      __int64 a5)
{
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

  v9 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
  v12 = v11;
  v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
  (*(void (**)(_QWORD, __int64, __int64, __int64, __int64))(
      *(_QWORD*)*a4 + 104LL))(*a4, v10, v12, v14, v15);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 128), *(unsigned int*)(a5 + 132));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 128), *(unsigned int*)(a5 + 132));
  GameRoutine_5f040(a4[1]);
  GameRoutine_5f050(a4[1], *a4);
  v16 = a4[1];
  GameRoutine_5f070(v16, (unsigned int)GameData_21fdedc);
  GameRoutine_5f100(v16, (unsigned int)GameData_21fdee0);
  GameRoutine_5f200(v16, (unsigned int)GameData_21fdf0c);
  GameRoutine_5f290(v16, (unsigned int)GameData_21fdf14);
  GameRoutine_5f060(a4[1]);
  v17 = a1 + 16LL * *(int*)(a1 + 216);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *(_QWORD*)(v17 + 224),
                              *(_QWORD*)(v17 + 232));
  v18 = *a4;
  v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v20 = v19 + 16LL * *(int*)(v19 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v18 + 224LL))(v18, 3, 1, *(_QWORD*)(v20 + 24),
                              *(_QWORD*)(v20 + 32));
  if (*(_BYTE*)(a5 + 152) == 1) {
    v21 = *a4;
    v22 = *(_QWORD*)(a1 + 152);
  LABEL_10:
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)v21 + 200LL))(
        v21, 3, *(_QWORD*)(v22 + 144));
    goto LABEL_11;
  }
  v23 = *(_QWORD*)(a5 + 160);
  v24 = 128;
  if (*(_BYTE*)(v23 + 96) != 0) {
    v24 = 92;
  }
  if (*(float*)(v23 + v24) <= 0.00000011921f || *(_QWORD*)(a5 + 16) == 0 ||
      *(_DWORD*)(a5 + 24) == -1) {
    v21 = *a4;
    v22 = *(_QWORD*)(a1 + 136);
    goto LABEL_10;
  }
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 168) + 144LL));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 240LL))(*a4, 2, 3, *(_QWORD*)(a5 + 16),
                              *(_QWORD*)(a5 + 24));
LABEL_11:
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 248LL))(*a4, 2, 0, *(_QWORD*)a5, *(_QWORD*)(a5 + 8),
                              *(unsigned int*)(a1 + 128));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 240LL))(*a4, 2, 2, *(_QWORD*)(a1 + 184),
                              *(_QWORD*)(a1 + 192));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 240LL))(*a4, 2, 4, *(_QWORD*)(a5 + 32),
                              *(_QWORD*)(a5 + 40));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 2);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 14, 0);
}

float GameHr_c53ea0(__int64 a1)
{
  float v1;
  int v2;
  float v3;

  v1 = *(float*)(a1 + 64);
  v2 = *(_DWORD*)(a1 + 88);
  if (v2 == 3) {
    v3 = *(float*)(a1 + 288);
    goto LABEL_5;
  }
  if (v2 == 0) {
    v3 = *(float*)(a1 + 288) * 3.1416f;
  LABEL_5:
    v1 = v1 / (float)(v3 * *(float*)(a1 + 292));
  }
  return (float)(v1 * *(float*)(a1 + 72)) * (float)(*(float*)(a1 + 68) + 1.0f);
}

__int64 GameHr_c5fa00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  float v14;
  float v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(result + 48);
  v2 = *(_QWORD*)(result + 56);
  v3 = result;
  if (v1 != v2) {
    v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                               8LL) +
                    40LL);
    v5 = 296;
    if ((*(_BYTE*)(v4 + 352) & 1 | ((*(_BYTE*)(v4 + 344) & 1) == 0)) != 0) {
      v5 = 248;
    }
    v6 = 3600 * *(_DWORD*)(v4 + v5 + 36) + 60 * *(_DWORD*)(v4 + v5 + 40) +
         *(_DWORD*)(v4 + v5 + 44);
    do {
      if (*(_DWORD*)(v1 + 40) != v6) {
        result = *(_QWORD*)(v1 + 8);
        if (result != 0) {
          result = GameRoutine_1a0a0c0(result);
          if (result != 0) {
            if (*(_QWORD*)v1 != 0 && *(_BYTE*)(*(_QWORD*)v1 + 60LL) == 1) {
              v7 = *(__int64**)(v1 + 16);
              v8 = result;
              v9 = *(__int64**)(v1 + 24);
              *(_DWORD*)(v1 + 40) = v6;
              while (v7 != v9) {
                v10 = *v7;
                v7 += 2;
                GameRoutine_c51a60(v10, 0, (float)v6 / 3600.0f);
              }
              GameRoutine_c5fca0(v3, v1 + 16, 0, (float)v6 / 3600.0f);
              result = v8;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v11 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = GameRoutine_1a09c50(v11);
            }
          }
        }
      }
      v1 += 48;
    } while (v1 != v2);
  }
  v12 = *(_QWORD**)(v3 + 72);
  v13 = *(_QWORD**)(v3 + 80);
  if (v12 != v13) {
    v14 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 496LL) + 16LL) *
                  16.683f) /
          1000.0f;
    if (v14 != 0.0f) {
      v15 = v14 + *(float*)(v3 + 40);
      if (v15 > 86394.0f) {
        v15 = v15 + -86394.0f;
      }
      *(float*)(v3 + 40) = v15;
      do {
        result = v12[1];
        if (result != 0) {
          result = GameRoutine_1a0a0c0(result);
          if (result != 0) {
            if (*v12 != 0 && *(_BYTE*)(*v12 + 60LL) == 1) {
              v16 = (__int64*)v12[2];
              v17 = (__int64*)v12[3];
              v18 = result;
              while (v16 != v17) {
                v19 = *v16;
                v16 += 2;
                GameRoutine_c51a60(v19, 1, *(float*)(v3 + 40));
              }
              GameRoutine_c5fca0(v3, v12 + 2, 1, *(float*)(v3 + 40));
              result = v18;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v20 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = GameRoutine_1a09c50(v20);
            }
          }
        }
        v12 += 6;
      } while (v12 != v13);
    }
  }
  return result;
}

__int64 GameHr_cb90b0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v6;
  float* v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  _QWORD v13[2];

  v1 = *(_QWORD*)(result + 80);
  if (v1 != 0) {
    v2 = *(_QWORD*)(result + 72);
    v3 = *(_QWORD*)(result + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v4 = GameRoutine_1a0a0c0(v3);
    result = GameRoutine_1a09c50(v1);
    if (v4 != 0) {
      if (v2 != 0) {
        if (*(_DWORD*)(v2 + 1112) == 3 && *(_QWORD*)(v2 + 56) != 0) {
          v6 = 0.0f;
          v7 = *(float**)(*(_QWORD*)(v2 + 24) + 16LL);
          v8 = v7[92];
          v9 = (float)(v8 + (float)((float)(v7[91] - v8) * 0.5f)) - v8;
          if (v9 != 0.0f) {
            v10 = (float)(sqrtf((float)(v7[168] * v7[168]) +
                                (float)(v7[167] * v7[167])) -
                          v8) /
                  v9;
            v11 = 1.0f;
            if (v10 <= 1.0f) {
              v11 = v10;
            }
            if (v10 >= 0.0f) {
              v6 = v11;
            }
            else {
              v6 = 0.0f;
            }
          }
          GameRoutine_10c9b80((float)(fminf(fmaxf(v6, 0.0f), 1.0f) * 0.4f) +
                              0.1f);
        }
        v13[0] = v2;
        v13[1] = v4;
        v12 = *GameData_212ebc8[0];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_e1a6d0(v12, v13);
        result = GameRoutine_1a09c50(v4);
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

_QWORD* GameHr_ccaff0()
{
  bool v0;
  bool v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* result;
  __int64 v9;

  if (GameData_2212270 == 0 ||
      (GameData_21f3d10 != 0 ? (v0 = *(_BYTE*)(GameData_2212270 + 218) == 0)
                             : (v0 = true),
       !v0 ? (v1 = *(_DWORD*)(GameData_2212270 + 232) <= 0) : (v1 = false),
       !v1 || (*(_BYTE*)(GameData_2212270 + 240) & 1) != 0 ||
           *(_BYTE*)(GameData_2212270 + 139) != 0 ||
           *(int*)(GameData_21f3d10 + 152) > 0 ||
           (float)((float)(*(float*)(GameData_2265ef0 + 160) * 16.683f) /
                   1000.0f) <= 0.0f)) {
    v5 = GameData_21a60b0;
    v6 = *(_QWORD*)(v5 +
                    8LL * (*(unsigned int (**)(__int64))(
                              *(_QWORD*)GameData_21a6070 + 72LL))(
                              GameData_21a6070) +
                    4384);
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 472LL))(v6);
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)(v7 + 24) + 448LL))(*(_QWORD*)(v7 + 24), 0);
  }
  v2 = GameData_21a60b0;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  result = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (result == (_QWORD*)(v4 + 2208)) {
    v9 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v9 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v9))((__int64)result);
}

_QWORD* GameHr_ccb180()
{
  bool v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;

  if (*(int*)(*(_QWORD*)(GameData_21f3d10 + 216) + 252LL) < 1 ||
      GameData_2212270 == 0 ||
      (*(_BYTE*)(GameData_2212270 + 218) != 0
           ? (v0 = *(_DWORD*)(GameData_2212270 + 232) <= 0)
           : (v0 = false),
       !v0 || (*(_BYTE*)(GameData_2212270 + 240) & 1) != 0 ||
           *(_BYTE*)(GameData_2212270 + 139) != 0 ||
           *(int*)(GameData_21f3d10 + 152) > 0 ||
           (float)((float)(*(float*)(GameData_2265ef0 + 160) * 16.683f) /
                   1000.0f) <= 0.0f)) {
    v4 = GameData_21a60b0;
    v5 = *(_QWORD*)(v4 +
                    8LL * (*(unsigned int (**)(__int64))(
                              *(_QWORD*)GameData_21a6070 + 72LL))(
                              GameData_21a6070) +
                    4384);
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)(v6 + 24) + 448LL))(*(_QWORD*)(v6 + 24), 0);
  }
  v1 = GameData_21a60b0;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v2 != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  }
  else {
    v3 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v3 + 24) + 448LL))(
      *(_QWORD*)(v3 + 24), 1);
  result = *(_QWORD**)(v3 + 2240);
  *(_QWORD*)(v3 + 2240) = 0;
  if (result == (_QWORD*)(v3 + 2208)) {
    v8 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
}

__int64 GameHr_cded70(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  float* v6;
  float v7;
  float v8;
  int v9;
  int v11;
  __int16 v12;
  int v13;

  if (*(_BYTE*)(a1 + 80) == 1 && *(_BYTE*)(GameData_21f3d10 + 10) == 1) {
    v2 = *(_DWORD*)(a1 + 72);
    v3 = *(_DWORD*)(a1 + 76);
    v12 = 1;
    v11 = v2;
    v13 = v3;
    GameRoutine_cdeee0(a1, &v11);
    if (*(_BYTE*)(a1 + 80) == 1) {
      *(_BYTE*)(a1 + 80) = 0;
    }
  }
  if (GameData_21ee240 != 0 && *(_BYTE*)(GameData_21ee240 + 152) == 3) {
    v4 = *(_DWORD*)(GameData_21ee240 + 156);
    if ((v4 & 8) != 0) {
      v5 = 2;
    }
    else {
      v5 = 3;
    }
    v6 = (float*)(a1 + 8);
    if ((v5 & v4) == 0) {
      goto LABEL_18;
    }
  }
  else {
    v6 = (float*)(a1 + 8);
  }
  v7 = *v6;
  v8 = fabsf(
      (float)(*(float*)(*(_QWORD*)GameData_212c5c0[0] + 160LL) * 16.683f) /
      1000.0f);
  if (*v6 <= 0.0f) {
    if (*v6 >= 0.0f || (v7 = v7 + v8) <= 0.0f) {
    LABEL_19:
      *v6 = v7;
      if (v7 != 0.0f) {
        return GameRoutine_d97c00(*(_QWORD*)(a1 + 16), 0);
      }
      goto LABEL_20;
    }
  }
  else {
    v7 = v7 - v8;
    if (v7 >= 0.0f) {
      goto LABEL_19;
    }
  }
LABEL_18:
  *v6 = 0.0f;
LABEL_20:
  if (*(_DWORD*)(a1 + 64) != 0) {
    v9 = *(unsigned __int8*)(a1 + 68);
    *(_DWORD*)(a1 + 64) = 0;
    if (v9 != 0) {
      *(_BYTE*)(a1 + 68) = 0;
      GameRoutine_d8d1a0(GameData_21f3cb8);
    }
  }
  return GameRoutine_d97c00(*(_QWORD*)(a1 + 16), 0);
}

__int64 GameHr_ce37e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float v4;

  v1 = *(_QWORD*)(a1 + 32);
  v2 = *(_QWORD*)(a1 + 40);
  if (v1 != v2) {
    v4 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 496LL) + 16LL) *
                 16.683f) /
         1000.0f;
    do {
      GameRoutine_d2af80(v1, v4);
      v1 += 72;
    } while (v1 != v2);
  }
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 24) + 48LL))(
      *(_QWORD*)(a1 + 24));
}

__int64 GameHr_ceb940(__int64 result)
{
  float v1;
  __int64 v2;
  float v3;
  bool v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;

  v1 = *(float*)(result + 484);
  v2 = *(_QWORD*)(result + 384);
  if ((v2 & 0x8000000000LL) != 0) {
    v3 = 0.4f;
    v4 = v1 < 0.4f;
  }
  else {
    if (v1 <= 0.0f) {
      goto LABEL_8;
    }
    v1 = v1 - fabsf(*(float*)(*(_QWORD*)(result + 8) + 228LL));
    v3 = 0.0f;
    v4 = v1 < 0.0f;
  }
  if (v4) {
    v1 = v3;
  }
  *(float*)(result + 484) = v1;
LABEL_8:
  v5 = 0x10000000000LL;
  if (v1 <= 0.0f) {
    v5 = 0;
  }
  v6 = v5 | v2 & 0xFFFFFEFFFFFFFFFFLL;
  *(_QWORD*)(result + 384) = v6;
  if (v6 != v2) {
    v7 = *(_QWORD**)(result + 8);
    if (v7 != nullptr && v7[39] != 0) {
      v8 = v7[29];
      if (v8 != 0) {
        v9 = *(_DWORD*)(v8 + 340) & 0xFFFFFFFD |
             (2 * ((*(_DWORD*)(v7[2] + 384LL) & 2) != 0));
        *(_DWORD*)(v8 + 340) = v9;
        *(_DWORD*)(v8 + 340) = v9 & 0xFFFFFFFE |
                               ((*(_DWORD*)(v7[2] + 384LL) & 0x20) != 0) |
                               0x2000;
      }
    }
    v10 = result;
    result = GameRoutine_d0e440(*(_QWORD*)(result + 16), 1);
    v11 = *(_QWORD*)(v10 + 384);
    v12 = v11 >> 29;
    v13 = (unsigned int)v11 >> 1;
    if ((*(_QWORD*)(v10 + 384) & 0x40000000LL) != 0) {
      v14 = 33;
    }
    else {
      v14 = 1;
    }
    LODWORD(v15) = (v14 | v12 & 0x10 | v13 & 6) << 16;
    if (*(_QWORD*)(v10 + 168) != 0) {
      v15 = (unsigned int)v15 | 0x80000;
    }
    else {
      v15 = (unsigned int)v15;
    }
    *(_QWORD*)(v10 + 440) = v15 + *(unsigned int*)(v10 + 184);
  }
  return result;
}

bool GameHr_cfd990(__int64 a1, float* a2)
{
  __int64 v2;
  float v3;
  __int64 v5;
  __int64 v6;
  char v7;
  _BOOL8 result;
  float v9;
  bool v10;
  float v11;
  _QWORD v12[2];
  _QWORD v13[2];
  __int64 v14;
  float v15;
  char v16;
  float v17;
  char v18;
  char v19;

  v2 = *((_QWORD*)a2 + 1);
  v3 = a2[1];
  v13[0] = *(_QWORD*)a2;
  v13[1] = v2;
  v5 = *(_QWORD*)a2;
  v6 = *((_QWORD*)a2 + 1);
  *((float*)v13 + 1) = v3 + 2.0f;
  v12[0] = v5;
  v12[1] = v6;
  LOBYTE(v5) = *(_BYTE*)(a1 + 57);
  *((float*)v12 + 1) = v3 + -2.0f;
  if ((v5 & 1) == 0) {
    *(_BYTE*)(a1 + 57) = 1;
  }
  *(struct PseudoSret*)(&v14) = GameRoutine_cfdb00(a1, v13, v12, 1);
  v7 = v14;
  if (*(_BYTE*)(a1 + 57) != 0) {
    *(_BYTE*)(a1 + 57) = 0;
  }
  result = false;
  if ((v7 & 1) != 0 && (v18 & 1) != 0 && (v16 & 1) != 0) {
    v9 = vabds_f32(v17, *((float*)&v14 + 1));
    v10 = vabds_f32(v15, *((float*)&v14 + 1)) < 0.01f && v9 < 0.01f;
    result = false;
    if (v10) {
      GameRoutine_6725f0(v13, v12, 2, 0.45f);
      if ((v19 & 1) == 0) {
        return true;
      }
      v11 = *((float*)&v14 + 1);
      GameRoutine_6725f0(v13, v12, 3, 0.45f);
      if (v19 != 1 || (float)(v11 + 0.1f) < *((float*)&v14 + 1)) {
        return true;
      }
    }
  }
  return result;
}

float* GameHr_d14fc0(float* result)
{
  float v1;
  __int128 v2;
  __int64 v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;

  v1 = 1.0f;
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)result + 600LL) + 16LL);
  if ((*(_BYTE*)(*(_QWORD*)(v3 + 8) + 387LL) & 0x40) != 0) {
    v1 = sqrtf((float)(*(float*)(v3 + 672) * *(float*)(v3 + 672)) +
               (float)(*(float*)(v3 + 668) * *(float*)(v3 + 668))) /
         5.0f;
    if (v1 > 1.0f) {
      v1 = 1.0f;
    }
  }
  v4 = fminf(fmaxf(result[18], 0.0f), 1.0f);
  v5 = fminf(fmaxf(v1, 0.0f), 1.0f);
  v6 =
      (float)(fminf(fmaxf(*(float*)(*(_QWORD*)(*(_QWORD*)result + 144LL) + 8LL),
                          0.0f),
                    1.0f) *
              0.2f) +
      0.1f;
  v2 = *(_OWORD*)(*(_QWORD*)(*(_QWORD*)result + 16LL) + 560LL);
  v7 = sqrtf((float)((float)(result[3] - *((float*)&v2 + 2)) *
                     (float)(result[3] - *((float*)&v2 + 2))) +
             (float)((float)(result[2] - *(float*)&v2) *
                     (float)(result[2] - *(float*)&v2)));
  v8 = v7 / 3.0f;
  if ((float)(v7 / 3.0f) > 1.0f) {
    v8 = 1.0f;
  }
  v9 = v6 + (float)(v5 * (float)(1.0f - v6));
  v10 = v7 * 0.125f;
  v11 = (float)((float)(v4 * 0.2f) + 0.9f) *
        (float)((float)(fminf(fmaxf(v8, 0.0f), 1.0f) * 0.3f) + 1.0f);
  if (v10 > 1.0f) {
    v10 = 1.0f;
  }
  v12 =
      v11 *
      (float)(v9 + (float)(fminf(fmaxf(v10, 0.0f), 1.0f) * (float)(1.0f - v9)));
  if (v12 > 2.0f) {
    v12 = 2.0f;
  }
  result[31] = v12;
  return result;
}

_QWORD* GameHr_d314f0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int128 v4;
  __int128 v5;
  float v6;
  float v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* result;
  atomic_ullong* v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
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
  int v32;

  v2 = (__int64*)GameData_212dc38[0];
  GameRoutine_a7fda0(a1 + 80, *(_QWORD*)GameData_212dc38[0] + 16LL);
  v3 = *(_QWORD*)(a1 + 912);
  v4 = *(_OWORD*)(*(_QWORD*)(v3 + 8) + 112LL);
  *(_QWORD*)(v3 + 16) = v4;
  v5 = *(_OWORD*)(v3 + 16);
  *((_QWORD*)&v5 + 1) = DWORD2(v4);
  *(_OWORD*)(v3 + 16) = v5;
  LODWORD(v5) = *(_DWORD*)(a1 + 164);
  LODWORD(v4) = *(_DWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 516) = 0x42440000C1200000LL;
  *(_DWORD*)(a1 + 524) = 1065353216;
  *(_DWORD*)(a1 + 836) = v4;
  *(_DWORD*)(a1 + 832) = v5;
  v6 = *(float*)(a1 + 628);
  v7 = 3.5f;
  v8 = *(_QWORD*)GameData_212d310;
  v9 = *(_DWORD*)(*(_QWORD*)GameData_212d310 + 48LL);
  if ((v9 & 2) == 0) {
    v7 = *(float*)(a1 + 628);
  }
  if ((v9 & 4) != 0) {
    v7 = 2.0f;
  }
  if (v7 >= v6) {
    v6 = v7;
  }
  *(float*)(a1 + 628) = v6;
  v10 = *(_DWORD*)(v8 + 48);
  if ((v10 & 0x20) != 0) {
    *(_BYTE*)(a1 + 632) = 1;
    v10 = *(_DWORD*)(v8 + 48);
  }
  if ((v10 & 0x10) != 0) {
    *(_DWORD*)(a1 + 536) = 1065353216;
  }
  v11 = *v2;
  *(_DWORD*)(a1 + 1108) = *(_DWORD*)(a1 + 500);
  *(_DWORD*)(a1 + 1112) = *(_DWORD*)(a1 + 512);
  v12 = *(_QWORD*)(v11 + 1128);
  if (v12 != 0) {
    *(_QWORD*)(v11 + 1128) = 0;
  }
  else {
    v12 = *(_QWORD*)(*GameData_212eba8[0] + 56);
  }
  result = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 112, 16, 0);
  result[1] = 0;
  v14 = (atomic_ullong*)(result + 1);
  result[2] = 0;
  v15 = result;
  v16 = GameData_212edb0[0];
  *((_BYTE*)result + 48) = 0;
  *((_BYTE*)result + 64) = 0;
  result[10] = 0;
  result[11] = 0;
  result[4] = v12;
  *result = v16 + 2;
  *((_BYTE*)result + 96) = 1;
  *(_QWORD*)(a1 + 1116) = 0x3F8000003ECCCCCDLL;
  v17 = GameData_212c6a0[0];
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 720LL) != 0) {
    v18 = *(unsigned __int8*)(*(_QWORD*)GameData_212c6a0[0] + 720LL);
  }
  else {
    v18 = 3;
  }
  if (*(_DWORD*)(a1 + 992) != v18) {
    *(_DWORD*)(a1 + 992) = v18;
    *(_QWORD*)(a1 + 1100) = 0;
    *(struct PseudoSret*)(&v26) = GameRoutine_d31ee0(a1);
    v19 = v31;
    *(_QWORD*)(a1 + 1028) = v30;
    *(_QWORD*)(a1 + 1036) = v19;
    v20 = v27;
    *(_DWORD*)(a1 + 1044) = v32;
    *(_QWORD*)(a1 + 996) = v26;
    *(_QWORD*)(a1 + 1004) = v20;
    v21 = v29;
    *(_QWORD*)(a1 + 1012) = v28;
    *(_QWORD*)(a1 + 1020) = v21;
    result =
        (*(struct PseudoSret*)(&v26) = GameRoutine_d31ee0(a1), (void*)(&v26));
    v22 = v31;
    v23 = v28;
    *(_QWORD*)(a1 + 1072) = v29;
    v24 = v30;
    *(_QWORD*)(a1 + 1088) = v22;
    v25 = v27;
    *(_QWORD*)(a1 + 1064) = v23;
    *(_QWORD*)(a1 + 1080) = v24;
    LODWORD(v24) = v32;
    *(_QWORD*)(a1 + 1056) = v25;
    *(_DWORD*)(a1 + 1096) = v24;
    *(_QWORD*)(a1 + 1048) = v26;
    *(_BYTE*)(*(_QWORD*)v17 + 720LL) = v18;
  }
  if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v15 + 16LL))(v15);
    return (_QWORD*)GameRoutine_1a09c50(v15);
  }
  return result;
}

__int64 GameHr_d32860(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  float v15;
  float v16;
  float v17;
  float v18;
  char v19;
  float v20;
  __int64 v21;
  int v22;

  v2 = (__int64*)GameData_212dc38[0];
  result = GameRoutine_a7fda0(a1 + 80, *(_QWORD*)GameData_212dc38[0] + 16LL);
  v4 = *(_QWORD*)(a1 + 912);
  v5 = *(_OWORD*)(*(_QWORD*)(v4 + 8) + 112LL);
  *(_QWORD*)(v4 + 16) = v5;
  v6 = *(_OWORD*)(v4 + 16);
  *((_QWORD*)&v6 + 1) = DWORD2(v5);
  *(_OWORD*)(v4 + 16) = v6;
  LODWORD(v6) = *(_DWORD*)(a1 + 164);
  LODWORD(v5) = *(_DWORD*)(a1 + 168);
  v7 = *(_QWORD*)(a1 + 888);
  *(_DWORD*)(a1 + 544) = 1050253722;
  *(_QWORD*)(a1 + 516) = 0x42480000C2480000LL;
  v8 = *(__int64**)(a1 + 880);
  *(_DWORD*)(a1 + 836) = v5;
  *(_DWORD*)(a1 + 832) = v6;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v9 = *v8;
    if (v9 == 0 || GameData_220b6f0 == 0) {
      goto LABEL_16;
    }
    v10 = *(_QWORD**)(GameData_220b6f0 + 8);
    v11 = *(_QWORD**)(GameData_220b6f0 + 16);
    if (v10 != v11) {
      while (*v10 != v9) {
        v10 += 2;
        if (v10 == v11) {
          goto LABEL_16;
        }
      }
    }
    if (v10 != v11) {
      v15 = *(float*)(v9 + 560);
    }
    else {
    LABEL_16:
      v15 = 1.4f;
      if (*GameData_212eda8[0] == 0) {
        v15 = 0.0f;
      }
    }
    *(_BYTE*)(a1 + 560) = 1;
    *(float*)(a1 + 556) = v15 + 0.1f;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      result = GameRoutine_1a09c50(v7);
    }
  }
  else {
    v12 = *v8;
    if (v12 == 0 || GameData_220b6f0 == 0) {
      goto LABEL_22;
    }
    v13 = *(_QWORD**)(GameData_220b6f0 + 8);
    v14 = *(_QWORD**)(GameData_220b6f0 + 16);
    if (v13 != v14) {
      while (*v13 != v12) {
        v13 += 2;
        if (v13 == v14) {
          goto LABEL_22;
        }
      }
    }
    if (v13 != v14) {
      v16 = *(float*)(v12 + 560);
    }
    else {
    LABEL_22:
      v16 = 1.4f;
      if (*GameData_212eda8[0] == 0) {
        v16 = 0.0f;
      }
    }
    *(_BYTE*)(a1 + 560) = 1;
    *(float*)(a1 + 556) = v16 + 0.1f;
  }
  v17 = *(float*)(a1 + 500);
  v18 = *(float*)(a1 + 512);
  *(_DWORD*)(a1 + 836) = 0;
  v19 = *(_BYTE*)(a1 + 992);
  *(float*)(a1 + 500) = v17 * 0.64f;
  v20 = *(float*)(a1 + 492);
  *(float*)(a1 + 512) = v18 * 0.96f;
  *(float*)(a1 + 492) = v20 * 1.25f;
  *(float*)(a1 + 504) = *(float*)(a1 + 504) * 1.25f;
  *(float*)(a1 + 528) = *(float*)(a1 + 528) * 0.5f;
  *(float*)(a1 + 524) = *(float*)(a1 + 524) * 0.5f;
  if ((v19 & 1) == 0) {
    v21 = *v2;
    *(_BYTE*)(a1 + 992) = 1;
    if ((*(_BYTE*)(v21 + 1144) & 1) == 0) {
      *(_BYTE*)(v21 + 1144) = 1;
      *(_DWORD*)(v21 + 1148) = 0;
      result = GameData_21d96b8;
      v22 = *(_DWORD*)(GameData_21d96b8 + 24);
      *(_DWORD*)(GameData_21d96b8 + 24) = v22 + 1;
      if (v22 == 0) {
        return (**(__int64 (***)(__int64))(result + 16))(result + 16);
      }
    }
  }
  return result;
}

_QWORD* GameHr_d4da40(_QWORD* result)
{
  _QWORD* v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* i;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;

  v1 = result;
  if (*GameData_212ee20[0] != 0) {
    v2 = (__int64*)result[3];
    v3 = (__int64*)result[4];
    if (v2 == v3) {
      goto LABEL_26;
    }
    while (1) {
      v5 = *v2;
      v4 = v2[1];
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v5 == 0) {
        goto LABEL_22;
      }
      if (*(_BYTE*)(v5 + 156) == 1 && (*(_BYTE*)(v5 + 176) & 1) == 0) {
        v6 = *(float*)(v5 + 152);
        if (v6 > 0.0f) {
          v7 =
              v6 -
              fabsf(
                  (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 168) +
                                                          8LL) +
                                               496LL) +
                                    16LL) *
                          16.683f) /
                  1000.0f);
          if (v7 < 0.0f) {
            *(_DWORD*)(v5 + 152) = 0;
            *(_BYTE*)(v5 + 156) = 1;
          LABEL_14:
            if ((*(_BYTE*)(v5 + 233) & 1) == 0) {
              v9 = *(_QWORD*)(v5 + 288);
              v8 = *(_QWORD*)(v5 + 296);
              while (v9 != v8) {
                result = *(_QWORD**)(v9 + 32);
                if (result != nullptr) {
                  result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 48LL))(
                      result);
                }
                v9 += 48;
              }
              *(_BYTE*)(v5 + 233) = 1;
            }
            goto LABEL_21;
          }
          *(float*)(v5 + 152) = v7;
          *(_BYTE*)(v5 + 156) = 1;
          if (v7 == 0.0f) {
            goto LABEL_14;
          }
        }
      }
    LABEL_21:
      *(_BYTE*)(v5 + 176) = 0;
    LABEL_22:
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        result = (_QWORD*)GameRoutine_1a09c50(v4);
      }
      v2 += 2;
      if (v2 == v3) {
        v2 = (__int64*)v1[3];
        v3 = (__int64*)v1[4];
      LABEL_26:
        v10 = v2;
        if (v2 != v3) {
          v10 = v2;
          while (*v10 != 0) {
            v10 += 2;
            if (v10 == v3) {
              goto LABEL_48;
            }
          }
        }
        if (v10 != v3) {
          v11 = v10 + 2;
          if (v10 + 2 != v3) {
            do {
              v12 = *v11;
              if (*v11 != 0) {
                v13 = v11[1];
                *v11 = 0;
                v11[1] = 0;
                v14 = v10[1];
                *v10 = v12;
                v10[1] = v13;
                if (v14 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
                  result = (_QWORD*)GameRoutine_1a09c50(v14);
                }
                v10 += 2;
              }
              v11 += 2;
            } while (v11 != v3);
            v2 = (__int64*)v1[3];
            v3 = (__int64*)v1[4];
          }
        }
        if (v10 == v3) {
        LABEL_48:
          v10 = v3;
          if (v2 != v3) {
            goto LABEL_56;
          }
        LABEL_68:
          if (v2 != v10) {
            v21 = v2 + 2;
            if (v2 + 2 != v10) {
              while (2) {
                v22 = *v21;
                v23 = v21[1];
                if (v23 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8),
                                            1u, memory_order_relaxed);
                }
                if (*(_BYTE*)(v22 + 156) == 1 && *(float*)(v22 + 152) == 0.0f) {
                  v24 = 1;
                  if (v23 == 0) {
                  LABEL_81:
                    if ((v24 & 1) == 0) {
                      goto LABEL_82;
                    }
                    goto LABEL_72;
                  }
                }
                else {
                  v24 = 0;
                  if (v23 == 0) {
                    goto LABEL_81;
                  }
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) != 0) {
                  goto LABEL_81;
                }
                (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
                result = (_QWORD*)GameRoutine_1a09c50(v23);
                if ((v24 & 1) == 0) {
                LABEL_82:
                  v25 = *v21;
                  v26 = v21[1];
                  *v21 = 0;
                  v21[1] = 0;
                  v27 = v2[1];
                  *v2 = v25;
                  v2[1] = v26;
                  if (v27 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
                    result = (_QWORD*)GameRoutine_1a09c50(v27);
                  }
                  v2 += 2;
                }
              LABEL_72:
                v21 += 2;
                if (v21 == v10) {
                  break;
                }
                continue;
              }
            }
          }
        LABEL_87:
          v28 = (__int64*)v1[4];
          if (v2 != v28) {
            do {
              v29 = *(v28 - 1);
              if (v29 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
                result = (_QWORD*)GameRoutine_1a09c50(v29);
              }
              v28 -= 2;
            } while (v28 != v2);
            goto LABEL_93;
          }
          return result;
        }
        do {
          v17 = *(v3 - 1);
          if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            result = (_QWORD*)GameRoutine_1a09c50(v17);
          }
          v3 -= 2;
        } while (v3 != v10);
        v2 = (__int64*)v1[3];
        v1[4] = v10;
        if (v2 == v10) {
          goto LABEL_68;
        }
      LABEL_56:
        while (2) {
          v18 = *v2;
          v19 = v2[1];
          if (v19 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (*(_BYTE*)(v18 + 156) == 1 && *(float*)(v18 + 152) == 0.0f) {
            v20 = 1;
            if (v19 == 0) {
              goto LABEL_65;
            }
          }
          else {
            v20 = 0;
            if (v19 == 0) {
              goto LABEL_65;
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            result = (_QWORD*)GameRoutine_1a09c50(v19);
          }
        LABEL_65:
          if ((v20 & 1) != 0) {
            goto LABEL_68;
          }
          v2 += 2;
          if (v2 == v10) {
            v2 = v10;
            goto LABEL_87;
          }
          continue;
        }
      }
    }
  }
  v2 = (__int64*)result[3];
  for (i = (__int64*)result[4]; i != v2; i -= 2) {
    v16 = *(i - 1);
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      result = (_QWORD*)GameRoutine_1a09c50(v16);
    }
  }
LABEL_93:
  v1[4] = v2;
  return result;
}

float GameHr_d78cb0(float* a1, float a2)
{
  void* v3;
  float v4;
  __int64 v5;
  float v6;
  int v7;
  __int64 v8;
  float result;
  __int64 v10;
  void* v11;

  if (fabsf(a2) >= 0.00000011921f) {
    v11 = &GameData_1af1e76;
    v4 = 0.0f;
    v10 = GameRoutine_7a86e0(&GameData_1af1e76);
    if (GameData_21caab0 != 0) {
      v5 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v10);
      if (v5 != 0) {
        v4 = (float)*(int*)(v5 + 32);
      }
    }
    v6 = v4 / 100.0f;
  }
  else {
    if (*(_BYTE*)(GameData_2265ed8 + 805) == 1 &&
        (*(_BYTE*)(GameData_2265ed8 + 756) & 2) != 0) {
      v3 = &GameData_1ae2ba3;
    }
    else {
      v3 = &GameData_1ad35e8;
    }
    v11 = v3;
    v10 = GameRoutine_7a86e0(v3);
    v7 = GameData_21caab0;
    if (GameData_21caab0 != 0) {
      v8 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &v10);
      if (v8 != 0) {
        v7 = *(_DWORD*)(v8 + 32);
      }
      else {
        v7 = 0;
      }
    }
    v6 = (float)((float)v7 / 100.0f) *
         fmaxf(GameRoutine_d28060(GameData_220f848), 1.0f);
  }
  result = v6 * *a1;
  *a1 = result;
  return result;
}

__int64 GameHr_d96be0(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  int v10;
  int v11;

  v1 = *(__int64**)(result + 8);
  v2 = *(__int64**)(result + 16);
  if (v1 != v2) {
    v3 = GameData_21ee240;
    v4 = *(_QWORD*)GameData_212c5c0[0];
    while (1) {
      v6 = *v1;
      if (*(_BYTE*)(*v1 + 16) != 0) {
        break;
      }
    LABEL_5:
      v1 += 2;
      if (v1 == v2) {
        return result;
      }
    }
    v7 = (float)(*(float*)(v4 + 160) * 16.683f) / 1000.0f;
    v5 = *(float*)(v6 + 20);
    v8 = *(float*)(v6 + 24);
    v9 = fabsf(v7 * *(float*)(v6 + 28));
    if (v5 <= v8) {
      if (v5 >= v8 || (v5 = v5 + v9) <= v8) {
      LABEL_13:
        *(float*)(v6 + 20) = v5;
        if (v3 != 0 && *(_BYTE*)(v3 + 152) == 3) {
          v10 = *(_DWORD*)(v3 + 156);
          v11 = (v10 & 8) != 0 ? 2 : 3;
          if ((v11 & v10) == 0) {
            if ((*(_BYTE*)(*(_QWORD*)v6 + 12LL) & 1) == 0) {
              *(_DWORD*)(v6 + 32) = *(_DWORD*)(*(_QWORD*)v6 + 8LL);
            }
            v5 = v8;
            *(float*)(v6 + 20) = v8;
          }
        }
        *(float*)(v6 + 32) = *(float*)(v6 + 32) + (float)(v7 * v5);
        goto LABEL_5;
      }
    }
    else {
      v5 = v5 - v9;
      if (v5 >= v8) {
        goto LABEL_13;
      }
    }
    v5 = *(float*)(v6 + 24);
    goto LABEL_13;
  }
  return result;
}

__int64 GameHr_e2c300(__int64 result)
{
  float v1;
  float v2;
  int v3;
  __int64 v4;
  __int64 v5;

  if (*(_BYTE*)(result + 104) == 1) {
    v1 = *(float*)(result + 100);
    v2 = fabsf(
        (float)(*(float*)(*(_QWORD*)GameData_212c5c0[0] + 160LL) * 16.683f) /
        1000.0f);
    if (v1 <= 0.0f) {
      if (v1 >= 0.0f || (v1 = v1 + v2) <= 0.0f) {
      LABEL_8:
        *(float*)(result + 100) = v1;
        if (v1 != 0.0f) {
          return result;
        }
        goto LABEL_9;
      }
    }
    else {
      v1 = v1 - v2;
      if (v1 >= 0.0f) {
        goto LABEL_8;
      }
    }
    *(_DWORD*)(result + 100) = 0;
  LABEL_9:
    v3 = *(_DWORD*)(result + 80);
    *(_BYTE*)(result + 104) = 0;
    if (v3 != 3) {
      v4 = *(_QWORD*)(result + 16);
      v5 = result;
      *(_DWORD*)(result + 80) = 3;
      GameRoutine_e2cfa0(result, v4);
      GameRoutine_e2cfa0(v5, *(_QWORD*)(v5 + 24));
      return GameRoutine_e2cfa0(v5, *(_QWORD*)(v5 + 32));
    }
  }
  return result;
}

__int64 GameHr_e35800(__int64 result, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  float v23;
  float v24;
  __int64 v25;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD**)(v2 + 40);
  v4 = v3[9];
  if (v4 != 0) {
    v5 = v3[15];
    v6 = *(_QWORD*)(v4 + 120);
    v7 = *(float*)(v6 + 16);
    v8 = *(float*)(v6 + 20);
    v9 = v8 - *(float*)(v5 + 20);
    v10 = v7 - *(float*)(v5 + 16);
    v11 = (float)(v9 * v9) + (float)(v10 * v10);
    if (v11 >= 0.00000011921f) {
      v14 = 1.0f / sqrtf(v11);
      v13 = v10 * v14;
      v12 = v9 * v14;
    }
    else {
      v12 = 1.0f;
      v13 = 0.0f;
    }
    v15 = *(float*)(*(_QWORD*)a2 + 32LL);
    result = GameRoutine_e41bc0(v3[13]);
    if (result != 0) {
      v16 = fabsf(v15);
      v17 = v16 * v13;
      v18 = v16 * v12;
      v19 = v7 - v17;
      v20 = v8 - v18;
      result = GameRoutine_107a7e0();
      v21 = *(float*)(result + 4);
      v22 = *(_QWORD*)(*(_QWORD*)(v2 + 40) + 120LL);
      *(_QWORD*)(v22 + 120) = 0;
      if (v21 <= 0.0f) {
        *(float*)(v22 + 24) = v19;
        *(float*)(v22 + 28) = v20;
        *(float*)(v22 + 16) = v19;
        *(float*)(v22 + 20) = v20;
        v25 = *(_QWORD*)(v22 + 8);
        *(_DWORD*)(v22 + 116) = 0;
        *(_QWORD*)(v22 + 40) = 0;
        *(_QWORD*)(v22 + 80) = 0;
        *(_QWORD*)(v22 + 88) = 0;
        return GameRoutine_e3f8b0(v25);
      }
      else {
        v23 = *(float*)(v22 + 16);
        v24 = *(float*)(v22 + 20);
        *(_QWORD*)(v22 + 80) = 0;
        *(_QWORD*)(v22 + 88) = 0;
        *(float*)(v22 + 24) = v19;
        *(float*)(v22 + 28) = v20;
        *(_DWORD*)(v22 + 116) = 3;
        *(float*)(v22 + 80) = v21;
        *(float*)(v22 + 40) = v23;
        *(float*)(v22 + 44) = v24;
        *(float*)(v22 + 32) = (float)(1.0f / v21) * (float)(v19 - v23);
        *(float*)(v22 + 36) = (float)(1.0f / v21) * (float)(v20 - v24);
      }
    }
  }
  return result;
}

float GameHr_e35ad0(__int64 a1)
{
  _QWORD* v1;
  float v2;
  __int64 v3;
  __int64 v5;
  float result;

  v1 = *(_QWORD**)(a1 + 40);
  v2 = 0.0f;
  v3 = v1[6];
  if (v3 != 0 && *(_QWORD*)(v3 + 8) != -1 && v1[7] != 0) {
    v5 = v1[1];
    if (v5 != 0) {
      v2 = (float)(*(float*)(*(_QWORD*)(v5 + 496) + 16LL) * 16.683f) / 1000.0f;
    }
  }
  result = *(float*)(a1 + 52) - v2;
  *(float*)(a1 + 52) = result;
  return result;
}

__int64 GameHr_e36820(__int64 result)
{
  _QWORD* v1;
  float v2;
  float v3;
  __int64 v4;
  __int64 v6;
  float v7;

  *(_BYTE*)(result + 92) = 1;
  if (*(_BYTE*)(result + 88) == 1) {
    v1 = *(_QWORD**)(result + 40);
    v2 = *(float*)(result + 84);
    v3 = 0.0f;
    v4 = v1[6];
    if (v4 != 0 && *(_QWORD*)(v4 + 8) != -1 && v1[7] != 0) {
      v6 = v1[1];
      if (v6 != 0) {
        v3 =
            (float)(*(float*)(*(_QWORD*)(v6 + 496) + 16LL) * 16.683f) / 1000.0f;
      }
    }
    v7 = fabsf(v3);
    if (v2 <= 0.0f) {
      if (v2 >= 0.0f) {
        goto LABEL_15;
      }
      v2 = v2 + v7;
      if (v2 <= 0.0f) {
        goto LABEL_15;
      }
    }
    else {
      v2 = v2 - v7;
      if (v2 >= 0.0f) {
        goto LABEL_15;
      }
    }
    v2 = 0.0f;
  LABEL_15:
    *(float*)(result + 84) = v2;
    *(_BYTE*)(result + 88) = 1;
  }
  return result;
}

__int64 GameHr_e81bb0(__int64 a1)
{
  float v1;
  _QWORD* v3;
  __int64 v4;

  v1 = *(float*)(a1 + 160);
  *(_QWORD*)a1 = GameData_1fe8378;
  if (v1 > 0.0f) {
    GameRoutine_7a96a0(1.0f);
  }
  v3 = *(_QWORD**)(a1 + 208);
  if (v3 == (_QWORD*)(a1 + 176)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_8:
  *(_QWORD*)a1 = GameData_1f8f7e8;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  GameRoutine_65a940(a1);
  return GameRoutine_658c00(a1 + 88);
}

_QWORD* GameHr_ec6950(char a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  _BYTE v8[200];

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  result = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (result == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
LABEL_9:
  if ((a1 & 1) != 0) {
    if (GameData_21caab0 == 0 || *(_DWORD*)(GameData_21caab0 + 60) != 3) {
      v7 = *(_QWORD*)(*GameData_212d468[0] + 8);
      GameRoutine_10cb00(v8, "FadeTime_BGM_Elevator_Down");
    LABEL_16:
      GameRoutine_d9db0(v7, v8, 0.0f);
      return (_QWORD*)GameRoutine_10cff0(v8);
    }
  }
  else if (GameData_21caab0 == 0 || *(_DWORD*)(GameData_21caab0 + 60) != 3) {
    v7 = *(_QWORD*)(*GameData_212d468[0] + 8);
    GameRoutine_10c830(v8, 1000.0f);
    goto LABEL_16;
  }
  return result;
}

__int64 GameHr_ed68d0(char a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  atomic_ullong* v16;
  char v17;
  __int64 v18;
  __int64 result;
  _QWORD v20[2];
  _QWORD v21[2];

  v4 = *GameData_212c370;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v9 = GameData_2203490;
  v10 = *(_QWORD*)(GameData_2203490 + 752);
  v11 = *(_QWORD*)(GameData_2203490 + 760);
  if ((a1 & 1) == 0) {
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                memory_order_relaxed);
    }
    v14 = *(_QWORD*)(v9 + 880);
    v15 = *(_QWORD*)(v9 + 888);
    if (v15 == 0) {
      v18 = 0;
      v17 = 1;
      v12 = v10;
      if (v11 == 0) {
        goto LABEL_26;
      }
      goto LABEL_25;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
    v13 = v11;
    v12 = v10;
    v11 = v15;
    goto LABEL_20;
  }
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
  }
  v12 = *(_QWORD*)(v9 + 880);
  v13 = *(_QWORD*)(v9 + 888);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  if (v11 != 0) {
    v14 = v10;
  LABEL_20:
    v16 = (atomic_ullong*)(v11 + 16);
    v17 = 0;
    v18 = v11;
    v11 = v13;
    atomic_fetch_add_explicit(v16, 1u, memory_order_relaxed);
    if (v13 == 0) {
      goto LABEL_26;
    }
  LABEL_25:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_26;
  }
  v18 = 0;
  v17 = 1;
  v11 = v13;
  v14 = v10;
  if (v13 != 0) {
    goto LABEL_25;
  }
LABEL_26:
  v21[0] = v14;
  v21[1] = v18;
  if ((v17 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
  }
  v20[0] = v12;
  v20[1] = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_e7fde0(v9 + 16, v21, v20, 0, a2, 0.0f);
    result = GameRoutine_1a09c50(v11);
    if ((v17 & 1) != 0) {
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  result = GameRoutine_e7fde0(v9 + 16, v21, v20, 0, a2, 0.0f);
  if ((v17 & 1) == 0) {
  LABEL_30:
    result = GameRoutine_1a09c50(v18);
  }
LABEL_31:
  if (v11 != 0) {
    result = GameRoutine_1a09c50(v11);
  }
  if ((v17 & 1) == 0) {
    result = GameRoutine_1a09c50(v18);
  }
  if (v11 != 0) {
    result = GameRoutine_1a09c50(v11);
  }
  if ((v17 & 1) == 0) {
    return GameRoutine_1a09c50(v18);
  }
  return result;
}

void GameHr_efd7b0()
{
  float v0;

  v0 = *(float*)(*(_QWORD*)GameData_212dbf0[0] + 140LL);
  if (v0 < 0.4f) {
    v0 = 0.4f;
  }
  *(float*)(*(_QWORD*)GameData_212dbf0[0] + 140LL) = v0;
}

__int64 GameHr_f104c0(__int64 result, __int64 a2, atomic_uint* a3)
{
  int v3;
  void* v4;
  unsigned int v5;
  signed int add;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned int v15;
  char* v16;
  char* v17;
  unsigned int v18;
  char* v19;
  char* v20;
  __int64 v21;
  unsigned int v22;
  char* v23;
  char* v24;
  unsigned __int64 i;
  unsigned __int64 v26;
  unsigned int v27;
  char* v28;
  char* v29;
  unsigned __int8* v30;
  bool v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  _DWORD* v35;
  __int64 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  unsigned __int8* v40;
  int v41;
  int v42;
  char* v43;
  char* v44;
  unsigned __int8* v45;
  unsigned int v46;
  int v47;
  __int64 v48;
  _DWORD* v49;
  __int64 v50;
  __int128 v51;
  __int128 v52;
  __int128 v53;
  unsigned __int8* v54;
  int v55;
  int v56;
  float v57;
  float* v58;
  float v59;
  char* v60;
  char* j;
  int v62;
  int v63;
  unsigned int v64;
  __int64 v65;
  _DWORD* v66;
  __int64 v67;
  __int128 v68;
  __int128 v69;
  __int128 v70;
  __int128 v71;
  __int128 v72;
  int v73;
  atomic_uint* v74;
  unsigned int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  __int64* v82;

  v3 = *(_DWORD*)(result + 16);
  v77 = result;
  if (v3 >= 1) {
    v4 = GameData_212c028;
    v74 = a3;
    v73 = *(_DWORD*)(result + 16);
    v5 = v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                       *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                      2) &
                     0xFFFFFFFE) +
                    2);
    if ((int)v5 <= 1) {
      v5 = 1;
    }
    while (1) {
      add = atomic_fetch_add(a3, v5);
      if (add < v3) {
        break;
      }
    LABEL_5:
      v5 >>= 1;
      if (v5 <= 1) {
        v5 = 1;
      }
      if (add >= v3) {
        return result;
      }
    }
    v75 = v5;
    v7 = add + v5;
    if (v7 >= v3) {
      v7 = v3;
    }
    v8 = add;
    v76 = v7;
    while (1) {
      v9 = *(_QWORD*)(v77 + 24);
      v10 = *(_DWORD*)(*(_QWORD*)(v77 + 8) + 4 * v8);
      v78 = v8;
      v79 = v10;
      v12 = *(_QWORD*)(*GameData_212ce80[0] + 61448);
      v11 = *(_QWORD*)(*GameData_212ce80[0] + 61456);
      if (v10 == 1) {
        v17 = *(char**)(v9 + 208);
        v16 = *(char**)(v9 + 216);
        if (v17 == v16) {
          goto LABEL_36;
        }
        do {
          v18 = *v17 + 32 * v17[1];
          if (v18 >= 0x400) {
            v18 = 0;
          }
          result = GameRoutine_1002b40(v9 + 72, v17, v11 + 20LL * v18);
          if ((result & 1) != 0) {
            break;
          }
          v17 += 4;
        } while (v17 != v16);
      }
      else if (v10 == 2) {
        v14 = *(char**)(v9 + 232);
        v13 = *(char**)(v9 + 240);
        if (v14 == v13) {
          goto LABEL_36;
        }
        do {
          v15 = *v14 + 32 * v14[1];
          if (v15 >= 0x400) {
            v15 = 0;
          }
          result = GameRoutine_1002b40(v9 + 128, v14, v11 + 20LL * v15);
          if ((result & 1) != 0) {
            break;
          }
          v14 += 4;
        } while (v14 != v13);
      }
      else {
        v20 = *(char**)(v9 + 208);
        v19 = *(char**)(v9 + 216);
        if (v20 == v19) {
        LABEL_36:
          result = 0;
          goto LABEL_37;
        }
        v21 = v9 + 56LL * v10;
        do {
          v22 = *v20 + 32 * v20[1];
          if (v22 >= 0x400) {
            v22 = 0;
          }
          result = GameRoutine_1002b40(v21 + 16, v20, v12 + 20LL * v22);
          if ((result & 1) != 0) {
            break;
          }
          v20 += 4;
        } while (v20 != v19);
      }
    LABEL_37:
      v24 = *(char**)(v9 + 256);
      v23 = *(char**)(v9 + 264);
      for (i = ((v23 - v24) >> 2) - 0x61C8864680B583EBLL; v24 != v23;
           i = (v27 - 0x61C8864680B583EBLL + (v26 << 12) + (v26 >> 4)) ^ v26) {
        v26 =
            ((i << 12) - 0x61C8864680B583EBLL + (i >> 4) + (unsigned int)*v24) ^
            i;
        v27 = v24[1];
        v24 += 4;
      }
      if (*(_QWORD*)(v9 + 184 + 8 * v79) == i) {
        if ((result & 1) == 0) {
          goto LABEL_14;
        }
        if ((_DWORD)v79 == 1) {
        LABEL_59:
          v44 = *(char**)(v9 + 208);
          v43 = *(char**)(v9 + 216);
          if (v44 == v43) {
            GameRoutine_1002ca0(v9 + 56LL * (int)v79 + 16);
          LABEL_75:
            v57 = *(float*)(*GameData_212f878 + 1424);
            v58 = (float*)(v9 + 88);
            *(_BYTE*)(v9 + 9) = 0;
            v59 = v57 * 0.8f;
            while (1) {
              v58 = *(float**)v58;
              if (v58 == nullptr) {
                break;
              }
              if (fabsf(v58[49] +
                        (float)((float)((float)((float)(v58[33] + v58[37]) +
                                                v58[41]) +
                                        v58[45]) *
                                -0.25f)) >= v59) {
                *(_BYTE*)(v9 + 9) = 1;
                break;
              }
            }
            *(_BYTE*)(v9 + 10) = 1;
            goto LABEL_13;
          }
          do {
            v45 = *(unsigned __int8**)(v9 + 256);
            v54 = *(unsigned __int8**)(v9 + 264);
            v55 = *v44;
            v56 = v44[1];
            if (v45 != v54) {
              while (*v45 != (unsigned __int8)v55 ||
                     v45[1] != (unsigned __int8)v56) {
                v45 += 4;
                if (v45 == v54) {
                  v45 = *(unsigned __int8**)(v9 + 264);
                  break;
                }
              }
            }
            v31 = v45 == v54;
            v46 = v55 + 32 * v56;
            v47 = v56 + (v55 << 8);
            v82 = &v80;
            if (v31) {
              v48 = v11;
            }
            else {
              v48 = v12;
            }
            if (v46 >= 0x400) {
              v46 = 0;
            }
            v80 = v47;
            v49 = (_DWORD*)(v48 + 20LL * v46);
            v50 = GameRoutine_1003260(v9 + 72, &v80, v4, &v82, &v81);
            *(_QWORD*)(v50 + 128) = 0;
            *(_QWORD*)(v50 + 144) = 0;
            v44 += 4;
            v51 = *(_OWORD*)(v50 + 128);
            v52 = *(_OWORD*)(v50 + 144);
            *(_QWORD*)(v50 + 160) = 0;
            *(_QWORD*)(v50 + 176) = 0;
            *(_QWORD*)(v50 + 192) = 0;
            *(_QWORD*)(v50 + 64) = 0;
            *(_QWORD*)(v50 + 72) = 0;
            *(_QWORD*)(v50 + 80) = 0;
            *(_QWORD*)(v50 + 88) = 0;
            *(_QWORD*)(v50 + 96) = 0;
            *(_QWORD*)(v50 + 104) = 0;
            *(_DWORD*)(v50 + 112) = 0;
            *(_OWORD*)(v50 + 128) = (unsigned __int64)v51;
            *(_OWORD*)(v50 + 144) = (unsigned __int64)v52;
            v53 = *(_OWORD*)(v50 + 176);
            *(_OWORD*)(v50 + 160) = *(unsigned __int64*)(v50 + 160);
            *(_OWORD*)(v50 + 176) = (unsigned __int64)v53;
            *(_OWORD*)(v50 + 192) = *(unsigned __int64*)(v50 + 192);
            LODWORD(v51) = *v49;
            *(_DWORD*)(v50 + 44) = *v49;
            *(_DWORD*)(v50 + 68) = v51;
            *(_DWORD*)(v50 + 88) = v51;
            LODWORD(v51) = v49[1];
            *(_DWORD*)(v50 + 48) = v51;
            *(_DWORD*)(v50 + 72) = v51;
            *(_DWORD*)(v50 + 92) = v51;
            LODWORD(v51) = v49[2];
            *(_DWORD*)(v50 + 52) = v51;
            *(_DWORD*)(v50 + 76) = v51;
            *(_DWORD*)(v50 + 96) = v51;
            LODWORD(v51) = v49[3];
            *(_DWORD*)(v50 + 56) = v51;
            *(_DWORD*)(v50 + 80) = v51;
            *(_DWORD*)(v50 + 100) = v51;
            LODWORD(v51) = v49[4];
            *(_DWORD*)(v50 + 60) = v51;
            *(_DWORD*)(v50 + 84) = v51;
            *(_DWORD*)(v50 + 104) = v51;
          } while (v44 != v43);
          goto LABEL_74;
        }
      }
      else {
        *(_QWORD*)(v9 + 184 + 8 * v79) = i;
        if ((_DWORD)v79 == 1) {
          goto LABEL_59;
        }
      }
      if ((_DWORD)v79 != 2) {
        v60 = *(char**)(v9 + 208);
        for (j = *(char**)(v9 + 216); v60 != j; *(_DWORD*)(v67 + 104) = v71) {
          v62 = *v60;
          v63 = v60[1];
          v82 = &v80;
          v64 = v62 + 32 * v63;
          v65 = v63 + (v62 << 8);
          if (v64 >= 0x400) {
            v64 = 0;
          }
          v80 = v65;
          v66 = (_DWORD*)(v12 + 20LL * v64);
          v67 = GameRoutine_1003260(v9 + 56LL * (int)v79 + 16, &v80, v4, &v82,
                                    &v81);
          *(_QWORD*)(v67 + 128) = 0;
          *(_QWORD*)(v67 + 144) = 0;
          v60 += 4;
          v68 = *(_OWORD*)(v67 + 128);
          v69 = *(_OWORD*)(v67 + 144);
          *(_QWORD*)(v67 + 160) = 0;
          *(_QWORD*)(v67 + 176) = 0;
          *(_QWORD*)(v67 + 192) = 0;
          v70 = *(_OWORD*)(v67 + 192);
          *(_QWORD*)(v67 + 64) = 0;
          *(_QWORD*)(v67 + 72) = 0;
          *(_QWORD*)(v67 + 80) = 0;
          *(_QWORD*)(v67 + 88) = 0;
          *(_QWORD*)(v67 + 96) = 0;
          *(_QWORD*)(v67 + 104) = 0;
          *(_DWORD*)(v67 + 112) = 0;
          *(_OWORD*)(v67 + 128) = (unsigned __int64)v68;
          *(_OWORD*)(v67 + 144) = (unsigned __int64)v69;
          v71 = *(_OWORD*)(v67 + 160);
          v72 = *(_OWORD*)(v67 + 176);
          *(_OWORD*)(v67 + 192) = (unsigned __int64)v70;
          *(_OWORD*)(v67 + 160) = (unsigned __int64)v71;
          *(_OWORD*)(v67 + 176) = (unsigned __int64)v72;
          LODWORD(v71) = *v66;
          *(_DWORD*)(v67 + 44) = *v66;
          *(_DWORD*)(v67 + 68) = v71;
          *(_DWORD*)(v67 + 88) = v71;
          LODWORD(v71) = v66[1];
          *(_DWORD*)(v67 + 48) = v71;
          *(_DWORD*)(v67 + 72) = v71;
          *(_DWORD*)(v67 + 92) = v71;
          LODWORD(v71) = v66[2];
          *(_DWORD*)(v67 + 52) = v71;
          *(_DWORD*)(v67 + 76) = v71;
          *(_DWORD*)(v67 + 96) = v71;
          LODWORD(v71) = v66[3];
          *(_DWORD*)(v67 + 56) = v71;
          *(_DWORD*)(v67 + 80) = v71;
          *(_DWORD*)(v67 + 100) = v71;
          LODWORD(v71) = v66[4];
          *(_DWORD*)(v67 + 60) = v71;
          *(_DWORD*)(v67 + 84) = v71;
        }
      LABEL_12:
        GameRoutine_1002ca0(v9 + 56LL * (int)v79 + 16);
        goto LABEL_13;
      }
      v29 = *(char**)(v9 + 232);
      v28 = *(char**)(v9 + 240);
      if (v29 == v28) {
        goto LABEL_12;
      }
      do {
        v30 = *(unsigned __int8**)(v9 + 256);
        v40 = *(unsigned __int8**)(v9 + 264);
        v41 = *v29;
        v42 = v29[1];
        if (v30 != v40) {
          while (*v30 != (unsigned __int8)v41 ||
                 v30[1] != (unsigned __int8)v42) {
            v30 += 4;
            if (v30 == v40) {
              v30 = *(unsigned __int8**)(v9 + 264);
              break;
            }
          }
        }
        v31 = v30 == v40;
        v32 = v41 + 32 * v42;
        v33 = v42 + (v41 << 8);
        v82 = &v80;
        if (v31) {
          v34 = v11;
        }
        else {
          v34 = v12;
        }
        if (v32 >= 0x400) {
          v32 = 0;
        }
        v80 = v33;
        v35 = (_DWORD*)(v34 + 20LL * v32);
        v36 = GameRoutine_1003260(v9 + 128, &v80, v4, &v82, &v81);
        *(_QWORD*)(v36 + 128) = 0;
        *(_QWORD*)(v36 + 144) = 0;
        v29 += 4;
        v37 = *(_OWORD*)(v36 + 128);
        v38 = *(_OWORD*)(v36 + 144);
        *(_QWORD*)(v36 + 160) = 0;
        *(_QWORD*)(v36 + 176) = 0;
        *(_QWORD*)(v36 + 192) = 0;
        *(_QWORD*)(v36 + 64) = 0;
        *(_QWORD*)(v36 + 72) = 0;
        *(_QWORD*)(v36 + 80) = 0;
        *(_QWORD*)(v36 + 88) = 0;
        *(_QWORD*)(v36 + 96) = 0;
        *(_QWORD*)(v36 + 104) = 0;
        *(_DWORD*)(v36 + 112) = 0;
        *(_OWORD*)(v36 + 128) = (unsigned __int64)v37;
        *(_OWORD*)(v36 + 144) = (unsigned __int64)v38;
        v39 = *(_OWORD*)(v36 + 176);
        *(_OWORD*)(v36 + 160) = *(unsigned __int64*)(v36 + 160);
        *(_OWORD*)(v36 + 176) = (unsigned __int64)v39;
        *(_OWORD*)(v36 + 192) = *(unsigned __int64*)(v36 + 192);
        LODWORD(v37) = *v35;
        *(_DWORD*)(v36 + 44) = *v35;
        *(_DWORD*)(v36 + 68) = v37;
        *(_DWORD*)(v36 + 88) = v37;
        LODWORD(v37) = v35[1];
        *(_DWORD*)(v36 + 48) = v37;
        *(_DWORD*)(v36 + 72) = v37;
        *(_DWORD*)(v36 + 92) = v37;
        LODWORD(v37) = v35[2];
        *(_DWORD*)(v36 + 52) = v37;
        *(_DWORD*)(v36 + 76) = v37;
        *(_DWORD*)(v36 + 96) = v37;
        LODWORD(v37) = v35[3];
        *(_DWORD*)(v36 + 56) = v37;
        *(_DWORD*)(v36 + 80) = v37;
        *(_DWORD*)(v36 + 100) = v37;
        LODWORD(v37) = v35[4];
        *(_DWORD*)(v36 + 60) = v37;
        *(_DWORD*)(v36 + 84) = v37;
        *(_DWORD*)(v36 + 104) = v37;
      } while (v29 != v28);
    LABEL_74:
      GameRoutine_1002ca0(v9 + 56LL * (int)v79 + 16);
      if ((_DWORD)v79 == 1) {
        goto LABEL_75;
      }
    LABEL_13:
      GameRoutine_1a09b70(&GameData_2167748);
      **(_BYTE**)(v77 + 32) = 1;
      result = GameRoutine_1a09b80(&GameData_2167748);
    LABEL_14:
      v8 = v78 + 1;
      if (v78 + 1 >= v76) {
        add = v78 + 1;
        a3 = v74;
        v3 = v73;
        v5 = v75;
        goto LABEL_5;
      }
    }
  }
  return result;
}

bool GameHr_f21470(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  char v13;

  if (a1 == 0) {
    v3 = GameData_212ce90[0];
    v4 = *GameData_212ce90[0];
    if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) == 0) {
    LABEL_12:
      if ((*(_BYTE*)(v4 + 21) & 1) == 0 &&
          (*(_QWORD*)(a2 + 392) == 0 || (*(_BYTE*)(a2 + 417) & 0x1C) != 0 ||
           (*(float (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152) <=
               0.0f ||
           *(_BYTE*)(*(_QWORD*)(a2 + 440) + 16LL) != 1 ||
           (*(_BYTE*)(a2 + 417) & 0x20) == 0)) {
        return false;
      }
      return *(_QWORD*)(a2 + 2200) != 0;
    }
    v6 = (unsigned int)*(char*)(a2 + 584);
    v7 = (unsigned int)*(char*)(a2 + 585);
    v13 = 0;
    v12 = v11;
    v8 = *(_QWORD*)(*GameData_212ce98[0] + 160) + 8LL;
    v11[0] = GameData_1f94310;
    v11[1] = v8;
    v11[2] = &v13;
    GameRoutine_6c8a80(a2, v6, v7, v11);
    if (v12 == v11) {
      v9 = 32;
    }
    else {
      if (v12 == nullptr) {
      LABEL_10:
        if (v13 != 1) {
          return false;
        }
        v4 = *v3;
        goto LABEL_12;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v12 + v9))((__int64)v12);
    goto LABEL_10;
  }
  if ((GameRoutine_6c9cf0(a1, a2) & 1) == 0) {
    return false;
  }
  return *(_QWORD*)(a2 + 2200) != 0;
}

float GameHr_f4ad30(__int64 a1)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;
  float v6;
  float v7;
  float result;

  if (GameData_22197d8 != 0 && *(int*)(GameData_22197d8 + 256) >= 1) {
    v1 = *(unsigned __int8**)(a1 + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
  }
  v6 = 60.0f / (float)*(int*)(GameData_21a60d8 + 476);
  if (v6 <= 0.0f) {
    v7 = 0.0167f;
  }
  else {
    v7 = v6 * 0.0167f;
  }
  result = *(float*)(a1 + 164) + v7;
  *(float*)(a1 + 164) = result;
  return result;
}

float GameHr_f4add0(__int64 a1)
{
  __int64 v2;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  float v9;
  float v10;
  float result;

  v2 = GameData_212f5c0[0];
  if (*GameData_212ea58 != 0 && *(_QWORD*)GameData_212f5c0[0] != 0) {
    if ((GameRoutine_17c1f00(), *(_QWORD*)v2 != 0) &&
            (*(_BYTE*)(*(_QWORD*)v2 + 296LL) & 1 |
             (*(_DWORD*)(*(_QWORD*)v2 + 360LL) == 5)) != 0 &&
            *(float*)(a1 + 164) >= 1.5f ||
        *(_BYTE*)(*(_QWORD*)GameData_212f520[0] + 11LL) == 1) {
      v4 = *(unsigned __int8**)(a1 + 16);
      if (v4 != nullptr) {
        v5 = *v4;
        v6 = v5 > 0x10;
        v7 = (1 << v5) & 0x1CE00;
        if (!v6 && v7 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
    }
  }
  v9 = 60.0f / (float)*(int*)(*GameData_212c010[0] + 476);
  if (v9 <= 0.0f) {
    v10 = 0.0167f;
  }
  else {
    v10 = v9 * 0.0167f;
  }
  result = *(float*)(a1 + 164) + v10;
  *(float*)(a1 + 164) = result;
  return result;
}

__int64 GameHr_f50a60(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  GameRoutine_d48320();
  if (a1[13] != 0) {
    v2 = a1[14];
    v3 = *(_QWORD*)(a1[1] + 456LL);
    v17 = a1[13];
    v18 = v2;
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_d477c0(v3 + 8, &v17);
    v4 = v18;
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      GameRoutine_1a09c50(v4);
    }
    v5 = a1[14];
    a1[13] = 0;
    a1[14] = 0;
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      GameRoutine_1a09c50(v5);
    }
  }
  if (a1[15] != 0) {
    v6 = a1[16];
    v7 = *(_QWORD*)(a1[1] + 456LL);
    v15 = a1[15];
    v16 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_d477c0(v7 + 8, &v15);
    v8 = v16;
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      GameRoutine_1a09c50(v8);
    }
    v9 = a1[16];
    a1[15] = 0;
    a1[16] = 0;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      GameRoutine_1a09c50(v9);
    }
  }
  v10 = *(_QWORD*)(a1[1] + 488LL);
  v11 = *(_QWORD*)(v10 + 192);
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    GameRoutine_1a09c50(v11);
  }
  result = GameRoutine_d48970(a1, 0.6f);
  v13 = *(_QWORD*)(*(_QWORD*)(a1[1] + 8LL) + 32LL);
  if (v13 != 0) {
    v14 = *(float*)(v13 + 384);
    if (v14 < 0.2f) {
      v14 = 0.2f;
    }
    *(float*)(v13 + 384) = v14;
  }
  return result;
}

#pragma GCC visibility pop
