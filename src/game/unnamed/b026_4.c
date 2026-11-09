#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1aabf6c;
extern _UNKNOWN GameData_1abf89f;
extern _UNKNOWN GameData_1ad653b;
extern unsigned __int8 GameData_1c2540c[9];
extern _UNKNOWN* GameData_1f9caf8;
extern __int64 (*GameData_21230b0[])();
extern __int64 (*GameData_2123548[])();
extern __int64 (*GameData_2123618[])();
extern __int64 (*GameData_21239f0[])();
extern __int64 (*GameData_2123c30[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c730;
extern __int64* GameData_212d6a8;
extern __int64 GameData_21caab0;
extern _UNKNOWN GameData_21f8620;
__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1859ec0(_QWORD, _QWORD);
__int64 GameRoutine_185a4f0(_QWORD, _QWORD, _QWORD);
bool GameRoutine_19e22c0(__int64, char);
__int64* GameRoutine_19e2a20(unsigned __int8);
__int64 GameRoutine_19e2c00(_QWORD);
void __attribute__((noreturn)) GameRoutine_19e5e30(void);
void __attribute__((noreturn)) GameRoutine_19e5e50(void);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(_QWORD);
__int64 GameRoutine_717660(_QWORD);
__int64 GameRoutine_890160(_QWORD);

__int64 GameHr_19e25c0(__int64 a1, char a2)
{
  __int64 v3;
  char v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 i;
  __int64 v14;
  unsigned __int8 v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v30;
  __int64 v31;

  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1632, 16, 0);
  v4 = a2 & 1;
  v30 = 0;
  v31 = 0;
  v5 = GameRoutine_16dcd30(v3, "EventMemoryMenu", &v30, 0);
  v6 = GameData_212d6a8;
  v7 = v31;
  *(_QWORD*)v3 = GameData_212d6a8 + 2;
  *(_QWORD*)(v3 + 176) = v6 + 143;
  *(_QWORD*)(v3 + 1056) = v6 + 169;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    v5 = GameRoutine_1a09c50(v7);
  }
  *(_BYTE*)(v3 + 1064) = v4;
  *(_BYTE*)(v3 + 1065) = 0;
  *(_QWORD*)v3 = GameData_21230b0;
  *(_DWORD*)(v3 + 1080) = 0;
  *(_QWORD*)(v3 + 1088) = 0;
  *(_QWORD*)(v3 + 1072) = 0xFFFFFFFFLL;
  *(_QWORD*)(v3 + 1096) = 0;
  *(_QWORD*)(v3 + 1104) = 0;
  *(_QWORD*)(v3 + 1152) = 0;
  *(_QWORD*)(v3 + 1168) = 0;
  *(_QWORD*)(v3 + 1176) = 0;
  *(_BYTE*)(v3 + 1184) = 0;
  *(_QWORD*)(v3 + 1200) = 0xFFFFFFFFLL;
  *(_DWORD*)(v3 + 1208) = 0;
  *(_QWORD*)(v3 + 1232) = 0;
  *(_QWORD*)(v3 + 1224) = 0;
  *(_QWORD*)(v3 + 1216) = 0;
  *(_QWORD*)(v3 + 1280) = 0;
  *(_QWORD*)(v3 + 1296) = 0;
  *(_QWORD*)(v3 + 1056) = GameData_2123618;
  *(_QWORD*)(v3 + 176) = GameData_2123548;
  *(_QWORD*)(v3 + 1304) = 0;
  *(_BYTE*)(v3 + 1312) = 0;
  *(_QWORD*)(v3 + 1328) = 0;
  *(_QWORD*)(v3 + 1336) = 0;
  *(_QWORD*)(v3 + 1344) = 0;
  *(_QWORD*)(v3 + 1352) = 0;
  *(_QWORD*)(v3 + 1360) = 0;
  *(_QWORD*)(v3 + 1368) = 0;
  *(_DWORD*)(v3 + 1376) = 0;
  *(_DWORD*)(v3 + 1112) = 2;
  *(_DWORD*)(v3 + 1240) = 2;
  *(_DWORD*)(v3 + 1432) = 2;
  *(_QWORD*)(v3 + 1392) = 0xFFFFFFFFLL;
  *(_DWORD*)(v3 + 1400) = 0;
  *(_QWORD*)(v3 + 1424) = 0;
  *(_QWORD*)(v3 + 1416) = 0;
  *(_QWORD*)(v3 + 1408) = 0;
  *(_QWORD*)(v3 + 1472) = 0;
  *(_BYTE*)(v3 + 1504) = 0;
  *(_QWORD*)(v3 + 1488) = 0;
  *(_QWORD*)(v3 + 1496) = 0;
  *(_BYTE*)(v3 + 1520) = 0;
  *(_QWORD*)(v3 + 1560) = 0;
  *(_QWORD*)(v3 + 1568) = 0;
  *(_QWORD*)(v3 + 1576) = 0;
  *(_QWORD*)(v3 + 1584) = 0;
  *(_QWORD*)(v3 + 1592) = 0;
  *(_QWORD*)(v3 + 1600) = 0;
  *(_QWORD*)(v3 + 1608) = 0;
  *(_QWORD*)(v3 + 1616) = 0;
  *(_QWORD*)(v3 + 1550) = 0;
  *(_QWORD*)(v3 + 1544) = 0;
  *(_QWORD*)(v3 + 1536) = 0;
  *(_QWORD*)(v3 + 1528) = 0;
  GameRoutine_717660(v5);
  v8 = *(_QWORD*)(v3 + 1528);
  if ((unsigned __int64)(*(_QWORD*)(v3 + 1544) - v8) <= 0xEFF) {
    v9 = *(_QWORD*)(v3 + 1536) - v8;
    v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 3840, 16, 0);
    GameRoutine_1a0b950(v10, v8, v9);
    *(_QWORD*)(v3 + 1528) = v10;
    *(_QWORD*)(v3 + 1536) = v10 + v9;
    *(_QWORD*)(v3 + 1544) = v10 + 3840;
    if (v8 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v11 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v11);
    }
  }
  v12 = (__int64*)(v3 + 1328);
  for (i = 0; i != 9; ++i) {
    v15 = GameData_1c2540c[i];
    if ((unsigned __int8)(v15 - 5) >= 4u &&
        GameRoutine_19e22c0(GameData_1c2540c[i], *(_BYTE*)(v3 + 1064))) {
      v16 = *(unsigned __int8**)(v3 + 1336);
      v17 = *(_QWORD*)(v3 + 1344);
      if ((unsigned __int64)v16 < v17) {
        *v16 = v15;
        v14 = (__int64)(v16 + 1);
      }
      else {
        v18 = *v12;
        v19 = &v16[-*v12];
        v20 = (unsigned __int64)(v19 + 1);
        if ((__int64)(v19 + 1) < 0) {
          GameRoutine_19e5e50();
        }
        v21 = v17 - v18;
        if (2 * v21 > v20) {
          v20 = 2 * v21;
        }
        if (v21 >= 0x3FFFFFFFFFFFFFFFLL) {
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v20;
        }
        if (v22 != 0) {
          v23 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v22, 16, 0);
        }
        else {
          v23 = 0;
        }
        v19[v23] = v15;
        v14 = (__int64)&v19[v23 + 1];
        GameRoutine_1a0b950(v23, v18, v19);
        *(_QWORD*)(v3 + 1328) = v23;
        *(_QWORD*)(v3 + 1336) = v14;
        *(_QWORD*)(v3 + 1344) = v23 + v22;
        if (v18 != 0) {
          v24 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v24 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24);
        }
      }
      *(_QWORD*)(v3 + 1336) = v14;
    }
  }
  *(_DWORD*)(v3 + 1072) = ~*(_DWORD*)(v3 + 1328) + *(_DWORD*)(v3 + 1336);
  *(_QWORD*)(v3 + 1076) = 0;
  GameRoutine_19e2c00(v3);
  GameRoutine_657850(v3, GameData_212c730, "EventMemoryMenu", 1, a1);
  v26 = *(_QWORD**)(v3 + 256);
  v25 = *(_QWORD**)(v3 + 264);
  *(_QWORD*)(v3 + 336) = 0;
  while (v26 != v25) {
    if (*v26 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v26 + 8LL))(*v26);
      v25 = *(_QWORD**)(v3 + 264);
    }
    ++v26;
  }
  v27 = *(_QWORD*)(v3 + 344);
  if (v27 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
    *(_QWORD*)(v3 + 344) = 0;
  }
  *(_QWORD*)(v3 + 264) = *(_QWORD*)(v3 + 256);
  *(_QWORD*)(v3 + 240) = *(_QWORD*)(v3 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v3 + 1024LL))(v3);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1032LL))(v3);
}

