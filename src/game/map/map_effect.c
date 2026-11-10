#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9a3bc0(_QWORD, _QWORD);
extern __int64 (*GameData_1fb0408[])();
extern __int64 GameData_21ec7c8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
_QWORD* game_map_MapEffect_Load();

_QWORD* game_map_MapEffect_Load()
{
  _QWORD* result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  __int64 v10;

  GameRoutine_9a3bc0(1, "Combat");
  result = v8;
  v8[0] = GameData_1fb0408;
  v9 = v8;
  v1 = *(_QWORD*)GameData_21ec7c8;
  v2 = *(_QWORD*)(GameData_21ec7c8 + 8);
  if (*(_QWORD*)GameData_21ec7c8 == v2) {
    goto LABEL_10;
  }
  do {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 144LL))(v1);
    if (v3 != 0) {
      v10 = v3;
      if (v9 == nullptr) {
        GameRoutine_60a310(0, v4, v5, v6);
      }
      (*(void (**)(_QWORD*, __int64*))(*v9 + 48LL))(v9, &v10);
    }
    v1 += 176;
  } while (v1 != v2);
  result = v9;
  if (v9 == v8) {
  LABEL_10:
    v7 = 32;
  }
  else {
    if (v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v7))(result);
}

#pragma GCC visibility pop
