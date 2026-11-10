#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fc2898[])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c010[3];

extern _UNKNOWN* GameData_212c028;

extern __int64* GameData_212c370;

extern char** GameData_212fbf8;

extern __int64 GameData_21a6070;

extern __int64 GameData_21f3cc0;

extern __int64 GameData_2212270;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, long double);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);

__int64 GameRoutine_634d80(_QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_adc400(_QWORD);

__int64 GameRoutine_c43a90(_QWORD);

__int64 GameRoutine_c45e30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_c46080(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_c477c0(_QWORD);

__int64 GameRoutine_c4c940(_QWORD, _QWORD);

__int64 GameRoutine_d6fa80(_QWORD, _QWORD);

__int64 GameRoutine_d859a0(_QWORD);

__int64 GameRoutine_d8b9c0(_QWORD, _QWORD);

__int64 GameRoutine_d8bae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_ef82a0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameHr_aa1b50(__int64 a1, unsigned __int64 a2)
{
  _QWORD* v4;
  char* v5;
  char* v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  long double v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  char v22;
  long double v23;
  char v24;
  __int64 v25;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  _QWORD v30[2];
  char* v31;
  _QWORD v32[2];
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;

  v4 = (_QWORD*)GameData_212bf68;
  v5 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
  v30[0] = 33;
  v30[1] = 28;
  v31 = v5;
  strcpy(v5, "Contents:/Graphics/Settings/");
  if (a2 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v5);
  }
  if (a2 >= 0x17) {
    if ((a2 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (a2 | 7) + 1;
    }
    v6 = (char*)GameRoutine_651b90(*v4, v7, 16, 0);
    v28 = a2;
    v29 = v6;
    v27 = v7 | 1;
    goto LABEL_9;
  }
  LOBYTE(v27) = 2 * a2;
  v6 = (char*)&v27 + 1;
  if (a2 != 0) {
  LABEL_9:
    GameRoutine_1a0b940(v6, a1, a2);
  }
  v6[a2] = 0;
  if ((v27 & 1) != 0) {
    v8 = v29;
  }
  else {
    v8 = (char*)&v27 + 1;
  }
  if ((v27 & 1) != 0) {
    v9 = v28;
  }
  else {
    v9 = (unsigned __int64)(unsigned __int8)v27 >> 1;
  }
  v10 = (_QWORD*)GameRoutine_1a09ce0(v30, v8, v9);
  v12 = v10[1];
  v11 = v10[2];
  v32[0] = *v10;
  v32[1] = v12;
  v33 = v11;
  v10[1] = 0;
  v10[2] = 0;
  *v10 = 0;
  v13 = (__int64*)GameRoutine_1a09ce0(v32, ".set", 4);
  v16 = v13[1];
  v15 = (char*)v13[2];
  v34 = *v13;
  v35 = v16;
  v36 = v15;
  v13[1] = 0;
  v13[2] = 0;
  *v13 = 0;
  if ((v32[0] & 1) != 0 && v33 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v17 = 56;
    }
    GameRoutine_1a0a4e0(*v4 + v17, v14);
  }
  if ((v27 & 1) != 0 && v29 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v18 = 56;
    }
    GameRoutine_1a0a4e0(*v4 + v18, v14);
  }
  if ((v30[0] & 1) != 0 && v31 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v19 = 56;
    }
    GameRoutine_1a0a4e0(*v4 + v19, v14);
  }
  if ((v34 & 1) != 0) {
    v20 = v35;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v34 >> 1;
  }
  if ((v34 & 1) != 0) {
    v21 = v36;
  }
  else {
    v21 = (char*)&v34 + 1;
  }
  v22 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
      **(_QWORD**)(*GameData_212c010[0] + 13432) + 96LL))(
      *(_QWORD*)(*GameData_212c010[0] + 13432), v21, v20, 255);
  if ((v34 & 1) != 0 && v36 != nullptr) {
    v24 = v22;
    v25 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v25 = 56;
    }
    GameRoutine_1a0a4e0(*v4 + v25, v23);
    v22 = v24;
  }
  return v22 & 1;
}

