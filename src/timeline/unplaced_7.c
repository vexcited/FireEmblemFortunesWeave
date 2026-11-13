#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_651190(__int64);
extern unsigned int GameData_1b37d88[29];
void GameRoutine_651250(__int64);
void GameRoutine_6b55a0(__int64, unsigned __int8);
__int64 timeline_b940(unsigned int** a1);
__int64 timeline_bc80(__int64* a1, unsigned int* a2, unsigned __int64 a3);
__int64 timeline_c000(unsigned int* a1, unsigned __int64 a2);
__int64 timeline_d0a0(unsigned int* a1, unsigned __int64 a2);

__int64 timeline_b940(unsigned int** a1)
{
  unsigned int* v1;
  unsigned __int64 v2;

  v1 = a1[1];
  v2 = **a1;
  if ((unsigned __int64)v1 >= v2) {
    return 28LL - __clz((unsigned int)((_DWORD)v1 - v2 + 16));
  }
  else {
    return 0;
  }
}

__int64 timeline_bc80(__int64* a1, unsigned int* a2, unsigned __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v6;
  unsigned __int8* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  int v17;
  _OWORD* v18;
  unsigned __int8 v19;
  _OWORD* v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  bool v24;
  int v25;
  unsigned __int8* v26;
  __int64 v27;
  unsigned __int8 v28;
  __int64 v29;
  int v30;

  v3 = *a1;
  v4 = *(unsigned int*)(*a1 + 4);
  if (a3 == v4) {
    return 34;
  }
  v6 = *a2;
  if (a3 >= v6) {
    v11 = __clz((unsigned int)(a3 - v6 + 16));
    v9 =
        (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)a2 + 2) + 8 * (27 - v11) + 8) +
                           32LL * ((_DWORD)a3 - (_DWORD)v6 -
                                   GameData_1b37d88[28 - v11]));
    v10 = a3 + 1;
    if (a3 + 1 == v4) {
      goto LABEL_21;
    }
    goto LABEL_7;
  }
  v9 = (unsigned __int8*)(*((_QWORD*)a2 + 1) + 32 * a3);
  v10 = a3 + 1;
  if (a3 + 1 != v4) {
  LABEL_7:
    v12 = 32 * a3 + 32;
    while (1) {
      v14 = (unsigned int)v6;
      if (v10 >= (unsigned int)v6) {
        v16 = __clz((unsigned int)(v10 - v6 + 16));
        v15 = (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)a2 + 2) +
                                            8 * (27 - v16) + 8) +
                                 32LL * ((_DWORD)v10 - (_DWORD)v6 -
                                         GameData_1b37d88[28 - v16]));
        if (v9 != v15) {
        LABEL_13:
          v17 = *v9;
          if ((unsigned int)(v17 - 6) <= 4) {
            GameRoutine_6b55a0((__int64)v9, v17);
          }
          *(_OWORD*)v9 = *(_OWORD*)v15;
          *v15 = 0;
          v18 = v15 + 16;
          v21 = v9[16];
          v20 = v9 + 16;
          v19 = v21;
          if ((unsigned int)(v21 - 6) <= 4) {
            GameRoutine_6b55a0((__int64)v20, v19);
          }
          *v20 = *v18;
          *(_BYTE*)v18 = 0;
          v14 = *a2;
          LODWORD(v6) = *a2;
        }
      }
      else {
        v15 = (unsigned __int8*)(*((_QWORD*)a2 + 1) + v12);
        if (v9 != v15) {
          goto LABEL_13;
        }
      }
      if (v10 >= v14) {
        v13 = __clz((unsigned int)(v10 - v6 + 16));
        v9 = (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)a2 + 2) + 8 * (27 - v13) +
                                           8) +
                                32LL * ((_DWORD)v10++ - (_DWORD)v6 -
                                        GameData_1b37d88[28 - v13]));
        v12 += 32LL;
        if (v4 == v10) {
          goto LABEL_20;
        }
      }
      else {
        v9 = (unsigned __int8*)(*((_QWORD*)a2 + 1) + v12);
        ++v10;
        v12 += 32LL;
        if (v4 == v10) {
        LABEL_20:
          v3 = *a1;
          LODWORD(v4) = *(_DWORD*)(*a1 + 4);
          break;
        }
      }
    }
  }
