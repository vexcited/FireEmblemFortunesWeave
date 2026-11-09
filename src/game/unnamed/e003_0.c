#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern char GameData_1af96e6;

extern char GameData_1af96e7;

extern char GameData_1af96e8;

extern unsigned int GameData_1b63834[6];

extern _DWORD GameData_1b7bcc8[7];

extern _DWORD GameData_1b7d8bc[7];

extern __int64 (*GameData_1fbf780[])();

extern __int64 (*GameData_1fbfbf8[])();

extern __int64 (*GameData_1fbfc70[])();

extern __int64 (*GameData_1fc12f0[])();

extern __int64 (*GameData_1fc2618[])();

extern __int64 (*GameData_1fc2698[])();

extern __int64 (*GameData_1fc64c0[])();

extern __int64 (*GameData_1fc6540[])();

extern __int64 (*GameData_1fc65c0[])();

extern __int64 (*GameData_1fd1508[])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c010[3];

extern _UNKNOWN* GameData_212c2b0;

extern __int64* GameData_212c370;

extern __int64* GameData_212de58[3];

extern __int64* GameData_212e248[2];

extern __int64 GameData_212e2d8;

extern __int64* GameData_212e340[2];

extern __int64 GameData_212e368[4];

extern _UNKNOWN** GameData_212e470[15];

extern _UNKNOWN** GameData_212e478[14];

extern _UNKNOWN** GameData_212e480[13];

extern _UNKNOWN** GameData_212e488[12];

extern _UNKNOWN** GameData_212e490[11];

extern _UNKNOWN** GameData_212e498[10];

extern _UNKNOWN** GameData_212e4a0[9];

extern _UNKNOWN** GameData_212e4a8[8];

extern _UNKNOWN** GameData_212e4b8[6];

extern _UNKNOWN** GameData_212e4c0[5];

extern _UNKNOWN** GameData_212e848[11];

extern _UNKNOWN** GameData_212e878[5];

extern __int64 GameData_21323e8[4];

extern __int64 GameData_21759e0;

extern __int64 GameData_21a6070;

extern __int64 GameData_21a60b0;

extern __int64 GameData_21a60d8;

extern int GameData_21f4d44;

extern _UNKNOWN GameData_21f4d48;

extern __int64 GameData_21fa928;

extern __int64 GameData_21fac90;

extern _UNKNOWN GameData_21fac98;

extern __int64 GameData_2265ae0;

extern __int64 GameData_2265ee0;

extern __int64 GameData_2265ee8;

extern __int64 GameData_2265ef8;

__int64 GameRoutine_1004b0(void);

__int64 GameRoutine_100510(_QWORD, _QWORD);

__int64 GameRoutine_100920(_QWORD);

__int64 GameRoutine_101660(_QWORD);

__int64 GameRoutine_1017a0(void);

__int64 GameRoutine_112180(_QWORD, _QWORD);

__int64 GameRoutine_112290(_QWORD);

struct PseudoSret GameRoutine_120380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_149a90(_QWORD);

__int64 GameRoutine_17ca40(_QWORD);

struct PseudoSret GameRoutine_17d8560(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_18e5d80(_QWORD);

__int64 GameRoutine_193ab40(_QWORD);

__int64 GameRoutine_193ac30(_QWORD, _QWORD);

__int64 GameRoutine_1946dd0(_QWORD, _QWORD);

__int64 GameRoutine_1949c20(_QWORD, _QWORD);

__int64 GameRoutine_19850c0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_19862d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a0c0(void);

__int64 GameRoutine_1a0a4e0(_QWORD, long double);

struct PseudoSret GameRoutine_1a0a790(_QWORD);

__int64 GameRoutine_1a0a8a0(_QWORD);

__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_20();

__int64 GameRoutine_25eed0(_QWORD);

struct PseudoSret GameRoutine_53bd0(_QWORD);

struct PseudoSret GameRoutine_53c20(_QWORD);

struct PseudoSret GameRoutine_540(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_5d3770(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_5de60(_QWORD, _QWORD);

__int64 GameRoutine_5deb0(_QWORD, _QWORD);

__int64 GameRoutine_5fc230(_QWORD);

__int64 GameRoutine_604020(_QWORD);

__int64 GameRoutine_604060(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_60a020(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);

__int64 GameRoutine_615760(_QWORD, _QWORD);

__int64 GameRoutine_634d80(_QWORD, _QWORD);

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD, long double);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD, long double);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__n128 GameRoutine_a2c9c0(__int64, __int64, __n128 result);

__int64 GameRoutine_a38b10(_QWORD);

__int64 GameRoutine_a4a400(_QWORD, _QWORD);

__int64 GameRoutine_a4ac60(_QWORD, _QWORD);

__int64 GameRoutine_a542c0(_QWORD, _QWORD);

void GameRoutine_a58fe0(__int64, __int64, float32x4_t*, char, float32x4_t _Q0,
                        double, double, double, double, long double);

__int64 GameRoutine_a5e4c0(_QWORD, _QWORD);

__int64 GameRoutine_a66980(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a70a20(_QWORD, _QWORD);

__int64 GameRoutine_a70ec0(_QWORD, _QWORD);

long double GameRoutine_a7b5b0(float32x4_t*, float32x4_t**, float32x4_t*,
                               __int64);

__int64 GameRoutine_a91100(__int64*, __int64, __int64, __int64);

__int64 GameRoutine_a934d0(_QWORD, _QWORD);

__int64 GameRoutine_a98560(_QWORD);

__int64 GameRoutine_a991b0(_QWORD, _QWORD);

__int64 GameRoutine_a993a0(_QWORD, _QWORD, _QWORD);

struct PseudoSret GameRoutine_a99c80(_QWORD, _QWORD);

__int64 GameRoutine_ad6560(float, float, float);

__int64 GameRoutine_ad6bb0(_QWORD);

__int64 GameRoutine_ad7440(_QWORD);

void __attribute__((noreturn)) GameRoutine_adab70(_QWORD);

__int64 GameRoutine_adac20(_QWORD);

__int64 GameRoutine_b362c0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_b4d840(__int64*, __int64);

__int64 GameRoutine_b528e0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_b5ce20();

__int64 GameRoutine_b5fb80(_QWORD, _QWORD);

__int64 GameRoutine_b711f0(__int64, __int64);

__int64 GameRoutine_b791d0(__int64, __int64);

_QWORD* GameRoutine_ba3910(__int64, __int64);

__int64 GameRoutine_bb8af0(__int64, int*);

__int64 GameRoutine_bc7ac0(__int64, __int64);

struct PseudoSret GameRoutine_bccce0(_QWORD, _QWORD);

__int64 GameRoutine_bf1600(_QWORD, _QWORD);

__int64 GameRoutine_c686d0(_QWORD, _QWORD);

__int64 GameRoutine_c69950(_QWORD);

__int64 GameRoutine_c69ba0(_QWORD);

__int64 GameRoutine_c6dc40(_QWORD, _QWORD);

__int64 GameRoutine_c6ef90(_QWORD, float);

float GameRoutine_d8e20(_QWORD);

struct PseudoSret GameRoutine_d98c0(_QWORD);

__int64 GameRoutine_e8510(_QWORD, _QWORD);

__int64 GameRoutine_f6540(_QWORD);

__int64 GameRoutine_f65e0(_QWORD);

__int64 GameRoutine_fdf60(_QWORD, _QWORD);

void GameHr_a2d1c0(__int64 a1, __int64 a2, char a3, __n128 a4)
{
  int v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;

  v4 = *(_DWORD*)(a1 + 624);
  if (v4 != 0) {
    *(_DWORD*)(a1 + 624) = v4 - 1;
    if ((a3 & 1) == 0) {
    LABEL_24:
      *(_BYTE*)(a1 + 2848) = 0;
      return;
    }
    GameRoutine_a2c9c0(a1, a2, a4);
    v6 = *(unsigned __int8*)(a1 + 712);
    v7 = *(unsigned __int8*)(a1 + 2456);
    if ((v6 & 1) != 0) {
      v8 = *(_QWORD*)(a1 + 720);
    }
    else {
      v8 = v6 >> 1;
    }
    v9 = *(_QWORD*)(a1 + 2464);
    if ((v7 & 1) == 0) {
      v9 = v7 >> 1;
    }
    if (v8 == v9 &&
        ((v10 = *(_BYTE**)(a1 + 728), (v6 & 1) != 0)
             ? (v11 = *(_QWORD*)(a1 + 728))
             : (v11 = a1 + 713),
         (v7 & 1) != 0 ? (v12 = *(_QWORD*)(a1 + 2472)) : (v12 = a1 + 2457),
         (unsigned int)GameRoutine_1a09cf0(v11, v12) == 0)) {
      if ((v6 & 1) != 0) {
        *(_QWORD*)(a1 + 720) = 0;
      }
      else {
        *(_BYTE*)(a1 + 712) = 0;
        v10 = (_BYTE*)(a1 + 713);
      }
      *v10 = 0;
      if ((*(_BYTE*)(a1 + 2456) & 1) == 0) {
        goto LABEL_17;
      }
    }
    else if ((v7 & 1) == 0) {
    LABEL_17:
      v13 = (_BYTE*)(a1 + 2457);
      *(_BYTE*)(a1 + 2456) = 0;
    LABEL_23:
      *v13 = 0;
      *(_DWORD*)(a1 + 2192) = -1;
      goto LABEL_24;
    }
    v13 = *(_BYTE**)(a1 + 2472);
    *(_QWORD*)(a1 + 2464) = 0;
    goto LABEL_23;
  }
}

__int64 GameHr_a31610(__int64 a1, __int64 a2)
{
  long double v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 result;
  _BYTE* v14;
  _QWORD v15[2];

  *(float*)&v4 = GameRoutine_d8e20(*(_QWORD*)(a1 + 8));
  if (*(float*)&v4 > 0.0) {
    *(_DWORD*)(a1 + 2892) = LODWORD(v4);
  }
  v5 = *(unsigned __int8*)(a1 + 2824);
  v6 = (_QWORD*)(a1 + 2824);
  v7 = (_QWORD*)(a1 + 2896);
  if ((*(_BYTE*)(a1 + 2896) & 1) != 0) {
    v9 = (v5 & 1) == 0;
    v10 = v5 >> 1;
    if (v9) {
      v11 = a1 + 2825;
    }
    else {
      v11 = *(_QWORD*)(a1 + 2840);
    }
    if (v9) {
      v12 = v10;
    }
    else {
      v12 = *(_QWORD*)(a1 + 2832);
    }
    GameRoutine_64dde0(v7, v11, v12, v4);
  }
  else if ((v5 & 1) != 0) {
    GameRoutine_64df20(v7, *(_QWORD*)(a1 + 2840), *(_QWORD*)(a1 + 2832), v4);
  }
  else {
    v8 = *(_QWORD*)(a1 + 2832);
    *v7 = *v6;
    *(_QWORD*)(a1 + 2904) = v8;
    *(_QWORD*)(a1 + 2912) = *(_QWORD*)(a1 + 2840);
  }
  *(struct PseudoSret*)(v15) = GameRoutine_d98c0(*(_QWORD*)(a1 + 8));
  result = GameRoutine_112290(v15);
  if (result != 0) {
    result = GameRoutine_149a90(result - 5592);
    if ((result & 1) == 0) {
      result = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
          **(_QWORD**)(a1 + 8) + 48LL))(*(_QWORD*)(a1 + 8), a2, 0);
    }
  }
  if ((*(_BYTE*)v6 & 1) != 0) {
    v14 = *(_BYTE**)(a1 + 2840);
    *(_QWORD*)(a1 + 2832) = 0;
  }
  else {
    v14 = (_BYTE*)(a1 + 2825);
    *(_BYTE*)(a1 + 2824) = 0;
  }
  *v14 = 0;
  return result;
}

__int64 GameHr_a32b80(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  int v11;
  __int64 v12;
  int v13;
  _QWORD v14[2];

  result = GameRoutine_1017a0();
  if ((result & 1) == 0) {
    LODWORD(v14[0]) = GameRoutine_fdf60("MultiBridge_FinalMix", 0);
    v3 = GameRoutine_f65e0(v14);
    *(struct PseudoSret*)(v14) =
        GameRoutine_120380(*GameData_212e248[0], "FxMultiBridgeFinalMix",
                           *(unsigned int*)(*(_QWORD*)(v3 + 8) + 16LL),
                           *(unsigned int*)(*(_QWORD*)(v3 + 8) + 20LL), 3);
    GameRoutine_112180(a1 + 528, v14);
    GameRoutine_100920("DEFAULT_FIELD");
    LODWORD(v14[0]) = GameRoutine_fdf60("DEFAULT_FIELD", 0);
    *(_QWORD*)(a1 + 136) = GameRoutine_f6540(v14);
    GameRoutine_101660("VIBRATION_FIELD");
    LODWORD(v14[0]) = GameRoutine_fdf60("VIBRATION_FIELD", 0);
    *(_QWORD*)(a1 + 144) = GameRoutine_f6540(v14);
    GameRoutine_e8510(a1, "None");
    if (GameRoutine_112290(a1 + 528) == 0) {
      goto LABEL_14;
    }
    v4 = GameRoutine_112290(a1 + 528);
    v5 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)(v4 - 5592) + 64LL))(
        v4 - 5592);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fac98,
                              memory_order_acquire) &
         1) == 0) {
      v10 = v5;
      v11 = GameRoutine_1a09fd0(&GameData_21fac98);
      v5 = v10;
      if (v11 != 0) {
        GameData_21fac90 = GameRoutine_a38b10(v10);
        GameRoutine_1a09fe0(&GameData_21fac98);
        v5 = v10;
      }
    }
    if (v5 == &GameData_21fac90) {
      goto LABEL_11;
    }
    do {
      v5 = (__int64*)*v5;
    } while (v5 != &GameData_21fac90 && v5 != nullptr);
    if (v5 != nullptr) {
    LABEL_11:
      v7 = GameRoutine_112290(a1 + 528);
      if (v7 != 0) {
        v8 = v7 - 5592;
      }
      else {
        v8 = 0;
      }
    }
    else {
    LABEL_14:
      v8 = 0;
    }
    v12 = 0;
    v13 = 0x2000;
    GameRoutine_112180(&v12, &GameData_21fa928);
    v9 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v8 + 192LL))(v8, &v12);
    return GameRoutine_17ca40(v9);
  }
  return result;
}

