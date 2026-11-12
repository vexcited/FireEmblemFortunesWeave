#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9a3bc0(_QWORD, _QWORD);
extern __int64 (*GameData_1fb0408[])();
extern __int64 GameData_21ec7c8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
_QWORD* game_map_MapEffect_Load();
void GameRoutine_9a3bc0_alt1(int, const char*) __asm__("GameRoutine_9a3bc0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

_QWORD* game_map_MapEffect_Load()
{
  _QWORD* result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;
  __int64 v7;

  GameRoutine_9a3bc0_alt1(1, "Combat");
  result = v5_.v5;
  v5_.v5[0] = GameData_1fb0408;
  v5_.v6 = v5_.v5;
  v1 = *(_QWORD*)GameData_21ec7c8;
  v2 = *(_QWORD*)(GameData_21ec7c8 + 8);
  if (*(_QWORD*)GameData_21ec7c8 == v2) {
    goto LABEL_10;
  }
  do {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 144LL))(v1);
    if (v3 != 0) {
      v7 = v3;
      if (v5_.v6 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v5_.v6 + 48LL))(v5_.v6, &v7);
    }
    v1 += 176;
  } while (v1 != v2);
  result = v5_.v6;
  if (v5_.v6 == v5_.v5) {
  LABEL_10:
    v4 = 32;
  }
  else {
    if (v5_.v6 == nullptr) {
      return result;
    }
    v4 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v4))(result);
}

#pragma GCC visibility pop
