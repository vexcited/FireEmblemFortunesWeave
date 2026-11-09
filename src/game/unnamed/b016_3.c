#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_2017dd0[3])();

extern __int64 (*GameData_2018568[])();

extern __int64 (*GameData_20188c8[])();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c868;

extern __int64* GameData_212c878[6];

extern __int64* GameData_212c880[5];

extern __int64* GameData_212c930;

extern __int64* GameData_212c9f8[136];

extern __int64* GameData_212ce98[2];

extern __int64* GameData_212cfd0[8];

extern __int64 GameData_21306a0[7];

extern __int64 GameData_21c99c8;

extern __int64 GameData_21c9bd0;

extern __int64 GameData_21ca2f8;

extern __int64 GameData_21ca300;

extern __int64 GameData_21ca310;

extern __int64 GameData_21caab0;

extern __int64 GameData_21cd158;

extern __int64 GameData_21d9188;

extern int GameData_21d9728;

extern __int64 GameData_2240090;

extern __int64 GameData_2265ee0;

__int64 GameRoutine_11f0040(__int64 result, int);

void __attribute__((noreturn)) GameRoutine_11f1220(_QWORD);

__int64 GameRoutine_11f2730(__int64 result, __int64, int);

__int64 GameRoutine_11f2c20(__int64, __int64, char);

__int64 GameRoutine_11f51f0(__int64, int, int);

__int64 GameRoutine_11fd700(_QWORD, _QWORD, _QWORD, _QWORD);

bool GameRoutine_11fdbc0(__int64*, __int64);

__int64 GameRoutine_11ff880(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_11ff9b0(__int64, __int64*, __int64, __int64);

void __attribute__((noreturn)) GameRoutine_1200020(void);

__int64 GameRoutine_12077a0(_QWORD);

__int64 GameRoutine_1207aa0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1218070(void);

__int64 GameRoutine_1274f90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1275160(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6c51e0(_QWORD);

__int64 GameRoutine_6c6da0(_QWORD);

__int64 GameRoutine_6c6ec0(_QWORD);

__int64 GameRoutine_6c8300(_QWORD, _QWORD);

__int64 GameRoutine_6c8530(_QWORD);

__int64 GameRoutine_6c90c0(_QWORD);

__int64 GameRoutine_6c9cf0(_QWORD, _QWORD);

__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_6e3e20(_QWORD);

__int64 GameRoutine_6ea8c0(_QWORD);

__int64 GameRoutine_70f780(_QWORD, _QWORD);

__int64 GameRoutine_747a00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_74cd60(_QWORD);

__int64 GameRoutine_752b40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);

__int64 GameRoutine_7536a0(_QWORD);

__int64 GameRoutine_7fb7c0(void);

__int64 GameRoutine_828f50(_QWORD, _QWORD);

__int64 GameRoutine_84cb50(_QWORD, _QWORD);

__int64 GameRoutine_84cc00(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_84cf20(_QWORD, _QWORD, _QWORD);

__int64 GameHr_11f0320(__int64 a1, unsigned int a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int16 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;

  v3 = a1;
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c9f8[0] + 64) +
                  8LL * *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + a2 + 2018LL));
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 8LL) - **(_QWORD**)(v4 + 40);
  if ((int)(v5 >> 3) >= 1) {
    v6 = (v5 >> 3) & 0x7FFFFFFF;
    v7 = 0;
    v8 = 4 * a2 - 4;
    do {
      v9 = **(_QWORD**)(v4 + 40);
      if (v7 >= (*(_QWORD*)(*(_QWORD*)(v4 + 40) + 8LL) - v9) >> 3) {
        GameRoutine_11f1220(a1);
      }
      v10 = *(_QWORD*)(v9 + 8 * v7);
      if (*(_BYTE*)(v10 + 33) == 0) {
        return GameRoutine_11f0040(v3, a2);
      }
      v11 = *(_QWORD*)(v3 + 8);
      v12 = *(unsigned __int8*)(v10 + 32);
      if (*(_BYTE*)(v10 + 32) != 0) {
        if (v12 == 255) {
          goto LABEL_13;
        }
        if (v12 == 254) {
          if (*(_BYTE*)(v11 + 1982) == 0) {
            goto LABEL_13;
          }
        }
        else if (*(unsigned __int8*)(v11 + 1982) == (char)v12) {
          goto LABEL_13;
        }
      }
      else if (*(_BYTE*)(v11 + 1982) != 0) {
      LABEL_13:
        v13 = *(__int16*)(v10 + 42);
        v14 = v11 + 2022;
        v15 = v13 + 7;
        v16 = v14 + 4LL * (v8 - v13);
        if ((v15 & 0xFFFC) != 0) {
          v17 = v10 + 40;
        }
        else {
          v17 = v16;
        }
        v18 = *(__int16*)(v10 + 50);
        v19 = v14 + 4LL * (v8 - v18);
        if ((((_WORD)v18 + 7) & 0xFFFC) != 0) {
          v20 = v10 + 48;
        }
        else {
          v20 = v19;
        }
        if (*(__int16*)(v17 + 2) != -3 && *(_BYTE*)(v10 + 33) == 2 &&
            *(unsigned __int16*)(v20 + 2) != 65533) {
          v21 = *(unsigned __int8*)(v10 + 34);
          if (v21 <= 2) {
            a1 = ((__int64 (*)(__int64))GameData_2017dd0[v21])(v3);
            if ((a1 & 1) != 0) {
              *(_DWORD*)(v3 + 2252) |= 1u;
              *(_DWORD*)(v3 + 2256) = *(char*)(v10 + 56);
            }
          }
        }
      }
      ++v7;
    } while (v6 != v7);
  }
  return GameRoutine_11f0040(v3, a2);
}

__int64 GameHr_11f2880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 result;
  unsigned int v11;
  char v12;
  __int64 v13;
  _BYTE* v14;
  unsigned int v15;
  int v16;
  char v17[4];
  char v18[4];

  v5 = a2 + 8LL * *(int*)(a3 + 20);
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)(v5 + 828));
  if ((*(_BYTE*)(v6 + 336) & 0x40) != 0) {
    v11 = *(unsigned __int8*)(v6 + 88);
    v12 = *(_BYTE*)(v5 + 831);
    v17[0] = 2;
    result = GameRoutine_6dd190(a2, v17, 1);
    v13 = *(unsigned int*)(a3 + 12332);
    if ((_DWORD)v13 != 0) {
      v14 = (_BYTE*)(a3 + 49);
      v15 = v11 >> ((v12 & 8) != 0);
      v16 = (int)result / 3;
      do {
        if (*v14 != 0) {
          result = GameRoutine_6ea8c0(v14);
          if (result != 0) {
            result = GameRoutine_11f2730(a1, result, v16 + v15);
          }
        }
        v14 += 12;
        --v13;
      } while (v13 != 0);
    }
  }
  else {
    v7 = *(_QWORD*)a3;
    v8 = *(unsigned __int8*)(v6 + 88) >> ((*(_BYTE*)(v5 + 831) & 8) != 0);
    v18[0] = 2;
    v9 = GameRoutine_6dd190(a2, v18, 1);
    return GameRoutine_11f2730(a1, v7, v9 / 3 + v8);
  }
  return result;
}

__int64 GameHr_11f29e0(__int64 result, __int64 a2, __int64* a3)
{
  __int64 v3;
  _BYTE* v4;
  __int64 v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  _BYTE v13[4];

  v3 = *((unsigned int*)a3 + 3081);
  if ((_DWORD)v3 != 0) {
    v4 = (char*)a3 + 41;
    v6 = result;
    v7 = GameData_212c880[0];
    do {
      if (*v4 == 0) {
        goto LABEL_5;
      }
      result = GameRoutine_6ea8c0(v4);
      if (result == 0) {
        goto LABEL_5;
      }
      v9 = *a3;
      v10 = result;
      if (*a3 != 0) {
        v9 = *(_WORD*)(v9 + 16) & 0xFFF;
      }
      v11 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * v9);
      if (*(_WORD*)(v11 + 256) == 0) {
        goto LABEL_3;
      }
      v8 = **(__int16**)(v11 + 264);
      if (v8 < 1) {
        goto LABEL_3;
      }
      v12 = *(unsigned __int8*)(v11 + 250);
      if (v12 == 10) {
        v13[0] = 0;
        v8 = (int)(GameRoutine_6dd190(result, v13, 1) * v8 + 99) / 100;
        goto LABEL_4;
      }
      if (v12 != 9) {
      LABEL_3:
        v8 = 0;
      }
    LABEL_4:
      result = GameRoutine_11f2730(v6, v10, v8);
    LABEL_5:
      v4 += 12;
      --v3;
    } while (v3 != 0);
  }
  return result;
}