_QWORD* GameHr_a40460()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* result;
  __int64 v4;

  *(_BYTE*)(GameData_2265ef8 + 3076) = 0;
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
  result = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (result == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v4 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
}

_QWORD* GameHr_a417e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;

  v1 = GameData_2265ef8;
  v2 = GameRoutine_25eed0(a1);
  GameRoutine_e8510(v1, v2);
  v3 = GameData_21a60b0;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v4 != 0) {
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  }
  else {
    v5 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v5 + 24) + 448LL))(
      *(_QWORD*)(v5 + 24), 1);
  result = *(_QWORD**)(v5 + 2240);
  *(_QWORD*)(v5 + 2240) = 0;
  if (result == (_QWORD*)(v5 + 2208)) {
    v7 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v7))((__int64)result);
}

_QWORD* GameHr_a43d80()
{
  char v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 (*v4)(void);
  _QWORD* result;
  __int64 v6;

  v0 = GameRoutine_1004b0();
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
  v4 = *(__int64 (**)(void))(**(_QWORD**)(v3 + 24) + 448LL);
  if ((v0 & 1) == 0) {
    return (_QWORD*)v4();
  }
  v4();
  result = *(_QWORD**)(v3 + 2240);
  *(_QWORD*)(v3 + 2240) = 0;
  if (result == (_QWORD*)(v3 + 2208)) {
    v6 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
}

_QWORD* GameHr_a45170(__int64 a1, __int128* a2)
{
  __int128 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  _QWORD v8[2];
  int v9;

  v2 = *a2;
  v8[1] = *(_QWORD*)a2;
  v8[0] = GameData_212e2d8 + 16;
  v9 = DWORD2(v2);
  GameRoutine_100510(a1, v8);
  v3 = GameData_21a60b0;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v4 != 0) {
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  }
  else {
    v5 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v5 + 24) + 448LL))(
      *(_QWORD*)(v5 + 24), 1);
  result = *(_QWORD**)(v5 + 2240);
  *(_QWORD*)(v5 + 2240) = 0;
  if (result == (_QWORD*)(v5 + 2208)) {
    v7 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v7))((__int64)result);
}

__int64 GameHr_a50100(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  int v6;
  int v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v17;

  v5 = *(_QWORD*)(*(_QWORD*)(*a1 + 14600) + 800LL);
  v6 = GameRoutine_a4ac60(v5, a3);
  if (v6 < 0) {
    return 0xFFFFFFFFLL;
  }
  v7 = *(_DWORD*)(v5 + 44);
  if (v7 == -1) {
    return 0xFFFFFFFFLL;
  }
  v8 = *(_DWORD**)(*(_QWORD*)(v5 + 24) + 24LL * v7);
  if (*v8 <= v6) {
    return 0xFFFFFFFFLL;
  }
  v9 = (unsigned int)v8[2 * v6 + 2];
  if ((v9 & 0x80000000) != 0) {
    return 0xFFFFFFFFLL;
  }
  v10 = *a1;
  v17 = a2;
  v11 = GameRoutine_a542c0(v10 + 14648, &v17);
  if (v11 == 0) {
    return 0xFFFFFFFFLL;
  }
  v12 = *(_QWORD*)(v11 + 40);
  if (v12 == 0) {
    return 0xFFFFFFFFLL;
  }
  v13 = *(_QWORD*)(v12 + 800);
  v14 = GameRoutine_a4a400(v13, a2);
  if (v14 < 0) {
    return 0xFFFFFFFFLL;
  }
  v15 = *(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL * *(int*)(v13 + 40));
  return *(unsigned __int8*)(v15 + v9 +
                             (unsigned int)(*(_DWORD*)(v15 + 4) * v14) + 8);
}

__int64 GameHr_a51e10(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  char v6;
  unsigned int v7;
  __int64 result;
  long double v9;
  __int64 v10;
  _QWORD v11[3];
  char v12[4];
  __int64 v13;
  char v14;
  __int64 v15;

  v14 = 0;
  v15 = GameData_21759e0;
  v12[0] = 2;
  v13 = 0x200000000LL;
  if (a4 != 0) {
    if (a4 != 2) {
      goto LABEL_6;
    }
    v6 = 3;
  }
  else {
    v6 = 0;
  }
  v12[0] = v6;
LABEL_6:
  *(struct PseudoSret*)(v11) = GameRoutine_17d8560(a3, &v15, v12);
  if (a2 <= 7) {
    v7 = a2;
  }
  else {
    v7 = 0;
  }
  result = GameRoutine_60a020(a1 + 24LL * v7);
  if ((v11[0] & 1) != 0 && v11[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v10 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v10, v9);
  }
  return result;
}

__int64 GameHr_a59e60(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;

  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)a1 = GameData_1fbfbf8;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_DWORD*)(a1 + 168) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                            memory_order_acquire) &
       1) == 0) {
    v10 = a2;
    v9 = GameRoutine_1a09fd0(&GameData_21f4d48);
    a2 = v10;
    if (v9 != 0) {
      GameData_21f4d44 =
          (unsigned int)(*(struct PseudoSret*)(&GameData_21f4d44) =
                             GameRoutine_540(0, "ModelModule", 11),
                         (void*)(&GameData_21f4d44));
      GameRoutine_1a09fe0(&GameData_21f4d48);
      a2 = v10;
    }
  }
  v3 = *(_QWORD*)(a2 + 512);
  v4 = v3;
  do {
    v5 = *(_DWORD*)(v4 - 16);
    v4 -= 16;
    v3 -= 16;
  } while (v5 != GameData_21f4d44);
  v6 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 24LL);
  v12 = v11;
  v11[0] = GameData_1fbfc70;
  v11[1] = a1;
  *(_DWORD*)(a1 + 168) = GameRoutine_a66980(v6, v11, 1);
  result = (__int64)v12;
  if (v12 == v11) {
    v8 = 32;
  }
  else {
    if (v12 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v12 + v8))((__int64)v12);
}

void GameHr_a5a7f0(__int64 a1, float32x4_t a2, double a3, double a4, double a5,
                   double a6, long double a7)
{
  __int64 v7;

  v7 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v7 + 16) == 1) {
    ((uint32_t*)&a2)[0] = *(_DWORD*)(GameData_2265ae0 + 156);
    GameRoutine_a58fe0(v7 + 24, *(_QWORD*)(v7 + 72), *(float32x4_t**)(v7 + 80),
                       *(_BYTE*)(v7 + 96), a2, a3, a4, a5, a6, a7);
  }
}

__int64 GameHr_a636e0(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v18 = a4;
  v19 = a2;
  v17 = 4;
  *(struct PseudoSret*)(&v20) = GameRoutine_53bd0(&v17);
  v6 = v20;
  v7 = *a1;
  v20 = 0;
  *a1 = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    v8 = v20;
    v20 = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    }
  }
  *(struct PseudoSret*)(&v20) = GameRoutine_53bd0(&v17);
  v9 = v20;
  v10 = a1[1];
  v20 = 0;
  a1[1] = v9;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    v11 = v20;
    v20 = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
  }
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 96LL))(a3);
  a1[4] = v13;
  v14 = *a1;
  a1[3] = v12;
  GameRoutine_5deb0(a1 + 3, v14);
  a1[5] = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 96LL))(a3);
  a1[6] = v15;
  return GameRoutine_5deb0(a1 + 5, a1[1]);
}

__int64 GameHr_a69620(__int64* a1, __int64* a2)
{
  __int64* v2;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  _BYTE v18[32];
  __int64* v19;

  v2 = (__int64*)a1[6];
  v17 = *a1;
  if (v2 == nullptr) {
    v7 = *a2;
    v19 = nullptr;
    *a1 = v7;
    v5 = a1 + 2;
    goto LABEL_10;
  }
  v5 = a1 + 2;
  if (v2 != a1 + 2) {
    a1[6] = 0;
    v19 = v2;
    v6 = *a2;
    a1[6] = 0;
    *a1 = v6;
    goto LABEL_10;
  }
  v19 = (__int64*)v18;
  (*(void (**)(__int64*, _BYTE*))(*v2 + 24))(v2, v18);
  v8 = (__int64*)a1[6];
  v9 = *a2;
  a1[6] = 0;
  *a1 = v9;
  if (v8 == v2) {
    v10 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_10;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v8 + v10))((__int64)v8);
LABEL_10:
  v11 = (_QWORD*)a2[6];
  v12 = a2 + 2;
  if (v11 != nullptr) {
    if (v11 != v12) {
      a1[6] = (__int64)v11;
      *a2 = v17;
      goto LABEL_20;
    }
    a1[6] = (__int64)v5;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)a2[6] + 24LL))(a2[6], v5);
  }
  else {
    a1[6] = 0;
  }
  v13 = (_QWORD*)a2[6];
  a2[6] = 0;
  *a2 = v17;
  if (v13 == v12) {
    v14 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_20;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
LABEL_20:
  result = (__int64)v19;
  if (v19 == nullptr) {
    a2[6] = 0;
    return result;
  }
  if (v19 != (__int64*)v18) {
    a2[6] = (__int64)v19;
    return result;
  }
  a2[6] = (__int64)v12;
  (*(void (**)(__int64, __int64*))(*(_QWORD*)result + 24LL))(result, a2 + 2);
  result = (__int64)v19;
  if (v19 == (__int64*)v18) {
    v16 = 32;
  }
  else {
    if (v19 == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (*(__int64 (**)(__int64))(*v19 + v16))((__int64)v19);
}

__int64 GameHr_a6b310(__int64* a1, __int64* a2)
{
  __int64* v2;
  __int64* v5;
  int v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  int v19;
  _BYTE v20[32];
  __int64* v21;

  v2 = (__int64*)a1[6];
  v18 = *a1;
  v19 = *((_DWORD*)a1 + 2);
  if (v2 == nullptr) {
    v6 = *((_DWORD*)a2 + 2);
    v7 = *a2;
    v21 = nullptr;
    v5 = a1 + 2;
    goto LABEL_5;
  }
  v5 = a1 + 2;
  if (v2 != a1 + 2) {
    a1[6] = 0;
    v21 = v2;
    v6 = *((_DWORD*)a2 + 2);
    v7 = *a2;
  LABEL_5:
    *a1 = v7;
    *((_DWORD*)a1 + 2) = v6;
    goto LABEL_6;
  }
  v21 = (__int64*)v20;
  (*(void (**)(__int64*, _BYTE*))(*v2 + 24))(v2, v20);
  v10 = *((_DWORD*)a2 + 2);
  v11 = *a2;
  v12 = (__int64*)a1[6];
  a1[6] = 0;
  *a1 = v11;
  *((_DWORD*)a1 + 2) = v10;
  if (v12 == v2) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_6;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
LABEL_6:
  v8 = (_QWORD*)a2[6];
  v9 = a2 + 2;
  if (v8 != nullptr) {
    if (v8 != v9) {
      a1[6] = (__int64)v8;
      *a2 = v18;
      *((_DWORD*)a2 + 2) = v19;
      goto LABEL_19;
    }
    a1[6] = (__int64)v5;
    (*(void (**)(__int64, __int64*))(*(_QWORD*)a2[6] + 24LL))(a2[6], v5);
  }
  else {
    a1[6] = 0;
  }
  v14 = (_QWORD*)a2[6];
  a2[6] = 0;
  *a2 = v18;
  *((_DWORD*)a2 + 2) = v19;
  if (v14 == v9) {
    v15 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_19;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v14 + v15))((__int64)v14);
LABEL_19:
  result = (__int64)v21;
  if (v21 == nullptr) {
    a2[6] = 0;
    return result;
  }
  if (v21 != (__int64*)v20) {
    a2[6] = (__int64)v21;
    return result;
  }
  a2[6] = (__int64)v9;
  (*(void (**)(__int64, __int64*))(*(_QWORD*)result + 24LL))(result, a2 + 2);
  result = (__int64)v21;
  if (v21 == (__int64*)v20) {
    v17 = 32;
  }
  else {
    if (v21 == nullptr) {
      return result;
    }
    v17 = 40;
  }
  return (*(__int64 (**)(__int64))(*v21 + v17))((__int64)v21);
}

__int64 GameHr_a72080(__int64 a1, long double a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v2 = (_QWORD*)(a1 + 32);
  v3 = *(_QWORD**)(a1 + 64);
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
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v5 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, a2);
}