__int64* GameHr_19e2c00(__int64 a1)
{
  int v1;
  __int64 v2;
  int v4;
  int v5;
  __int64* result;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  char v19;
  void* v20;
  unsigned int v21;
  unsigned int v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  bool v39;
  int v40;
  __int64 v41;
  char* v42;
  unsigned __int64 v43;
  __int64* v44;

  v1 = *(_DWORD*)(a1 + 1076);
  v2 = *(_QWORD*)(a1 + 1088);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  v4 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
  if (v4 >= v1) {
    v4 = v1;
  }
  if (v1 >= 0) {
    v5 = v4;
  }
  else {
    v5 = 0;
  }
  result = GameRoutine_19e2a20(*(_BYTE*)(*(_QWORD*)(a1 + 1328) + v5));
  v7 = *(_QWORD*)(a1 + 1352);
  v8 = *(_BYTE*)(a1 + 1064) == 0;
  v9 = 3;
  *(_QWORD*)(a1 + 1360) = v7;
  if (v8) {
    v9 = 0;
  }
  v10 = &result[v9];
  v44 = &result[v9];
  v11 = result[v9];
  if (v10[1] == v11) {
    v33 = 0;
    v34 = nullptr;
    v43 = 0;
    if (v7 == 0) {
      goto LABEL_54;
    }
    goto LABEL_51;
  }
  v41 = 0;
  v12 = 0;
  v42 = nullptr;
  v43 = 0;
  do {
    v13 = (char*)&GameData_21f8620 + 24 * *(unsigned __int8*)(v11 + 24 * v12);
    v14 = *(__int64**)v13;
    v15 = *((__int64**)v13 + 1);
    while (v14 != v15) {
      v16 = *v14;
      if (*v14 != 0) {
        v17 = *(_QWORD**)(v16 + 96);
        v18 = *(_QWORD**)(v16 + 104);
        if (v17 != v18) {
          v19 = 0;
          do {
            LOBYTE(v21) = GameData_21caab0;
            if (GameData_21caab0 != 0) {
              result = (__int64*)GameRoutine_65c580(
                  *(_QWORD*)(GameData_21caab0 + 48), *v17 + 16LL);
              if (result != nullptr) {
                v22 = *((_DWORD*)result + 8);
                v21 = v22 / 0x21B7900 -
                      11 * ((390451573 * (unsigned __int64)(v22 / 0x21B7900)) >>
                            32);
                if (v21 != 0) {
                  v23 = (v22 / 0x86DE40uLL) & 3;
                  if ((int)v23 > 1) {
                    if ((_DWORD)v23 == 3) {
                      v20 = &GameData_1aabf6c;
                    }
                    else {
                      v20 = &GameData_1ad653b;
                    }
                  }
                  else {
                    v20 = &GameData_1abf89f;
                    if ((_DWORD)v23 != 0) {
                      v20 = *(&GameData_1f9caf8 + v21);
                    }
                  }
                  result = (__int64*)GameRoutine_890160(v20);
                  LOBYTE(v21) = 1;
                }
              }
              else {
                LOBYTE(v21) = 0;
              }
            }
            ++v17;
            v19 |= v21;
          } while (v17 != v18);
          if ((v19 & 1) != 0) {
            if ((unsigned __int64)v42 >= v43) {
              v24 = &v42[-v41];
              v25 = (__int64)&v42[-v41] >> 2;
              v26 = v25 + 1;
              if ((unsigned __int64)(v25 + 1) >> 62 != 0) {
                GameRoutine_6e5a20(result);
              }
              v27 = v43 - v41;
              if ((__int64)(v43 - v41) >> 1 > v26) {
                v26 = v27 >> 1;
              }
              if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFFCLL) {
                v28 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v28 = v26;
              }
              if (v28 != 0) {
                if (v28 >> 62 != 0) {
                  GameRoutine_60a210(result);
                }
                v29 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 4 * v28,
                                         16, 0);
              }
              else {
                v29 = 0;
              }
              v30 = v29 + 4 * v28;
              v31 = (__int64)&v24[v29 + -4 * v25];
              *(_DWORD*)&v24[v29] = v12;
              v43 = v30;
              v42 = &v24[v29 + 4];
              result = (__int64*)GameRoutine_1a0b950(v31, v41, v24);
              if (v41 != 0) {
                v32 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v32 = 56;
                }
                result = (__int64*)GameRoutine_1a0a4e0(
                    *(_QWORD*)GameData_212bf68 + v32);
              }
              v41 = v31;
            }
            else {
              *(_DWORD*)v42 = v12;
              v42 += 4;
            }
            break;
          }
        }
      }
      ++v14;
    }
    ++v12;
    v11 = *v44;
  } while (0xAAAAAAAAAAAAAAABLL * ((v44[1] - *v44) >> 3) > v12);
  v33 = v41;
  v34 = v42;
  v7 = *(_QWORD*)(a1 + 1352);
  if (v7 != 0) {
  LABEL_51:
    *(_QWORD*)(a1 + 1360) = v7;
    v35 = v34;
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v36 = 56;
    }
    result = (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v36);
    v34 = v35;
  }