__int64 GameHr_11f9440(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  int v8;
  __int64 result;
  __int64 v10;
  int v11;
  char v12;
  _BYTE* v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  int v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  char* v28;
  _QWORD* v29;
  int v30;
  int v31;
  _QWORD* v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  char* v41;
  _QWORD* v42;
  int v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  _QWORD* v54;
  int v55;
  int v56;
  int v57;
  unsigned __int8 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  char* v68;
  _QWORD* v69;
  int v70;
  int v71;
  int v72;
  _QWORD v73[4];
  _QWORD* v74;
  _BYTE v75[4];
  int v76;
  int v77;
  int v78;

  v4 = *(_QWORD*)(a1 + 8);
  if ((GameRoutine_6c90c0(v4) & 1) == 0 ||
      (GameRoutine_11f2c20(v4, 0, 0) & 1) == 0) {
    return 0;
  }
  v8 = *(unsigned __int16*)(a3 + 2);
  if (v8 == 65534) {
    v8 = -1;
    goto LABEL_9;
  }
  if (v8 == 0xFFFF) {
    v8 = 100;
    goto LABEL_9;
  }
  result = 0;
  if ((v8 & 0x8000) == 0 && *(_BYTE*)a3 == 0) {
  LABEL_9:
    v10 = *(_QWORD*)(a1 + 8);
    v11 = *(__int16*)(a4 + 2);
    if (v11 == -1) {
      LOBYTE(v11) = *(_BYTE*)(v10 + 584);
      v12 = *(_BYTE*)(v10 + 585);
    }
    else {
      result = 0;
      if (v11 < 0) {
        return result;
      }
      if (*(_BYTE*)a4 != 1) {
        return result;
      }
      v12 = HIBYTE(*(_WORD*)(a4 + 2));
      v13 = (_BYTE*)*GameData_212ce98[0];
      if (*GameData_212ce98[0] != 0) {
        result = 0;
        if ((unsigned __int8)v13[26] <=
                (unsigned int)(unsigned __int8)(v11 - v13[24]) ||
            (unsigned __int8)v13[27] <=
                (unsigned int)(unsigned __int8)(BYTE1(v11) - v13[25])) {
          return result;
        }
      }
    }
    v14 = (char)v11;
    v15 = v12;
    if (v8 < 0) {
      v17 = 100;
    }
    else {
      v16 = *(_QWORD*)(a1 + 8);
      LOBYTE(v73[0]) = 10;
      v17 = (unsigned int)((int)(GameRoutine_6dd190(v16, v73, 1) * v8) / 100);
      v10 = *(_QWORD*)(a1 + 8);
    }
    v76 = 8421376;
    GameRoutine_1275160(GameData_2240090, v10, v14, v15, v17, &v76);
    v18 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 440LL);
    v19 = (__int64*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
    if (v18 != 0) {
      v20 = (__int64)&v19[3 * *(unsigned __int8*)(v18 + 16)];
    }
    else {
      v20 = *(_QWORD*)(GameData_21ca310 + 56) + 556216LL;
    }
    v21 = *(unsigned __int8*)(v20 + 16);
    if (v21 == 3 || v21 == 0) {
      v23 = *v19;
      if (*v19 != 0) {
        while (1) {
          v25 = *(_QWORD*)(a1 + 8);
          if (v25 != 0 && *(unsigned __int8*)(v23 + 2088) ==
                              *(unsigned __int8*)(v25 + 2088) ||
              (GameRoutine_1218070() & 1) == 0) {
            goto LABEL_33;
          }
          v27 = *(char**)(v23 + 600);
          v28 = *(char**)(v23 + 608);
          v29 = v73;
          v75[0] = 0;
          v73[0] = GameData_2018568;
          v73[1] = v75;
          v74 = v73;
          if (v27 == v28) {
            break;
          }
          v30 = *(char*)(v23 + 584);
          v31 = *(char*)(v23 + 585);
          do {
            v32 = v74;
            v33 = *v27 + v30;
            v77 = v27[1] + v31;
            v78 = v33;
            if (v74 == nullptr) {
            LABEL_114:
              GameRoutine_60a310(v32);
            }
            (*(void (**)(_QWORD*, int*, int*))(*v74 + 48LL))(v74, &v78, &v77);
            v27 += 4;
          } while (v27 != v28);
          v29 = v74;
          if (v74 == v73) {
            break;
          }
          if (v74 != nullptr) {
            v24 = 40;
            goto LABEL_31;
          }
        LABEL_32:
          if ((v75[0] & 1) != 0) {
            return 1;
          }
        LABEL_33:
          v23 = *(_QWORD*)(v23 + 432);
          if (v23 == 0) {
            v18 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 440LL);
            goto LABEL_45;
          }
        }
        v24 = 32;
      LABEL_31:
        (*(void (**)(_QWORD*, __int64))(*v29 + v24))(v29, v26);
        goto LABEL_32;
      }
    }
  LABEL_45:
    v34 = *(_QWORD*)(GameData_21ca310 + 56);
    if (v18 != 0) {
      v35 = v34 + 24LL * *(unsigned __int8*)(v18 + 16) + 556000;
    }
    else {
      v35 = v34 + 556216;
    }
    if (*(_BYTE*)(v35 + 16) == 1) {
      v36 = *(_QWORD*)(v34 + 556024);
      if (v36 != 0) {
        while (1) {
          v38 = *(_QWORD*)(a1 + 8);
          if ((v38 == 0 || *(unsigned __int8*)(v36 + 2088) !=
                               *(unsigned __int8*)(v38 + 2088)) &&
              (GameRoutine_1218070() & 1) != 0) {
            break;
          }
        LABEL_54:
          v36 = *(_QWORD*)(v36 + 432);
          if (v36 == 0) {
            v18 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 440LL);
            goto LABEL_66;
          }
        }
        v40 = *(char**)(v36 + 600);
        v41 = *(char**)(v36 + 608);
        v42 = v73;
        v75[0] = 0;
        v73[0] = GameData_2018568;
        v73[1] = v75;
        v74 = v73;
        if (v40 == v41) {
          goto LABEL_51;
        }
        v43 = *(char*)(v36 + 584);
        v44 = *(char*)(v36 + 585);
        do {
          v32 = v74;
          v45 = *v40 + v43;
          v77 = v40[1] + v44;
          v78 = v45;
          if (v74 == nullptr) {
            goto LABEL_114;
          }
          (*(void (**)(_QWORD*, int*, int*))(*v74 + 48LL))(v74, &v78, &v77);
          v40 += 4;
        } while (v40 != v41);
        v42 = v74;
        if (v74 == v73) {
        LABEL_51:
          v37 = 32;
        }
        else {
          if (v74 == nullptr) {
          LABEL_53:
            if ((v75[0] & 1) != 0) {
              return 1;
            }
            goto LABEL_54;
          }
          v37 = 40;
        }
        (*(void (**)(_QWORD*, __int64))(*v42 + v37))(v42, v39);
        goto LABEL_53;
      }
    }
  LABEL_66:
    v46 = *(_QWORD*)(GameData_21ca310 + 56);
    if (v18 != 0) {
      v47 = v46 + 24LL * *(unsigned __int8*)(v18 + 16) + 556000;
    }
    else {
      v47 = v46 + 556216;
    }
    if (*(_BYTE*)(v47 + 16) == 2) {
      v48 = *(_QWORD*)(v46 + 556048);
      if (v48 != 0) {
        while (1) {
          v50 = *(_QWORD*)(a1 + 8);
          if ((v50 == 0 || *(unsigned __int8*)(v48 + 2088) !=
                               *(unsigned __int8*)(v50 + 2088)) &&
              (GameRoutine_1218070() & 1) != 0) {
            break;
          }
        LABEL_75:
          v48 = *(_QWORD*)(v48 + 432);
          if (v48 == 0) {
            v18 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 440LL);
            goto LABEL_87;
          }
        }
        v52 = *(char**)(v48 + 600);
        v53 = *(char**)(v48 + 608);
        v54 = v73;
        v75[0] = 0;
        v73[0] = GameData_2018568;
        v73[1] = v75;
        v74 = v73;
        if (v52 == v53) {
          goto LABEL_72;
        }
        v55 = *(char*)(v48 + 584);
        v56 = *(char*)(v48 + 585);
        do {
          v32 = v74;
          v57 = *v52 + v55;
          v77 = v52[1] + v56;
          v78 = v57;
          if (v74 == nullptr) {
            goto LABEL_114;
          }
          (*(void (**)(_QWORD*, int*, int*))(*v74 + 48LL))(v74, &v78, &v77);
          v52 += 4;
        } while (v52 != v53);
        v54 = v74;
        if (v74 == v73) {
        LABEL_72:
          v49 = 32;
        }
        else {
          if (v74 == nullptr) {
          LABEL_74:
            if ((v75[0] & 1) != 0) {
              return 1;
            }
            goto LABEL_75;
          }
          v49 = 40;
        }
        (*(void (**)(_QWORD*, __int64))(*v54 + v49))(v54, v51);
        goto LABEL_74;
      }
    }
  LABEL_87:
    if (v18 != 0) {
      v58 = *(_BYTE*)(v18 + 16);
      v59 = *(_QWORD*)(GameData_21ca310 + 56);
      v60 = v59 + 24LL * v58 + 556000;
    }
    else {
      v59 = *(_QWORD*)(GameData_21ca310 + 56);
      v60 = v59 + 556216;
    }
    v61 = *(unsigned __int8*)(v60 + 16);
    if (v61 == 3 || v61 == 0) {
      v63 = *(_QWORD*)(v59 + 556072);
      if (v63 != 0) {
        while (1) {
          v65 = *(_QWORD*)(a1 + 8);
          if ((v65 == 0 || *(unsigned __int8*)(v63 + 2088) !=
                               *(unsigned __int8*)(v65 + 2088)) &&
              (GameRoutine_1218070() & 1) != 0) {
            break;
          }
        LABEL_100:
          v63 = *(_QWORD*)(v63 + 432);
          if (v63 == 0) {
            return 0;
          }
        }
        v67 = *(char**)(v63 + 600);
        v68 = *(char**)(v63 + 608);
        v69 = v73;
        v75[0] = 0;
        v73[0] = GameData_2018568;
        v73[1] = v75;
        v74 = v73;
        if (v67 == v68) {
          goto LABEL_97;
        }
        v70 = *(char*)(v63 + 584);
        v71 = *(char*)(v63 + 585);
        do {
          v32 = v74;
          v72 = *v67 + v70;
          v77 = v67[1] + v71;
          v78 = v72;
          if (v74 == nullptr) {
            goto LABEL_114;
          }
          (*(void (**)(_QWORD*, int*, int*))(*v74 + 48LL))(v74, &v78, &v77);
          v67 += 4;
        } while (v67 != v68);
        v69 = v74;
        if (v74 == v73) {
        LABEL_97:
          v64 = 32;
        }
        else {
          if (v74 == nullptr) {
          LABEL_99:
            if ((v75[0] & 1) != 0) {
              return 1;
            }
            goto LABEL_100;
          }
          v64 = 40;
        }
        (*(void (**)(_QWORD*, __int64))(*v69 + v64))(v69, v66);
        goto LABEL_99;
      }
    }
    return 0;
  }
  return result;
}

