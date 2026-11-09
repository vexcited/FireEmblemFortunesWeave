#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fc50d8[])();
extern __int64 (*GameData_1fc8750[])();
extern __int64 (*GameData_1fc87e0[])();
extern __int64 (*GameData_1fc8870[])();
extern __int64 (*GameData_1fc88b8[])();
extern __int64 (*GameData_1fc8948[])();
extern __int64 (*GameData_1fc89d8[])();
extern __int64 (*GameData_1fc8c88[])();
extern __int64 (*GameData_1fc8d18[])();
extern __int64 (*GameData_1fc8da8[])();
extern __int64 (*GameData_1fc9d98[])();
extern __int64 (*GameData_1fc9e28[])();
extern __int64 (*GameData_1fc9eb8[])();
extern __int64 (*GameData_1fca168[])();
extern __int64 (*GameData_1fca1f8[])();
extern __int64 (*GameData_1fca288[])();
extern __int64 (*GameData_1fca438[])();
extern __int64 (*GameData_1fca4c8[])();
extern __int64 (*GameData_1fca558[])();
extern __int64 (*GameData_1fcb8d0[])();
extern __int64 (*GameData_1fcb960[])();
extern __int64 (*GameData_1fcb9f0[])();
extern __int64 (*GameData_1fcba38[])();
extern __int64 (*GameData_1fcbac8[])();
extern __int64 (*GameData_1fcbb58[])();
extern __int64 (*GameData_1fcbba0[])();
extern __int64 (*GameData_1fcbc30[])();
extern __int64 (*GameData_1fcbcc0[])();
extern __int64 (*GameData_1fcbfd8[])();
extern __int64 (*GameData_1fcc068[])();
extern __int64 (*GameData_1fcc0f8[])();
extern __int64 (*GameData_1fcc140[])();
extern __int64 (*GameData_1fcc1d0[])();
extern __int64 (*GameData_1fcc260[])();
extern __int64 (*GameData_1fcd758[])();
extern __int64 (*GameData_1fcd7e8[])();
extern __int64 (*GameData_1fcd878[])();
extern __int64 (*GameData_1fcddf8[])();
extern __int64 (*GameData_1fcde88[])();
extern __int64 (*GameData_1fcdf18[])();
extern __int64 (*GameData_1fcdf60[])();
extern __int64 (*GameData_1fcdff0[])();
extern __int64 (*GameData_1fce080[])();
extern __int64 (*GameData_1fce500[])();
extern __int64 (*GameData_1fce590[])();
extern __int64 (*GameData_1fce620[])();
extern __int64 GameData_212bf68;
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fb840(_QWORD, _QWORD);
__int64 GameRoutine_5fb900(_QWORD);
__int64 GameRoutine_5fba80(_QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_7fb7c0(_QWORD);
__int64 GameRoutine_ad5500(_QWORD*, __int64, __int64, unsigned int);
char** GameRoutine_ad5a50(char** result, __int64, __int64, unsigned __int64);
_QWORD* GameRoutine_ad5bc0(_QWORD* result, __int64, __int64*, unsigned __int64);
__int64 GameRoutine_adc400(__int64, __int64, __int64, __int64, __int64, _QWORD*,
                           __int64*, __int64);
__int64 GameRoutine_adf390(_QWORD);
void __attribute__((noreturn)) GameRoutine_adf500(_QWORD);
void __attribute__((noreturn)) GameRoutine_b32f30(_QWORD);
__int64 GameRoutine_b48e70(_QWORD, _QWORD);
__int64 GameRoutine_b48f90(_QWORD, _QWORD);
__int64 GameRoutine_b494f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b4a510(_QWORD, _QWORD);
__int64 GameRoutine_b5a4b0(__int64, __int64);
__int64 GameRoutine_b5a5d0(_QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_b91200(_QWORD* result, __int64, _QWORD*);
__int64 GameRoutine_b97100(void);

__int64* GameHr_ade1f0(__int64* result, int a2, __int64 a3, __int64 a4,
                       unsigned int a5)
{
  __int64 v5;
  __int64** v6;
  __int64* v7;
  unsigned int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;

  if (result[40] != 0) {
    v5 = result[33];
    if (0xAAAAAAAAAAAAAAABLL * ((result[34] - v5) >> 3) > a2) {
      v6 = (__int64**)(v5 + 24LL * a2);
      result = *v6;
      if (*v6 != nullptr) {
        GameRoutine_ad5500(result, a3, a4, a5);
        v7 = *v6;
        v8 = GameRoutine_5fba80(v7[15], v7[25]);
        v9 = v7[15];
        if ((v8 & 0x80000000) != 0) {
          v8 = *(_DWORD*)(v9 + 224) & ~(*(int*)(v9 + 224) >> 31);
        }
        v10 = *(_QWORD*)(v9 + 136) + ((unsigned __int64)v8 << 6);
        v11 = *v7;
        v7[17] = v10;
        GameRoutine_5fb840(v10, v11 + 568);
        result = (__int64*)GameRoutine_5fb900(v7[17]);
        v7[18] = result[1];
      }
    }
  }
  return result;
}

__int64 GameHr_b3cf00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  char* v51;
  char** v52;
  __int64 v53;
  unsigned int v54;
  char* v55;

  *(_WORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 376) = 18;
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
  *(_DWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_WORD*)(a1 + 328) = 0;
  *(_BYTE*)(a1 + 410) = 0;
  strcpy((char*)(a1 + 377), "<no_name>");
  *(_QWORD*)(a1 + 400) = 0x200000000LL;
  *(_WORD*)(a1 + 408) = 256;
  *(_QWORD*)a1 = GameData_1fc50d8;
  *(_QWORD*)(a1 + 8) = 0;
  v6 = *(_QWORD*)(a2 + 416);
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 416) = v6;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 16);
  v7 = *(_QWORD**)(a2 + 320);
  *(_QWORD*)(a1 + 320) = v7;
  if (a1 == a2) {
    goto LABEL_16;
  }
  if ((*(_BYTE*)(a2 + 328) & 1) != 0) {
    GameRoutine_64df20(a1 + 328, *(_QWORD*)(a2 + 344), *(_QWORD*)(a2 + 336));
    v12 = *(unsigned __int8*)(a2 + 352);
    if ((*(_BYTE*)(a1 + 352) & 1) != 0) {
      v13 = (v12 & 1) == 0;
      v14 = v12 >> 1;
      if (v13) {
        v15 = a2 + 353;
      }
      else {
        v15 = *(_QWORD*)(a2 + 368);
      }
      if (v13) {
        v16 = v14;
      }
      else {
        v16 = *(_QWORD*)(a2 + 360);
      }
      GameRoutine_64dde0(a1 + 352, v15, v16);
      goto LABEL_15;
    }
    if ((v12 & 1) == 0) {
      goto LABEL_4;
    }
  LABEL_7:
    GameRoutine_64df20(a1 + 352, *(_QWORD*)(a2 + 368), *(_QWORD*)(a2 + 360));
    goto LABEL_15;
  }
  v8 = *(_QWORD*)(a2 + 328);
  v9 = *(_QWORD*)(a2 + 344);
  *(_QWORD*)(a1 + 336) = *(_QWORD*)(a2 + 336);
  *(_QWORD*)(a1 + 344) = v9;
  *(_QWORD*)(a1 + 328) = v8;
  if ((*(_BYTE*)(a2 + 352) & 1) != 0) {
    goto LABEL_7;
  }
LABEL_4:
  v10 = *(_QWORD*)(a2 + 352);
  v11 = *(_QWORD*)(a2 + 368);
  *(_QWORD*)(a1 + 360) = *(_QWORD*)(a2 + 360);
  *(_QWORD*)(a1 + 368) = v11;
  *(_QWORD*)(a1 + 352) = v10;
LABEL_15:
  GameRoutine_6b7aa0(a1 + 424);
  v7 = *(_QWORD**)(a2 + 320);
