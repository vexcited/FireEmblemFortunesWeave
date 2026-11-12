#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aa07b9;
extern _UNKNOWN GameData_1acaac4;
extern _UNKNOWN GameData_1acecd6;
extern _UNKNOWN GameData_1acecec;
extern __int64 GameData_21c9de0;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_21d99c8;
extern __int64 GameData_21d99d0;
extern int GameData_21d9960;
extern int GameData_21d9980;
extern int GameData_21d99a0;
extern int GameData_21d99c0;
unsigned __int64
ExpTableFile_Unknown4_alt1(__int64 a1,
                           __int64 a2) __asm__("ExpTableFile_Unknown4");
void ExpTableFile_Unknown5();
void ExpTableFile_7d6750();
__int64 ExpTableFile_7d67c0(int a1);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
void GameRoutine_7d6200_alt1(__int64*, _DWORD*) __asm__("GameRoutine_7d6200");
void ExpTableFile_Unknown4();

void ExpTableFile_Unknown4()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64** v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64** v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64** v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;

  v0 = game_HashString_alt1((__int64)&GameData_1acecd6);
  v1 = *(_QWORD*)(GameData_21c9de0 + 96);
  if ((v1 & (v1 - 1)) != 0) {
    v2 = v0;
    if (v0 >= v1) {
      v2 = v0 % v1;
    }
    v3 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * v2);
    do {
      do {
        v3 = (_QWORD*)*v3;
      } while (v3[1] != v0);
    } while (v3[2] != v0);
  }
  else {
    v3 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * ((v1 - 1) & v0));
    do {
      do {
        v3 = (_QWORD*)*v3;
      } while (v3[1] != v0);
    } while (v3[2] != v0);
  }
  v4 = v3[3];
  GameData_21d9960 = 0;
  v5 = *(__int64***)(v4 + 40);
  GameData_21d9970 = GameData_21d9968;
  v6 = *v5;
  v7 = v5[1];
  if (*v5 != v7) {
    do {
      v8 = *v6++;
      GameData_21d9960 += *(unsigned __int16*)(v8 + 34);
      GameRoutine_7d6200_alt1(&GameData_21d9968, &GameData_21d9960);
    } while (v6 != v7);
  }
  v9 = game_HashString_alt1((__int64)&GameData_1aa07b9);
  v10 = *(_QWORD*)(GameData_21c9de0 + 96);
  if ((v10 & (v10 - 1)) != 0) {
    v11 = v9;
    if (v9 >= v10) {
      v11 = v9 % v10;
    }
    v12 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * v11);
    do {
      do {
        v12 = (_QWORD*)*v12;
      } while (v12[1] != v9);
    } while (v12[2] != v9);
  }
  else {
    v12 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * ((v10 - 1) & v9));
    do {
      do {
        v12 = (_QWORD*)*v12;
      } while (v12[1] != v9);
    } while (v12[2] != v9);
  }
  v13 = v12[3];
  GameData_21d9980 = 0;
  v14 = *(__int64***)(v13 + 40);
  GameData_21d9990 = GameData_21d9988;
  v15 = *v14;
  v16 = v14[1];
  if (*v14 != v16) {
    do {
      v17 = *v15++;
      GameData_21d9980 += *(unsigned __int16*)(v17 + 34);
      GameRoutine_7d6200_alt1(&GameData_21d9988, &GameData_21d9980);
    } while (v15 != v16);
  }
  v18 = game_HashString_alt1((__int64)&GameData_1acecec);
  v19 = *(_QWORD*)(GameData_21c9de0 + 96);
  if ((v19 & (v19 - 1)) != 0) {
    v20 = v18;
    if (v18 >= v19) {
      v20 = v18 % v19;
    }
    v21 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * v20);
    do {
      do {
        v21 = (_QWORD*)*v21;
      } while (v21[1] != v18);
    } while (v21[2] != v18);
  }
  else {
    v21 =
        *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * ((v19 - 1) & v18));
    do {
      do {
        v21 = (_QWORD*)*v21;
      } while (v21[1] != v18);
    } while (v21[2] != v18);
  }
  v22 = v21[3];
  GameData_21d99a0 = 0;
  v23 = *(__int64***)(v22 + 40);
  GameData_21d99b0 = GameData_21d99a8;
  v24 = *v23;
  v25 = v23[1];
  if (*v23 != v25) {
    do {
      v26 = *v24++;
      GameData_21d99a0 += *(unsigned __int16*)(v26 + 34);
      GameRoutine_7d6200_alt1(&GameData_21d99a8, &GameData_21d99a0);
    } while (v24 != v25);
  }
  v27 = game_HashString_alt1((__int64)&GameData_1acaac4);
  v28 = *(_QWORD*)(GameData_21c9de0 + 96);
  if ((v28 & (v28 - 1)) != 0) {
    v29 = v27;
    if (v27 >= v28) {
      v29 = v27 % v28;
    }
    v30 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * v29);
    do {
      do {
        v30 = (_QWORD*)*v30;
      } while (v30[1] != v27);
    } while (v30[2] != v27);
  }
  else {
    v30 =
        *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * ((v28 - 1) & v27));
    do {
      do {
        v30 = (_QWORD*)*v30;
      } while (v30[1] != v27);
    } while (v30[2] != v27);
  }
  v31 = v30[3];
  GameData_21d99c0 = 0;
  v32 = *(__int64***)(v31 + 40);
  GameData_21d99d0 = GameData_21d99c8;
  v33 = *v32;
  v34 = v32[1];
  if (*v32 != v34) {
    do {
      v35 = *v33++;
      GameData_21d99c0 += *(unsigned __int16*)(v35 + 34);
      GameRoutine_7d6200_alt1(&GameData_21d99c8, &GameData_21d99c0);
    } while (v33 != v34);
  }
}