__int64 GameHr_adc200(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned __int64 a5, __int64 a6, unsigned __int64 a7,
                      __int64 a8)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  *(_QWORD*)(a1 + 16) = a3;
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
  *(_DWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 200) = 0;
  *(_QWORD*)a1 = GameData_1fc2898;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 320) = a8;
  if (a5 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_20:
    GameRoutine_60a1d0(a1);
  }
  v12 = a1;
  if (a5 >= 0x17) {
    if ((a5 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (a5 | 7) + 1;
    }
    v13 = GameRoutine_651b90(GameData_2265ee0, v14, 16, 0);
    *(_QWORD*)(v12 + 336) = a5;
    *(_QWORD*)(v12 + 344) = v13;
    *(_QWORD*)(v12 + 328) = v14 | 1;
    goto LABEL_9;
  }
  v13 = a1 + 329;
  *(_BYTE*)(a1 + 328) = 2 * a5;
  if (a5 != 0) {
  LABEL_9:
    a1 = GameRoutine_1a0b940(v13, a4, a5);
  }
  *(_BYTE*)(v13 + a5) = 0;
  if (a7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_20;
  }
  if (a7 >= 0x17) {
    if ((a7 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (a7 | 7) + 1;
    }
    v15 = GameRoutine_651b90(GameData_2265ee0, v16, 16, 0);
    *(_QWORD*)(v12 + 360) = a7;
    *(_QWORD*)(v12 + 368) = v15;
    *(_QWORD*)(v12 + 352) = v16 | 1;
  }
  else {
    v15 = v12 + 353;
    *(_BYTE*)(v12 + 352) = 2 * a7;
    if (a7 == 0) {
      goto LABEL_19;
    }
  }
  GameRoutine_1a0b940(v15, a6, a7);
LABEL_19:
  *(_BYTE*)(v15 + a7) = 0;
  *(_BYTE*)(v12 + 410) = 0;
  *(_BYTE*)(v12 + 376) = 18;
  strcpy((char*)(v12 + 377), "<no_name>");
  *(_QWORD*)(v12 + 400) = 0x200000000LL;
  *(_WORD*)(v12 + 408) = 256;
  return GameRoutine_adc400(v12);
}

__int64 GameHr_c44b50(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 result;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  _BYTE* v13;
  __int64 v14;
  long double v15;
  __int64 v16;
  __int64 v17;
  long double v18;
  __int64 v19;
  __int64 v20;
  long double v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _BYTE* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int8 v29;
  _BYTE v30[15];
  _BYTE* v31;
  _BYTE v32[32];
  __int64 v33;
  unsigned __int8 v34;
  _BYTE v35[15];
  _BYTE* v36;

  if (*(_BYTE*)(a1 + 192) == 1) {
    v6 = *(unsigned __int8*)(a1 + 168);
    v7 = *(_QWORD*)(a1 + 176);
    if ((v6 & 1) == 0) {
      v7 = v6 >> 1;
    }
    if (v7 == a3) {
      v8 = (v6 & 1) != 0 ? *(_QWORD*)(a1 + 184) : a1 + 169;
      result = GameRoutine_1a09cf0(v8, a2);
      if ((_DWORD)result == 0) {
        if (*(_DWORD*)(a1 + 12) == 5) {
          return GameRoutine_c43a90(a1);
        }
        return result;
      }
    }
  }
  GameRoutine_c45e30(&v34, a2, a3, ".sky", 4);
  v10 = GameData_212c010[0];
  v11 = *(_QWORD*)(*(_QWORD*)a1 + 360LL);
  if ((v34 & 1) != 0) {
    v12 = *(_QWORD*)&v35[7];
  }
  else {
    v12 = (unsigned __int64)v34 >> 1;
  }
  if ((v34 & 1) != 0) {
    v13 = v36;
  }
  else {
    v13 = v35;
  }
  if (((*(__int64 (**)(_QWORD, _BYTE*, unsigned __int64, __int64))(
           **(_QWORD**)(*GameData_212c010[0] + 13432) + 96LL))(
           *(_QWORD*)(*GameData_212c010[0] + 13432), v13, v12, 255) &
       1) == 0) {
    result = GameHr_c44b50(a1, "Default", 7);
  LABEL_55:
    if ((v34 & 1) != 0 && v36 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v28 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v28, v21);
    }
    return result;
  }
  GameRoutine_c4c940(v11, 0);
  *(_BYTE*)(v11 + 176) = 0;
  *(_DWORD*)(v11 + 172) = 0;
  *(_WORD*)(v11 + 168) = 1;
  v14 = *(_QWORD*)(a1 + 968);
  *(_QWORD*)(a1 + 968) = 0;
  if (v14 != 0) {
    GameRoutine_c477c0(v14);
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v16 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v16, v15);
  }
  v17 = *(_QWORD*)(a1 + 976);
  *(_QWORD*)(a1 + 976) = 0;
  if (v17 != 0) {
    GameRoutine_c477c0(v17);
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v19 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v19, v18);
  }
  v33 = 0;
  v20 = GameRoutine_c46080(a1, &v34, 1, v32, 0);
  if (*(_BYTE*)(a1 + 192) == 1) {
    GameRoutine_60a060(a1 + 168, a2, a3);
  LABEL_37:
    *(_DWORD*)(a1 + 12) = 1;
    GameRoutine_c45e30(&v29, a2, a3, "_Look.sky", 9);
    if ((v29 & 1) != 0) {
      v24 = *(_QWORD*)&v30[7];
    }
    else {
      v24 = (unsigned __int64)v29 >> 1;
    }
    if ((v29 & 1) != 0) {
      v25 = v31;
    }
    else {
      v25 = v30;
    }
    result = (*(__int64 (**)(_QWORD, _BYTE*, unsigned __int64, __int64))(
        **(_QWORD**)(*v10 + 13432) + 96LL))(*(_QWORD*)(*v10 + 13432), v25, v24,
                                            255);
    if ((result & 1) != 0) {
      v33 = 0;
      result = GameRoutine_c46080(a1, &v29, 9, v32, 0);
    }
    else if (*(_QWORD*)(a1 + 752) != 0) {
      v26 = *(_QWORD*)(a1 + 768);
      *(_QWORD*)(a1 + 760) = 0;
      *(_QWORD*)(a1 + 768) = 0;
      if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        GameRoutine_1a09c50(v26);
      }
      result = GameRoutine_634d80(*(_QWORD*)(*(_QWORD*)(a1 + 752) + 8LL),
                                  *(_QWORD*)(a1 + 752));
      *(_QWORD*)(a1 + 752) = 0;
    }
    if ((v29 & 1) != 0 && v31 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v27 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v27, v21);
    }
    goto LABEL_55;
  }
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v20);
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (a3 | 7) + 1;
    }
    v22 = GameRoutine_651b90(GameData_2265ee0, v23, 16, 0);
    *(_QWORD*)(a1 + 176) = a3;
    *(_QWORD*)(a1 + 184) = v22;
    *(_QWORD*)(a1 + 168) = v23 | 1;
  }
  else {
    v22 = a1 + 169;
    *(_BYTE*)(a1 + 168) = 2 * a3;
    if (a3 == 0) {
      goto LABEL_36;
    }
  }
  GameRoutine_1a0b940(v22, a2, a3);
