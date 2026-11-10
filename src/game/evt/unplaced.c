#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21cd148;
extern __int64 GameData_21cd150;
extern int GameData_220b68c;
void GameRoutine_1196940(_QWORD*);
void game_evt_1195540();

void game_evt_1195540()
{
  __int64 v0;

  if (GameData_21cd148 != 0) {
    v0 = *(_QWORD*)(GameData_21cd148 + 1584);
    if (v0 != 0) {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v0 + 8LL))(
          v0, (unsigned int)GameData_220b68c);
    }
  }
  GameRoutine_1196940((_QWORD*)(GameData_21cd150 + 40));
}

#pragma GCC visibility pop