LABEL_16:
  v17 = *(unsigned __int8*)(a2 + 328);
  v18 = (v17 & 1) == 0;
  v19 = v17 >> 1;
  if (v18) {
    v20 = v19;
  }
  else {
    v20 = *(_QWORD*)(a2 + 336);
  }
  v21 = *(unsigned __int8*)(a2 + 352);
  if (v18) {
    v22 = a2 + 329;
  }
  else {
    v22 = *(_QWORD*)(a2 + 344);
  }
  v23 = (v21 & 1) == 0;
  v24 = v21 >> 1;
  if (v23) {
    v25 = a2 + 353;
  }
  else {
    v25 = *(_QWORD*)(a2 + 368);
  }
  if (v23) {
    v26 = v24;
  }
  else {
    v26 = *(_QWORD*)(a2 + 360);
  }
  GameRoutine_adc400(a1, v22, v20, v25, v26, v7, (__int64*)(a1 + 424), a3);
  v27 = *(_QWORD*)(**(_QWORD**)(a1 + 416) + 8LL);
  v28 = GameRoutine_1a09c70(v27 + 2);
  result = GameRoutine_60a060(a1 + 376, v27 + 2, v28);
  if (a1 != a2) {
    result = GameRoutine_adf390(a1 + 24);
    v30 = *(_QWORD*)(a1 + 80);
    v31 = *(_QWORD*)(a2 + 80);
    v32 = *(_QWORD*)(a2 + 88);
    v33 = v32 - v31;
    v34 = *(_QWORD*)(a1 + 96);
    if (v32 - v31 <= (unsigned __int64)(v34 - v30)) {
      v41 = *(_QWORD*)(a1 + 88);
      v42 = v41 - v30;
      if (v33 > (unsigned __int64)(v41 - v30)) {
        v43 = v31 + v42;
        if (v41 != v30) {
          result = GameRoutine_1a0b940(*(_QWORD*)(a1 + 80), *(_QWORD*)(a2 + 80),
                                       v42 - 4);
          v41 = *(_QWORD*)(a1 + 88);
        }
        v44 = v32 - v43;
        if (v32 != v43) {
          result = GameRoutine_1a0b940(v41, v43, v44 - 4);
        }
        v45 = v41 + v44;
        goto LABEL_52;
      }
      if (v32 != v31) {
        result = GameRoutine_1a0b940(*(_QWORD*)(a1 + 80), *(_QWORD*)(a2 + 80),
                                     v33 - 4);
      }
    }
    else {
      v35 = v33 >> 4;
      v36 = (_QWORD*)GameData_212bf68;
      if (v30 != 0) {
        v37 = *(_QWORD*)GameData_212bf68;
        *(_QWORD*)(a1 + 88) = v30;
        v38 = 128;
        if (*(_QWORD*)(v37 + 200) == 0) {
          v38 = 56;
        }
        result = GameRoutine_1a0a4e0(v37 + v38, v30);
        v34 = 0;
        *(_QWORD*)(a1 + 88) = 0;
        *(_QWORD*)(a1 + 96) = 0;
        *(_QWORD*)(a1 + 80) = 0;
      }
      if (v35 >> 60 != 0) {
        goto LABEL_63;
      }
      v39 = v34 >> 3;
      if (v34 >> 3 <= v35) {
        v39 = v33 >> 4;
      }
      v40 = (unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF0LL ? 0xFFFFFFFFFFFFFFFLL
                                                          : v39;
      if (v40 >> 60 != 0) {
      LABEL_63:
        GameRoutine_adf500(result);
      }
      result = GameRoutine_651b90(*v36, 16 * v40, 16, 0);
      v30 = result;
      *(_QWORD*)(a1 + 80) = result;
      *(_QWORD*)(a1 + 88) = result;
      *(_QWORD*)(a1 + 96) = result + 16 * v40;
      if (v32 != v31) {
        result = GameRoutine_1a0b950(result, v31, v33 - 4);
      }
    }
    v45 = v30 + v33;
  LABEL_52:
    *(_QWORD*)(a1 + 88) = v45;
  }
  v47 = *(_QWORD*)(a1 + 264);
  v46 = *(_QWORD*)(a1 + 272);
  if (v46 != v47) {
    v48 = 1;
    v49 = 0;
    do {
      v52 = *(char***)(v47 + 24 * v49);
      if (v52 != nullptr) {
        v53 = *(_QWORD*)(*(_QWORD*)(a2 + 264) + 24 * v49);
        if (v52 != (char**)v53) {
          GameRoutine_ad5a50(
              v52 + 22, *(_QWORD*)(v53 + 176), *(_QWORD*)(v53 + 184),
              (__int64)(*(_QWORD*)(v53 + 184) - *(_QWORD*)(v53 + 176)) >> 3);
          GameRoutine_ad5bc0(
              v52 + 19, *(_QWORD*)(v53 + 152), *(__int64**)(v53 + 160),
              (__int64)(*(_QWORD*)(v53 + 160) - *(_QWORD*)(v53 + 152)) >> 4);
          GameRoutine_7fb7c0(v52 + 25);
          v52 = *(char***)(*(_QWORD*)(a1 + 264) + 24 * v49);
        }
        v54 = GameRoutine_5fba80(v52[15], v52[25]);
        v55 = v52[15];
        if ((v54 & 0x80000000) != 0) {
          v54 = *((_DWORD*)v55 + 56) & ~(*((int*)v55 + 56) >> 31);
        }
        v50 = *((_QWORD*)v55 + 17) + ((unsigned __int64)v54 << 6);
        v51 = *v52;
        v52[17] = (char*)v50;
        GameRoutine_5fb840(v50, v51 + 568);
        result = GameRoutine_5fb900(v52[17]);
        v52[18] = *(char**)(result + 8);
        v47 = *(_QWORD*)(a1 + 264);
        v46 = *(_QWORD*)(a1 + 272);
      }
      v49 = v48++;
    } while (0xAAAAAAAAAAAAAAABLL * ((v46 - v47) >> 3) > v49);
  }
  return result;
}

__int64 GameHr_b89ce0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  _QWORD* v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 (*v14)();
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 (*v26)();
  int v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 (*v32)();
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 result;
  __int64 v44;
  __int64 (**v45)();
  __int64 v46;
  __int64* v47;
  __int64 (***v48)();
  __int64 v49;

  v49 = a3;
  v8 = (_QWORD*)GameData_212bf68;
  if (*(_BYTE*)(a4 + 118) == 1) {
    v9 = *(_DWORD*)(a2 + 96);
    v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 224, 16, 0);
    *(_DWORD*)(v10 + 80) = v9;
    *(_QWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_QWORD*)(v10 + 48) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_QWORD*)(v10 + 88) = 0;
    *(_QWORD*)(v10 + 96) = 0;
    *(_QWORD*)(v10 + 104) = 0;
    *(_QWORD*)(v10 + 112) = 0;
    *(_QWORD*)(v10 + 184) = a1;
    *(_BYTE*)(v10 + 8) = 28;
    *(_BYTE*)(v10 + 84) = 1;
    *(_QWORD*)v10 = GameData_1fc8870;
    strcpy((char*)(v10 + 9), "CharaDepthPass");
    *(_QWORD*)(v10 + 128) = GameData_1fc8750;
    *(_QWORD*)(v10 + 136) = &v49;
    v12 = *(__int64**)(a2 + 8);
    v11 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v10 + 160) = v10 + 128;
    *(_QWORD*)(v10 + 176) = GameData_1fc87e0;
    *(_QWORD*)(v10 + 208) = v10 + 176;
    if ((unsigned __int64)v12 >= v11) {
      v14 = *(__int64 (**)())a2;
      v15 = (__int64)v12 - *(_QWORD*)a2;
      v16 = (v15 >> 3) + 1;
      if (v16 >> 61 != 0) {
        goto LABEL_36;
      }
      v17 = v11 - (_QWORD)v14;
      if (v17 >> 2 > v16) {
        v16 = v17 >> 2;
      }
      if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
        v18 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v18 = v16;
      }
      if (v18 != 0) {
        if (v18 >> 61 != 0) {
          goto LABEL_37;
        }
        v19 = v10;
        v20 = GameRoutine_651b90(*v8, 8 * v18, 16, 0);
        v10 = v19;
      }
      else {
        v20 = 0;
      }
      v21 = v20 + 8 * v18;
      v22 = v20 + v15 - 8 * (v15 >> 3);
      *(_QWORD*)(v20 + v15) = v10;
      v13 = v20 + v15 + 8;
      GameRoutine_1a0b950(v22, v14, v15);
      *(_QWORD*)a2 = v22;
      *(_QWORD*)(a2 + 8) = v13;
      *(_QWORD*)(a2 + 16) = v21;
      if (v14 != nullptr) {
        v23 = 128;
        if (*(_QWORD*)(*v8 + 200LL) == 0) {
          v23 = 56;
        }
        GameRoutine_1a0a4e0(*v8 + v23, v14);
      }
    }
    else {
      *v12 = v10;
      v13 = (__int64)(v12 + 1);
    }
    *(_QWORD*)(a2 + 8) = v13;
    v24 = *(_QWORD*)(v13 - 8);
    v45 = (__int64 (**)())a2;
    v46 = v24;
    (*(void (**)(__int64, __int64 (***)()))(*(_QWORD*)v24 + 16LL))(v24, &v45);
  }
  v26 = *(__int64 (**)())a2;
  v25 = *(_QWORD*)(a2 + 8);
  v27 = *(_DWORD*)(a2 + 96);
  v10 = GameRoutine_651b90(*v8, 304, 16, 0);
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_DWORD*)(v10 + 80) = v27;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  v47 = &v49;
  v45 = GameData_1fc88b8;
  v46 = a1;
  v48 = &v45;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 152) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 272) = a5;
  *(_BYTE*)(v10 + 8) = 26;
  strcpy((char*)(v10 + 9), "CharacterPass");
  *(_BYTE*)(v10 + 84) = 1;
  *(_QWORD*)v10 = GameData_1fc89d8;
  *(_QWORD*)(v10 + 208) = GameData_1fc88b8;
  *(_QWORD*)(v10 + 240) = v10 + 208;
  v28 = v47;
  *(_QWORD*)(v10 + 216) = v46;
  *(_QWORD*)(v10 + 224) = v28;
  *(_QWORD*)(v10 + 288) = v10 + 256;
  v30 = *(__int64**)(a2 + 8);
  v29 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v10 + 256) = GameData_1fc8948;
  *(_QWORD*)(v10 + 264) = a1;
  if ((unsigned __int64)v30 < v29) {
    *v30 = v10;
    v31 = (__int64)(v30 + 1);
    goto LABEL_35;
  }
  v32 = *(__int64 (**)())a2;
  v33 = (__int64)v30 - *(_QWORD*)a2;
  v34 = (v33 >> 3) + 1;
  if (v34 >> 61 != 0) {
  LABEL_36:
    GameRoutine_b32f30(v10);
  }
  v35 = v29 - (_QWORD)v32;
  if (v35 >> 2 > v34) {
    v34 = v35 >> 2;
  }
  if ((unsigned __int64)v35 >= 0x7FFFFFFFFFFFFFF8LL) {
    v36 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v36 = v34;
  }
  if (v36 != 0) {
    if (v36 >> 61 == 0) {
      v37 = v10;
      v38 = GameRoutine_651b90(*v8, 8 * v36, 16, 0);
      v10 = v37;
      goto LABEL_31;
    }
  LABEL_37:
    GameRoutine_60a210(v10);
  }
  v38 = 0;