LABEL_36:
  *(_BYTE*)(v22 + a3) = 0;
  *(_BYTE*)(a1 + 192) = 1;
  goto LABEL_37;
}

_QWORD* GameHr_cc2aa0(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  char** v22;
  char* v23;
  __int64 v24;
  char* v25;
  char* v26;
  __int64 v27;
  long double v28;
  unsigned __int64 v29;
  _DWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  long double v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  void (*v48)(void);
  _QWORD* result;
  long double v50;
  __int64 v51;
  __int64 v52;
  _DWORD* v53;
  _QWORD v54[2];
  char* v55;
  char v56;
  _QWORD* v57;

  v6 = GameData_212c370;
  v7 = *GameData_212c370;
  v8 = *(
      _QWORD*)(v7 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v8 != 0) {
    v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 472LL))(v8);
  }
  else {
    v9 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v9 + 24) + 448LL))(
      *(_QWORD*)(v9 + 24), 1);
  v10 = *(_QWORD**)(v9 + 2240);
  *(_QWORD*)(v9 + 2240) = 0;
  if (v10 == (_QWORD*)(v9 + 2208)) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_9;
    }
    v11 = 40;
  }
  (*(void (**)(void*))(*v10 + v11))(v10);
LABEL_9:
  v12 = *v6;
  v13 = *(
      _QWORD*)(v12 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 472LL))(v13);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v14 + 24) + 456LL))(
           *(_QWORD*)(v14 + 24)) &
       1) == 0) {
    goto LABEL_72;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 16);
  }
  else {
    v15 = a1 + 1;
  }
  v16 = GameRoutine_1a09c70(v15);
  if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_89;
  }
  v17 = v16;
  v53 = a3;
  if (v16 >= 0x17) {
    if ((v16 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v16 | 7) + 1;
    }
    v18 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v19, 16, 0);
    v54[1] = v17;
    v55 = v18;
    v54[0] = v19 | 1;
  }
  else {
    LOBYTE(v54[0]) = 2 * v16;
    v18 = (char*)v54 + 1;
    if (v16 == 0) {
      goto LABEL_22;
    }
  }
  GameRoutine_1a0b940(v18, v15, v17);
LABEL_22:
  v18[v17] = 0;
  v20 = 0;
  v21 = v55;
  v22 = GameData_212fbf8;
  if ((v54[0] & 1) != 0) {
    v23 = v55;
  }
  else {
    v23 = (char*)v54 + 1;
  }
  if ((v54[0] & 1) != 0) {
    v24 = v54[1];
  }
  else {
    v24 = LOBYTE(v54[0]) >> 1;
  }
  do {
    v26 = *v22;
    v22 += 2;
    v25 = v26;
    v27 = GameRoutine_1a09c70(v26);
    if (v27 == v24) {
      if (v27 == -1) {
        GameRoutine_60a230(-1);
      }
      if ((unsigned int)GameRoutine_1a09cf0(v23, v25) == 0) {
        v29 = 0x100000000LL - v20;
        goto LABEL_34;
      }
    }
    --v20;
  } while (v20 != -32);
  v29 = 0;
