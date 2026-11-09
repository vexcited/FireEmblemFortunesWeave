#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern _DWORD GameData_1a82db0[4];

extern _UNKNOWN GameData_1a964b8;

extern char GameData_1a9f09e;

extern _QWORD GameData_1b01568[4];

extern _QWORD GameData_1b12ff8[5];

extern __int64 (*GameData_1f56ac0[])();

extern __int64 (*GameData_1f83388[])();

extern __int64 (*GameData_1f8ce98[])();

extern _QWORD GameData_1fb0230[4];

extern __int64 (*GameData_2017480[3])();

extern __int64 GameData_20a8cc0;

extern __int64 GameData_212bf68;

extern __int64* GameData_212c878[6];

extern __int64* GameData_212cf40[2];

extern __int64 GameData_212cf60;

extern __int64* GameData_212d448[9];

extern __int64* GameData_212d468[5];

extern int* GameData_212deb0;

extern _UNKNOWN* GameData_212deb8;

extern __int64* GameData_212dec0[4];

extern __int64* GameData_212e008[9];

extern __int64* GameData_212e010[8];

extern __int64* GameData_212e030[4];

extern int* GameData_212ea88;

extern _UNKNOWN* GameData_212ea90;

extern int* GameData_212ea98;

extern _UNKNOWN* GameData_212eaa0;

extern __int64* GameData_212f4e0[3];

extern __int64 GameData_212f510[6];

extern __int64 GameData_212f518[5];

extern __int64* GameData_212ff98[9];

extern __int16* GameData_2134648[7];

extern __int64 GameData_2135528[4];

extern __int64* GameData_21355a8;

extern __int64* GameData_21355d8[2];

extern _UNKNOWN* GameData_2135680;

extern _UNKNOWN* GameData_2135698;

extern _UNKNOWN* GameData_21356b8;

extern _UNKNOWN* GameData_2135820;

extern __int64* GameData_2135f10;

extern _UNKNOWN* GameData_2140be8;

extern __int16 GameData_2198f28;

extern _UNKNOWN* GameData_21a3490;

extern _UNKNOWN GameData_21a34b8;

extern _UNKNOWN GameData_21a34d0;

extern __int64 GameData_21a3500;

extern char GameData_21a3508;

extern __int64 GameData_21a350c;

extern _UNKNOWN GameData_21a3b78;

extern __int64 GameData_21a3cb8;

extern __int64 GameData_21c6980;

extern __int64 GameData_21c96e8;

extern __int64 GameData_21ca2f0;

extern __int64 GameData_21ca310;

extern __int64 GameData_21caab0;

extern __int64 GameData_21cd150;

extern __int64 GameData_21d8780;

extern int GameData_21d9700;

extern int GameData_21ec57c;

extern __int64 GameData_21ec7a8;

extern __int64 GameData_21ec7b0;

extern __int64 GameData_21ee240;

extern __int64 GameData_21ee260;

extern __int64 GameData_21f1778;

extern __int64 GameData_21f1780;

extern __int64 GameData_21f1790;

extern __int64 GameData_21f1798;

extern __int64 GameData_21f17a8;

extern __int64 GameData_21f17b0;

extern __int64 GameData_21f4280;

extern __int64 GameData_21f4290;

extern __int64 GameData_21f4298;

extern __int64 GameData_21f42a8;

extern __int64 GameData_21f42b0;

extern __int64 GameData_21f42d0;

extern __int64 GameData_21f42e0;

extern __int64 GameData_21f42e8;

extern __int64 GameData_21f42f8;

extern __int64 GameData_21f4300;

extern __int64 GameData_21f4cc0;

extern __int64 GameData_21f6250;

extern __int64 GameData_21f6268;

extern __int64 GameData_21f6270;

extern __int64 GameData_21f6280;

extern __int64 GameData_21f7cf8;

extern __int64 GameData_21f7d00;

extern __int64 GameData_21f7d10;

extern char GameData_22167b8;

extern __int64 GameData_2216820;

extern char GameData_2216858;

extern __int64 GameData_2219068;

extern __int64 GameData_2219098;

extern __int64 GameData_22190a0;

extern __int64 GameData_22356f0;

extern __int64 GameData_22356f8;

extern __int64 GameData_2235708;

extern __int64 GameData_2235e30;

extern __int64 GameData_2240170;

extern __int64 GameData_2258178;

extern __int64 GameData_2265ed8;

extern __int64 GameData_2265ee8;

__int64 GameRoutine_100b50(_QWORD, _QWORD, float);

__int64 GameRoutine_100b530(_QWORD);

__int64 GameRoutine_1011550(_QWORD, _QWORD, _QWORD);

float GameRoutine_101470(_QWORD);

__int64 GameRoutine_1069b50(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_106cdd0(void);

__int64 GameRoutine_106d080(_QWORD);

struct PseudoSret GameRoutine_108e3e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                      long double);

__int64 GameRoutine_108e940(_QWORD);

__int64 GameRoutine_108f060(_QWORD);

__int64 GameRoutine_108f2a0(_QWORD);

__int64 GameRoutine_10cb00(_QWORD, _QWORD);

__int64 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_10d860(_QWORD, _QWORD);

__int64 GameRoutine_10d870(_QWORD, _QWORD, _QWORD, float);

struct PseudoSret GameRoutine_111d920(_QWORD);

struct PseudoSret GameRoutine_111df40(_QWORD);

__int64 GameRoutine_112bd00(_QWORD);

__int64 GameRoutine_112bf60(_QWORD);

__int64 GameRoutine_1195900(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1196940(_QWORD);

__int64 GameRoutine_1207f0(_QWORD, _QWORD);

__int64 GameRoutine_120f710(_QWORD);

__int64 GameRoutine_126c90(_QWORD);

__int64 GameRoutine_126cb0(_QWORD);

__int64 GameRoutine_126cc0(_QWORD);

__int64 GameRoutine_144910(_QWORD);

__int64 GameRoutine_14b4b70(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_14e360(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09b70(_QWORD);

__int64 GameRoutine_1a09b80(_QWORD);

__int64 GameRoutine_1a09bc0(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09d30(_QWORD, _QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a060(_QWORD, _QWORD);

__int64 GameRoutine_1a0a0c0(void);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0c1a0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0cc20(_QWORD, _QWORD);

__int64 GameRoutine_1a0cc50(_QWORD, _QWORD);

__int64 GameRoutine_25eed0(_QWORD);

__int64 GameRoutine_283ea0(void);

__int64 GameRoutine_2845c0(_QWORD);

__int64 GameRoutine_284990(_QWORD);

__int64 GameRoutine_28b300(_QWORD, _QWORD);

__int64 GameRoutine_290a80(_QWORD);

__int64 GameRoutine_2923e0(void);

__int64 GameRoutine_2a1b90(_QWORD);

__int64 GameRoutine_2a1f40(_QWORD, _QWORD);

__int64 GameRoutine_2a4b00(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_2a4d20(_QWORD);

__int64 GameRoutine_2b9620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_2beb20(_QWORD, _QWORD);

__int64 GameRoutine_2c08c0(void);

__int64 GameRoutine_2d2a10(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_2d52e0(_QWORD, _QWORD);

__int64 GameRoutine_2fa7e0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_31fa80(_QWORD);

__int64 GameRoutine_320250(_QWORD, _QWORD);

__int64 GameRoutine_38ca60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_38cd20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);

__int64 GameRoutine_3a31f0(_QWORD);

__int64 GameRoutine_3db310(_QWORD);

__int64 GameRoutine_3db340(_QWORD);

__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_5566c0(_QWORD);

__int64 GameRoutine_556c60(_QWORD);

__int64 GameRoutine_556d80(_QWORD);

__int64 GameRoutine_55af80(_QWORD);

__int64 GameRoutine_55b6c0(_QWORD);

__int64 GameRoutine_55b740(_QWORD);

__int64 GameRoutine_55b750(_QWORD);

__int64 GameRoutine_55bac0(_QWORD, _QWORD);

__int64 GameRoutine_55bbf0(_QWORD);

__int64 GameRoutine_55be90(_QWORD);

__int64 GameRoutine_55bec0(void);

__int64 GameRoutine_55bed0(void);

__int64 GameRoutine_55bfb0(_QWORD);

__int64 GameRoutine_55bfc0(_QWORD, _QWORD);

__int64 GameRoutine_55c000(_QWORD);

__int64 GameRoutine_55c040(_QWORD);

float GameRoutine_55c200(_QWORD);

__int64 GameRoutine_560fa0(_QWORD);

__int64 GameRoutine_560fc0(_QWORD);

__int64 GameRoutine_561000(void);

__int64 GameRoutine_5662e0(_QWORD);

__int64 GameRoutine_566340(_QWORD);

float GameRoutine_566360(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_566d50(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_58f850(void);

__int64 GameRoutine_5fb840(void);

__int64 GameRoutine_5fb900(_QWORD);

__int64 GameRoutine_5fb950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_5fba80(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_682bc0(_QWORD, _QWORD);

__int64 GameRoutine_6ea8c0(_QWORD);

__int64 GameRoutine_70df40(_QWORD, _QWORD);

__int64 GameRoutine_716d80(_QWORD, _QWORD);

__int64 GameRoutine_716f20(_QWORD);

__int64 GameRoutine_747df0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_74cd60(_QWORD);

__int64 GameRoutine_7a86e0(_QWORD);

__int64 GameRoutine_7f3400(_QWORD);

void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);

__int64 GameRoutine_81f4e0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_820d50(_QWORD);

__int64 GameRoutine_822320(_QWORD);

__int64 GameRoutine_8224a0(_QWORD);

__int64 GameRoutine_843420(_QWORD, _QWORD);

__int64 GameRoutine_89b540(_QWORD);

__int64 GameRoutine_89b900(_QWORD);

__int64 GameRoutine_89ce60(void);

__int64 GameRoutine_93bb80(_QWORD);

__int64 GameRoutine_960f80(_QWORD);

float GameRoutine_966340(_QWORD, _QWORD);

__int64 GameRoutine_9664e0(_QWORD);

__int64 GameRoutine_a292c0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a2c820(void);

__int64 GameRoutine_a2c9c0(_QWORD, _QWORD);

__int64 GameRoutine_a2cab0(_QWORD, _QWORD, _QWORD, double);

__int64 GameRoutine_a77c00(_QWORD, _QWORD);

__int64 GameRoutine_a944e0(_QWORD, _QWORD);

__int64 GameRoutine_ad57c0(_QWORD);

__int64 GameRoutine_ae0560(void);

__int64 GameRoutine_c086a0(void);

__int64 GameRoutine_c08940(_QWORD, _QWORD, _QWORD, float);

__int64 GameRoutine_ec1530(_QWORD);

void GameHr_320() { ; }

__int64 GameHr_1187c0(__int64 a1, __int64 a2, char a3)
{
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int16 v20;
  _QWORD v21[4];
  _QWORD* v22;
  __int64 v23;

  if ((a3 & 1) == 0) {
    return GameRoutine_1207f0(*(_QWORD*)(a2 + 32), a2);
  }
  GameRoutine_1a09b70(&GameData_2198f28);
  v7 = v21;
  v21[0] = GameData_1f56ac0;
  v21[1] = a2;
  v8 = *(__int64**)(a1 + 40);
  v22 = v21;
  v9 = *v8;
  if (v9 == 0) {
    goto LABEL_11;
  }
  v10 = *(_QWORD*)(v9 + 5616);
  v7 = v21;
  v23 = v9;
  while (1) {
    (*(void (**)(_QWORD*, __int64*))(*v7 + 48LL))(v7, &v23);
    v7 = v22;
    if (v10 == 0) {
      break;
    }
    v23 = v10;
    v10 = *(_QWORD*)(v10 + 5616);
    if (v22 == nullptr) {
      GameRoutine_60a310(0, v6);
    }
  }
  if (v22 == v21) {
  LABEL_11:
    v11 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_13;
    }
    v11 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v7 + v11))(v7, v6);
LABEL_13:
  GameRoutine_1a09b80(&GameData_2198f28);
  GameRoutine_1a09b70(&GameData_2198f28);
  v12 = *(_QWORD*)(a1 + 72);
  v13 = (__int64*)(v12 + a2);
  v15 = *(_QWORD*)(v12 + a2);
  v14 = *(_QWORD*)(v12 + a2 + 8);
  if (v15 == 0) {
    *(_QWORD*)(a1 + 56) = v14;
    v16 = *v13;
    v17 = v13[1];
    if (v17 != 0) {
      goto LABEL_15;
    }
  LABEL_17:
    *(_QWORD*)(a1 + 64) = v16;
    goto LABEL_18;
  }
  *(_QWORD*)(v12 + v15 + 8) = v14;
  v12 = *(_QWORD*)(a1 + 72);
  v13 = (__int64*)(v12 + a2);
  v16 = *(_QWORD*)(v12 + a2);
  v17 = *(_QWORD*)(v12 + a2 + 8);
  if (v17 == 0) {
    goto LABEL_17;
  }
LABEL_15:
  *(_QWORD*)(v12 + v17) = v16;
  v13 = (__int64*)(*(_QWORD*)(a1 + 72) + a2);
LABEL_18:
  *v13 = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 72) + a2 + 8) = 0;
  GameRoutine_1a09b80(GameData_2134648[0]);
  (**(void (***)(__int64))a2)(a2);
  GameRoutine_1a09b70(a1 + 2400);
  v18 = *(_QWORD*)(a1 + 2384);
  v19 = (a2 - *(_QWORD*)(a1 + 2376)) / 0x1688uLL;
  v20 = *(_WORD*)(a1 + 2392) - 1;
  *(_WORD*)(a1 + 2392) = v20;
  *(_WORD*)(v18 + 2LL * v20) = v19;
  return GameRoutine_1a09b80(a1 + 2400);
}

float GameHr_145f60(__int64 a1, __int64 a2, char a3, float a4)
{
  __int64 v4;
  float result;
  char v11;

  if (*(int*)(a1 + 5792) <= 5 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 216LL))(a1) & 1) != 0) {
    GameRoutine_144910(a1);
  }
  else if ((*(_BYTE*)(a1 + 5885) & 1) == 0) {
    if (((GameRoutine_126c90(a1 + 40) & 1) != 0 ||
         (GameRoutine_126cb0(a1 + 40) & 1) != 0 ||
         (GameRoutine_126cc0(a1 + 40) & 1) != 0) &&
        (v11 = GameRoutine_126c90(a1 + 40), (a3 & 1) != 0) && (v11 & 1) != 0) {
      if (*(_DWORD*)(a2 + 160) != 0) {
        v4 = 0;
      }
      else {
        v4 = *(_QWORD*)(a2 + 152);
      }
      if (v4 != 0 && *(_DWORD*)(a1 + 3652) == 5) {
        result = *(float*)(a1 + 3692);
        if (result > *(float*)(v4 + 40)) {
          *(_DWORD*)(a1 + 3700) = *(_DWORD*)(a1 + 3608);
          result = *(float*)(v4 + 40);
          *(_DWORD*)(a1 + 3676) = 0;
          *(float*)(a1 + 3692) = result;
        }
      }
    }
    else {
      GameRoutine_10d860(a1 + 3600, 5);
      *(float*)(a1 + 6060) =
          (*(float (**)(__int64, _QWORD))(*(_QWORD*)a1 + 464LL))(a1, 0);
      GameRoutine_10d870(a1 + 3600, a2, a3 & 1, a4);
      (*(void (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
    }
  }
  return result;
}

__int64 GameHr_162800(__int64 a1, __int64 a2, __int64 a3)
{
  int v4;
  __int64 result;

  v4 = a2;
  result = GameRoutine_14e360(a1, a2, a3);
  if (v4 >= 1) {
    *(_QWORD*)(result + 8LL * (unsigned int)v4 + 272) = a3 + 5136;
  }
  return result;
}

__int64 GameHr_1937c0(__int64 a1)
{
  __int64 v1;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  *(_BYTE*)(v1 + 12) = 0;
  return atomic_fetch_add((atomic_uint* volatile)(v1 + 8), 1u) + 1;
}

_DWORD* GameHr_1d0660(__int64 a1, _DWORD* a2, _DWORD* a3, _DWORD* a4,
                      _DWORD* a5, _DWORD* a6)
{
  _DWORD* result;

  result = (_DWORD*)(a1 + 12592);
  if (a2 != nullptr) {
    *a2 = result[16] + result[8];
  }
  if (a3 != nullptr) {
    *a3 = result[52];
  }
  if (a4 != nullptr) {
    *a4 = result[56];
  }
  if (a5 != nullptr) {
    *a5 = result[8];
  }
  if (a6 != nullptr) {
    *a6 = result[53];
  }
  return result;
}

__int64 GameHr_278770(__int64 a1, unsigned int a2)
{
  int* v2;
  unsigned int v3;
  __int64 result;
  unsigned int v5;
  unsigned int* v6;
  unsigned int* v7;
  unsigned int v8;

  v2 = *(int**)(*(_QWORD*)(a1 + 8) + 64LL);
  v3 = HIBYTE(a2);
  result = 0xFFFFFFFFLL;
  if (HIBYTE(a2) <= 2u) {
    if (v3 != 1) {
      if (v3 == 2) {
        v7 = (unsigned int*)((char*)v2 + v2[3]);
        if ((a2 & 0xFFFFFF) < *v7) {
          v8 = *(unsigned int*)((char*)v7 + (int)v7[2 * (a2 & 0xFFFFFF) + 2]);
          if (HIBYTE(v8) == 1) {
            v5 = v8 & 0xFFFFFF;
            v6 = (unsigned int*)((char*)v2 + v2[1]);
            if (v5 < *v6) {
              return *(unsigned int*)((char*)v6 + (int)v6[2 * v5 + 2]);
            }
          }
        }
      }
      return result;
    }
    v5 = a2 & 0xFFFFFF;
    v6 = (unsigned int*)((char*)v2 + v2[1]);
    if ((a2 & 0xFFFFFF) >= *v6) {
      return result;
    }
    return *(unsigned int*)((char*)v6 + (int)v6[2 * v5 + 2]);
  }
  switch (v3) {
  case 3u:
    v5 = a2 & 0xFFFFFF;
    v6 = (unsigned int*)((char*)v2 + v2[5]);
    if ((a2 & 0xFFFFFF) >= *v6) {
      return result;
    }
    return *(unsigned int*)((char*)v6 + (int)v6[2 * v5 + 2]);
  case 5u:
    v5 = a2 & 0xFFFFFF;
    v6 = (unsigned int*)((char*)v2 + v2[7]);
    if ((a2 & 0xFFFFFF) >= *v6) {
      return result;
    }
    return *(unsigned int*)((char*)v6 + (int)v6[2 * v5 + 2]);
  case 6u:
    v5 = a2 & 0xFFFFFF;
    v6 = (unsigned int*)((char*)v2 + v2[9]);
    if ((a2 & 0xFFFFFF) < *v6) {
      return *(unsigned int*)((char*)v6 + (int)v6[2 * v5 + 2]);
    }
    break;
  default:
    break;
  }
  return result;
}

__int64 GameHr_2837a0(__int64* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;

  v6 = *a1;
  if (*a1 != 0) {
    v8 = *(int*)(v6 + 8);
    if ((_DWORD)v8 != 0) {
      v9 = 5 * v8;
      v10 = *(_QWORD**)v6;
      v11 = 16 * v9 - 80;
      if ((~(v11 / 0x50) & 7) != 0) {
        v13 = ((unsigned __int8)(v11 / 0x50) + 1) & 7;
        v12 = *(_QWORD**)v6;
        do {
          *v12 = 1065353216;
          v12[7] = 0;
          v12[8] = 0;
          --v13;
          v12[9] = 0;
          v12 += 10;
        } while (v13 != 0);
      }
      else {
        v12 = *(_QWORD**)v6;
      }
      if (v11 >= 0x230) {
        v14 = &v10[2 * v9];
        do {
          *v12 = 1065353216;
          v12[7] = 0;
          v12[8] = 0;
          v12[9] = 0;
          v12[10] = 1065353216;
          v12[17] = 0;
          v12[18] = 0;
          v12[19] = 0;
          v12[20] = 1065353216;
          v12[27] = 0;
          v12[28] = 0;
          v12[29] = 0;
          v12[30] = 1065353216;
          v12[37] = 0;
          v12[38] = 0;
          v12[39] = 0;
          v12[40] = 1065353216;
          v12[47] = 0;
          v12[48] = 0;
          v12[49] = 0;
          v12[50] = 1065353216;
          v12[57] = 0;
          v12[58] = 0;
          v12[59] = 0;
          v12[60] = 1065353216;
          v12[69] = 0;
          v12[68] = 0;
          v12[67] = 0;
          v12[70] = 1065353216;
          v12[79] = 0;
          v12[78] = 0;
          v12[77] = 0;
          v12 += 80;
        } while (v12 != v14);
      }
    }
  }
  v15 = a1[3];
  if (v15 != 0) {
    v16 = *(int*)(v15 + 8);
    if ((_DWORD)v16 != 0) {
      GameRoutine_1a0ba50(*(_QWORD*)v15, 0, 4 * v16, a4, a5, a6);
    }
  }
  if (a1[4] != 0) {
    GameRoutine_283ea0();
  }
  result = a1[5];
  if (result != 0) {
    if (*(int*)(result + 8) >= 1) {
      v18 = 0;
      do {
        *(_BYTE*)(*(_QWORD*)result + v18++) = 0;
      } while (v18 < *(int*)(result + 8));
    }
    *(_BYTE*)(result + 16) = 0;
    *(_DWORD*)(result + 20) = 1065353216;
  }
  return result;
}

__int64 GameHr_2852c0(__int64 a1)
{
  int v2;

  if (*(_QWORD*)(a1 + 56) != 0 &&
      (v2 = GameRoutine_284990(*(_QWORD*)(a1 + 64))) != -1) {
    return *(_QWORD*)(a1 + 56) + *(int*)(*(_QWORD*)(a1 + 56) + 4LL) +
           *(int*)(*(_QWORD*)(a1 + 56) + *(int*)(*(_QWORD*)(a1 + 56) + 4LL) +
                   12LL * v2 + 8);
  }
  else {
    return 0;
  }
}

__int64 GameHr_285e70(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 result;

  result = GameRoutine_2845c0(*(_QWORD*)(a1 + 64));
  if (result != 0) {
    v3 = *(_DWORD*)(result + 20);
    v1 = result + 20;
    v2 = v3;
    if (v3 < 0) {
      return *(
          unsigned int*)(v1 +
                         4LL *
                             ((v2 & 1) + ((v2 & 2) != 0) + ((v2 & 4) != 0) +
                              ((v2 & 8) != 0) + ((v2 & 0x10) != 0) +
                              ((v2 & 0x20) != 0) + ((v2 & 0x40) != 0) +
                              ((v2 & 0x80) != 0) + ((v2 & 0x100) != 0) +
                              ((v2 & 0x200) != 0) + ((v2 & 0x400) != 0) +
                              ((v2 & 0x800) != 0) + ((v2 & 0x1000) != 0) +
                              ((v2 & 0x2000) != 0) + ((v2 & 0x4000) != 0) +
                              ((v2 & 0x8000) != 0) + ((v2 & 0x10000) != 0) +
                              ((v2 & 0x20000) != 0) + ((v2 & 0x40000) != 0) +
                              ((v2 & 0x80000) != 0) + ((v2 & 0x100000) != 0) +
                              ((v2 & 0x200000) != 0) + ((v2 & 0x400000) != 0) +
                              ((v2 & 0x800000) != 0) + ((v2 & 0x1000000) != 0) +
                              ((v2 & 0x2000000) != 0) +
                              ((v2 & 0x4000000) != 0) +
                              ((v2 & 0x8000000) != 0) +
                              ((v2 & 0x10000000) != 0) +
                              ((v2 & 0x20000000) != 0) +
                              (unsigned int)((v2 & 0x40000000) != 0) + 1));
    }
    else {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}

__int64 GameHr_285ea0(__int64 a1, _DWORD* a2, __int64 a3, int a4)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  bool v14;
  int v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  unsigned int v23;
  __int64 result;

  result = GameRoutine_2845c0(*(_QWORD*)(a1 + 64));
  if (result != 0) {
    v6 = *(_DWORD*)(result + 20);
    v4 = result + 20;
    v5 = v6;
    v7 = GameData_1a82db0[a4];
    if ((unsigned int)(v7 + 1) > 1) {
      v8 = v7 + 1;
    }
    else {
      v8 = 1;
    }
    v9 = v8 & 3;
    if ((unsigned int)(v7 + 1) >= 4) {
      v13 = v8 & 0xFFFFFFFC;
      v10 = 0;
      v11 = 0;
      v12 = 0;
      do {
        v15 = v10 - v7;
        v14 = v10 == v7;
        v16 = v5 >> v10;
        v10 += 4;
        v17 = v14;
        v18 = v17 | v12;
        if ((v16 & 1) != 0) {
          v12 = v18;
          ++v11;
        }
        if ((v16 & 2) != 0) {
          v12 |= v15 == -1;
          ++v11;
        }
        if ((v16 & 4) != 0) {
          v12 |= v15 == -2;
          ++v11;
        }
        v19 = (v15 == -3) | v12;
        if ((v16 & 8) != 0) {
          v12 = v19;
          ++v11;
        }
      } while (v13 != v10);
    }
    else {
      v10 = 0;
      v11 = 0;
      v12 = 0;
    }
    for (; v9 != 0; --v9) {
      v20 = v5 >> v10;
      v14 = v7 == v10++;
      v21 = v14;
      v22 = v21 | v12;
      if ((v20 & 1) != 0) {
        v12 = v22;
        ++v11;
      }
    }
    if ((v12 & 1) != 0) {
      v23 = v11;
    }
    else {
      v23 = 0;
    }
    if (v23 != 0) {
      *a2 = *(_DWORD*)(v4 + 4LL * v23);
    }
    return v23 != 0;
  }
  return result;
}

__int64 GameHr_2922e0(_QWORD* a1)
{
  __int64 i;
  unsigned __int64 v3;
  __int64 v4;
  __int64* j;
  __int64* v6;
  __int64 v7;
  __int64 v8;

  a1[17] = 0;
  for (i = GameRoutine_2923e0(); (_QWORD*)a1[16] != a1 + 15;
       i = GameRoutine_1a09bc0(5000000))
    ;
  v3 = a1[12] / 0x4B0uLL;
  if ((int)v3 >= 1) {
    v4 = a1[11];
    do {
      i = GameRoutine_290a80(v4);
      v4 += 1200;
      LODWORD(v3) = v3 - 1;
    } while ((_DWORD)v3 != 0);
  }
  for (j = (__int64*)a1[14]; j != a1 + 13; j = (__int64*)a1[14]) {
    v6 = (__int64*)j[1];
    v7 = *v6;
    *(_QWORD*)(*j + 8) = v6;
    *v6 = *j;
    *(_QWORD*)(v7 + 8) = j;
    *j = v7;
  }
  v8 = GameRoutine_2a1b90(i);
  GameRoutine_2a1f40(v8, a1 + 8);
  return GameRoutine_2a4d20(a1 + 20);
}

__int64 GameHr_2a0650(__int64 a1)
{
  __int64 result;

  *(_BYTE*)a1 = 0;
  *(_BYTE*)(a1 + 104) = 0;
  *(_BYTE*)(a1 + 192) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  result = a1 + 232;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_BYTE*)(result + 32) = 1;
  return result;
}

__int64 GameHr_2a1970(__int64 a1, __int64 a2, int a3)
{
  return a2 + 8 * (a3 + 1 + (__int64)a3);
}

float GameHr_2a69d0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float result;
  __int64 v9;

  v9 = *(_QWORD*)(a1 + 304);
  if (v9 == 0) {
    return result;
  }
  v2 = *(_QWORD*)(v9 + 40);
  if (v2 == 0) {
    return result;
  }
  LODWORD(v3) = *(_DWORD*)(a2 + 8);
  v4 = *(_DWORD*)(v2 + 8);
  if ((int)v3 >= v4) {
    LODWORD(v3) = *(_DWORD*)(v2 + 8);
  }
  if ((int)v3 >= 1) {
    v5 = v3 & 7;
    if ((unsigned int)v3 >= 8) {
      v7 = 7;
      do {
        *(_BYTE*)(*(_QWORD*)v2 + v7 - 7) = *(_BYTE*)(*(_QWORD*)a2 + v7 - 7);
        *(_BYTE*)(*(_QWORD*)v2 + v7 - 6) = *(_BYTE*)(*(_QWORD*)a2 + v7 - 6);
        *(_BYTE*)(*(_QWORD*)v2 + v7 - 5) = *(_BYTE*)(*(_QWORD*)a2 + v7 - 5);
        *(_BYTE*)(*(_QWORD*)v2 + v7 - 4) = *(_BYTE*)(*(_QWORD*)a2 + v7 - 4);
        *(_BYTE*)(*(_QWORD*)v2 + v7 - 3) = *(_BYTE*)(*(_QWORD*)a2 + v7 - 3);
        *(_BYTE*)(*(_QWORD*)v2 + v7 - 2) = *(_BYTE*)(*(_QWORD*)a2 + v7 - 2);
        *(_BYTE*)(*(_QWORD*)v2 + v7 - 1) = *(_BYTE*)(*(_QWORD*)a2 + v7 - 1);
        *(_BYTE*)(*(_QWORD*)v2 + v7) = *(_BYTE*)(*(_QWORD*)a2 + v7);
        v7 += 8;
      } while (v7 - (v3 & 0x7FFFFFF8) != 7);
      v6 = v7 - 7;
      if ((v3 & 7) == 0) {
        goto LABEL_13;
      }
    }
    else {
      v6 = 0;
      if ((v3 & 7) == 0) {
      LABEL_13:
        v4 = *(_DWORD*)(v2 + 8);
        goto LABEL_14;
      }
    }
    do {
      --v5;
      *(_BYTE*)(*(_QWORD*)v2 + v6) = *(_BYTE*)(*(_QWORD*)a2 + v6);
      ++v6;
    } while (v5 != 0);
    goto LABEL_13;
  }
LABEL_14:
  if ((int)v3 < v4) {
    v3 = (int)v3;
    do {
      *(_BYTE*)(*(_QWORD*)v2 + v3++) = 0;
    } while (v3 < *(int*)(v2 + 8));
  }
  *(_BYTE*)(v2 + 16) = *(_BYTE*)(a2 + 16);
  result = *(float*)(a2 + 20);
  *(float*)(v2 + 20) = result;
  return result;
}

__int64 GameHr_2a9de0(__int64 a1)
{
  __int64 v2;

  if (*(int*)(a1 + 196) < 1) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 88);
  if (v2 != 0) {
    return *(_QWORD*)(v2 + 104);
  }
  else {
    return 0;
  }
}

__int64 GameHr_2abe00(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    return *(unsigned __int8*)(result + 48);
  }
  return result;
}

__int64 GameHr_2abfa0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;

  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    *(_QWORD*)(a2 + 56) = 0;
    *(_DWORD*)(a2 + 52) = 1;
    v2 = *(_QWORD*)(result + 120);
    if (v2 != 0) {
      *(_QWORD*)(v2 + 56) = a2;
    }
    else {
      *(_QWORD*)(result + 112) = a2;
    }
    *(_QWORD*)(result + 120) = a2;
  }
  return result;
}

