#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern __int64 (*GameData_1f955a0[])();

extern __int64 (*GameData_1f95620[])();

extern __int64 (*GameData_1f9fc40[])();

extern __int64 (*GameData_1f9fcc0[])();

extern __int64 GameData_212bf68;

extern _UNKNOWN* GameData_212ce38;

extern __int64* GameData_212cfd0[8];

extern __int64 GameData_21ca300;

extern __int64 GameData_21caab0;

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_6b6860(__int64);

__int64 GameRoutine_6b6ee0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6ea8c0(_QWORD, long double);

__int64 GameRoutine_71e5c0(_QWORD);

__int64 GameRoutine_72a260(_QWORD);

__int64 GameRoutine_72b4a0(_QWORD);

__int64 GameRoutine_72b6c0(_QWORD);

__int64 GameRoutine_738de0(void);

__int64 GameRoutine_757f60(__int64 result, _DWORD*, unsigned int, unsigned int,
                           __int64);

__int64 GameRoutine_7a8520(_QWORD);

__int64 GameRoutine_7c6120(_QWORD);

__int64 GameRoutine_828a00(_QWORD, _QWORD);

__int64 GameRoutine_829bb0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_876070(_QWORD, _QWORD);

__int64 GameHr_6b6a60(__int64 a1)
{
  unsigned int* v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _DWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v1 = *(unsigned int**)(a1 + 1);
  v2 = v1[1];
  if ((_DWORD)v2 != 0) {
    v3 = 0;
    v4 = 0;
    v5 = GameData_212ce38;
    while (1) {
      v9 = *v1;
      if (v4 >= v9) {
        v13 = v4 - v9;
        v14 = __clz(v13 + 16);
        v11 = *(_QWORD*)(*((_QWORD*)v1 + 2) + 8 * (27 - v14) + 8) +
              32LL * (unsigned int)(v13 - v5[28 - v14]);
        v15 = *(_BYTE*)(v11 + 16) & 0x7F;
        if (v15 == 7) {
        LABEL_14:
          GameRoutine_6b6860(v11 + 16);
          v16 = *v1;
          if (v4 < v16) {
            v8 = *((_QWORD*)v1 + 1) + 32 * v4;
            goto LABEL_4;
          }
          goto LABEL_3;
        }
        if (v15 != 8) {
          goto LABEL_5;
        }
      }
      else {
        v10 = *((_QWORD*)v1 + 1);
        v11 = v10 + v3;
        v12 = *(_BYTE*)(v10 + v3 + 16) & 0x7F;
        if (v12 == 7) {
          goto LABEL_14;
        }
        if (v12 != 8) {
          goto LABEL_5;
        }
        v11 = v10 + v3;
      }
      GameHr_6b6a60(v11 + 16);
      v16 = *v1;
      if (v4 < v16) {
        v8 = *((_QWORD*)v1 + 1) + v3;
        goto LABEL_4;
      }
    LABEL_3:
      v6 = v4 - v16;
      v7 = __clz(v6 + 16);
      v8 = *(_QWORD*)(*((_QWORD*)v1 + 2) + 8 * (27 - v7) + 8) +
           32LL * (unsigned int)(v6 - v5[28 - v7]);
    LABEL_4:
      *(_BYTE*)(v8 + 16) = 0;
      v2 = v1[1];
    LABEL_5:
      ++v4;
      v3 += 32;
      if (v4 == v2) {
        goto LABEL_17;
      }
    }
  }
  v4 = 0;
LABEL_17:
  GameRoutine_6b6ee0(v1, 0, v1, v4);
  v17 = *((__int64**)v1 + 2);
  v18 = GameData_212bf68;
  if (v17 != nullptr) {
    v19 = *v17;
    if (*v17 == 0) {
      goto LABEL_27;
    }
    do {
      v20 = *((_QWORD*)v1 + 2);
      v21 = *(_QWORD*)(v20 + 8 * v19);
      if (v21 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v18 + v22, v21);
        v20 = *((_QWORD*)v1 + 2);
      }
      *(_QWORD*)(v20 + 8 * v19--) = 0;
    } while (v19 != 0);
    v17 = *((__int64**)v1 + 2);
    if (v17 != nullptr) {
    LABEL_27:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v23 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v18 + v23, v17);
    }
  }
  v24 = 128;
  if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
    v24 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v18 + v24, v1);
}