LABEL_31:
  v39 = v38 + 8 * v36;
  v40 = v38 + v33 - 8 * (v33 >> 3);
  *(_QWORD*)(v38 + v33) = v10;
  v31 = v38 + v33 + 8;
  GameRoutine_1a0b950(v40, v32, v33);
  *(_QWORD*)a2 = v40;
  *(_QWORD*)(a2 + 8) = v31;
  *(_QWORD*)(a2 + 16) = v39;
  if (v32 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v41 = 56;
    }
    GameRoutine_1a0a4e0(*v8 + v41, v32);
  }
LABEL_35:
  *(_QWORD*)(a2 + 8) = v31;
  v42 = *(_QWORD*)(v31 - 8);
  v45 = (__int64 (**)())a2;
  v46 = v42;
  result = (*(__int64 (**)(__int64, __int64 (***)()))(*(_QWORD*)v42 + 16LL))(
      v42, &v45);
  v44 = v49;
  *(_QWORD*)(v49 + 112) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                            ((v25 - (_QWORD)v26) & 0x7FFFFFFF8LL)) +
                 168LL);
  *(_QWORD*)(v44 + 120) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                            ((v25 - (_QWORD)v26) & 0x7FFFFFFF8LL)) +
                 184LL);
  return result;
}

__int64 GameHr_b8a560(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 (*v4)();
  int v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 (*v15)();
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  __int64 (**v27)();
  __int64 v28;
  __int64* v29;
  __int64 (***v30)();
  __int64 v31;

  v31 = a3;
  v4 = *(__int64 (**)())a2;
  v3 = *(_QWORD*)(a2 + 8);
  v7 = *(_DWORD*)(a2 + 96);
  v8 = (_QWORD*)GameData_212bf68;
  v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 208, 16, 0);
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  v29 = &v31;
  v27 = GameData_1fc8c88;
  v28 = a1;
  v30 = &v27;
  *(_DWORD*)(v9 + 80) = v7;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 168) = a1;
  *(_BYTE*)(v9 + 8) = 18;
  *(_BYTE*)(v9 + 84) = 1;
  *(_QWORD*)v9 = GameData_1fc8da8;
  *(_QWORD*)(v9 + 112) = GameData_1fc8c88;
  strcpy((char*)(v9 + 9), "CharaMask");
  *(_QWORD*)(v9 + 144) = v9 + 112;
  v10 = v28;
  v11 = v29;
  *(_QWORD*)(v9 + 160) = GameData_1fc8d18;
  *(_QWORD*)(v9 + 192) = v9 + 160;
  *(_QWORD*)(v9 + 120) = v10;
  *(_QWORD*)(v9 + 128) = v11;
  v13 = *(__int64**)(a2 + 8);
  v12 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v13 >= v12) {
    v15 = *(__int64 (**)())a2;
    v16 = (__int64)v13 - *(_QWORD*)a2;
    v17 = (v16 >> 3) + 1;
    if (v17 >> 61 != 0) {
      GameRoutine_b32f30(v9);
    }
    v18 = v12 - (_QWORD)v15;
    if (v18 >> 2 > v17) {
      v17 = v18 >> 2;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
        GameRoutine_60a210(v9);
      }
      v20 = v9;
      v21 = GameRoutine_651b90(*v8, 8 * v19, 16, 0);
      v9 = v20;
    }
    else {
      v21 = 0;
    }
    v22 = v21 + 8 * v19;
    v23 = v21 + v16 - 8 * (v16 >> 3);
    *(_QWORD*)(v21 + v16) = v9;
    v14 = v21 + v16 + 8;
    GameRoutine_1a0b950(v23, v15, v16);
    *(_QWORD*)a2 = v23;
    *(_QWORD*)(a2 + 8) = v14;
    *(_QWORD*)(a2 + 16) = v22;
    if (v15 != nullptr) {
      v24 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v24 = 56;
      }
      GameRoutine_1a0a4e0(*v8 + v24, v15);
    }
  }
  else {
    *v13 = v9;
    v14 = (__int64)(v13 + 1);
  }
  *(_QWORD*)(a2 + 8) = v14;
  v25 = *(_QWORD*)(v14 - 8);
  v27 = (__int64 (**)())a2;
  v28 = v25;
  result = (*(__int64 (**)(__int64, __int64 (***)()))(*(_QWORD*)v25 + 16LL))(
      v25, &v27);
  *(_QWORD*)(v31 + 120) = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v3 - (_QWORD)v4) & 0x7FFFFFFF8LL)) +
               104LL);
  return result;
}

__int64 GameHr_b909a0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  _QWORD* v6;
  __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 (*v12)();
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 (**v24)();
  __int64 v25;
  __int64* v26;
  __int64 (***v27)();
  __int64 v28;

  v28 = a3;
  v3 = *(_DWORD*)(a2 + 96);
  v6 = (_QWORD*)GameData_212bf68;
  v7 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 288, 16, 0);
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_DWORD*)(v7 + 80) = v3;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  v26 = &v28;
  v24 = GameData_1fc9d98;
  v25 = a1;
  v27 = &v24;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_QWORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 248) = a1;
  *(_BYTE*)(v7 + 8) = 30;
  strcpy((char*)(v7 + 9), "EffectDecalPass");
  *(_BYTE*)(v7 + 84) = 1;
  *(_QWORD*)v7 = GameData_1fc9eb8;
  *(_QWORD*)(v7 + 192) = GameData_1fc9d98;
  *(_QWORD*)(v7 + 240) = GameData_1fc9e28;
  *(_QWORD*)(v7 + 272) = v7 + 240;
  *(_QWORD*)(v7 + 224) = v7 + 192;
  v8 = v26;
  *(_QWORD*)(v7 + 200) = v25;
  *(_QWORD*)(v7 + 208) = v8;
  v10 = *(__int64**)(a2 + 8);
  v9 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v10 >= v9) {
    v12 = *(__int64 (**)())a2;
    v13 = (__int64)v10 - *(_QWORD*)a2;
    v14 = (v13 >> 3) + 1;
    if (v14 >> 61 != 0) {
      GameRoutine_b32f30(v7);
    }
    v15 = v9 - (_QWORD)v12;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v14;
    }
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        GameRoutine_60a210(v7);
      }
      v17 = v7;
      v18 = GameRoutine_651b90(*v6, 8 * v16, 16, 0);
      v7 = v17;
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v16;
    v20 = v18 + v13 - 8 * (v13 >> 3);
    *(_QWORD*)(v18 + v13) = v7;
    v11 = v18 + v13 + 8;
    GameRoutine_1a0b950(v20, v12, v13);
    *(_QWORD*)a2 = v20;
    *(_QWORD*)(a2 + 8) = v11;
    *(_QWORD*)(a2 + 16) = v19;
    if (v12 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v21 = 56;
      }
      GameRoutine_1a0a4e0(*v6 + v21, v12);
    }
  }
  else {
    *v10 = v7;
    v11 = (__int64)(v10 + 1);
  }
  *(_QWORD*)(a2 + 8) = v11;
  v22 = *(_QWORD*)(v11 - 8);
  v24 = (__int64 (**)())a2;
  v25 = v22;
  return (*(__int64 (**)(__int64, __int64 (***)()))(*(_QWORD*)v22 + 16LL))(
      v22, &v24);
}

__int64 GameHr_b924a0(__int64 a1, _QWORD* a2, __int64 a3)
{
  _QWORD** v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64* v11;
  _QWORD v12[18];

  GameRoutine_b91200(v12, a3, **(_QWORD***)(a1 + 8));
  GameRoutine_1a0b950(*a2, v12, 144);
  v6 = *(_QWORD***)(a1 + 8);
  v7 = *v6;
  v8 = GameRoutine_b48e70(a3, **v6);
  v9 = GameRoutine_b48e70(a3, v7[9]);
  result = GameRoutine_b4a510(a3, v7[4]);
  v11 = (__int64*)a2[1];
  *v11 = v8;
  v11[1] = v9;
  v11[3] = 0;
  v11[4] = 0;
  v11[2] = result;
  return result;
}

__int64 GameHr_b92dc0(__int64 a1, _QWORD* a2, __int64 a3)
{
  _QWORD** v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64* v11;
  _QWORD v12[18];

  GameRoutine_b91200(v12, a3, **(_QWORD***)(a1 + 8));
  GameRoutine_1a0b950(*a2, v12, 144);
  v6 = *(_QWORD***)(a1 + 8);
  v7 = *v6;
  v8 = GameRoutine_b48e70(a3, **v6);
  v9 = GameRoutine_b48e70(a3, v7[9]);
  result = GameRoutine_b4a510(a3, v7[4]);
  v11 = (__int64*)a2[1];
  *v11 = v8;
  v11[1] = v9;
  v11[3] = 0;
  v11[4] = 0;
  v11[2] = result;
  return result;
}