__int64 GameHr_2abff0(__int64 a1, int a2, __int64* a3)
{
  _QWORD* v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;

  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    v3 = *(_QWORD**)(result + 80);
    v4 = a3[5];
    v5 = v3[3] + 104LL * a2;
    v6 = v3[2];
    v7 = (_QWORD*)(v3[1] + v5 - v6);
    if (v5 < v6) {
      v7 = (_QWORD*)v5;
    }
    v8 = a3[6];
    v9 = a3[7];
    v7[5] = a3[4];
    v7[6] = v4;
    v7[7] = v8;
    v7[8] = v9;
    v10 = a3[11];
    v12 = a3[8];
    v11 = a3[9];
    v7[11] = a3[10];
    v7[12] = v10;
    v7[9] = v12;
    v7[10] = v11;
    v13 = *a3;
    v14 = a3[1];
    v15 = a3[3];
    v7[3] = a3[2];
    v7[4] = v15;
    v7[1] = v13;
    v7[2] = v14;
  }
  return result;
}

__int64 GameHr_2b4d20(__int64 a1, __int64 a2)
{
  GameRoutine_1a0cc20(a2, a1 + 72);
  *(_BYTE*)(a1 + 96) = 0;
  *(_BYTE*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  return a1;
}

__int64 GameHr_2b6da0(__int64 a1, __int64 a2, __int64 a3)
{
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
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (*(_BYTE*)(a1 + 248) == 1) {
    v4 = GameRoutine_14e360(a1, a2, a3);
    v5 = GameRoutine_28b300(v4, a1);
    *(_BYTE*)(a1 + 248) = 0;
    v8 = GameRoutine_14e360(v5, v6, v7);
    v9 = GameRoutine_1a09b70(v8 + 1720);
    v12 = GameRoutine_14e360(v9, v10, v11);
    v13 = GameRoutine_1a0cc50(v12 + 24, a1 + 88);
    v16 = GameRoutine_14e360(v13, v14, v15);
    GameRoutine_1a09b80(v16 + 1720);
  }
  v17 = *(_QWORD*)(a1 + 104);
  if (v17 != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)v17 + 24LL))(v17, 0xFFFFFFFFLL);
  }
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_BYTE*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  return a1;
}

_UNKNOWN** GameHr_2b8f70(_UNKNOWN** result, __int64 a2, unsigned int a3)
{
  _QWORD* v3;
  void* v4;
  _UNKNOWN** v5;
  __int64 HardwareOpusDecoderWorkBufferSizeEiii;
  __int64 v8;

  if ((GameData_21a3508 & 1) == 0) {
    v5 = result;
    HardwareOpusDecoderWorkBufferSizeEiii = GameRoutine_1a0c1a0(48000, 2, 0);
    if ((GameData_21a3508 & 1) == 0) {
      v8 = *(_QWORD*)GameData_2135528[0] +
           HardwareOpusDecoderWorkBufferSizeEiii + 0x2000;
      GameRoutine_2a4b00(&GameData_21a34b8, v5, 168LL * (int)a3, 168);
      GameData_21a3500 = v8;
      GameRoutine_2b9620(&GameData_21a34d0, &v5[21 * (int)a3], v8 * (int)a3, v8,
                         a3, 4);
      GameData_21a350c = 0x200000001LL;
      GameData_21a3508 = 1;
    }
    v3 = GameData_21a3490;
    v4 = GameData_2140be8;
    GameData_2140be8 = GameData_21a3490;
    GameData_21a3490 = v4;
    v3[1] = &GameData_2140be8;
    *((_QWORD*)v4 + 1) = &GameData_21a3490;
    return &GameData_21a3490;
  }
  return result;
}

__int64 GameHr_2bc200(__int64 result, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if (*(_BYTE*)(result + 152) == 1) {
    v4 = result;
    GameRoutine_55b740(*(_QWORD*)(result + 80));
    v8 = *(unsigned int*)(v4 + 140);
    if ((_DWORD)v8 != 0) {
      v9 = *(_QWORD*)(v4 + 96);
      v10 = 0;
      v11 = (~(a2 << 32) + a2) ^ ((unsigned __int64)(~(a2 << 32) + a2) >> 22);
      v12 = 9 * ((v11 + ~(v11 << 13)) ^ ((v11 + ~(v11 << 13)) >> 8));
      v13 = (v12 ^ (v12 >> 15)) + ~((v12 ^ (v12 >> 15)) << 27);
      v14 = (v13 >> 31) ^ v13;
      do {
        v15 = (_QWORD*)(v9 + 16 * v10);
        v16 = v15[1];
        if ((*(_BYTE*)(v16 + 56) & (unsigned __int8)a4) != 0) {
          if (*(_BYTE*)(v16 + 57) == 1) {
            if (*(_DWORD*)(v16 + 52) == 0) {
              goto LABEL_5;
            }
            v17 = *(unsigned int*)(*(_QWORD*)(v16 + 24) +
                                   4LL * ((*(_DWORD*)(v16 + 36) - 1) & v14));
            if ((_DWORD)v17 == -1) {
              goto LABEL_5;
            }
            v19 = *(_QWORD*)(v16 + 8);
            v18 = *(_QWORD*)(v16 + 16);
            while (*(_QWORD*)(v19 + 8 * v17) != a2) {
              v17 = *(unsigned int*)(v18 + 4 * v17);
              if ((_DWORD)v17 == -1) {
                goto LABEL_5;
              }
            }
          }
          (**(void (***)(_QWORD, __int64, __int64, _QWORD))*v15)(*v15, a2, a3,
                                                                 a4);
        }
      LABEL_5:
        ++v10;
      } while (v10 != v8);
    }
    return GameRoutine_55b750(*(_QWORD*)(v4 + 80));
  }
  return result;
}

__int64 GameHr_2d2aa0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  _BYTE v11[4];
  _QWORD v12[3];

  v4 = a1 + 24;
  result = *(_QWORD*)(a1 + 24);
  if (result != 0 && (*(_BYTE*)(result + 1002) & 1) == 0 && *(_QWORD*)v4 != 0) {
    v12[1] = v1;
    v12[2] = v2;
    v5 = result;
    v6 = *(_DWORD*)(v4 + 8) >> 27;
    switch (v6) {
    case 2:
      v9 = v4;
      v10 = GameRoutine_2d2a10(v4 - 24, v12, v11);
      break;
    case 3:
      v9 = v4;
      v10 = GameRoutine_2fa7e0(v4 - 24, v12, v11);
      break;
    case 4:
      v7 = v4;
      v8 = GameRoutine_2d52e0(v4 - 24, v12);
      return GameRoutine_38ca60(v5 + 1120, v7 + 56, v12[0], v8, 48, 0);
    default:
      return result;
    }
    return GameRoutine_38cd20(v5 + 1120, v9 + 56, v12[0], v10, 48, 0, v11[0]);
  }
  return result;
}

__int64 GameHr_2d5320(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  _BYTE v11[4];
  _QWORD v12[5];

  v4 = a1 + 24;
  result = *(_QWORD*)(a1 + 24);
  if (result != 0 && (*(_BYTE*)(result + 1002) & 1) == 0 && *(_QWORD*)v4 != 0) {
    v12[1] = v1;
    v12[2] = v2;
    v5 = result;
    v6 = *(_DWORD*)(v4 + 8) >> 27;
    switch (v6) {
    case 2:
      v9 = v4;
      v10 = GameRoutine_2d2a10(v4 - 24, v12, v11);
      break;
    case 3:
      v9 = v4;
      v10 = GameRoutine_2fa7e0(v4 - 24, v12, v11);
      break;
    case 4:
      v7 = v4;
      v8 = GameRoutine_2d52e0(v4 - 24, v12);
      return GameRoutine_38ca60(v5 + 1120, v7 + 56, v12[0], v8, 48, 0);
    default:
      return result;
    }
    return GameRoutine_38cd20(v5 + 1120, v9 + 56, v12[0], v10, 48, 0, v11[0]);
  }
  return result;
}

__int64* GameHr_2de840(__int64 a1)
{
  int v2;
  __int64* result;
  __int64 v4;
  bool v5;
  char v6;
  __int64 v7;
  _QWORD** v8;
  __int64 vars10;
  __int64 _18;

  v2 = GameRoutine_55bfb0(*(unsigned int*)(a1 + 1020));
  result = (__int64*)GameRoutine_55bfc0(
      *(unsigned int*)(a1 + 1020),
      (v2 + 0x10000) & 0xFF0000 | (unsigned __int64)(v2 & 0xFF00FFFF));
  if ((*(_QWORD*)&v2 & 0xFF0000LL) == 0) {
    v4 = *(_QWORD*)(a1 + 1024);
    v5 = v4 == GameRoutine_55bbf0(result);
    result = (__int64*)(a1 + 1032);
    v6 = !v5;
    v7 = *result;
    if ((v6 & 1) != 0) {
      vars10 = _18;
      v8 = (_QWORD**)(a1 + 1032);
      GameRoutine_1a09b70(*(_QWORD*)v7);
      atomic_fetch_add((atomic_uint* volatile)(*v8 + 1), 1u);
      return (__int64*)GameRoutine_1a09b80(**v8);
    }
    else {
      atomic_fetch_add((atomic_uint* volatile)(v7 + 8), 1u);
    }
  }
  return result;
}

_QWORD* GameHr_2ea7e0(__int64 a1, int a2, unsigned int a3)
{
  _QWORD* result;

  result = (_QWORD*)(a1 + 8);
  switch (a2) {
  case -1:
    result = (_QWORD*)result[13];
    if (result == nullptr) {
      return result;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*result + 112LL))(result,
                                                                        a3);
  case 1:
    result = (_QWORD*)result[7];
    if (result == nullptr) {
      return result;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*result + 112LL))(result,
                                                                        a3);
  case 0:
    result = (_QWORD*)result[1];
    if (result != nullptr) {
      return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD))(*result + 112LL))(
          result, a3);
    }
    break;
  default:
    break;
  }
  return result;
}

__int64 GameHr_2eb0e0(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  unsigned __int16 v4;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 vars0;
  __int64 _28;

  *(_QWORD*)a1 = (char*)GameData_2135698 + 16;
  v2 = *(_DWORD*)(a1 + 104) - 5;
  if (v2 <= 4 && ((0x1Du >> v2) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + GameData_1b12ff8[v2]);
    if (v3 != 0 && (unsigned int)GameRoutine_55b6c0(v3 + 12) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    }
  }
  v4 = GameRoutine_3db310(a1 + 48);
  if ((*(_BYTE*)(a1 + 97) & 0x18) == 0 && v4 != 0) {
    v7 = 0;
    v8 = GameData_21355d8[0];
    v9 = 2LL * v4;
    do {
      v10 = *v8;
      v11 = *(_QWORD*)(*(_QWORD*)(v10 + 56) +
                       8LL * *(unsigned __int16*)(GameRoutine_3db340(a1 + 48) +
                                                  v7));
      if ((unsigned int)GameRoutine_55b6c0(v11 + 12) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
      }
      v7 += 2;
    } while (v9 != v7);
  }
  result = a1 + 48;
  if ((*(_BYTE*)(a1 + 97) & 1) != 0) {
    v12 = *(_DWORD*)(a1 + 104) - 6;
    if (v12 <= 3) {
      vars0 = v16;
      _28 = v17;
      v13 = result + GameData_1b01568[v12];
      v14 = *(_QWORD*)v13;
      if (*(_QWORD*)v13 != 0) {
        v15 = GameRoutine_55af80(0);
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v15 + 24LL))(v15, v14);
        *(_QWORD*)v13 = 0;
      }
      *(_WORD*)(v13 + 8) = 0;
    }
  }
  return result;
}

__int64 GameHr_2f5a20(__int64 a1)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 i;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;

  *(_QWORD*)a1 = (char*)GameData_21356b8 + 16;
  if (*(_DWORD*)(a1 + 184) != 0) {
    v2 = 0;
    do {
      v3 = *(_QWORD*)(*(_QWORD*)(a1 + 176) + 8 * v2);
      if (v3 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
        v4 = *(_QWORD*)(*(_QWORD*)(a1 + 176) + 8 * v2);
        if ((*(_WORD*)(v4 + 10) & 1) != 0) {
          v5 = GameRoutine_55af80(0);
          (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, v4);
          *(_QWORD*)(*(_QWORD*)(a1 + 176) + 8 * v2) = 0;
        }
      }
      ++v2;
    } while (v2 < *(unsigned int*)(a1 + 184));
  }
  if (*(_DWORD*)(a1 + 200) != 0) {
    v6 = 0;
    do {
      v7 = *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v6);
      if (v7 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
        v8 = *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v6);
        if ((*(_WORD*)(v8 + 10) & 1) != 0) {
          v9 = GameRoutine_55af80(0);
          (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v8);
          *(_QWORD*)(*(_QWORD*)(a1 + 192) + 8 * v6) = 0;
        }
      }
      ++v6;
    } while (v6 < *(unsigned int*)(a1 + 200));
  }
  v10 = *(unsigned int*)(a1 + 216);
  if ((_DWORD)v10 != 0) {
    for (i = 0; i < v10; ++i) {
      if (*(_QWORD*)(*(_QWORD*)(a1 + 208) + 8 * i) != 0) {
        GameRoutine_2c08c0();
        v10 = *(unsigned int*)(a1 + 216);
      }
    }
  }
  GameRoutine_2beb20(*GameData_21355a8, a1);
  v12 = *(_DWORD*)(a1 + 220);
  if ((v12 & 0x80000000) == 0 && (v12 & 0x7FFFFFFF) != 0) {
    v13 = *(_QWORD*)(a1 + 208);
    if (v13 != 0) {
      v14 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 24LL))(v14, v13);
    }
  }
  v15 = *(_DWORD*)(a1 + 204);
  if ((v15 & 0x80000000) == 0 && (v15 & 0x7FFFFFFF) != 0) {
    v16 = *(_QWORD*)(a1 + 192);
    if (v16 != 0) {
      v17 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v17 + 24LL))(v17, v16);
    }
  }
  v18 = *(_DWORD*)(a1 + 188);
  if ((v18 & 0x80000000) == 0 && (v18 & 0x7FFFFFFF) != 0) {
    v19 = *(_QWORD*)(a1 + 176);
    if (v19 != 0) {
      v20 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v20 + 24LL))(v20, v19);
    }
  }
  v21 = *(_DWORD*)(a1 + 172);
  if ((v21 & 0x80000000) == 0 && (v21 & 0x7FFFFFFF) != 0) {
    v22 = *(_QWORD*)(a1 + 160);
    if (v22 != 0) {
      v23 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v23 + 24LL))(v23, v22);
    }
  }
  v24 = *(_DWORD*)(a1 + 124);
  if (v24 < 0 || (v24 & 0x7FFFFFFF) == 0) {
    return a1 + 40;
  }
  v25 = *(_QWORD*)(a1 + 112);
  if (v25 != a1 + 72) {
    if (v25 != 0) {
      v26 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v26 + 24LL))(v26, v25);
    }
    return a1 + 40;
  }
  *(_BYTE*)(a1 + 104) = 0;
  return a1 + 40;
}