long double GameHr_a7c880(__int64 a1, int* a2, float32x4_t** a3)
{
  return GameRoutine_a7b5b0(
      (float32x4_t*)*(_QWORD*)(a1 + 16), a3,
      (float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL) + 32LL) +
                     ((__int64)*a2 << 6)),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL) + 24LL) + 96LL * *a2);
}

__int64 GameHr_a7f2a0(__int64 a1, __int64* a2, int a3, float32x4_t* a4, char a5)
{
  __int64 v5;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  __int64 v16;
  float32x4_t v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float32x4_t v27;
  unsigned int v28;
  __int128 v29;
  float32x4_t v30;
  float32x4_t v31;
  __int128 v32;
  int v33;
  char v34;
  char v35;
  bool v36;

  v5 = *(_QWORD*)(a1 + 24);
  v33 = a3;
  v35 = a5;
  v36 = false;
  v34 = 1;
  if (a3 >= 1) {
    v10 = 1;
    v11 = a2;
    while (1) {
      v13 = *v11++;
      v12 = v13;
      v14 = *(float*)(v13 + 44);
      if (vabds_f32(*(float*)(v13 + 40), v14) >= 0.00000011921f) {
        break;
      }
      v15 = vabds_f32(v14, *(float*)(v12 + 48));
      v36 = v15 >= 0.00000011921f;
      if (v10 < (a3 & 0x7FFFFFFFu)) {
        ++v10;
        if (v15 < 0.00000011921f) {
          continue;
        }
      }
      goto LABEL_8;
    }
    v36 = true;
  }
LABEL_8:
  v16 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 512, 16, 0);
  GameRoutine_19850c0(v16, v5, &v33);
  result = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = v16;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    v16 = *(_QWORD*)(a1 + 32);
  }
  *(_DWORD*)(v16 + 36) = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 36LL);
  *(_QWORD*)(*(_QWORD*)(a1 + 32) + 104LL) |= 1uLL;
  if (*(_BYTE*)(a1 + 112) == 1 && *(_QWORD*)(a1 + 24) != 0) {
    result = *(_QWORD*)(a1 + 48);
    *(_BYTE*)(a1 + 112) = 0;
    if (result != 0) {
      result = GameRoutine_1a0a0c0();
      if (result != 0) {
        v19 = result;
        result = *(_QWORD*)(a1 + 40);
        if (result != 0) {
          result = GameRoutine_a70ec0(result, *(_QWORD*)(a1 + 72));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          result = GameRoutine_1a09c50(v19);
        }
      }
    }
  }
  if ((*(_BYTE*)(a1 + 113) & 1) == 0 && *(_QWORD*)(a1 + 32) != 0) {
    result = *(_QWORD*)(a1 + 48);
    *(_BYTE*)(a1 + 113) = 1;
    if (result != 0) {
      result = GameRoutine_1a0a0c0();
      if (result != 0) {
        v20 = result;
        result = *(_QWORD*)(a1 + 40);
        if (result != 0) {
          result = GameRoutine_a70a20(result, *(_QWORD*)(a1 + 32));
          *(_QWORD*)(a1 + 80) = result;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          result = GameRoutine_1a09c50(v20);
        }
      }
    }
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 24) + 32LL) = 0;
  *(_BYTE*)(*(_QWORD*)(a1 + 32) + 32LL) = 0;
  if (a3 >= 1) {
    v21 = a3 & 0x7FFFFFFF;
    v22 = 0;
    do {
      v23 = a2[v22];
      v24 = *(_QWORD*)(a1 + 32);
      ((uint32_t*)&v17)[0] = *(_DWORD*)(v23 + 16);
      v25 = *(float*)(v23 + 28);
      v26 = *(float*)(v23 + 32);
      ((uint32_t*)&v17)[1] = *(_DWORD*)(v23 + 20);
      ((uint32_t*)&v17)[2] = *(_DWORD*)(v23 + 24);
      v27 = vaddq_f32(v17, *a4);
      ((uint64_t*)&v17)[0] = *(_QWORD*)(v23 + 40);
      *(float*)&v28 = *(float*)(v23 + 36) * 0.017453f;
      ((uint32_t*)&v17)[2] = *(_DWORD*)(v23 + 48);
      v30 = v17;
      v31 = v27;
      *(_QWORD*)&v29 = __PAIR64__(v26 * 0.017453f, v25 * 0.017453f);
      *((_QWORD*)&v29 + 1) = v28;
      v32 = v29;
      result = GameRoutine_19862d0(v24, (unsigned int)v22++, &v30, &v32, &v31);
    } while (v21 != v22);
  }
  return result;
}

_QWORD* GameHr_a853b0(__int64 a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* result;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if ((*(_BYTE*)(a1 + 296) & 1) != 0 && *(_QWORD*)(a1 + 312) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v3 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3, a2);
  }
  if ((*(_BYTE*)(a1 + 272) & 1) != 0 && *(_QWORD*)(a1 + 288) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v4 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, a2);
  }
  if ((*(_BYTE*)(a1 + 248) & 1) != 0 && *(_QWORD*)(a1 + 264) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v5 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, a2);
  }
  if ((*(_BYTE*)(a1 + 224) & 1) != 0 && *(_QWORD*)(a1 + 240) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v6 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v6, a2);
  }
  if ((*(_BYTE*)(a1 + 184) & 1) != 0 && *(_QWORD*)(a1 + 200) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v7 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, a2);
  }
  if ((*(_BYTE*)(a1 + 160) & 1) != 0 && *(_QWORD*)(a1 + 176) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v8 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8, a2);
  }
  if ((*(_BYTE*)(a1 + 136) & 1) != 0 && *(_QWORD*)(a1 + 152) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v9 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9, a2);
  }
  result = *(_QWORD**)(a1 + 96);
  if (result == (_QWORD*)(a1 + 64)) {
    v11 = 32;
    goto LABEL_40;
  }
  if (result != nullptr) {
    v11 = 40;
  LABEL_40:
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v11))((__int64)result);
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v12, a2);
  }
  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v13 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13, a2);
  }
  return result;
}

__int64 GameHr_a8fde0(__int64 result, __int64 a2, __int64 a3, float a4,
                      float a5)
{
  float v7;
  float v8;
  float v9;
  unsigned __int64* v11;
  float v12;
  float v13;
  unsigned __int64 v15;
  unsigned int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned int i;
  __int64 v21;
  __int64 v22;
  float v23;
  unsigned int v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned int k;
  __int64 v32;
  unsigned int j;
  __int64 v34;
  __int64 v35;
  float v36;
  unsigned int v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  float v43;
  unsigned int v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned int m;
  __int64 v51;
  __int64 v52;
  float v53;
  unsigned int v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;

  v7 = *(float*)(a3 + 32);
  v8 = *(float*)(a2 + 32) + v7;
  if (v8 >= 0.00000011921f) {
    v9 = v7 / v8;
    v11 = (unsigned __int64*)result;
    if (v9 <= 1.0f) {
      v12 = v9;
    }
    else {
      v12 = 1.0f;
    }
    if (v9 >= 0.0f) {
      v13 = v12;
    }
    else {
      v13 = 0.0f;
    }
    if (v13 <= 0.0f) {
      v18 = *(_QWORD*)result;
      if ((*(_BYTE*)(a2 + 36) & 1) != 0) {
        if (v18 != 0) {
          v19 = 0;
          for (i = 0; i < v18; v19 = ++i) {
            v21 = *(_QWORD*)(v11[1] + 8 * v19);
            if (v21 != 0) {
              v22 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8 * v19);
              if (v22 != 0) {
                v23 = a4 * *(float*)(a2 + 32);
                if (v23 != 0.0f &&
                    *(_QWORD*)(v21 + 40) != *(_QWORD*)(v21 + 32)) {
                  v24 = 1;
                  v25 = 0;
                  do {
                    v27 = *(_QWORD*)(*(_QWORD*)(v22 + 32) + 8 * v25);
                    if (((*(__int64 (**)(__int64))(*(_QWORD*)v27 + 48LL))(v27) &
                         1) != 0 ||
                        (v28 = *(_QWORD*)(*(_QWORD*)(v22 + 32) + 8 * v25),
                         ((result = (*(__int64 (**)(__int64))(*(_QWORD*)v28 +
                                                              56LL))(v28)) &
                          1) != 0)) {
                      v26 = *(_QWORD*)(*(_QWORD*)(v21 + 32) + 8 * v25);
                      result = (*(__int64 (**)(__int64, __int64, _QWORD, float,
                                               float))(*(_QWORD*)v26 + 24LL))(
                          v26, v26, *(_QWORD*)(*(_QWORD*)(v22 + 32) + 8 * v25),
                          v23, a5);
                    }
                    v25 = v24++;
                  } while (v25 < (__int64)(*(_QWORD*)(v21 + 40) -
                                           *(_QWORD*)(v21 + 32)) >>
                           3);
                  v18 = *v11;
                }
              }
            }
          }
        }
      }
      else if (v18 != 0) {
        v32 = 0;
        for (j = 0; j < v18; v32 = ++j) {
          v34 = *(_QWORD*)(v11[1] + 8 * v32);
          if (v34 != 0) {
            v35 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8 * v32);
            if (v35 != 0) {
              v36 = a4 * *(float*)(a2 + 32);
              if (v36 != 0.0f && *(_QWORD*)(v34 + 40) != *(_QWORD*)(v34 + 32)) {
                v37 = 1;
                v38 = 0;
                do {
                  v39 = *(_QWORD*)(*(_QWORD*)(v35 + 32) + 8 * v38);
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v39 + 48LL))(v39);
                  if ((result & 1) != 0) {
                    v40 = *(_QWORD*)(*(_QWORD*)(v34 + 32) + 8 * v38);
                    result = (*(__int64 (**)(__int64, __int64, _QWORD, float,
                                             float))(*(_QWORD*)v40 + 24LL))(
                        v40, v40, *(_QWORD*)(*(_QWORD*)(v35 + 32) + 8 * v38),
                        v36, a5);
                  }
                  v38 = v37++;
                } while (v38 < (__int64)(*(_QWORD*)(v34 + 40) -
                                         *(_QWORD*)(v34 + 32)) >>
                         3);
                v18 = *v11;
              }
            }
          }
        }
      }
    }
    else if (v13 >= 1.0f) {
      v29 = *(_QWORD*)result;
      if ((*(_BYTE*)(a3 + 36) & 1) != 0) {
        if (v29 != 0) {
          v30 = 0;
          for (k = 0; k < v29; v30 = ++k) {
            v41 = *(_QWORD*)(v11[1] + 8 * v30);
            if (v41 != 0) {
              v42 = *(_QWORD*)(*(_QWORD*)(a3 + 8) + 8 * v30);
              if (v42 != 0) {
                v43 = a4 * *(float*)(a3 + 32);
                if (v43 != 0.0f &&
                    *(_QWORD*)(v41 + 40) != *(_QWORD*)(v41 + 32)) {
                  v44 = 1;
                  v45 = 0;
                  do {
                    v47 = *(_QWORD*)(*(_QWORD*)(v42 + 32) + 8 * v45);
                    if (((*(__int64 (**)(__int64))(*(_QWORD*)v47 + 48LL))(v47) &
                         1) != 0 ||
                        (v48 = *(_QWORD*)(*(_QWORD*)(v42 + 32) + 8 * v45),
                         ((result = (*(__int64 (**)(__int64))(*(_QWORD*)v48 +
                                                              56LL))(v48)) &
                          1) != 0)) {
                      v46 = *(_QWORD*)(*(_QWORD*)(v41 + 32) + 8 * v45);
                      result = (*(__int64 (**)(__int64, __int64, _QWORD, float,
                                               float))(*(_QWORD*)v46 + 24LL))(
                          v46, v46, *(_QWORD*)(*(_QWORD*)(v42 + 32) + 8 * v45),
                          v43, a5);
                    }
                    v45 = v44++;
                  } while (v45 < (__int64)(*(_QWORD*)(v41 + 40) -
                                           *(_QWORD*)(v41 + 32)) >>
                           3);
                  v29 = *v11;
                }
              }
            }
          }
        }
      }
      else if (v29 != 0) {
        v49 = 0;
        for (m = 0; m < v29; v49 = ++m) {
          v51 = *(_QWORD*)(v11[1] + 8 * v49);
          if (v51 != 0) {
            v52 = *(_QWORD*)(*(_QWORD*)(a3 + 8) + 8 * v49);
            if (v52 != 0) {
              v53 = a4 * *(float*)(a3 + 32);
              if (v53 != 0.0f && *(_QWORD*)(v51 + 40) != *(_QWORD*)(v51 + 32)) {
                v54 = 1;
                v55 = 0;
                do {
                  v56 = *(_QWORD*)(*(_QWORD*)(v52 + 32) + 8 * v55);
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v56 + 48LL))(v56);
                  if ((result & 1) != 0) {
                    v57 = *(_QWORD*)(*(_QWORD*)(v51 + 32) + 8 * v55);
                    result = (*(__int64 (**)(__int64, __int64, _QWORD, float,
                                             float))(*(_QWORD*)v57 + 24LL))(
                        v57, v57, *(_QWORD*)(*(_QWORD*)(v52 + 32) + 8 * v55),
                        v53, a5);
                  }
                  v55 = v54++;
                } while (v55 < (__int64)(*(_QWORD*)(v51 + 40) -
                                         *(_QWORD*)(v51 + 32)) >>
                         3);
                v29 = *v11;
              }
            }
          }
        }
      }
    }
    else {
      v15 = *(_QWORD*)result;
      if (*(_QWORD*)result != 0) {
        v16 = 1;
        v17 = 0;
        do {
          result = *(_QWORD*)(v11[1] + 8 * v17);
          if (result != 0 && *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8 * v17) != 0 &&
              *(_QWORD*)(*(_QWORD*)(a3 + 8) + 8 * v17) != 0) {
            result = GameRoutine_ad6560(v13, a4, a5);
            v15 = *v11;
          }
          v17 = v16++;
        } while (v15 > v17);
      }
    }
  }
  return result;
}