bool GameHr_11fd400(int* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 (**v3)();
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int8 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 i;
  __int64 (**v15)();
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 (***v21)();
  char* v22;
  char* v23;
  __int64 v24;
  unsigned int v25;
  __int64 (**v26)();
  int v27;
  int v28;
  int v29;
  __int64 (**v31)();
  __int64 (**v32)();
  __int64 v34;
  _QWORD v35[3];
  int v36;
  __int16 v37;
  char v38;
  int v39;
  int v40;
  __int64 v41;
  _QWORD* v42;
  int v43;
  int v44;

  v2 = 0;
  v37 = 0;
  v38 = 0;
  *a2 = 0;
  a2[1] = -1;
  a2[4] = 0;
  a2[5] = -1;
  v3 = GameData_20188c8;
  v35[0] = 0xFFFFFFFF00000000LL;
  v35[1] = 0;
  v35[2] = 0xFFFFFFFF00000000LL;
  v36 = -1;
  a2[2] = 0x7FFFFFFF;
  a2[3] = 0xFFFFFFFFLL;
  v4 = *a1;
  v5 = *((_QWORD*)a1 + 1);
  v6 = *((_QWORD*)a1 + 2);
  v32 = (__int64 (**)())(a1 + 6);
  v7 = a1[32];
  v8 = a1[33];
  v31 = (__int64 (**)())(a1 + 36);
  v41 = *((_QWORD*)a1 + 3);
  v42 = a2;
  v39 = v8;
  v40 = v7;
  while (1) {
    v9 = *(_QWORD*)(v41 + 440);
    if (v9 != 0) {
      v10 = *(_BYTE*)(v9 + 16);
      v11 = *(_QWORD*)(GameData_21ca310 + 56);
      v12 = v11 + 24LL * v10 + 556000;
    }
    else {
      v11 = *(_QWORD*)(GameData_21ca310 + 56);
      v12 = v11 + 556216;
    }
    v13 = *(unsigned __int8*)(v12 + 16);
    if (v2 != v13) {
      if ((_DWORD)v13 == 0) {
        break;
      }
      if (v2 != 0 || (_DWORD)v13 != 3) {
        goto LABEL_12;
      }
    }
  LABEL_2:
    if (++v2 == 4) {
      return *v42 != 0;
    }
  }
  if (v2 != 3) {
  LABEL_12:
    for (i = *(_QWORD*)(v11 + 24 * v2 + 556000);; i = *(_QWORD*)(v34 + 432)) {
      v34 = i;
      if (i == 0) {
        break;
      }
      v16 = v41;
      if ((GameRoutine_7536a0(i) & 1) != 0 &&
          (GameRoutine_6c9cf0(v16, i) & 1) != 0) {
        v17 = *(_QWORD*)(v16 + 440);
        if (v17 == 0 || *(_BYTE*)(v17 + 16) != 0 ||
            (*(_BYTE*)(*(_QWORD*)(GameData_21d9188 + 16) + 2250LL) & 0x20) ==
                0) {
          goto LABEL_25;
        }
        v18 = GameData_21caab0;
        if (GameData_21caab0 != 0) {
          v18 = *(_QWORD*)(GameData_21caab0 + 96);
        }
        v19 = *(_QWORD*)(v16 + 392) != v18;
        v44 = GameData_21d9728 & 0xFFF;
        if (v19 != (GameRoutine_84cb50(i + 1744, &v44) & 1)) {
        LABEL_25:
          if ((GameRoutine_11fd700(v4, v5, v6, i) & 1) != 0) {
            v20 = v34;
            *((_QWORD*)a1 + 4) = v34;
            v21 = (__int64 (***)())GameRoutine_651b90(GameData_2265ee0, 72, 16,
                                                      0);
            *v21 = v3;
            v21[1] = v31;
            v21[2] = (__int64 (**)())&v34;
            v21[3] = (__int64 (**)())&v40;
            v21[4] = (__int64 (**)())&v39;
            v21[5] = v32;
            v21[6] = (__int64 (**)())v35;
            v21[7] = (__int64 (**)())&v41;
            v21[8] = (__int64 (**)())&v42;
            v22 = *(char**)(v20 + 600);
            v23 = *(char**)(v20 + 608);
            if (v22 == v23) {
              v15 = v3;
            }
            else {
              v24 = v5;
              v25 = v4;
              v26 = v3;
              v27 = *(char*)(v20 + 584);
              v28 = *(char*)(v20 + 585);
              do {
                v29 = *v22 + v27;
                v43 = v22[1] + v28;
                v44 = v29;
                ((void (*)(__int64 (***)(), int*, int*))(*v21)[6])(v21, &v44,
                                                                   &v43);
                v22 += 4;
              } while (v22 != v23);
              v15 = *v21;
              v3 = v26;
              v4 = v25;
              v5 = v24;
            }
            ((void (*)(__int64 (***)()))v15[5])(v21);
          }
        }
      }
    }
    goto LABEL_2;
  }
  return *v42 != 0;
}