_QWORD* GameHr_2f7410(_QWORD* a1)
{
  *a1 = GameData_1f83388;
  return a1 + 6;
}

_QWORD* GameHr_311070(__int64 a1)
{
  _QWORD* v1;

  v1 = **(_QWORD***)(*(_QWORD*)(a1 + 32) + 360LL);
  return (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD, _QWORD, _QWORD*))(
      **(_QWORD**)(v1[1] + 368LL) + 160LL))(
      *(_QWORD**)(v1[1] + 368LL), *(_QWORD*)(v1[1] + 368LL), *v1, v1 + 15);
}

__int64 GameHr_320c40(__int64 a1, int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  unsigned __int8 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  _QWORD* v13;
  _BYTE* v14;
  char v15;
  _QWORD* v16;
  char v17;
  _QWORD* v18;
  char v19;
  _QWORD* v20;
  char v21;
  _QWORD* v22;
  char v23;
  _QWORD* v24;
  int v25;
  char v26;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  _QWORD* v37;
  _BYTE* v38;
  int v39;
  bool v40;
  int v41;
  int v42;
  int v43;
  int v44;
  _BYTE* v45;
  _BYTE* v46;
  int v47;
  int v48;
  int v49;
  __int64 result;
  __int64 v51;
  __int64 v52;
  _BYTE* v53;
  int v54;
  int v55;
  int v56;
  int v57;
  __int64 vars0a;
  __int64 vars0;
  __int64 _28a;
  __int64 _28;

  if (*(_BYTE*)(a1 + 120) == 1) {
    if (*(unsigned __int8*)(a1 + 96) == a2) {
      *(_BYTE*)(a1 + 120) = 0;
    }
    else {
      v28 = *(_QWORD*)(a1 + 104);
      *(_QWORD*)(a1 + 32) = a1;
      *(_BYTE*)(a1 + 120) = 0;
      v29 = a2;
      v30 = a3;
      *(_QWORD*)(a1 + 56) = v28;
      GameRoutine_31fa80(a1 + 128);
      LOBYTE(a2) = v29;
      a3 = v30;
    }
  }
  v31 = *(_QWORD*)(a1 + 80);
  v32 = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 40) = a3;
  *(_BYTE*)(a1 + 96) = a2;
  *(_QWORD*)(a1 + 928) = a3;
  *(_DWORD*)(a1 + 936) = (unsigned __int8)a2;
  *(_QWORD*)(a1 + 1056) = a1;
  if (v31 != 0) {
    v33 = v31 + 2;
  }
  else {
    v33 = v32;
  }
  *(_QWORD*)(a1 + 1032) = v33;
  *(_QWORD*)(a1 + 1040) = *(_QWORD*)(a1 + 56);
  if ((unsigned __int8)a2 < 2u) {
    v35 = 0;
    if (*(_DWORD*)(a1 + 1024) == 0) {
    LABEL_45:
      result = a1;
      v52 = vars0;
      v51 = _28;
      goto LABEL_63;
    }
  }
  else {
    v34 = (unsigned __int8)a2 - 1LL;
    if ((unsigned __int8)a2 == 2) {
      v35 = 0;
      v36 = 1;
    }
    else {
      v37 = (_QWORD*)(a3 + 104);
      v35 = 0;
      v36 = 1;
      do {
        v38 = (_BYTE*)*(v37 - 5);
        v36 += 2;
        if (v38[338] != 0) {
          v39 = v35 + 1;
        }
        else {
          v39 = v35;
        }
        if (v38[339] != 0) {
          ++v39;
        }
        if (v38[340] != 0) {
          ++v39;
        }
        v40 = v38[341] == 0;
        v41 = (unsigned __int8)v38[342];
        v42 = (unsigned __int8)v38[343];
        if (!v40) {
          ++v39;
        }
        if (v41 != 0) {
          v43 = v39 + 1;
        }
        else {
          v43 = v39;
        }
        if (v42 != 0) {
          v44 = v43 + 1;
        }
        else {
          v44 = v43;
        }
        v46 = (_BYTE*)*v37;
        v37 += 10;
        v45 = v46;
        v47 = (unsigned __int8)v46[339];
        if (v46[338] != 0) {
          ++v44;
        }
        if (v47 != 0) {
          ++v44;
        }
        if (v45[340] != 0) {
          ++v44;
        }
        v40 = v45[341] == 0;
        v48 = (unsigned __int8)v45[342];
        v49 = (unsigned __int8)v45[343];
        if (!v40) {
          ++v44;
        }
        if (v48 != 0) {
          ++v44;
        }
        if (v49 != 0) {
          v35 = v44 + 1;
        }
        else {
          v35 = v44;
        }
      } while (v36 - (v34 & 0xFFFFFFFFFFFFFFFELL) != 1);
    }
    if ((v34 & 1) != 0) {
      v53 = *(_BYTE**)(a3 + 40 * v36 + 24);
      if (v53[338] != 0) {
        v54 = v35 + 1;
      }
      else {
        v54 = v35;
      }
      if (v53[339] != 0) {
        ++v54;
      }
      if (v53[340] != 0) {
        ++v54;
      }
      v40 = v53[341] == 0;
      v55 = (unsigned __int8)v53[342];
      v56 = (unsigned __int8)v53[343];
      if (!v40) {
        ++v54;
      }
      if (v55 != 0) {
        v57 = v54 + 1;
      }
      else {
        v57 = v54;
      }
      if (v56 != 0) {
        v35 = v57 + 1;
      }
      else {
        v35 = v57;
      }
      if (v35 == *(_DWORD*)(a1 + 1024)) {
        goto LABEL_45;
      }
    }
    else if (v35 == *(_DWORD*)(a1 + 1024)) {
      goto LABEL_45;
    }
  }
  GameRoutine_320250(a1 + 128, (unsigned int)(v35 + 1));
  *(_DWORD*)(a1 + 1024) = v35;
  result = a1;
  v52 = vars0;
  v51 = _28;
LABEL_63:
  v3 = *(unsigned int*)(result + 936);
  if ((unsigned int)v3 >= 2) {
    vars0a = v52;
    _28a = v51;
    v4 = 64;
    v5 = 0;
    v6 = 0;
    v7 = 8 * v3 - 8;
    do {
      v10 = *(_QWORD*)(result + 928);
      v11 = *(_QWORD*)(result + 968) + v5;
      v12 = *(_BYTE**)(v10 + v4);
      v13 = (_QWORD*)(*(_QWORD*)(result + 768) + 24LL * v6);
      *(_WORD*)(v11 + 12) = 0;
      v8 = v12[338];
      v14 = v12 + 332;
      if (v8 != 0) {
        *v13 = 1065353216;
        v13[1] = 0;
        v13[2] = 0;
        v12[344] = 0;
        v14[*(unsigned __int8*)(v11 + 12)] = 0;
        v15 = *(_BYTE*)(v11 + 12);
        if (v12[338] == 1) {
          *(_BYTE*)(v11 + 13) |= 1 << v15;
        }
        v8 = v15 + 1;
        *(_BYTE*)(v11 + 12) = v8;
      }
      if (v12[339] != 0) {
        v16 = &v13[3 * v8];
        *v16 = 0x3F80000000000000LL;
        v16[1] = 0;
        v16[2] = 0;
        v12[345] = v8;
        v14[*(unsigned __int8*)(v11 + 12)] = 1;
        v17 = *(_BYTE*)(v11 + 12);
        if (v12[339] == 1) {
          *(_BYTE*)(v11 + 13) |= 1 << v17;
        }
        v8 = v17 + 1;
        *(_BYTE*)(v11 + 12) = v8;
      }
      if (v12[340] != 0) {
        v18 = &v13[3 * v8];
        *v18 = 0;
        v18[1] = 1065353216;
        v18[2] = 0;
        v12[346] = v8;
        v14[*(unsigned __int8*)(v11 + 12)] = 2;
        v19 = *(_BYTE*)(v11 + 12);
        if (v12[340] == 1) {
          *(_BYTE*)(v11 + 13) |= 1 << v19;
        }
        v8 = v19 + 1;
        *(_BYTE*)(v11 + 12) = v8;
      }
      if (v12[341] != 0) {
        v20 = &v13[3 * v8];
        *v20 = 0;
        v20[1] = 0x3F80000000000000LL;
        v20[2] = 0;
        v12[347] = v8;
        v14[*(unsigned __int8*)(v11 + 12)] = 3;
        v21 = *(_BYTE*)(v11 + 12);
        if (v12[341] == 1) {
          *(_BYTE*)(v11 + 13) |= 1 << v21;
        }
        v8 = v21 + 1;
        *(_BYTE*)(v11 + 12) = v8;
      }
      if (v12[342] != 0) {
        v22 = &v13[3 * v8];
        *v22 = 0;
        v22[1] = 0;
        v22[2] = 1065353216;
        v12[348] = v8;
        v14[*(unsigned __int8*)(v11 + 12)] = 4;
        v23 = *(_BYTE*)(v11 + 12);
        if (v12[342] == 1) {
          *(_BYTE*)(v11 + 13) |= 1 << v23;
        }
        v8 = v23 + 1;
        *(_BYTE*)(v11 + 12) = v8;
      }
      if (v12[343] != 0) {
        v24 = &v13[3 * v8];
        *v24 = 0;
        v24[1] = 0;
        v24[2] = 0x3F80000000000000LL;
        v12[349] = v8;
        v14[*(unsigned __int8*)(v11 + 12)] = 5;
        v25 = (unsigned __int8)v12[343];
        v26 = *(_BYTE*)(v11 + 12);
        if (v25 == 1) {
          *(_BYTE*)(v11 + 13) |= 1 << v26;
        }
        v8 = v26 + 1;
        *(_BYTE*)(v11 + 12) = v26 + 1;
      }
      v9 = *(_QWORD*)(v10 + v4);
      *(_DWORD*)(v11 + 8) = v6;
      v5 += 8;
      v4 += 40;
      *(_DWORD*)(v9 + 328) = v6;
      v6 += v8;
    } while (v7 != v5);
  }
  return result;
}

void GameHr_32cc60(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
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
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  __int64 v35;
  __int64 v36;
  float* v37;
  float* v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  unsigned int* v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  float* v49;
  unsigned int v50;
  float v51;
  float v52;
  float* v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float* v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float* v73;
  float* v74;
  float v75;
  float v76;
  float v77;
  float v78;
  __int64 v79;
  __int64 v80;
  unsigned int v81;
  float* v82;
  float* v83;
  float v84;

  v2 = *(_QWORD*)(a2 + 800);
  v3 = *(_QWORD*)(a2 + 224);
  v4 = *(unsigned int*)(a2 + 808);
  v5 = *(_QWORD*)(a2 + 96);
  v6 = *(_QWORD*)(v2 + 16);
  *(_QWORD*)v3 = *(_QWORD*)(v6 + 80);
  *(_DWORD*)(v3 + 8) = *(_DWORD*)(v6 + 88);
  v7 = *(_DWORD*)(v6 + 68);
  *(_DWORD*)(v3 + 16) = *(_DWORD*)(v6 + 64);
  *(_DWORD*)(v3 + 20) = v7;
  *(_DWORD*)(v3 + 24) = *(_DWORD*)(v6 + 72);
  if ((unsigned int)v4 >= 2) {
    v8 = *(_QWORD*)(a2 + 840);
    v9 = *(_QWORD*)(a2 + 656);
    v10 = 1;
    do {
      v36 = v2 + 40 * v10;
      v37 = *(float**)(v36 + 16);
      v38 = *(float**)(v2 + 40LL * *(unsigned int*)(v36 + 32) + 16);
      v29 = v38[20];
      v28 = v38[21];
      v30 = v38[22];
      v39 = v37[6] - v38[6];
      v40 = v37[4] - v38[4];
      v41 = v37[5] - v38[5];
      v42 = (float)(v28 * v39) - (float)(v41 * v30);
      v43 = (float)(v30 * v40) - (float)(v39 * v29);
      v44 = (float)(v29 * v41) - (float)(v40 * v28);
      v32 = v38[16] + v42;
      v33 = v38[17] + v43;
      v34 = v38[18] + v44;
      if (v5 != 0) {
        v45 = (unsigned int*)(v8 + 8 * v10);
        v46 = *((unsigned __int8*)v45 + 4);
        if (*((_BYTE*)v45 + 4) != 0) {
          v47 = *v45;
          if (v46 >= 4) {
            v16 = 0.0;
            v15 = 0.0;
            v49 = (float*)(v5 + 8 + 4 * v47);
            v48 = 0;
            v14 = 0.0;
            v13 = 0.0;
            v12 = 0.0;
            v11 = 0.0;
            do {
              v50 = v47 + v48;
              v51 = *(v49 - 2);
              v52 = *(v49 - 1);
              v48 += 4;
              v53 = (float*)(v9 + 24LL * v50);
              v54 = *v53;
              v55 = v53[1];
              v56 = v53[2];
              v57 = v53[3];
              v58 = v53[4];
              v59 = v53[5];
              v60 = (float*)(v9 + 24LL * (v50 + 1));
              v61 = v11 + (float)(v51 * v54);
              v62 = v12 + (float)(v51 * v55);
              v63 = v13 + (float)(v51 * v56);
              v64 = v14 + (float)(v51 * v57);
              v65 = v15 + (float)(v51 * v58);
              v66 = *v60;
              v67 = v60[1];
              v68 = v16 + (float)(v51 * v59);
              v69 = v60[2];
              v70 = v60[3];
              v71 = v60[4];
              v72 = v60[5];
              v73 = (float*)(v9 + 24LL * (v50 + 2));
              v74 = (float*)(v9 + 24LL * (v50 + 3));
              v75 = v63 + (float)(v52 * v69);
              v76 = v64 + (float)(v52 * v70);
              v77 = *v49;
              v78 = v49[1];
              v49 += 4;
              v11 = (float)((float)(v61 + (float)(v52 * v66)) +
                            (float)(v77 * *v73)) +
                    (float)(v78 * *v74);
              v12 = (float)((float)(v62 + (float)(v52 * v67)) +
                            (float)(v77 * v73[1])) +
                    (float)(v78 * v74[1]);
              v13 =
                  (float)(v75 + (float)(v77 * v73[2])) + (float)(v78 * v74[2]);
              v14 =
                  (float)(v76 + (float)(v77 * v73[3])) + (float)(v78 * v74[3]);
              v15 = (float)((float)(v65 + (float)(v52 * v71)) +
                            (float)(v77 * v73[4])) +
                    (float)(v78 * v74[4]);
              v16 = (float)((float)(v68 + (float)(v52 * v72)) +
                            (float)(v77 * v73[5])) +
                    (float)(v78 * v74[5]);
            } while ((v46 & 0xFC) != v48);
          }
          else {
            v16 = 0.0;
            v15 = 0.0;
            v48 = 0;
            v14 = 0.0;
            v13 = 0.0;
            v12 = 0.0;
            v11 = 0.0;
          }
          v79 = v46 & 3;
          if (v79 != 0) {
            v80 = 4 * v48 + 4 * v47;
            v81 = v47 + v48;
            v82 = (float*)(v5 + v80);
            do {
              v83 = (float*)(v9 + 24LL * v81);
              v84 = *v82++;
              ++v81;
              --v79;
              v11 = v11 + (float)(v84 * *v83);
              v12 = v12 + (float)(v84 * v83[1]);
              v13 = v13 + (float)(v84 * v83[2]);
              v14 = v14 + (float)(v84 * v83[3]);
              v15 = v15 + (float)(v84 * v83[4]);
              v16 = v16 + (float)(v84 * v83[5]);
            } while (v79 != 0);
          }
        }
        else {
          v11 = 0.0;
          v12 = 0.0;
          v13 = 0.0;
          v14 = 0.0;
          v15 = 0.0;
          v16 = 0.0;
        }
        v17 = v37[2];
        v18 = v37[3];
        v19 = v37[1];
        v20 = v12 + v12;
        v21 = v13 + v13;
        v22 = v11 + v11;
        v23 = v15 + v15;
        v24 = v16 + v16;
        v25 = v14 + v14;
        v26 = (float)(v18 * v18) + -0.5;
        v27 = (float)((float)(v19 * v20) + (float)(*v37 * v22)) +
              (float)(v17 * v21);
        v28 =
            v28 + (float)((float)((float)(v18 * (float)((float)(v17 * v22) -
                                                        (float)(*v37 * v21))) +
                                  (float)(v20 * v26)) +
                          (float)(v19 * v27));
        v29 = v29 + (float)((float)((float)(v18 * (float)((float)(v19 * v21) -
                                                          (float)(v17 * v20))) +
                                    (float)(v22 * v26)) +
                            (float)(*v37 * v27));
        v30 = v30 + (float)((float)((float)(v18 * (float)((float)(*v37 * v20) -
                                                          (float)(v19 * v22))) +
                                    (float)(v21 * v26)) +
                            (float)(v17 * v27));
        v31 = (float)((float)(v19 * v23) + (float)(*v37 * v25)) +
              (float)(v17 * v24);
        v32 = v32 + (float)((float)((float)(v18 * (float)((float)(v19 * v24) -
                                                          (float)(v17 * v23))) +
                                    (float)(v25 * v26)) +
                            (float)(*v37 * v31));
        v33 =
            v33 + (float)((float)((float)(v18 * (float)((float)(v17 * v25) -
                                                        (float)(*v37 * v24))) +
                                  (float)(v23 * v26)) +
                          (float)(v19 * v31));
        v34 = v34 + (float)((float)((float)(v18 * (float)((float)(*v37 * v23) -
                                                          (float)(v19 * v25))) +
                                    (float)(v24 * v26)) +
                            (float)(v17 * v31));
      }
      v37[16] = v32;
      v37[17] = v33;
      v37[18] = v34;
      v37[20] = v29;
      v37[21] = v28;
      v37[22] = v30;
      v35 = v3 + 32 * v10++;
      *(float*)v35 = v29;
      *(float*)(v35 + 4) = v28;
      *(float*)(v35 + 8) = v30;
      *(_DWORD*)(v35 + 12) = 0;
      *(float*)(v35 + 16) = v32;
      *(float*)(v35 + 20) = v33;
      *(float*)(v35 + 24) = v34;
      *(_DWORD*)(v35 + 28) = 0;
    } while (v10 != v4);
  }
}

__int64 GameHr_392800(__int64 a1)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
      **(_QWORD**)(*(_QWORD*)(a1 + 168) + 368LL) + 440LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 168) + 368LL),
      *(_QWORD*)(*(_QWORD*)(a1 + 168) + 320LL),
      *(unsigned __int8*)(*(_QWORD*)(a1 + 168) + 4889LL));
}

__int64 GameHr_39efb0(__int64 a1)
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
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v31;

  v2 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)a1 = (char*)GameData_2135820 + 16;
  if (v2 != 0) {
    v3 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, v2);
    *(_QWORD*)(a1 + 104) = 0;
  }
  v4 = *(_QWORD*)(a1 + 112);
  if (v4 != 0) {
    v5 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, v4);
    *(_QWORD*)(a1 + 112) = 0;
  }
  v6 = *(_QWORD*)(a1 + 120);
  if (v6 != 0) {
    v7 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 24LL))(v7, v6);
    *(_QWORD*)(a1 + 120) = 0;
  }
  v8 = *(_QWORD*)(a1 + 128);
  if (v8 != 0) {
    v9 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v8);
    *(_QWORD*)(a1 + 128) = 0;
  }
  v10 = *(_QWORD*)(a1 + 136);
  if (v10 != 0) {
    v11 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 24LL))(v11, v10);
    *(_QWORD*)(a1 + 136) = 0;
  }
  v12 = *(_QWORD*)(a1 + 144);
  if (v12 != 0) {
    v13 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 24LL))(v13, v12);
    *(_QWORD*)(a1 + 144) = 0;
  }
  v14 = *(_QWORD*)(a1 + 152);
  if (v14 != 0) {
    v15 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 24LL))(v15, v14);
    *(_QWORD*)(a1 + 152) = 0;
  }
  v16 = *(_QWORD*)(a1 + 160);
  if (v16 != 0) {
    v17 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v17 + 24LL))(v17, v16);
    *(_QWORD*)(a1 + 160) = 0;
  }
  v18 = *(_QWORD*)(a1 + 168);
  if (v18 != 0) {
    v19 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 24LL))(v19, v18);
    *(_QWORD*)(a1 + 168) = 0;
  }
  v20 = *(_QWORD*)(a1 + 200);
  if (v20 != 0) {
    v21 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v21 + 24LL))(v21, v20);
    *(_QWORD*)(a1 + 200) = 0;
  }
  v22 = *(_QWORD*)(a1 + 208);
  if (v22 != 0) {
    v23 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v23 + 24LL))(v23, v22);
    *(_QWORD*)(a1 + 208) = 0;
  }
  v24 = *(_QWORD*)(a1 + 184);
  if (v24 != 0) {
    v25 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v25 + 24LL))(v25, v24);
    *(_QWORD*)(a1 + 184) = 0;
  }
  v26 = *(_QWORD*)(a1 + 192);
  if (v26 != 0) {
    v27 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v27 + 24LL))(v27, v26);
    *(_QWORD*)(a1 + 192) = 0;
  }
  v28 = *(_QWORD*)(a1 + 176);
  if (v28 != 0) {
    v29 = GameRoutine_55af80(0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v29 + 24LL))(v29, v28);
    *(_QWORD*)(a1 + 176) = 0;
  }
  GameRoutine_3a31f0(a1 + 248);
  *(_QWORD*)(a1 + 408) = 0;
  *(_DWORD*)(a1 + 420) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_DWORD*)(a1 + 492) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_DWORD*)(a1 + 564) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  v31 = (char*)GameData_2135680 + 16;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 496) = v31;
  *(_QWORD*)(a1 + 424) = v31;
  *(_QWORD*)(a1 + 352) = v31;
  return a1 + 248;
}