LABEL_21:
  if ((_DWORD)v4 != 0) {
    v22 = *(_DWORD*)v3;
    v23 = (unsigned int)(v4 - 1);
    *(_DWORD*)(v3 + 4) = v23;
    v24 = (unsigned int)v23 >= v22;
    v25 = v23 - v22;
    if (v24) {
      v29 = __clz((unsigned int)(v25 + 16));
      v26 = (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v3 + 16) + 8 * (27 - v29) +
                                          8) +
                               32LL * (v25 - GameData_1b37d88[28 - v29]));
      v27 = (__int64)(v26 + 16);
      v28 = v26[16];
      if ((unsigned int)v28 - 6 > 4) {
        goto LABEL_27;
      }
    }
    else {
      v26 = (unsigned __int8*)(*(_QWORD*)(v3 + 8) + 32 * v23);
      v27 = (__int64)(v26 + 16);
      v28 = v26[16];
      if ((unsigned int)v28 - 6 > 4) {
      LABEL_27:
        v30 = *v26;
        if ((unsigned int)(v30 - 6) <= 4) {
          GameRoutine_6b55a0((__int64)v26, v30);
        }
        return 0;
      }
    }
    GameRoutine_6b55a0(v27, v28);
    goto LABEL_27;
  }
  return 0;
}

__int64 timeline_c000(unsigned int* a1, unsigned __int64 a2)
{
  __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64* v11;

  v2 = *((_QWORD*)a1 + 2);
  if (v2 != 0) {
    v4 = *(_QWORD*)v2;
    if (a2 != 0) {
      goto LABEL_3;
    }
  LABEL_10:
    v7 = v4 + 1;
    if (v4 + 1 <= 0x1C) {
      goto LABEL_12;
    }
    return 0;
  }
  v4 = 0;
  if (a2 == 0) {
    goto LABEL_10;
  }
LABEL_3:
  if (a2 > 0xFFFFFFF0) {
    return 0;
  }
  v5 = *a1;
  v6 = 28LL - __clz((unsigned int)(a2 - v5 + 16));
  if (a2 >= v5) {
    v7 = v6;
  }
  else {
    v7 = 0;
  }
  if (v7 <= v4) {
    return 1;
  }
LABEL_12:
  if (v2 != 0) {
    if (v4 < v7) {
      goto LABEL_16;
    }
    goto LABEL_18;
  }
  v2 = GameRoutine_651190(232);
  *(_QWORD*)(v2 + 224) = 0;
  *((_QWORD*)a1 + 2) = v2;
  *(_OWORD*)v2 = (__typeof__(*(_OWORD*)v2)){0};
  *(_OWORD*)(v2 + 16) = (__typeof__(*(_OWORD*)(v2 + 16))){0};
  *(_OWORD*)(v2 + 32) = (__typeof__(*(_OWORD*)(v2 + 32))){0};
  *(_OWORD*)(v2 + 48) = (__typeof__(*(_OWORD*)(v2 + 48))){0};
  *(_OWORD*)(v2 + 64) = (__typeof__(*(_OWORD*)(v2 + 64))){0};
  *(_OWORD*)(v2 + 80) = (__typeof__(*(_OWORD*)(v2 + 80))){0};
  *(_OWORD*)(v2 + 96) = (__typeof__(*(_OWORD*)(v2 + 96))){0};
  *(_OWORD*)(v2 + 112) = (__typeof__(*(_OWORD*)(v2 + 112))){0};
  *(_OWORD*)(v2 + 128) = (__typeof__(*(_OWORD*)(v2 + 128))){0};
  *(_OWORD*)(v2 + 144) = (__typeof__(*(_OWORD*)(v2 + 144))){0};
  *(_OWORD*)(v2 + 160) = (__typeof__(*(_OWORD*)(v2 + 160))){0};
  *(_OWORD*)(v2 + 176) = (__typeof__(*(_OWORD*)(v2 + 176))){0};
  *(_OWORD*)(v2 + 192) = (__typeof__(*(_OWORD*)(v2 + 192))){0};
  *(_OWORD*)(v2 + 208) = (__typeof__(*(_OWORD*)(v2 + 208))){0};
  if (v4 < v7) {
  LABEL_16:
    while ((unsigned __int64)((16LL << v4) - 0x1000000000000000LL) >=
           0xF000000000000001LL) {
      v9 = GameRoutine_651190(256LL << v4);
      v10 = v2 + 8 * v4++;
      *(_QWORD*)(v10 + 8) = v9;
      if (v7 == v4) {
        goto LABEL_18;
      }
    }
    if (v4 > *(_QWORD*)v2) {
      do {
        GameRoutine_651250(*(_QWORD*)(v2 + 8 * v4));
        v11 = *((unsigned __int64**)a1 + 2);
        *(_QWORD*)(v2 + 8 * v4--) = 0;
      } while (v4 > *v11);
    }
    return 0;
  }
LABEL_18:
  *(_QWORD*)v2 = v7;
  return 1;
}

