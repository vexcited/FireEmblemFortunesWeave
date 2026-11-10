#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern char GameData_1a9f09e;

extern _UNKNOWN GameData_1ab3e06;

extern _UNKNOWN GameData_1ac6ccb;

extern _UNKNOWN GameData_1ada738;

extern _UNKNOWN GameData_1ade2f6;

extern char GameData_1b80a34[5];

extern __int64 GameData_212bf68;

extern _UNKNOWN* GameData_212c028;

extern __int64* GameData_212c370;

extern __int64 GameData_212c5c0[3];

extern __int64 GameData_212c638;

extern __int64* GameData_212ce90[3];

extern __int64* GameData_212d458[7];

extern __int64 GameData_212dbe0[4];

extern __int64 GameData_21a6070;

extern __int64 GameData_21a60b0;

extern __int64 GameData_21c9608;

extern __int64 GameData_21c9718;

extern __int64 GameData_21ca310;

extern __int64 GameData_21caab0;

extern __int64 GameData_21d1e40;

extern __int64 GameData_21d1e50;

extern __int64 GameData_21ee240;

extern __int64 GameData_21f3cf0;

extern __int64 GameData_21f3d08;

extern __int64 GameData_21f3d10;

extern int GameData_21fa944;

extern __int64 GameData_2212270;

extern _UNKNOWN GameData_2216780;

extern __int64 GameData_221bea8;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_100b50(_QWORD, _QWORD, long double);

float GameRoutine_101470(_QWORD);

__int64 GameRoutine_10c830(_QWORD, long double);

__int64 GameRoutine_10cb00(_QWORD, _QWORD);

__int64 GameRoutine_10cd70(_QWORD, _QWORD);

__n128 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_10d050(_QWORD, _QWORD);

float GameRoutine_10d1b0(_QWORD);

__int64 GameRoutine_1120d0(_QWORD);

__int64 GameRoutine_112290(_QWORD);

__int64 GameRoutine_125b8e0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_125c2c0(void);

__int64 GameRoutine_126c90(_QWORD);

__int64 GameRoutine_126cb0(_QWORD);

__int64 GameRoutine_126cc0(_QWORD);

__int64 GameRoutine_149a90(_QWORD);

__int64 GameRoutine_192f90(_QWORD);

__int64 GameRoutine_198e2c0(_QWORD);

__int64 GameRoutine_198f8e0(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09d30(_QWORD, _QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, long double);

__int64 GameRoutine_1a0a6b0(_QWORD, _QWORD, const char*, ...);

__int64 GameRoutine_25ec90(_QWORD, _QWORD);

__int64 GameRoutine_60a020(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_634d80(_QWORD, _QWORD);

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD, long double);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD, long double);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_667c80(_QWORD);

__int64 GameRoutine_6c1b20(_QWORD, _QWORD);

__int64 GameRoutine_a22bd0(long double);

bool GameRoutine_a28e10(__int64, char);

void GameRoutine_a290c0(__int64, __int64, __int64, int, char, float);

__int64 GameRoutine_a2adb0(_QWORD, _QWORD, long double);

__int64 GameRoutine_a2bd50(_QWORD, _QWORD, _QWORD, long double);

__n128 GameRoutine_a2c820(void);

__n128 GameRoutine_a2c910(_DWORD*, __int64);

__int64 GameRoutine_a2e0c0(_QWORD, _QWORD);

_QWORD* GameRoutine_a2e490(__int64, __int64, char);

void GameRoutine_a2fc30(__int64, __int64);

__int64 GameRoutine_a339e0(__int64, unsigned __int8, char*);

__int64 GameRoutine_c180a0(_QWORD);

__int64 GameRoutine_c187e0(_QWORD);

__int64 GameRoutine_c18a80(_QWORD);

__int64 GameRoutine_c1af60(_QWORD);

void __attribute__((noreturn)) GameRoutine_c25a10(void);

__int64 GameRoutine_c25a40(_QWORD, _QWORD);

__int64 GameRoutine_c27c00(_QWORD);

__int64 GameRoutine_c72960(_QWORD);

__int64 GameRoutine_d523c0(_QWORD);

__int64 GameRoutine_d859a0(_QWORD);

__int64 GameRoutine_d8b9c0(_QWORD, _QWORD);

__int64 GameRoutine_d8bae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

float GameRoutine_d8e20(_QWORD);

__int64 GameRoutine_d9850(_QWORD);

struct PseudoSret GameRoutine_d98c0(_QWORD);

__int64 GameRoutine_dbd8e0(_QWORD);

__int64 GameRoutine_e4440(_QWORD, _QWORD);

__int64 GameRoutine_e61c90(_QWORD, _QWORD);

__int64 GameRoutine_e8120(_QWORD);