float GameHr_52b0c0(__int64 a1, float* a2, float result)
{
  __int64 v3;
  int v4;
  float* v5;
  int v6;
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
  int v22;
  float* v23;
  int v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  unsigned int* v30;
  float* v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  __int64 v45;
  float* v46;
  float* v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;

  v3 = *(_QWORD*)(a1 + 1256);
  if (v3 == 0) {
    goto LABEL_15;
  }
  v4 = *(_DWORD*)(v3 + 44);
  if (v4 != 0) {
    v5 = *(float**)(v3 + 48);
    if ((v4 & 1) != 0) {
      v6 = v4 - 1;
      v7 = v5[1] - a2[1];
      *v5 = *v5 - *a2;
      v5[1] = v7;
      v8 = a2[1];
      v9 = v5[3] - *a2;
      v5[2] = v5[2] - a2[2];
      v5[3] = v9;
      result = v5[4] - v8;
      v10 = v5[5] - a2[2];
      v5[4] = result;
      v5[5] = v10;
      v5 += 7;
      if (v4 == 1) {
        goto LABEL_8;
      }
    }
    else {
      v6 = *(_DWORD*)(v3 + 44);
      if (v4 == 1) {
        goto LABEL_8;
      }
    }
    do {
      v6 -= 2;
      v11 = v5[1] - a2[1];
      *v5 = *v5 - *a2;
      v5[1] = v11;
      v12 = a2[1];
      v13 = v5[3] - *a2;
      v5[2] = v5[2] - a2[2];
      v5[3] = v13;
      v14 = v5[4] - v12;
      v15 = v5[5] - a2[2];
      v16 = v5[7];
      v17 = v5[8];
      v5[4] = v14;
      v5[5] = v15;
      v18 = v17 - a2[1];
      v5[7] = v16 - *a2;
      v5[8] = v18;
      v19 = a2[1];
      v20 = v5[10] - *a2;
      v5[9] = v5[9] - a2[2];
      v5[10] = v20;
      result = v5[11] - v19;
      v21 = v5[12] - a2[2];
      v5[11] = result;
      v5[12] = v21;
      v5 += 14;
    } while (v6 != 0);
  }
LABEL_8:
  v22 = *(_DWORD*)(a1 + 1248);
  if (v22 != 0) {
    v23 = *(float**)(v3 + 104);
    if ((v22 & 1) != 0) {
      result = v23[3];
      v24 = v22 - 1;
      if (*v23 <= result) {
        v25 = v23[2];
        v26 = v23[1] - a2[1];
        *v23 = *v23 - *a2;
        v23[1] = v26;
        v27 = a2[1];
        v28 = result - *a2;
        v23[2] = v25 - a2[2];
        v23[3] = v28;
        result = v23[4] - v27;
        v29 = v23[5] - a2[2];
        v23[4] = result;
        v23[5] = v29;
      }
      v23 += 6;
      if (v22 != 1) {
        goto LABEL_16;
      }
    }
    else {
      v24 = *(_DWORD*)(a1 + 1248);
      if (v22 != 1) {
      LABEL_16:
        v31 = v23 + 6;
        do {
          v32 = *(v31 - 6);
          v33 = *(v31 - 3);
          if (v32 <= v33) {
            v35 = *(v31 - 4);
            v36 = *(v31 - 5) - a2[1];
            *(v31 - 6) = v32 - *a2;
            *(v31 - 5) = v36;
            v37 = a2[1];
            v38 = v33 - *a2;
            *(v31 - 4) = v35 - a2[2];
            *(v31 - 3) = v38;
            v39 = *(v31 - 1) - a2[2];
            *(v31 - 2) = *(v31 - 2) - v37;
            *(v31 - 1) = v39;
            v34 = *v31;
            result = v31[3];
            if (*v31 <= result) {
            LABEL_22:
              v40 = v31[2];
              v41 = v31[1] - a2[1];
              *v31 = v34 - *a2;
              v31[1] = v41;
              v42 = a2[1];
              v43 = result - *a2;
              v31[2] = v40 - a2[2];
              v31[3] = v43;
              result = v31[4] - v42;
              v44 = v31[5] - a2[2];
              v31[4] = result;
              v31[5] = v44;
            }
          }
          else {
            v34 = *v31;
            result = v31[3];
            if (*v31 <= result) {
              goto LABEL_22;
            }
          }
          v24 -= 2;
          v31 += 12;
        } while (v24 != 0);
      }
    }
  }
LABEL_15:
  v30 = (unsigned int*)(a1 + 8);
  v45 = *v30;
  if ((_DWORD)v45 != 0) {
    v46 = (float*)(v30 + 184);
    v47 = (float*)(v30 + 87);
    do {
      --v45;
      v48 = *(v47 - 4) - a2[1];
      *(v47 - 5) = *(v47 - 5) - *a2;
      *(v47 - 4) = v48;
      v49 = a2[1];
      v50 = *(v47 - 2) - *a2;
      *(v47 - 3) = *(v47 - 3) - a2[2];
      *(v47 - 2) = v50;
      v51 = *v47 - a2[2];
      *(v47 - 1) = *(v47 - 1) - v49;
      *v47 = v51;
      v47 += 6;
      v52 = *(v46 - 1) - a2[1];
      *(v46 - 2) = *(v46 - 2) - *a2;
      *(v46 - 1) = v52;
      result = *v46 - a2[2];
      *v46 = result;
      v46 += 7;
    } while (v45 != 0);
  }
  return result;
}

__int64 GameHr_556aa0(_QWORD* a1)
{
  __int64 v2;
  int v3;
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
  __int64 v14;
  __int64 v15;
  int i;
  __int64 result;

  a1[9] = GameRoutine_55bbf0(a1);
  v2 = a1[1];
  v3 = *(_DWORD*)(a1[2] + 88LL);
  while ((GameRoutine_55be90(v2) & 1) == 0) {
    if (v3 != 0) {
      v6 = GameRoutine_55c040(a1[8]);
      if (v6 == 0) {
        goto LABEL_2;
      }
    }
    else {
      GameRoutine_5566c0(a1[2]);
      v6 = GameRoutine_55c040(a1[8]);
      if (v6 == 0) {
        goto LABEL_2;
      }
    }
    v5 = *(_QWORD*)(v6 + 8);
    v7 = v6;
    if (*(_BYTE*)(v6 + 16) == 1) {
      v8 = a1[7];
      *(_QWORD*)(v7 + 8) = 0;
      GameRoutine_55c000(v8);
      if (v5 != 0) {
        goto LABEL_4;
      }
    }
    else {
      v9 = v6 - *(_QWORD*)(v6 - 8);
      v10 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v10 + 24LL))(v10, v9);
      if (v5 != 0) {
        goto LABEL_4;
      }
    }
  LABEL_2:
    v4 = GameRoutine_556c60(a1[2]);
    if (v4 != 0) {
      goto LABEL_3;
    }
    v11 = GameRoutine_55c040(a1[5]);
    if (v11 == 0) {
      goto LABEL_20;
    }
    v5 = *(_QWORD*)(v11 + 8);
    v12 = v11;
    if (*(_BYTE*)(v11 + 16) == 1) {
      v13 = a1[4];
      *(_QWORD*)(v12 + 8) = 0;
      GameRoutine_55c000(v13);
      if (v5 == 0) {
        goto LABEL_20;
      }
    LABEL_4:
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      (*(void (**)(__int64))(*(_QWORD*)v5 + 56LL))(v5);
      v2 = a1[1];
    }
    else {
      v14 = v11 - *(_QWORD*)(v11 - 8);
      v15 = GameRoutine_55af80(0);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 24LL))(v15, v14);
      if (v5 != 0) {
        goto LABEL_4;
      }
    LABEL_20:
      v4 = GameRoutine_556d80(a1[2]);
      if (v4 != 0) {
      LABEL_3:
        v5 = v4;
        goto LABEL_4;
      }
      if (v3 == 2) {
        for (i = *(_DWORD*)(a1[2] + 92LL); i != 0; --i) {
          GameRoutine_55bed0();
        }
      LABEL_28:
        v2 = a1[1];
      }
      else {
        if (v3 != 1) {
          GameRoutine_55bac0(*(_QWORD*)(a1[2] + 64LL), 0xFFFFFFFFLL);
          goto LABEL_28;
        }
        GameRoutine_55bec0();
        v2 = a1[1];
      }
    }
  }
  result = a1[1];
  *(_DWORD*)(result + 464) = 2;
  return result;
}

__int64 GameHr_569720(__int64 a1, int a2, unsigned int* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int64* v12;
  unsigned int v13;
  unsigned int v14;
  unsigned __int8* v15;
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
  float v28;
  int v29;
  __int64* v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  __int64* v37;
  float v38;
  float v39;
  int v40;
  float v41;
  float v42;
  __int64 v43;
  float v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;

  if ((unsigned int)(a2 - 16) <= 0xFFFFFFFD) {
    return GameRoutine_561000();
  }
  v7 = *((_QWORD*)a3 + 1);
  v8 = v7 - 1;
  v9 = *(unsigned __int8*)(v7 - 1);
  if (v9 == 15) {
    v10 = v7 + 5;
    if ((unsigned __int64)(v7 + 5) > *((_QWORD*)a3 + 2)) {
      return 4;
    }
  }
  else {
    if (v9 != 14) {
      return 4;
    }
    v10 = v8 + *(unsigned __int16*)(v7 + 5) + 8;
    if (v10 > *((_QWORD*)a3 + 2)) {
      return 4;
    }
  }
  if (*(_WORD*)(v7 + 1) != 0 || *(_WORD*)(v7 + 3) != 0) {
    return 0;
  }
  *((_QWORD*)a3 + 1) = v10;
  v58 = v6;
  v59 = v5;
  v60 = v3;
  v61 = v4;
  v12 = *(__int64**)a3;
  v13 = *(unsigned __int16*)(v8 + 8);
  v14 = *(unsigned __int16*)(v8 + 10);
  v15 = (unsigned __int8*)v10;
  v17 = v8;
  v18 = *(_QWORD*)(*(_QWORD*)a3 + 72LL);
  v19 = *(_QWORD*)(*(_QWORD*)a3 + 88LL);
  v20 = *(_QWORD*)(*(_QWORD*)a3 + 96LL);
  v55 = *(_QWORD*)(*(_QWORD*)a3 + 80LL);
  v21 = v12[7];
  v22 = v12[5];
  v23 = v12[6];
  v53 = v12[8];
  v24 = v12[3];
  v25 = v12[1];
  v26 = v12[2];
  v49 = v12[4];
  v27 = *v12;
  v47 = v26;
  v48 = v24;
  v50 = v22;
  v51 = v23;
  v56 = v19;
  v57 = v20;
  v53 = 0;
  v54 = v18;
  v52 = v21;
  HIDWORD(v49) = 0;
  v45 = v27;
  v46 = v25;
  LODWORD(v55) = 768;
  GameRoutine_566340(&v45);
  v28 = GameRoutine_55c200(*(_QWORD*)a3) * 0.4;
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v50 + 32LL))(v50);
  v30 = *(__int64**)a3;
  v62 = nullptr;
  v31 = v30[11];
  *((float*)&v46 + 1) = v28 / (float)v29;
  *(float*)&v47 = *((float*)&v46 + 1);
  GameRoutine_560fa0(&v62);
  v62 = GameData_2135f10 + 2;
  *(_QWORD*)(*(_QWORD*)a3 + 88LL) = &v62;
  v32 = GameRoutine_566360(*(_QWORD*)a3, v15, v13);
  *(_QWORD*)(*(_QWORD*)a3 + 88LL) = v31;
  v33 = GameRoutine_566360(&v45, v17 + 12, v14);
  GameRoutine_560fc0(&v62);
  v34 = v32 - v33;
  if ((float)(v32 - v33) > 0.0) {
    v35 = v34 / (float)(v14 + 1);
    v36 = v35 + *((float*)&v47 + 1);
    *(float*)&v53 = v35;
    *((float*)&v47 + 1) = v35 + *((float*)&v47 + 1);
    v37 = *(__int64**)a3;
    v38 = *(float*)(*(_QWORD*)a3 + 36LL);
    if (v38 == 0.0) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v36 = (float)(v34 * 0.5) + *((float*)&v47 + 1);
  *((float*)&v47 + 1) = v36;
  v37 = *(__int64**)a3;
  v38 = *(float*)(*(_QWORD*)a3 + 36LL);
  if (v38 != 0.0) {
  LABEL_15:
    v39 = v38 * *((float*)v37 + 3);
    v40 = (*(__int64 (**)(__int64))(*(_QWORD*)v37[5] + 32LL))(v37[5]);
    v37 = *(__int64**)a3;
    v36 = *((float*)&v47 + 1) + (float)((float)(v39 * (float)v40) * 0.5);
    *((float*)&v47 + 1) = v36;
  }
LABEL_16:
  if ((a3[10] & 1) == 0) {
    *((float*)&v47 + 1) = *((float*)v37 + 16) + v36;
  }
  v41 = *((float*)v37 + 4);
  v42 = v41 * (float)(*(int (**)(__int64))(*(_QWORD*)v37[5] + 200LL))(v37[5]);
  v43 = *(_QWORD*)(*(_QWORD*)a3 + 40LL);
  *(float*)&v48 = *(float*)&v48 - v42;
  if (v43 != 0) {
    v44 = *(float*)(*(_QWORD*)a3 + 12LL) *
          (float)(*(int (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v43 + 184LL))(
              v43, a3[11], *v15);
    if (v44 != 0.0) {
      *((float*)&v47 + 1) = v44 + *((float*)&v47 + 1);
    }
  }
  GameRoutine_566d50(&v45, v17 + 12, v14);
  GameRoutine_5662e0(&v45);
  return 0;
}

__int64 GameHr_57c870(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 64LL))(a2);
  if (result != 0) {
    result = GameRoutine_58f850();
    if (result != 0) {
      v4 = *(_QWORD*)(result + 8);
      if (v4 != 0 && (*(_BYTE*)(result + 552) & 4) == 0 &&
          (*(_BYTE*)(v4 + 4) & 2) != 0) {
        v5 = result;
        (*(void (**)(__int64))(*(_QWORD*)a2 + 72LL))(a2);
        v6 = *(_QWORD*)(v5 + 8);
        result = v5;
        if (v6 != 0 && (*(_BYTE*)(v5 + 552) & 4) == 0 &&
            (*(_BYTE*)(v6 + 4) & 2) != 0) {
          *(_BYTE*)(v5 + 84) = 0;
        }
      }
      v7 = *(_QWORD*)(result + 88);
      if (v7 != 0 && (*(_BYTE*)(result + 552) & 4) == 0 &&
          (*(_BYTE*)(v7 + 8) & 0x20) != 0) {
        v8 = result;
        (*(void (**)(__int64))(*(_QWORD*)a2 + 72LL))(a2);
        v9 = *(_QWORD*)(v8 + 88);
        result = v8;
        if (v9 != 0 && (*(_BYTE*)(v8 + 552) & 4) == 0 &&
            (*(_BYTE*)(v9 + 8) & 0x20) != 0) {
          *(_BYTE*)(v8 + 152) = 0;
        }
      }
      *(_BYTE*)(result + 552) = *(_BYTE*)(result + 552) & 0xEF | 0x10;
    }
  }
  return result;
}

_QWORD* GameHr_5a7e50(_QWORD* a1)
{
  *a1 = GameData_1f8ce98;
  return a1 + 8;
}

__int64 GameHr_5d3ee0(__int64 a1, __int64 (*a2)(__int64*, void*, __int64),
                      __int64 a3)
{
  return a2(&GameData_21a3cb8, &GameData_21a3b78, a3);
}

void GameHr_716e40()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int16 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 vars10;
  __int64 _18;

  if (GameData_21caab0 != 0) {
    v0 = GameRoutine_89ce60();
    GameRoutine_716f20(v0);
    v2 = GameData_21f1778;
    if (GameData_21f1778 != 0) {
      v3 = *(_QWORD*)(GameData_21f1780 + 8);
      GameRoutine_89b540(v3);
      v4 = *(_QWORD*)(v3 + 8);
      if (*(_QWORD*)(v3 + 16) != v4) {
        v5 = 0;
        v6 = 0;
        do {
          v7 = v4 + v5;
          ++v6;
          v8 = *(_QWORD*)(*(_QWORD*)(v2 + 16) + 8LL) + v5;
          v5 += 12;
          *(_DWORD*)v7 = *(_DWORD*)v8;
          v9 = *(_WORD*)(v8 + 4);
          *(_BYTE*)(v7 + 6) = *(_BYTE*)(v8 + 6);
          *(_WORD*)(v7 + 4) = v9;
          *(_BYTE*)(v7 + 7) = *(_BYTE*)(v8 + 7);
          *(_DWORD*)(v7 + 8) = *(_DWORD*)(v8 + 8);
          v4 = *(_QWORD*)(v3 + 8);
        } while (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v3 + 16) - v4) >> 2) > v6);
      }
      GameRoutine_89b900(v3);
    }
    if (GameData_21caab0 != 0) {
      vars10 = _18;
      v10 = GameData_21f17b0;
      v11 = GameData_21f1798;
      v12 = GameData_21f17b0 - 1 + GameData_21f17a8;
      v13 = v12 >> 9;
      v14 = v12 & 0x1FF;
      v15 = ((GameData_21f1798 - GameData_21f1790) << 6) - 1;
      if (GameData_21f1798 == GameData_21f1790) {
        v15 = 0;
      }
      v16 = *(_QWORD*)(*(_QWORD*)(GameData_21f1790 + 8 * v13) + 8 * v14);
      --GameData_21f17b0;
      GameData_21f1780 = v16;
      if ((unsigned __int64)(v15 - (v10 + GameData_21f17a8) + 1) >= 0x400) {
        v17 = *(_QWORD*)(GameData_21f1798 - 8);
        if (v17 != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v18 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v18, v17, v1);
          v11 = GameData_21f1798;
        }
        GameData_21f1798 = v11 - 8;
      }
      v19 = GameData_21f42b0;
      v20 = GameData_21f4298;
      v21 = GameData_21f42b0 - 1 + GameData_21f42a8;
      v22 = v21 >> 9;
      v23 = v21 & 0x1FF;
      v24 = ((GameData_21f4298 - GameData_21f4290) << 6) - 1;
      if (GameData_21f4298 == GameData_21f4290) {
        v24 = 0;
      }
      v25 = *(_QWORD*)(*(_QWORD*)(GameData_21f4290 + 8 * v22) + 8 * v23);
      --GameData_21f42b0;
      GameData_21f4280 = v25;
      if ((unsigned __int64)(v24 - (v19 + GameData_21f42a8) + 1) >= 0x400) {
        v26 = *(_QWORD*)(GameData_21f4298 - 8);
        if (v26 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v27 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v27, v26, v1);
          v20 = GameData_21f4298;
        }
        GameData_21f4298 = v20 - 8;
      }
      v28 = GameData_21f4300;
      v29 = GameData_21f42e8;
      v30 = GameData_21f4300 - 1 + GameData_21f42f8;
      v31 = v30 >> 9;
      v32 = v30 & 0x1FF;
      v33 = ((GameData_21f42e8 - GameData_21f42e0) << 6) - 1;
      if (GameData_21f42e8 == GameData_21f42e0) {
        v33 = 0;
      }
      v34 = *(_QWORD*)(*(_QWORD*)(GameData_21f42e0 + 8 * v31) + 8 * v32);
      --GameData_21f4300;
      GameData_21f42d0 = v34;
      if ((unsigned __int64)(v33 - (v28 + GameData_21f42f8) + 1) >= 0x400) {
        v35 = *(_QWORD*)(GameData_21f42e8 - 8);
        if (v35 != 0) {
          v36 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v36 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v36, v35, v1);
          v29 = GameData_21f42e8;
        }
        GameData_21f42e8 = v29 - 8;
      }
    }
  }
}

void GameHr_7172c0()
{
  __int64 v0;
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
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
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int16 v36;
  __int64 vars10;
  __int64 _18;

  if (GameData_21caab0 != 0) {
    v27 = GameRoutine_89ce60();
    GameRoutine_716f20(v27);
    v29 = GameData_21f1780;
    if (GameData_21f1780 != 0) {
      v30 = *(_QWORD*)(GameData_21f1778 + 16);
      GameRoutine_89b540(v30);
      v31 = *(_QWORD*)(v30 + 8);
      if (*(_QWORD*)(v30 + 16) != v31) {
        v32 = 0;
        v33 = 0;
        do {
          v34 = v31 + v32;
          ++v33;
          v35 = *(_QWORD*)(*(_QWORD*)(v29 + 8) + 8LL) + v32;
          v32 += 12;
          *(_DWORD*)v34 = *(_DWORD*)v35;
          v36 = *(_WORD*)(v35 + 4);
          *(_BYTE*)(v34 + 6) = *(_BYTE*)(v35 + 6);
          *(_WORD*)(v34 + 4) = v36;
          *(_BYTE*)(v34 + 7) = *(_BYTE*)(v35 + 7);
          *(_DWORD*)(v34 + 8) = *(_DWORD*)(v35 + 8);
          v31 = *(_QWORD*)(v30 + 8);
        } while (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v30 + 16) - v31) >> 2) >
                 v33);
      }
      GameRoutine_89b900(v30);
    }
    if (GameData_21caab0 != 0) {
      vars10 = _18;
      v0 = GameData_21f17b0;
      v1 = GameData_21f1798;
      v2 = GameData_21f17b0 - 1 + GameData_21f17a8;
      v3 = v2 >> 9;
      v4 = v2 & 0x1FF;
      v5 = ((GameData_21f1798 - GameData_21f1790) << 6) - 1;
      if (GameData_21f1798 == GameData_21f1790) {
        v5 = 0;
      }
      v6 = *(_QWORD*)(*(_QWORD*)(GameData_21f1790 + 8 * v3) + 8 * v4);
      --GameData_21f17b0;
      GameData_21f1780 = v6;
      if ((unsigned __int64)(v5 - (v0 + GameData_21f17a8) + 1) >= 0x400) {
        v7 = *(_QWORD*)(GameData_21f1798 - 8);
        if (v7 != 0) {
          v8 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v8 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8, v7, v28);
          v1 = GameData_21f1798;
        }
        GameData_21f1798 = v1 - 8;
      }
      v9 = GameData_21f42b0;
      v10 = GameData_21f4298;
      v11 = GameData_21f42b0 - 1 + GameData_21f42a8;
      v12 = v11 >> 9;
      v13 = v11 & 0x1FF;
      v14 = ((GameData_21f4298 - GameData_21f4290) << 6) - 1;
      if (GameData_21f4298 == GameData_21f4290) {
        v14 = 0;
      }
      v15 = *(_QWORD*)(*(_QWORD*)(GameData_21f4290 + 8 * v12) + 8 * v13);
      --GameData_21f42b0;
      GameData_21f4280 = v15;
      if ((unsigned __int64)(v14 - (v9 + GameData_21f42a8) + 1) >= 0x400) {
        v16 = *(_QWORD*)(GameData_21f4298 - 8);
        if (v16 != 0) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v17 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v17, v16, v28);
          v10 = GameData_21f4298;
        }
        GameData_21f4298 = v10 - 8;
      }
      v18 = GameData_21f4300;
      v19 = GameData_21f42e8;
      v20 = GameData_21f4300 - 1 + GameData_21f42f8;
      v21 = v20 >> 9;
      v22 = v20 & 0x1FF;
      v23 = ((GameData_21f42e8 - GameData_21f42e0) << 6) - 1;
      if (GameData_21f42e8 == GameData_21f42e0) {
        v23 = 0;
      }
      v24 = *(_QWORD*)(*(_QWORD*)(GameData_21f42e0 + 8 * v21) + 8 * v22);
      --GameData_21f4300;
      GameData_21f42d0 = v24;
      if ((unsigned __int64)(v23 - (v18 + GameData_21f42f8) + 1) >= 0x400) {
        v25 = *(_QWORD*)(GameData_21f42e8 - 8);
        if (v25 != 0) {
          v26 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v26 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v26, v25, v28);
          v19 = GameData_21f42e8;
        }
        GameData_21f42e8 = v19 - 8;
      }
    }
  }
}