_QWORD* GameHr_a90790(__int64 a1, long double a2)
{
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v3 = (_QWORD*)(a1 + 112);
  v4 = *(_QWORD**)(a1 + 144);
  if (v4 == v3) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_6:
  result = *(_QWORD**)(a1 + 96);
  if (result == (_QWORD*)(a1 + 64)) {
    v7 = 32;
    goto LABEL_10;
  }
  if (result != nullptr) {
    v7 = 40;
  LABEL_10:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v7))((__int64)result);
  }
  v8 = *(_QWORD*)(a1 + 56);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = (_QWORD*)GameRoutine_1a09c50(v8);
    if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
      goto LABEL_19;
    }
  }
  else if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
    goto LABEL_19;
  }
  if (*(_QWORD*)(a1 + 40) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v9 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9, a2);
  }
LABEL_19:
  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v10 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v10, a2);
  }
  return result;
}

__int64 GameHr_a90ae0(__int64 a1, _QWORD* a2, long double a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;

  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v5 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, a3);
  }
  *(_QWORD*)(a1 + 8) = a2[1];
  v6 = *a2;
  *(_QWORD*)(a1 + 16) = a2[2];
  *(_QWORD*)a1 = v6;
  *(_WORD*)a2 = 0;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v7 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, a3);
  }
  v8 = a2[3];
  v9 = a2[5];
  *(_QWORD*)(a1 + 32) = a2[4];
  *(_QWORD*)(a1 + 40) = v9;
  *(_QWORD*)(a1 + 24) = v8;
  *((_WORD*)a2 + 12) = 0;
  v10 = a2[6];
  v11 = a2[7];
  a2[6] = 0;
  a2[7] = 0;
  v12 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = v10;
  *(_QWORD*)(a1 + 56) = v11;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    GameRoutine_1a09c50(v12);
  }
  v13 = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 96) = 0;
  if (v13 == (_QWORD*)(a1 + 64)) {
    v14 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_19;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
LABEL_19:
  v15 = (_QWORD*)a2[12];
  if (v15 != nullptr) {
    if (v15 == a2 + 8) {
      *(_QWORD*)(a1 + 96) = a1 + 64;
      (*(void (**)(_QWORD, __int64))(*(_QWORD*)a2[12] + 24LL))(a2[12], a1 + 64);
    }
    else {
      *(_QWORD*)(a1 + 96) = v15;
      a2[12] = 0;
    }
  }
  else {
    *(_QWORD*)(a1 + 96) = 0;
  }
  v16 = *(_QWORD**)(a1 + 144);
  *(_QWORD*)(a1 + 144) = 0;
  if (v16 == (_QWORD*)(a1 + 112)) {
    v17 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_29;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v16 + v17))((__int64)v16);
LABEL_29:
  v18 = (_QWORD*)a2[18];
  if (v18 != nullptr) {
    if (v18 == a2 + 14) {
      *(_QWORD*)(a1 + 144) = a1 + 112;
      (*(void (**)(_QWORD, __int64))(*(_QWORD*)a2[18] + 24LL))(a2[18],
                                                               a1 + 112);
    }
    else {
      *(_QWORD*)(a1 + 144) = v18;
      a2[18] = 0;
    }
  }
  else {
    *(_QWORD*)(a1 + 144) = 0;
  }
  return a1;
}

__int64 GameHr_a91100(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v18 = a4;
  v19 = a2;
  v17 = 3;
  *(struct PseudoSret*)(&v20) = GameRoutine_53bd0(&v17);
  v6 = v20;
  v7 = *a1;
  v20 = 0;
  *a1 = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    v8 = v20;
    v20 = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    }
  }
  *(struct PseudoSret*)(&v20) = GameRoutine_53bd0(&v17);
  v9 = v20;
  v10 = a1[1];
  v20 = 0;
  a1[1] = v9;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    v11 = v20;
    v20 = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
  }
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 80LL))(a3);
  a1[4] = v13;
  v14 = *a1;
  a1[3] = v12;
  GameRoutine_5de60(a1 + 3, v14);
  a1[5] = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 80LL))(a3);
  a1[6] = v15;
  return GameRoutine_5de60(a1 + 5, a1[1]);
}

__int64 GameHr_a97380(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD v15[9];
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v2 = *(_DWORD*)(result + 208);
  v21 = a2;
  if (v2 == 0) {
    v3 = result;
    result = *(_QWORD*)(result + 32);
    if (result != 0) {
      result = GameRoutine_1a0a0c0();
      if (result != 0) {
        v4 = *(_QWORD*)(v3 + 24);
        v5 = result;
        if (v4 == 0) {
          goto LABEL_15;
        }
        GameRoutine_a993a0(v3 + 168, &v21, &v21);
        v6 = *(_QWORD*)(v4 + 296);
        v7 = 80;
        if (*(_QWORD*)(v21 + 32) == 0) {
          v7 = 72;
        }
        v8 = *(_QWORD*)(v21 + v7);
        v19 = 0;
        v20 = 0;
        v16 = v8;
        v17 = 0;
        v18 = 1;
        *(struct PseudoSret*)(v15) = GameRoutine_a99c80(v6, &v16);
        GameRoutine_193ac30(v3 + 40, v15);
        GameRoutine_193ab40(v15);
        v12 = *(_QWORD*)(v3 + 136);
        v13 = *(_QWORD*)(v3 + 144);
        v14 = 0xAAAAAAAAAAAAAAABLL * (v13 - v12);
        if (v13 == v12) {
          GameRoutine_a991b0(v3 + 136, 1 - v14);
          v12 = *(_QWORD*)(v3 + 136);
          v13 = *(_QWORD*)(v3 + 144);
        }
        else if (v14 >= 2) {
          v13 = v12 + 3;
          *(_QWORD*)(v3 + 144) = v12 + 3;
          goto LABEL_13;
        }
        if (v12 == v13) {
        LABEL_14:
          result = GameRoutine_a98560(v3);
          *(_DWORD*)(v3 + 208) = 1;
        LABEL_15:
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            return GameRoutine_1a09c50(v5);
          }
          return result;
        }
      LABEL_13:
        GameRoutine_1a0ba50(v12, 0, 3 * ((v13 - v12 - 3) / 3uLL) + 3, v9, v10,
                            v11);
        goto LABEL_14;
      }
    }
  }
  return result;
}