__int64 GameRoutine_eb7d20(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_ee140(_QWORD);

float GameRoutine_efb160(_QWORD, _QWORD);

__int64 GameRoutine_efbb60(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_fdf60(_QWORD, _QWORD);

__int64 GameRoutine_fffcb0(_QWORD);

void GameHr_a2c4f0(_QWORD* a1, const char* a2, const char* a3, char a4, char a5,
                   char a6, __int64 a7)
{
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned __int8 v17;
  unsigned __int8 v18;
  int v19;
  float v20;
  __int64 v21;
  long double v22;
  char* v23;
  __int64 v24;
  _DWORD v25[50];
  _BYTE v26[256];

  if (*(_QWORD*)GameData_212c638 == 0) {
    goto LABEL_19;
  }
  v14 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               64LL);
  if (v14 == 0) {
    goto LABEL_19;
  }
  v15 = *(_QWORD*)(*(_QWORD*)(v14 + 96) + 296LL);
  if (v15 != 0) {
    if (*(_BYTE*)(v15 + 84) != 0) {
      v16 = *(_DWORD*)(v15 + 80);
    }
    else {
      v16 = 1;
    }
    v17 = *(_BYTE*)(v15 + 160) & *(_BYTE*)(v15 + 144);
    v18 = *(_BYTE*)(v15 + 132);
    v19 = *(_DWORD*)(v15 + 128);
    if ((v17 & v18 & 1) == 0) {
      v19 = v16;
    }
    if (v19 >= 2) {
      v19 = 2;
    }
    v20 = *(float*)&GameData_1b80a34[4 * v19];
  }
  else {
    v20 = 0.0;
  }
  if (v20 > GameRoutine_101470("ENVMove_Stop") ||
      ((GameRoutine_1a0a6b0(v26, 256, "%s_%s", a2, a3),
        v25[0] = GameRoutine_fdf60(v26, 0),
        (v21 = GameRoutine_ee140(v25)) != 0) &&
           *(_DWORD*)(v21 + 56) != 0 ||
       (v25[0] = GameRoutine_fdf60(a2, 0),
        (v21 = GameRoutine_ee140(v25)) != 0) &&
           *(_DWORD*)(v21 + 56) != 0) &&
          (*(_BYTE*)(v21 + 62) & 1) != 0) {
  LABEL_19:
    GameRoutine_1a0a6b0(v26, 256, "%s_%s", a2, a3);
    v25[0] = GameRoutine_fdf60(v26, 0);
    if (GameRoutine_ee140(v25) != 0) {
      v23 = v26;
    }
    else {
      v23 = (char*)a2;
    }
    (*(void (**)(_QWORD*, char*, _QWORD, _QWORD, _QWORD, __int64))(
        *a1 + 120LL))(a1, v23, a4 & 1, a5 & 1, a6 & 1, a7);
  }
  else {
    v24 = a1[2];
    *(_QWORD*)&v22 = 0;
    GameRoutine_10c830(v25, v22);
    GameRoutine_e4440(v24, v25);
    GameRoutine_10cff0(v25);
  }
}

void GameHr_a2c6e0(__int64 a1, __int64 a2, _BYTE* a3, long double a4)
{
  char v5;
  unsigned __int64 v6;
  float v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  long double v18;
  long double v19;
  _BYTE v20[200];

  v5 = *(_BYTE*)(a1 + 2784);
  v6 = *(unsigned __int8*)(a1 + 2760);
  v7 = *(float*)&a4;
  v8 = (_QWORD*)(a1 + 2760);
  v9 = (_QWORD*)(a1 + 2784);
  if ((v5 & 1) != 0) {
    v13 = (v6 & 1) == 0;
    v14 = v6 >> 1;
    if (v13) {
      v15 = a1 + 2761;
    }
    else {
      v15 = *(_QWORD*)(a1 + 2776);
    }
    if (v13) {
      v16 = v14;
    }
    else {
      v16 = *(_QWORD*)(a1 + 2768);
    }
    GameRoutine_64dde0(v9, v15, v16, a4);
  }
  else if ((v6 & 1) != 0) {
    GameRoutine_64df20(v9, *(_QWORD*)(a1 + 2776), *(_QWORD*)(a1 + 2768), a4);
  }
  else {
    v12 = v8[1];
    *v9 = *v8;
    v9[1] = v12;
    v9[2] = v8[2];
  }
  GameRoutine_60a020(v8);
  v17 = *(_QWORD*)a1;
  *(_BYTE*)(a1 + 3076) = 0;
  (*(void (**)(__int64))(v17 + 64))(a1);
  v18 = ((long double (*)(__int64, __int64)) *
         (_QWORD*)(*(_QWORD*)a1 + 128LL))(a1, a2);
  GameRoutine_a2bd50(a1, a2, 0, v18);
  if (a3 != nullptr && *a3 != 0) {
    *(_QWORD*)&v19 = 0;
    GameRoutine_10c830(v20, v19);
    GameRoutine_a290c0(a1, (__int64)a3, (__int64)v20, 0, 0, v7);
    GameRoutine_10cff0(v20);
  }
  *(_BYTE*)(a1 + 3076) = 0;
}

__n128 GameHr_a2c910(_DWORD* a1, __int64 a2)
{
  long double v3;
  long double v4;
  int v5;
  _BYTE v7[200];
  _BYTE v8[200];

  GameRoutine_10cd70(v8, a2);
  *(float*)&v3 = GameRoutine_10d1b0(v8);
  if (*(float*)&v3 < 0.0) {
    LODWORD(v3) = 1148846080;
    GameRoutine_10c830(v7, v3);
    GameRoutine_10d050(v8, v7);
    *(__n128*)&v3 = GameRoutine_10cff0(v7);
  }
  GameRoutine_a2adb0(a1, v8, v3);
  *(float*)&v4 = GameRoutine_10d1b0(v8);
  GameRoutine_10c830(v7, v4);
  (*(void (**)(_DWORD*, _BYTE*))(*(_QWORD*)a1 + 72LL))(a1, v7);
  GameRoutine_10cff0(v7);
  v5 = a1[688];
  a1[688] = 0;
  a1[689] = v5;
  return GameRoutine_10cff0(v8);
}

__n128 GameHr_a2d080(__int64 a1, long double a2)
{
  char v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  _BYTE v22[200];

  v3 = *(_BYTE*)(a1 + 2856);
  *(_DWORD*)(a1 + 2852) = *(_DWORD*)(a1 + 2920);
  v4 = *(unsigned __int8*)(a1 + 2928);
  v5 = (_QWORD*)(a1 + 2856);
  if ((v3 & 1) != 0) {
    v8 = (v4 & 1) == 0;
    v9 = v4 >> 1;
    if (v8) {
      v10 = a1 + 2929;
    }
    else {
      v10 = *(_QWORD*)(a1 + 2944);
    }
    if (v8) {
      v11 = v9;
    }
    else {
      v11 = *(_QWORD*)(a1 + 2936);
    }
    GameRoutine_64dde0(v5, v10, v11, a2);
  }
  else if ((v4 & 1) != 0) {
    GameRoutine_64df20(v5, *(_QWORD*)(a1 + 2944), *(_QWORD*)(a1 + 2936), a2);
  }
  else {
    v6 = *(_QWORD*)(a1 + 2936);
    v7 = *(_QWORD*)(a1 + 2944);
    *v5 = *(_QWORD*)(a1 + 2928);
    v5[1] = v6;
    v5[2] = v7;
  }
  v12 = *(_BYTE*)(a1 + 2896);
  v13 = (_QWORD*)(a1 + 2896);
  *(_DWORD*)(a1 + 2880) = *(_DWORD*)(a1 + 2952);
  *(_DWORD*)(a1 + 2884) = *(_DWORD*)(a1 + 2956);
  *(_BYTE*)(a1 + 2888) = *(_BYTE*)(a1 + 2960);
  v14 = *(unsigned __int8*)(a1 + 2968);
  if ((v12 & 1) != 0) {
    v17 = (v14 & 1) == 0;
    v18 = v14 >> 1;
    if (v17) {
      v19 = a1 + 2969;
    }
    else {
      v19 = *(_QWORD*)(a1 + 2984);
    }
    if (v17) {
      v20 = v18;
    }
    else {
      v20 = *(_QWORD*)(a1 + 2976);
    }
    GameRoutine_64dde0(v13, v19, v20, a2);
  }
  else if ((v14 & 1) != 0) {
    GameRoutine_64df20(v13, *(_QWORD*)(a1 + 2984), *(_QWORD*)(a1 + 2976), a2);
  }
  else {
    v15 = *(_QWORD*)(a1 + 2976);
    v16 = *(_QWORD*)(a1 + 2984);
    *v13 = *(_QWORD*)(a1 + 2968);
    *(_QWORD*)(a1 + 2904) = v15;
    *(_QWORD*)(a1 + 2912) = v16;
  }
  if (*(_DWORD*)(a1 + 2852) == 6 && *(_DWORD*)(a1 + 620) == 0) {
    *(_DWORD*)(a1 + 620) = 1;
  }
  GameRoutine_10cb00(v22, "FadeTime_BGM_Gmap_In");
  GameRoutine_a2e0c0(a1, v22);
  return GameRoutine_10cff0(v22);
}

__n128 GameHr_a2dff0(__int64 a1)
{
  int v1;
  long double v3;
  long double v4;
  long double v5;
  __n128 result;
  int v7;
  int v8;
  _BYTE v9[200];

  v1 = *(_DWORD*)(a1 + 632);
  if (v1 != 0) {
    *(_DWORD*)(a1 + 632) = v1 - 1;
    *(__n128*)&v3 = GameRoutine_a2c820();
    LODWORD(v3) = 1148846080;
    GameRoutine_10c830(v9, v3);
    LODWORD(v4) = 1.0;
    GameRoutine_100b50(&GameData_21fa944, v9, v4);
    *(__n128*)&v5 = GameRoutine_10cff0(v9);
    GameRoutine_a22bd0(v5);
    v7 = *(_DWORD*)(a1 + 628);
    if (v7 == 0) {
      GameRoutine_e8120(a1);
      v7 = *(_DWORD*)(a1 + 628);
    }
    v8 = *(_DWORD*)(a1 + 2752);
    *(_DWORD*)(a1 + 2752) = 0;
    *(_DWORD*)(a1 + 2756) = v8;
    if (v7 >= 1 && (*(_BYTE*)(a1 + 3016) & 1) == 0) {
      GameRoutine_10cb00(v9, "FadeTime_BGM_Hub_In");
      GameRoutine_a2e0c0(a1, v9);
      return GameRoutine_10cff0(v9);
    }
  }
  return result;
}

_QWORD* GameHr_a2e490(__int64 a1, __int64 a2, char a3)
{
  long double v6;
  char v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char v16;
  _QWORD* v17;
  _QWORD* result;
  unsigned __int64 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _BYTE* v26;
  long double v27;
  long double v28;
  unsigned __int64 v29;
  __int64 v30;
  bool v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  _BYTE* v35;
  int v36;
  _QWORD v37[25];

  *(float*)&v6 = GameRoutine_d8e20(*(_QWORD*)(a1 + 8));
  if (*(float*)&v6 > 0.0) {
    *(_DWORD*)(a1 + 2892) = LODWORD(v6);
  }
  v7 = *(_BYTE*)(a1 + 2856);
  v8 = (_QWORD*)(a1 + 2760);
  v9 = (_QWORD*)(a1 + 2856);
  *(_DWORD*)(a1 + 2852) = *(_DWORD*)(a1 + 2752);
  v10 = *(unsigned __int8*)(a1 + 2760);
  if ((v7 & 1) != 0) {
    v12 = (v10 & 1) == 0;
    v13 = v10 >> 1;
    if (v12) {
      v14 = a1 + 2761;
    }
    else {
      v14 = *(_QWORD*)(a1 + 2776);
    }
    if (v12) {
      v15 = v13;
    }
    else {
      v15 = *(_QWORD*)(a1 + 2768);
    }
    GameRoutine_64dde0(v9, v14, v15, v6);
  }
  else if ((v10 & 1) != 0) {
    GameRoutine_64df20(v9, *(_QWORD*)(a1 + 2776), *(_QWORD*)(a1 + 2768), v6);
  }
  else {
    v11 = *(_QWORD*)(a1 + 2768);
    *v9 = *v8;
    *(_QWORD*)(a1 + 2864) = v11;
    *(_QWORD*)(a1 + 2872) = *(_QWORD*)(a1 + 2776);
  }
  v16 = *(_BYTE*)(a1 + 2896);
  v17 = (_QWORD*)(a1 + 2824);
  result = (_QWORD*)(a1 + 2896);
  *(_DWORD*)(a1 + 2880) = *(_DWORD*)(a1 + 2808);
  *(_DWORD*)(a1 + 2884) = *(_DWORD*)(a1 + 2812);
  *(_BYTE*)(a1 + 2888) = *(_BYTE*)(a1 + 2816);
  v19 = *(unsigned __int8*)(a1 + 2824);
  if ((v16 & 1) == 0) {
    if ((v19 & 1) != 0) {
      result = (_QWORD*)GameRoutine_64df20(result, *(_QWORD*)(a1 + 2840),
                                           *(_QWORD*)(a1 + 2832), v6);
      if ((a3 & 1) != 0) {
        return result;
      }
    }
    else {
      v20 = *(_QWORD*)(a1 + 2832);
      *result = *v17;
      *(_QWORD*)(a1 + 2904) = v20;
      *(_QWORD*)(a1 + 2912) = *(_QWORD*)(a1 + 2840);
      if ((a3 & 1) != 0) {
        return result;
      }
    }
  LABEL_27:
    if ((*(_BYTE*)(a1 + 3128) & 1) == 0) {
      *(struct PseudoSret*)(v37) = GameRoutine_d98c0(*(_QWORD*)(a1 + 8));
      v25 = GameRoutine_112290(v37);
      if (v25 != 0 && (GameRoutine_149a90(v25 - 5592) & 1) == 0) {
        (*(void (**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
            *(_QWORD*)(a1 + 8), a2, 0);
      }
      if ((*(_BYTE*)v17 & 1) != 0) {
        v26 = *(_BYTE**)(a1 + 2840);
        *(_QWORD*)(a1 + 2832) = 0;
      }
      else {
        v26 = (_BYTE*)(a1 + 2825);
        *(_BYTE*)(a1 + 2824) = 0;
      }
      *v26 = 0;
    }
    *(float*)&v27 = GameRoutine_10d1b0(a2);
    GameRoutine_10c830(v37, v27);
    GameRoutine_a2c910((_DWORD*)a1, (__int64)v37);
    *(__n128*)&v28 = GameRoutine_10cff0(v37);
    v29 = *(unsigned __int8*)(a1 + 2760);
    result = (_QWORD*)(a1 + 2784);
    if ((*(_BYTE*)(a1 + 2784) & 1) != 0) {
      v31 = (v29 & 1) == 0;
      v32 = v29 >> 1;
      if (v31) {
        v33 = a1 + 2761;
      }
      else {
        v33 = *(_QWORD*)(a1 + 2776);
      }
      if (v31) {
        v34 = v32;
      }
      else {
        v34 = *(_QWORD*)(a1 + 2768);
      }
      result = (_QWORD*)GameRoutine_64dde0(result, v33, v34, v28);
      if ((*(_BYTE*)v8 & 1) != 0) {
        goto LABEL_48;
      }
    }
    else if ((v29 & 1) != 0) {
      result = (_QWORD*)GameRoutine_64df20(result, *(_QWORD*)(a1 + 2776),
                                           *(_QWORD*)(a1 + 2768), v28);
      if ((*(_BYTE*)v8 & 1) != 0) {
      LABEL_48:
        v35 = *(_BYTE**)(a1 + 2776);
        *(_QWORD*)(a1 + 2768) = 0;
        goto LABEL_49;
      }
    }
    else {
      v30 = *(_QWORD*)(a1 + 2768);
      *result = *v8;
      *(_QWORD*)(a1 + 2792) = v30;
      *(_QWORD*)(a1 + 2800) = *(_QWORD*)(a1 + 2776);
      if ((*(_BYTE*)v8 & 1) != 0) {
        goto LABEL_48;
      }
    }
    v35 = (_BYTE*)(a1 + 2761);
    *(_BYTE*)(a1 + 2760) = 0;
  LABEL_49:
    *v35 = 0;
    v36 = *(_DWORD*)(a1 + 2752);
    *(_DWORD*)(a1 + 2752) = 0;
    *(_DWORD*)(a1 + 2756) = v36;
    return result;
  }
  v21 = (v19 & 1) == 0;
  v22 = v19 >> 1;
  if (v21) {
    v23 = a1 + 2825;
  }
  else {
    v23 = *(_QWORD*)(a1 + 2840);
  }
  if (v21) {
    v24 = v22;
  }
  else {
    v24 = *(_QWORD*)(a1 + 2832);
  }
  result = (_QWORD*)GameRoutine_64dde0(result, v23, v24, v6);
  if ((a3 & 1) == 0) {
    goto LABEL_27;
  }
  return result;
}

void GameHr_a2f5a0(__int64 a1, long double a2)
{
  char v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _BYTE v12[200];

  v3 = *(_BYTE*)(a1 + 2992);
  v4 = *(unsigned __int8*)(a1 + 2824);
  v5 = (_QWORD*)(a1 + 2992);
  if ((v3 & 1) != 0) {
    v8 = (v4 & 1) == 0;
    v9 = v4 >> 1;
    if (v8) {
      v10 = a1 + 2825;
    }
    else {
      v10 = *(_QWORD*)(a1 + 2840);
    }
    if (v8) {
      v11 = v9;
    }
    else {
      v11 = *(_QWORD*)(a1 + 2832);
    }
    GameRoutine_64dde0(v5, v10, v11, a2);
  }
  else if ((v4 & 1) != 0) {
    GameRoutine_64df20(v5, *(_QWORD*)(a1 + 2840), *(_QWORD*)(a1 + 2832), a2);
  }
  else {
    v6 = *(_QWORD*)(a1 + 2832);
    v7 = *(_QWORD*)(a1 + 2840);
    *v5 = *(_QWORD*)(a1 + 2824);
    v5[1] = v6;
    v5[2] = v7;
  }
  GameRoutine_10cb00(v12, "FadeTime_BGM_CmdBtl_In");
  GameRoutine_a2e490(a1, (__int64)v12, 0);
  GameRoutine_10cff0(v12);
  *(_BYTE*)(a1 + 3016) = 1;
}

void GameHr_a2f660(__int64 a1)
{
  long double v2;
  char v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  unsigned __int64 v22;
  long double v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  __int64 v27;
  _BYTE v28[200];
  __int64 v29;
  unsigned __int64 v30;
  char* v31;

  *(float*)&v2 = GameRoutine_d8e20(*(_QWORD*)(a1 + 8));
  if (*(float*)&v2 > 0.0) {
    *(_DWORD*)(a1 + 2964) = LODWORD(v2);
  }
  v3 = *(_BYTE*)(a1 + 2928);
  v4 = (_QWORD*)(a1 + 2928);
  *(_DWORD*)(a1 + 2920) = *(_DWORD*)(a1 + 2752);
  v5 = *(unsigned __int8*)(a1 + 2760);
  if ((v3 & 1) != 0) {
    v8 = (v5 & 1) == 0;
    v9 = v5 >> 1;
    if (v8) {
      v10 = a1 + 2761;
    }
    else {
      v10 = *(_QWORD*)(a1 + 2776);
    }
    if (v8) {
      v11 = v9;
    }
    else {
      v11 = *(_QWORD*)(a1 + 2768);
    }
    GameRoutine_64dde0(v4, v10, v11, v2);
  }
  else if ((v5 & 1) != 0) {
    GameRoutine_64df20(v4, *(_QWORD*)(a1 + 2776), *(_QWORD*)(a1 + 2768), v2);
  }
  else {
    v6 = *(_QWORD*)(a1 + 2768);
    v7 = *(_QWORD*)(a1 + 2776);
    *v4 = *(_QWORD*)(a1 + 2760);
    *(_QWORD*)(a1 + 2936) = v6;
    *(_QWORD*)(a1 + 2944) = v7;
  }
  v12 = *(_BYTE*)(a1 + 2968);
  v13 = (_QWORD*)(a1 + 2968);
  *(_DWORD*)(a1 + 2952) = *(_DWORD*)(a1 + 2808);
  *(_DWORD*)(a1 + 2956) = *(_DWORD*)(a1 + 2812);
  *(_BYTE*)(a1 + 2960) = *(_BYTE*)(a1 + 2816);
  v14 = *(unsigned __int8*)(a1 + 2824);
  if ((v12 & 1) != 0) {
    v17 = (v14 & 1) == 0;
    v18 = v14 >> 1;
    if (v17) {
      v19 = a1 + 2825;
    }
    else {
      v19 = *(_QWORD*)(a1 + 2840);
    }
    if (v17) {
      v20 = v18;
    }
    else {
      v20 = *(_QWORD*)(a1 + 2832);
    }
    GameRoutine_64dde0(v13, v19, v20, v2);
  }
  else if ((v14 & 1) != 0) {
    GameRoutine_64df20(v13, *(_QWORD*)(a1 + 2840), *(_QWORD*)(a1 + 2832), v2);
  }
  else {
    v15 = *(_QWORD*)(a1 + 2832);
    v16 = *(_QWORD*)(a1 + 2840);
    *v13 = *(_QWORD*)(a1 + 2824);
    *(_QWORD*)(a1 + 2976) = v15;
    *(_QWORD*)(a1 + 2984) = v16;
  }
  v21 = (__int64*)(a1 + 2896);
  if ((*(_BYTE*)(a1 + 2896) & 1) != 0) {
    GameRoutine_60a270(&v29, *(_QWORD*)(a1 + 2912), *(_QWORD*)(a1 + 2904));
  }
  else {
    v22 = *(_QWORD*)(a1 + 2904);
    v29 = *v21;
    v30 = v22;
    v31 = *(char**)(a1 + 2912);
  }
  GameRoutine_10cb00(v28, "FadeTime_BGM_Gmap_Out");
  GameRoutine_a2e490(a1, (__int64)v28, 0);
  *(__n128*)&v23 = GameRoutine_10cff0(v28);
  if (v21 == &v29) {
  LABEL_40:
    if ((v29 & 1) == 0) {
      return;
    }
    goto LABEL_41;
  }
  if ((*(_BYTE*)v21 & 1) != 0) {
    if ((v29 & 1) != 0) {
      v25 = v31;
    }
    else {
      v25 = (char*)&v29 + 1;
    }
    if ((v29 & 1) != 0) {
      v26 = v30;
    }
    else {
      v26 = (unsigned __int64)(unsigned __int8)v29 >> 1;
    }
    GameRoutine_64dde0(a1 + 2896, v25, v26, v23);
    goto LABEL_40;
  }
  if ((v29 & 1) != 0) {
    GameRoutine_64df20(a1 + 2896, v31, v30, v23);
    if ((v29 & 1) == 0) {
      return;
    }
  }
  else {
    v24 = v30;
    *v21 = v29;
    *(_QWORD*)(a1 + 2904) = v24;
    *(_QWORD*)(a1 + 2912) = v31;
    if ((v29 & 1) == 0) {
      return;
    }
  }
LABEL_41:
  if (v31 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v27 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v27, v23);
  }
}

__n128 GameHr_a30fe0(__int64 a1, __int64 a2)
{
  __n128 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  _BYTE v9[200];
  _QWORD v10[2];
  _QWORD v11[2];

  *(struct PseudoSret*)(v10) = GameRoutine_d98c0(*(_QWORD*)(a1 + 8));
  if ((GameRoutine_1120d0(v10) & 1) != 0) {
    v5 = GameRoutine_112290(v10);
    v6 = v5 != 0 ? v5 - 5592 : 0LL;
    if ((GameRoutine_126c90(v6 + 40) & 1) == 0 &&
        (GameRoutine_126cb0(v6 + 40) & 1) == 0 &&
        (GameRoutine_126cc0(v6 + 40) & 1) == 0) {
      if (GameRoutine_10d1b0(a2) == 0.0f) {
        GameRoutine_10cb00(v9, "FadeTime_BGM_Bmap_In_Next");
      }
      else {
        GameRoutine_10cd70(v9, a2);
      }
      *(struct PseudoSret*)(v11) = GameRoutine_d98c0(*(_QWORD*)(a1 + 8));
      v7 = GameRoutine_112290(v11);
      if (v7 != 0 && (GameRoutine_149a90(v7 - 5592) & 1) == 0) {
        (*(void (**)(_QWORD, _BYTE*, _QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
            *(_QWORD*)(a1 + 8), v9, 0);
      }
      if ((*(_BYTE*)(a1 + 2824) & 1) != 0) {
        v8 = *(_BYTE**)(a1 + 2840);
        *(_QWORD*)(a1 + 2832) = 0;
      }
      else {
        v8 = (_BYTE*)(a1 + 2825);
        *(_BYTE*)(a1 + 2824) = 0;
      }
      *v8 = 0;
      return GameRoutine_10cff0(v9);
    }
  }
  return result;
}

__int64 GameHr_a343a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  char* v11;
  unsigned int v12;
  __int64 v13;
  char* v14;
  __int64 i;
  __int64 v16;
  unsigned __int8* v17;
  char* v18;
  unsigned int v19;
  __int64 v20;
  char* v21;
  __int64 j;
  __int64 v23;
  unsigned __int8* v24;
  char* v25;
  unsigned int v26;
  __int64 v27;
  char* v28;
  __int64 k;
  __int64 v30;
  unsigned __int8* v31;
  char* v32;
  unsigned int v33;
  __int64 v34;
  char* v35;
  __int64 m;
  __int64 v37;
  unsigned __int8* v38;
  char* v39;
  unsigned int v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v45;
  __int64 v46;
  _BOOL4 v47;
  _BOOL4 v48;
  int v49;
  _BYTE v50[208];

  if (*GameData_212ce90[0] != 0 && GameData_21caab0 != 0 &&
      ((v2 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d1e50)) != 0 &&
           *(_DWORD*)(v2 + 32) != 0 ||
       GameData_21caab0 != 0 &&
           ((v5 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                     &GameData_21d1e50)) == 0 ||
            *(_DWORD*)(v5 + 32) == 0) &&
           GameData_21caab0 != 0 &&
           (v6 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                    &GameData_21d1e40)) != 0 &&
           *(_DWORD*)(v6 + 32) != 0) &&
      GameData_21caab0 != 0) {
    v3 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                            &GameData_21d1e50);
    if (v3 != 0) {
      v48 = *(_DWORD*)(v3 + 32) != 0;
      v4 = GameData_21caab0;
      if (GameData_21caab0 == 0) {
        goto LABEL_121;
      }
    }
    else {
      v48 = false;
      v4 = GameData_21caab0;
      if (GameData_21caab0 == 0) {
      LABEL_121:
        v47 = false;
        goto LABEL_16;
      }
    }
    v45 = GameRoutine_65c580(*(_QWORD*)(v4 + 48), &GameData_21d1e50);
    if (v45 != 0 && *(_DWORD*)(v45 + 32) != 0) {
      goto LABEL_121;
    }
    if (GameData_21caab0 == 0) {
      goto LABEL_121;
    }
    v46 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                             &GameData_21d1e40);
    if (v46 == 0) {
      goto LABEL_121;
    }
    v47 = *(_DWORD*)(v46 + 32) != 0;
  }
  else {
    v47 = false;
    v48 = false;
  }