__int64 GameHr_7173a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 i;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 vars0;
  __int64 _28;
  __int64 vars10;
  __int64 _38;

  if (GameData_21caab0 != 0) {
    GameRoutine_716f20(result);
    GameRoutine_89b540(*(_QWORD*)(GameData_21f1780 + 8));
    v29 = *(_QWORD*)(GameData_21f4280 + 8);
    for (i = -2400; i != 0; i += 160) {
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2400) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2408) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2416) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2424) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2432) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2440) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2448) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2456) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2464) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2472) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2480) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2488) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2496) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2504) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2512) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2520) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2528) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2536) = 0;
      *(_QWORD*)(*(_QWORD*)(v29 + 48) + i + 2544) = 0;
      v31 = *(_QWORD*)(v29 + 48) + i;
      *(_QWORD*)(v31 + 2552) = 0;
    }
    if (*(_QWORD*)(v29 + 32) != 0) {
      v32 = *(_QWORD**)(v29 + 24);
      if (v32 != nullptr) {
        v33 = GameData_212bf68;
        do {
          v34 = (_QWORD*)*v32;
          if (*(_QWORD*)(*(_QWORD*)v33 + 200LL) != 0) {
            v35 = 128;
          }
          else {
            v35 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v33 + v35, v32, v28);
          v32 = v34;
        } while (v34 != nullptr);
      }
      v36 = *(_QWORD*)(v29 + 16);
      *(_QWORD*)(v29 + 24) = 0;
      if (v36 != 0) {
        v37 = v36 & 7;
        if (v36 >= 8) {
          v39 = v36 & 0xFFFFFFFFFFFFFFF8LL;
          v38 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(v29 + 8) + 8 * v38) = 0;
            *(_QWORD*)(*(_QWORD*)(v29 + 8) + 8 * v38 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(v29 + 8) + 8 * v38 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(v29 + 8) + 8 * v38 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(v29 + 8) + 8 * v38 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(v29 + 8) + 8 * v38 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(v29 + 8) + 8 * v38 + 48) = 0;
            v40 = *(_QWORD*)(v29 + 8) + 8 * v38;
            v38 += 8;
            *(_QWORD*)(v40 + 56) = 0;
          } while (v39 != v38);
        }
        else {
          v38 = 0;
        }
        if (v37 != 0) {
          v41 = 8 * v38;
          do {
            --v37;
            *(_QWORD*)(*(_QWORD*)(v29 + 8) + v41) = 0;
            v41 += 8;
          } while (v37 != 0);
        }
      }
      *(_QWORD*)(v29 + 32) = 0;
    }
    *(_DWORD*)(v29 + 72) = 0;
    result = GameRoutine_93bb80(*(_QWORD*)(GameData_21f42d0 + 8));
    if (GameData_21caab0 != 0) {
      vars0 = v43;
      _28 = v44;
      vars10 = _38;
      v1 = GameData_21f17b0;
      v2 = GameData_21f1798;
      v3 = GameData_21f17b0 - 1 + GameData_21f17a8;
      v4 = v3 >> 9;
      v5 = v3 & 0x1FF;
      v6 = ((GameData_21f1798 - GameData_21f1790) << 6) - 1;
      if (GameData_21f1798 == GameData_21f1790) {
        v6 = 0;
      }
      v7 = *(_QWORD*)(*(_QWORD*)(GameData_21f1790 + 8 * v4) + 8 * v5);
      --GameData_21f17b0;
      GameData_21f1780 = v7;
      if ((unsigned __int64)(v6 - (v1 + GameData_21f17a8) + 1) >= 0x400) {
        v8 = *(_QWORD*)(GameData_21f1798 - 8);
        if (v8 != 0) {
          v9 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v9 = 56;
          }
          result =
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9, v8, v42);
          v2 = GameData_21f1798;
        }
        GameData_21f1798 = v2 - 8;
      }
      v10 = GameData_21f42b0;
      v11 = GameData_21f4298;
      v12 = GameData_21f42b0 - 1 + GameData_21f42a8;
      v13 = v12 >> 9;
      v14 = v12 & 0x1FF;
      v15 = ((GameData_21f4298 - GameData_21f4290) << 6) - 1;
      if (GameData_21f4298 == GameData_21f4290) {
        v15 = 0;
      }
      v16 = *(_QWORD*)(*(_QWORD*)(GameData_21f4290 + 8 * v13) + 8 * v14);
      --GameData_21f42b0;
      GameData_21f4280 = v16;
      if ((unsigned __int64)(v15 - (v10 + GameData_21f42a8) + 1) >= 0x400) {
        v17 = *(_QWORD*)(GameData_21f4298 - 8);
        if (v17 != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v18 = 56;
          }
          result =
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v18, v17, v42);
          v11 = GameData_21f4298;
        }
        GameData_21f4298 = v11 - 8;
      }
      v19 = GameData_21f4300;
      v20 = GameData_21f42e8;
      v21 = GameData_21f4300 - 1 + GameData_21f42f8;
      v22 = v21 >> 9;
      v23 = v21 & 0x1FF;
      v24 = ((GameData_21f42e8 - GameData_21f42e0) << 6) - 1;
      if (GameData_21f42e8 == GameData_21f42e0) {
        v24 = 0;
      }
      v25 = *(_QWORD*)(*(_QWORD*)(GameData_21f42e0 + 8 * v22) + 8 * v23);
      --GameData_21f4300;
      GameData_21f42d0 = v25;
      if ((unsigned __int64)(v24 - (v19 + GameData_21f42f8) + 1) >= 0x400) {
        v26 = *(_QWORD*)(GameData_21f42e8 - 8);
        if (v26 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v27 = 56;
          }
          result =
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v27, v26, v42);
          v20 = GameData_21f42e8;
        }
        GameData_21f42e8 = v20 - 8;
      }
    }
  }
  return result;
}

