#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fc50d8[])();

extern __int64 (*GameData_1fcd758[])();

extern __int64 (*GameData_1fcd7e8[])();

extern __int64 (*GameData_1fcd878[])();

extern __int64 GameData_212bf68;

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

#pragma GCC visibility pop
