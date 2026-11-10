#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fc50d8[])();

extern __int64 GameData_212bf68;

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_5fb840(_QWORD, _QWORD);

__int64 GameRoutine_5fb900(_QWORD);

__int64 GameRoutine_5fba80(_QWORD, _QWORD);

__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6b7aa0(_QWORD);

__int64 GameRoutine_7fb7c0(_QWORD);

char** GameRoutine_ad5a50(char** result, __int64, __int64, unsigned __int64);

_QWORD* GameRoutine_ad5bc0(_QWORD* result, __int64, __int64*, unsigned __int64);

__int64 GameRoutine_adc400(__int64, __int64, __int64, __int64, __int64, _QWORD*,
                           __int64*, __int64);

__int64 GameRoutine_adf390(_QWORD);

void __attribute__((noreturn)) GameRoutine_adf500(_QWORD);

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

#pragma GCC visibility pop