__int64 GameHr_a98a50(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD v21[9];
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;

  v2 = *(_DWORD*)(result + 208);
  v27 = a2;
  if (v2 == 0) {
    v3 = result;
    result = *(_QWORD*)(result + 32);
    if (result != 0) {
      result = GameRoutine_1a0a0c0();
      if (result != 0) {
        v4 = *(_QWORD*)(v3 + 24);
        v5 = result;
        if (v4 != 0) {
          GameRoutine_a993a0(v3 + 168, &v27, &v27);
          v6 = 80;
          v7 = *(_QWORD*)(v4 + 296);
          v8 = *(_QWORD*)(v27 + 32);
          if (v8 == 0) {
            v8 = *(_QWORD*)(v27 + 24);
            v6 = 72;
          }
          v11 = v8 + 80;
          v9 = *(_QWORD*)(v8 + 80);
          v10 = *(_QWORD*)(v11 + 8);
          v12 = *(_QWORD*)(v27 + v6);
          v25 = 0;
          v26 = 0;
          v13 = v10 - v9;
          v22 = v12;
          v23 = 1;
          v24 = (unsigned int)((unsigned __int64)(v10 - v9) >> 5);
          *(struct PseudoSret*)(v21) = GameRoutine_a99c80(v7, &v22);
          GameRoutine_193ac30(v3 + 40, v21);
          GameRoutine_193ab40(v21);
          v17 = *(_QWORD*)(v3 + 136);
          v18 = *(_QWORD*)(v3 + 144);
          v19 = (unsigned int)(v13 >> 5);
          v20 = 0xAAAAAAAAAAAAAAABLL * (v18 - v17);
          if (v19 <= v20) {
            if (v19 < v20) {
              v18 = v17 + 3 * v19;
              *(_QWORD*)(v3 + 144) = v18;
            }
          }
          else {
            GameRoutine_a991b0(v3 + 136, v19 - v20);
            v17 = *(_QWORD*)(v3 + 136);
            v18 = *(_QWORD*)(v3 + 144);
          }
          if (v17 != v18) {
            GameRoutine_1a0ba50(v17, 0, 3 * ((v18 - v17 - 3) / 3uLL) + 3, v14,
                                v15, v16);
          }
          result = GameRoutine_a98560(v3);
          *(_DWORD*)(v3 + 208) = 3;
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

__int64 GameHr_a98be0(__int64 result, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  unsigned __int64 v22;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  long double v38;
  __int64 v39;
  _QWORD v40[9];
  __int64 v41;
  int v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;

  v4 = *(_DWORD*)(result + 208);
  v46 = a2;
  if (v4 == 0) {
    v5 = result;
    result = *(_QWORD*)(result + 32);
    if (result != 0) {
      result = GameRoutine_1a0a0c0();
      if (result != 0) {
        v8 = *(_QWORD*)(v5 + 24);
        v9 = result;
        if (v8 != 0) {
          GameRoutine_a993a0(v5 + 168, &v46, &v46);
          v10 = *(_QWORD*)(v46 + 24);
          if (*(_QWORD*)(v46 + 32) != 0) {
            v10 = *(_QWORD*)(v46 + 32);
          }
          v11 = GameData_212bf68;
          v12 = *(_QWORD*)(v10 + 88) - *(_QWORD*)(v10 + 80);
          v13 = (unsigned int)(v12 >> 5);
          if ((unsigned int)(v12 >> 5) != 0) {
            v14 =
                GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 4 * v13, 16, 0);
            GameRoutine_1a0ba50(v14, 0, 4 * v13, v15, v16, v17);
            v18 = v14 + 4 * v13;
            v19 = a4;
            if (a4 != 0) {
            LABEL_10:
              v20 = 0;
              v21 = 0;
              v22 = v19;
              while (1) {
                v23 = *(unsigned int*)(a3 + 4 * v20);
                if ((_DWORD)v23 != 0) {
                  v24 = (_DWORD*)(v14 + 4LL * v21);
                  v25 = v23 & 7;
                  if ((v23 & 7) != 0) {
                    v26 = v23 - v25;
                    do {
                      *v24++ = v20;
                      --v25;
                    } while (v25 != 0);
                    if ((unsigned int)v23 < 8) {
                      goto LABEL_11;
                    }
                  LABEL_19:
                    v27 = v26 - 1;
                    do {
                      *v24 = v20;
                      v24[1] = v20;
                      v24[2] = v20;
                      v24[3] = v20;
                      v27 -= 8LL;
                      v24[4] = v20;
                      v24[5] = v20;
                      v24[6] = v20;
                      v24[7] = v20;
                      v24 += 8;
                    } while (v27 < 0xFFFFFFFFFFFFFFFELL);
                    goto LABEL_11;
                  }
                  v26 = *(unsigned int*)(a3 + 4 * v20);
                  if ((unsigned int)v23 >= 8) {
                    goto LABEL_19;
                  }
                }
              LABEL_11:
                v21 += v23;
                if (++v20 == v19) {
                  goto LABEL_24;
                }
              }
            }
          }
          else {
            v18 = 0;
            v14 = 0;
            v19 = a4;
            if (a4 != 0) {
              goto LABEL_10;
            }
          }
          v22 = 0;
        LABEL_24:
          v28 = *(_QWORD*)(v8 + 296);
          v29 = (v18 - v14) >> 2;
          v30 = 80;
          if (*(_QWORD*)(v46 + 32) == 0) {
            v30 = 72;
          }
          v31 = *(_QWORD*)(v46 + v30);
          v44 = v14;
          v45 = v29;
          v41 = v31;
          v42 = 2;
          v43 = v19;
          *(struct PseudoSret*)(v40) = GameRoutine_a99c80(v28, &v41);
          GameRoutine_193ac30(v5 + 40, v40);
          GameRoutine_193ab40(v40);
          v35 = *(_QWORD*)(v5 + 136);
          v36 = *(_QWORD*)(v5 + 144);
          v37 = 0xAAAAAAAAAAAAAAABLL * (v36 - v35);
          if (v22 <= v37) {
            if (v22 < v37) {
              v36 = v35 + 3 * v22;
              *(_QWORD*)(v5 + 144) = v36;
            }
          }
          else {
            GameRoutine_a991b0(v5 + 136, v22 - v37);
            v35 = *(_QWORD*)(v5 + 136);
            v36 = *(_QWORD*)(v5 + 144);
          }
          if (v35 != v36) {
            GameRoutine_1a0ba50(v35, 0, 3 * ((v36 - v35 - 3) / 3uLL) + 3, v32,
                                v33, v34);
          }
          result = GameRoutine_a98560(v5);
          *(_DWORD*)(v5 + 208) = 4;
          if (v14 != 0) {
            v39 = 128;
            if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
              v39 = 56;
            }
            result = GameRoutine_1a0a4e0(*(_QWORD*)v11 + v39, v38);
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          return GameRoutine_1a09c50(v9);
        }
      }
    }
  }
  return result;
}

__int64 GameHr_a9b6a0(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 result;
  _QWORD v16[4];
  _QWORD* v17;

  v2 = (_QWORD*)GameData_21323e8[0];
  v3 = *(_QWORD*)GameData_21323e8[0];
  v4 = *(_QWORD*)GameData_21323e8[0] + 32LL;
  do {
    v5 = *(_DWORD*)(v3 + 8);
    v6 = (v5 + 1) & 0xFFFFFF;
    if (v5 + 1 <= 0) {
      v6 = -(-(v5 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v3 + 8) = v6;
    v7 = atomic_load((unsigned __int64*)(v4 + 32LL * (v5 & 0x3F)));
    if (v7 != 0) {
      v5 = -1;
    }
  } while (v5 < 0);
  v8 = v5 | 0xC0000000;
  v9 = (unsigned __int64*)(v4 + 32LL * (v5 & 0x3F));
  GameRoutine_1a0a8a0(v9 + 1);
  v10 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80, 16, 0);
  v10[2] = 0;
  v11 = v10;
  v12 = GameData_212e368[0];
  v10[8] = 0;
  *v10 = v12 + 16;
  v10[1] = 0;
  v13 = v9[3];
  v9[3] = (unsigned __int64)v11;
  if (v13 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  atomic_store(v8, v9);
  v11[1] = v3;
  *((_DWORD*)v11 + 4) = v8;
  v16[0] = GameData_1fc12f0;
  v16[1] = a1;
  v17 = v16;
  GameRoutine_a5e4c0(v16, v11 + 4);
  if (v17 == v16) {
    v14 = 32;
    goto LABEL_13;
  }
  if (v17 != nullptr) {
    v14 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v17 + v14))((__int64)v17);
  }
  GameRoutine_1946dd0(*(_QWORD*)(v3 + 16), v8);
  result = GameRoutine_1949c20(*v2, v8);
  a1[14] = a1[13];
  a1[17] = a1[16];
  return result;
}

_QWORD* GameHr_ad4ea0(_QWORD* a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* result;
  __int64 v20;
  _QWORD* v21;

  v3 = a1[12];
  if (v3 != 0) {
    v21 = a1;
    (*(void (**)(__int64, _QWORD**))(*(_QWORD*)v3 + 48LL))(v3, &v21);
  }
  v4 = a1[28];
  v5 = (__int64*)GameData_212bf68;
  if (v4 != 0) {
    v6 = *(_QWORD*)GameData_212bf68;
    a1[29] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    GameRoutine_1a0a4e0(v6 + v7, a2);
  }
  v8 = a1[25];
  if (v8 != 0) {
    v9 = *v5;
    a1[26] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    GameRoutine_1a0a4e0(v9 + v10, a2);
  }
  v11 = a1[22];
  if (v11 != 0) {
    v12 = *v5;
    a1[23] = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    GameRoutine_1a0a4e0(v12 + v13, a2);
  }
  v14 = a1[19];
  if (v14 != 0) {
    v15 = *v5;
    a1[20] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    GameRoutine_1a0a4e0(v15 + v16, a2);
  }
  v17 = (_QWORD*)a1[12];
  if (v17 == a1 + 8) {
    v18 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_24;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
LABEL_24:
  result = (_QWORD*)a1[6];
  if (result == a1 + 2) {
    v20 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v20 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v20))((__int64)result);
}

_QWORD* GameHr_ad69c0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  long double v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 i;
  __int64 v11;
  _QWORD* v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = a1[13];
  a1[12] = 0;
  a1[13] = 0;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    GameRoutine_1a09c50(v1);
  }
  v3 = a1[11];
  a1[10] = 0;
  a1[11] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    GameRoutine_1a09c50(v3);
  }
  GameRoutine_ad6bb0(a1);
  result = (_QWORD*)a1[18];
  if (result == a1 + 14) {
    v6 = 32;
    goto LABEL_11;
  }
  if (result != nullptr) {
    v6 = 40;
  LABEL_11:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
  }
  v7 = a1[13];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = (_QWORD*)GameRoutine_1a09c50(v7);
  }
  v8 = a1[11];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = (_QWORD*)GameRoutine_1a09c50(v8);
  }
  v9 = (_QWORD*)a1[6];
  for (i = GameData_212bf68; v9 != nullptr;
       result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)i + v11, v13)) {
    v12 = v9;
    v9 = (_QWORD*)*v9;
    GameRoutine_adac20(v12 + 5);
    if ((v12[2] & 1) != 0 && v12[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)i + v14, v13);
    }
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
      v11 = 128;
    }
    else {
      v11 = 56;
    }
  }
  v15 = a1[4];
  a1[4] = 0;
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v16 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)i + v16, v4);
  }
  return result;
}

__int64 GameHr_ad6bb0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;

  v1 = a1[1];
  if (v1 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v1 + 8), v1);
  }
  v3 = a1[2];
  if (v3 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v3 + 8), v3);
  }
  v4 = a1[3];
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8), v4);
  }
  v5 = a1[13];
  a1[12] = 0;
  a1[13] = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    GameRoutine_1a09c50(v5);
  }
  v6 = a1[11];
  a1[10] = 0;
  a1[11] = 0;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    GameRoutine_1a09c50(v6);
  }
  v7 = (_QWORD*)a1[18];
  if (v7 != nullptr) {
    a1[18] = 0;
    v8 = 40;
    if (v7 == a1 + 14) {
      v8 = 32;
    }
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  }
  return GameRoutine_ad7440(a1);
}

_QWORD* GameHr_ad70e0(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;
  __int64 v25;

  if (result[10] == 0) {
    v24 = v2;
    v25 = v3;
    v4 = result;
    if (result[12] == 0) {
      v6 = (_QWORD*)GameData_212bf68;
      v7 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80, 16, 0);
      v7[2] = 0;
      v8 = v4[11];
      v7[8] = 0;
      *v7 = GameData_1fbf780;
      v7[1] = 0;
      v4[10] = v7 + 4;
      v4[11] = v7;
      if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        GameRoutine_1a09c50(v8);
      }
      v9 = v4[10];
      v22[0] = GameData_1fc2618;
      v22[1] = v4;
      v23 = v22;
      GameRoutine_a934d0(v22, v9);
      if (v23 == v22) {
        v10 = 32;
      }
      else {
        if (v23 == nullptr) {
          goto LABEL_12;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v23 + v10))((__int64)v23);
    LABEL_12:
      v11 = (_QWORD*)GameRoutine_651b90(*v6, 80, 16, 0);
      v12 = v4[13];
      v11[1] = 0;
      v11[2] = 0;
      v11[8] = 0;
      *v11 = GameData_1fbf780;
      v4[12] = v11 + 4;
      v4[13] = v11;
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        GameRoutine_1a09c50(v12);
      }
      v13 = v4[12];
      v22[0] = GameData_1fc2698;
      v22[1] = v4;
      v23 = v22;
      GameRoutine_a934d0(v22, v13);
      if (v23 == v22) {
        v14 = 32;
      }
      else {
        if (v23 == nullptr) {
          goto LABEL_20;
        }
        v14 = 40;
      }
      (*(void (**)(__int64))(*v23 + v14))((__int64)v23);
    LABEL_20:
      v15 = (_QWORD*)a2[4];
      v16 = a2;
      if (v15 == nullptr) {
        v23 = nullptr;
        goto LABEL_29;
      }
      if (v15 != a2) {
        v23 = (_QWORD*)a2[4];
        goto LABEL_29;
      }
      v23 = v22;
      (*(void (**)(_QWORD*, _QWORD*))(*v15 + 24LL))(v15, v22);
      v17 = (_QWORD*)a2[4];
      a2[4] = 0;
      if (v17 == a2) {
        v18 = 32;
      }
      else {
        v16 = a2;
        if (v17 == nullptr) {
          goto LABEL_29;
        }
        v18 = 40;
      }
      (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
      v16 = a2;
    LABEL_29:
      v16[4] = 0;
      v19 = (_QWORD*)v4[18];
      v4[18] = 0;
      if (v19 == v4 + 14) {
        v20 = 32;
      }
      else {
        if (v19 == nullptr) {
          goto LABEL_34;
        }
        v20 = 40;
      }
      (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
    LABEL_34:
      result = v23;
      if (v23 == nullptr) {
        v4[18] = 0;
        return result;
      }
      if (v23 != v22) {
        v4[18] = v23;
        return result;
      }
      v4[18] = v4 + 14;
      (*(void (**)(_QWORD*, _QWORD*))(*result + 24LL))(result, v4 + 14);
      result = v23;
      if (v23 == v22) {
        v21 = 32;
      }
      else {
        if (v23 == nullptr) {
          return result;
        }
        v21 = 40;
      }
      return (_QWORD*)(*(__int64 (**)(__int64))(*v23 + v21))((__int64)v23);
    }
  }
  return result;
}

__int64 GameHr_ad8980(__int64 result)
{
  _QWORD* v1;
  __int64 i;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)(result + 165) & 1) != 0) {
    return result;
  }
  v1 = *(_QWORD**)(result + 48);
  for (i = result; v1 != nullptr; v1 = (_QWORD*)*v1) {
    v3 = (__int64*)v1[9];
    v4 = (__int64*)v1[10];
    if (v3 != v4) {
      v5 = 16;
      v6 = 0;
      do {
        v7 = *v3;
        v8 = GameRoutine_1a09c70(*v3 + 4);
        v9 = v1[28];
        if (v6 >= (v1[29] - v9) >> 5) {
          GameRoutine_adab70(v8);
        }
        if (*(_BYTE*)(v7 + 52) != 0 && *(_DWORD*)(v9 + v5) == -1) {
          GameRoutine_b362c0(*(_QWORD*)(GameData_21a60d8 + 13424), v9 + v5 - 8,
                             v7 + 4, v8);
        }
        ++v3;
        v5 += 32;
        ++v6;
      } while (v3 != v4);
    }
  }
  result = *(_QWORD*)(i + 144);
  *(_BYTE*)(i + 165) = 1;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(i + 144);
    *(_QWORD*)(i + 144) = 0;
    if (result == i + 112) {
      v10 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_18;
      }
      v10 = 40;
    }
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)result + v10))((__int64)result);
  }
LABEL_18:
  v11 = *(_QWORD*)(i + 104);
  *(_QWORD*)(i + 96) = 0;
  *(_QWORD*)(i + 104) = 0;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    result = GameRoutine_1a09c50(v11);
  }
  v12 = *(_QWORD*)(i + 88);
  *(_QWORD*)(i + 80) = 0;
  *(_QWORD*)(i + 88) = 0;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return GameRoutine_1a09c50(v12);
  }
  return result;
}