__int64 GameHr_b936e0(__int64 a1, _QWORD* a2, __int64 a3)
{
  _QWORD** v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64* v11;
  _QWORD v12[18];

  GameRoutine_b91200(v12, a3, **(_QWORD***)(a1 + 8));
  GameRoutine_1a0b950(*a2, v12, 144);
  v6 = *(_QWORD***)(a1 + 8);
  v7 = *v6;
  v8 = GameRoutine_b48e70(a3, **v6);
  v9 = GameRoutine_b48e70(a3, v7[9]);
  result = GameRoutine_b4a510(a3, v7[4]);
  v11 = (__int64*)a2[1];
  *v11 = v8;
  v11[1] = v9;
  v11[3] = 0;
  v11[4] = 0;
  v11[2] = result;
  return result;
}

__int64 GameHr_b94fe0(__int64 a1, __int64* a2, _QWORD* a3)
{
  __int64 v3;
  __int64* v4;
  int v5;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 result;
  _QWORD v26[2];

  v3 = *a2;
  v4 = (__int64*)a2[1];
  v5 = *((_DWORD*)a2 + 24);
  v9 = (_QWORD*)GameData_212bf68;
  v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 288, 16, 0);
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_DWORD*)(v10 + 80) = v5;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 152) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 8) = 14;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 200) = a1;
  *(_QWORD*)(v10 + 248) = a1;
  strcpy((char*)(v10 + 9), "PrePass");
  *(_BYTE*)(v10 + 84) = 1;
  *(_QWORD*)v10 = GameData_1fca288;
  *(_QWORD*)(v10 + 192) = GameData_1fca168;
  *(_QWORD*)(v10 + 224) = v10 + 192;
  *(_QWORD*)(v10 + 240) = GameData_1fca1f8;
  v11 = a2[2];
  *(_QWORD*)(v10 + 272) = v10 + 240;
  if ((unsigned __int64)v4 >= v11) {
    v13 = (unsigned __int64)v4 - v3;
    v14 = ((__int64)v4 - v3) >> 3;
    v15 = v14 + 1;
    if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
      GameRoutine_b32f30(v10);
    }
    v16 = v11 - v3;
    if (v16 >> 2 > v15) {
      v15 = v16 >> 2;
    }
    if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v15;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        GameRoutine_60a210(v10);
      }
      v18 = v10;
      v19 = GameRoutine_651b90(*v9, 8 * v17, 16, 0);
      v10 = v18;
    }
    else {
      v19 = 0;
    }
    v20 = v19 + 8 * v17;
    v21 = v19 + v13 - 8 * v14;
    *(_QWORD*)(v19 + v13) = v10;
    v12 = v19 + v13 + 8;
    GameRoutine_1a0b950(v21, v3, v13);
    *a2 = v21;
    a2[1] = v12;
    a2[2] = v20;
    if (v3 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*v9 + 200LL) == 0) {
        v22 = 56;
      }
      GameRoutine_1a0a4e0(*v9 + v22, v3);
    }
  }
  else {
    *v4 = v10;
    v12 = (__int64)(v4 + 1);
    v13 = (unsigned __int64)v4 - v3;
  }
  a2[1] = v12;
  v23 = *(_QWORD*)(v12 - 8);
  v26[0] = a2;
  v26[1] = v23;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v23 + 16LL))(v23, v26);
  *a3 = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 88LL);
  a3[5] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 96LL);
  a3[6] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 104LL);
  a3[7] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 112LL);
  a3[8] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 120LL);
  a3[9] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 128LL);
  a3[1] = *(_QWORD*)(*(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3)) + 136LL);
  v24 = *(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3));
  if (a3 + 48 != (_QWORD*)(v24 + 144)) {
    GameRoutine_b97100();
    v24 = *(_QWORD*)(*a2 + 8LL * (unsigned int)(v13 >> 3));
  }
  result = (__int64)(a3 + 51);
  if (a3 + 51 != (_QWORD*)(v24 + 168)) {
    return GameRoutine_b97100();
  }
  return result;
}

__int64 GameHr_b954b0(__int64 result, __int64* a2, __int64 a3, __int64 a4)
{
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD v26[2];
  __int64 v27;

  v4 = *(unsigned __int8*)(a4 + 117);
  v27 = a3;
  if (v4 == 1) {
    v6 = *a2;
    v5 = a2[1];
    v7 = *((_DWORD*)a2 + 24);
    v8 = result;
    v10 = (_QWORD*)GameData_212bf68;
    v11 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 224, 16, 0);
    *(_DWORD*)(v11 + 80) = v7;
    *(_QWORD*)(v11 + 32) = 0;
    *(_QWORD*)(v11 + 40) = 0;
    *(_QWORD*)(v11 + 48) = 0;
    *(_QWORD*)(v11 + 56) = 0;
    *(_QWORD*)(v11 + 64) = 0;
    *(_QWORD*)(v11 + 72) = 0;
    *(_QWORD*)(v11 + 88) = 0;
    *(_QWORD*)(v11 + 96) = 0;
    *(_QWORD*)(v11 + 104) = 0;
    *(_QWORD*)(v11 + 112) = 0;
    *(_QWORD*)(v11 + 184) = v8;
    *(_BYTE*)(v11 + 8) = 18;
    *(_BYTE*)(v11 + 84) = 1;
    *(_QWORD*)v11 = GameData_1fca558;
    *(_QWORD*)(v11 + 160) = v11 + 128;
    strcpy((char*)(v11 + 9), "DepthPass");
    *(_QWORD*)(v11 + 128) = GameData_1fca438;
    *(_QWORD*)(v11 + 136) = &v27;
    *(_QWORD*)(v11 + 176) = GameData_1fca4c8;
    v13 = (__int64*)a2[1];
    v12 = a2[2];
    *(_QWORD*)(v11 + 208) = v11 + 176;
    if ((unsigned __int64)v13 >= v12) {
      v15 = *a2;
      v16 = (__int64)v13 - *a2;
      v17 = (v16 >> 3) + 1;
      if (v17 >> 61 != 0) {
        GameRoutine_b32f30(v11);
      }
      v18 = v12 - v15;
      if (v18 >> 2 > v17) {
        v17 = v18 >> 2;
      }
      if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
        v19 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v19 = v17;
      }
      if (v19 != 0) {
        if (v19 >> 61 != 0) {
          GameRoutine_60a210(v11);
        }
        v20 = v11;
        v21 = GameRoutine_651b90(*v10, 8 * v19, 16, 0);
        v11 = v20;
      }
      else {
        v21 = 0;
      }
      v22 = v21 + 8 * v19;
      v23 = v21 + v16 - 8 * (v16 >> 3);
      *(_QWORD*)(v21 + v16) = v11;
      v14 = v21 + v16 + 8;
      GameRoutine_1a0b950(v23, v15, v16);
      *a2 = v23;
      a2[1] = v14;
      a2[2] = v22;
      if (v15 != 0) {
        v24 = 128;
        if (*(_QWORD*)(*v10 + 200LL) == 0) {
          v24 = 56;
        }
        GameRoutine_1a0a4e0(*v10 + v24, v15);
      }
    }
    else {
      *v13 = v11;
      v14 = (__int64)(v13 + 1);
    }
    a2[1] = v14;
    v25 = *(_QWORD*)(v14 - 8);
    v26[0] = a2;
    v26[1] = v25;
    result =
        (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v25 + 16LL))(v25, v26);
    *(_QWORD*)(v27 + 8) =
        *(_QWORD*)(*(_QWORD*)(*a2 + ((v5 - v6) & 0x7FFFFFFF8LL)) + 112LL);
  }
  return result;
}

__int64 GameHr_b9fd30(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 (*v4)();
  int v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 (*v14)();
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD** v24;
  __int64 result;
  __int64 (**v26)();
  _QWORD** v27;
  __int64 v28;
  __int64 (***v29)();
  _QWORD* v30;

  v30 = a3;
  v4 = *(__int64 (**)())a2;
  v3 = *(_QWORD*)(a2 + 8);
  v7 = *(_DWORD*)(a2 + 96);
  v8 = (_QWORD*)GameData_212bf68;
  v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 240, 16, 0);
  v28 = a1;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_DWORD*)(v9 + 80) = v7;
  v26 = GameData_1fcb8d0;
  v27 = &v30;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_QWORD*)(v9 + 200) = a1;
  v29 = &v26;
  *(_BYTE*)(v9 + 8) = 22;
  *(_QWORD*)(v9 + 192) = GameData_1fcb960;
  *(_QWORD*)(v9 + 224) = v9 + 192;
  strcpy((char*)(v9 + 9), "MeshFogPass");
  *(_BYTE*)(v9 + 84) = 1;
  *(_QWORD*)v9 = GameData_1fcb9f0;
  *(_DWORD*)(v9 + 120) = -1;
  *(_QWORD*)(v9 + 144) = GameData_1fcb8d0;
  *(_QWORD*)(v9 + 176) = v9 + 144;
  v10 = v28;
  *(_QWORD*)(v9 + 152) = v27;
  *(_QWORD*)(v9 + 160) = v10;
  v12 = *(__int64**)(a2 + 8);
  v11 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v12 >= v11) {
    v14 = *(__int64 (**)())a2;
    v15 = (__int64)v12 - *(_QWORD*)a2;
    v16 = (v15 >> 3) + 1;
    if (v16 >> 61 != 0) {
      GameRoutine_b32f30(v9);
    }
    v17 = v11 - (_QWORD)v14;
    if (v17 >> 2 > v16) {
      v16 = v17 >> 2;
    }
    if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
      v18 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v18 = v16;
    }
    if (v18 != 0) {
      if (v18 >> 61 != 0) {
        GameRoutine_60a210(v9);
      }
      v19 = v9;
      v20 = GameRoutine_651b90(*v8, 8 * v18, 16, 0);
      v9 = v19;
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v18;
    v22 = v20 + v15 - 8 * (v15 >> 3);
    *(_QWORD*)(v20 + v15) = v9;
    v13 = v20 + v15 + 8;
    GameRoutine_1a0b950(v22, v14, v15);
    *(_QWORD*)a2 = v22;
    *(_QWORD*)(a2 + 8) = v13;
    *(_QWORD*)(a2 + 16) = v21;
    if (v14 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v23 = 56;
      }
      GameRoutine_1a0a4e0(*v8 + v23, v14);
    }
  }
  else {
    *v12 = v9;
    v13 = (__int64)(v12 + 1);
  }
  *(_QWORD*)(a2 + 8) = v13;
  v24 = *(_QWORD***)(v13 - 8);
  v26 = (__int64 (**)())a2;
  v27 = v24;
  result = ((__int64 (*)(_QWORD**, __int64 (***)()))(*v24)[2])(v24, &v26);
  *v30 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v3 - (_QWORD)v4) & 0x7FFFFFFF8LL)) +
               128LL);
  return result;
}