__int64 GameHr_11fd700(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64** v14;
  __int64* v15;
  __int64* v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;

  result = 1;
  switch (a1) {
  case 3:
    v21 = GameData_21caab0;
    if (GameData_21caab0 != 0) {
      v21 = *(_QWORD*)(GameData_21caab0 + 96);
    }
    return *(_QWORD*)(a4 + 392) == v21;
  case 4:
  case 23:
    v7 = *(__int16*)(a2 + 2);
    result = 0;
    if (v7 < 0 || *(_BYTE*)a2 != 2) {
      return result;
    }
    return *(_QWORD*)(a4 + 392) ==
           *(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v7);
  case 5:
  case 24:
    v8 = *(__int16*)(a2 + 2);
    result = 0;
    if (v8 < 0 || *(_BYTE*)a2 != 2) {
      return result;
    }
    return *(_QWORD*)(a4 + 392) !=
           *(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v8);
  case 6:
    v22 = *(__int16*)(a2 + 2);
    result = 0;
    if (v22 < 0 || *(_BYTE*)a2 != 3) {
      return result;
    }
    v23 = *(_QWORD*)(*(_QWORD*)(*GameData_212c868 + 64) + 8 * v22);
    return GameRoutine_6c8530(a4) == v23;
  case 7:
    result = 0;
    if (*(__int16*)(a2 + 2) < 0 || *(_BYTE*)a2 != 7) {
      return result;
    }
    v24 = *(_QWORD*)(a4 + 440);
    if (v24 != 0) {
      v25 = *(unsigned __int8*)(v24 + 16);
    }
    else {
      v25 = 9;
    }
    return v25 == (unsigned __int8)*(_WORD*)(a2 + 2);
  case 8:
    result = 0;
    if (*(__int16*)(a2 + 2) < 0 || *(_BYTE*)a2 != 0) {
      return result;
    }
    return *(unsigned __int16*)(a2 + 2) == *(unsigned __int8*)(a4 + 1981);
  case 9:
    v10 = *(__int16*)(a2 + 2);
    result = 0;
    if (v10 < 0 || *(_BYTE*)a2 != 2) {
      return result;
    }
    v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v10) +
                     336LL);
    if (v11 == 0) {
      return GameRoutine_6c8300(a4, 0) == v11;
    }
    v13 = (__int64*)(v11 + 80);
    v12 = *(_QWORD*)(v11 + 80);
    if (v12 == 0) {
      return GameRoutine_6c8300(a4, 0) == v11;
    }
    break;
  case 14:
    v7 = *(__int16*)(a3 + 2);
    result = 0;
    if (v7 < 0 || *(_BYTE*)a3 != 2) {
      return result;
    }
    return *(_QWORD*)(a4 + 392) ==
           *(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v7);
  case 15:
    v8 = *(__int16*)(a3 + 2);
    result = 0;
    if ((v8 & 0x8000000000000000LL) == 0 && *(_BYTE*)a3 == 2) {
      return *(_QWORD*)(a4 + 392) !=
             *(_QWORD*)(*(_QWORD*)(GameData_21c99c8 + 64) + 8 * v8);
    }
    return result;
  default:
    return result;
  }
  while (1) {
    v14 = *(__int64***)(v11 + 24);
    v16 = *v14;
    v15 = v14[1];
    if (v15 != *v14) {
      break;
    }
  LABEL_22:
    v11 = v12;
    v13 = (__int64*)(v12 + 80);
    v12 = *(_QWORD*)(v12 + 80);
    if (v12 == 0) {
      return GameRoutine_6c8300(a4, 0) == v11;
    }
  }
  v17 = 0;
  do {
    v18 = *v16;
    v19 = v16[1];
    if (v19 == *v16) {
    LABEL_25:
      ++v17;
    }
    else {
      while (1) {
        if (*(_QWORD*)v18 != 0) {
          v20 = GameData_21caab0;
          if (GameData_21caab0 != 0) {
            LOBYTE(result) = GameRoutine_828f50(GameData_21caab0 + 40, v18);
          }
          if (*(_BYTE*)(v18 + 16) != ((v20 == 0) | result & 1)) {
            break;
          }
        }
        v18 += 24;
        if (v18 == v19) {
          goto LABEL_25;
        }
      }
    }
    v16 += 6;
  } while (v16 != v15);
  if (v17 != 0) {
    v12 = *v13;
    goto LABEL_22;
  }
  return GameRoutine_6c8300(a4, 0) == v11;
}

__int64 GameHr_11fe0c0(__int64 a1, __int64 a2)
{
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  result = a1 + 8;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 32) = 0;
  if (result != a2 + 1648) {
    result = GameRoutine_7fb7c0();
  }
  v5 = *(_DWORD*)(a2 + 1672);
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_DWORD*)(a1 + 32) = v5;
  v6 = *(_QWORD*)(a2 + 1680);
  v7 = *(_QWORD*)(a2 + 1688);
  v8 = (_QWORD*)GameData_212bf68;
  v9 = v7 - v6;
  if (v7 != v6) {
    if (v9 < 0) {
      goto LABEL_10;
    }
    v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v7 - v6, 16, 0);
    v11 = v10 + v9;
    *(_QWORD*)(a1 + 40) = v10;
    *(_QWORD*)(a1 + 48) = v10;
    *(_QWORD*)(a1 + 56) = v10 + v9;
    result = GameRoutine_1a0b950(v10, v6, v9);
    *(_QWORD*)(a1 + 48) = v11;
  }
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  v12 = *(_QWORD*)(a2 + 1704);
  v13 = *(_QWORD*)(a2 + 1712);
  v14 = v13 - v12;
  if (v13 != v12) {
    if ((v14 & 0x8000000000000000LL) == 0) {
      v15 = GameRoutine_651b90(*v8, v13 - v12, 16, 0);
      v16 = v15 + v14;
      *(_QWORD*)(a1 + 64) = v15;
      *(_QWORD*)(a1 + 72) = v15;
      *(_QWORD*)(a1 + 80) = v15 + v14;
      result = GameRoutine_1a0b950(v15, v12, v14);
      *(_QWORD*)(a1 + 72) = v16;
      goto LABEL_9;
    }
  LABEL_10:
    GameRoutine_6e3e20(result);
  }
LABEL_9:
  v17 = *(_QWORD*)(a2 + 1736);
  *(_QWORD*)(a1 + 88) = *(_QWORD*)(a2 + 1728);
  *(_QWORD*)(a1 + 96) = v17;
  *(_DWORD*)(a1 + 104) = *(char*)(a2 + 584);
  v18 = *(char*)(a2 + 585);
  *(_BYTE*)(a1 + 112) = 0;
  *(_DWORD*)(a1 + 108) = v18;
  return result;
}

_BYTE* GameHr_11fef70(_BYTE* result)
{
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = result;
  if (result[112] == 1) {
    v2 = *(_QWORD*)result;
    v3 = *(_QWORD*)(*(_QWORD*)result + 1680LL);
    if ((int)((unsigned __int64)(*(_QWORD*)(*(_QWORD*)result + 1688LL) - v3) >>
              2) >= 1) {
      v4 = *(_QWORD*)(v2 + 1648);
      *(_QWORD*)(v2 + 1688) = v3;
      v5 = *(_DWORD*)(v2 + 416);
      *(_DWORD*)(v2 + 1672) = 0;
      *(_QWORD*)(v2 + 1728) = 0;
      *(_QWORD*)(v2 + 1736) = 0;
      *(_QWORD*)(v2 + 1656) = v4;
      if ((v5 & 0x10000000) == 0) {
        *(_DWORD*)(v2 + 416) = v5 | 0x10000000;
        GameRoutine_6c51e0(v2);
        GameRoutine_6c6da0(v2);
        GameRoutine_6c6ec0(v2);
        *(_DWORD*)(v2 + 416) &= ~0x10000000u;
      }
    }
    result = (_BYTE*)GameRoutine_84cf20(*(_QWORD*)v1 + 1648LL, v1 + 8, 1);
    v6 = *(_QWORD*)v1;
    v7 = *((_DWORD*)v1 + 27);
    *(_BYTE*)(v6 + 584) = *((_DWORD*)v1 + 26);
    *(_BYTE*)(v6 + 585) = v7;
    v8 = *(_QWORD*)v1;
    v9 = *(_DWORD*)(*(_QWORD*)v1 + 416LL);
    if ((v9 & 0x10000000) == 0) {
      v10 = *(_QWORD*)v1;
      *(_DWORD*)(v8 + 416) = v9 | 0x10000000;
      GameRoutine_6c51e0(v10);
      GameRoutine_6c6da0(v8);
      result = (_BYTE*)GameRoutine_6c6ec0(v8);
      *(_DWORD*)(v8 + 416) &= ~0x10000000u;
    }
    v1[112] = 0;
  }
  v11 = *((_QWORD*)v1 + 8);
  v12 = (__int64*)GameData_212bf68;
  if (v11 != 0) {
    v13 = *(_QWORD*)GameData_212bf68;
    *((_QWORD*)v1 + 9) = v11;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = (_BYTE*)GameRoutine_1a0a4e0(v13 + v14, v11);
  }
  v15 = *((_QWORD*)v1 + 5);
  if (v15 != 0) {
    v16 = *v12;
    *((_QWORD*)v1 + 6) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = (_BYTE*)GameRoutine_1a0a4e0(v16 + v17, v15);
  }
  v18 = *((_QWORD*)v1 + 1);
  if (v18 != 0) {
    v19 = *v12;
    *((_QWORD*)v1 + 2) = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    return (_BYTE*)GameRoutine_1a0a4e0(v19 + v20, v18);
  }
  return result;
}

