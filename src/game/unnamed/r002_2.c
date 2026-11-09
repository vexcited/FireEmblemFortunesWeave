#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fb2880[])();
extern __int64 GameData_1fb8da0;
extern __int64 GameData_212bf68;
extern __int64* GameData_212e008[9];
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_158ac40(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_158aec0(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_158b280(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_158b3c0(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_158ca00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_158cac0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e6880(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_6c3470(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_996680(void);
__int64 GameRoutine_9d3d10(_QWORD, _QWORD);
__int64 GameRoutine_9d3e90(_QWORD);

_QWORD* GameHr_9966a0(_QWORD* result, unsigned __int64 a2, __int64 a3,
                      __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 (***v24)(_QWORD);
  __int64 (***v25)(_QWORD);
  _QWORD* v26;
  __int64 (***v27)(_QWORD);
  _QWORD* v28;
  __int64 v29;

  v7 = (_QWORD*)result[1];
  v6 = result[2];
  v8 = result;
  if (0x3AEF6CA970586723LL * ((v6 - (__int64)v7) >> 4) >= a2) {
    if (a2 != 0) {
      v17 = 2224 * a2;
      v18 = &v7[278 * a2];
      do {
        GameRoutine_1a0ba50(v7, 0, 2224, a4, a5, a6);
        result = (_QWORD*)GameRoutine_6c2b50(v7);
        *v7 = GameData_1fb2880;
        v7 += 278;
        v17 -= 2224;
      } while (v17 != 0);
      v7 = v18;
    }
    v8[1] = v7;
  }
  else {
    v9 = (__int64)v7 - *result;
    v10 = a2 + 0x3AEF6CA970586723LL * (v9 >> 4);
    if (v10 > 0x1D77B654B82C33LL) {
      GameRoutine_996680();
    }
    v11 = GameData_212bf68;
    v12 = 0x3AEF6CA970586723LL * ((v6 - *result) >> 4);
    v13 = 2 * v12;
    if (2 * v12 <= v10) {
      v13 = a2 + 0x3AEF6CA970586723LL * (v9 >> 4);
    }
    if (v12 >= 0xEBBDB2A5C1619LL) {
      v14 = 0x1D77B654B82C33LL;
    }
    else {
      v14 = v13;
    }
    if (v14 != 0) {
      if (v14 > 0x1D77B654B82C33LL) {
        GameRoutine_60a210(result);
      }
      v15 = a2;
      v16 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 2224 * v14, 16, 0);
      a2 = v15;
    }
    else {
      v16 = 0;
    }
    v19 = (_QWORD*)(v16 + v9);
    v20 = v19;
    v21 = 2224 * a2;
    v22 = &v19[278 * a2];
    do {
      GameRoutine_1a0ba50(v20, 0, 2224, a4, a5, a6);
      result = (_QWORD*)GameRoutine_6c2b50(v20);
      *v20 = GameData_1fb2880;
      v20 += 278;
      v21 -= 2224;
    } while (v21 != 0);
    v23 = v16 + 2224 * v14;
    v24 = (__int64 (***)(_QWORD))*v8;
    v25 = (__int64 (***)(_QWORD))v8[1];
    v26 = (_QWORD*)((char*)v19 + *v8 - (_QWORD)v25);
    if (v25 != (__int64 (***)(_QWORD))*v8) {
      v27 = (__int64 (***)(_QWORD))*v8;
      v28 = v26;
      do {
        GameRoutine_6c3470(v28, v27);
        *v28 = GameData_1fb2880;
        v27 += 278;
        v28 += 278;
      } while (v27 != v25);
      do {
        result = (_QWORD*)(**v24)(v24);
        v24 += 278;
      } while (v24 != v25);
      v24 = (__int64 (***)(_QWORD))*v8;
    }
    *v8 = v26;
    v8[1] = v22;
    v8[2] = v23;
    if (v24 != nullptr) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v29 = 56;
      }
      return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v11 + v29, v24);
    }
  }
  return result;
}

__int64 GameHr_9d32b0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned int v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  char* v38;
  int* v39;
  _QWORD v40[2];
  int v41;
  int v42;

  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
  result =
      GameRoutine_1a0a6c0(result, GameData_212e008[0], &GameData_1fb8da0, 0);
  if (result == 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 88);
  v4 = *(unsigned __int8*)(result + 2328);
  v5 = *(_QWORD**)(a1 + 1184);
  v6 = result;
  v7 = *(_QWORD*)(a1 + 1200);
  v41 = 0;
  v40[0] = 0;
  v40[1] = 0;
  *(_QWORD*)(a1 + 1192) = v5;
  if ((unsigned __int64)v5 >= v7) {
    v9 = v7 - (_QWORD)v5;
    v10 = v9 >> 2;
    if ((unsigned __int64)(v9 >> 2) <= 1) {
      v10 = 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    if (v11 >> 61 != 0) {
      GameRoutine_60a210(result);
    }
    v12 = GameData_212bf68;
    v13 =
        (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v11, 16, 0);
    v14 = &v13[v11];
    *v13 = 0;
    v8 = v13 + 1;
    *(_QWORD*)(a1 + 1184) = v13;
    *(_QWORD*)(a1 + 1192) = v13 + 1;
    *(_QWORD*)(a1 + 1200) = v14;
    if (v5 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v15 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v12 + v15, v5);
    }
  }
  else {
    *v5 = 0;
    v8 = v5 + 1;
  }
  *(_QWORD*)(a1 + 1192) = v8;
  v42 = 0;
  if (v4 != 0) {
    GameRoutine_158ac40(&v37, 2, v3, v6 + 96);
    HIDWORD(v40[0]) = (unsigned __int64)(v38 - v37) >> 3;
    if (v37 != nullptr) {
      v38 = v37;
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v16 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v16, v37);
    }
    GameRoutine_158ac40(&v37, 1, v3, v6 + 96);
    LODWORD(v40[1]) = (unsigned __int64)(v38 - v37) >> 3;
    if (v37 != nullptr) {
      v38 = v37;
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v17 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v17, v37);
    }
    GameRoutine_158aec0(&v37, v3, v6 + 96);
    v41 = (unsigned __int64)(v38 - v37) >> 3;
    if (v37 != nullptr) {
      v38 = v37;
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v18 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v18, v37);
    }
    GameRoutine_158b3c0(&v37, v3, v6 + 96);
    HIDWORD(v40[1]) = (unsigned __int64)(v38 - v37) >> 3;
    if (v37 != nullptr) {
      v38 = v37;
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v19 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v19, v37);
    }
    GameRoutine_1560070(&v35, a1 + 848, "L_CompareInfo");
    GameRoutine_158cac0(&v35, v3, v6 + 96);
    if (v36 != 0) {
      GameRoutine_1a09c50(v36);
    }
    v37 = (char*)v40;
    v38 = (char*)a1;
    v39 = &v42;
    GameRoutine_9d3d10(&v37, 1);
    GameRoutine_9d3d10(&v37, 2);
    GameRoutine_9d3d10(&v37, 3);
    GameRoutine_9d3d10(&v37, 4);
  }
  else {
    GameRoutine_1560070(&v33, a1 + 848, "L_CompareInfo");
    GameRoutine_158ca00(&v33, v3, 0);
    if (v34 != 0) {
      GameRoutine_1a09c50(v34);
    }
  }
  GameRoutine_1560070(&v37, a1 + 848, "L_CompareInfo");
  if (v38 != nullptr) {
    v20 = GameRoutine_1a0a0c0(v38);
    v21 = v37;
    if (v38 != nullptr) {
      GameRoutine_1a09c50(v38);
    }
    if (v20 != 0 && v21 != nullptr) {
      GameRoutine_158b280(&v37, v3, v6 + 96);
      if (v38 == v37) {
        v22 = 0;
      }
      else {
        v22 = v4;
      }
      GameRoutine_1560ec0(v21, "A_ClassExp", v22);
      if (v37 != nullptr) {
        v38 = v37;
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v23 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v23, v37);
      }
      goto LABEL_50;
    }
    if (v20 != 0) {
    LABEL_50:
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        GameRoutine_1a09c50(v20);
      }
    }
  }
  *(_DWORD*)(a1 + 1216) =
      ((*(_QWORD*)(a1 + 1192) - *(_QWORD*)(a1 + 1184)) >> 3) - 1;
  v24 = v42;
  *(_DWORD*)(a1 + 1220) = v42;
  *(_DWORD*)(a1 + 1224) = v24;
  GameRoutine_1560070(&v31, a1 + 848, "L_CompareInfo/L_PageTab");
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  if (v32 != 0) {
    v26 = GameRoutine_1a0a0c0(v32);
    if (v26 != 0) {
      v27 = v31;
      v28 = v26;
      if (v31 != 0) {
        *(_DWORD*)(a1 + 1256) = 1;
        v29 = v32;
        if (v32 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                    memory_order_relaxed);
        }
        v30 = *(_QWORD*)(a1 + 1320);
        *(_QWORD*)(a1 + 1312) = v27;
        *(_QWORD*)(a1 + 1320) = v29;
        if (v30 != 0) {
          GameRoutine_1a09c50(v30);
        }
        GameRoutine_16e6880(a1 + 1216, v25, 4, 5);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
        GameRoutine_1a09c50(v28);
      }
    }
    if (v32 != 0) {
      GameRoutine_1a09c50(v32);
    }
  }
  return GameRoutine_9d3e90(a1);
}

#pragma GCC visibility pop
