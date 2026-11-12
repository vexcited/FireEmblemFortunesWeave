#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212c370;

extern __int64 GameData_212cf60;

extern __int64 GameData_212dbb8[9];

extern _UNKNOWN GameData_2166898;

extern __int64 GameData_21a6070;

extern __int64 GameData_21ee260;

extern __int64 GameData_22127a8;

__int64 GameRoutine_1a09b70(_QWORD);

__int64 GameRoutine_1a09b80(_QWORD);

__int64 GameRoutine_d9d220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

bool GameHr_cc1180(int a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int16* v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;

  v4 = *GameData_212c370;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(void*))(*v7 + v8))(v7);
LABEL_9:
  if (GameData_21ee260 != 0) {
    v9 = (unsigned __int16*)(GameData_21ee260 + 8);
  }
  else {
    v9 = (unsigned __int16*)GameData_212cf60;
  }
  v10 = ((__int16)v9[1] << 14) + (*v9 << 20) + ((__int16)v9[2] << 8);
  GameRoutine_1a09b70(&GameData_2166898);
  v11 = v10 & 0xFFFFFFFC | (v10 >> 30);
  v12 = 1812433253 * v11;
  v13 = 1812433253 * ((1812433253 * (v12 ^ (v12 >> 30)) + 1) ^
                      ((1812433253 * (v12 ^ (v12 >> 30)) + 1) >> 30)) +
        2;
  v14 = 1812433253 * (v13 ^ (v13 >> 30)) + 3;
  GameRoutine_1a09b80(&GameData_2166898);
  GameRoutine_1a09b70(&GameData_2166898);
  GameRoutine_1a09b80(&GameData_2166898);
  return (int)(((((1011558400 * v11) ^ v12) >> 8) ^ (v14 >> 19) ^
                (1011558400 * v11) ^ v12 ^ v14) &
               0x7FFFFFFF) %
                 a1 +
             1 ==
         a2;
}

__int64 GameHr_cc5f00(unsigned __int8* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  _QWORD v15[3];

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(void*))(*v5 + v6))(v5);
LABEL_9:
  memset(v15, 0, sizeof(v15));
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v7 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v7 = 0;
  }
  if (GameData_22127a8 != 0) {
    v8 = GameData_22127a8;
  }
  else {
    v8 = v7;
  }
  v9 = *a1;
  v10 = (v9 & 1) == 0;
  v11 = v9 >> 1;
  if (v10) {
    v12 = a1 + 1;
  }
  else {
    v12 = *((unsigned __int8**)a1 + 2);
  }
  if (v10) {
    v13 = v11;
  }
  else {
    v13 = *((_QWORD*)a1 + 1);
  }
  return GameRoutine_d9d220(v8, v12, v13, v15, 0);
}

#pragma GCC visibility pop