__int64 GameHr_b9ff60(__int64 result, __int64 a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (*v8)();
  int v9;
  __int64 v10;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD** v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 (*v20)();
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 (**v32)();
  __int64 v33;
  _QWORD** v34;
  _QWORD* v35;
  __int64 (***v36)();
  _QWORD* v37;

  v4 = *a4;
  v37 = a3;
  v31 = a4;
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 296LL);
  v6 = 128;
  if (*(_BYTE*)(v5 + 96) != 0) {
    v6 = 92;
  }
  if (*(float*)(v5 + v6) > 0.0) {
    v8 = *(__int64 (**)())a2;
    v7 = *(_QWORD*)(a2 + 8);
    v9 = *(_DWORD*)(a2 + 96);
    v10 = result;
    v12 = (_QWORD*)GameData_212bf68;
    v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 320, 16, 0);
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    v34 = &v37;
    v35 = &v31;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    v14 = v35;
    v36 = &v32;
    *(_DWORD*)(v13 + 80) = v9;
    *(_QWORD*)(v13 + 200) = 0;
    *(_QWORD*)(v13 + 208) = 0;
    *(_QWORD*)(v13 + 184) = 0;
    *(_QWORD*)(v13 + 192) = 0;
    *(_QWORD*)(v13 + 168) = 0;
    *(_QWORD*)(v13 + 176) = 0;
    *(_QWORD*)(v13 + 152) = 0;
    *(_QWORD*)(v13 + 160) = 0;
    *(_QWORD*)(v13 + 136) = 0;
    *(_QWORD*)(v13 + 144) = 0;
    *(_QWORD*)(v13 + 120) = 0;
    *(_QWORD*)(v13 + 128) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    *(_QWORD*)(v13 + 112) = 0;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 272) = GameData_1fcbac8;
    *(_QWORD*)(v13 + 280) = v10;
    *(_BYTE*)(v13 + 8) = 22;
    v32 = GameData_1fcba38;
    v33 = v10;
    strcpy((char*)(v13 + 9), "SkyBlurPass");
    *(_BYTE*)(v13 + 84) = 1;
    *(_QWORD*)v13 = GameData_1fcbb58;
    *(_QWORD*)(v13 + 224) = GameData_1fcba38;
    *(_QWORD*)(v13 + 248) = v14;
    *(_QWORD*)(v13 + 256) = v13 + 224;
    v16 = v33;
    v15 = v34;
    *(_QWORD*)(v13 + 304) = v13 + 272;
    *(_QWORD*)(v13 + 232) = v16;
    *(_QWORD*)(v13 + 240) = v15;
    v18 = *(__int64**)(a2 + 8);
    v17 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v18 >= v17) {
      v20 = *(__int64 (**)())a2;
      v21 = (__int64)v18 - *(_QWORD*)a2;
      v22 = (v21 >> 3) + 1;
      if (v22 >> 61 != 0) {
        GameRoutine_b32f30(v13);
      }
      v23 = v17 - (_QWORD)v20;
      if (v23 >> 2 > v22) {
        v22 = v23 >> 2;
      }
      if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
        v24 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v24 = v22;
      }
      if (v24 != 0) {
        if (v24 >> 61 != 0) {
          GameRoutine_60a210(v13);
        }
        v25 = v13;
        v26 = GameRoutine_651b90(*v12, 8 * v24, 16, 0);
        v13 = v25;
      }
      else {
        v26 = 0;
      }
      v27 = v26 + 8 * v24;
      v28 = v26 + v21 - 8 * (v21 >> 3);
      *(_QWORD*)(v26 + v21) = v13;
      v19 = v26 + v21 + 8;
      GameRoutine_1a0b950(v28, v20, v21);
      *(_QWORD*)a2 = v28;
      *(_QWORD*)(a2 + 8) = v19;
      *(_QWORD*)(a2 + 16) = v27;
      if (v20 != nullptr) {
        v29 = 128;
        if (*(_QWORD*)(*v12 + 200LL) == 0) {
          v29 = 56;
        }
        GameRoutine_1a0a4e0(*v12 + v29, v20);
      }
    }
    else {
      *v18 = v13;
      v19 = (__int64)(v18 + 1);
    }
    *(_QWORD*)(a2 + 8) = v19;
    v30 = *(_QWORD*)(v19 - 8);
    v32 = (__int64 (**)())a2;
    v33 = v30;
    result = (*(__int64 (**)(__int64, __int64 (***)()))(*(_QWORD*)v30 + 16LL))(
        v30, &v32);
    *v37 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                                 ((v7 - (_QWORD)v8) & 0x7FFFFFFF8LL)) +
                      136LL);
  }
  return result;
}

__int64 GameHr_ba01d0(__int64 result, __int64 a2, _QWORD* a3, __int64* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (*v8)();
  int v9;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 (*v18)();
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD** v28;
  __int64 (**v29)();
  _QWORD** v30;
  __int64 v31;
  __int64 (***v32)();
  _QWORD* v33;

  v4 = *a4;
  v33 = a3;
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 328LL);
  if (v5 != 0) {
    v6 = 120;
    if (*(_BYTE*)(v5 + 90) != 0) {
      v6 = 89;
    }
    if ((*(_BYTE*)(v5 + v6) & 1) != 0) {
      v8 = *(__int64 (**)())a2;
      v7 = *(_QWORD*)(a2 + 8);
      v9 = *(_DWORD*)(a2 + 96);
      v11 = result;
      v12 = (_QWORD*)GameData_212bf68;
      v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 224, 16, 0);
      v31 = v11;
      *(_QWORD*)(v13 + 32) = 0;
      *(_QWORD*)(v13 + 40) = 0;
      *(_QWORD*)(v13 + 48) = 0;
      *(_QWORD*)(v13 + 56) = 0;
      *(_QWORD*)(v13 + 64) = 0;
      *(_QWORD*)(v13 + 72) = 0;
      *(_DWORD*)(v13 + 80) = v9;
      *(_QWORD*)(v13 + 104) = 0;
      *(_QWORD*)(v13 + 112) = 0;
      v29 = GameData_1fcbba0;
      v30 = &v33;
      v32 = &v29;
      *(_BYTE*)(v13 + 8) = 20;
      *(_QWORD*)(v13 + 88) = 0;
      *(_QWORD*)(v13 + 96) = 0;
      *(_QWORD*)(v13 + 184) = v11;
      *(_QWORD*)v13 = GameData_1fcbcc0;
      *(_QWORD*)(v13 + 176) = GameData_1fcbc30;
      strcpy((char*)(v13 + 9), "MiragePass");
      *(_QWORD*)(v13 + 208) = v13 + 176;
      *(_BYTE*)(v13 + 84) = 1;
      *(_QWORD*)(v13 + 128) = GameData_1fcbba0;
      *(_QWORD*)(v13 + 160) = v13 + 128;
      v14 = v31;
      *(_QWORD*)(v13 + 136) = v30;
      *(_QWORD*)(v13 + 144) = v14;
      v16 = *(__int64**)(a2 + 8);
      v15 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v16 >= v15) {
        v18 = *(__int64 (**)())a2;
        v19 = (__int64)v16 - *(_QWORD*)a2;
        v20 = (v19 >> 3) + 1;
        if (v20 >> 61 != 0) {
          GameRoutine_b32f30(v13);
        }
        v21 = v15 - (_QWORD)v18;
        if (v21 >> 2 > v20) {
          v20 = v21 >> 2;
        }
        if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
          v22 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v20;
        }
        if (v22 != 0) {
          if (v22 >> 61 != 0) {
            GameRoutine_60a210(v13);
          }
          v23 = v13;
          v24 = GameRoutine_651b90(*v12, 8 * v22, 16, 0);
          v13 = v23;
        }
        else {
          v24 = 0;
        }
        v25 = v24 + 8 * v22;
        v26 = v24 + v19 - 8 * (v19 >> 3);
        *(_QWORD*)(v24 + v19) = v13;
        v17 = v24 + v19 + 8;
        GameRoutine_1a0b950(v26, v18, v19);
        *(_QWORD*)a2 = v26;
        *(_QWORD*)(a2 + 8) = v17;
        *(_QWORD*)(a2 + 16) = v25;
        if (v18 != nullptr) {
          v27 = 128;
          if (*(_QWORD*)(*v12 + 200LL) == 0) {
            v27 = 56;
          }
          GameRoutine_1a0a4e0(*v12 + v27, v18);
        }
      }
      else {
        *v16 = v13;
        v17 = (__int64)(v16 + 1);
      }
      *(_QWORD*)(a2 + 8) = v17;
      v28 = *(_QWORD***)(v17 - 8);
      v29 = (__int64 (**)())a2;
      v30 = v28;
      result = ((__int64 (*)(_QWORD**, __int64 (***)()))(*v28)[2])(v28, &v29);
      *v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                                   ((v7 - (_QWORD)v8) & 0x7FFFFFFF8LL)) +
                        112LL);
    }
  }
  return result;
}