void ExpTableFile_Unknown5()
{
  GameData_21d9960 = 0;
  GameData_21d9970 = GameData_21d9968;
  GameData_21d9980 = 0;
  GameData_21d9990 = GameData_21d9988;
  GameData_21d99a0 = 0;
  GameData_21d99b0 = GameData_21d99a8;
  GameData_21d99c0 = 0;
  GameData_21d99d0 = GameData_21d99c8;
}

void ExpTableFile_7d6750()
{
  GameData_21d9960 = 0;
  GameData_21d9970 = GameData_21d9968;
  GameData_21d9980 = 0;
  GameData_21d9990 = GameData_21d9988;
  GameData_21d99a0 = 0;
  GameData_21d99b0 = GameData_21d99a8;
  GameData_21d99c0 = 0;
  GameData_21d99d0 = GameData_21d99c8;
}

__int64 ExpTableFile_7d67c0(int a1)
{
  unsigned __int64 v1;
  __int64 result;
  int v4;
  int v5;
  unsigned int v6;
  int v7;

  v1 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v1 < 1) {
    return 0;
  }
  LODWORD(result) = 0;
  v4 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v1 - 1));
  if (v4 >= a1) {
    v4 = a1;
  }
  if (a1 >= *(_DWORD*)GameData_21d9988) {
    v5 = v4;
  }
  else {
    v5 = *(_DWORD*)GameData_21d9988;
  }
  while (1) {
    v6 = (unsigned int)(result + v1) >> 1;
    v7 = *(_DWORD*)(GameData_21d9988 + 4LL * v6);
    if (v5 == v7) {
      break;
    }
    if (v5 >= v7) {
      result = v6 + 1;
    }
    else {
      result = (unsigned int)result;
    }
    if (v5 < v7) {
      LODWORD(v1) = v6;
    }
    if ((int)result >= (int)v1) {
      return result;
    }
  }
  return v6 + 1;
}

#pragma GCC visibility pop