__int64 GameHr_b5c820(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _OWORD* v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int64 v17;
  __int64 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int64 v26;
  __int64 v27;
  void (**v28)(__int64);
  void (**v29)(__int64, __int64, __int64, __int64, __int64);
  void (**v30)(__int64);
  void (**v31)(__int64);
  _UNKNOWN** v32;
  unsigned __int64 v33;
  void (**v34)(__int64);
  void (**v35)(__int64, __int64);
  void (**v36)(__int64, bool);
  void (**v37)(__int64, bool);
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 result;
  long double v42;
  __int64 v43;
  __int64 v44;
  _QWORD v45[4];
  _QWORD* v46;
  _QWORD v47[2];
  __int64 v48;
  __int64 v49;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  GameRoutine_604020(a1 + 16);
  *(_QWORD*)(a1 + 136) = -1;
  GameRoutine_604020(a1 + 144);
  *(_QWORD*)(a1 + 264) = -1;
  GameRoutine_604020(a1 + 272);
  *(_QWORD*)(a1 + 392) = -1;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_DWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_DWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  v3 = *GameData_212de58[0];
  *(_QWORD*)(a1 + 520) = 0;
  *(_DWORD*)(a1 + 528) = 0;
  GameRoutine_5d3770(*(_QWORD*)(v3 + 96), 0, 23, GameRoutine_b5ce20);
  v48 = 0;
  v49 = 0;
  v47[0] = 0;
  v47[1] = 0;
  v45[0] = GameData_1fc64c0;
  v46 = v45;
  GameRoutine_5fc230(v47);
  if (v46 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v46 + 48LL))(v46, v47);
  }
  v4 = GameData_212c010[0];
  GameRoutine_604060(a1 + 16, *GameData_212c010[0] + 568, v47);
  *(_QWORD*)(a1 + 136) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 16);
  if (v46 == v45) {
    v5 = 32;
  }
  else {
    if (v46 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v46 + v5))((__int64)v46);
LABEL_8:
  v48 = 0;
  v49 = 0;
  v47[0] = 0;
  v47[1] = 0;
  v45[0] = GameData_1fc6540;
  v46 = v45;
  GameRoutine_5fc230(v47);
  if (v46 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v46 + 48LL))(v46, v47);
  }
  GameRoutine_604060(a1 + 144, *v4 + 568, v47);
  *(_QWORD*)(a1 + 264) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 144);
  if (v46 == v45) {
    v6 = 32;
  }
  else {
    if (v46 == nullptr) {
      goto LABEL_15;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v46 + v6))((__int64)v46);
LABEL_15:
  v48 = 0;
  v49 = 0;
  v47[0] = 0;
  v47[1] = 0;
  v45[0] = GameData_1fc65c0;
  v46 = v45;
  GameRoutine_5fc230(v47);
  if (v46 != nullptr) {
    (*(void (**)(_QWORD*, _QWORD*))(*v46 + 48LL))(v46, v47);
  }
  GameRoutine_604060(a1 + 272, *v4 + 568, v47);
  *(_QWORD*)(a1 + 392) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), a1 + 272);
  if (v46 == v45) {
    v7 = 32;
    goto LABEL_21;
  }
  if (v46 != nullptr) {
    v7 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v46 + v7))((__int64)v46);
  }
  GameRoutine_a91100((__int64*)(a1 + 400), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 1224);
  GameRoutine_a91100((__int64*)(a1 + 512), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 144);
  GameRoutine_a91100((__int64*)(a1 + 456), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 1224);
  v8 = *(_QWORD*)(a1 + 512);
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 56LL))(v8);
  *(_QWORD*)(v9 + 128) = 0;
  *(_DWORD*)(v9 + 136) = 0;
  v10 = GameData_212c2b0;
  v11 = *((_OWORD*)GameData_212c2b0 + 1);
  v12 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)GameData_212c2b0);
  v13 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)GameData_212c2b0 + 16);
  *(_OWORD*)v9 = *(_OWORD*)GameData_212c2b0;
  *(_OWORD*)(v9 + 16) = v11;
  *(_OWORD*)(v9 + 32) = v12;
  *(_OWORD*)(v9 + 48) = v13;
  v14 = v10[1];
  v15 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10);
  v16 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10 + 16);
  *(_OWORD*)(v9 + 64) = *v10;
  *(_OWORD*)(v9 + 80) = v14;
  *(_OWORD*)(v9 + 96) = v15;
  *(_OWORD*)(v9 + 112) = v16;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
  v17 = *(_QWORD*)(a1 + 520);
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17);
  v19 = *v10;
  v20 = v10[1];
  v21 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10);
  v22 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10 + 16);
  *(_QWORD*)(v18 + 128) = 0;
  *(_DWORD*)(v18 + 136) = 0;
  *(_OWORD*)v18 = v19;
  *(_OWORD*)(v18 + 16) = v20;
  *(_OWORD*)(v18 + 32) = v21;
  *(_OWORD*)(v18 + 48) = v22;
  v23 = v10[1];
  v24 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10);
  v25 = *(_OWORD*)((char*)GameRoutine_20 + (_QWORD)v10 + 16);
  *(_OWORD*)(v18 + 64) = *v10;
  *(_OWORD*)(v18 + 80) = v23;
  *(_OWORD*)(v18 + 96) = v24;
  *(_OWORD*)(v18 + 112) = v25;
  (*(void (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17);
  v26 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 336, 16, 0);
  *(_QWORD*)v26 = 0;
  *(_QWORD*)(v26 + 8) = 0;
  v27 = v26;
  *(_DWORD*)(v26 + 16) = -1;
  *(_QWORD*)(v26 + 324) = 0;
  v28 = (void (**)(__int64))GameData_212e490[0];
  (*(void (**)(__int64))GameData_212e490[0])(v26 + 24);
  v29 = (void (**)(__int64, __int64, __int64, __int64,
                   __int64))GameData_212e4b8[0];
  (*(void (**)(__int64, __int64, __int64, __int64,
               __int64))GameData_212e4b8[0])(v27 + 24, 5, 6, 1, 6);
  v30 = (void (**)(__int64))GameData_212e498[0];
  (*(void (**)(__int64))GameData_212e498[0])(v27 + 32);
  v31 = (void (**)(__int64))GameData_212e4a0[0];
  (*(void (**)(__int64))GameData_212e4a0[0])(v27 + 36);
  v32 = GameData_212e4a8[0];
  (*(void (**)(__int64, _QWORD, __int64))GameData_212e4a8[0])(v27 + 36, 0, 1);
  (*v28)(v27 + 40);
  (*v29)(v27 + 40, 5, 2, 1, 6);
  (*v30)(v27 + 48);
  (*(void (**)(__int64, _QWORD, __int64, __int64, __int64,
               _QWORD))GameData_212e848[0])(v27 + 48, 0, 1, 1, 1, 0);
  (*v31)(v27 + 52);
  ((void (*)(__int64, _QWORD, __int64))*v32)(v27 + 52, 0, 1);
  v33 = 0;
  v34 = (void (**)(__int64))GameData_212e470[0];
  v35 = (void (**)(__int64, __int64))GameData_212e488[0];
  v36 = (void (**)(__int64, bool))GameData_212e478[0];
  v37 = (void (**)(__int64, bool))GameData_212e480[0];
  v38 = v27 + 56;
  do {
    (*v34)(v38);
    v40 = (v33 & 7) - 1;
    if (v40 <= 5 && ((0x2Du >> v40) & 1) != 0) {
      v39 = GameData_1b63834[v40];
    }
    else {
      v39 = (unsigned int)(v33 & 7) + 1;
    }
    (*v35)(v38, v39);
    (*v36)(v38, (v33 & 8) != 0);
    (*v37)(v38, v33++ > 0xF);
    v38 += 8;
  } while (v33 != 32);
  (*(void (**)(__int64))GameData_212e4c0[0])(v27 + 320);
  (*(void (**)(__int64, __int64))GameData_212e878[0])(v27 + 320, 1);
  (*v34)(v27 + 312);
  (*v35)(v27 + 312, 4);
  (*v36)(v27 + 312, true);
  result = ((__int64 (*)(__int64, _QWORD))*v37)(v27 + 312, 0);
  v43 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = v27;
  if (v43 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v44 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v44, v42);
  }
  return result;
}

__int64 GameHr_b71cc0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  long double v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  char v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[2];
  char* v22;
  char v23[16];
  __int64 v24;
  _QWORD v25[2];
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  char v31;
  int v32;

  LODWORD(v3) = *(_DWORD*)(a3 + 84);
  v5 = result;
  if ((int)v3 >= 1) {
    v7 = 0;
    do {
      v8 = v7 + 1;
      strcpy(&v23[1], "ShadowMap");
      v27 = 0x1500000000LL;
      v32 = v7 + 1;
      v30 = 0x100000001LL;
      v31 = 1;
      v28 = *(_DWORD*)(a3 + 4 * v7);
      v29 = v28;
      v23[0] = 18;
      *(struct PseudoSret*)(v21) = GameRoutine_1a0a790((unsigned int)v7);
      if ((v21[0] & 1) != 0) {
        v9 = v22;
      }
      else {
        v9 = (char*)v21 + 1;
      }
      if ((v21[0] & 1) != 0) {
        v10 = v21[1];
      }
      else {
        v10 = (unsigned __int64)LOBYTE(v21[0]) >> 1;
      }
      v11 = (_QWORD*)GameRoutine_1a09ce0(v23, v9, v10);
      v14 = v11[1];
      v13 = v11[2];
      v25[0] = *v11;
      v25[1] = v14;
      v26 = v13;
      v11[1] = 0;
      v11[2] = 0;
      *v11 = 0;
      if ((v21[0] & 1) != 0 && v22 != nullptr) {
        v15 = 128;
        if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
          v15 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v15, v12);
      }
      if ((v23[0] & 1) != 0 && v24 != 0) {
        v16 = 128;
        if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
          v16 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v16, v12);
      }
      result = GameRoutine_b528e0(a2, v25, &v27);
      v18 = v25[0];
      *(_QWORD*)(v5 + 8 * v7) = result;
      if ((v18 & 1) != 0 && v26 != 0) {
        v19 = 128;
        if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
          v19 = 56;
        }
        result = GameRoutine_1a0a4e0(GameData_2265ee0 + v19, v17);
      }
      v3 = *(int*)(a3 + 84);
      ++v7;
    } while (v8 < v3);
  }
  v20 = *(int*)(a3 + 80);
  if ((int)v20 < (int)v3) {
    do {
      *(_QWORD*)(v5 + 8 * v20++) = *(_QWORD*)(v5 + 8LL * *(int*)(a3 + 80) - 8);
    } while (v20 < *(int*)(a3 + 84));
  }
  return result;
}