__int64 GameHr_ba09c0(__int64 result, __int64 a2, _QWORD* a3, __int64* a4)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (*v12)();
  int v13;
  __int64 v15;
  __int64 v16;
  _QWORD** v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 (*v21)();
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 (*v35)();
  int v36;
  _QWORD* v37;
  _QWORD** v38;
  unsigned __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 (*v42)();
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64 (**v54)();
  __int64 v55;
  _QWORD** v56;
  __int64 (***v57)();

  v4 = *a4;
  v53 = a3;
  v6 = result;
  v7 = *(_QWORD*)(v4 + 8);
  v8 = *(_QWORD*)(v7 + 320);
  v9 = 208;
  if (*(_BYTE*)(v8 + 176) != 0) {
    v9 = 172;
  }
  if (*(float*)(v8 + v9) > 0.0) {
    v10 = 128;
    if (*(_BYTE*)(v8 + 96) != 0) {
      v10 = 92;
    }
    if (*(int*)(v8 + v10) >= 2 &&
        (*(_BYTE*)(*(_QWORD*)(result + 8) + 320LL) & 1) == 0) {
      v12 = *(__int64 (**)())a2;
      v11 = *(_QWORD*)(a2 + 8);
      v13 = *(_DWORD*)(a2 + 96);
      v15 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 224, 16, 0);
      *(_QWORD*)(v15 + 32) = 0;
      *(_QWORD*)(v15 + 40) = 0;
      *(_QWORD*)(v15 + 48) = 0;
      *(_QWORD*)(v15 + 56) = 0;
      *(_QWORD*)(v15 + 64) = 0;
      *(_QWORD*)(v15 + 72) = 0;
      *(_DWORD*)(v15 + 80) = v13;
      *(_QWORD*)(v15 + 104) = 0;
      *(_QWORD*)(v15 + 112) = 0;
      v56 = &v53;
      v54 = GameData_1fcbfd8;
      v55 = v6;
      v57 = &v54;
      *(_QWORD*)(v15 + 88) = 0;
      *(_QWORD*)(v15 + 96) = 0;
      *(_QWORD*)(v15 + 184) = v6;
      *(_BYTE*)(v15 + 8) = 28;
      strcpy((char*)(v15 + 9), "MotionBlurPass");
      *(_BYTE*)(v15 + 84) = 1;
      *(_QWORD*)(v15 + 128) = GameData_1fcbfd8;
      *(_QWORD*)v15 = GameData_1fcc0f8;
      *(_QWORD*)(v15 + 160) = v15 + 128;
      v16 = v55;
      v17 = v56;
      *(_QWORD*)(v15 + 176) = GameData_1fcc068;
      *(_QWORD*)(v15 + 208) = v15 + 176;
      *(_QWORD*)(v15 + 136) = v16;
      *(_QWORD*)(v15 + 144) = v17;
      v19 = *(__int64**)(a2 + 8);
      v18 = *(_QWORD*)(a2 + 16);
      if ((unsigned __int64)v19 >= v18) {
        v21 = *(__int64 (**)())a2;
        v22 = (__int64)v19 - *(_QWORD*)a2;
        v23 = (v22 >> 3) + 1;
        if (v23 >> 61 != 0) {
          goto LABEL_46;
        }
        v24 = v18 - (_QWORD)v21;
        if (v24 >> 2 > v23) {
          v23 = v24 >> 2;
        }
        if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
          v25 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v25 = v23;
        }
        if (v25 != 0) {
          if (v25 >> 61 != 0) {
            goto LABEL_47;
          }
          v26 = v15;
          v27 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v25, 16, 0);
          v15 = v26;
        }
        else {
          v27 = 0;
        }
        v28 = v27 + 8 * v25;
        v29 = v27 + v22 - 8 * (v22 >> 3);
        *(_QWORD*)(v27 + v22) = v15;
        v20 = v27 + v22 + 8;
        GameRoutine_1a0b950(v29, v21, v22);
        *(_QWORD*)a2 = v29;
        *(_QWORD*)(a2 + 8) = v20;
        *(_QWORD*)(a2 + 16) = v28;
        if (v21 != nullptr) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v30 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v30, v21);
        }
      }
      else {
        *v19 = v15;
        v20 = (__int64)(v19 + 1);
      }
      *(_QWORD*)(a2 + 8) = v20;
      v31 = *(_QWORD*)(v20 - 8);
      v54 = (__int64 (**)())a2;
      v55 = v31;
      result = (*(__int64 (**)(__int64, __int64 (***)()))(*(_QWORD*)v31 +
                                                          16LL))(v31, &v54);
      *v53 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                                   ((v11 - (_QWORD)v12) & 0x7FFFFFFF8LL)) +
                        112LL);
      v7 = *(_QWORD*)(*a4 + 8);
    }
  }
  v32 = *(_QWORD*)(v7 + 288);
  v33 = 120;
  if (*(_BYTE*)(v32 + 90) != 0) {
    v33 = 89;
  }
  if ((*(_BYTE*)(v32 + v33) & 1) != 0) {
    v35 = *(__int64 (**)())a2;
    v34 = *(_QWORD*)(a2 + 8);
    v36 = *(_DWORD*)(a2 + 96);
    v37 = (_QWORD*)GameData_212bf68;
    v15 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 208, 16, 0);
    *(_QWORD*)(v15 + 32) = 0;
    *(_QWORD*)(v15 + 40) = 0;
    *(_QWORD*)(v15 + 48) = 0;
    *(_QWORD*)(v15 + 56) = 0;
    *(_QWORD*)(v15 + 64) = 0;
    *(_QWORD*)(v15 + 72) = 0;
    *(_DWORD*)(v15 + 80) = v36;
    *(_QWORD*)(v15 + 96) = 0;
    *(_QWORD*)(v15 + 104) = 0;
    v56 = &v53;
    v54 = GameData_1fcc140;
    v55 = v6;
    v57 = &v54;
    *(_QWORD*)(v15 + 88) = 0;
    *(_QWORD*)(v15 + 168) = v6;
    *(_BYTE*)(v15 + 8) = 24;
    *(_QWORD*)(v15 + 160) = GameData_1fcc1d0;
    *(_QWORD*)(v15 + 192) = v15 + 160;
    strcpy((char*)(v15 + 9), "TimeSlipPass");
    *(_BYTE*)(v15 + 84) = 1;
    *(_QWORD*)v15 = GameData_1fcc260;
    *(_QWORD*)(v15 + 112) = GameData_1fcc140;
    *(_QWORD*)(v15 + 144) = v15 + 112;
    v38 = v56;
    *(_QWORD*)(v15 + 120) = v55;
    *(_QWORD*)(v15 + 128) = v38;
    v40 = *(__int64**)(a2 + 8);
    v39 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v40 < v39) {
      *v40 = v15;
      v41 = (__int64)(v40 + 1);
    LABEL_44:
      *(_QWORD*)(a2 + 8) = v41;
      v52 = *(_QWORD*)(v41 - 8);
      v54 = (__int64 (**)())a2;
      v55 = v52;
      result = (*(__int64 (**)(__int64, __int64 (***)()))(*(_QWORD*)v52 +
                                                          16LL))(v52, &v54);
      *v53 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                                   ((v34 - (_QWORD)v35) & 0x7FFFFFFF8LL)) +
                        104LL);
      return result;
    }
    v42 = *(__int64 (**)())a2;
    v43 = (__int64)v40 - *(_QWORD*)a2;
    v44 = (v43 >> 3) + 1;
    if (v44 >> 61 == 0) {
      v45 = v39 - (_QWORD)v42;
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
        v48 = 0;
      LABEL_40:
        v49 = v48 + 8 * v46;
        v50 = v48 + v43 - 8 * (v43 >> 3);
        *(_QWORD*)(v48 + v43) = v15;
        v41 = v48 + v43 + 8;
        GameRoutine_1a0b950(v50, v42, v43);
        *(_QWORD*)a2 = v50;
        *(_QWORD*)(a2 + 8) = v41;
        *(_QWORD*)(a2 + 16) = v49;
        if (v42 != nullptr) {
          v51 = 128;
          if (*(_QWORD*)(*v37 + 200LL) == 0) {
            v51 = 56;
          }
          GameRoutine_1a0a4e0(*v37 + v51, v42);
        }
        goto LABEL_44;
      }
      if (v46 >> 61 == 0) {
        v47 = v15;
        v48 = GameRoutine_651b90(*v37, 8 * v46, 16, 0);
        v15 = v47;
        goto LABEL_40;
      }
    LABEL_47:
      GameRoutine_60a210(v15);
    }
  LABEL_46:
    GameRoutine_b32f30(v15);
  }
  return result;
}