__int64 GameHr_724e30()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  char* v7;
  float v8;
  _BYTE v9[200];
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_21caab0 != 0) {
    result = *(_QWORD*)(GameData_21caab0 + 16);
  }
  else {
    result = 0;
  }
  if (result != 0) {
    v10 = v2;
    v11 = v0;
    v12 = v1;
    v4 = result;
    v5 = GameData_212d468[0];
    result = *GameData_212d468[0];
    if (*GameData_212d468[0] != 0) {
      GameRoutine_a2cab0(result, *(_QWORD*)(v4 + 88), &GameData_1a9f09e, 0.0);
      result = GameRoutine_a292c0(*v5, 1, 0);
      if (GameData_21caab0 != 0) {
        v6 = *(_QWORD*)(GameData_21caab0 + 16);
        if (v6 != 0) {
          v7 = (char*)(v6 + 138);
        LABEL_11:
          if (*v7 != 0) {
            v8 = GameRoutine_101470("SetVolume_SE_Bmap_AMBVolume") / 100.0;
            GameRoutine_10cb00(v9, "FadeTime_ENV_Combat_Cross");
            GameRoutine_100b50(&GameData_21ec57c, v9, v8);
            return GameRoutine_10cff0(v9);
          }
          return result;
        }
      }
      if (GameData_2219068 != 0) {
        v7 = &GameData_22167b8;
        if ((GameData_2216858 & 1) != 0) {
          goto LABEL_11;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_8183c0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 k;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 i;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 j;
  __int64 v29;

  v2 = *(_QWORD*)(a1 + 8);
  result = *a2;
  if (*(_BYTE*)(v2 + 95) == 1) {
    v9 = *(_QWORD*)(result + 8);
    if (*(_BYTE*)(v9 + 289) == 1 && (*(_BYTE*)(v9 + 288) & 1) != 0) {
      while ((*(_BYTE*)(v9 + 300) & 0xFD) != 1) {
        v9 = *(_QWORD*)(v9 + 736);
        if (v9 == 0) {
          if (*(_DWORD*)(result + 84) != 0) {
            *(_BYTE*)(result + 72) = 0;
            *(_DWORD*)(result + 84) = 0;
            *(_QWORD*)(result + 76) = 0;
          }
          v10 = *(_QWORD*)(result + 24);
          for (i = *(_QWORD*)(result + 32); v10 != i; v10 += 128) {
            v12 = *(__int64**)(v10 + 8);
            v13 = *v12;
            if (*v12 != 0 && *(_DWORD*)(v13 + 16) == *((_DWORD*)v12 + 2)) {
              *(_BYTE*)(v13 + 33) = 1;
              v14 = *(__int64**)(v10 + 8);
              v15 = *v14;
              if (*v14 != 0 && *(_DWORD*)(v15 + 16) == *((_DWORD*)v14 + 2)) {
                v16 = *(_DWORD*)(v15 + 36);
                if (v16 >= 1) {
                  if ((unsigned int)v16 >= 8) {
                    v18 = (_QWORD*)(v15 + 48);
                    v19 = 0;
                    do {
                      v20 = v19;
                      if (v19 < *(int*)(v15 + 36)) {
                        v21 = *(v18 - 1);
                        if (v21 != 0) {
                          *(_DWORD*)(v21 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 1 < *(int*)(v15 + 36) && *v18 != 0) {
                        *(_DWORD*)(*v18 + 220LL) = 1065353216;
                      }
                      if (v20 + 2 < *(int*)(v15 + 36)) {
                        v22 = v18[1];
                        if (v22 != 0) {
                          *(_DWORD*)(v22 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 3 < *(int*)(v15 + 36)) {
                        v23 = v18[2];
                        if (v23 != 0) {
                          *(_DWORD*)(v23 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 4 < *(int*)(v15 + 36)) {
                        v24 = v18[3];
                        if (v24 != 0) {
                          *(_DWORD*)(v24 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 5 < *(int*)(v15 + 36)) {
                        v25 = v18[4];
                        if (v25 != 0) {
                          *(_DWORD*)(v25 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 6 < *(int*)(v15 + 36)) {
                        v26 = v18[5];
                        if (v26 != 0) {
                          *(_DWORD*)(v26 + 220) = 1065353216;
                        }
                      }
                      if (v20 + 7 < *(int*)(v15 + 36)) {
                        v27 = v18[6];
                        if (v27 != 0) {
                          *(_DWORD*)(v27 + 220) = 1065353216;
                        }
                      }
                      v18 += 8;
                      v19 = v20 + 8;
                    } while (v20 + 8 != (v16 & 0x7FFFFFF8));
                    v17 = v20 + 8;
                  }
                  else {
                    v17 = 0;
                  }
                  for (j = v16 & 7; j != 0; --j) {
                    if (v17 < *(int*)(v15 + 36)) {
                      v29 = *(_QWORD*)(v15 + 40 + 8 * v17);
                      if (v29 != 0) {
                        *(_DWORD*)(v29 + 220) = 1065353216;
                      }
                    }
                    ++v17;
                  }
                }
              }
            }
            else {
              *(_BYTE*)(v10 + 36) = 1;
            }
          }
          return result;
        }
        if (*(_BYTE*)(v9 + 289) != 1 || *(_BYTE*)(v9 + 288) != 1) {
          return result;
        }
      }
    }
  }
  else {
    v4 = *(_QWORD*)(result + 8);
    if (*(_BYTE*)(v4 + 289) == 1 && (*(_BYTE*)(v4 + 288) & 1) != 0) {
      while ((*(_BYTE*)(v4 + 300) & 0xFD) != 1) {
        v4 = *(_QWORD*)(v4 + 736);
        if (v4 == 0) {
          if (*(_DWORD*)(result + 84) != 0) {
            *(_BYTE*)(result + 72) = 0;
            *(_DWORD*)(result + 84) = 0;
            *(_QWORD*)(result + 76) = 0;
          }
          v5 = *(_QWORD*)(result + 24);
          for (k = *(_QWORD*)(result + 32); v5 != k; v5 += 128) {
            v7 = *(__int64**)(v5 + 8);
            v8 = *v7;
            if (*v7 != 0 && *(_DWORD*)(v8 + 16) == *((_DWORD*)v7 + 2)) {
              *(_BYTE*)(v8 + 33) = 0;
            }
            else {
              *(_BYTE*)(v5 + 36) = 1;
            }
          }
          return result;
        }
        if (*(_BYTE*)(v4 + 289) != 1 || *(_BYTE*)(v4 + 288) != 1) {
          return result;
        }
      }
    }
  }
  return result;
}

unsigned __int64 GameHr_81c000(unsigned __int64 result, _BYTE* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  _QWORD* v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  long double v25;
  float v26;
  char v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  _QWORD** v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  _QWORD** v39;
  __int64 v40;
  _QWORD* v41;

  if (a2 != nullptr && *a2 != 0) {
    v3 = result;
    result = GameRoutine_7a86e0(a2);
    v4 = *(_QWORD*)(v3 + 312);
    v5 = result;
    if (v4 != 0 && *(_QWORD*)(v3 + 328) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = result;
        if (result >= v4) {
          v7 = result % v4;
        }
      }
      else {
        v7 = v6 & result;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(v3 + 304) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v11 = v9[1];
              if (v11 == result) {
                if (v9[2] == result) {
                  goto LABEL_58;
                }
              }
              else if ((v11 & v6) != v7) {
                goto LABEL_24;
              }
              v9 = (_QWORD*)*v9;
              if (v9 == nullptr) {
                goto LABEL_24;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == result) {
              if (v9[2] == result) {
              LABEL_58:
                v41 = (_QWORD*)result;
                v39 = &v41;
                result = GameRoutine_81f4e0(v3 + 304, &v41, &v39);
                ++*(_DWORD*)(result + 40);
                return result;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                break;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  LABEL_24:
    if (*a2 != 0) {
      result = GameRoutine_1a09c70(a2);
      if ((int)result >= 4) {
        v12 = result << 32;
        if (a2[(__int64)((result << 32) - 0x100000000LL) >> 32] == 112 &&
            a2[(__int64)(v12 - 0x200000000LL) >> 32] == 111 &&
            a2[(__int64)(v12 - 0x300000000LL) >> 32] == 111 &&
            a2[(__int64)(v12 - 0x400000000LL) >> 32] == 76) {
          v13 = *(_QWORD*)(GameData_2265ee8 + 112);
          v14 = *(_QWORD*)(v13 + 24);
          if (v14 != 0 && (v15 = *(_DWORD*)(v13 + 32)) != 0) {
            v16 = 0;
            while (1) {
              v17 = (v15 + v16) >> 1;
              v18 = (_QWORD*)(v14 + 336LL * v17);
              v19 = GameRoutine_1a09d30(*v18, a2);
              if (v19 == 0) {
                break;
              }
              if (v19 < 0) {
                v16 = v17 + 1;
              }
              else {
                v15 = (v15 + v16) >> 1;
              }
              if (v16 == v15) {
                goto LABEL_38;
              }
            }
            v20 = v18[14];
          }
          else {
          LABEL_38:
            v20 = 0;
          }
          result = GameRoutine_960f80(v20);
          v21 = (unsigned __int8)result;
          if ((result & 0xFE) == 0) {
            v21 = 1;
          }
          v22 = *(_QWORD*)(*(_QWORD*)(v3 + 264) + 80LL);
          if (v22 != 0) {
            v23 = GameData_1fb0230[v21];
            v24 = GameRoutine_1a0a060(a2, "Aura");
            v26 = GameRoutine_966340(a2, *(_QWORD*)(v3 + 8));
            v27 = GameData_21d8780;
            if (GameData_21d8780 != 0) {
              v27 = *(_BYTE*)(GameData_21d8780 + 23032) == 0;
            }
            if ((v27 & 1) == 0 && (*(_WORD*)(v3 + 20) & 0x180) == 0) {
              v28 = GameRoutine_9664e0(a2);
              if (v28 != 0) {
                *(float*)&v25 = v26;
                v29 = v24 != 0 ? 8 : 5;
                *(_DWORD*)(v22 + 68) = v29;
                *(struct PseudoSret*)(&v39) =
                    GameRoutine_108e3e0(v22, v28, v23, 1, 1, v25);
                v30 = v40;
                if (v40 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
                  GameRoutine_1a09c50(v30);
                }
              }
            }
            *(float*)&v25 = v26;
            if (v24 != 0) {
              v31 = 8;
            }
            else {
              v31 = 5;
            }
            *(_DWORD*)(v22 + 68) = v31;
            *(struct PseudoSret*)(&v39) =
                GameRoutine_108e3e0(v22, a2, v23, 1, 1, v25);
            v33 = v39;
            v32 = v40;
            if (v40 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                        memory_order_relaxed);
              v38 = v5;
              v41 = &v38;
              result = GameRoutine_81f4e0(v3 + 304, &v38, &v41);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                        memory_order_relaxed);
            }
            else {
              v38 = v5;
              v41 = &v38;
              result = GameRoutine_81f4e0(v3 + 304, &v38, &v41);
            }
            v34 = result;
            v35 = *(_QWORD*)(result + 32);
            *(_QWORD*)(result + 24) = v33;
            *(_QWORD*)(result + 32) = v32;
            v36 = v32;
            if (v35 != 0) {
              if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
                result = GameRoutine_1a09c50(v35);
              }
              v36 = *(_QWORD*)(v34 + 32);
            }
            if (v36 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
                result = GameRoutine_1a09c50(v36);
              }
            }
            *(_DWORD*)(v34 + 40) = 1;
            if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
              result = GameRoutine_1a09c50(v32);
            }
            v37 = v40;
            if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
              return GameRoutine_1a09c50(v37);
            }
          }
        }
      }
    }
  }
  return result;
}

__int64* GameHr_9b1b00(__int64* result, unsigned __int64** a2)
{
  unsigned __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  unsigned __int64* v14;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v25;
  unsigned __int64 v26;
  __int64*** v27;
  __int64** v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  char v33;

  v13 = *result;
  v14 = *a2;
  if (v14 != nullptr && GameData_21f7d00 != 0 && GameData_21f7d10 != 0) {
    v16 = *v14;
    v17 = GameData_21f7d00 - 1;
    if ((GameData_21f7d00 & (GameData_21f7d00 - 1)) != 0) {
      v18 = v16;
      if (v16 >= GameData_21f7d00) {
        v18 = v16 % GameData_21f7d00;
      }
    }
    else {
      v18 = v17 & v16;
    }
    v19 = *(_QWORD**)(GameData_21f7cf8 + 8 * v18);
    if (v19 != nullptr) {
      v20 = (_QWORD*)*v19;
      if (*v19 != 0) {
        if ((GameData_21f7d00 & v17) == 0) {
          while (1) {
            v23 = v20[1];
            if (v16 == v23) {
              if (v20[2] == v16) {
                goto LABEL_52;
              }
            }
            else if ((v23 & v17) != v18) {
              goto LABEL_27;
            }
            v20 = (_QWORD*)*v20;
            if (v20 == nullptr) {
              goto LABEL_27;
            }
          }
        }
        do {
          v22 = v20[1];
          if (v16 == v22) {
            if (v20[2] == v16) {
            LABEL_52:
              v21 = v20[3];
              if (v21 == 0) {
                return result;
              }
              goto LABEL_28;
            }
          }
          else {
            if (v22 >= GameData_21f7d00) {
              v22 %= (unsigned __int64)GameData_21f7d00;
            }
            if (v22 != v18) {
              break;
            }
          }
          v20 = (_QWORD*)*v20;
        } while (v20 != nullptr);
      }
    LABEL_27:
      v21 = GameData_21c6980;
      if (GameData_21c6980 == 0) {
        return result;
      }
    LABEL_28:
      if (GameData_21f6270 == 0 || GameData_21f6280 == 0) {
        return result;
      }
      v25 = GameData_21f6270 - 1;
      if ((GameData_21f6270 & (GameData_21f6270 - 1)) != 0) {
        v26 = v21;
        if (v21 >= GameData_21f6270) {
          v26 = v21 % GameData_21f6270;
        }
      }
      else {
        v26 = v25 & v21;
      }
      v27 = *(__int64****)(GameData_21f6268 + 8 * v26);
      if (v27 == nullptr) {
        return result;
      }
      v28 = *v27;
      if (v28 == nullptr) {
        return result;
      }
      if ((GameData_21f6270 & v25) == 0) {
        while (1) {
          v30 = v28[1];
          if ((__int64*)v21 == v30) {
            if (v28[2] == (__int64*)v21) {
              goto LABEL_54;
            }
          }
          else if (((unsigned __int64)v30 & v25) != v26) {
            return result;
          }
          v28 = (__int64**)*v28;
          if (v28 == nullptr) {
            return result;
          }
        }
      }
      while (1) {
        v29 = (unsigned __int64)v28[1];
        if (v21 == v29) {
          break;
        }
        if (v29 >= GameData_21f6270) {
          v29 %= (unsigned __int64)GameData_21f6270;
        }
        if (v29 != v26) {
          return result;
        }
      LABEL_41:
        v28 = (__int64**)*v28;
        if (v28 == nullptr) {
          return result;
        }
      }
      if (v28[2] != (__int64*)v21) {
        goto LABEL_41;
      }
    LABEL_54:
      v31 = *((unsigned int*)v28 + 6);
      if ((v31 & 0x80000000) == 0 && GameData_21f6250 != 0) {
        v32 = GameData_21f6250 + (v31 << 8);
        v33 = 1;
        if (v13 != 0) {
          v2 = *(unsigned __int8*)(v13 + 48);
          if (*(_BYTE*)(v13 + 48) != 0) {
            v3 = 1 << v2;
            v4 = v32 + 40LL * (unsigned int)(v2 >> 5);
            if (GameData_21caab0 != 0) {
              v5 = *(_QWORD*)(GameData_21caab0 + 48);
              v6 = v32;
              v7 = GameRoutine_65c580(v5, v4 + 40);
              if (v7 != 0) {
                v8 = *(_DWORD*)(v7 + 32);
              }
              else {
                v8 = 0;
              }
              if ((v8 & v3) == 0) {
                v10 = GameRoutine_65c580(v5, v4 + 40);
                if (v10 != 0) {
                  v9 = *(_DWORD*)(v10 + 32);
                }
                else {
                  v9 = 0;
                }
                goto LABEL_70;
              }
              v33 = 0;
            }
            else {
              v6 = v32;
              v9 = 0;
            LABEL_70:
              GameRoutine_716d80(v4 + 40, v9 | (unsigned int)v3);
              v11 = *(_QWORD*)(v6 + 240);
              if (v11 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
              }
              v33 = 1;
            }
          }
        }
        return (__int64*)(v33 & 1);
      }
      return result;
    }
  }
  v21 = GameData_21c6980;
  if (GameData_21c6980 == 0) {
    return result;
  }
  goto LABEL_28;
}

__int64 GameHr_a939e0(__int64 result, __int64 a2, __int64** a3)
{
  __int64* v3;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  _QWORD* v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;

  if (*(_BYTE*)(result + 40) == 1) {
    v3 = *(__int64**)(result + 16);
    *(_BYTE*)(result + 40) = 0;
    if (v3 != nullptr) {
      v5 = a2;
      do {
        result = GameRoutine_a944e0(v5, v3 + 2);
        if (result != 0) {
          v7 = *a3;
          v6 = a3[1];
          if (*a3 != v6) {
            v8 = (_QWORD*)result;
            do {
              result = v7[1];
              if (result != 0) {
                result = GameRoutine_1a0a0c0();
                if (result != 0) {
                  v9 = *v7;
                  if (*v7 != 0) {
                    v10 = v8[6];
                    if (v10 != 0 && v8[8] != 0) {
                      v11 = v10 - 1;
                      v12 = *(int*)(v9 + 132) + 100LL * *(int*)(v9 + 128);
                      if ((v10 & (v10 - 1)) != 0) {
                        v13 = *(int*)(v9 + 132) + 100LL * *(int*)(v9 + 128);
                        if (v10 <= v12) {
                          v13 = v12 % v10;
                        }
                      }
                      else {
                        v13 = v11 & v12;
                      }
                      v15 = *(__int64***)(v8[5] + 8 * v13);
                      if (v15 != nullptr) {
                        v16 = *v15;
                        if (v16 != nullptr) {
                          if ((v10 & v11) == 0) {
                            while (1) {
                              v18 = v16[1];
                              if (v18 == v12) {
                                if (*((_DWORD*)v16 + 4) == (_DWORD)v12) {
                                  goto LABEL_36;
                                }
                              }
                              else if ((v18 & v11) != v13) {
                                goto LABEL_8;
                              }
                              v16 = (__int64*)*v16;
                              if (v16 == nullptr) {
                                goto LABEL_8;
                              }
                            }
                          }
                          do {
                            v17 = v16[1];
                            if (v17 == v12) {
                              if (*((_DWORD*)v16 + 4) == (_DWORD)v12) {
                              LABEL_36:
                                v19 = *((int*)v16 + 5);
                                v20 = *((_DWORD*)v3 + 10);
                                v21 = *(_QWORD*)(v9 + 176);
                                if (v21 == *(_QWORD*)(v9 + 184) &&
                                    *(_WORD*)(*(_QWORD*)(v9 + 120) + 228LL) !=
                                        0) {
                                  v31 = result;
                                  GameRoutine_ad57c0(v9 + 176);
                                  result = v31;
                                  v21 = *(_QWORD*)(v9 + 176);
                                }
                                v5 = a2;
                                v22 = v21 + 8 * v19;
                                *(_DWORD*)v22 = v20;
                                *(_BYTE*)(v22 + 4) = 1;
                                if ((v20 & 0x80000000) == 0) {
                                  v23 = *(_QWORD*)(*(_QWORD*)(v9 + 120) + 8LL) +
                                        40LL * (int)v19;
                                  if (v20 < *(unsigned __int8*)(v23 + 24)) {
                                    v24 = result;
                                    GameRoutine_5fb950(
                                        v23, *(_QWORD*)(v9 + 200), v20);
                                    result = v24;
                                  }
                                }
                                break;
                              }
                            }
                            else {
                              if (v17 >= v10) {
                                v17 %= v10;
                              }
                              if (v17 != v13) {
                                break;
                              }
                            }
                            v16 = (__int64*)*v16;
                          } while (v16 != nullptr);
                        }
                      }
                    }
                  }
                LABEL_8:
                  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v14 = result;
                    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
                    result = GameRoutine_1a09c50(v14);
                  }
                }
              }
              v7 += 2;
            } while (v7 != v6);
          }
        }
        v3 = (__int64*)*v3;
      } while (v3 != nullptr);
    }
    v25 = *a3;
    v26 = a3[1];
    if (*a3 != v26) {
      do {
        result = v25[1];
        if (result != 0) {
          result = GameRoutine_1a0a0c0();
          if (result != 0) {
            v27 = (_QWORD*)*v25;
            v28 = result;
            if (*v25 != 0) {
              v29 = GameRoutine_5fba80(v27[15], v27[25]);
              v30 = v27[15];
              if ((v29 & 0x80000000) != 0) {
                v29 = *(_DWORD*)(v30 + 224) & ~(*(int*)(v30 + 224) >> 31);
              }
              v27[17] = *(_QWORD*)(v30 + 136) + ((unsigned __int64)v29 << 6);
              GameRoutine_5fb840();
              result = GameRoutine_5fb900(v27[17]);
              v27[18] = *(_QWORD*)(result + 8);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
              result = GameRoutine_1a09c50(v28);
            }
          }
        }
        v25 += 2;
      } while (v25 != v26);
    }
  }
  return result;
}

__int64 GameHr_c08540(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                      float a5)
{
  char v10;
  __int64 result;
  __int64 v12;
  unsigned __int8 explicit;
  int* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  unsigned __int8 v22;
  int* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 vars0;
  __int64 _10;
  __int64 vars18;
  __int64 _28;
  __int64 vars28;
  __int64 _38;

  v10 = GameRoutine_c086a0();
  result = GameRoutine_c08940(a1, a2, a3, a5);
  if ((v10 & 1) != 0 || (result & 1) != 0) {
    if ((v10 & 1) == 0 && (*(_BYTE*)(a1 + 21) & 1) != 0) {
      v12 = *(_QWORD*)(a1 + 8);
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea90,
                                      memory_order_acquire);
      v14 = GameData_212ea88;
      if ((explicit & 1) == 0) {
        v19 = result;
        v20 = GameRoutine_1a09fd0(GameData_212ea90);
        result = v19;
        if (v20 != 0) {
          *v14 = GameRoutine_540(0, "AnimCtrlModule", 14);
          GameRoutine_1a09fe0(GameData_212ea90);
          result = v19;
        }
      }
      v15 = *(_QWORD*)(v12 + 512);
      v16 = v15;
      while (v16 != *(_QWORD*)(v12 + 504)) {
        v17 = *(_DWORD*)(v16 - 16);
        v16 -= 16;
        v15 -= 16;
        if (v17 == *v14) {
          if (*(_QWORD*)(v12 + 512) != v15 && *(_QWORD*)(v15 + 8) != 0) {
            v18 = result;
            GameRoutine_a77c00(*(_QWORD*)(v15 + 8), a4);
            result = v18;
          }
          break;
        }
      }
    }
    if (((a4 != 0) | result & 1) == 0) {
      result = a1;
      if (*(_BYTE*)(a1 + 22) == 1) {
        vars28 = vars0;
        _38 = _10;
        v21 = *(_QWORD*)(a1 + 8);
        v22 = atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                                   memory_order_acquire);
        v23 = GameData_212ea98;
        if ((v22 & 1) == 0) {
          vars18 = v21;
          _28 = a1;
          v33 = GameRoutine_1a09fd0(GameData_212eaa0);
          v23 = GameData_212ea98;
          v21 = vars18;
          result = a1;
          if (v33 != 0) {
            *GameData_212ea98 = GameRoutine_540(0, "MaterialAnimModule", 18);
            GameRoutine_1a09fe0(GameData_212eaa0);
            v23 = GameData_212ea98;
            v21 = vars18;
            result = a1;
          }
        }
        v24 = *v23;
        v26 = *(_QWORD*)(v21 + 504);
        v25 = *(_QWORD*)(v21 + 512);
        v27 = v25;
        v28 = v25;
        while (v28 != v26) {
          v29 = *(_DWORD*)(v28 - 16);
          v28 -= 16;
          v27 -= 16;
          if (v29 == v24) {
            if (v25 != v27) {
              v30 = *(_QWORD*)(v27 + 8);
              if (v30 != 0) {
                v31 = *(_DWORD*)(v30 + 268);
                *(_DWORD*)(v30 + 264) = 0;
                if (v31 == 0) {
                  v32 = *(unsigned int*)(v30 + 72);
                  if ((v32 & 0x80000000) == 0) {
                    *(_DWORD*)(*(_QWORD*)(v30 + 24) + (v32 << 6) + 24) = 0;
                  }
                }
                *(_DWORD*)(v30 + 272) = 1065353216;
                if ((*(_BYTE*)(v30 + 48) & 1) != 0) {
                  **(_BYTE**)(v30 + 64) = 0;
                  *(_QWORD*)(v30 + 56) = 0;
                }
                else {
                  *(_WORD*)(v30 + 48) = 0;
                }
                *(_DWORD*)(v30 + 72) = -1;
                if ((*(_BYTE*)(v30 + 80) & 1) != 0) {
                  **(_BYTE**)(v30 + 96) = 0;
                  *(_QWORD*)(v30 + 88) = 0;
                }
                else {
                  *(_WORD*)(v30 + 80) = 0;
                }
                *(_QWORD*)(v30 + 108) = 0;
                *(_BYTE*)(v30 + 76) = 0;
                *(_DWORD*)(v30 + 104) = -1;
              }
            }
            break;
          }
        }
        if (*(_BYTE*)(result + 59) == 1) {
          *(_BYTE*)(result + 59) = 0;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_c8c9c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  _QWORD v38[2];
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44[4];

  if (GameData_21cd150 != 0) {
    v3 = (_QWORD*)(GameData_21cd150 + 8);
  }
  else {
    v3 = nullptr;
  }
  v4 = *(unsigned __int8*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 40);
  if ((v4 & 1) == 0) {
    v5 = v4 >> 1;
  }
  if (v5 == 0) {
    return 1;
  }
  v42 = v1;
  v43 = v2;
  v28 = (v4 & 1) == 0;
  v6 = v3[9];
  v7 = a1 + 33;
  v8 = v3;
  if (v28) {
    v10 = a1 + 33;
  }
  else {
    v10 = *(_QWORD*)(a1 + 48);
  }
  if (v6 != 0) {
    v11 = *(_QWORD*)(*(_QWORD*)(v3[5] + 8 * ((v6 + v3[8] - 1) / 0x33uLL)) +
                     80 * ((v6 + v3[8] - 1) % 0x33uLL) + 72);
  }
  else {
    v11 = 0;
  }
  v13 = GameRoutine_1a09c70(v10);
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v14 = GameRoutine_1195900(v8, v11, v10, v13, &v39, v44);
  v16 = v39;
  v17 = v14;
  if (v39 != 0) {
    v18 = v40;
    if (v39 == v40) {
      goto LABEL_21;
    }
    do {
      v19 = *(unsigned int*)(v18 - 8);
      v20 = v18 - 32;
      if ((_DWORD)v19 != -1) {
        ((void (*)(_QWORD*, __int64))GameData_2017480[v19])(v38, v18 - 32);
      }
      *(_DWORD*)(v18 - 8) = -1;
      v18 -= 32;
    } while (v20 != v16);
    v40 = v16;
    v16 = v39;
    if (v39 != 0) {
    LABEL_21:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v21 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v21, v16, v15);
    }
  }
  GameRoutine_1196940(v8 + 4);
  if ((v17 & 1) != 0) {
    v22 = v44[0];
    return v22 & 1;
  }
  v23 = GameData_21caab0;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 48);
  }
  else {
    v24 = v7;
  }
  v25 = GameRoutine_7a86e0(v24);
  if (v25 == 0) {
    goto LABEL_61;
  }
  v26 = *(_QWORD**)(v23 + 48);
  v27 = v26[2];
  v28 = v27 == 0 || v26[4] == 0;
  if (v28) {
    goto LABEL_61;
  }
  v29 = v27 - 1;
  if ((v27 & (v27 - 1)) != 0) {
    v30 = v25;
    if (v25 >= v27) {
      v30 = v25 % v27;
    }
  }
  else {
    v30 = v29 & v25;
  }
  v31 = *(_QWORD**)(v26[1] + 8 * v30);
  if (v31 == nullptr || (v32 = (_QWORD*)*v31) == nullptr) {
  LABEL_61:
    v22 = 0;
    return v22 & 1;
  }
  if ((v27 & v29) == 0) {
    while (1) {
      v34 = v32[1];
      if (v25 == v34) {
        if (v32[2] == v25) {
          goto LABEL_54;
        }
      }
      else if ((v34 & v29) != v30) {
        goto LABEL_61;
      }
      v32 = (_QWORD*)*v32;
      if (v32 == nullptr) {
        goto LABEL_61;
      }
    }
  }
  while (1) {
    v33 = v32[1];
    if (v25 == v33) {
      break;
    }
    if (v33 >= v27) {
      v33 %= v27;
    }
    if (v33 != v30) {
      goto LABEL_61;
    }
  LABEL_43:
    v32 = (_QWORD*)*v32;
    if (v32 == nullptr) {
      goto LABEL_61;
    }
  }
  if (v32[2] != v25) {
    goto LABEL_43;
  }
LABEL_54:
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v35 = *(_QWORD*)(a1 + 48);
  }
  else {
    v35 = v7;
  }
  v38[1] = v35;
  v38[0] = GameRoutine_7a86e0(v35);
  v36 = GameRoutine_65c580(*(_QWORD*)(v23 + 48), v38);
  if (v36 != 0) {
    v37 = *(_DWORD*)(v36 + 32);
  }
  else {
    v37 = 0;
  }
  if (v37 == (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1)) {
    goto LABEL_61;
  }
  v22 = 1;
  return v22 & 1;
}

__int64 GameHr_e66160()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64* v4;
  int v5;
  int v6;
  _BYTE v7[200];
  __int64 v8;
  __int64 v9;

  result = GameData_21ec7a8;
  if (*(_BYTE*)(GameData_21ec7a8 + 8) != 0) {
    v8 = v0;
    v9 = v1;
    v3 = GameData_21ec7a8;
    GameRoutine_10cb00(v7, "FadeTime_BGM_CmdBtl_GameOver_Out");
    v4 = GameData_212d468[0];
    GameRoutine_a2c9c0(*GameData_212d468[0], v7);
    result = GameRoutine_10cff0(v7);
    v5 = *(unsigned __int8*)(v3 + 10);
    *(_BYTE*)(v3 + 8) = 0;
    if (v5 == 1) {
      GameRoutine_10cb00(v7, "FadeTime_BGM_CmdBtl_GameOver_Out");
      v6 = *(_DWORD*)(*v4 + 628);
      if (v6 != 0) {
        *(_DWORD*)(*v4 + 628) = v6 - 1;
        GameRoutine_a2c820();
      }
      return GameRoutine_10cff0(v7);
    }
  }
  return result;
}

__int64 GameHr_1006bf0(__int64 result)
{
  int v1;
  __int64 v2;
  _BYTE* v3;
  __int64* v4;
  char v5;
  bool v6;
  bool v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  float v15;
  __int64 vars0;
  __int64 _28;

  v1 = *(_DWORD*)(result + 28);
  if (v1 == 1) {
    if ((*(_BYTE*)(result + 11) & 1) == 0) {
      if (*(_BYTE*)(result + 8) != 1 || (*(_BYTE*)(result + 9) & 1) != 0) {
        goto LABEL_23;
      }
      if ((v2 = result, v3 = (_BYTE*)*GameData_212f4e0[0],
           v4 = GameData_212dec0[0],
           v5 = GameRoutine_ec1530(*GameData_212dec0[0]), result = v2,
           (v5 & 1) != 0) ||
          v3[168] != 1 ||
          (v3[9] != 0 ? (v6 = v3[10] == 0) : (v6 = true),
           !v6 ? (v7 = v3[11] == 0) : (v7 = true), v7 || (v3[12] & 1) == 0)) {
        if ((*(_BYTE*)(*v4 + 13) & 1) != 0) {
          goto LABEL_23;
        }
        if ((GameData_2216858 & 1) == 0) {
          GameRoutine_8123d0(v2);
        }
        if ((GameData_2216820 & 8) == 0) {
        LABEL_23:
          if (*(_BYTE*)(result + 13) != 0) {
            *(_BYTE*)(result + 13) = 0;
            return GameRoutine_100b530(*(_QWORD*)GameData_212f518[0]);
          }
          return result;
        }
      }
    }
    if (*(_BYTE*)(result + 13) != 0) {
      return result;
    }
  }
  else if (v1 != 2 || (*(_BYTE*)(result + 13) & 1) != 0) {
    return result;
  }
  *(_BYTE*)(result + 13) = 1;
  result = *(_QWORD*)GameData_212f518[0];
  *(_BYTE*)(result + 8) = 1;
  if ((*(_BYTE*)(result + 9) & 1) == 0) {
    vars0 = _28;
    v8 = result;
    if ((*(_BYTE*)(result + 10) & 1) == 0) {
      result = GameRoutine_ec1530(GameData_21f4cc0);
      if ((result & 1) == 0 && *(int*)(v8 + 24) <= 0) {
        result = GameRoutine_1011550(*(_QWORD*)GameData_212f510[0], 0, 1);
        if ((result & 1) != 0) {
          v9 = *(unsigned __int8*)(v8 + 8);
          *(_BYTE*)(v8 + 9) = v9;
          v10 = GameData_21ee240;
          if (v9 == 1) {
            if (GameData_21ee240 != 0) {
              v11 = *(_DWORD*)(GameData_21ee240 + 156);
              if ((v11 & 0x10) == 0) {
                *(_DWORD*)(GameData_21ee240 + 156) = v11 & 0xFFFFFFEE;
                result = GameRoutine_8224a0(25);
                if (GameData_21caab0 != 0 &&
                    (result = GameRoutine_65c580(
                         *(_QWORD*)(GameData_21caab0 + 48), result)) != 0) {
                  v12 = *(_DWORD*)(v10 + 156);
                  if (*(_DWORD*)(result + 32) == 1) {
                    if ((v12 & 4) != 0) {
                      return result;
                    }
                    v13 = v12 | 4;
                    goto LABEL_48;
                  }
                }
                else {
                  v12 = *(_DWORD*)(v10 + 156);
                }
                if ((v12 & 4) == 0) {
                  return result;
                }
                v13 = v12 & 0xFFFFFFFB;
                goto LABEL_48;
              }
            }
          }
          else if (GameData_21ee240 != 0) {
            v14 = *(_DWORD*)(GameData_21ee240 + 156);
            if (*(_BYTE*)(GameData_21ee240 + 152) != 0) {
              v14 |= 2u;
              *(_DWORD*)(GameData_21ee240 + 156) = v14;
            }
            if ((v14 & 0x10) == 0) {
              v13 = v14 & 0xFFFFFFE2 | 1;
            LABEL_48:
              v15 = *(float*)(v10 + 224);
              *(_DWORD*)(v10 + 156) = v13;
              if (v15 > 0.0) {
                *(_DWORD*)(v10 + 224) = 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

_QWORD* GameHr_1090da0(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
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
  __int64 i;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int* v22;
  __int64 v23;
  _BYTE* v24;
  int v25;
  __int64 v26;
  int v27;
  unsigned __int8* v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  int* v36;
  int v37;
  __int64 v38;
  unsigned __int8* v39;
  int v40;
  unsigned __int8* v41;
  int v42;
  int v43;
  int v44;
  int v45;
  __int64 v47;
  unsigned __int64 v48;
  __int64** v49;
  __int64* v50;
  unsigned __int64 v51;
  __int64 v52;
  _DWORD* v53;
  _DWORD* v54;
  int v55;
  __int64 v56;
  atomic_uchar* v57;
  int* v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64* v75;
  unsigned int v76;
  int v77;
  __int64 v78;
  __int16 v79;
  _QWORD* result;
  int v81;
  __int64 v82;
  int v83;
  float v84;
  float v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD var8[5];

  *(_BYTE*)(a1 + 72) = 1;
  v2 = *(_QWORD*)(a1 + 32);
  v3 = 0x8E38E38E38E38E39LL * ((*(_QWORD*)(a1 + 40) - v2) >> 4);
  if ((_DWORD)v3 == 2) {
    *(_QWORD*)(v2 + 56) = v2 + 144;
    v2 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(v2 + 192) = v2;
  }
  else if ((int)v3 >= 3) {
    v4 = (unsigned int)(v3 - 1);
    *(_QWORD*)(v2 + 56) = v2 + 144;
    *(_QWORD*)(*(_QWORD*)(a1 + 32) + 144LL * (unsigned int)v4 + 48) =
        *(_QWORD*)(a1 + 32) + 144LL * (unsigned int)(v3 - 2);
    v5 = (v4 - 1) & 3;
    if ((unsigned __int64)(v4 - 2) >= 3) {
      v7 = 720;
      v8 = -(__int64)((v4 - 1) & 0xFFFFFFFFFFFFFFFCLL);
      v6 = 1;
      do {
        v6 += 4;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + v7 - 528) =
            *(_QWORD*)(a1 + 32) + v7 - 720;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + v7 - 520) =
            *(_QWORD*)(a1 + 32) + v7 - 432;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + v7 - 384) =
            *(_QWORD*)(a1 + 32) + v7 - 576;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + v7 - 376) =
            *(_QWORD*)(a1 + 32) + v7 - 288;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + v7 - 240) =
            *(_QWORD*)(a1 + 32) + v7 - 432;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + v7 - 232) =
            *(_QWORD*)(a1 + 32) + v7 - 144;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + v7 - 96) =
            *(_QWORD*)(a1 + 32) + v7 - 288;
        v9 = *(_QWORD*)(a1 + 32) + v7;
        v7 += 576;
        *(_QWORD*)(v9 - 88) = v9;
      } while (v8 + v6 != 1);
    }
    else {
      v6 = 1;
    }
    if (v5 != 0) {
      v10 = 144 * v6;
      do {
        --v5;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + v10 + 48) =
            *(_QWORD*)(a1 + 32) + v10 - 144;
        v11 = *(_QWORD*)(a1 + 32) + v10;
        v10 += 144;
        *(_QWORD*)(v11 + 56) = v11 + 144;
      } while (v5 != 0);
    }
    v2 = *(_QWORD*)(a1 + 32);
  }
  v12 = *(_QWORD*)(a1 + 40);
  if ((int)(954437177 * ((unsigned __int64)(v12 - v2) >> 4)) >= 1) {
    *(_QWORD*)(a1 + 64) = v2;
  }
  *(_DWORD*)(a1 + 56) = -1;
  if (v2 != v12) {
    do {
      v13 = *(_DWORD*)(v2 + 4);
      if ((v13 & 4) != 0) {
        v14 = *(_QWORD*)(v2 + 48);
        if (v14 == 0 || (*(_BYTE*)(v14 + 4) & 4) == 0) {
          v13 |= 8u;
          *(_DWORD*)(v2 + 4) = v13;
        }
        v15 = *(_QWORD*)(v2 + 56);
        if (v15 == 0 || (*(_BYTE*)(v15 + 4) & 4) == 0) {
          *(_DWORD*)(v2 + 4) = v13 | 0x10;
        }
      }
      v2 += 144;
    } while (v2 != v12);
    v16 = *(_QWORD*)(a1 + 32);
    for (i = *(_QWORD*)(a1 + 40); v16 != i; v16 += 144) {
      if ((*(_BYTE*)(v16 + 4) & 6) != 0) {
        if (*(_DWORD*)(v16 + 12) == 1) {
          v18 = 3;
        }
        else {
          v18 = 2;
        }
        *(_DWORD*)(v16 + 12) = v18;
      }
    }
  }
  if ((*(_BYTE*)(a1 + 114) & 2) != 0) {
    if (*(_QWORD*)(a1 + 240) != 0) {
      if (*(_QWORD*)(a1 + 336) != 0) {
        goto LABEL_36;
      }
    }
    else {
      GameRoutine_108f060(a1 + 216);
      if (*(_QWORD*)(a1 + 336) != 0) {
        goto LABEL_36;
      }
    }
    GameRoutine_108f060(a1 + 312);
  }
LABEL_36:
  v19 = *(_QWORD*)(a1 + 32);
  v20 = *(_QWORD*)(a1 + 40);
  if (v19 != v20) {
    while ((*(_BYTE*)(v19 + 4) & 8) == 0) {
      v19 += 144;
      if (v19 == v20) {
        goto LABEL_42;
      }
    }
    v21 = a1 + 96LL * *(int*)(v19 + 12);
    if (*(_QWORD*)(v21 + 240) == 0) {
      GameRoutine_108f2a0(v21 + 216);
    }
  }
LABEL_42:
  v22 = *(int**)(a1 + 728);
  if (v22 == nullptr) {
    goto LABEL_112;
  }
  v23 = *((_QWORD*)v22 + 1);
  v24 = *(_BYTE**)(v23 + 784);
  if (v24 != nullptr) {
    v25 = *v22;
    if ((GameRoutine_108e940(*(_QWORD*)(v23 + 784)) & 1) != 0) {
      v26 = 8;
    LABEL_46:
      *(_QWORD*)(a1 + 96LL * v25 + 216 + v26) = v24;
      goto LABEL_54;
    }
    v27 = (unsigned __int8)*v24;
    if (*v24 != 0) {
      v28 = v24 + 1;
      v29 = 0;
      v30 = *GameData_212ff98[0];
      do {
        v29 = v27 - v29 + 32 * v29;
        v31 = *v28++;
        v27 = v31;
      } while (v31 != 0);
      v33 = v30 + 8;
      v32 = *(_QWORD*)(v30 + 8);
      v34 = *(_QWORD*)(v33 + 8) - v32;
      if (v34 != 0) {
        v35 = 0x84BDA12F684BDA13LL * (v34 >> 3);
        v36 = (int*)(v32 + 24);
        v26 = 16;
        do {
          v37 = *v36;
          v36 += 54;
          if (v37 == v29) {
            goto LABEL_46;
          }
        } while (--v35 != 0);
      }
    }
  }
LABEL_54:
  v38 = *(_QWORD*)(*((_QWORD*)v22 + 1) + 816LL);
  if (v38 != 0 && *(_WORD*)(v38 + 32) != 0) {
    v39 = **(unsigned __int8***)(v38 + 40);
    if (v39 == nullptr) {
      goto LABEL_112;
    }
  }
  else {
    v39 = (unsigned __int8*)*GameData_212cf40[0];
    if (*GameData_212cf40[0] == 0) {
      goto LABEL_112;
    }
  }
  v42 = *v39;
  v41 = v39 + 1;
  v40 = v42;
  if (v42 == 0) {
    v43 = 0;
    goto LABEL_67;
  }
  v43 = 0;
  do {
    v43 = v40 - v43 + 32 * v43;
    v44 = *v41++;
    v40 = v44;
  } while (v44 != 0);
  v45 = 65798035;
  if (v43 != 65798035) {
  LABEL_67:
    v45 = v43;
    if ((*(_BYTE*)(a1 + 113) & 0x80) != 0) {
      goto LABEL_112;
    }
  }
  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    goto LABEL_112;
  }
  v47 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v48 = v45;
    if (GameData_22356f8 <= (unsigned __int64)v45) {
      v48 = v45 % (unsigned __int64)GameData_22356f8;
    }
  }
  else {
    v48 = v47 & v45;
  }
  v49 = *(__int64***)(GameData_22356f0 + 8 * v48);
  if (v49 == nullptr) {
    goto LABEL_112;
  }
  v50 = *v49;
  if (v50 == nullptr) {
    goto LABEL_112;
  }
  if ((GameData_22356f8 & v47) == 0) {
    while (1) {
      v52 = v50[1];
      if (v52 == v45) {
        if (*((_DWORD*)v50 + 4) == v45) {
          goto LABEL_92;
        }
      }
      else if ((v52 & v47) != v48) {
        goto LABEL_112;
      }
      v50 = (__int64*)*v50;
      if (v50 == nullptr) {
        goto LABEL_112;
      }
    }
  }
  while (1) {
    v51 = v50[1];
    if (v51 == v45) {
      break;
    }
    if (v51 >= GameData_22356f8) {
      v51 %= (unsigned __int64)GameData_22356f8;
    }
    if (v51 != v48) {
      goto LABEL_112;
    }
  LABEL_81:
    v50 = (__int64*)*v50;
    if (v50 == nullptr) {
      goto LABEL_112;
    }
  }
  if (*((_DWORD*)v50 + 4) != v45) {
    goto LABEL_81;
  }
LABEL_92:
  v53 = *(_DWORD**)(a1 + 32);
  v54 = *(_DWORD**)(a1 + 40);
  if (v53 == v54) {
    goto LABEL_112;
  }
  while (v53[2] != *v22) {
    v53 += 36;
    if (v53 == v54) {
      goto LABEL_112;
    }
  }
  if ((~*v53 & 0x14) != 0) {
    goto LABEL_109;
  }
  v55 = 989295323;
  if (v45 <= 603384485) {
    if ((unsigned int)(v45 - 603384300) <= 0x12 &&
        ((1 << (v45 + 20)) & 0x40007) != 0) {
      v55 = 603384318;
    }
    else if ((unsigned int)(v45 + 2068235592) >= 2) {
      if (v45 == 309207191) {
        goto LABEL_102;
      }
      goto LABEL_109;
    }
  }
  else if ((unsigned int)(v45 - 989295305) > 0x21 ||
           ((1LL << ((unsigned __int8)v45 + 55)) & 0x200040007LL) == 0) {
    if ((unsigned int)(v45 - 603384486) <= 0x12 &&
        ((1 << (v45 + 90)) & 0x40007) != 0) {
    LABEL_102:
      v53[16] = 603384504;
      goto LABEL_112;
    }
  LABEL_109:
    if ((unsigned int)(v45 + 906281409) <= 2) {
      *(_DWORD*)(a1 + 112) |= 0x100u;
    }
    v53[16] = v45;
  LABEL_112:
    if ((*(_BYTE*)(a1 + 114) & 0x10) != 0) {
      v56 = *(_QWORD*)(a1 + 240);
      v57 = (atomic_uchar*)GameData_212deb8;
      v58 = GameData_212deb0;
      if (v56 != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)GameRoutine_1a09fd0(GameData_212deb8) != 0) {
          *v58 = GameRoutine_540(0, "CharacterBuilder", 16);
          GameRoutine_1a09fe0(GameData_212deb8);
        }
        v59 = *(_QWORD*)(v56 + 512);
        v60 = v59;
        do {
          if (v60 == *(_QWORD*)(v56 + 504)) {
            goto LABEL_125;
          }
          v61 = *(_DWORD*)(v60 - 16);
          v60 -= 16;
          v59 -= 16;
        } while (v61 != *v58);
        if (*(_QWORD*)(v56 + 512) != v59) {
          v62 = *(_QWORD*)(v59 + 8);
          if (v62 != 0) {
            v63 = *(_QWORD*)(v62 + 392);
            v64 = *(_QWORD*)(v62 + 400);
            if (v64 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v64 + 8), 1u,
                                        memory_order_relaxed);
              v65 = *(_DWORD*)(v63 + 11784);
              if (atomic_fetch_add((atomic_ullong* volatile)(v64 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
                GameRoutine_1a09c50(v64);
              }
              if (v65 == 18) {
                goto LABEL_124;
              }
            }
            else if (*(_DWORD*)(v63 + 11784) == 18) {
            LABEL_124:
              *(_DWORD*)(a1 + 112) |= 0x200000u;
            }
          }
        }
      }
    LABEL_125:
      v66 = *(_QWORD*)(a1 + 336);
      if (v66 != 0) {
        if ((atomic_load_explicit(v57, memory_order_acquire) & 1) == 0 &&
            (unsigned int)GameRoutine_1a09fd0(GameData_212deb8) != 0) {
          *v58 = GameRoutine_540(0, "CharacterBuilder", 16);
          GameRoutine_1a09fe0(GameData_212deb8);
        }
        v67 = *(_QWORD*)(v66 + 512);
        v68 = v67;
        do {
          if (v68 == *(_QWORD*)(v66 + 504)) {
            goto LABEL_137;
          }
          v69 = *(_DWORD*)(v68 - 16);
          v68 -= 16;
          v67 -= 16;
        } while (v69 != *v58);
        if (*(_QWORD*)(v66 + 512) != v67) {
          v70 = *(_QWORD*)(v67 + 8);
          if (v70 != 0) {
            v71 = *(_QWORD*)(v70 + 392);
            v72 = *(_QWORD*)(v70 + 400);
            if (v72 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 8), 1u,
                                        memory_order_relaxed);
              v73 = *(_DWORD*)(v71 + 11784);
              if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
                GameRoutine_1a09c50(v72);
              }
              if (v73 == 18) {
                goto LABEL_136;
              }
            }
            else if (*(_DWORD*)(v71 + 11784) == 18) {
            LABEL_136:
              *(_DWORD*)(a1 + 112) |= 0x200000u;
            }
          }
        }
      }
    }
  LABEL_137:
    v74 = *(_QWORD*)(a1 + 40);
    if (*(_QWORD*)(a1 + 32) == v74) {
      v75 = &GameData_2235e30;
    }
    else {
      v75 = (__int64*)(v74 - 144);
    }
    if ((*(_BYTE*)v75 & 0x40) == 0) {
      goto LABEL_156;
    }
    v76 = *((_DWORD*)v75 + 3);
    if (v76 != 0) {
      if (v76 == 1) {
        v77 = 6144;
        goto LABEL_145;
      }
      goto LABEL_156;
    }
    v77 = 5120;
  LABEL_145:
    *(_DWORD*)(a1 + 116) |= v77;
    v78 = *(_QWORD*)(a1 + 96LL * v76 + 256);
    if (v78 != 0) {
      var8[0] = v78;
      v79 = GameRoutine_120f710(var8);
      if ((v79 & 1) != 0) {
        *(_DWORD*)(a1 + 116) |= 1u;
        if ((v79 & 2) != 0) {
          goto LABEL_158;
        }
      LABEL_148:
        if ((v79 & 4) == 0) {
          goto LABEL_149;
        }
      LABEL_159:
        *(_DWORD*)(a1 + 116) |= 4u;
        if ((v79 & 8) != 0) {
          goto LABEL_160;
        }
      LABEL_150:
        if ((v79 & 0x10) == 0) {
          goto LABEL_151;
        }
      LABEL_161:
        *(_DWORD*)(a1 + 116) |= 0x10u;
        if ((v79 & 0x20) != 0) {
          goto LABEL_162;
        }
      LABEL_152:
        if ((v79 & 0x40) == 0) {
          goto LABEL_153;
        }
      LABEL_163:
        *(_DWORD*)(a1 + 116) |= 0x80u;
        if ((v79 & 0x80) != 0) {
          goto LABEL_164;
        }
      LABEL_154:
        if ((v79 & 0x100) == 0) {
          goto LABEL_156;
        }
      }
      else {
        if ((v79 & 2) == 0) {
          goto LABEL_148;
        }
      LABEL_158:
        *(_DWORD*)(a1 + 116) |= 2u;
        if ((v79 & 4) != 0) {
          goto LABEL_159;
        }
      LABEL_149:
        if ((v79 & 8) == 0) {
          goto LABEL_150;
        }
      LABEL_160:
        *(_DWORD*)(a1 + 116) |= 8u;
        if ((v79 & 0x10) != 0) {
          goto LABEL_161;
        }
      LABEL_151:
        if ((v79 & 0x20) == 0) {
          goto LABEL_152;
        }
      LABEL_162:
        *(_DWORD*)(a1 + 116) |= 0x80u;
        if ((v79 & 0x40) != 0) {
          goto LABEL_163;
        }
      LABEL_153:
        if ((v79 & 0x80) == 0) {
          goto LABEL_154;
        }
      LABEL_164:
        *(_DWORD*)(a1 + 116) |= 0x100u;
        if ((v79 & 0x100) == 0) {
          goto LABEL_156;
        }
      }
      *(_DWORD*)(a1 + 116) |= 0x200u;
    }
  LABEL_156:
    result = (_QWORD*)(a1 + 120);
    v81 = *(_DWORD*)(a1 + 112);
    if ((v81 & 0x8268) == 0) {
      var8[1] = v86;
      var8[2] = v87;
      var8[3] = var8[4];
      v82 = a1 + 120;
      if ((*((_BYTE*)result + 77) & 1) == 0) {
        if ((v81 & 0x400) != 0 || (*((_BYTE*)result + 76) & 1) != 0) {
          result = (*(struct PseudoSret*)(&v88) = GameRoutine_111df40(result),
                    (void*)(&v88));
        }
        else {
          result = (*(struct PseudoSret*)(&v88) = GameRoutine_111d920(result),
                    (void*)(&v88));
        }
        v83 = HIDWORD(v88);
        v85 = *((float*)var8 + 1);
        v84 = *(float*)var8;
        if ((float)((float)((float)(*((float*)var8 + 1) - *((float*)&v88 + 1)) *
                            (float)(*((float*)var8 + 1) -
                                    *((float*)&v88 + 1))) +
                    (float)((float)(*(float*)var8 - *(float*)&v88) *
                            (float)(*(float*)var8 - *(float*)&v88))) < 1.0) {
          v85 = *((float*)var8 + 1) + *(float*)(v82 + 60);
          v84 = *(float*)var8 + *(float*)(v82 + 56);
          if ((float)((float)((float)(v85 - *((float*)&v88 + 1)) *
                              (float)(v85 - *((float*)&v88 + 1))) +
                      (float)((float)(v84 - *(float*)&v88) *
                              (float)(v84 - *(float*)&v88))) < 1.0) {
            v85 = v85 + 5.0;
          }
        }
        *(_DWORD*)(v82 + 32) = v88;
        *(_DWORD*)(v82 + 36) = v83;
        *(float*)(v82 + 40) = v84;
        *(float*)(v82 + 44) = v85;
      }
    }
    return result;
  }
  v53[16] = v55;
  goto LABEL_112;
}

