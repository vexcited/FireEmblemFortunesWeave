#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_651190(__int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
void GameRoutine_651250(__int64);
void __attribute__((noreturn)) GameRoutine_5f320();
void __attribute__((noreturn)) GameRoutine_5f340();
void __attribute__((noreturn)) GameRoutine_5f360();
void __attribute__((noreturn)) GameRoutine_5f380();
void __attribute__((noreturn)) GameRoutine_60a210();
unsigned __int64 NvnStateCache_5eb70(_QWORD* a1, _QWORD* a2);
__int64 NvnStateCache_5ec70(_QWORD* a1, _QWORD* a2);
unsigned __int64 NvnStateCache_5edf0(_QWORD* a1, _DWORD* a2);
__int64 NvnStateCache_5eef0(_QWORD* a1, _QWORD* a2);

unsigned __int64 NvnStateCache_5eb70(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  signed __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;

  v2 = a1[2];
  v3 = (_QWORD*)a1[3];
  v4 = a1[4];
  v6 = (signed __int64)v3 - v2;
  if ((unsigned __int64)v3 >= v4) {
    v8 = (v6 >> 3) + 1;
    if (v8 >> 61 != 0) {
      GameRoutine_5f320();
    }
    v9 = v4 - v2;
    v10 = (__int64)(v4 - v2) >> 2;
    if (v10 <= v8) {
      v10 = (v6 >> 3) + 1;
    }
    if (v9 >= 0x7FFFFFFFFFFFFFF8LL) {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    if (v11 != 0) {
      if (v11 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v12 = a2;
      v13 = GameRoutine_651190(8 * v11);
      a2 = v12;
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 8 * v11;
    v15 = v13 + v6 - 8 * (v6 >> 3);
    *(_QWORD*)(v13 + v6) = *a2;
    v7 = v13 + v6 + 8;
    memcpy(v15, v2, v6);
    a1[2] = v15;
    a1[3] = v7;
    a1[4] = v14;
    if (v2 != 0) {
      GameRoutine_651250(v2);
    }
  }
  else {
    *v3 = *a2;
    v7 = (__int64)(v3 + 1);
  }
  a1[3] = v7;
  return (unsigned __int64)v6 >> 3;
}

__int64 NvnStateCache_5ec70(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v3 = a1[5];
  v2 = (_QWORD*)a1[6];
  v4 = a1[7];
  if ((unsigned __int64)v2 >= v4) {
    v15 = (unsigned __int64)v2 - v3;
    v14 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v2 - v3) >> 4);
    v16 = v14 + 1;
    if (v14 + 1 > 0x333333333333333LL) {
      GameRoutine_5f340();
    }
    v17 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v4 - v3) >> 4);
    if (2 * v17 > v16) {
      v16 = 2 * v17;
    }
    if (v17 >= 0x199999999999999LL) {
      v18 = 0x333333333333333LL;
    }
    else {
      v18 = v16;
    }
    if (v18 != 0) {
      if (v18 > 0x333333333333333LL) {
        GameRoutine_60a210();
      }
      v19 = a2;
      v20 = GameRoutine_651190(80 * v18);
      a2 = v19;
    }
    else {
      v20 = 0;
    }
    v21 = a2[7];
    v22 = v20 + 80 * v18;
    v23 = (_QWORD*)(v20 + v15);
    v7 = v20 + v15 + 80;
    v23[6] = a2[6];
    v23[7] = v21;
    v24 = a2[9];
    v23[8] = a2[8];
    v23[9] = v24;
    v25 = a2[3];
    v23[2] = a2[2];
    v23[3] = v25;
    v26 = a2[5];
    v23[4] = a2[4];
    v23[5] = v26;
    v27 = a2[1];
    *v23 = *a2;
    v23[1] = v27;
    memcpy(v20, v3, v15);
    a1[5] = v20;
    a1[6] = v7;
    a1[7] = v22;
    if (v3 != 0) {
      GameRoutine_651250(v3);
    }
  }
  else {
    v6 = a2[1];
    v7 = (__int64)(v2 + 10);
    *v2 = *a2;
    v2[1] = v6;
    v8 = a2[2];
    v9 = a2[3];
    v10 = a2[5];
    v2[4] = a2[4];
    v2[5] = v10;
    v2[2] = v8;
    v2[3] = v9;
    v11 = a2[6];
    v12 = a2[7];
    v13 = a2[9];
    v2[8] = a2[8];
    v2[9] = v13;
    v2[6] = v11;
    v2[7] = v12;
    v14 = 0xCCCCCCCCCCCCCCCDLL * (((__int64)v2 - v3) >> 4);
  }
  a1[6] = v7;
  return (unsigned int)v14;
}

