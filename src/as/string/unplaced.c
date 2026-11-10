#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* as_string_string_25ed50(_QWORD* result, __int64*);
__int64 GameRoutine_6565d0(__int64);
__int64 GameRoutine_6565f0(__int64 result);
__int64 memmove(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) VariableAssign_62dc60();
void __attribute__((noreturn)) game_hub_cdcc30();
__attribute__((swiftcall)) void
as_string_25f180(PSEUDO_X8 x8_, unsigned __int8* a1, unsigned int a2, int a3);
__attribute__((swiftcall)) void

as_string_25f180(PSEUDO_X8 x8_, unsigned __int8* a1, unsigned int a2, int a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  char* v12;
  _QWORD* result;
  __int64 v14;
  struct {
    __int64 v15[2];
    char* v16;
  } v15_;

  v5 = *a1;
  v6 = *((_QWORD*)a1 + 1);
  v7 = a2;
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  v8 = v6 >= a2;
  v9 = v6 - a2;
  if (!v8) {
    game_hub_cdcc30();
  }
  if ((v5 & 1) != 0) {
    v10 = *((unsigned __int8**)a1 + 2);
  }
  else {
    v10 = a1 + 1;
  }
  if (v9 >= a3) {
    v11 = a3;
  }
  else {
    v11 = v9;
  }
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    VariableAssign_62dc60();
  }
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v12 = (char*)GameRoutine_6565d0(v14);
    v15_.v15[1] = v11;
    v15_.v16 = v12;
    v15_.v15[0] = v14 | 1;
  }
  else {
    LOBYTE(v15_.v15[0]) = 2 * v11;
    v12 = (char*)v15_.v15 + 1;
    if (v11 == 0) {
      BYTE1(v15_.v15[0]) = 0;
      result = as_string_string_25ed50(a4, v15_.v15);
      if ((v15_.v15[0] & 1) == 0) {
        result;
        return;
      }
      {
        (_QWORD*)GameRoutine_6565f0((__int64)v15_.v16);
        return;
      }
    }
  }
  memmove(v12, &v10[v7], v11);
  v12[v11] = 0;
  result = as_string_string_25ed50(a4, v15_.v15);
  if ((v15_.v15[0] & 1) != 0) {
    (_QWORD*)GameRoutine_6565f0((__int64)v15_.v16);
    return;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