bool GameHr_11ff4a0(_DWORD* a1, int* a2)
{
  __int64 v3;
  int v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  _BOOL8 result;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  bool v15;
  int v16;
  unsigned int v17;
  bool v18;
  int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  unsigned int* v25;
  _BOOL4 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  unsigned int* v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  _BOOL4 v34;
  __int64* v35;
  __int64 v36;
  unsigned int* v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;

  *(_QWORD*)a2 = -1;
  a2[2] = 100;
  v3 = *(_QWORD*)a1;
  v4 = a1[2];
  v5 = a1[3];
  v6 = a1[7];
  v7 = a1[6];
  v8 = *(int*)(*(_QWORD*)a1 + 592LL);
  v45 = a1[8];
  if ((_DWORD)v8 != 1) {
    v13 = a1[4];
    v14 = a1[5];
    v47 = 0;
    v48 = 0;
    v46 = 0;
    v15 = v4 < v13;
    if (v4 <= v13) {
      v16 = -1;
    }
    else {
      v16 = v4;
    }
    if (v15) {
      v17 = v4 - (v8 - 1);
    }
    else {
      v17 = v16;
    }
    v18 = v5 < v14;
    if (v5 <= v14) {
      v19 = -1;
    }
    else {
      v19 = v5;
    }
    if (v18) {
      v20 = v5 - (v8 - 1);
    }
    else {
      v20 = v19;
    }
    if ((v17 & 0x80000000) != 0) {
      if ((v20 & 0x80000000) != 0) {
        v21 = (unsigned int)v4;
        v22 = (unsigned int)v5;
        goto LABEL_38;
      }
      if ((_DWORD)v8 != 0) {
        if ((v8 & 0x80000000) == 0) {
          v23 = v4 - v8;
          v46 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v8, 16, 0);
          v47 = v46;
          v48 = v46 + 8 * v8;
          do {
            GameRoutine_11ff880(&v46, (unsigned int)++v23, v20);
          } while (v23 < v4);
          goto LABEL_39;
        }
        goto LABEL_70;
      }
    }
    else {
      if ((v20 & 0x80000000) == 0) {
        v21 = v17;
        v22 = v20;
      LABEL_38:
        GameRoutine_11ff880(&v46, v21, v22);
        goto LABEL_39;
      }
      if ((_DWORD)v8 != 0) {
        if ((v8 & 0x80000000) == 0) {
          v24 = v5 - v8;
          v46 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v8, 16, 0);
          v47 = v46;
          v48 = v46 + 8 * v8;
          do {
            GameRoutine_11ff880(&v46, v17, (unsigned int)++v24);
          } while (v24 < v5);
          goto LABEL_39;
        }
      LABEL_70:
        GameRoutine_1200020();
      }
    }
  LABEL_39:
    v25 = (unsigned int*)v47;
    v44 = v46;
    if (v46 != v47) {
      if (v6 < 0) {
        v34 = (v7 & 4) != 0;
        v35 = GameData_212ce98[0];
        v36 = GameData_21306a0[0];
        v37 = (unsigned int*)v46;
        do {
          v38 = *v37;
          if (*(unsigned __int8*)(*v35 + 26) >
              (unsigned int)(unsigned __int8)(*v37 - *(_BYTE*)(*v35 + 24))) {
            v39 = v37[1];
            if (*(unsigned __int8*)(*v35 + 27) >
                    (unsigned int)(unsigned __int8)(v39 -
                                                    *(_BYTE*)(*v35 + 25)) &&
                (GameRoutine_747a00(*(_QWORD*)(*(_QWORD*)v36 + 8LL), v38, v39,
                                    v3, v34) &
                 1) != 0) {
              LODWORD(v40) = v38 + 32 * v39;
              v40 = (unsigned int)v40 >= 0x400 ? 0LL : (unsigned int)v40;
              v41 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v36 + 12880LL) +
                                        v40 + 64);
              if (a2[2] >= v41) {
                *a2 = v38;
                a2[1] = v39;
                a2[2] = v41;
              }
            }
          }
          v37 += 2;
        } while (v37 != v25);
      }
      else {
        v26 = (v7 & 4) != 0;
        LODWORD(v27) = v6 + 32 * v45;
        if ((unsigned int)v27 >= 0x400) {
          v27 = 0;
        }
        else {
          v27 = (unsigned int)v27;
        }
        v43 = v27;
        v28 = GameData_212ce98[0];
        v29 = GameData_21306a0[0];
        v30 = (unsigned int*)v46;
        do {
          v31 = *v30;
          if (*(unsigned __int8*)(*v28 + 26) >
              (unsigned int)(unsigned __int8)(*v30 - *(_BYTE*)(*v28 + 24))) {
            v32 = v30[1];
            if (*(unsigned __int8*)(*v28 + 27) >
                    (unsigned int)(unsigned __int8)(v32 -
                                                    *(_BYTE*)(*v28 + 25)) &&
                (GameRoutine_747a00(*(_QWORD*)(*(_QWORD*)v29 + 8LL), v31, v32,
                                    v3, v26) &
                 1) != 0 &&
                v31 == v6 && v32 == v45) {
              v33 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v29 + 12880LL) +
                                        v43 + 64);
              if (a2[2] >= v33) {
                a2[2] = v33;
                *a2 = v6;
                a2[1] = v45;
              }
            }
          }
          v30 += 2;
        } while (v30 != v25);
      }
    }
    if (v44 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v42 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v42, v44);
    }
    v4 = *a2;
    return v4 >= 0;
  }
  v9 = GameData_21306a0[0];
  if ((GameRoutine_747a00(*(_QWORD*)(*(_QWORD*)GameData_21306a0[0] + 8LL),
                          (unsigned int)v4, (unsigned int)v5, v3,
                          (a1[6] & 4) != 0) &
       1) == 0) {
    return false;
  }
  if (v6 < 0 || (result = false, v4 == v6) && v5 == v45) {
    LODWORD(v11) = v4 + 32 * v5;
    if ((unsigned int)v11 >= 0x400) {
      v11 = 0;
    }
    else {
      v11 = (unsigned int)v11;
    }
    v12 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v9 + 12880LL) + v11 + 64);
    *a2 = v4;
    a2[1] = v5;
    a2[2] = v12;
    return v4 >= 0;
  }
  return result;
}

__int64* GameHr_11ff880(__int64* result, int a2, int a3)
{
  unsigned __int64 v3;
  _DWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  _DWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v4 = (_DWORD*)result[1];
  v3 = result[2];
  v5 = result;
  if ((unsigned __int64)v4 >= v3) {
    v7 = *result;
    v8 = (__int64)v4 - *result;
    v9 = (v8 >> 3) + 1;
    if (v9 >> 61 != 0) {
      GameRoutine_1200020();
    }
    v10 = v3 - v7;
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
        GameRoutine_60a210(result);
      }
      v13 = a2;
      v14 = a3;
      v15 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v12, 16, 0);
      a3 = v14;
      a2 = v13;
    }
    else {
      v15 = 0;
    }
    v16 = (_DWORD*)(v15 + v8);
    v17 = v15 + 8 * v12;
    v18 = v15 + v8 - 8 * (v8 >> 3);
    *v16 = a2;
    v16[1] = a3;
    v6 = v15 + v8 + 8;
    result = (__int64*)GameRoutine_1a0b950(v18, v7, v8);
    *v5 = v18;
    v5[1] = v6;
    v5[2] = v17;
    if (v7 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v19 = 56;
      }
      result = (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)v11 + v19, v7);
    }
  }
  else {
    *v4 = a2;
    v4[1] = a3;
    v6 = (__int64)(v4 + 2);
  }
  v5[1] = v6;
  return result;
}