__int64 GameHr_10d49d0()
{
  __int64 v0;
  int v1;
  __int64 v2;
  int v4;
  int v5;
  char v6;
  __int64 v7;

  if (GameData_21ec7b0 == 0 || (v0 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0) {
  LABEL_5:
    if ((*(_BYTE*)(GameData_2265ed8 + 807) != 1 ||
         (*(_BYTE*)(GameData_2265ed8 + 804) & 1) == 0 &&
             (*(_BYTE*)(GameData_2265ed8 + 940) != 1 ||
              (*(_BYTE*)(GameData_2265ed8 + 805) & 1) == 0 ||
              (*(_BYTE*)(GameData_2265ed8 + 806) & 1) == 0)) &&
        (*(_BYTE*)(GameData_2265ed8 + 903) != 1 ||
         (*(_BYTE*)(GameData_2265ed8 + 900) & 1) == 0 &&
             (*(_BYTE*)(GameData_2265ed8 + 940) != 1 ||
              (*(_BYTE*)(GameData_2265ed8 + 901) & 1) == 0 ||
              *(_BYTE*)(GameData_2265ed8 + 902) != 1))) {
      return (*(_BYTE*)(GameData_2265ed8 + 952) & 0x82) != 0;
    }
    if (GameData_2258178 == 0) {
      return 0;
    }
    if (*(_BYTE*)(GameData_2265ed8 + 807) != 0 &&
        ((*(_BYTE*)(GameData_2265ed8 + 804) & 1) != 0 ||
         *(_BYTE*)(GameData_2265ed8 + 940) == 1 &&
             *(_BYTE*)(GameData_2265ed8 + 805) == 1 &&
             (*(_BYTE*)(GameData_2265ed8 + 806) & 1) != 0)) {
      v2 = 448;
    }
    else {
      if (*(_BYTE*)(GameData_2265ed8 + 903) != 1 ||
          (*(_BYTE*)(GameData_2265ed8 + 900) & 1) == 0 &&
              (*(_BYTE*)(GameData_2265ed8 + 940) != 1 ||
               *(_BYTE*)(GameData_2265ed8 + 901) != 1 ||
               *(_BYTE*)(GameData_2265ed8 + 902) != 1)) {
        return 0;
      }
      v2 = 508;
    }
    v6 = *(_BYTE*)(GameData_2258178 + v2);
    return (v6 & 2) != 0;
  }
  v1 = *(_DWORD*)(v0 + 112);
  if ((v1 & 0x200) == 0) {
    if ((v1 & 0x800) == 0) {
      goto LABEL_5;
    }
    if (GameData_21ee240 != 0 &&
        (unsigned int)*(unsigned __int8*)(GameData_21ee240 + 152) - 1 <= 2) {
      v4 = *(_DWORD*)(GameData_21ee240 + 156);
      v5 = (v4 & 8) != 0 ? 2 : 3;
      if ((v5 & v4) == 0) {
        return 1;
      }
    }
    if ((v1 & 0x20) != 0 && (GameRoutine_106cdd0() & 1) == 0) {
      return 0;
    }
    if ((*(_BYTE*)(GameData_2265ed8 + 807) != 1 ||
         (*(_BYTE*)(GameData_2265ed8 + 804) & 1) == 0 &&
             (*(_BYTE*)(GameData_2265ed8 + 940) != 1 ||
              (*(_BYTE*)(GameData_2265ed8 + 805) & 1) == 0 ||
              (*(_BYTE*)(GameData_2265ed8 + 806) & 1) == 0)) &&
        (*(_BYTE*)(GameData_2265ed8 + 903) != 1 ||
         (*(_BYTE*)(GameData_2265ed8 + 900) & 1) == 0 &&
             (*(_BYTE*)(GameData_2265ed8 + 940) != 1 ||
              (*(_BYTE*)(GameData_2265ed8 + 901) & 1) == 0 ||
              *(_BYTE*)(GameData_2265ed8 + 902) != 1))) {
      v6 = *(_BYTE*)(GameData_2265ed8 + 952);
      return (v6 & 2) != 0;
    }
    if (GameData_2258178 != 0) {
      if (*(_BYTE*)(GameData_2265ed8 + 807) == 1 &&
          ((*(_BYTE*)(GameData_2265ed8 + 804) & 1) != 0 ||
           *(_BYTE*)(GameData_2265ed8 + 940) == 1 &&
               *(_BYTE*)(GameData_2265ed8 + 805) == 1 &&
               (*(_BYTE*)(GameData_2265ed8 + 806) & 1) != 0)) {
        v7 = 448;
      }
      else {
        if (*(_BYTE*)(GameData_2265ed8 + 903) != 1 ||
            (*(_BYTE*)(GameData_2265ed8 + 900) & 1) == 0 &&
                (*(_BYTE*)(GameData_2265ed8 + 940) != 1 ||
                 *(_BYTE*)(GameData_2265ed8 + 901) != 1 ||
                 *(_BYTE*)(GameData_2265ed8 + 902) != 1)) {
          return 0;
        }
        v7 = 508;
      }
      return (*(_DWORD*)(GameData_2258178 + v7) & 2) != 0;
    }
    return 0;
  }
  return 0;
}

__int64 GameHr_10d5500(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  GameRoutine_106d080(*(_QWORD*)(a1 + 160));
  result = *(_QWORD*)(a1 + 160);
  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    v22 = v24;
    v23 = v25;
    v27 = v26;
    v2 = *(_QWORD*)(v1 + 32);
    v3 = *(_QWORD*)(v1 + 40);
    v21 = 0;
    if (v2 != v3) {
      v4 = result;
      v5 = GameData_212d448[0];
      while (1) {
        if (*v5 != 0 && (v6 = *(_DWORD*)(v2 + 8)) <= 3 &&
            (v7 = *v5 + 24LL * v6, (result = *(_QWORD*)(v7 + 32)) != 0)) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                    memory_order_relaxed);
          v8 = *(_QWORD*)(v7 + 40);
          v9 = *(_QWORD*)(result + 8) == -1 || v8 == 0;
          if (v9 || (v10 = *(_QWORD*)(v8 + 80)) == 0 ||
              (*(_QWORD*)(v10 + 8) != -1 ? (v11 = *(_QWORD*)(v8 + 88) == 0)
                                         : (v11 = true),
               v11)) {
            v12 = 0;
          }
          else if (*(_QWORD*)(result + 8) == -1) {
            v12 = 0;
          }
          else {
            v12 = v8;
          }
          result = GameRoutine_1a09c50(result);
        }
        else {
          v12 = 0;
        }
        v13 = *(int*)(v12 + 96);
        if ((*((_BYTE*)&v21 + v13) & 1) == 0) {
          if ((*(_BYTE*)v2 & 0x10) == 0) {
            break;
          }
          v18 = *(_QWORD*)(*v5 + 8) + 96LL * (int)v13;
          if (*(_QWORD*)(v18 + 232) != 0) {
            result = GameRoutine_112bd00(v4 + 232);
          }
          else {
            if (*(_QWORD*)(v18 + 224) == 0) {
              break;
            }
            result = GameRoutine_112bf60(v4 + 232);
          }
        }
      LABEL_5:
        v2 += 144;
        if (v2 == v3) {
          return result;
        }
      }
      v14 = *(_QWORD*)(v12 + 88);
      v15 = *(_QWORD*)(v14 + 392);
      v16 = *(_QWORD*)(v14 + 400);
      if (v16 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                  memory_order_relaxed);
        v17 = *(_QWORD*)(v15 + 11616);
        if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          result = GameRoutine_1a09c50(v16);
        }
      }
      else {
        v17 = *(_QWORD*)(v15 + 11616);
      }
      if (v17 != 0) {
        result = GameRoutine_1069b50(v12, v17, 0);
        if ((unsigned int)result >= 2) {
          result = GameRoutine_112bd00(v4 + 232);
        }
      }
      *((_BYTE*)&v21 + *(int*)(v12 + 96)) = 1;
      goto LABEL_5;
    }
  }
  return result;
}

