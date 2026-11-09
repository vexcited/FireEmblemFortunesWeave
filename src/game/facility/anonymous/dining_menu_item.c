#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_143f2e0(_QWORD);
__int64 GameRoutine_16ed000(void);
__int64 GameRoutine_16ed430(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_94eea0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aa0a21;
extern __int64 (*GameData_1faf778[])();
extern __int64 GameData_212c6c0[2];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 DiningMenuItem_Unknown55(__int64 a1);
__int64 DiningMenuItem_Unknown72(__int64 a1, __int64 a2);

__int64 DiningMenuItem_Unknown55(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int16* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  char v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  GameRoutine_16ed000();
  v2 = v13;
  v13[0] = GameData_1faf778;
  v14 = v13;
  v3 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] == 0) {
    v11 = 0;
    v10 = 32;
    goto LABEL_18;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v4 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(_QWORD*)(v3 + 24);
  if (v5 != v6) {
    v7 = *v4;
    v8 = v4[1];
    v9 = v4[2];
    v10 = 32;
    while (v7 != *(unsigned __int16*)(v5 + 4) ||
           v8 != *(unsigned __int8*)(v5 + 6) ||
           v9 != *(unsigned __int8*)(v5 + 7)) {
      v5 += 368;
      if (v5 == v6) {
        v11 = 0;
        v2 = v13;
        goto LABEL_18;
      }
    }
  }
  v2 = v13;
  v10 = 32;
  v11 = 0;
  if (v5 == v6 || v5 == 0) {
    goto LABEL_18;
  }
  v15 = v5;
  v11 = GameRoutine_94eea0(v13, &v15);
  v2 = v14;
  if (v14 == v13) {
    v10 = 32;
    goto LABEL_18;
  }
  if (v14 != nullptr) {
    v10 = 40;
  LABEL_18:
    (*(void (**)(_QWORD*))(*v2 + v10))(v2);
  }
  return GameRoutine_16ed430(a1, v11 & 1, 0);
}

__int64 DiningMenuItem_Unknown72(__int64 a1, __int64 a2)
{
  _QWORD v3[2];

  v3[1] = &GameData_1aa0a21;
  v3[0] = game_HashString(&GameData_1aa0a21, a2);
  return GameRoutine_143f2e0(v3);
}

#pragma GCC visibility pop