__int64 GameHr_ba3610(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      unsigned int a5)
{
  __int64 v5;
  __int64 v8;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 (***v20)();
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 (*v27)();
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 (*v38)();
  __int64 v39;
  int v40;
  __int64 (**v41)();
  __int64 v42;
  __int64 v43;
  __int64 (***v44)();

  if (a5 == 0) {
    return result;
  }
  v5 = result;
  v8 = a5;
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a4 + 8LL) + 272LL);
  v38 = *(__int64 (**)())a2;
  v39 = *(_QWORD*)(a2 + 8);
  v40 = *(_DWORD*)(a2 + 96);
  v11 = (_QWORD*)GameData_212bf68;
  v12 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 224, 16, 0);
  v13 = GameRoutine_651b90(*v11, 40, 16, 0);
  *(_DWORD*)(v13 + 32) = a5;
  *(_QWORD*)(v13 + 16) = v10;
  *(_QWORD*)(v13 + 24) = a3;
  v37 = a3;
  *(_BYTE*)(v12 + 8) = 30;
  *(_QWORD*)v13 = GameData_1fcd758;
  *(_QWORD*)(v13 + 8) = v5;
  v14 = *v11;
  v42 = v5;
  v43 = v8;
  v44 = &v41;
  v41 = GameData_1fcd7e8;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_DWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_QWORD*)(v12 + 112) = 0;
  strcpy((char*)(v12 + 9), "LensFlareSystem");
  *(_DWORD*)(v12 + 80) = v40;
  *(_BYTE*)(v12 + 84) = 1;
  *(_QWORD*)v12 = GameData_1fcd878;
  v15 = (_QWORD*)GameRoutine_651b90(v14, 40, 16, 0);
  v16 = *(_QWORD*)(v13 + 8);
  v17 = *(_QWORD*)(v13 + 16);
  *(_QWORD*)(v12 + 160) = v15;
  *v15 = GameData_1fcd758;
  v15[1] = v16;
  v18 = *(_QWORD*)(v13 + 24);
  v19 = *(_QWORD*)(v13 + 32);
  v15[2] = v17;
  v15[3] = v18;
  v15[4] = v19;
  v20 = v44;
  if (v44 != nullptr) {
    if (v44 == &v41) {
      *(_QWORD*)(v12 + 208) = v12 + 176;
      ((void (*)(__int64 (***)()))(*v20)[3])(v20);
    }
    else {
      *(_QWORD*)(v12 + 208) = (*v44)[2]();
    }
    if (v44 == &v41) {
      v21 = 4;
      goto LABEL_11;
    }
    if (v44 != nullptr) {
      v21 = 5;
    LABEL_11:
      (*v44)[v21]();
    }
  }
  else {
    *(_QWORD*)(v12 + 208) = 0;
  }
  v22 = 128;
  if (*(_QWORD*)(*v11 + 200LL) == 0) {
    v22 = 56;
  }
  v23 = GameRoutine_1a0a4e0(*v11 + v22, v13);
  v25 = *(__int64**)(a2 + 8);
  v24 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v25 >= v24) {
    v27 = *(__int64 (**)())a2;
    v28 = (__int64)v25 - *(_QWORD*)a2;
    v29 = (v28 >> 3) + 1;
    if (v29 >> 61 != 0) {
      GameRoutine_b32f30(v23);
    }
    v30 = v24 - (_QWORD)v27;
    if (v30 >> 2 > v29) {
      v29 = v30 >> 2;
    }
    if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
      v31 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v31 = v29;
    }
    if (v31 != 0) {
      if (v31 >> 61 != 0) {
        GameRoutine_60a210(v23);
      }
      v32 = GameRoutine_651b90(*v11, 8 * v31, 16, 0);
    }
    else {
      v32 = 0;
    }
    v33 = v32 + 8 * v31;
    v34 = v32 + v28 - 8 * (v28 >> 3);
    *(_QWORD*)(v32 + v28) = v12;
    v26 = v32 + v28 + 8;
    GameRoutine_1a0b950(v34, v27, v28);
    *(_QWORD*)a2 = v34;
    *(_QWORD*)(a2 + 8) = v26;
    *(_QWORD*)(a2 + 16) = v33;
    if (v27 != nullptr) {
      v35 = 128;
      if (*(_QWORD*)(*v11 + 200LL) == 0) {
        v35 = 56;
      }
      GameRoutine_1a0a4e0(*v11 + v35, v27);
    }
  }
  else {
    *v25 = v12;
    v26 = (__int64)(v25 + 1);
  }
  *(_QWORD*)(a2 + 8) = v26;
  v36 = *(_QWORD*)(v26 - 8);
  v41 = (__int64 (**)())a2;
  v42 = v36;
  result = (*(__int64 (**)(__int64, __int64 (***)()))(*(_QWORD*)v36 + 16LL))(
      v36, &v41);
  *(_QWORD*)(v37 + 440) =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                            ((v39 - (_QWORD)v38) & 0x7FFFFFFF8LL)) +
                 112LL);
  return result;
}

__int64 GameHr_baf760(__int64 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (*v8)();
  int v9;
  __int64 v10;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 (*v19)();
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 (**v31)();
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64 (***v35)();
  __int64 v36;

  v4 = *(_QWORD*)(a3 + 80);
  v36 = a3;
  v30 = v4;
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a4 + 8LL) + 64LL);
  v6 = 120;
  if (*(_BYTE*)(v5 + 90) != 0) {
    v6 = 89;
  }
  if ((*(_BYTE*)(v5 + v6) & 1) != 0) {
    v8 = *(__int64 (**)())a2;
    v7 = *(_QWORD*)(a2 + 8);
    v9 = *(_DWORD*)(a2 + 96);
    v10 = result;
    v12 = (_QWORD*)GameData_212bf68;
    v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 256, 16, 0);
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_DWORD*)(v13 + 80) = v9;
    *(_QWORD*)(v13 + 144) = 0;
    *(_QWORD*)(v13 + 152) = 0;
    *(_QWORD*)(v13 + 128) = 0;
    *(_QWORD*)(v13 + 136) = 0;
    *(_QWORD*)(v13 + 112) = 0;
    *(_QWORD*)(v13 + 120) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    v33 = &v36;
    v34 = &v30;
    v35 = &v31;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 216) = v10;
    *(_BYTE*)(v13 + 8) = 26;
    v31 = GameData_1fcddf8;
    v32 = v10;
    strcpy((char*)(v13 + 9), "CapsuleAOPass");
    *(_BYTE*)(v13 + 84) = 1;
    *(_QWORD*)v13 = GameData_1fcdf18;
    *(_QWORD*)(v13 + 160) = GameData_1fcddf8;
    v14 = v33;
    *(_QWORD*)(v13 + 168) = v32;
    *(_QWORD*)(v13 + 176) = v14;
    v15 = v34;
    *(_QWORD*)(v13 + 208) = GameData_1fcde88;
    *(_QWORD*)(v13 + 240) = v13 + 208;
    *(_QWORD*)(v13 + 184) = v15;
    *(_QWORD*)(v13 + 192) = v13 + 160;
    v17 = *(__int64**)(a2 + 8);
    v16 = *(_QWORD*)(a2 + 16);
    if ((unsigned __int64)v17 >= v16) {
      v19 = *(__int64 (**)())a2;
      v20 = (__int64)v17 - *(_QWORD*)a2;
      v21 = (v20 >> 3) + 1;
      if (v21 >> 61 != 0) {
        GameRoutine_b32f30(v13);
      }
      v22 = v16 - (_QWORD)v19;
      if (v22 >> 2 > v21) {
        v21 = v22 >> 2;
      }
      if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
        v23 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v23 = v21;
      }
      if (v23 != 0) {
        if (v23 >> 61 != 0) {
          GameRoutine_60a210(v13);
        }
        v24 = v13;
        v25 = GameRoutine_651b90(*v12, 8 * v23, 16, 0);
        v13 = v24;
      }
      else {
        v25 = 0;
      }
      v26 = v25 + 8 * v23;
      v27 = v25 + v20 - 8 * (v20 >> 3);
      *(_QWORD*)(v25 + v20) = v13;
      v18 = v25 + v20 + 8;
      GameRoutine_1a0b950(v27, v19, v20);
      *(_QWORD*)a2 = v27;
      *(_QWORD*)(a2 + 8) = v18;
      *(_QWORD*)(a2 + 16) = v26;
      if (v19 != nullptr) {
        v28 = 128;
        if (*(_QWORD*)(*v12 + 200LL) == 0) {
          v28 = 56;
        }
        GameRoutine_1a0a4e0(*v12 + v28, v19);
      }
    }
    else {
      *v17 = v13;
      v18 = (__int64)(v17 + 1);
    }
    *(_QWORD*)(a2 + 8) = v18;
    v29 = *(_QWORD*)(v18 - 8);
    v31 = (__int64 (**)())a2;
    v32 = v29;
    result = (*(__int64 (**)(__int64, __int64 (***)()))(*(_QWORD*)v29 + 16LL))(
        v29, &v31);
    *(_QWORD*)(v36 + 80) =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 +
                              ((v7 - (_QWORD)v8) & 0x7FFFFFFF8LL)) +
                   136LL);
  }
  return result;
}