__int64 GameHr_11ff9b0(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  int v8;
  __int64 v9;
  int v10;
  __int64 result;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;
  unsigned int v35;
  __int64 v36;
  signed int v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;

  v4 = *a2;
  if (*a2 == 0) {
    return 1;
  }
  if (v4 != *(_QWORD*)(a3 + 8)) {
    goto LABEL_45;
  }
  v8 = *(_DWORD*)(v4 + 592);
  if (v8 < 2) {
    goto LABEL_45;
  }
  v9 = *(_QWORD*)(v4 + 440);
  if (v9 != 0) {
    v10 = *(unsigned __int8*)(v9 + 16);
  }
  else {
    v10 = 9;
  }
  v12 = *(unsigned __int8*)(*(_QWORD*)(a1 + 440) + 16LL);
  if (v12 != v10) {
    if (*(_BYTE*)(*(_QWORD*)(a1 + 440) + 16LL) != 0) {
      if (v10 != 0 || v12 != 3) {
      LABEL_14:
        v13 = *(char*)(v4 + 584);
        v14 = *(char*)(v4 + 585);
        v15 = 0;
        if ((*(_DWORD*)(v4 + 1872) & 0xFFF) != 0) {
          v16 = *((_DWORD*)a2 + 2) - v13;
          v17 = *((_DWORD*)a2 + 3) - v14;
          if (((v17 | v16) & 0x80000000) == 0) {
            v15 = 0;
            if (v16 < v8 && v17 < v8) {
              v18 = v16 + v17 * v8;
              if ((v18 & 0x80000000) != 0) {
                v15 = 0;
              }
              else {
                v15 = *(char*)(*(_QWORD*)(v4 + 600) + 4LL * v18 + 2);
              }
            }
          }
        }
        v19 = 0;
        if ((*(_DWORD*)(v4 + 1872) & 0xFFF) != 0) {
          v20 = *(_DWORD*)(a3 + 16) - v13;
          v21 = *(_DWORD*)(a3 + 20) - v14;
          if (((v21 | v20) & 0x80000000) == 0) {
            v19 = 0;
            if (v20 < v8 && v21 < v8) {
              v22 = v20 + v21 * v8;
              if ((v22 & 0x80000000) != 0) {
                v19 = 0;
              }
              else {
                v19 = *(char*)(*(_QWORD*)(v4 + 600) + 4LL * v22 + 2);
              }
            }
          }
        }
        if (v15 < v19) {
          return 0;
        }
        if (v15 > v19) {
          goto LABEL_32;
        }
      }
    }
    else if (v10 != 3) {
      goto LABEL_14;
    }
  }
  if (*((_DWORD*)a2 + 5) != *(_DWORD*)a4) {
    goto LABEL_45;
  }
  v24 = GameRoutine_11f51f0(a1, *((_DWORD*)a2 + 10), *((_DWORD*)a2 + 11));
  v25 = GameRoutine_11f51f0(a1, *(_DWORD*)(a4 + 20), *(_DWORD*)(a4 + 24));
  if (v24 >= v25) {
    if (v24 > v25) {
      return 0;
    }
    v28 = *(char*)(a1 + 584);
    v29 = *((_DWORD*)a2 + 10) - v28;
    v30 = *(char*)(a1 + 585);
    v31 = *((_DWORD*)a2 + 11) - v30;
    if (v29 < 0) {
      v29 = v28 - *((_DWORD*)a2 + 10);
    }
    if (v31 < 0) {
      v31 = v30 - *((_DWORD*)a2 + 11);
    }
    v32 = v31 + v29;
    v33 = *(_DWORD*)(a4 + 20) - v28;
    v34 = *(_DWORD*)(a4 + 24) - v30;
    if (v33 < 0) {
      v33 = -v33;
    }
    if (v34 < 0) {
      v34 = -v34;
    }
    v35 = v34 + v33;
    if (v32 < v35) {
      return 0;
    }
    if (v32 <= v35) {
    LABEL_45:
      v26 = 0;
      v27 = *(_QWORD*)(a3 + 64);
      if (v27 != 0) {
        goto LABEL_46;
      }
    LABEL_54:
      v41 = 0;
      goto LABEL_55;
    }
  }
LABEL_32:
  v26 = 2;
  v27 = *(_QWORD*)(a3 + 64);
  if (v27 == 0) {
    goto LABEL_54;
  }
LABEL_46:
  if (*a2 == 0) {
    goto LABEL_54;
  }
  v36 = *(_QWORD*)(a3 + 8);
  v37 = ~(unsigned int)GameRoutine_70f780(*a2 + 828, v27);
  v38 = *((float*)a2 + 7) < 0.7 ? (unsigned int)v37 >> 31 : (v37 < 0) | 0x10;
  v39 = GameRoutine_70f780(v36 + 828, v27);
  v40 = *(float*)(a4 + 8) < 0.7 ? v39 >= 0 : (~v39 < 0) | 0x10;
  if (v38 == v40) {
    goto LABEL_54;
  }
  if (v38 > v40) {
    return 0;
  }
  v41 = 2;
LABEL_55:
  v42 = *(_QWORD*)(a3 + 80);
  v43 = *a2;
  if (v42 == 0 || v43 == 0) {
    goto LABEL_65;
  }
  v44 = *(_QWORD*)(a3 + 8);
  if (v44 != 0) {
    v45 = GameRoutine_752b40(
        (unsigned int)*(char*)(v44 + 584), (unsigned int)*(char*)(v44 + 585),
        *(unsigned int*)(v44 + 592), *(unsigned int*)(v44 + 592),
        (unsigned int)*(char*)(v42 + 584), (unsigned int)*(char*)(v42 + 585),
        *(unsigned int*)(v42 + 592), *(unsigned int*)(v42 + 592));
  }
  else {
    v45 = 0x7FFFFFFF;
  }
  v46 = *((_DWORD*)a2 + 4);
  if (v46 < v45) {
    return 0;
  }
  if (v46 > (unsigned int)v45) {
    v47 = 2;
  }
  else {
  LABEL_65:
    v47 = 0;
  }
  v48 = v41 + v26 + v47;
  if (*(_BYTE*)(GameData_21ca2f8 + *(unsigned __int8*)(GameData_21ca2f8 + 24) +
                16) == 1 &&
      (GameData_21d9188 == 0 || (*(_BYTE*)(GameData_21d9188 + 30) & 1) == 0) &&
      *((_DWORD*)a2 + 5) == *(_DWORD*)a4) {
    v49 = 0;
    if ((*((_BYTE*)a2 + 49) & 1) == 0 && (*(_BYTE*)(a4 + 29) & 1) == 0 &&
        (*((_BYTE*)a2 + 50) & 1) == 0 && (*(_BYTE*)(a4 + 30) & 1) == 0) {
      v49 = (*(_BYTE*)(a4 + 28) & 1 | ((a2[6] & 1) == 0)) != 0 ? 0 : 2;
      if ((a2[6] & 1) == 0 && (*(_BYTE*)(a4 + 28) & 1) != 0) {
        return 0;
      }
    }
    v48 += v49;
  }
  result = 1;
  if (v48 == 0 && v43 != 0) {
    v50 = *((_DWORD*)a2 + 5);
    if (v50 >= *(_DWORD*)a4 &&
        (v50 > *(_DWORD*)a4 ||
         *(unsigned __int8*)(v43 + 2088) <=
             (unsigned int)*(unsigned __int8*)(*(_QWORD*)(a3 + 8) + 2088LL))) {
      return 0;
    }
  }
  return result;
}

__int64 GameHr_11ffe40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;

  v2 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_84cc00(v2, a2, 1);
  if ((result & 1) != 0) {
    v4 = *(_QWORD*)(v2 + 32);
    v5 = *(_QWORD*)(v2 + 40);
    *(_QWORD*)(v2 + 80) = 0;
    *(_QWORD*)(v2 + 88) = 0;
    v6 = v5 - v4;
    if ((int)((unsigned __int64)(v5 - v4) >> 2) >= 1) {
      v7 = (int)(v6 >> 2);
      if (v7 <= 1) {
        v8 = 1;
      }
      else {
        v8 = (int)(v6 >> 2);
      }
      v9 = *GameData_212c880[0];
      if (v7 >= 2) {
        v15 = (int*)(v4 + 4);
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        do {
          v14 += 2;
          v16 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*(v15 - 1) & 0xFFF));
          v17 = v13 | (1 << *(_BYTE*)(v16 + 104));
          *(_WORD*)(v2 + 80) = v17;
          v18 = (1LL << *(_BYTE*)(v16 + 250)) | v12;
          *(_QWORD*)(v2 + 88) = v18;
          v19 = (1 << *(_BYTE*)(v16 + 115)) | v11;
          *(_DWORD*)(v2 + 84) = v19;
          v20 = *(unsigned __int16*)(*(_QWORD*)(v16 + 24) + 1064LL) | v10;
          *(_WORD*)(v2 + 82) = v20;
          v21 = *v15;
          v15 += 2;
          v22 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (v21 & 0xFFF));
          v13 = v17 | (1 << *(_BYTE*)(v22 + 104));
          *(_WORD*)(v2 + 80) = v13;
          v12 = (1LL << *(_BYTE*)(v22 + 250)) | v18;
          *(_QWORD*)(v2 + 88) = v12;
          v11 = (1 << *(_BYTE*)(v22 + 115)) | v19;
          *(_DWORD*)(v2 + 84) = v11;
          result = *(unsigned __int16*)(*(_QWORD*)(v22 + 24) + 1064LL);
          v10 = result | v20;
          *(_WORD*)(v2 + 82) = v10;
        } while ((v8 & 0x7FFFFFFFFFFFFFFELL) != v14);
      }
      else {
        LOWORD(v10) = 0;
        v11 = 0;
        v12 = 0;
        LOWORD(v13) = 0;
        v14 = 0;
      }
      if ((v8 & 1) != 0) {
        v23 = *(_QWORD*)(*(_QWORD*)(v9 + 64) +
                         8LL * (*(_DWORD*)(v4 + 4 * v14) & 0xFFF));
        *(_WORD*)(v2 + 80) = v13 | (1 << *(_BYTE*)(v23 + 104));
        *(_QWORD*)(v2 + 88) = (1LL << *(_BYTE*)(v23 + 250)) | v12;
        *(_DWORD*)(v2 + 84) = (1 << *(_BYTE*)(v23 + 115)) | v11;
        *(_WORD*)(v2 + 82) = *(_WORD*)(*(_QWORD*)(v23 + 24) + 1064LL) | v10;
      }
    }
  }
  return result;
}

