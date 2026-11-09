#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_25ec80(_QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1f0(_QWORD);
__int64* VariableAssign_62da90(__int64* a1, __int64 a2, unsigned __int64 a3);
_QWORD* VariableAssign_62dbb0(_QWORD* a1, __int64 a2, unsigned __int64 a3);
void __attribute__((noreturn)) VariableAssign_62dc60();

__int64* VariableAssign_62da90(__int64* a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v5 = *a1 & 0xFFFFFFFFFFFFFFFELL;
  if (a3 >= v5) {
    if (a3 - v5 + 1 > -9LL - v5) {
      VariableAssign_62dc60(a1);
    }
    v7 = v5 - 1;
    if ((*a1 & 1) != 0) {
      v8 = (char*)a1[2];
    }
    else {
      v8 = (char*)a1 + 1;
    }
    if (v7 > 0x7FFFFFFFFFFFFFF2LL) {
      v11 = -9;
    }
    else {
      v9 = 2 * v7;
      if (a3 > 2 * v7) {
        v9 = a3;
      }
      if ((v9 | 7) == 0x17) {
        v10 = 26;
      }
      else {
        v10 = (v9 | 7) + 1;
      }
      if (v9 >= 0x17) {
        v11 = v10;
      }
      else {
        v11 = 23;
      }
      if (v11 == 0) {
        v12 = 1;
        v6 = 0;
        if (a3 == 0) {
          goto LABEL_23;
        }
        goto LABEL_22;
      }
    }
    v13 = a2;
    v14 = GameRoutine_25ec80(v11);
    a2 = v13;
    v6 = v14;
    v12 = v11 | 1;
    if (a3 == 0) {
    LABEL_23:
      GameRoutine_25ec90(v8, v5);
      a1[1] = a3;
      a1[2] = v6;
      *a1 = v12;
      goto LABEL_24;
    }
  LABEL_22:
    memmove(v6, a2, a3);
    goto LABEL_23;
  }
  v6 = a1[2];
  a1[1] = a3;
  if (a3 != 0) {
    memmove(v6, a2, a3);
  }

LABEL_24:
  *(_BYTE*)(v6 + a3) = 0;
  return a1;
}

_QWORD* VariableAssign_62dbb0(_QWORD* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v8;

  if (a3 > 0x16) {
    if (a3 + 9 <= 0x1E) {
      VariableAssign_62dc60(a1);
    }
    v6 = 44;
    if (a3 > 0x2C) {
      v6 = a3;
    }
    v8 = v6 | 7;
    v5 = GameRoutine_25ec80((v6 | 7) + 1);
    memmove(v5, a2, a3);
    a1[1] = a3;
    a1[2] = v5;
    *a1 = v8 + 2;
  }
  else {
    *(_BYTE*)a1 = 2 * a3;
    v5 = (__int64)a1 + 1;
    if (a3 != 0) {
      memmove((char*)a1 + 1, a2, a3);
    }
  }
  *(_BYTE*)(v5 + a3) = 0;
  return a1;
}

void __attribute__((noreturn)) VariableAssign_62dc60()
{
  GameRoutine_60a1f0("basic_string");
}

#pragma GCC visibility pop
