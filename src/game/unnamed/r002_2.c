#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fb2880[])();

extern __int64 GameData_212bf68;

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6c2b50(_QWORD);

__int64 GameRoutine_6c3470(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_996680(void);

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

#pragma GCC visibility pop