__int64 GameHr_1200130(__int64 a1, int* a2, int* a3)
{
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;

  v4 = *a2;
  v5 = *a3;
  v6 = **(_QWORD**)(a1 + 16);
  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  v21 = *a2;
  v20 = v5;
  v22 = v6;
  if (v7 == 0) {
    GameRoutine_60a310(0);
  }
  result = (*(__int64 (**)(__int64, __int64*, int*, int*))(
      *(_QWORD*)v7 + 48LL))(v7, &v22, &v21, &v20);
  if (((*(_DWORD*)(*(_QWORD*)(*(_QWORD*)GameData_21306a0[0] + 8LL) +
                   4LL * ((v4 + 32 * v5) >> 5) + 2120) >>
        v4) &
       1) != 0) {
    v9 = **(_DWORD**)(a1 + 24);
    if (v9 < 0 || v4 == v9 && v5 == **(_DWORD**)(a1 + 32)) {
      v10 = *(_QWORD*)(a1 + 40);
      *(_DWORD*)(v10 + 16) = v4;
      *(_DWORD*)(v10 + 20) = v5;
      result = GameRoutine_11fdbc0(*(__int64**)(a1 + 40), *(_QWORD*)(a1 + 48));
      if ((result & 1) != 0) {
        result =
            GameRoutine_11ff9b0(**(_QWORD**)(a1 + 56), **(__int64***)(a1 + 64),
                                *(_QWORD*)(a1 + 40), *(_QWORD*)(a1 + 48));
        if ((result & 1) != 0) {
          v11 = **(_QWORD**)(a1 + 64);
          *(_QWORD*)v11 = **(_QWORD**)(a1 + 16);
          *(_DWORD*)(v11 + 8) = v4;
          *(_DWORD*)(v11 + 12) = v5;
          v12 = *(__int64**)(a1 + 48);
          v13 = **(_QWORD**)(a1 + 64);
          v14 = *v12;
          v15 = v12[1];
          v16 = v12[2];
          *(_QWORD*)(v13 + 44) = v12[3];
          *(_QWORD*)(v13 + 36) = v16;
          *(_QWORD*)(v13 + 28) = v15;
          *(_QWORD*)(v13 + 20) = v14;
          v17 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 80LL);
          if (v17 != 0) {
            v18 = **(_QWORD**)(a1 + 64);
            v19 = **(_QWORD**)(a1 + 16);
            if (v19 != 0) {
              result = GameRoutine_752b40(
                  (unsigned int)*(char*)(v19 + 584),
                  (unsigned int)*(char*)(v19 + 585),
                  *(unsigned int*)(v19 + 592), *(unsigned int*)(v19 + 592),
                  (unsigned int)*(char*)(v17 + 584),
                  (unsigned int)*(char*)(v17 + 585),
                  *(unsigned int*)(v17 + 592), *(unsigned int*)(v17 + 592));
            }
            else {
              result = 0x7FFFFFFF;
            }
            *(_DWORD*)(v18 + 16) = result;
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_1200be0(__int64 a1, unsigned int a2, unsigned int a3, int a4,
                       __int64 a5)
{
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
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
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
  unsigned int v73;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  int v82;
  int v83;
  unsigned int v84;
  unsigned int v85;
  unsigned int v86;
  int v87;
  int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
  int v93;
  int v94;
  int v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned int v101;
  unsigned int v102;
  bool v103;
  unsigned int v104;
  unsigned int v105;
  int v106;
  unsigned int v107;
  int v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  __int64 v118;
  int v119;
  unsigned int v120;
  unsigned int v121;
  unsigned int v123;
  unsigned int v126;
  __int64 v127;
  int v128;
  char v129;
  int v130;
  unsigned int v131;

  v5 = *(_QWORD*)(a1 + 8);
  v6 = a1;
  v7 = *(_DWORD*)(v5 + 1976);
  v129 = a4;
  v8 = (v7 >> 6) & 2 | ((v7 & 0x100) != 0) | a4;
  v131 = 2;
  if ((a4 & 8 | (v7 >> 6) & 8) != 0) {
    if (GameData_21caab0 != 0) {
      v10 = *(unsigned __int8*)(GameData_21caab0 + 13);
      LOBYTE(v130) = 10;
      v9 = (unsigned int)GameRoutine_6dd190(v5, &v130, 1);
      if (v10 == 1) {
        v9 = (unsigned int)(v9 - 1);
      }
      else if (v10 == 0) {
        v9 = (unsigned int)(v9 - 2);
      }
    }
    else {
      LOBYTE(v130) = 10;
      v9 = (unsigned int)GameRoutine_6dd190(v5, &v130, 1) - 2;
    }
    v5 = *(_QWORD*)(v6 + 8);
  }
  else {
    v9 = 0xFFFFFFFFLL;
  }
  v11 = (_QWORD*)GameData_21306a0[0];
  GameRoutine_1274f90(*(_QWORD*)GameData_21306a0[0], v5, v9, &v131);
  v12 = (_QWORD*)*v11;
  v13 = v12[1344];
  v14 = v12[1343];
  v15 = ((v13 - v14) << 6) - 1;
  if (v13 == v14) {
    v15 = 0;
  }
  v130 = *(_DWORD*)(*(_QWORD*)(v6 + 8) + 1976LL) & 0x400 | 0x28000;
  v16 = v12[1347] + v12[1346];
  if (v15 == v16) {
    GameRoutine_74cd60(v12 + 1342);
    v14 = v12[1343];
    v16 = v12[1347] + v12[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v14 + 8 * (v16 >> 9)) + 8 * (v16 & 0x1FF)) = v12[1];
  v12[1] = v12 + 337;
  v17 = v12[2618];
  v18 = v12[2617];
  v19 = v12[2621];
  v20 = ((v17 - v18) << 6) - 1;
  if (v17 == v18) {
    v20 = 0;
  }
  ++v12[1347];
  v21 = v19 + v12[2620];
  if (v20 == v21) {
    GameRoutine_74cd60(v12 + 2616);
    v18 = v12[2617];
    v21 = v12[2621] + v12[2620];
  }
  *(_QWORD*)(*(_QWORD*)(v18 + 8 * (v21 >> 9)) + 8 * (v21 & 0x1FF)) = v12[1610];
  v12[1610] = v12 + 1946;
  ++v12[2621];
  v22 = *(_QWORD*)(v6 + 8);
  v23 = GameData_2240090;
  if ((v8 & 1) == 0 ||
      ((v131 = v130 & 0xFFFF7FFD | 2,
        GameRoutine_1275160(GameData_2240090, v22, a2, a3, 100, &v131),
        v22 = *(_QWORD*)(v6 + 8), v23 = GameData_2240090,
        LODWORD(v24) = *(char*)(v22 + 584) + 32 * *(char*)(v22 + 585),
        (unsigned int)v24 >= 0x400)
           ? (v24 = 0)
           : (v24 = (unsigned int)v24),
       *(unsigned __int8*)(*(_QWORD*)(GameData_2240090 + 8) + v24 + 64) ==
           255)) {
    GameRoutine_1275160(v23, v22, a2, a3, 100, &v130);
  }
  GameRoutine_12077a0(v6);
  v25 = (_QWORD*)GameData_2240090;
  v26 = *(_QWORD*)(GameData_2240090 + 10776);
  v27 = *(_QWORD*)(GameData_2240090 + 10768);
  v28 = *(_QWORD*)(GameData_2240090 + 10744);
  v29 = *(_QWORD*)(GameData_2240090 + 10752);
  v30 = v29 == v28;
  v31 = v26 - 1 + v27;
  v32 = v31 >> 9;
  v33 = v31 & 0x1FF;
  v34 = ((v29 - v28) << 6) - 1;
  v35 = *(_QWORD*)(v28 + 8 * v32);
  if (v30) {
    v34 = 0;
  }
  v36 = *(_QWORD*)(v35 + 8 * v33);
  *(_QWORD*)(GameData_2240090 + 10776) = v26 - 1;
  v25[1] = v36;
  if ((unsigned __int64)(v34 - (v26 + v27) + 1) >= 0x400) {
    v37 = *(_QWORD*)(v29 - 8);
    if (v37 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v38 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v38, v37);
      v29 = v25[1344];
    }
    v25[1344] = v29 - 8;
  }
  v39 = v25[2621];
  v40 = v25[2620];
  v41 = v25[2617];
  v42 = v25[2618];
  v30 = v42 == v41;
  v43 = v39 - 1 + v40;
  v44 = v43 >> 9;
  v45 = v43 & 0x1FF;
  v46 = ((v42 - v41) << 6) - 1;
  v47 = *(_QWORD*)(v41 + 8 * v44);
  if (v30) {
    v46 = 0;
  }
  v48 = *(_QWORD*)(v47 + 8 * v45);
  v25[2621] = v39 - 1;
  v25[1610] = v48;
  if ((unsigned __int64)(v46 - (v39 + v40) + 1) >= 0x400) {
    v49 = *(_QWORD*)(v42 - 8);
    if (v49 != 0) {
      v50 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v50 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v50, v49);
      v42 = v25[2618];
    }
    v25[2618] = v42 - 8;
  }
  v51 = (_QWORD*)GameData_2240090;
  v52 = v130;
  v53 = *(_QWORD*)(GameData_2240090 + 10752);
  v54 = *(_QWORD*)(GameData_2240090 + 10744);
  v55 = ((v53 - v54) << 6) - 1;
  if (v53 == v54) {
    v55 = 0;
  }
  v56 = *(_QWORD*)(GameData_2240090 + 10776) +
        *(_QWORD*)(GameData_2240090 + 10768);
  if (v55 == v56) {
    GameRoutine_74cd60(GameData_2240090 + 10736);
    v54 = v51[1343];
    v56 = v51[1347] + v51[1346];
  }
  *(_QWORD*)(*(_QWORD*)(v54 + 8 * (v56 >> 9)) + 8 * (v56 & 0x1FF)) = v51[1];
  v51[1] = v51 + 672;
  ++v51[1347];
  v57 = *(_QWORD*)(v6 + 8);
  v131 = v52;
  v58 = (_QWORD*)GameData_2240090;
  if (v57 != 0) {
    GameRoutine_748f80(GameData_2240090, v57, (unsigned int)*(char*)(v57 + 584),
                       (unsigned int)*(char*)(v57 + 585), 100, &v131);
    v58 = (_QWORD*)GameData_2240090;
  }
  v59 = v58[1343];
  v60 = v58[1344];
  v61 = &GameData_2240090;
  LODWORD(v62) = a2 + 32 * a3;
  v63 = ((v60 - v59) << 6) - 1;
  if (v60 == v59) {
    v63 = 0;
  }
  if ((unsigned int)v62 >= 0x400) {
    v62 = 0;
  }
  else {
    v62 = (unsigned int)v62;
  }
  v64 = v58[1] + v62;
  v65 = v58[1346];
  v66 = *(unsigned __int8*)(v64 + 64);
  v67 = v58[1347];
  v68 = *(
      _QWORD*)(*(_QWORD*)(v59 + 8 * ((unsigned __int64)(v67 - 1 + v65) >> 9)) +
               8 * ((v67 - 1 + v65) & 0x1FF));
  v58[1347] = v67 - 1;
  v58[1] = v68;
  if ((unsigned __int64)(v63 - (v67 + v65) + 1) >= 0x400) {
    v69 = *(_QWORD*)(v60 - 8);
    if (v69 != 0) {
      v70 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v70 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v70, v69);
      v60 = v58[1344];
    }
    v58[1344] = v60 - 8;
  }
  if (v66 == 255) {
    return 0;
  }
  if ((v129 & 4) != 0) {
    v73 = 0;
  }
  else {
    LODWORD(v71) = *(char*)(*(_QWORD*)(v6 + 8) + 584LL) +
                   32 * *(char*)(*(_QWORD*)(v6 + 8) + 585LL);
    if ((unsigned int)v71 >= 0x400) {
      v71 = 0;
    }
    else {
      v71 = (unsigned int)v71;
    }
    v72 = *(unsigned __int8*)(GameData_2240090 + v71 + 15632);
    if (v72 >= 0x65) {
      v73 = 0;
    }
    else {
      v73 = 6619136 - (v72 << 16);
    }
  }
  v75 = a5;
  v76 = *GameData_212ce98[0];
  v77 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
  v121 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
  if (v77 > v121) {
    goto LABEL_132;
  }
  v78 = *(unsigned __int8*)(v76 + 28);
  v79 = *(unsigned __int8*)(v76 + 30);
  if (v78 > v79) {
    goto LABEL_132;
  }
  v80 = v79 + 1;
  v81 = -1;
  v127 = v6;
  v120 = v78;
  v119 = -v78;
  v82 = -1;
  v128 = 32 * v77;
  while (2) {
    v83 = v119;
    v84 = v78;
    v85 = a3 - v77;
    if ((int)(a3 - v77) < 0) {
      v85 = v77 - a3;
    }
    v126 = v85;
    v123 = v77 << 16;
    do {
      v86 = v73;
      v87 = v81;
      v88 = v82;
      if ((GameRoutine_747a00(*(_QWORD*)(*v61 + 8), v84, v77,
                              *(_QWORD*)(v6 + 8), 0) &
           1) == 0) {
      LABEL_74:
        v73 = v86;
        v82 = v88;
        v81 = v87;
        goto LABEL_75;
      }
      v89 = *v61;
      if (v128 + v84 >= 0x400) {
        v90 = 0;
      }
      else {
        v90 = v128 + v84;
      }
      if (*(unsigned __int8*)(v89 + v90 + 2760) == 255) {
        goto LABEL_110;
      }
      if ((v129 & 0x40) != 0) {
        v91 = *(_QWORD*)(v6 + 8);
        v92 = *(char*)(v91 + 584);
        v93 = *(char*)(v91 + 585);
        v94 = v83 + v92;
        if (v94 < 0) {
          v94 = -v94;
        }
        v95 = v93 - v77;
        if (v95 < 0) {
          v95 = -v95;
        }
        if ((unsigned int)(v95 + v94) > 1) {
          goto LABEL_110;
        }
      }
      if (v129 < 0) {
        v109 = *(_QWORD*)(GameData_21cd158 + 16);
        v110 = *(__int16*)(v109 + 2 * v90 + 4200);
        if ((v110 & 0x8000000000000000LL) == 0) {
          v111 = *(_QWORD*)(v109 + 8);
          if (v111 != 0 && (*(unsigned __int8 (**)(__int64))(
                               *(_QWORD*)(v111 + 144LL * (int)v110) + 40LL))(
                               v111 + 144LL * (int)v110) == 7) {
            goto LABEL_110;
          }
        }
      }
      if (v75 == 0 ||
          *(unsigned __int8*)(GameData_21ca300 + 18) <=
              (unsigned int)(unsigned __int8)(v84 - *(_BYTE*)(GameData_21ca300 +
                                                              16)) ||
          *(unsigned __int8*)(GameData_21ca300 + 19) <=
              (unsigned int)(unsigned __int8)(v77 - *(_BYTE*)(GameData_21ca300 +
                                                              17))) {
        goto LABEL_99;
      }
      if (v75 ==
          *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                     8LL * *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 +
                                                           72) +
                                                2 * v90 + 8))) {
        goto LABEL_110;
      }
      v96 = *(_QWORD*)(GameData_21cd158 + 16);
      v97 = *(__int16*)(v96 + 2 * v90 + 104);
      if (v97 < 0 || (v98 = *(_QWORD*)(v96 + 8)) == 0 ||
          (v99 = v98 + 144LL * (unsigned int)v97,
           (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v99 + 40LL))(v99) !=
               2) ||
          ((*(__int64 (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99) & 1) == 0 ||
          (v100 = (*(__int64 (**)(__int64))(*(_QWORD*)v99 + 224LL))(v99)) ==
              0) {
        v100 = **(_QWORD**)(GameData_21c9bd0 + 64);
      }
      v6 = v127;
      if (v75 == v100) {
      LABEL_110:
        v73 = v86;
        v82 = v88;
        v81 = v87;
        v61 = (__int64*)GameData_21306a0[0];
      }
      else {
      LABEL_99:
        v101 = *(unsigned __int8*)(*(_QWORD*)(GameData_2240090 + 12880) + v90 +
                                   64);
        v102 = *(unsigned __int8*)(GameData_2240090 + v90 + 15632);
        v103 = v102 <= 0x65;
        v104 = 101 - v102;
        if (v104 != 0 && v103) {
          v105 = v104;
        }
        else {
          v105 = 0;
        }
        if ((v129 & 0x10) != 0) {
          v103 = v101 >= 0x65;
          v112 = 1616 - 16 * v101;
          v6 = v127;
          if (v103) {
            v112 = 0;
          }
          v108 = v112 + (v105 << 11) +
                 GameRoutine_11f51f0(*(_QWORD*)(v127 + 8), v84, v77);
        }
        else {
          v106 = GameRoutine_11f51f0(*(_QWORD*)(v127 + 8), v84, v77);
          v103 = v101 >= 0x65;
          v107 = 101 - v101;
          v6 = v127;
          v75 = a5;
          if (v103) {
            v107 = 0;
          }
          v108 = v107 + (v105 << 11) + (v106 << 7);
        }
        v113 = 32 * v108;
        v82 = v77;
        v81 = v84;
        v61 = (__int64*)GameData_21306a0[0];
        v114 = a2 + v83;
        if ((int)(a2 + v83) < 0) {
          v114 = -v114;
        }
        v115 = v114 - v126;
        if (v115 < 0) {
          v115 = -v115;
        }
        v73 = v113 - v115 + 31;
        if ((v87 & 0x80000000) == 0 && v86 >= v73) {
          if (v86 > v73) {
            goto LABEL_74;
          }
          v116 = v87 | (v88 << 16);
          v117 = v84 | v123;
          if (v116 <= (int)(v84 | v123)) {
            v73 = v86;
          }
          if (v116 <= v117) {
            v82 = v88;
          }
          else {
            v82 = v77;
          }
          if (v116 <= v117) {
            v81 = v87;
          }
          else {
            v81 = v84;
          }
        }
      }
    LABEL_75:
      ++v84;
      --v83;
    } while (v80 != v84);
    v128 += 32;
    v78 = v120;
    v30 = v77++ == v121;
    if (!v30) {
      continue;
    }
    break;
  }
  if ((v81 & 0x80000000) == 0) {
    v118 = *GameData_212cfd0[0];
    *(_DWORD*)(v118 + 12) = v81;
    *(_DWORD*)(v118 + 16) = v82;
    *(_BYTE*)(v118 + 20) = 1;
    GameRoutine_1207aa0(v6, a2, a3);
    return 1;
  }
LABEL_132:
  *(_DWORD*)(*(_QWORD*)(v6 + 8) + 1976LL) |= 0x20000u;
  return 0;
}

#pragma GCC visibility pop