LABEL_16:
  v7 = a1 + 1480;
  v8 = 1996;
  v49 = 0;
  do {
    v9 = *(unsigned int*)(a1 + v8);
    if ((v9 & 0x80000000) == 0) {
      v10 = (unsigned __int8*)(v7 + 32 * v9);
      if (*v10 != 10) {
        v11 = (v10[8] & 1) != 0 ? *((char**)v10 + 3) : (char*)(v10 + 9);
        if (GameRoutine_6c1b20(*(_QWORD*)(GameData_21ca310 + 56) + 24LL * *v10 +
                                   556000,
                               v11) == 0) {
          v12 = *v10;
          v13 = *(_QWORD*)(GameData_21ca310 + 56);
          if (v11 != nullptr) {
            v14 = v11;
            if (v12 == 1) {
              if ((unsigned int)GameRoutine_1a09d30(v11, &GameData_1ade2f6) !=
                  0) {
                if ((unsigned int)GameRoutine_1a09d30(v11, &GameData_1ab3e06) !=
                    0) {
                  v14 = v11;
                }
                else {
                  v14 = (char*)&GameData_1ada738;
                }
              }
              else {
                v14 = (char*)&GameData_1ac6ccb;
              }
            }
          }
          else {
            v14 = &GameData_1a9f09e;
          }
          if (GameRoutine_6c1b20(v13 + 24LL * v12 + 556000, v14) == 0) {
            v49 |= GameRoutine_a339e0(a1, *v10, v11);
          }
        }
      }
    }
    v8 += 4;
  } while (v8 != 2028);
  for (i = 2032; i != 2064; i += 4) {
    v16 = *(unsigned int*)(a1 + i);
    if ((v16 & 0x80000000) == 0) {
      v17 = (unsigned __int8*)(v7 + 32 * v16);
      if (*v17 != 10) {
        v18 = (v17[8] & 1) != 0 ? *((char**)v17 + 3) : (char*)(v17 + 9);
        if (GameRoutine_6c1b20(*(_QWORD*)(GameData_21ca310 + 56) + 24LL * *v17 +
                                   556000,
                               v18) == 0) {
          v19 = *v17;
          v20 = *(_QWORD*)(GameData_21ca310 + 56);
          if (v18 != nullptr) {
            v21 = v18;
            if (v19 == 1) {
              if ((unsigned int)GameRoutine_1a09d30(v18, &GameData_1ade2f6) !=
                  0) {
                if ((unsigned int)GameRoutine_1a09d30(v18, &GameData_1ab3e06) !=
                    0) {
                  v21 = v18;
                }
                else {
                  v21 = (char*)&GameData_1ada738;
                }
              }
              else {
                v21 = (char*)&GameData_1ac6ccb;
              }
            }
          }
          else {
            v21 = &GameData_1a9f09e;
          }
          if (GameRoutine_6c1b20(v20 + 24LL * v19 + 556000, v21) == 0) {
            v49 |= GameRoutine_a339e0(a1, *v17, v18);
          }
        }
      }
    }
  }
  for (j = 2068; j != 2100; j += 4) {
    v23 = *(unsigned int*)(a1 + j);
    if ((v23 & 0x80000000) == 0) {
      v24 = (unsigned __int8*)(v7 + 32 * v23);
      if (*v24 != 10) {
        v25 = (v24[8] & 1) != 0 ? *((char**)v24 + 3) : (char*)(v24 + 9);
        if (GameRoutine_6c1b20(*(_QWORD*)(GameData_21ca310 + 56) + 24LL * *v24 +
                                   556000,
                               v25) == 0) {
          v26 = *v24;
          v27 = *(_QWORD*)(GameData_21ca310 + 56);
          if (v25 != nullptr) {
            v28 = v25;
            if (v26 == 1) {
              if ((unsigned int)GameRoutine_1a09d30(v25, &GameData_1ade2f6) !=
                  0) {
                if ((unsigned int)GameRoutine_1a09d30(v25, &GameData_1ab3e06) !=
                    0) {
                  v28 = v25;
                }
                else {
                  v28 = (char*)&GameData_1ada738;
                }
              }
              else {
                v28 = (char*)&GameData_1ac6ccb;
              }
            }
          }
          else {
            v28 = &GameData_1a9f09e;
          }
          if (GameRoutine_6c1b20(v27 + 24LL * v26 + 556000, v28) == 0) {
            v49 |= GameRoutine_a339e0(a1, *v24, v25);
          }
        }
      }
    }
  }
  for (k = 2104; k != 2136; k += 4) {
    v30 = *(unsigned int*)(a1 + k);
    if ((v30 & 0x80000000) == 0) {
      v31 = (unsigned __int8*)(v7 + 32 * v30);
      if (*v31 != 10) {
        v32 = (v31[8] & 1) != 0 ? *((char**)v31 + 3) : (char*)(v31 + 9);
        if (GameRoutine_6c1b20(*(_QWORD*)(GameData_21ca310 + 56) + 24LL * *v31 +
                                   556000,
                               v32) == 0) {
          v33 = *v31;
          v34 = *(_QWORD*)(GameData_21ca310 + 56);
          if (v32 != nullptr) {
            v35 = v32;
            if (v33 == 1) {
              if ((unsigned int)GameRoutine_1a09d30(v32, &GameData_1ade2f6) !=
                  0) {
                if ((unsigned int)GameRoutine_1a09d30(v32, &GameData_1ab3e06) !=
                    0) {
                  v35 = v32;
                }
                else {
                  v35 = (char*)&GameData_1ada738;
                }
              }
              else {
                v35 = (char*)&GameData_1ac6ccb;
              }
            }
          }
          else {
            v35 = &GameData_1a9f09e;
          }
          if (GameRoutine_6c1b20(v34 + 24LL * v33 + 556000, v35) == 0) {
            v49 |= GameRoutine_a339e0(a1, *v31, v32);
          }
        }
      }
    }
  }
  for (m = 2140; m != 2172; m += 4) {
    v37 = *(unsigned int*)(a1 + m);
    if ((v37 & 0x80000000) == 0) {
      v38 = (unsigned __int8*)(v7 + 32 * v37);
      if (*v38 != 10) {
        v39 = (v38[8] & 1) != 0 ? *((char**)v38 + 3) : (char*)(v38 + 9);
        if (GameRoutine_6c1b20(*(_QWORD*)(GameData_21ca310 + 56) + 24LL * *v38 +
                                   556000,
                               v39) == 0) {
          v40 = *v38;
          v41 = *(_QWORD*)(GameData_21ca310 + 56);
          if (v39 != nullptr) {
            v42 = v39;
            if (v40 == 1) {
              if ((unsigned int)GameRoutine_1a09d30(v39, &GameData_1ade2f6) !=
                  0) {
                if ((unsigned int)GameRoutine_1a09d30(v39, &GameData_1ab3e06) !=
                    0) {
                  v42 = v39;
                }
                else {
                  v42 = (char*)&GameData_1ada738;
                }
              }
              else {
                v42 = (char*)&GameData_1ac6ccb;
              }
            }
          }
          else {
            v42 = &GameData_1a9f09e;
          }
          if (GameRoutine_6c1b20(v41 + 24LL * v40 + 556000, v42) == 0) {
            v49 |= GameRoutine_a339e0(a1, *v38, v39);
          }
        }
      }
    }
  }
  if ((((v48 || v47) | v49) & 1) == 0 &&
      (GameRoutine_d9850(*(_QWORD*)(a1 + 8)) & 1) == 0) {
    if ((*(_BYTE*)(a1 + 2896) & 1) != 0) {
      v43 = *(_QWORD*)(a1 + 2904);
    }
    else {
      v43 = *(_BYTE*)(a1 + 2896) >> 1;
    }
    if (v43 != 0) {
      GameRoutine_10cb00(v50, "FadeTime_BGM_Bmap_In");
      GameRoutine_a2fc30(a1, (__int64)v50);
      GameRoutine_10cff0(v50);
    }
    else {
      *(_QWORD*)(a1 + 2172) = 0;
      GameRoutine_a28e10(a1, 0);
    }
  }
  return v49 & 1;
}