__int64 GameHr_baf9c0(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 (*v5)();
  int v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 (*v16)();
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD** v26;
  __int64 result;
  __int64 v28;
  __int64 (**v29)();
  _QWORD** v30;
  __int64* v31;
  __int64 (***v32)();
  _QWORD* v33;

  v3 = a3[10];
  v33 = a3;
  v5 = *(__int64 (**)())a2;
  v4 = *(_QWORD*)(a2 + 8);
  v8 = *(_DWORD*)(a2 + 96);
  v28 = v3;
  v9 = (_QWORD*)GameData_212bf68;
  v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 368, 16, 0);
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_DWORD*)(v10 + 80) = v8;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  v29 = GameData_1fcdf60;
  v30 = &v33;
  v32 = &v29;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 152) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  v31 = &v28;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_BYTE*)(v10 + 8) = 30;
  strcpy((char*)(v10 + 9), "DeferredLitPass");
  *(_BYTE*)(v10 + 84) = 1;
  *(_QWORD*)v10 = GameData_1fce080;
  *(_QWORD*)(v10 + 304) = v10 + 272;
  v11 = v30;
  v12 = v31;
  *(_QWORD*)(v10 + 272) = GameData_1fcdf60;
  *(_QWORD*)(v10 + 280) = v11;
  *(_QWORD*)(v10 + 288) = v12;
  *(_QWORD*)(v10 + 352) = v10 + 320;
  *(_QWORD*)(v10 + 320) = GameData_1fcdff0;
  *(_QWORD*)(v10 + 328) = a1;
  v14 = *(__int64**)(a2 + 8);
  v13 = *(_QWORD*)(a2 + 16);
  if ((unsigned __int64)v14 >= v13) {
    v16 = *(__int64 (**)())a2;
    v17 = (__int64)v14 - *(_QWORD*)a2;
    v18 = (v17 >> 3) + 1;
    if (v18 >> 61 != 0) {
      GameRoutine_b32f30(v10);
    }
    v19 = v13 - (_QWORD)v16;
    if (v19 >> 2 > v18) {
      v18 = v19 >> 2;
    }
    if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
      v20 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v20 = v18;
    }
    if (v20 != 0) {
      if (v20 >> 61 != 0) {
        GameRoutine_60a210(v10);
      }
      v21 = v10;
      v22 = GameRoutine_651b90(*v9, 8 * v20, 16, 0);
      v10 = v21;
    }
    else {
      v22 = 0;
    }
    v23 = v22 + 8 * v20;
    v24 = v22 + v17 - 8 * (v17 >> 3);
    *(_QWORD*)(v22 + v17) = v10;
    v15 = v22 + v17 + 8;
    GameRoutine_1a0b950(v24, v16, v17);
    *(_QWORD*)a2 = v24;
    *(_QWORD*)(a2 + 8) = v15;
    *(_QWORD*)(a2 + 16) = v23;
    if (v16 != nullptr) {
      v25 = 128;
      if (*(_QWORD*)(*v9 + 200LL) == 0) {
        v25 = 56;
      }
      GameRoutine_1a0a4e0(*v9 + v25, v16);
    }
  }
  else {
    *v14 = v10;
    v15 = (__int64)(v14 + 1);
  }
  *(_QWORD*)(a2 + 8) = v15;
  v26 = *(_QWORD***)(v15 - 8);
  v29 = (__int64 (**)())a2;
  v30 = v26;
  result = ((__int64 (*)(_QWORD**, __int64 (***)()))(*v26)[2])(v26, &v29);
  *v33 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + ((v4 - (_QWORD)v5) & 0x7FFFFFFF8LL)) +
               256LL);
  return result;
}

__int64 GameHr_bb0230(__int64 a1, __int64* a2, __int64 a3)
{
  int v3;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v23[2];
  __int64 v24;

  v24 = a3;
  v3 = *((_DWORD*)a2 + 24);
  v6 = (_QWORD*)GameData_212bf68;
  v7 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 192, 16, 0);
  *(_DWORD*)(v7 + 80) = v3;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_BYTE*)(v7 + 8) = 30;
  *(_BYTE*)(v7 + 84) = 1;
  *(_QWORD*)v7 = GameData_1fce620;
  *(_QWORD*)(v7 + 96) = GameData_1fce500;
  *(_QWORD*)(v7 + 128) = v7 + 96;
  *(_QWORD*)(v7 + 144) = GameData_1fce590;
  *(_QWORD*)(v7 + 152) = a1;
  strcpy((char*)(v7 + 9), "LocalShadowPass");
  *(_QWORD*)(v7 + 104) = &v24;
  v9 = (__int64*)a2[1];
  v8 = a2[2];
  *(_QWORD*)(v7 + 176) = v7 + 144;
  if ((unsigned __int64)v9 >= v8) {
    v11 = *a2;
    v12 = (__int64)v9 - *a2;
    v13 = (v12 >> 3) + 1;
    if (v13 >> 61 != 0) {
      GameRoutine_b32f30(v7);
    }
    v14 = v8 - v11;
    if (v14 >> 2 > v13) {
      v13 = v14 >> 2;
    }
    if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v13;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210(v7);
      }
      v16 = v7;
      v17 = GameRoutine_651b90(*v6, 8 * v15, 16, 0);
      v7 = v16;
    }
    else {
      v17 = 0;
    }
    v18 = v17 + 8 * v15;
    v19 = v17 + v12 - 8 * (v12 >> 3);
    *(_QWORD*)(v17 + v12) = v7;
    v10 = v17 + v12 + 8;
    GameRoutine_1a0b950(v19, v11, v12);
    *a2 = v19;
    a2[1] = v10;
    a2[2] = v18;
    if (v11 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v20 = 56;
      }
      GameRoutine_1a0a4e0(*v6 + v20, v11);
    }
  }
  else {
    *v9 = v7;
    v10 = (__int64)(v9 + 1);
  }
  a2[1] = v10;
  v21 = *(_QWORD*)(v10 - 8);
  v23[0] = a2;
  v23[1] = v21;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v21 + 16LL))(v21, v23);
}

__int64 GameHr_bbd920(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(__int64**)(result + 24);
  if (v1 != nullptr) {
    v2 = *v1;
    v3 = GameData_212bf68;
    if (*v1 != 0) {
      v4 = v1[1];
      if (v2 == v4) {
        goto LABEL_11;
      }
      do {
        v5 = *(_QWORD*)(v4 - 72);
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          GameRoutine_1a09c50(v5);
        }
        v4 -= 80;
      } while (v4 != v2);
      v6 = *v1;
      v1[1] = v2;
      v2 = v6;
      if (v6 != 0) {
      LABEL_11:
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v7 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v3 + v7, v2);
      }
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v3 + v8, v1);
  }
  return result;
}

void GameHr_bbdb10(__int64 a1, __int64 a2)
{
  *(_WORD*)a2 = 514;
  *(_BYTE*)(a2 + 2) = 2;
  *(_WORD*)(a2 + 6) = 42;
}

void GameHr_bbdc00(__int64 a1, __int64 a2)
{
  *(_WORD*)a2 = 514;
  *(_BYTE*)(a2 + 2) = 2;
  *(_WORD*)(a2 + 6) = 21;
}

void GameHr_bbdcf0(__int64 a1, __int64 a2)
{
  *(_BYTE*)(a2 + 4) = 0;
  *(_WORD*)a2 = 771;
  *(_WORD*)(a2 + 6) = 42;
}

__int64 GameHr_bbdfa0(__int64 a1, _QWORD** a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  int v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 result;
  _QWORD v13[3];
  char v14;
  int v15;

  if (*(_BYTE*)(a1 + 8) == 1) {
    v6 = *(_QWORD*)(a1 + 16);
    v15 = 0;
    v13[2] = 0x100000001LL;
    v14 = 1;
    v7 = *(_QWORD*)(v6 + 8);
    v8 = *(unsigned __int8*)(v7 + 16700);
    v9 = (__int64*)(v7 + 13304);
    v10 = (__int64*)(*(_QWORD*)(v7 + 16672) + 24LL);
    if (v8 == 0) {
      v10 = v9;
    }
    v11 = *v10;
    v13[0] = 0x1400000000LL;
    v13[1] = v11;
    *a2[1] = GameRoutine_b494f0(a3, "3DFinalDst", v13);
  }
  **a2 = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 24));
  result = GameRoutine_b5a4b0(a3, *(_QWORD*)(**(_QWORD**)(a1 + 24) + 8LL));
  (*a2)[1] = result;
  return result;
}

__int64 GameHr_bbe570(__int64 a1, _QWORD** a2, __int64 a3)
{
  _QWORD* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 result;
  __int64* v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  char v19;
  int v20;

  v4 = *a2;
  v6 = **(__int64***)(a1 + 8);
  v7 = *v6;
  v8 = v6[1];
  v9 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL);
  v10 = *(_DWORD*)(v9 + 13312);
  v11 = *(_DWORD*)(v9 + 13316);
  v12 = *(_QWORD*)(v9 + 456);
  *v4 = GameRoutine_b48f90(a3, v7);
  result = GameRoutine_b5a4b0(a3, v8);
  v4[1] = result;
  v14 = a2[1];
  if (v12 != 0) {
    v14[1] = v12;
  }
  else {
    v20 = 0;
    v16 = v10;
    v17 = v11;
    v15 = 0x1400000000LL;
    v18 = 0x100000001LL;
    v19 = 1;
    result = GameRoutine_b5a5d0(a3, "NISOutput", &v15);
    *v14 = result;
  }
  return result;
}

__int64 GameHr_bbeaf0(__int64 a1, __int64** a2, __int64 a3)
{
  __int64* v3;
  __int64 result;

  v3 = *a2;
  result = GameRoutine_b48f90(a3, ***(_QWORD***)(a1 + 8));
  *v3 = result;
  return result;
}

#pragma GCC visibility pop