__int64 GameHr_b86fb0(__int64 a1, int a2, float a3)
{
  __int64 v3;
  __int64 result;
  float v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  int v18;

  v3 = *(_QWORD*)(a1 + 360);
  result = *(_QWORD*)(v3 + 8);
  if (result == 0) {
    goto LABEL_7;
  }
  result = GameRoutine_1a0a0c0();
  if (result == 0) {
    goto LABEL_7;
  }
  if (*(_QWORD*)v3 != 0) {
    v8 = *(float*)(v3 + 76);
    *(_DWORD*)(v3 + 72) = a2;
    if (vabds_f32(v8, a3) > 0.00000011921f) {
      *(float*)(v3 + 76) = a3;
      *(_QWORD*)(v3 + 84) = 0;
      *(_QWORD*)(v3 + 96) = 0;
      *(_DWORD*)(v3 + 80) = -1;
      *(_DWORD*)(v3 + 92) = -1;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v13 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = GameRoutine_1a09c50(v13);
    v9 = *(_QWORD*)(a1 + 392);
    if (a2 != 0) {
    LABEL_8:
      v10 = *(_DWORD*)(v9 + 356);
      v11 = *(unsigned __int8*)(v9 + 360);
      if (v10 != a2 || (v11 & 1) == 0) {
        if (v10 != a2 && v11 != 0) {
          GameRoutine_c69ba0(v9);
        }
        *(_DWORD*)(v9 + 356) = a2;
        *(_BYTE*)(v9 + 360) = 1;
        GameRoutine_c6dc40(v9, v9 + 136);
        if (v11 != *(unsigned __int8*)(v9 + 360)) {
          GameRoutine_c69950(v9);
          GameRoutine_c686d0(v9, v9 + 136);
        }
      }
      return GameRoutine_c6ef90(*(_QWORD*)(a1 + 392), a3);
    }
  }
  else {
  LABEL_7:
    v9 = *(_QWORD*)(a1 + 392);
    if (a2 != 0) {
      goto LABEL_8;
    }
  }
  v14 = *(_DWORD*)(v9 + 2112);
  v15 = *(_QWORD*)(GameData_21a60d8 + 13224);
  if ((v14 & 0x80000000) == 0) {
    v16 = *(_DWORD*)(v9 + 552);
    if (v16 != -1) {
      *(_DWORD*)(v15 + 1560LL * v16 + 96LL * v14 + 296) = 0;
    }
  }
  v17 = *(_DWORD*)(v9 + 2116);
  if ((v17 & 0x80000000) == 0) {
    v18 = *(_DWORD*)(v9 + 568);
    if (v18 != -1) {
      *(_DWORD*)(v15 + 1560LL * v18 + 96LL * v17 + 296) = 0;
    }
  }
  *(_DWORD*)(v9 + 368) = 0;
  return result;
}

__int64 GameHr_bbc570(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _DWORD v25[4];
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(a1 + 1664) = 1;
  *(_DWORD*)(a1 + 1676) = 3;
  if ((*(_BYTE*)(v1 + 16700) & 1) != 0) {
    v3 = *(_QWORD*)(v1 + 16672);
    v4 = *(_DWORD*)(v3 + 24);
    v5 = *(_DWORD*)(v3 + 28);
  }
  else {
    v4 = *(_DWORD*)(v1 + 13304);
    v5 = *(_DWORD*)(v1 + 13308);
  }
  v21 = __PAIR64__(v5, v4);
  *(_BYTE*)(a1 + 1667) = 0;
  GameRoutine_bb8af0(a1, (int*)&v21);
  v6 = v21;
  GameRoutine_ba3910(*(_QWORD*)(a1 + 1552), v21);
  v7 = *(_QWORD*)(a1 + 1520);
  v24 = 0x100000001LL;
  memset(v25, 0, 11);
  v23 = v6;
  v8 = *(_QWORD*)(v7 + 184);
  v25[1] = 13;
  v9 = *(_QWORD*)(*(_QWORD*)v8 + 552LL);
  v26 = *(_QWORD*)(*(_QWORD*)v8 + 360LL);
  v10 = *(_QWORD*)(v9 + 16);
  LOBYTE(v25[2]) = 1;
  v27 = v10;
  *(struct PseudoSret*)(&v22) = GameRoutine_53c20(&v23);
  v11 = v22;
  v12 = *(_QWORD*)(v8 + 8);
  v22 = 0;
  *(_QWORD*)(v8 + 8) = v11;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    v13 = v22;
    v22 = 0;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
  }
  *(_BYTE*)(v8 + 1032) = 1;
  v24 = 0x100000001LL;
  memset(v25, 0, 11);
  v14 = 0;
  v15 = *(__int64**)(a1 + 1568);
  v16 = *v15;
  v17 = *(unsigned int*)(*v15 + 13240);
  if ((unsigned int)v17 <= 6) {
    v14 = GameData_1b7bcc8[v17];
  }
  v25[1] = v14;
  v23 = *(_QWORD*)(v16 + 13312);
  v18 = *(_QWORD*)(GameData_21a60d8 + 552);
  v26 = *(_QWORD*)(GameData_21a60d8 + 360);
  v27 = *(_QWORD*)(v18 + 16);
  LOBYTE(v25[2]) = 1;
  *(struct PseudoSret*)(&v22) = GameRoutine_53c20(&v23);
  v19 = v22;
  result = v15[6];
  v22 = 0;
  v15[6] = v19;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    result = v22;
    v22 = 0;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  *((_BYTE*)v15 + 56) = 0;
  return result;
}

__int64 GameHr_bbf6f0(__int64* a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  _QWORD v25[6];

  *a1 = a2;
  v4 = (__int64*)GameData_212bf68;
  v5 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40, 16, 0);
  GameRoutine_b711f0(v5, a2);
  v6 = *v4;
  v7 = *a1;
  a1[1] = v5;
  v8 = GameRoutine_651b90(v6, 168, 16, 0);
  GameRoutine_b5fb80(v8, v7);
  v9 = *v4;
  v10 = *a1;
  a1[2] = v8;
  v11 = (__int64*)GameRoutine_651b90(v9, 752, 16, 0);
  GameRoutine_b4d840(v11, v10);
  v12 = *v4;
  v13 = *a1;
  a1[3] = (__int64)v11;
  v14 = GameRoutine_651b90(v12, 64, 16, 0);
  GameRoutine_b791d0(v14, v13);
  v15 = *v4;
  v16 = *a1;
  a1[4] = v14;
  v17 = (__int64*)GameRoutine_651b90(v15, 8, 16, 0);
  *v17 = v16;
  a1[5] = (__int64)v17;
  a1[6] = 0;
  v18 = 0;
  *((_BYTE*)a1 + 56) = 0;
  v25[1] = 0x100000001LL;
  memset(&v25[2], 0, 11);
  v19 = *a1;
  v20 = *(unsigned int*)(*a1 + 13240);
  if ((unsigned int)v20 <= 6) {
    v18 = GameData_1b7d8bc[v20];
  }
  HIDWORD(v25[2]) = v18;
  v25[0] = *(_QWORD*)(v19 + 13312);
  v21 = *(_QWORD*)(GameData_21a60d8 + 552);
  v25[4] = *(_QWORD*)(GameData_21a60d8 + 360);
  v25[5] = *(_QWORD*)(v21 + 16);
  LOBYTE(v25[3]) = 1;
  *(struct PseudoSret*)(&v24) = GameRoutine_53c20(v25);
  v22 = v24;
  result = a1[6];
  v24 = 0;
  a1[6] = v22;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    result = v24;
    v24 = 0;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  *((_BYTE*)a1 + 56) = 0;
  return result;
}

__int64 GameHr_bcc860(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 i;
  unsigned __int8* v6;
  int v7;
  char* v8;
  int v9;
  long double v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 j;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  _QWORD v38[2];
  char v39;
  __int64 v40;
  int v41;

  v1 = result;
  if ((*(_BYTE*)(result + 200) & 1) == 0 &&
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)result + 112LL) + 24LL) != 0) {
    v2 = *(_QWORD*)(GameData_2265ee8 + 112);
    v3 = *(unsigned int*)(v2 + 48);
    if ((int)v3 >= 1) {
      v4 = *(_QWORD*)(v2 + 40);
      for (i = 0; v3 != i; ++i) {
        v6 = *(unsigned __int8**)(v4 + 8 * i);
        v7 = *v6;
        if (v7 == 67) {
          v7 = v6[1];
          if (v7 == 77) {
            v7 = v6[2];
            if (v6[2] == 0) {
              v8 = &GameData_1af96e7;
            LABEL_17:
              v9 = (unsigned __int8)*v8;
              v7 = 0;
              goto LABEL_18;
            }
            if (v7 == 78) {
              v7 = v6[3];
              if (v6[3] == 0) {
                v8 = &GameData_1af96e8;
                goto LABEL_17;
              }
              v9 = 0;
            }
            else {
              v9 = 78;
            }
          }
          else {
            v8 = &GameData_1af96e6;
            if (v7 == 0) {
              goto LABEL_17;
            }
            v9 = 77;
          }
        }
        else {
          v9 = 67;
        }
      LABEL_18:
        if (v7 == v9) {
          goto LABEL_21;
        }
      }
    }
    i = 0xFFFFFFFFLL;
  LABEL_21:
    *(struct PseudoSret*)(v38) = GameRoutine_bccce0(result, i);
    result = GameRoutine_18e5d80(v38);
    if ((v39 & 1) != 0 && v40 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v11 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v11, v10);
    }
    *(_BYTE*)(v1 + 200) = 1;
  }
  v12 = *(__int64**)(v1 + 32);
  if (v12 != (__int64*)(v1 + 24)) {
    v13 = v1 + 8;
    do {
      v16 = (__int64*)v12[1];
      result = (*(__int64 (**)(__int64*))(*(v12 - 2) + 16))(v12 - 2);
      if ((result & 1) != 0) {
        *(_QWORD*)(v1 + 40 + 8LL * (*((int*)v12 + 4) >> 6)) |=
            1LL << *((_DWORD*)v12 + 4);
        v17 = v12[3];
        if (v17 != 0 && *(_QWORD*)(v17 + 592) != 0) {
          result = GameRoutine_bc7ac0(*(_QWORD*)v1, (__int64)(v12 - 2));
        }
        v14 = (__int64*)v12[1];
        v15 = *v14;
        *(_QWORD*)(*v12 + 8) = v14;
        *v14 = *v12;
        *(_QWORD*)(v15 + 8) = v12;
        *v12 = v15;
        *v12 = *(_QWORD*)v13;
        *(_QWORD*)(v15 + 8) = v13;
        *(_QWORD*)(*(_QWORD*)v13 + 8LL) = v12;
        *(_QWORD*)v13 = v15;
      }
      v12 = v16;
    } while (v16 != (__int64*)(v1 + 24));
  }
  v18 = *(_QWORD*)(v1 + 16);
  if (v18 != v1 + 8) {
    while (1) {
      v19 = *(_QWORD*)(v18 + 8);
      if ((*(_BYTE*)(v18 - 7) & 1) != 0) {
        goto LABEL_42;
      }
      if (*(int*)(v18 - 4) <= 0) {
        break;
      }
    LABEL_38:
      v18 = v19;
      if (v19 == v1 + 8) {
        goto LABEL_44;
      }
    }
    *(_BYTE*)(v18 - 7) = 1;
  LABEL_42:
    v20 = *(_DWORD*)(v18 + 16);
    v21 = *(_QWORD*)(*(_QWORD*)(v1 + 208) + 8LL);
    if ((*(_BYTE*)(v21 + 24LL * v20 + 8) & 1) == 0) {
      v22 = v21 + 24LL * v20;
      *(_BYTE*)(v22 + 8) = 1;
      *(_QWORD*)(v22 + 16) = v18 - 16;
    }
    goto LABEL_38;
  }
LABEL_44:
  v23 = *(__int64**)(v1 + 192);
  if (v23 != (__int64*)(v1 + 184)) {
    v24 = v1 + 168;
    do {
      v27 = (__int64*)v23[1];
      result = (*(__int64 (**)(__int64*))(*(v23 - 2) + 16))(v23 - 2);
      if (v23[21] != 0) {
        if ((result & 1) != 0) {
          v28 = (__int64*)v23[1];
          v29 = *v28;
          *(_QWORD*)(*v23 + 8) = v28;
          *v28 = *v23;
          *(_QWORD*)(v29 + 8) = v23;
          *v23 = v29;
          *v23 = *(_QWORD*)v24;
          *(_QWORD*)(v29 + 8) = v24;
          *(_QWORD*)(*(_QWORD*)v24 + 8LL) = v23;
          *(_QWORD*)v24 = v29;
        }
      }
      else {
        v25 = (__int64*)v23[1];
        v26 = *v25;
        *(_QWORD*)(*v23 + 8) = v25;
        *v25 = *v23;
        *(_QWORD*)(v26 + 8) = v23;
        *v23 = v26;
      }
      v23 = v27;
    } while (v27 != (__int64*)(v1 + 184));
  }
  for (j = *(_QWORD*)(v1 + 176); j != v1 + 168; j = *(_QWORD*)(j + 8)) {
    if ((*(_BYTE*)(j - 7) & 1) == 0 && *(int*)(j - 4) <= 0) {
      *(_BYTE*)(j - 7) = 1;
    }
  }
  v31 = *(_QWORD**)(v1 + 208);
  v32 = v31[1];
  v33 = v31[2];
  if (v32 != v33) {
    if ((*(_BYTE*)(v1 + 216) & 1) != 0) {
      do {
        if (*(_BYTE*)(v32 + 8) == 1) {
          *(_BYTE*)v32 = 1;
          *(_DWORD*)(v32 + 4) = 1;
        }
        v32 += 24;
      } while (v32 != v33);
    }
    else {
      v34 = 0;
      do {
        if (*(_BYTE*)(v32 + 8) == 1 && *(_BYTE*)v32 == 1) {
          v35 = *(_DWORD*)(v32 + 4);
          if (v35 < 0) {
            v36 = *(_QWORD*)(v32 + 16);
            v37 = v31[8];
            v41 = v34;
            v38[0] = v36;
            if (v37 == 0) {
              GameRoutine_60a310(0);
            }
            result = (*(__int64 (**)(__int64, int*, _QWORD*))(
                *(_QWORD*)v37 + 48LL))(v37, &v41, v38);
            *(_BYTE*)v32 = 0;
            *(_DWORD*)(v32 + 4) = 0;
            *(_BYTE*)(v32 + 8) = 0;
            *(_QWORD*)(v32 + 16) = 0;
          }
          else {
            *(_DWORD*)(v32 + 4) = v35 - 1;
          }
        }
        ++v34;
        v32 += 24;
      } while (v32 != v33);
    }
  }
  *(_BYTE*)(v1 + 216) = 0;
  return result;
}