__int64 GameHr_c0f580(__int64 a1, long double a2)
{
  __int64 v2;
  __int64 v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  long double v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  __int64 i;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  long double v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  long double v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  long double v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char v60;
  __int64 v61;
  char v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  char v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  long double v76;
  _QWORD* v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  _QWORD* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  _QWORD* v89;
  long double v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  _QWORD* v94;
  _QWORD* v95;
  long double v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  _QWORD* v100;
  _QWORD* v101;
  long double v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  _QWORD* v112;
  _QWORD* v113;
  __int64 v114;
  __int64 v115;
  long double v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  long double v121;
  __int64 v122;
  __int64 v123;
  long double v124;
  __int64 v125;
  __int64 v126;
  long double v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  long double v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  _QWORD* v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 result;
  __int64 v145;

  v2 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    GameRoutine_1a09c50(v2);
  }
  v4 = *(_QWORD*)(a1 + 288);
  *(_QWORD*)(a1 + 288) = 0;
  if (v4 != 0) {
    GameRoutine_c1af60(v4);
    v6 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v6 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v6, v5);
  }
  v7 = *(_QWORD*)(a1 + 296);
  *(_QWORD*)(a1 + 296) = 0;
  if (v7 != 0) {
    GameRoutine_c72960(v7);
    v9 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v9 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v9, v8);
  }
  v10 = *(_QWORD**)(a1 + 304);
  v11 = *(_QWORD**)(a1 + 312);
  while (v11 != v10) {
    v13 = *--v11;
    v12 = v13;
    *v11 = 0;
    if (v13 != 0) {
      GameRoutine_c27c00(v12);
      if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
        v15 = 128;
      }
      else {
        v15 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v15, v14);
    }
  }
  v16 = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(a1 + 312) = v10;
  *(_QWORD*)(a1 + 264) = 0;
  if (v16 != 0) {
    GameRoutine_c27c00(v16);
    v18 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v18 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v18, v17);
  }
  v19 = *(_QWORD*)(a1 + 280);
  *(_QWORD*)(a1 + 280) = 0;
  if (v19 != 0) {
    GameRoutine_c18a80(v19);
    v21 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v21 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v21, v20);
  }
  for (i = *(_QWORD*)(a1 + 336);; i -= 8) {
    v23 = *(_QWORD*)(a1 + 328);
    if (i == v23) {
      break;
    }
    v24 = *(_QWORD*)(i - 8);
    GameRoutine_634d80(*(_QWORD*)(v24 + 8), v24);
  }
  v25 = *(_QWORD*)(a1 + 344);
  *(_QWORD*)(a1 + 336) = v23;
  if (v25 != v23) {
    *(_QWORD*)(a1 + 336) = 0;
    *(_QWORD*)(a1 + 344) = 0;
    *(_QWORD*)(a1 + 328) = 0;
    if (v23 != 0) {
      v26 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v26 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v26, a2);
    }
  }
  if (*(_QWORD*)(a1 + 480) != 0) {
    v27 = *(_QWORD**)(a1 + 472);
    if (v27 != nullptr) {
      do {
        v28 = (_QWORD*)*v27;
        GameRoutine_c187e0(v27 + 2);
        if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v30, v29);
        v27 = v28;
      } while (v28 != nullptr);
    }
    v31 = *(_QWORD*)(a1 + 464);
    *(_QWORD*)(a1 + 472) = 0;
    if (v31 != 0) {
      v32 = v31 & 7;
      if (v31 >= 8) {
        v34 = v31 & 0xFFFFFFFFFFFFFFF8LL;
        v33 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8 * v33) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8 * v33 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8 * v33 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8 * v33 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8 * v33 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8 * v33 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 456) + 8 * v33 + 48) = 0;
          v35 = *(_QWORD*)(a1 + 456) + 8 * v33;
          v33 += 8;
          *(_QWORD*)(v35 + 56) = 0;
        } while (v34 != v33);
      }
      else {
        v33 = 0;
      }
      if (v32 != 0) {
        v36 = 8 * v33;
        do {
          --v32;
          *(_QWORD*)(*(_QWORD*)(a1 + 456) + v36) = 0;
          v36 += 8;
        } while (v32 != 0);
      }
    }
    *(_QWORD*)(a1 + 480) = 0;
  }
  if (*(_QWORD*)(a1 + 440) != 0) {
    v37 = *(_QWORD**)(a1 + 432);
    if (v37 != nullptr) {
      do {
        v38 = (_QWORD*)*v37;
        GameRoutine_c187e0(v37 + 2);
        if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v40, v39);
        v37 = v38;
      } while (v38 != nullptr);
    }
    v41 = *(_QWORD*)(a1 + 424);
    *(_QWORD*)(a1 + 432) = 0;
    if (v41 != 0) {
      v42 = v41 & 7;
      if (v41 >= 8) {
        v44 = v41 & 0xFFFFFFFFFFFFFFF8LL;
        v43 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 416) + 8 * v43) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 416) + 8 * v43 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 416) + 8 * v43 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 416) + 8 * v43 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 416) + 8 * v43 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 416) + 8 * v43 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 416) + 8 * v43 + 48) = 0;
          v45 = *(_QWORD*)(a1 + 416) + 8 * v43;
          v43 += 8;
          *(_QWORD*)(v45 + 56) = 0;
        } while (v44 != v43);
      }
      else {
        v43 = 0;
      }
      if (v42 != 0) {
        v46 = 8 * v43;
        do {
          --v42;
          *(_QWORD*)(*(_QWORD*)(a1 + 416) + v46) = 0;
          v46 += 8;
        } while (v42 != 0);
      }
    }
    *(_QWORD*)(a1 + 440) = 0;
  }
  if (*(_QWORD*)(a1 + 400) != 0) {
    v47 = *(_QWORD**)(a1 + 392);
    if (v47 != nullptr) {
      do {
        v48 = (_QWORD*)*v47;
        GameRoutine_c187e0(v47 + 2);
        if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
          v50 = 128;
        }
        else {
          v50 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v50, v49);
        v47 = v48;
      } while (v48 != nullptr);
    }
    v51 = *(_QWORD*)(a1 + 384);
    *(_QWORD*)(a1 + 392) = 0;
    if (v51 != 0) {
      v52 = v51 & 7;
      if (v51 >= 8) {
        v54 = v51 & 0xFFFFFFFFFFFFFFF8LL;
        v53 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 376) + 8 * v53) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 376) + 8 * v53 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 376) + 8 * v53 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 376) + 8 * v53 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 376) + 8 * v53 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 376) + 8 * v53 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 376) + 8 * v53 + 48) = 0;
          v55 = *(_QWORD*)(a1 + 376) + 8 * v53;
          v53 += 8;
          *(_QWORD*)(v55 + 56) = 0;
        } while (v54 != v53);
      }
      else {
        v53 = 0;
      }
      if (v52 != 0) {
        v56 = 8 * v53;
        do {
          --v52;
          *(_QWORD*)(*(_QWORD*)(a1 + 376) + v56) = 0;
          v56 += 8;
        } while (v52 != 0);
      }
    }
    *(_QWORD*)(a1 + 400) = 0;
  }
  v57 = *(_QWORD*)(a1 + 624);
  *(_QWORD*)(a1 + 360) = *(_QWORD*)(a1 + 352);
  *(_QWORD*)(a1 + 656) = *(_QWORD*)(a1 + 648);
  v58 = *(_QWORD*)(a1 + 632);
  if (v57 != v58) {
    v59 = *(_QWORD*)(a1 + 632);
    do {
      v60 = *(_BYTE*)(v59 - 24);
      v59 -= 24;
      if ((v60 & 1) != 0 && *(_QWORD*)(v58 - 8) != 0) {
        if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
          v61 = 128;
        }
        else {
          v61 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v61, a2);
      }
      v58 = v59;
    } while (v59 != v57);
  }
  v62 = *(_BYTE*)(a1 + 40);
  *(_QWORD*)(a1 + 632) = v57;
  if ((v62 & 1) != 0) {
    **(_BYTE**)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 48) = 0;
    if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
      goto LABEL_92;
    }
  }
  else {
    *(_WORD*)(a1 + 40) = 0;
    if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    LABEL_92:
      **(_BYTE**)(a1 + 80) = 0;
      *(_QWORD*)(a1 + 72) = 0;
      goto LABEL_95;
    }
  }
  *(_WORD*)(a1 + 64) = 0;