LABEL_34:
  v30 = v53;
  if ((v54[0] & 1) != 0 && v21 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v31 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v31, v28);
  }
  v6 = GameData_212c370;
  if (HIDWORD(v29) != 0) {
    if (GameData_2212270 != 0) {
      v32 = *(_QWORD*)(GameData_2212270 + 416);
      do {
        v33 = v32;
        v32 = *(_QWORD*)(v32 + 40);
      } while (v32 != 0);
    }
    else {
      v33 = 0;
    }
    if ((*(_BYTE*)a2 & 1) != 0) {
      v34 = *(_QWORD*)(a2 + 16);
    }
    else {
      v34 = a2 + 1;
    }
    v16 = GameRoutine_1a09c70(v34);
    if (v16 < 0xFFFFFFFFFFFFFFF7LL) {
      v35 = v16;
      if (v16 >= 0x17) {
        if ((v16 | 7) == 0x17) {
          v37 = 26;
        }
        else {
          v37 = (v16 | 7) + 1;
        }
        v30 = v53;
        v36 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v37, 16, 0);
        v54[1] = v35;
        v55 = v36;
        v54[0] = v37 | 1;
      }
      else {
        LOBYTE(v54[0]) = 2 * v16;
        v36 = (char*)v54 + 1;
        if (v16 == 0) {
        LABEL_57:
          v36[v35] = 0;
          LODWORD(v57) = *v30;
          GameRoutine_ef82a0(v33, (unsigned int)v29, v54, &v57);
          if ((v54[0] & 1) != 0 && v55 != nullptr) {
            v39 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v39 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v39, v38);
          }
          v40 = GameData_2212270;
          strcpy((char*)v54 + 1, "Facility");
          LOBYTE(v54[0]) = 16;
          if (GameData_2212270 != 0) {
            GameRoutine_d8b9c0(GameData_2212270 + 424, v54);
            v41 = *(_QWORD*)(*(_QWORD*)(v40 + 416) + 40LL);
            if (v41 != 0) {
              v42 = 0;
              do {
                v41 = *(_QWORD*)(v41 + 40);
                ++v42;
              } while (v41 != 0);
              v57 = v54;
              *(_DWORD*)(GameRoutine_d8bae0(v40 + 424, v54, GameData_212c028,
                                            &v57, &v56) +
                         56) = v42;
            }
          }
          if ((v54[0] & 1) != 0 && v55 != nullptr) {
            v43 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v43 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v43, v38);
          }
          goto LABEL_72;
        }
      }
      GameRoutine_1a0b940(v36, v34, v35);
      goto LABEL_57;
    }
  LABEL_89:
    GameRoutine_60a1d0(v16);
  }
LABEL_72:
  strcpy((char*)v54 + 1, "Facility");
  LOBYTE(v54[0]) = 16;
  v44 = GameRoutine_d859a0(v54);
  v45 = *v6;
  v46 = *(
      _QWORD*)(v45 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v46 != 0) {
    v47 = (*(__int64 (**)(__int64))(*(_QWORD*)v46 + 472LL))(v46);
  }
  else {
    v47 = 0;
  }
  v48 = *(void (**)(void))(**(_QWORD**)(v47 + 24) + 448LL);
  if ((v44 & 1) == 0) {
    v48();
    result = *(_QWORD**)(v47 + 2240);
    *(_QWORD*)(v47 + 2240) = 0;
    if (result == (_QWORD*)(v47 + 2208)) {
      v51 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_82;
      }
      v51 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(void*))(*result + v51))(result);
    goto LABEL_82;
  }
  result = (_QWORD*)((__int64 (*)(void))v48)();
LABEL_82:
  if ((v54[0] & 1) != 0 && v55 != nullptr) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v52 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v52, v50);
  }
  return result;
}

__int64 GameHr_ccb620(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 result;
  long double v14;
  __int64 v15;
  _QWORD v16[2];
  char* v17;

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
  (*(void (**)(void*))(*v5 + v6))(v5);
LABEL_9:
  v7 = GameData_21f3cc0;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = GameRoutine_1a09c70(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v9);
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)GameRoutine_651b90(GameData_2265ee0, v12, 16, 0);
    v16[1] = v10;
    v17 = v11;
    v16[0] = v12 | 1;
  }
  else {
    LOBYTE(v16[0]) = 2 * v9;
    v11 = (char*)v16 + 1;
    if (v9 == 0) {
      goto LABEL_21;
    }
  }
  GameRoutine_1a0b940(v11, v8, v10);
LABEL_21:
  v11[v10] = 0;
  result = GameRoutine_d6fa80(v7, v16);
  if ((v16[0] & 1) != 0 && v17 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v15 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, v14);
  }
  return result;
}

#pragma GCC visibility pop
