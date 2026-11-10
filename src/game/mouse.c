#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_2258178;
float game_Mouse_OnChangeMenuSenseConfig_lambda0_Invoke(__int64 a1, int* a2);
__int64* game_8224a0(unsigned __int8);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
extern __int64 (*GameData_204c5b8[])();
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 (***game_Mouse_OnChangeMenuSenseConfig())();

__int64 (***game_Mouse_OnChangeMenuSenseConfig())()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  float v2;
  __int64 v3;
  float v4;
  float v5;
  int v6;
  __int64 (***result)();
  __int64 v8;
  struct {
    __int64 (**v9)();
    float v10;
    char gap12_[20];
    __int64 (***v11)();
  } v9_;
  int v12;

  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v0 = game_8224a0(0x29u),
  v1 = COERCE_AS(__typeof__(v1),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v0),
    v1 = COERCE_AS(__typeof__(v1),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v3 != 0) {
      v2 = (float)*(int*)(v3 + 32);
    }
  }
  v4 = (float)(v2 / 0x1.4000000000000p+3f) + 0x1.0000000000000p-1f;
  if (GameData_2258178 != 0) {
    v5 = *(float*)(GameData_2258178 + 208);
    v6 = 0;
    v9_.v9 = GameData_204c5b8;
    v9_.v11 = &v9_.v9;
    v9_.v10 = v4 * v5;
    do {
      if ((unsigned int)(v6 - 2) < 9 || (unsigned int)(v6 - 23) <= 1) {
        v12 = v6;
        if (v9_.v11 == nullptr) {
          GameRoutine_60a310(),
              v1 = COERCE_AS(__typeof__(v1),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        ((void (*)(__int64 (***)(void), int*))(*v9_.v11)[6])(v9_.v11, &v12),
            v1 = COERCE_AS(__typeof__(v1),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      ++v6;
    } while (v6 != 25);
    result = v9_.v11;
    if (v9_.v11 == &v9_.v9) {
      v8 = 4;
    }
    else {
      if (v9_.v11 == nullptr) {
        return result;
      }
      v8 = 5;
    }
  }
  else {
    result = &v9_.v9;
    v9_.v9 = GameData_204c5b8;
    v9_.v11 = &v9_.v9;
    v8 = 4;
    v9_.v10 = v4 * 0x0.0p+0f;
  }
  return (__int64 (***)(void))(
      (__int64 (*)(__int64 (***)(void), __int64))(*result)[v8])(result, v1);
}

float game_Mouse_OnChangeMenuSenseConfig_lambda0_Invoke(__int64 a1, int* a2)
{
  float result;

  if (GameData_2258178 != 0) {
    result = *(float*)(a1 + 8);
    *(float*)(GameData_2258178 + 4LL * *a2 + 300) = result;
  }
  return result;
}

#pragma GCC visibility pop