LABEL_54:
  *(_QWORD*)(a1 + 1360) = v34;
  *(_QWORD*)(a1 + 1352) = v33;
  v37 = (__int64)&v34[-v33] >> 2;
  *(_QWORD*)(a1 + 1368) = v43;
  v38 = *(int*)(a1 + 1376);
  v39 = v37 > v38;
  v40 = v37 - 1;
  if (!v39) {
    LODWORD(v38) = 0;
  }
  *(_DWORD*)(a1 + 1200) = v40;
  *(_DWORD*)(a1 + 1204) = v38;
  *(_DWORD*)(a1 + 1208) = v38;
  return result;
}

__int64* GameHr_19e5460(__int64 a1)
{
  __int64 v1;
  int v2;
  _QWORD* v3;
  int v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  __int64* result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8* v17;
  char* v18;
  int** v19;
  int v20;
  int* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  int v26;
  void* v27;
  unsigned int v28;
  __int64 v29;
  unsigned int v30;
  unsigned __int64 v31;
  __int64 v32;
  int* v33;
  int v34;
  unsigned __int8* i;
  __int64 v36;
  int v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  _QWORD* v55;
  int v56;
  void* v57;
  unsigned int v58;
  __int64 v59;
  unsigned int v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  char v65;
  unsigned __int64 v66;
  char v67;
  _QWORD* v68;
  int** v69;
  __int64 v70;
  _QWORD v71[4];
  _QWORD* v72;
  int* v73;

  v1 = *(_QWORD*)(a1 + 1088);
  v2 = *(_DWORD*)(a1 + 1076);
  v3 = (_QWORD*)a1;
  v4 = v2;
  v5 = (*(_QWORD*)(a1 + 1096) - v1) >> 2;
  if (v5 > v2) {
    v4 = *(_DWORD*)(v1 + 4LL * v2);
  }
  v6 = *(_QWORD*)(a1 + 1328);
  v7 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
  if (v7 >= v4) {
    v8 = v4;
  }
  else {
    v8 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
  }
  if (v4 >= 0) {
    v9 = v8;
  }
  else {
    v9 = 0;
  }
  if (v5 > v2) {
    v2 = *(_DWORD*)(v1 + 4LL * v2);
  }
  v10 = *(unsigned __int8*)(v6 + v9);
  if (v7 >= v2) {
    v11 = v2;
  }
  else {
    v11 = ~*(_DWORD*)(a1 + 1328) + *(_DWORD*)(a1 + 1336);
  }
  if (v2 >= 0) {
    v12 = v11;
  }
  else {
    v12 = 0;
  }
  result = GameRoutine_19e2a20(*(_BYTE*)(v6 + v12));
  v14 = 24;
  if (*((_BYTE*)v3 + 1064) == 0) {
    v14 = 0;
  }
  v63 = v14;
  v64 = result;
  v15 = v3[169];
  if (v3[170] != v15) {
    v16 = 0;
    v68 = v3;
    while (1) {
      v70 = v16;
      v17 = (unsigned __int8*)(*(__int64*)((char*)v64 + v63) +
                               24LL * *(int*)(v15 + 4 * v16));
      v18 = (char*)&GameData_21f8620 + 24 * *v17;
      v19 = *(int***)v18;
      v69 = *((int***)v18 + 1);
      if (*(int***)v18 != v69) {
        break;
      }
    LABEL_21:
      v15 = v3[169];
      v16 = v70 + 1;
      if (v70 + 1 >= (unsigned __int64)((v3[170] - v15) >> 2)) {
        return result;
      }
    }
    v20 = *((_DWORD*)v17 + 1);
    if (v20 == 3) {
      while (1) {
        v33 = *v19;
        v34 = **v19;
        if (v34 == 7) {
          v37 = 1;
        }
        else if (v34 == 6) {
          for (i = (unsigned __int8*)v3[191]; i != (unsigned __int8*)v3[192];
               i += 16) {
            if (*i == v10 && *((_DWORD*)i + 1) == 3 && *((_DWORD*)i + 2) == 5) {
              LOBYTE(v36) = i[12];
              goto LABEL_79;
            }
          }
          v36 = GameRoutine_185a4f0(v10, 3, 5);
          v38 = v3[192];
          v39 = v3[193];
          v40 = v36 & 1;
          if (v38 >= v39) {
            v42 = v3[191];
            v43 = v38 - v42;
            v44 = (__int64)(v38 - v42) >> 4;
            v45 = v44 + 1;
            if ((unsigned __int64)(v44 + 1) >> 60 != 0) {
              GameRoutine_19e5e30();
            }
            v46 = v39 - v42;
            v67 = v36;
            if (v46 >> 3 > v45) {
              v45 = v46 >> 3;
            }
            if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF0LL) {
              v47 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v47 = v45;
            }
            if (v47 != 0) {
              v65 = v36 & 1;
              if (v47 >> 60 != 0) {
                GameRoutine_60a210(v36);
              }
              v48 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 16 * v47, 16,
                                       0);
              v40 = v65;
            }
            else {
              v48 = 0;
            }
            v49 = v48 + v43;
            v66 = v48 + 16 * v47;
            v50 = v48 + v43 - 16 * v44;
            *(_BYTE*)v49 = v10;
            *(_BYTE*)(v49 + 12) = v40;
            v41 = v48 + v43 + 16;
            *(_QWORD*)(v49 + 4) = 0x500000003LL;
            GameRoutine_1a0b950(v50, v42, v43);
            v68[191] = v50;
            v3 = v68;
            v68[192] = v41;
            v68[193] = v66;
            if (v42 != 0) {
              v51 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v51 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v51);
            }
            LOBYTE(v36) = v67;
          }
          else {
            v41 = v38 + 16;
            *(_BYTE*)v38 = v10;
            *(_BYTE*)(v38 + 12) = v40;
            *(_QWORD*)(v38 + 4) = 0x500000003LL;
          }
          v3[192] = v41;
        LABEL_79:
          if ((v36 & 1) != 0) {
            v37 = 0;
          }
          else {
            v37 = 2;
          }
        }
        else {
          v37 = 0;
        }
        v52 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 144, 16, 0);
        *(_WORD*)(v52 + 16) = 0;
        *(_DWORD*)(v52 + 40) = 0;
        v53 = v52;
        *(_QWORD*)(v52 + 48) = 0;
        *(_QWORD*)(v52 + 56) = 0;
        *(_QWORD*)(v52 + 64) = 0;
        *(_QWORD*)(v52 + 72) = 0;
        *(_QWORD*)(v52 + 88) = v33;
        *(_BYTE*)(v52 + 96) = v10;
        *(_BYTE*)(v52 + 108) = 0;
        *(_QWORD*)(v52 + 112) = 0;
        *(_QWORD*)(v52 + 120) = 0;
        *(_QWORD*)(v52 + 128) = 0;
        *(_DWORD*)(v52 + 136) = 0;
        *(_WORD*)(v52 + 80) = 257;
        v73 = v33;
        *(_BYTE*)(v52 + 82) = 1;
        *(_QWORD*)v52 = GameData_21239f0;
        *(_QWORD*)(v52 + 8) = 0;
        *(_DWORD*)(v52 + 84) = v70;
        *(_DWORD*)(v52 + 100) = 3;
        *(_DWORD*)(v52 + 104) = v37;
        v55 = *((_QWORD**)v33 + 12);
        v54 = *((_QWORD**)v33 + 13);
        if (v55 == v54) {
          *(_BYTE*)(v52 + 108) = 0;
        }
        else {
          v56 = 0;
          do {
            v58 = GameData_21caab0;
            if (GameData_21caab0 != 0) {
              v59 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                       *v55 + 16LL);
              if (v59 != 0) {
                v60 = *(_DWORD*)(v59 + 32);
                v58 = v60 / 0x21B7900 -
                      11 * ((390451573 * (unsigned __int64)(v60 / 0x21B7900)) >>
                            32);
                if (v58 != 0) {
                  v61 = (v60 / 0x86DE40uLL) & 3;
                  if ((int)v61 > 1) {
                    if ((_DWORD)v61 == 3) {
                      v57 = &GameData_1aabf6c;
                    }
                    else {
                      v57 = &GameData_1ad653b;
                    }
                  }
                  else {
                    v57 = &GameData_1abf89f;
                    if ((_DWORD)v61 != 0) {
                      v57 = *(&GameData_1f9caf8 + v58);
                    }
                  }
                  GameRoutine_890160(v57);
                  v58 = 1;
                }
              }
              else {
                v58 = 0;
              }
            }
            v56 += v58;
            ++v55;
          } while (v55 != v54);
          *(_BYTE*)(v53 + 108) = v56 != 0;
          if (v56 == 0) {
            goto LABEL_49;
          }
          v71[0] = GameData_2123c30;
          v71[1] = v53;
          v72 = v71;
          GameRoutine_1859ec0(&v73, v71);
          if (v72 == v71) {
            v62 = 32;
            goto LABEL_101;
          }
          if (v72 != nullptr) {
            v62 = 40;
          LABEL_101:
            (*(void (**)(void))(*v72 + v62))();
          }
        }
      LABEL_49:
        result = (__int64*)GameRoutine_16e0c00(v3, v53);
        if (++v19 == v69) {
          goto LABEL_21;
        }
      }
    }
    while (1) {
      v21 = *v19;
      v22 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 144, 16, 0);
      v23 = v22;
      *(_WORD*)(v22 + 16) = 0;
      *(_DWORD*)(v22 + 40) = 0;
      *(_QWORD*)(v22 + 48) = 0;
      *(_QWORD*)(v22 + 56) = 0;
      *(_QWORD*)(v22 + 64) = 0;
      *(_QWORD*)(v22 + 72) = 0;
      *(_QWORD*)(v22 + 88) = v21;
      *(_BYTE*)(v22 + 96) = v10;
      *(_DWORD*)(v22 + 100) = v20;
      *(_DWORD*)(v22 + 104) = 0;
      *(_BYTE*)(v22 + 108) = 0;
      *(_QWORD*)(v22 + 112) = 0;
      *(_QWORD*)(v22 + 120) = 0;
      *(_QWORD*)(v22 + 128) = 0;
      *(_WORD*)(v22 + 80) = 257;
      *(_DWORD*)(v22 + 136) = 0;
      v73 = v21;
      *(_BYTE*)(v22 + 82) = 1;
      *(_QWORD*)v22 = GameData_21239f0;
      *(_QWORD*)(v22 + 8) = 0;
      *(_DWORD*)(v22 + 84) = v70;
      if (v21 == nullptr || (v24 = *((_QWORD**)v21 + 12),
                             v25 = *((_QWORD**)v21 + 13), v24 == v25)) {
        *(_BYTE*)(v22 + 108) = 0;
      }
      else {
        v26 = 0;
        do {
          v28 = GameData_21caab0;
          if (GameData_21caab0 != 0) {
            v29 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                     *v24 + 16LL);
            if (v29 != 0) {
              v30 = *(_DWORD*)(v29 + 32);
              v28 = v30 / 0x21B7900 -
                    11 * ((390451573 * (unsigned __int64)(v30 / 0x21B7900)) >>
                          32);
              if (v28 != 0) {
                v31 = (v30 / 0x86DE40uLL) & 3;
                if ((int)v31 > 1) {
                  if ((_DWORD)v31 == 3) {
                    v27 = &GameData_1aabf6c;
                  }
                  else {
                    v27 = &GameData_1ad653b;
                  }
                }
                else {
                  v27 = &GameData_1abf89f;
                  if ((_DWORD)v31 != 0) {
                    v27 = *(&GameData_1f9caf8 + v28);
                  }
                }
                GameRoutine_890160(v27);
                v28 = 1;
              }
            }
            else {
              v28 = 0;
            }
          }
          v26 += v28;
          ++v24;
        } while (v24 != v25);
        *(_BYTE*)(v23 + 108) = v26 != 0;
        if (v26 == 0) {
          goto LABEL_26;
        }
        v71[0] = GameData_2123c30;
        v71[1] = v23;
        v72 = v71;
        GameRoutine_1859ec0(&v73, v71);
        if (v72 == v71) {
          v32 = 32;
          goto LABEL_47;
        }
        if (v72 != nullptr) {
          v32 = 40;
        LABEL_47:
          (*(void (**)(void))(*v72 + v32))();
        }
      }
    LABEL_26:
      v3 = v68;
      result = (__int64*)GameRoutine_16e0c00(v68, v23);
      if (++v19 == v69) {
        goto LABEL_21;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