unsigned __int64 NvnStateCache_5edf0(_QWORD* a1, _DWORD* a2)
{
  __int64 v2;
  _DWORD* v3;
  unsigned __int64 v4;
  signed __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _DWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;

  v2 = a1[8];
  v3 = (_DWORD*)a1[9];
  v4 = a1[10];
  v6 = (signed __int64)v3 - v2;
  if ((unsigned __int64)v3 >= v4) {
    v8 = (v6 >> 2) + 1;
    if (v8 >> 62 != 0) {
      GameRoutine_5f360();
    }
    v9 = v4 - v2;
    v10 = (__int64)(v4 - v2) >> 1;
    if (v10 <= v8) {
      v10 = (v6 >> 2) + 1;
    }
    if (v9 >= 0x7FFFFFFFFFFFFFFCLL) {
      v11 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    if (v11 != 0) {
      if (v11 >> 62 != 0) {
        GameRoutine_60a210();
      }
      v12 = a2;
      v13 = GameRoutine_651190(4 * v11);
      a2 = v12;
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 4 * v11;
    v15 = v13 + v6 - 4 * (v6 >> 2);
    *(_DWORD*)(v13 + v6) = *a2;
    v7 = v13 + v6 + 4;
    memcpy(v15, v2, v6);
    a1[8] = v15;
    a1[9] = v7;
    a1[10] = v14;
    if (v2 != 0) {
      GameRoutine_651250(v2);
    }
  }
  else {
    *v3 = *a2;
    v7 = (__int64)(v3 + 1);
  }
  a1[9] = v7;
  return (unsigned __int64)v6 >> 2;
}

__int64 NvnStateCache_5eef0(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;

  v3 = a1[11];
  v2 = (_QWORD*)a1[12];
  v4 = a1[13];
  if ((unsigned __int64)v2 >= v4) {
    v10 = (unsigned __int64)v2 - v3;
    v9 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v2 - v3) >> 3);
    v11 = v9 + 1;
    if (v9 + 1 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_5f380();
    }
    v12 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v4 - v3) >> 3);
    if (2 * v12 > v11) {
      v11 = 2 * v12;
    }
    if (v12 >= 0x555555555555555LL) {
      v13 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v13 = v11;
    }
    if (v13 != 0) {
      if (v13 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210();
      }
      v14 = a2;
      v15 = GameRoutine_651190(24 * v13);
      a2 = v14;
    }
    else {
      v15 = 0;
    }
    v16 = (_QWORD*)(v15 + v10);
    v17 = v15 + 24 * v13;
    v18 = a2[1];
    v8 = v15 + v10 + 24;
    *v16 = *a2;
    v16[1] = v18;
    v16[2] = a2[2];
    memcpy(v15, v3, v10);
    a1[11] = v15;
    a1[12] = v8;
    a1[13] = v17;
    if (v3 != 0) {
      GameRoutine_651250(v3);
    }
  }
  else {
    v6 = *a2;
    v7 = a2[2];
    v8 = (__int64)(v2 + 3);
    v2[1] = a2[1];
    v2[2] = v7;
    *v2 = v6;
    LODWORD(v9) = -1431655765 * (((__int64)v2 - v3) >> 3);
  }
  a1[12] = v8;
  return (unsigned int)v9;
}

#pragma GCC visibility pop