__int64 GameHr_117fa70(int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  int v39;
  __int64 vars10;
  __int64 _38;

  if (a1 < 0) {
    v7 = 0;
  }
  else {
    LOBYTE(v39) = a1;
    v5 = a3;
    v6 = a2;
    v7 = GameRoutine_6ea8c0(&v39);
    a2 = v6;
    a3 = v5;
    v4 = vars10;
    v3 = _38;
  }
  if (v7 == 0) {
    return 0xFFFFFFFFLL;
  }
  if (*(_QWORD*)(v7 + 392) == 0) {
    return 0xFFFFFFFFLL;
  }
  v8 = *(_QWORD*)(v7 + 440);
  if (v8 == 0) {
    return 0xFFFFFFFFLL;
  }
  vars10 = v4;
  _38 = v3;
  if (*(unsigned __int8*)(v8 + 16) > 3u) {
    return 0xFFFFFFFFLL;
  }
  v9 = (_QWORD*)GameData_21ca2f0;
  if (GameData_21ca2f0 == 0) {
    return 0xFFFFFFFFLL;
  }
  v10 = *(_QWORD*)(GameData_21ca2f0 + 10752);
  v11 = *(_QWORD*)(GameData_21ca2f0 + 10744);
  v12 = a2;
  v13 = a3;
  v14 = ((v10 - v11) << 6) - 1;
  if (v10 == v11) {
    v14 = 0;
  }
  v15 = *(_QWORD*)(GameData_21ca2f0 + 10776) +
        *(_QWORD*)(GameData_21ca2f0 + 10768);
  if (v14 == v15) {
    v16 = v7;
    GameRoutine_74cd60(GameData_21ca2f0 + 10736);
    v11 = v9[1343];
    v7 = v16;
    v15 = v9[1347] + v9[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v11 + 8 * (v15 >> 9)) + 8 * (v15 & 0x1FF)) = v9[1];
  v9[1] = v9 + 337;
  ++v9[1347];
  v17 = (unsigned int)*(char*)(v7 + 584);
  v18 = (unsigned int)*(char*)(v7 + 585);
  v39 = 3145730;
  GameRoutine_748f80(v9, v7, v17, v18, 100, &v39);
  v20 = v9[1];
  v21 = v12 + 32 * v13;
  v22 = v12;
  if (v21 >= 0x400) {
    v23 = 0;
  }
  else {
    v23 = v21;
  }
  if (*(unsigned __int8*)(v20 + v23 + 64) == 255 ||
      (unsigned int)GameRoutine_747df0(v20, v22, v13,
                                       *(unsigned __int8*)(v20 + 5)) == 255) {
    result = 0xFFFFFFFFLL;
  }
  else {
    result = *(unsigned __int8*)(v9[1] + v23 + 64);
  }
  v25 = v9[1347];
  v26 = v9[1346];
  v27 = v9[1343];
  v28 = v9[1344];
  v29 = v28 == v27;
  v30 = v25 - 1 + v26;
  v31 = v30 >> 9;
  v32 = v30 & 0x1FF;
  v33 = ((v28 - v27) << 6) - 1;
  v34 = *(_QWORD*)(v27 + 8 * v31);
  if (v29) {
    v33 = 0;
  }
  v35 = *(_QWORD*)(v34 + 8 * v32);
  v9[1347] = v25 - 1;
  v9[1] = v35;
  if ((unsigned __int64)(v33 - (v25 + v26) + 1) >= 0x400) {
    v36 = *(_QWORD*)(v28 - 8);
    if (v36 != 0) {
      v37 = result;
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v38 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v38, v36, v19);
      v28 = v9[1344];
      result = v37;
    }
    v9[1344] = v28 - 8;
  }
  return result;
}

__int64 GameHr_117fac0(__int64 a1, unsigned int a2, unsigned int a3)
{
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 result;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  bool v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;

  v5 = (_BYTE*)GameRoutine_25eed0(a1);
  if (*v5 != 0 && (GameRoutine_682bc0(&v45, v5), v45 != 0)) {
    v6 = *(_QWORD*)(GameData_21ca310 + 56);
    if (v6 != 0) {
      v7 = 250;
      while (1) {
        v8 = *(_QWORD*)(v6 + 440);
        if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && *(_QWORD*)(v6 + 392) == v45) {
          goto LABEL_23;
        }
        v9 = *(_QWORD*)(v6 + 2664);
        if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 &&
            *(_QWORD*)(v6 + 2616) == v45) {
          v6 += 2224;
          goto LABEL_23;
        }
        v10 = *(_QWORD*)(v6 + 4888);
        if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 &&
            *(_QWORD*)(v6 + 4840) == v45) {
          break;
        }
        v11 = *(_QWORD*)(v6 + 7112);
        if (v11 != 0 && *(_BYTE*)(v11 + 16) != 9 &&
            *(_QWORD*)(v6 + 7064) == v45) {
          v13 = 6672;
          goto LABEL_27;
        }
        v12 = *(_QWORD*)(v6 + 9336);
        if (v12 != 0 && *(_BYTE*)(v12 + 16) != 9 &&
            *(_QWORD*)(v6 + 9288) == v45) {
          v13 = 8896;
        LABEL_27:
          v6 += v13;
          goto LABEL_23;
        }
        v6 += 11120;
        v7 -= 5;
        if (v7 == 0) {
          goto LABEL_22;
        }
      }
      v13 = 4448;
      goto LABEL_27;
    }
  }
  else {
  LABEL_22:
    v6 = 0;
  }
LABEL_23:
  v14 = a3;
  if (v6 == 0) {
    return 0xFFFFFFFFLL;
  }
  if (*(_QWORD*)(v6 + 392) == 0) {
    return 0xFFFFFFFFLL;
  }
  v15 = *(_QWORD*)(v6 + 440);
  if (v15 == 0) {
    return 0xFFFFFFFFLL;
  }
  if (*(unsigned __int8*)(v15 + 16) > 3u) {
    return 0xFFFFFFFFLL;
  }
  v16 = (_QWORD*)GameData_21ca2f0;
  if (GameData_21ca2f0 == 0) {
    return 0xFFFFFFFFLL;
  }
  v17 = *(_QWORD*)(GameData_21ca2f0 + 10752);
  v18 = *(_QWORD*)(GameData_21ca2f0 + 10744);
  v19 = v14;
  v20 = ((v17 - v18) << 6) - 1;
  if (v17 == v18) {
    v20 = 0;
  }
  v21 = *(_QWORD*)(GameData_21ca2f0 + 10776) +
        *(_QWORD*)(GameData_21ca2f0 + 10768);
  if (v20 == v21) {
    v22 = v6;
    GameRoutine_74cd60(GameData_21ca2f0 + 10736);
    v18 = v16[1343];
    v6 = v22;
    v21 = v16[1347] + v16[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v18 + 8 * (v21 >> 9)) + 8 * (v21 & 0x1FF)) = v16[1];
  v16[1] = v16 + 337;
  ++v16[1347];
  v23 = (unsigned int)*(char*)(v6 + 584);
  v24 = (unsigned int)*(char*)(v6 + 585);
  HIDWORD(v45) = 3145730;
  GameRoutine_748f80(v16, v6, v23, v24, 100, (char*)&v45 + 4);
  v26 = v16[1];
  v27 = a2 + 32 * v19;
  v28 = a2;
  if (v27 >= 0x400) {
    v29 = 0;
  }
  else {
    v29 = v27;
  }
  if (*(unsigned __int8*)(v26 + v29 + 64) == 255 ||
      (unsigned int)GameRoutine_747df0(v26, v28, v19,
                                       *(unsigned __int8*)(v26 + 5)) == 255) {
    result = 0xFFFFFFFFLL;
  }
  else {
    result = *(unsigned __int8*)(v16[1] + v29 + 64);
  }
  v31 = v16[1347];
  v32 = v16[1346];
  v33 = v16[1343];
  v34 = v16[1344];
  v35 = v34 == v33;
  v36 = v31 - 1 + v32;
  v37 = v36 >> 9;
  v38 = v36 & 0x1FF;
  v39 = ((v34 - v33) << 6) - 1;
  v40 = *(_QWORD*)(v33 + 8 * v37);
  if (v35) {
    v39 = 0;
  }
  v41 = *(_QWORD*)(v40 + 8 * v38);
  v16[1347] = v31 - 1;
  v16[1] = v41;
  if ((unsigned __int64)(v39 - (v31 + v32) + 1) >= 0x400) {
    v42 = *(_QWORD*)(v34 - 8);
    if (v42 != 0) {
      v43 = result;
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v44 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v44, v42, v25);
      v34 = v16[1344];
      result = v43;
    }
    v16[1344] = v34 - 8;
  }
  return result;
}

__int64 GameHr_1241ea0(__int64 a1, unsigned __int64* a2)
{
  __int64 result;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;

  v4 = *(char**)(a1 + 8);
  v3 = *(char**)(a1 + 16);
  result = a1 + 8;
  v5 = *a2;
  if (v4 == v3) {
    goto LABEL_17;
  }
  v6 = v3 - v4 - 8;
  if ((~(_BYTE)v6 & 0x18) != 0) {
    v7 = ((unsigned __int8)((unsigned int)v6 >> 3) + 1) & 3;
    while (*(_QWORD*)v4 != v5) {
      v4 += 8;
      if (--v7 == 0) {
        goto LABEL_6;
      }
    }
  LABEL_17:
    if (v4 != v3) {
      return result;
    }
    goto LABEL_20;
  }
LABEL_6:
  if (v6 >= 0x18) {
    v4 += 16;
    while (1) {
      if (*((_QWORD*)v4 - 2) == v5) {
        if (v4 - 16 != v3) {
          return result;
        }
        goto LABEL_20;
      }
      if (*((_QWORD*)v4 - 1) == v5) {
        v4 -= 8;
        goto LABEL_17;
      }
      if (*(_QWORD*)v4 == v5) {
        goto LABEL_17;
      }
      if (*((_QWORD*)v4 + 1) == v5) {
        break;
      }
      v8 = v4 + 16;
      v4 += 32;
      if (v8 == v3) {
        goto LABEL_20;
      }
    }
    if (v4 + 8 != v3) {
      return result;
    }
  }
LABEL_20:
  v9 = *(_QWORD*)(GameData_2240170 + 16);
  if (v9 != 0 && *(_QWORD*)(GameData_2240170 + 32) != 0) {
    v11 = v9 - 1;
    if ((v9 & (v9 - 1)) != 0) {
      v12 = *a2;
      if (v5 >= v9) {
        v12 = v5 % v9;
      }
    }
    else {
      v12 = v11 & v5;
    }
    v13 = *(_QWORD**)(*(_QWORD*)(GameData_2240170 + 8) + 8 * v12);
    if (v13 != nullptr) {
      v14 = (_QWORD*)*v13;
      if (v14 != nullptr) {
        if ((v9 & v11) == 0) {
          while (1) {
            v16 = v14[1];
            if (v5 == v16) {
              if (v14[2] == v5) {
                return result;
              }
            }
            else if ((v16 & v11) != v12) {
              return GameRoutine_7f3400(result);
            }
            v14 = (_QWORD*)*v14;
            if (v14 == nullptr) {
              return GameRoutine_7f3400(result);
            }
          }
        }
        do {
          v15 = v14[1];
          if (v5 == v15) {
            if (v14[2] == v5) {
              return result;
            }
          }
          else {
            if (v15 >= v9) {
              v15 %= v9;
            }
            if (v15 != v12) {
              return GameRoutine_7f3400(result);
            }
          }
          v14 = (_QWORD*)*v14;
        } while (v14 != nullptr);
      }
    }
  }
  return GameRoutine_7f3400(result);
}

__int16* GameHr_133baf0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int16* v5;
  __int16* result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int16* v18;
  __int64* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _BYTE v24[12];
  _QWORD* v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 vars0;
  __int64 vars8;

  v2 = *a2;
  v4 = GameData_212cf60;
  if (GameData_21ee260 != 0) {
    v5 = (__int16*)(GameData_21ee260 + 8);
  }
  else {
    v5 = (__int16*)GameData_212cf60;
  }
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  result = *(__int16**)(v2 + 280);
  if (((__int64)v5[1] << 24) + ((__int64)*v5 << 32) + ((__int64)v5[2] << 18) +
          ((__int64)v5[3] << 12) + ((__int64)v5[4] << 6) + v5[5] >=
      (unsigned __int64)(((__int64)result[5] << 24) +
                         ((__int64)result[4] << 32) +
                         ((__int64)result[6] << 18) +
                         ((__int64)result[7] << 12) +
                         ((__int64)result[8] << 6) + result[9])) {
    if ((*(unsigned __int8 (**)(__int16*))(*(_QWORD*)result + 24LL))(result) ==
        1) {
      (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
          *(_QWORD*)(v2 + 280));
    }
    v7 = *(_QWORD*)(v2 + 280);
    v8 = *(_QWORD*)(v7 + 8);
    *(_DWORD*)&v24[8] = *(_DWORD*)(v7 + 16);
    *(_QWORD*)v24 = v8;
    v9 = GameData_21ee260 != 0 ? GameData_21ee260 + 8 : v4;
    result = (__int16*)GameRoutine_70df40(v24, v9);
    if ((int)result < 360) {
      v10 = vars8;
      v11 = v25;
      v12 = v26;
      ++**(_DWORD**)(a1 + 16);
      result = *(__int16**)(a1 + 8);
      if (v2 != 0) {
        v27 = v11;
        v28 = v12;
        vars0 = v10;
        v13 = *(_QWORD*)(GameData_21c96e8 + 8);
        v14 = *(_QWORD**)(v13 + 8);
        v15 = *(_QWORD**)(v13 + 16);
        while (v14 != v15) {
          v16 = (_QWORD*)*v14;
          if (*(_QWORD*)*v14 == v2 && v16[12] == 0) {
            v17 = v16[69];
            if (v17 != 0 && v16[13] == 0 &&
                *((__int16*)v16 + 321) * *((__int16*)v16 + 320) *
                        *((__int16*)v16 + 322) ==
                    0 &&
                *(_QWORD*)(v17 + 352) != 0) {
              v18 = result;
              v19 = (__int64*)GameData_212bf68;
              v20 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8,
                                                16, 0);
              *(_QWORD*)&v24[4] = v20;
              *v20 = v16;
              v25 = v20 + 1;
              v26 = v20 + 1;
              result = (__int16*)GameRoutine_14b4b70(v18, 3, &v24[4]);
              if (*(_QWORD*)&v24[4] != 0) {
                v22 = *v19;
                v25 = *(_QWORD**)&v24[4];
                v23 = 128;
                if (*(_QWORD*)(v22 + 200) == 0) {
                  v23 = 56;
                }
                return (__int16*)GameRoutine_1a0a4e0(v22 + v23,
                                                     *(_QWORD*)&v24[4], v21);
              }
              return result;
            }
          }
          ++v14;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_14cc590(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];

  v15 = *a2;
  v2 = *(_QWORD*)(*a2 + 96);
  if (v2 == 0) {
    return 0;
  }
  v16[2] = v13;
  v16[3] = v14;
  if (*(_BYTE*)(v2 + 32) != 1) {
    return 0;
  }
  v3 = *(_QWORD*)(v15 + 24);
  v4 = v15;
  if (*(_QWORD*)(v15 + 32) == v3 || (*(_WORD*)(v15 + 544) & 3) == 2 ||
      (*(_BYTE*)(v15 + 546) & 0xEF) != 0) {
    return 0;
  }
  v6 = 0;
  while (1) {
    v7 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * v6) + 120LL);
    v8 = GameRoutine_ae0560();
    if (v7 == v8) {
      break;
    }
    v3 = *(_QWORD*)(v4 + 24);
    ++v6;
    v9 = *(_QWORD*)(v4 + 32) - v3;
    if (v6 >= v9 >> 3) {
      return (v7 == v8) & (unsigned __int8)v9;
    }
  }
  v10 = v8;
  v16[1] = &GameData_1a964b8;
  v16[0] = GameRoutine_7a86e0(&GameData_1a964b8);
  v11 = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    v12 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v16);
    if (v12 != 0) {
      v11 = *(_DWORD*)(v12 + 32);
    }
    else {
      v11 = 0;
    }
  }
  v8 = v10;
  LOBYTE(v9) = v11 > (int)v6;
  return (v7 == v8) & (unsigned __int8)v9;
}

__int64 GameHr_161e2f0()
{
  __int64 v0;
  int v1;
  __int64 v2;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  float v7;
  __int64 result;

  if (*(_BYTE*)(GameData_22190a0 + 8) == 1) {
    *(_BYTE*)(GameData_22190a0 + 8) = 0;
  }
  *(_BYTE*)(*GameData_212f4e0[0] + 11) = 1;
  result = GameData_2219098;
  *(_BYTE*)(GameData_2219098 + 8) = 1;
  if ((*(_BYTE*)(result + 9) & 1) == 0) {
    v0 = result;
    if ((*(_BYTE*)(result + 10) & 1) == 0) {
      result = GameRoutine_ec1530(GameData_21f4cc0);
      if ((result & 1) == 0 && *(int*)(v0 + 24) <= 0) {
        result = GameRoutine_1011550(*(_QWORD*)GameData_212f510[0], 0, 1);
        if ((result & 1) != 0) {
          v1 = *(unsigned __int8*)(v0 + 8);
          *(_BYTE*)(v0 + 9) = v1;
          v2 = GameData_21ee240;
          if (v1 == 1) {
            if (GameData_21ee240 != 0) {
              v3 = *(_DWORD*)(GameData_21ee240 + 156);
              if ((v3 & 0x10) == 0) {
                *(_DWORD*)(GameData_21ee240 + 156) = v3 & 0xFFFFFFEE;
                result = GameRoutine_8224a0(25);
                if (GameData_21caab0 != 0 &&
                    (result = GameRoutine_65c580(
                         *(_QWORD*)(GameData_21caab0 + 48), result)) != 0) {
                  v4 = *(_DWORD*)(v2 + 156);
                  if (*(_DWORD*)(result + 32) == 1) {
                    if ((v4 & 4) != 0) {
                      return result;
                    }
                    v5 = v4 | 4;
                    goto LABEL_24;
                  }
                }
                else {
                  v4 = *(_DWORD*)(v2 + 156);
                }
                if ((v4 & 4) == 0) {
                  return result;
                }
                v5 = v4 & 0xFFFFFFFB;
                goto LABEL_24;
              }
            }
          }
          else if (GameData_21ee240 != 0) {
            v6 = *(_DWORD*)(GameData_21ee240 + 156);
            if (*(_BYTE*)(GameData_21ee240 + 152) != 0) {
              v6 |= 2u;
              *(_DWORD*)(GameData_21ee240 + 156) = v6;
            }
            if ((v6 & 0x10) == 0) {
              v5 = v6 & 0xFFFFFFE2 | 1;
            LABEL_24:
              v7 = *(float*)(v2 + 224);
              *(_DWORD*)(v2 + 156) = v5;
              if (v7 > 0.0) {
                *(_DWORD*)(v2 + 224) = 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_170a170(__int64 a1)
{
  __int64 v1;
  unsigned __int16* v2;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 result;

  v10 = *(_QWORD*)(a1 - 88);
  if (v10 == 0) {
    return 0;
  }
  v11 = GameRoutine_1a0a6c0(v10, GameData_212e030[0], &GameData_20a8cc0, 0);
  if (v11 == 0) {
    return 0;
  }
  v12 = (_QWORD*)(v11 + 1064);
  if ((int)((v12[2] - v12[1]) >> 3) > 0) {
    return 1;
  }
  result = *(_QWORD*)(*v12 + 336LL);
  if (result != 0) {
    result = GameRoutine_1a0a6c0(result, GameData_212e008[0],
                                 GameData_212e010[0], 0);
    if (result != 0) {
      v1 = result;
      v2 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                        560LL))(result);
      v3 = GameData_212c878[0];
      v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v2);
      v5 = *(unsigned __int8*)(v4 + 72);
      v6 = *(_DWORD*)(v4 + 336) & 3;
      if (v5 == 15 || v6 != 0) {
        return 0;
      }
      v8 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 560LL))(
          v1);
      if ((*((_BYTE*)v8 + 3) & 0x10) != 0) {
        return 0;
      }
      else {
        v9 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v8);
        return ((1LL << *(_BYTE*)(v9 + 72)) & 0xE01F) != 0 &&
               (*(_BYTE*)(v9 + 336) & 4) == 0;
      }
    }
  }
  return result;
}

_QWORD* GameHr_185fe80(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;
  _QWORD* result;
  int v16;

  result = (_QWORD*)*a2;
  if (*a2 != 0) {
    v2 = (_QWORD*)*a2;
    v3 = GameRoutine_820d50(7);
    if (GameData_21caab0 != 0) {
      v4 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v3);
      if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
        return nullptr;
      }
    }
    if ((GameRoutine_822320(3) & 1) == 0) {
      return nullptr;
    }
    v5 = v2[218];
    v6 = v2[219] - v5;
    v16 = GameData_21d9700 & 0xFFF;
    v7 = ((unsigned __int64)(unsigned int)GameData_21d9700 >> 5) & 0x7F;
    if (v7 + 1 <= v6 >> 2 &&
        ((*(_DWORD*)(v5 + 4LL * (unsigned int)v7) >> GameData_21d9700) & 1) !=
            0 &&
        (GameRoutine_843420(&v16, v2 + 218) & 1) != 0) {
      v8 = v2[55];
      v9 = v8 != 0 ? *(_BYTE*)(v8 + 16) : 9;
      if (((1 << v9) & 0xF1) != 0) {
        return nullptr;
      }
    }
    v10 = v2[55];
    if (v10 == 0) {
      return nullptr;
    }
    v11 = *(unsigned __int8*)(v10 + 16);
    v12 = v11 > 7;
    v13 = (1 << v11) & 0x91;
    if (v12 || v13 == 0) {
      return nullptr;
    }
    else {
      return (_QWORD*)(*(_BYTE*)(v2[50] + 96LL) == 1);
    }
  }
  return result;
}

bool GameHr_1862950(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;
  int v16;

  if (a2 == nullptr) {
    return false;
  }
  v3 = GameRoutine_820d50(6);
  if (GameData_21caab0 != 0) {
    v4 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v3);
    if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
      return false;
    }
  }
  if ((GameRoutine_822320(1) & 1) == 0) {
    return false;
  }
  v5 = a2[218];
  v6 = a2[219] - v5;
  v16 = GameData_21d9700 & 0xFFF;
  v7 = ((unsigned __int64)(unsigned int)GameData_21d9700 >> 5) & 0x7F;
  if (v7 + 1 <= v6 >> 2 &&
      ((*(_DWORD*)(v5 + 4LL * (unsigned int)v7) >> GameData_21d9700) & 1) !=
          0 &&
      (GameRoutine_843420(&v16, a2 + 218) & 1) != 0) {
    v8 = a2[55];
    v9 = v8 != 0 ? *(_BYTE*)(v8 + 16) : 9;
    if (((1 << v9) & 0xF1) != 0) {
      return false;
    }
  }
  v10 = a2[55];
  if (v10 == 0) {
    return false;
  }
  v11 = *(unsigned __int8*)(v10 + 16);
  v12 = v11 > 7;
  v13 = (1 << v11) & 0x91;
  return !v12 && v13 != 0 && *(_BYTE*)(a2[50] + 96LL) == 2;
}

#pragma GCC visibility pop