LABEL_95:
  v63 = *(_QWORD*)(a1 + 648);
  *(_DWORD*)(a1 + 240) = 0;
  if (v63 != 0) {
    v64 = GameData_2265ee0;
    *(_QWORD*)(a1 + 656) = v63;
    v65 = 128;
    if (*(_QWORD*)(v64 + 200) == 0) {
      v65 = 56;
    }
    GameRoutine_1a0a4e0(v64 + v65, a2);
  }
  v66 = *(_QWORD*)(a1 + 624);
  if (v66 != 0) {
    v67 = *(_QWORD*)(a1 + 632);
    if (v66 == v67) {
      goto LABEL_110;
    }
    v68 = *(_QWORD*)(a1 + 632);
    do {
      v69 = *(_BYTE*)(v68 - 24);
      v68 -= 24;
      if ((v69 & 1) != 0 && *(_QWORD*)(v67 - 8) != 0) {
        if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
          v70 = 128;
        }
        else {
          v70 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v70, a2);
      }
      v67 = v68;
    } while (v68 != v66);
    v71 = *(_QWORD*)(a1 + 624);
    *(_QWORD*)(a1 + 632) = v66;
    if (v71 != 0) {
    LABEL_110:
      v72 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v72 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v72, a2);
    }
  }
  v73 = *(_QWORD*)(a1 + 600);
  if (v73 != 0) {
    v74 = GameData_2265ee0;
    *(_QWORD*)(a1 + 608) = v73;
    v75 = 128;
    if (*(_QWORD*)(v74 + 200) == 0) {
      v75 = 56;
    }
    GameRoutine_1a0a4e0(v74 + v75, a2);
  }
  v145 = a1 + 576;
  GameRoutine_c180a0(&v145);
  v77 = *(_QWORD**)(a1 + 552);
  while (v77 != nullptr) {
    v79 = v77;
    v77 = (_QWORD*)*v77;
    if ((v79[2] & 1) != 0 && v79[4] != 0) {
      if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
        v80 = 128;
      }
      else {
        v80 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v80, v76);
    }
    if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
      v78 = 128;
    }
    else {
      v78 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v78, v76);
  }
  v81 = *(_QWORD*)(a1 + 536);
  *(_QWORD*)(a1 + 536) = 0;
  if (v81 != 0) {
    v82 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v82 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v82, v76);
  }
  v83 = *(_QWORD**)(a1 + 512);
  if (v83 != nullptr) {
    do {
      v84 = (_QWORD*)*v83;
      if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
        v85 = 128;
      }
      else {
        v85 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v85, v76);
      v83 = v84;
    } while (v84 != nullptr);
  }
  v86 = *(_QWORD*)(a1 + 496);
  *(_QWORD*)(a1 + 496) = 0;
  if (v86 != 0) {
    v87 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v87 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v87, v76);
  }
  v88 = *(_QWORD**)(a1 + 472);
  if (v88 != nullptr) {
    do {
      v89 = (_QWORD*)*v88;
      GameRoutine_c187e0(v88 + 2);
      if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
        v91 = 128;
      }
      else {
        v91 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v91, v90);
      v88 = v89;
    } while (v89 != nullptr);
  }
  v92 = *(_QWORD*)(a1 + 456);
  *(_QWORD*)(a1 + 456) = 0;
  if (v92 != 0) {
    v93 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v93 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v93, v76);
  }
  v94 = *(_QWORD**)(a1 + 432);
  if (v94 != nullptr) {
    do {
      v95 = (_QWORD*)*v94;
      GameRoutine_c187e0(v94 + 2);
      if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
        v97 = 128;
      }
      else {
        v97 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v97, v96);
      v94 = v95;
    } while (v95 != nullptr);
  }
  v98 = *(_QWORD*)(a1 + 416);
  *(_QWORD*)(a1 + 416) = 0;
  if (v98 != 0) {
    v99 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v99 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v99, v76);
  }
  v100 = *(_QWORD**)(a1 + 392);
  if (v100 != nullptr) {
    do {
      v101 = (_QWORD*)*v100;
      GameRoutine_c187e0(v100 + 2);
      if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
        v103 = 128;
      }
      else {
        v103 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v103, v102);
      v100 = v101;
    } while (v101 != nullptr);
  }
  v104 = *(_QWORD*)(a1 + 376);
  *(_QWORD*)(a1 + 376) = 0;
  if (v104 != 0) {
    v105 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v105 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v105, v76);
  }
  v106 = *(_QWORD*)(a1 + 352);
  if (v106 != 0) {
    v107 = GameData_2265ee0;
    *(_QWORD*)(a1 + 360) = v106;
    v108 = 128;
    if (*(_QWORD*)(v107 + 200) == 0) {
      v108 = 56;
    }
    GameRoutine_1a0a4e0(v107 + v108, v76);
  }
  v109 = *(_QWORD*)(a1 + 328);
  if (v109 != 0) {
    v110 = GameData_2265ee0;
    *(_QWORD*)(a1 + 336) = v109;
    v111 = 128;
    if (*(_QWORD*)(v110 + 200) == 0) {
      v111 = 56;
    }
    GameRoutine_1a0a4e0(v110 + v111, v76);
  }
  v112 = *(_QWORD**)(a1 + 304);
  if (v112 != nullptr) {
    v113 = *(_QWORD**)(a1 + 312);
    if (v112 == v113) {
      goto LABEL_187;
    }
    do {
      v115 = *--v113;
      v114 = v115;
      *v113 = 0;
      if (v115 != 0) {
        GameRoutine_c27c00(v114);
        if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
          v117 = 128;
        }
        else {
          v117 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v117, v116);
      }
    } while (v113 != v112);
    v118 = *(_QWORD*)(a1 + 304);
    *(_QWORD*)(a1 + 312) = v112;
    if (v118 != 0) {
    LABEL_187:
      v119 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v119 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v119, v76);
    }
  }
  v120 = *(_QWORD*)(a1 + 296);
  *(_QWORD*)(a1 + 296) = 0;
  if (v120 != 0) {
    GameRoutine_c72960(v120);
    v122 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v122 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v122, v121);
  }
  v123 = *(_QWORD*)(a1 + 288);
  *(_QWORD*)(a1 + 288) = 0;
  if (v123 != 0) {
    GameRoutine_c1af60(v123);
    v125 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v125 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v125, v124);
  }
  v126 = *(_QWORD*)(a1 + 280);
  *(_QWORD*)(a1 + 280) = 0;
  if (v126 != 0) {
    GameRoutine_c18a80(v126);
    v128 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v128 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v128, v127);
  }
  v129 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(a1 + 272) = 0;
  if (v129 != 0) {
    if (*(_BYTE*)(v129 + 64) == 1) {
      GameRoutine_198f8e0(v129 + 24);
      if (*(_BYTE*)(v129 + 64) == 1) {
        GameRoutine_198e2c0(v129 + 24);
      }
    }
    v130 = *(_QWORD*)(v129 + 16);
    if (v130 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v130 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v130 + 16LL))(v130);
      GameRoutine_1a09c50(v130);
    }
    v131 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v131 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v131, v76);
  }
  v132 = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(a1 + 264) = 0;
  if (v132 != 0) {
    GameRoutine_c27c00(v132);
    v134 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v134 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v134, v133);
  }
  if ((*(_BYTE*)(a1 + 216) & 1) != 0 && *(_QWORD*)(a1 + 232) != 0) {
    v135 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v135 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v135, v76);
  }
  if ((*(_BYTE*)(a1 + 192) & 1) != 0 && *(_QWORD*)(a1 + 208) != 0) {
    v136 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v136 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v136, v76);
  }
  if ((*(_BYTE*)(a1 + 168) & 1) != 0 && *(_QWORD*)(a1 + 184) != 0) {
    v137 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v137 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v137, v76);
  }
  v138 = *(_QWORD**)(a1 + 144);
  if (v138 == (_QWORD*)(a1 + 112)) {
    v139 = 32;
    goto LABEL_235;
  }
  if (v138 != nullptr) {
    v139 = 40;
  LABEL_235:
    (*(void (**)(__int64))(*v138 + v139))((__int64)v138);
  }
  if ((*(_BYTE*)(a1 + 88) & 1) != 0 && *(_QWORD*)(a1 + 104) != 0) {
    v140 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v140 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v140, v76);
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0 && *(_QWORD*)(a1 + 80) != 0) {
    v141 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v141 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v141, v76);
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0 && *(_QWORD*)(a1 + 56) != 0) {
    v142 = 128;
    if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
      v142 = 56;
    }
    GameRoutine_1a0a4e0(GameData_2265ee0 + v142, v76);
  }
  v143 = *(_QWORD*)(a1 + 32);
  if (v143 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v143 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) != 0) {
    result = *(_QWORD*)(a1 + 16);
    if (result == 0) {
      return result;
    }
    return GameRoutine_1a09c50(result);
  }
  (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(v143);
  GameRoutine_1a09c50(v143);
  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    return GameRoutine_1a09c50(result);
  }
  return result;
}

