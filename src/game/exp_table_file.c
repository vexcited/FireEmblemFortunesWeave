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
unsigned __int64 ExpTableFile_Unknown4(__int64 a1, __int64 a2);
void ExpTableFile_Unknown5();
void ExpTableFile_7d6750();

unsigned __int64 ExpTableFile_Unknown4(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64** v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64** v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  unsigned __int64 result;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64** v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;

  v2 = game_HashString(&GameData_1acecd6, a2);
  v4 = *(_QWORD*)(GameData_21c9de0 + 96);
  if ((v4 & (v4 - 1)) != 0) {
    v5 = v2;
    if (v2 >= v4) {
      v5 = v2 % v4;
    }
    v6 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * v5);
    do {
      do {
        v6 = (_QWORD*)*v6;
      } while (v6[1] != v2);
    } while (v6[2] != v2);
  }
  else {
    v6 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * ((v4 - 1) & v2));
    do {
      do {
        v6 = (_QWORD*)*v6;
      } while (v6[1] != v2);
    } while (v6[2] != v2);
  }
  v7 = v6[3];
  GameData_21d9960 = 0;
  v8 = *(__int64***)(v7 + 40);
  GameData_21d9970 = GameData_21d9968;
  v9 = *v8;
  v10 = v8[1];
  if (*v8 != v10) {
    do {
      v11 = *v9++;
      GameData_21d9960 += *(unsigned __int16*)(v11 + 34);
      GameRoutine_7d6200(&GameData_21d9968, &GameData_21d9960);
    } while (v9 != v10);
  }
  v12 = game_HashString(&GameData_1aa07b9, v3);
  v14 = *(_QWORD*)(GameData_21c9de0 + 96);
  if ((v14 & (v14 - 1)) != 0) {
    v15 = v12;
    if (v12 >= v14) {
      v15 = v12 % v14;
    }
    v16 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * v15);
    do {
      do {
        v16 = (_QWORD*)*v16;
      } while (v16[1] != v12);
    } while (v16[2] != v12);
  }
  else {
    v16 =
        *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * ((v14 - 1) & v12));
    do {
      do {
        v16 = (_QWORD*)*v16;
      } while (v16[1] != v12);
    } while (v16[2] != v12);
  }
  v17 = v16[3];
  GameData_21d9980 = 0;
  v18 = *(__int64***)(v17 + 40);
  GameData_21d9990 = GameData_21d9988;
  v19 = *v18;
  v20 = v18[1];
  if (*v18 != v20) {
    do {
      v21 = *v19++;
      GameData_21d9980 += *(unsigned __int16*)(v21 + 34);
      GameRoutine_7d6200(&GameData_21d9988, &GameData_21d9980);
    } while (v19 != v20);
  }
  v22 = game_HashString(&GameData_1acecec, v13);
  v24 = *(_QWORD*)(GameData_21c9de0 + 96);
  if ((v24 & (v24 - 1)) != 0) {
    v25 = v22;
    if (v22 >= v24) {
      v25 = v22 % v24;
    }
    v26 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * v25);
    do {
      do {
        v26 = (_QWORD*)*v26;
      } while (v26[1] != v22);
    } while (v26[2] != v22);
  }
  else {
    v26 =
        *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * ((v24 - 1) & v22));
    do {
      do {
        v26 = (_QWORD*)*v26;
      } while (v26[1] != v22);
    } while (v26[2] != v22);
  }
  v27 = v26[3];
  GameData_21d99a0 = 0;
  v28 = *(__int64***)(v27 + 40);
  GameData_21d99b0 = GameData_21d99a8;
  v29 = *v28;
  v30 = v28[1];
  if (*v28 != v30) {
    do {
      v31 = *v29++;
      GameData_21d99a0 += *(unsigned __int16*)(v31 + 34);
      GameRoutine_7d6200(&GameData_21d99a8, &GameData_21d99a0);
    } while (v29 != v30);
  }
  result = game_HashString(&GameData_1acaac4, v23);
  v33 = *(_QWORD*)(GameData_21c9de0 + 96);
  if ((v33 & (v33 - 1)) != 0) {
    v34 = result;
    if (result >= v33) {
      v34 = result % v33;
    }
    v35 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) + 8 * v34);
    do {
      do {
        v35 = (_QWORD*)*v35;
      } while (v35[1] != result);
    } while (v35[2] != result);
  }
  else {
    v35 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de0 + 88) +
                      8 * ((v33 - 1) & result));
    do {
      do {
        v35 = (_QWORD*)*v35;
      } while (v35[1] != result);
    } while (v35[2] != result);
  }
  v36 = v35[3];
  GameData_21d99c0 = 0;
  v37 = *(__int64***)(v36 + 40);
  GameData_21d99d0 = GameData_21d99c8;
  v38 = *v37;
  v39 = v37[1];
  if (*v37 != v39) {
    do {
      v40 = *v38++;
      GameData_21d99c0 += *(unsigned __int16*)(v40 + 34);
      result = GameRoutine_7d6200(&GameData_21d99c8, &GameData_21d99c0);
    } while (v38 != v39);
  }
  return result;
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

#pragma GCC visibility pop
