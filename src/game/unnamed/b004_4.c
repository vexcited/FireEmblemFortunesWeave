#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212bf68;
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
unsigned __int8* GameRoutine_638b90(char*, unsigned __int8**, __int16);
void __attribute__((noreturn)) GameRoutine_639520(__int64);
__int64 GameRoutine_639910(char*, _QWORD*);
__int64 GameRoutine_63d030(__int64);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_67afd0(_QWORD);
__int64 GameHr_639910(char*, _QWORD*);
void __attribute__((noreturn)) fs_639520(__int64);
__int64 GameHr_642fe0(__int64 a1, __int64* a2);

__int64 GameHr_642fe0(__int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned __int8** v4;
  unsigned __int8* v5;
  __int64* v7;
  __int64 result;
  __int64 v9;
  int v10;
  char v11;
  __int16 v12;
  char v13;

  v9 = 0;
  v12 = 0;
  v2 = *a2;
  v13 = 0;
  v10 = -1;
  v11 = 32;
  if (**(_BYTE**)(a1 + 16) == 1) {
    v4 = *(unsigned __int8***)a1;
    v5 = GameRoutine_638b90((char*)&v9, *(unsigned __int8***)a1, 292);
    if ((unsigned int)BYTE1(v9) - 8 >= 2 && BYTE1(v9) != 0) {
      fs_639520((__int64)"a pointer");
    }
    *v4 = v5;
  }
  v7 = *(__int64**)(a1 + 8);
  GameHr_639910((char*)&v9, v7);
  result = GameRoutine_63d030(v2);
  *v7 = result;
  return result;
}

__int64* GameHr_687fc0(__int64* result, __int64 a2)
{
  char* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  if (a2 == 0) {
    return result;
  }
  v2 = (char*)*result;
  v3 = (char*)result[1];
  v4 = (char*)*result;
  if ((char*)*result == v3) {
    goto LABEL_18;
  }
  v5 = v3 - v2 - 8;
  v4 = (char*)*result;
  if ((~(_BYTE)v5 & 0x18) != 0) {
    v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
    v4 = (char*)*result;
    while (*(_QWORD*)v4 != a2) {
      v4 += 8;
      if (--v6 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v4 != v3) {
      return result;
    }
    goto LABEL_19;
  }
LABEL_7:
  if (v5 >= 0x18) {
    v4 += 16;
    while (1) {
      if (*((_QWORD*)v4 - 2) == a2) {
        if (v4 - 16 != v3) {
          return result;
        }
        goto LABEL_19;
      }
      if (*((_QWORD*)v4 - 1) == a2) {
        v4 -= 8;
        goto LABEL_18;
      }
      if (*(_QWORD*)v4 == a2) {
        goto LABEL_18;
      }
      if (*((_QWORD*)v4 + 1) == a2) {
        break;
      }
      v7 = v4 + 16;
      v4 += 32;
      if (v7 == v3) {
        goto LABEL_19;
      }
    }
    if (v4 + 8 != v3) {
      return result;
    }
  }
LABEL_19:
  v8 = result[2];
  if ((unsigned __int64)v3 >= v8) {
    v10 = (char*)(v3 - v2);
    v11 = (v3 - v2) >> 3;
    v12 = v11 + 1;
    if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
      GameRoutine_67afd0(result);
    }
    v13 = v8 - (_QWORD)v2;
    v14 = GameData_212bf68;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v16 = result;
      v17 = a2;
      v18 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v15, 16, 0);
      a2 = v17;
    }
    else {
      v16 = result;
      v18 = 0;
    }
    v19 = v18 + 8 * v15;
    v20 = (__int64)&v10[v18 + -8 * v11];
    *(_QWORD*)&v10[v18] = a2;
    v9 = (__int64)&v10[v18 + 8];
    GameRoutine_1a0b950(v20, v2, v10);
    result = v16;
    *v16 = v20;
    v16[1] = v9;
    v16[2] = v19;
    if (v2 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v21 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v14 + v21, v2);
      result = v16;
    }
  }
  else {
    *(_QWORD*)v3 = a2;
    v9 = (__int64)(v3 + 8);
  }
  result[1] = v9;
  return result;
}

#pragma GCC visibility pop