_BYTE* GameHr_c253a0(_QWORD* a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  _BYTE* v18;
  long double v19;
  char* i;
  char* v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _BYTE* result;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _BYTE v30[32];
  _BYTE* v31;
  __int64 v32;
  char* v33;
  char* v34;
  unsigned __int64 v35;
  _QWORD* v36;

  v3 = a2[1];
  v28 = *a2;
  v29 = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = *(_QWORD*)(a3 + 32);
  if (v5 != 0) {
    if (v5 == a3) {
      v31 = v30;
      v5 = (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v30);
    }
    else {
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      v31 = (_BYTE*)v5;
    }
  }
  else {
    v31 = nullptr;
  }
  v6 = a1[27];
  v7 = (_QWORD*)a1[26];
  if ((unsigned __int64)v7 < v6) {
    *v7 = v28;
    v7[1] = v29;
    if (v29 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v31 != nullptr) {
      if (v31 == v30) {
        v7[6] = v7 + 2;
        (*(void (**)(_BYTE*))(*(_QWORD*)v31 + 24LL))(v31);
      }
      else {
        v7[6] = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 16LL))((__int64)v31);
      }
      v8 = v7 + 8;
    }
    else {
      v7[6] = 0;
      v8 = v7 + 8;
    }
    goto LABEL_49;
  }
  v9 = a1[25];
  v10 = (char*)v7 - v9;
  v11 = (((__int64)v7 - v9) >> 6) + 1;
  if (v11 >> 58 != 0) {
    GameRoutine_c25a10();
  }
  v12 = v6 - v9;
  v36 = a1 + 27;
  v13 = v12 >> 5;
  v14 = GameData_212bf68;
  if (v12 >> 5 <= v11) {
    v13 = v11;
  }
  if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFC0LL) {
    v15 = 0x3FFFFFFFFFFFFFFLL;
  }
  else {
    v15 = v13;
  }
  if (v15 != 0) {
    if (v15 >> 58 != 0) {
      GameRoutine_60a210(v5);
    }
    v16 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v15 << 6, 16, 0);
  }
  else {
    v16 = 0;
  }
  v17 = &v10[v16];
  v32 = v16;
  v33 = v17;
  v35 = v16 + (v15 << 6);
  *(_QWORD*)v17 = v28;
  *((_QWORD*)v17 + 1) = v29;
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                              memory_order_relaxed);
  }
  v18 = v31;
  if (v31 != nullptr) {
    if (v31 == v30) {
      *((_QWORD*)v17 + 6) = v17 + 16;
      (*(void (**)(_BYTE*))(*(_QWORD*)v18 + 24LL))(v18);
    }
    else {
      *((_QWORD*)v17 + 6) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 16LL))((__int64)v31);
    }
  }
  else {
    *((_QWORD*)v17 + 6) = 0;
  }
  v34 = v17 + 64;
  GameRoutine_c25a40(a1 + 25, &v32);
  v8 = (_QWORD*)a1[26];
  v21 = v33;
  for (i = v34; v21 != v34; i = v34) {
    v22 = *((char**)i - 2);
    v34 = i - 64;
    if (v22 == i - 48) {
      v23 = 32;
    }
    else {
      if (v22 == nullptr) {
        goto LABEL_42;
      }
      v23 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v22 + v23))((__int64)v22);
  LABEL_42:
    v24 = *((_QWORD*)i - 7);
    if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      GameRoutine_1a09c50(v24);
    }
  }
  if (v32 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v25 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v14 + v25, v19);
  }