__int64 GameHr_717c70(__int64 result, __int64* a2)
{
  __int64 v2;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _WORD v12[2];
  __int64 v13;
  unsigned __int8 v14;
  __int128 v15;
  _DWORD v16[6];
  _QWORD v17[2];
  int v18;
  char v19;
  int v20;
  int v21;
  __int16 v22;
  __int64 v23;
  char v24;
  _QWORD v25[4];
  _QWORD* v26;

  v2 = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    v12[0] = 0;
    v14 = 0;
    v15 = 0u;
    *(_QWORD*)v16 = 0;
    *(_DWORD*)((char*)&v16[1] + 3) = 0;
    *(_QWORD*)&v16[3] = 0;
    v16[5] = 0;
    v13 = 0x10000000000LL;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v17[0] = 0;
    *(_QWORD*)((char*)v17 + 7) = 0;
    if ((GameRoutine_876070(v12, result) & 1) != 0) {
      v4 = HIBYTE(v13);
      *(_BYTE*)(v2 + 15) = BYTE6(v13);
      v5 = v14;
      *(_DWORD*)(v2 + 60) = v4;
      *(_DWORD*)(v2 + 64) = v5;
      *(_QWORD*)(v2 + 24) = *(_QWORD*)((char*)&v15 + 2);
      GameRoutine_71e5c0(v2);
    }
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2);
    v7 = GameRoutine_7a8520(v6);
    v8 = *a2;
    LODWORD(v25[0]) = v7;
    if (((*(__int64 (**)(__int64*, _QWORD*))(v8 + 16))(a2, v25) & 1) == 0) {
      return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
    }
    v9 = *(_QWORD*)(v2 + 48);
    v26 = v25;
    *(_BYTE*)(v9 + 3932768) |= 4u;
    v25[0] = GameData_1f9fc40;
    GameRoutine_828a00(v2 + 40, v25);
    if (v26 == v25) {
      v10 = 32;
    }
    else {
      if (v26 == nullptr) {
        goto LABEL_10;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v26 + v10))((__int64)v26);
  LABEL_10:
    v26 = v25;
    v25[0] = GameData_1f9fcc0;
    GameRoutine_829bb0(v2 + 40, a2, v25);
    if (v26 == v25) {
      v11 = 32;
    }
    else {
      if (v26 == nullptr) {
      LABEL_15:
        *(_BYTE*)(*(_QWORD*)(v2 + 48) + 3932768LL) &= ~4u;
        return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v26 + v11))((__int64)v26);
    goto LABEL_15;
  }
  return result;
}

_QWORD* GameHr_738cc0(__int64 a1, long double a2)
{
  __int64* v3;
  long double v4;
  __int64 v5;
  _QWORD* result;
  int v7;
  __int64 v8;
  __int64 v9;

  v3 = GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0 &&
      GameRoutine_6ea8c0(*GameData_212cfd0[0] + 8, a2) != 0) {
    GameRoutine_738de0();
  }
  GameRoutine_7c6120(a1);
  if (*(_BYTE*)(*v3 + 8) == 0) {
    result = *(_QWORD**)(a1 + 192);
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    if (result == (_QWORD*)(a1 + 160)) {
    LABEL_13:
      v7 = 2;
      goto LABEL_14;
    }
  LABEL_10:
    v7 = 2;
    if (result == nullptr) {
      goto LABEL_16;
    }
    goto LABEL_11;
  }
  v5 = GameRoutine_6ea8c0(*v3 + 8, v4);
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (v5 == 0) {
    if (result == (_QWORD*)(a1 + 160)) {
      goto LABEL_13;
    }
    goto LABEL_10;
  }
  v7 = 5;
  if (result == (_QWORD*)(a1 + 160)) {
  LABEL_14:
    v8 = 32;
    goto LABEL_15;
  }
  if (result != nullptr) {
  LABEL_11:
    v8 = 40;
  LABEL_15:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
  }
LABEL_16:
  v9 = *(_QWORD*)(a1 + 8);
  if (v9 != 0) {
    while (1) {
      if (*(_BYTE*)v9 == 2) {
        if (*(_DWORD*)(v9 + 32) == v7) {
          *(_QWORD*)(a1 + 16) = v9;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v9 == 0) {
        return result;
      }
      v9 += 64;
    }
  }
  return result;
}

__int64 GameHr_75bac0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;
  int v13;
  _QWORD v14[4];
  _QWORD* v15;

  v2 = *(_QWORD*)(a1 + 152);
  v3 = *(_QWORD*)(a1 + 160);
  if (v3 != 0) {
    LODWORD(v3) = *(_WORD*)(v3 + 16) & 0xFFF;
  }
  v4 = *(char*)(v2 + 584);
  v5 = *(char*)(v2 + 585);
  v13 = v3;
  v11[0] = GameData_1f95620;
  v11[1] = a1;
  v15 = v14;
  v12 = v11;
  v14[0] = GameData_1f955a0;
  v14[1] = v11;
  GameRoutine_757f60(v2, &v13, v4, v5, (__int64)v14);
  if (v15 == v14) {
    v6 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_8;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v15 + v6))((__int64)v15);
LABEL_8:
  v7 = GameData_21ca300;
  v8 = *(_QWORD*)(GameData_21ca300 + 96);
  GameRoutine_72b4a0(v8);
  GameRoutine_72b6c0(v8);
  GameRoutine_72a260(*(_QWORD*)(v7 + 152));
  result = (__int64)v12;
  if (v12 == v11) {
    v10 = 32;
  }
  else {
    if (v12 == nullptr) {
      return result;
    }
    v10 = 40;
  }
  return (*(__int64 (**)(__int64))(*v12 + v10))((__int64)v12);
}

#pragma GCC visibility pop