__int64* GameHr_beeb60(__int64* result, long double a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = result[4];
  v3 = result;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    result = (__int64*)GameRoutine_1a09c50(v2);
    v4 = *v3;
    if (*v3 == 0) {
      return result;
    }
  }
  else {
    v4 = *result;
    if (*result == 0) {
      return result;
    }
  }
  v5 = v3[1];
  if (v4 == v5) {
  LABEL_23:
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v13 = 56;
    }
    return (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13, a2);
  }
  do {
    v7 = *(_QWORD**)(v5 - 32);
    if ((_QWORD*)(v5 - 64) == v7) {
      v8 = 32;
    }
    else {
      if (v7 == nullptr) {
        goto LABEL_14;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  LABEL_14:
    v9 = *(_QWORD**)(v5 - 80);
    if ((_QWORD*)(v5 - 112) == v9) {
      v10 = 32;
    }
    else {
      if (v9 == nullptr) {
        goto LABEL_19;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
  LABEL_19:
    result = *(__int64**)(v5 - 128);
    v11 = v5 - 160;
    if ((__int64*)(v5 - 160) == result) {
      v6 = 32;
    LABEL_7:
      result =
          (__int64*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
      goto LABEL_8;
    }
    if (result != nullptr) {
      v6 = 40;
      goto LABEL_7;
    }
  LABEL_8:
    v5 -= 160;
  } while (v11 != v4);
  v12 = *v3;
  v3[1] = v4;
  if (v12 != 0) {
    goto LABEL_23;
  }
  return result;
}

__int64 GameHr_bf1300(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _BYTE* v13;
  _QWORD* v14;
  __int64 v15;
  _BYTE* v16;
  _QWORD* v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  __int64 v23;
  _BYTE* v24;
  __int64 v25;
  __int64 v26;
  _BYTE v27[32];
  _BYTE* v28;
  _BYTE v29[32];
  _BYTE* v30;
  _BYTE v31[32];
  _BYTE* v32;
  __int64 v33;
  __int64 v34;

  v2 = (_QWORD*)a1[4];
  if (v2 != nullptr) {
    if (v2 == a1) {
      v4 = a1;
      v5 = a1[4];
      v28 = v27;
      (*(void (**)(_QWORD* __return_ptr, __int64, _BYTE*))(*v2 + 24LL))(v2, v5,
                                                                        v27);
      a1 = v4;
    }
    else {
      v28 = (_BYTE*)a1[4];
      a1[4] = 0;
    }
  }
  else {
    v28 = nullptr;
  }
  v6 = (_QWORD*)a1[10];
  if (v6 != nullptr) {
    if (v6 == a1 + 6) {
      v30 = v29;
      v7 = a1;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*, _BYTE*))(*v6 + 24LL))(v6, v6,
                                                                        v29);
      a1 = v7;
    }
    else {
      v30 = (_BYTE*)a1[10];
      a1[10] = 0;
    }
  }
  else {
    v30 = nullptr;
  }
  v8 = (_QWORD*)a1[16];
  if (v8 != nullptr) {
    if (v8 == a1 + 12) {
      v32 = v31;
      v9 = a1;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*, _BYTE*))(*v8 + 24LL))(v8, v8,
                                                                        v31);
      a1 = v9;
    }
    else {
      v32 = (_BYTE*)a1[16];
      a1[16] = 0;
    }
  }
  else {
    v32 = nullptr;
  }
  v10 = a1[19];
  v33 = a1[18];
  v34 = v10;
  GameRoutine_bf1600(a1, a2);
  v11 = (_QWORD*)a2[4];
  a2[4] = 0;
  if (v11 == a2) {
    v12 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_21;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
LABEL_21:
  v13 = v28;
  if (v28 != nullptr) {
    if (v28 == v27) {
      a2[4] = a2;
      (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v13 + 24LL))(v13, a2);
    }
    else {
      a2[4] = v28;
      v28 = nullptr;
    }
  }
  else {
    a2[4] = 0;
  }
  v14 = (_QWORD*)a2[10];
  a2[10] = 0;
  if (v14 == a2 + 6) {
    v15 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_31;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v14 + v15))((__int64)v14);
LABEL_31:
  v16 = v30;
  if (v30 != nullptr) {
    if (v30 == v29) {
      a2[10] = a2 + 6;
      (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v16 + 24LL))(v16, a2 + 6);
    }
    else {
      a2[10] = v30;
      v30 = nullptr;
    }
  }
  else {
    a2[10] = 0;
  }
  v17 = (_QWORD*)a2[16];
  a2[16] = 0;
  if (v17 == a2 + 12) {
    v18 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_41;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
LABEL_41:
  v19 = v32;
  if (v32 == nullptr) {
    a2[16] = 0;
    goto LABEL_45;
  }
  if (v32 != v31) {
    a2[16] = v32;
    v32 = nullptr;
  LABEL_45:
    v20 = v34;
    a2[18] = v33;
    a2[19] = v20;
    goto LABEL_46;
  }
  a2[16] = a2 + 12;
  (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v19 + 24LL))(v19, a2 + 12);
  v24 = v32;
  v25 = v34;
  a2[18] = v33;
  a2[19] = v25;
  if (v24 == v31) {
    v26 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_46;
    }
    v26 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v24 + v26))((__int64)v24);
LABEL_46:
  if (v30 == v29) {
    v21 = 32;
  }
  else {
    if (v30 == nullptr) {
      goto LABEL_51;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v30 + v21))((__int64)v30);
LABEL_51:
  result = (__int64)v28;
  if (v28 == v27) {
    v23 = 32;
  }
  else {
    if (v28 == nullptr) {
      return result;
    }
    v23 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v28 + v23))((__int64)v28);
}

_QWORD* GameHr_bf1600(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v3;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;

  v3 = (_QWORD*)a1[4];
  a1[4] = 0;
  if (v3 == a1) {
    v5 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v3 + v5))((__int64)v3);
LABEL_6:
  v6 = (_QWORD*)a2[4];
  if (v6 != nullptr) {
    if (v6 == a2) {
      a1[4] = a1;
      (*(void (**)(_QWORD, _QWORD*))(*(_QWORD*)a2[4] + 24LL))(a2[4], a1);
    }
    else {
      a1[4] = v6;
      a2[4] = 0;
    }
  }
  else {
    a1[4] = 0;
  }
  v7 = (_QWORD*)a1[10];
  a1[10] = 0;
  if (v7 == a1 + 6) {
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
  v9 = (_QWORD*)a2[10];
  if (v9 != nullptr) {
    if (v9 == a2 + 6) {
      a1[10] = a1 + 6;
      (*(void (**)(_QWORD, _QWORD*))(*(_QWORD*)a2[10] + 24LL))(a2[10], a1 + 6);
    }
    else {
      a1[10] = v9;
      a2[10] = 0;
    }
  }
  else {
    a1[10] = 0;
  }
  v10 = (_QWORD*)a1[16];
  a1[16] = 0;
  if (v10 == a1 + 12) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_26;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
LABEL_26:
  v12 = (_QWORD*)a2[16];
  if (v12 != nullptr) {
    if (v12 == a2 + 12) {
      a1[16] = a1 + 12;
      (*(void (**)(_QWORD, _QWORD*))(*(_QWORD*)a2[16] + 24LL))(a2[16], a1 + 12);
    }
    else {
      a1[16] = v12;
      a2[16] = 0;
    }
  }
  else {
    a1[16] = 0;
  }
  a1[19] = a2[19];
  a1[18] = a2[18];
  return a1;
}

__int64 GameHr_bf9b40(__int64 result, long double a2)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *(_QWORD**)(result + 16);
  v3 = (__int64*)result;
  v4 = GameData_212bf68;
  if (v2 != nullptr) {
    do {
      v6 = (_QWORD*)*v2;
      v7 = (_QWORD*)v2[22];
      if (v7 == v2 + 18) {
        v8 = 32;
      }
      else {
        if (v7 == nullptr) {
          goto LABEL_12;
        }
        v8 = 40;
      }
      (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
    LABEL_12:
      v9 = (_QWORD*)v2[16];
      if (v9 == v2 + 12) {
        v10 = 32;
        goto LABEL_16;
      }
      if (v9 != nullptr) {
        v10 = 40;
      LABEL_16:
        (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
      }
      v11 = v2[4];
      if (v11 != 0) {
        v12 = *(_QWORD*)v4;
        v2[5] = v11;
        if (*(_QWORD*)(v12 + 200) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        GameRoutine_1a0a4e0(v12 + v13, a2);
      }
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v4 + v5, a2);
      v2 = v6;
    } while (v6 != nullptr);
  }
  v14 = *v3;
  *v3 = 0;
  if (v14 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v15 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v4 + v15, a2);
  }
  return result;
}

__int64* GameHr_bfa220(__int64* result, unsigned __int64* a2, long double a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v3 = result[1];
  if (v3 == 0 || result[3] == 0) {
    return result;
  }
  v5 = *a2;
  v6 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v7 = *a2;
    if (v5 >= v3) {
      v7 = v5 % v3;
    }
  }
  else {
    v7 = v5 & v6;
  }
  v8 = *result;
  v9 = *(__int64***)(*result + 8 * v7);
  if (v9 == nullptr) {
    return result;
  }
  v10 = *v9;
  if (*v9 == nullptr) {
    return result;
  }
  if ((v3 & v6) == 0) {
    while (1) {
      v12 = v10[1];
      if (v12 == v5) {
        if (v10[2] == v5) {
          goto LABEL_25;
        }
      }
      else if ((v12 & v6) != v7) {
        return result;
      }
      v10 = (__int64*)*v10;
      if (v10 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v5) {
      break;
    }
    if (v11 >= v3) {
      v11 %= v3;
    }
    if (v11 != v7) {
      return result;
    }
  LABEL_14:
    v10 = (__int64*)*v10;
    if (v10 == nullptr) {
      return result;
    }
  }
  if (v10[2] != v5) {
    goto LABEL_14;
  }
LABEL_25:
  if ((v3 & v6) != 0) {
    if (v5 >= v3) {
      v5 %= v3;
    }
  }
  else {
    v5 &= v6;
  }
  v13 = *(__int64**)(v8 + 8 * v5);
  do {
    v14 = v13;
    v13 = (__int64*)*v13;
  } while (v13 != v10);
  if (v14 == result + 2) {
    goto LABEL_42;
  }
  v15 = v14[1];
  if ((v3 & v6) != 0) {
    if (v15 >= v3) {
      v15 %= v3;
    }
  }
  else {
    v15 &= v6;
  }
  if (v15 != v5) {
  LABEL_42:
    if (*v10 == 0) {
      goto LABEL_43;
    }
    v16 = *(_QWORD*)(*v10 + 8);
    if ((v3 & v6) != 0) {
      if (v16 >= v3) {
        v16 %= v3;
      }
    }
    else {
      v16 &= v6;
    }
    if (v16 != v5) {
    LABEL_43:
      *(_QWORD*)(v8 + 8 * v5) = 0;
    }
  }
  v17 = *v10;
  if (*v10 != 0) {
    v18 = *(_QWORD*)(v17 + 8);
    if ((v3 & v6) != 0) {
      if (v18 >= v3) {
        v18 %= v3;
      }
    }
    else {
      v18 &= v6;
    }
    if (v18 != v5) {
      *(_QWORD*)(*result + 8 * v18) = v14;
      v17 = *v10;
    }
  }
  *v14 = v17;
  *v10 = 0;
  --result[3];
  v19 = (__int64*)v10[22];
  if (v19 == v10 + 18) {
    v20 = 32;
  LABEL_55:
    (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
  }
  else if (v19 != nullptr) {
    v20 = 40;
    goto LABEL_55;
  }
  v21 = (__int64*)v10[16];
  if (v21 == v10 + 12) {
    v22 = 32;
  LABEL_60:
    (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
  }
  else if (v21 != nullptr) {
    v22 = 40;
    goto LABEL_60;
  }
  v23 = v10[4];
  v24 = GameData_212bf68;
  if (v23 != 0) {
    v25 = *(_QWORD*)GameData_212bf68;
    v10[5] = v23;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    GameRoutine_1a0a4e0(v25 + v26, a3);
  }
  v27 = 128;
  if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
    v27 = 56;
  }
  return (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)v24 + v27, a3);
}

__int64 GameHr_c00cc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;

  *(_QWORD*)a1 = a4;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  v7 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80, 16, 0);
  v7[2] = 0;
  v8 = GameData_212e340[0];
  v7[8] = 0;
  *(_QWORD*)(a1 + 64) = v7 + 4;
  *(_QWORD*)(a1 + 72) = v7;
  v16 = v15;
  *v7 = v8 + 2;
  v7[1] = 0;
  v15[0] = GameData_1fd1508;
  v15[1] = a1;
  GameRoutine_a934d0(v15, v7 + 4);
  if (v16 == v15) {
    v9 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_6;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v16 + v9))((__int64)v16);
LABEL_6:
  *(_DWORD*)(a1 + 80) = 1;
  v10 = *(_QWORD*)(GameData_21a60d8 + 13432);
  v11 = *(_QWORD*)(a1 + 72);
  v13 = *(_QWORD*)(a1 + 64);
  v14 = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 56) = (*(__int64 (**)(__int64, __int64, __int64, __int64*))(
      *(_QWORD*)v10 + 24LL))(v10, a2, a3, &v13);
  result = v14;
  if (v14 != 0) {
    return GameRoutine_1a09c50(v14);
  }
  return result;
}

#pragma GCC visibility pop