LABEL_49:
  result = v31;
  a1[26] = v8;
  if (result == v30) {
    v27 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_54;
    }
    v27 = 40;
  }
  result = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)result + v27))(
      (__int64)result);
LABEL_54:
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    return (_BYTE*)GameRoutine_1a09c50(v29);
  }
  return result;
}

_QWORD* GameHr_c34690(__int64 a1, long double a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* result;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(_QWORD**)(a1 + 344);
  *(_QWORD*)(a1 + 344) = 0;
  v4 = GameData_212bf68;
  if (v2 != nullptr) {
    if (*v2 != 0) {
      v5 = *(_QWORD*)GameData_212bf68;
      v2[1] = *v2;
      v6 = 128;
      if (*(_QWORD*)(v5 + 200) == 0) {
        v6 = 56;
      }
      GameRoutine_1a0a4e0(v5 + v6, a2);
    }
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v7 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v4 + v7, a2);
  }
  v8 = *(_QWORD*)(a1 + 320);
  if (v8 != 0) {
    v9 = *(_QWORD*)v4;
    *(_QWORD*)(a1 + 328) = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    GameRoutine_1a0a4e0(v9 + v10, a2);
  }
  if ((*(_BYTE*)(a1 + 208) & 1) != 0 && *(_QWORD*)(a1 + 224) != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v11 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v4 + v11, a2);
  }
  v12 = *(_QWORD**)(a1 + 176);
  if (v12 == (_QWORD*)(a1 + 144)) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_23;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
LABEL_23:
  result = *(_QWORD**)(a1 + 128);
  if (result == (_QWORD*)(a1 + 96)) {
    v15 = 32;
    goto LABEL_27;
  }
  if (result != nullptr) {
    v15 = 40;
  LABEL_27:
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v15))((__int64)result);
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0 && *(_QWORD*)(a1 + 72) != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v4 + v16, a2);
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0 && *(_QWORD*)(a1 + 48) != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v17 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v4 + v17, a2);
  }
  return result;
}

_QWORD* GameHr_c539f0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* result;
  __int64 v14;

  v2 = a1 + 30;
  v3 = (_QWORD*)a1[34];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[28];
  if (v5 == a1 + 24) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_11:
  v7 = (_QWORD*)a1[22];
  if (v7 == a1 + 18) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_16:
  v9 = (_QWORD*)a1[16];
  if (v9 == a1 + 12) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_21;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_21:
  v11 = (_QWORD*)a1[10];
  if (v11 == a1 + 6) {
    v12 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_26;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
LABEL_26:
  result = (_QWORD*)a1[4];
  if (result == a1) {
    v14 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v14 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v14))((__int64)result);
}

_QWORD* GameHr_c77cb0(float a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  __int64 v12;
  int v13;
  int v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  _QWORD* result;
  __int64 v21;
  int v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float v28;
  __int64 v29;
  long double v30;
  __int64 v31;
  int v32;
  _QWORD* v33;
  __int64 v34;
  float v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v2 = GameData_212c370;
  v3 = *GameData_212c370;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 24) + 456LL))(
           *(_QWORD*)(v5 + 24)) &
       1) != 0) {
    v6 = *v2;
    v7 = *(_QWORD*)(v6 +
                    8LL * (*(unsigned int (**)(__int64))(
                              *(_QWORD*)GameData_21a6070 + 72LL))(
                              GameData_21a6070) +
                    4384);
    if (v7 != 0) {
      v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
    }
    else {
      v9 = 0;
    }
    v10 = *(_DWORD*)(v9 + 1176);
    if (v10 == 7) {
      GameRoutine_192f90(*(_QWORD*)(v9 + 1152));
    }
    else {
      if (v10 != 4) {
      LABEL_14:
        *(float*)(v9 + 1152) = a1;
        *(_DWORD*)(v9 + 1176) = 3;
        goto LABEL_15;
      }
      v11 = *(_QWORD**)(v9 + 1152);
      if ((*(_BYTE*)v11 & 1) != 0) {
        GameRoutine_25ec90(v11[2], *v11 & 0xFFFFFFFFFFFFFFFELL);
      }
      v12 = 368;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 440LL) == 0) {
        v12 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v12, v8);
    }
    *(_QWORD*)(v9 + 1152) = 0;
    goto LABEL_14;
  }
LABEL_15:
  if (GameData_21ee240 != 0 &&
      (unsigned int)*(unsigned __int8*)(GameData_21ee240 + 152) - 1 <= 2) {
    v13 = *(_DWORD*)(GameData_21ee240 + 156);
    if ((v13 & 8) != 0) {
      v14 = 2;
    }
    else {
      v14 = 3;
    }
    v15 = (v14 & v13) == 0;
  }
  else {
    v15 = false;
  }
  v16 = *v2;
  v17 = *(
      _QWORD*)(v16 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v17 != 0) {
    v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 472LL))(v17);
    if (v15) {
      goto LABEL_24;
    }
  LABEL_28:
    v22 = *(_DWORD*)(v19 + 1176);
    switch (v22) {
    case 5:
      LOBYTE(v18) = *(_BYTE*)(v19 + 1152);
      v23 = (float)v18;
      break;
    case 2:
      v23 = (float)*(unsigned int*)(v19 + 1152);
      break;
    case 1:
      v23 = (float)*(int*)(v19 + 1152);
      break;
    default:
      v23 = *(float*)(v19 + 1152);
      break;
    }
    v24 = *v2;
    v25 = *(_QWORD*)(v24 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)GameData_21a6070 + 72LL))(
                               GameData_21a6070) +
                     4384);
    if (v25 != 0) {
      v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 472LL))(v25);
      if (v23 > 0.0) {
        goto LABEL_37;
      }
    }
    else {
      v26 = 0;
      if (v23 > 0.0) {
      LABEL_37:
        v27 = *v2;
        v28 = *(float*)(*(_QWORD*)GameData_212c5c0[0] + 104LL);
        v29 = *(_QWORD*)(v27 +
                         8LL * (*(unsigned int (**)(__int64))(
                                   *(_QWORD*)GameData_21a6070 + 72LL))(
                                   GameData_21a6070) +
                         4384);
        if (v29 != 0) {
          v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 472LL))(v29);
        }
        else {
          v31 = 0;
        }
        v32 = *(_DWORD*)(v31 + 1176);
        if (v32 == 4) {
          v33 = *(_QWORD**)(v31 + 1152);
          if ((*(_BYTE*)v33 & 1) != 0) {
            GameRoutine_25ec90(v33[2], *v33 & 0xFFFFFFFFFFFFFFFELL);
          }
          v34 = 368;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 440LL) == 0) {
            v34 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v34, v30);
        }
        else {
          if (v32 != 7) {
            v35 = *(float*)(v31 + 1152);
            goto LABEL_56;
          }
          GameRoutine_192f90(*(_QWORD*)(v31 + 1152));
        }
        v35 = 0.0;
        *(_QWORD*)(v31 + 1152) = 0;
      LABEL_56:
        v36 = GameData_21a6070;
        *(_DWORD*)(v31 + 1176) = 3;
        *(float*)(v31 + 1152) = v35 - v28;
        v37 = *v2;
        v38 = *(_QWORD*)(v37 +
                         8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)v36 +
                                                              72LL))(v36) +
                         4384);
        v39 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 472LL))(v38);
        return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
            **(_QWORD**)(v39 + 24) + 448LL))(*(_QWORD*)(v39 + 24), 0);
      }
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v26 + 24) + 448LL))(
        *(_QWORD*)(v26 + 24), 1);
    result = *(_QWORD**)(v26 + 2240);
    *(_QWORD*)(v26 + 2240) = 0;
    if (result != (_QWORD*)(v26 + 2208)) {
      if (result != nullptr) {
        goto LABEL_26;
      }
      return result;
    }
  LABEL_43:
    v21 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v21))((__int64)result);
  }
  v19 = 0;
  if (!v15) {
    goto LABEL_28;
  }