__int64 timeline_d0a0(unsigned int* a1, unsigned __int64 a2)
{
  __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64* v11;

  v2 = *((_QWORD*)a1 + 2);
  if (v2 != 0) {
    v4 = *(_QWORD*)v2;
    if (a2 != 0) {
      goto LABEL_3;
    }
  LABEL_10:
    v7 = v4 + 1;
    if (v4 + 1 <= 0x1C) {
      goto LABEL_12;
    }
    return 0;
  }
  v4 = 0;
  if (a2 == 0) {
    goto LABEL_10;
  }
LABEL_3:
  if (a2 > 0xFFFFFFF0) {
    return 0;
  }
  v5 = *a1;
  v6 = 28LL - __clz((unsigned int)(a2 - v5 + 16));
  if (a2 >= v5) {
    v7 = v6;
  }
  else {
    v7 = 0;
  }
  if (v7 <= v4) {
    return 1;
  }
LABEL_12:
  if (v2 != 0) {
    if (v4 < v7) {
      goto LABEL_16;
    }
    goto LABEL_18;
  }
  v2 = GameRoutine_651190(232);
  *(_QWORD*)(v2 + 224) = 0;
  *((_QWORD*)a1 + 2) = v2;
  *(_OWORD*)v2 = (__typeof__(*(_OWORD*)v2)){0};
  *(_OWORD*)(v2 + 16) = (__typeof__(*(_OWORD*)(v2 + 16))){0};
  *(_OWORD*)(v2 + 32) = (__typeof__(*(_OWORD*)(v2 + 32))){0};
  *(_OWORD*)(v2 + 48) = (__typeof__(*(_OWORD*)(v2 + 48))){0};
  *(_OWORD*)(v2 + 64) = (__typeof__(*(_OWORD*)(v2 + 64))){0};
  *(_OWORD*)(v2 + 80) = (__typeof__(*(_OWORD*)(v2 + 80))){0};
  *(_OWORD*)(v2 + 96) = (__typeof__(*(_OWORD*)(v2 + 96))){0};
  *(_OWORD*)(v2 + 112) = (__typeof__(*(_OWORD*)(v2 + 112))){0};
  *(_OWORD*)(v2 + 128) = (__typeof__(*(_OWORD*)(v2 + 128))){0};
  *(_OWORD*)(v2 + 144) = (__typeof__(*(_OWORD*)(v2 + 144))){0};
  *(_OWORD*)(v2 + 160) = (__typeof__(*(_OWORD*)(v2 + 160))){0};
  *(_OWORD*)(v2 + 176) = (__typeof__(*(_OWORD*)(v2 + 176))){0};
  *(_OWORD*)(v2 + 192) = (__typeof__(*(_OWORD*)(v2 + 192))){0};
  *(_OWORD*)(v2 + 208) = (__typeof__(*(_OWORD*)(v2 + 208))){0};
  if (v4 < v7) {
  LABEL_16:
    while ((unsigned __int64)((16LL << v4) - 0x800000000000000LL) >=
           0xF800000000000001LL) {
      v9 = GameRoutine_651190(512LL << v4);
      v10 = v2 + 8 * v4++;
      *(_QWORD*)(v10 + 8) = v9;
      if (v7 == v4) {
        goto LABEL_18;
      }
    }
    if (v4 > *(_QWORD*)v2) {
      do {
        GameRoutine_651250(*(_QWORD*)(v2 + 8 * v4));
        v11 = *((unsigned __int64**)a1 + 2);
        *(_QWORD*)(v2 + 8 * v4--) = 0;
      } while (v4 > *v11);
    }
    return 0;
  }
LABEL_18:
  *(_QWORD*)v2 = v7;
  return 1;
}

#pragma GCC visibility pop