LABEL_24:
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v19 + 24) + 448LL))(
      *(_QWORD*)(v19 + 24), 2);
  result = *(_QWORD**)(v19 + 2240);
  *(_QWORD*)(v19 + 2240) = 0;
  if (result == (_QWORD*)(v19 + 2208)) {
    goto LABEL_43;
  }
  if (result != nullptr) {
  LABEL_26:
    v21 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v21))((__int64)result);
  }
  return result;
}

__int64 GameHr_cba3a0(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  float v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];

  v3 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v3 != 0) {
    v4 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v5 = GameRoutine_1a0a0c0(v4);
    result = a2[1];
    if (result == 0) {
      goto LABEL_14;
    }
  }
  else {
    v5 = 0;
    result = a2[1];
    if (result == 0) {
      goto LABEL_14;
    }
  }
  result = GameRoutine_1a0a0c0(result);
  if (result != 0) {
    v7 = *a2;
    if (*a2 != 0) {
      v8 = *(_QWORD*)(*(_QWORD*)(v7 + 24) + 24LL);
      if (*(_BYTE*)(v8 + 96) == 1) {
        *(_BYTE*)(v8 + 96) = 0;
      }
      *(_BYTE*)(v8 + 25) = 0;
      if (*(_DWORD*)(v7 + 1112) == 0 &&
          (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 24LL) + 176LL) & 1) ==
              0) {
        v9 = *(float*)(v7 + 404);
        v10 = result;
        v17[0] = v7;
        v17[1] = result;
        v11 = v9 * 0.017453f;
        v12 = GameData_21f3d08;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                  memory_order_relaxed);
        v13 = GameRoutine_efb160(v12, v17);
        GameRoutine_1a09c50(v10);
        v14 = *(_QWORD*)(*(_QWORD*)(v7 + 24) + 24LL);
        *(_QWORD*)(v14 + 80) = 0x100000000LL;
        v15 = *(_QWORD*)(v14 + 16);
        *(_BYTE*)(v14 + 25) = 0;
        *(_QWORD*)(v14 + 32) = 0;
        *(_QWORD*)(v14 + 37) = 0;
        *(_BYTE*)(v14 + 48) = 0;
        *(_BYTE*)(v14 + 64) = 0;
        *(_BYTE*)(v14 + 96) = 1;
        *(float*)(v14 + 32) = v13;
        *(float*)(v14 + 80) = v11;
        GameRoutine_d523c0(*(_QWORD*)(v15 + 488));
        result = v10;
        *(_BYTE*)(v14 + 25) = 1;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v16 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = GameRoutine_1a09c50(v16);
    }
  }
LABEL_14:
  if (v5 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v3 == 0) {
      return result;
    }
    return GameRoutine_1a09c50(v3);
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  result = GameRoutine_1a09c50(v5);
  if (v3 != 0) {
    return GameRoutine_1a09c50(v3);
  }
  return result;
}

__int64 GameHr_cc4a70(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  bool v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  long double v15;
  __int64 v16;
  _QWORD v18[6];
  char v19;
  char v20;
  char v21;
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
  __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;

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
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v20 = 0;
  v21 = 0;
  memset(v18, 0, sizeof(v18));
  v19 = 0;
  v37 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v7 = *(_QWORD*)(GameData_21c9608 + 328);
  v8 = *(_DWORD*)(GameData_21c9608 + 308);
  v33 = 0;
  v34 = 0;
  LOBYTE(v35) = 0;
  v9 = (v7 & 4) == 0;
  v10 = *(_QWORD*)(a1 + 16);
  if (v9) {
    v11 = v8;
  }
  else {
    v11 = 1;
  }
  v22 = 0x500000005LL;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v12 = v10;
  }
  else {
    v12 = a1 + 1;
  }
  v38 = v12;
  v39 = GameRoutine_1a09c70(v12);
  GameRoutine_eb7d20(v18, &v38, v11);
  GameRoutine_e61c90(&GameData_2216780, v18);
  v13 = *(_QWORD*)(GameData_21c9608 + 328);
  if ((v13 & 0x20) == 0) {
    *(_QWORD*)(GameData_21c9608 + 328) = v13 | 0x20;
    if (GameData_21caab0 != 0) {
      *(_BYTE*)(GameData_21caab0 + 57) = *(_BYTE*)(GameData_21caab0 + 56);
    }
  }
  v14 = *(_QWORD*)GameData_212dbe0[0];
  *(_DWORD*)(v14 + 8) = 14;
  *(_DWORD*)(v14 + 68) = 9;
  if (*(_BYTE*)(v14 + 84) != 0) {
    *(_BYTE*)(v14 + 84) = 0;
  }
  GameRoutine_dbd8e0(GameData_21f3cf0);
  if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
    *(_BYTE*)(GameData_21f3d10 + 11) = 1;
    v38 = 0;
    v39 = 0;
    GameRoutine_efbb60(GameData_21f3d08, &v38, 0);
    if (GameData_221bea8 != 0) {
      *(_DWORD*)(GameData_221bea8 + 152) = 12;
    }
  }
  if (GameData_2212270 != 0) {
    *(_DWORD*)(GameData_2212270 + 152) = 13;
  }
  if (v37 == 1 && v35 != 0) {
    v36 = v35;
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v16 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v16, v15);
  }
  return GameRoutine_667c80(v18);
}

__int64 GameHr_cc50c0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  long double v3;
  _QWORD* v4;
  __int64 v5;
  __int64 result;
  long double v7;
  __int64 v8;
  __int128 v9;
  __int64 v10;

  v0 = GameData_21a60b0;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  v4 = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (v4 == (_QWORD*)(v2 + 2208)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_9:
  LOWORD(v9) = 0;
  result = GameData_21c9608 + 256;
  if ((__int128*)(GameData_21c9608 + 256) != &v9) {
    if ((*(_BYTE*)result & 1) != 0) {
      result = GameRoutine_64dde0(result, (char*)&v9 + 1, 0, v3);
      if ((v9 & 1) != 0 && v10 != 0) {
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v8 = 56;
        }
        return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8, v7);
      }
    }
    else {
      *(_OWORD*)result = v9;
      *(_QWORD*)(result + 16) = v10;
    }
  }
  return result;
}

__int64 GameHr_cca960(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  long double v10;
  __int64 v11;

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
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 16);
  }
  else {
    v7 = a1 + 1;
  }
  if (GameData_21caab0 != 0) {
    result = GameRoutine_125b8e0(GameData_21c9718, v7,
                                 *(unsigned __int8*)(GameData_21caab0 + 15));
    if (result == 0) {
      return result;
    }
  }
  else {
    result = GameRoutine_125b8e0(GameData_21c9718, v7, 0);
    if (result == 0) {
      return result;
    }
  }
  v9 = GameData_212bf68;
  *(_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8, 16, 0) = result;
  GameRoutine_125c2c0();
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v11 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v9 + v11, v10);
}

_QWORD* GameHr_ccad20()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  void (*v20)(void);
  _QWORD* result;
  long double v22;
  __int64 v23;
  __int64 v24;
  char v25[16];
  __int64 v26;
  char v27;
  char* v28;

  v0 = GameData_212c370;
  v1 = *GameData_212c370;
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
  v4 = *(_QWORD**)(v3 + 2240);
  *(_QWORD*)(v3 + 2240) = 0;
  if (v4 == (_QWORD*)(v3 + 2208)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_9:
  v6 = *v0;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v8 + 24) + 456LL))(
           *(_QWORD*)(v8 + 24)) &
       1) != 0) {
    if (GameData_2212270 != 0) {
      v9 = *(_QWORD*)(GameData_2212270 + 416);
      do {
        v10 = v9;
        v9 = *(_QWORD*)(v9 + 40);
      } while (v9 != 0);
    }
    else {
      v10 = 0;
    }
    GameRoutine_fffcb0(v10);
    v12 = GameData_2212270;
    v25[0] = 26;
    strcpy(&v25[1], "RunDngBunquet");
    if (GameData_2212270 != 0) {
      GameRoutine_d8b9c0(GameData_2212270 + 424, v25);
      v13 = *(_QWORD*)(*(_QWORD*)(v12 + 416) + 40LL);
      if (v13 != 0) {
        v14 = 0;
        do {
          v13 = *(_QWORD*)(v13 + 40);
          ++v14;
        } while (v13 != 0);
        v28 = v25;
        *(_DWORD*)(GameRoutine_d8bae0(v12 + 424, v25, GameData_212c028, &v28,
                                      &v27) +
                   56) = v14;
      }
    }
    if ((v25[0] & 1) != 0 && v26 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v15 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, v11);
    }
  }
  v25[0] = 26;
  strcpy(&v25[1], "RunDngBunquet");
  v16 = GameRoutine_d859a0(v25);
  v17 = *v0;
  v18 = *(
      _QWORD*)(v17 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v18 != 0) {
    v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 472LL))(v18);
  }
  else {
    v19 = 0;
  }
  v20 = *(void (**)(void))(**(_QWORD**)(v19 + 24) + 448LL);
  if ((v16 & 1) == 0) {
    v20();
    result = *(_QWORD**)(v19 + 2240);
    *(_QWORD*)(v19 + 2240) = 0;
    if (result == (_QWORD*)(v19 + 2208)) {
      v23 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_35;
      }
      v23 = 40;
    }
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v23))((__int64)result);
    goto LABEL_35;
  }
  result = (_QWORD*)((__int64 (*)(void))v20)();
LABEL_35:
  if ((v25[0] & 1) != 0 && v26 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v24 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24, v22);
  }
  return result;
}

#pragma GCC visibility pop
