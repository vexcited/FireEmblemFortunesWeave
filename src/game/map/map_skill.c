#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7c91c0(__int64, int, int, __int64, __int64);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cfb8[11];
extern __int64* game_map_MapRandom_instance__ptr[3];
void game_map_MapSkill_TryPutTerrain_lambda0_Invoke_9129a0(__int64 a1, int* a2,
                                                           int* a3);
void game_map_MapSkill_TryPutTerrain_lambda0_Invoke_912c40(__int64 a1,
                                                           __int64 a2);

void game_map_MapSkill_TryPutTerrain_lambda0_Invoke_9129a0(__int64 a1, int* a2,
                                                           int* a3)
{
  _DWORD* v3;
  int v4;
  int v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  float v10;
  __int64* v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  char v22;

  v3 = *(_DWORD**)(a1 + 24);
  v4 = *a2;
  v6 = *a3;
  v7 = **(_QWORD**)(a1 + 16);
  v8 = GameData_212c880[0];
  v9 = *v3 & 0xFFF;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v9) +
                634LL) != 0) {
    v10 = (float)*(
        unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                     8 * v9) +
                          634LL);
    nn_os_LockMutex(&game_g_random_mutex);
    v11 = game_map_MapRandom_instance__ptr[0];
    v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8);
    v13 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL)) ^
          (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((__int128*)0x10LL))
           << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 4) = v12;
    v15 = (v14 >> 8) ^ (v13 >> 19) ^ v14 ^ v13;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8) = v13;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 12) = v15;
    v16 = v15 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    if ((float)(v10 * 0x1.3880000000000p+13f) <= (float)(v16 % 0xF4240)) {
    LABEL_9:
      v20 = 0;
      goto LABEL_10;
    }
    LODWORD(v9) = *v3 & 0xFFF;
  }
  if ((_DWORD)v9 == 0) {
    goto LABEL_9;
  }
  v17 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (unsigned int)v9);
  v18 = *(unsigned __int16*)(v17 + 656);
  if (*(_WORD*)(v17 + 656) == 0) {
    goto LABEL_9;
  }
  v19 = 8;
  v20 = 0;
  v21 = *GameData_212cfb8[0];
  do {
    v22 = GameRoutine_7c91c0(*(_QWORD*)(v21 + 16), v4, v6, v7,
                             *(_QWORD*)(*(_QWORD*)(v17 + 664) + v19));
    --v18;
    v19 += 16;
    v20 |= v22;
  } while (v18 != 0);
LABEL_10:
  **(_BYTE**)(a1 + 8) |= v20 & 1;
}

void game_map_MapSkill_TryPutTerrain_lambda0_Invoke_912c40(__int64 a1,
                                                           __int64 a2)
{
  _DWORD* v2;
  int v3;
  int v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  float v9;
  __int64* v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  char v21;

  v2 = *(_DWORD**)(a1 + 24);
  v3 = *(char*)(a2 + 1);
  v5 = *(char*)(a2 + 2);
  v6 = **(_QWORD**)(a1 + 16);
  v7 = GameData_212c880[0];
  v8 = *v2 & 0xFFF;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v8) +
                634LL) != 0) {
    v9 = (float)*(
        unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                     8 * v8) +
                          634LL);
    nn_os_LockMutex(&game_g_random_mutex);
    v10 = game_map_MapRandom_instance__ptr[0];
    v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8);
    v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v13 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL)) ^
          (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((__int128*)0x10LL))
           << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v10 + 4) = v11;
    v14 = (v13 >> 8) ^ (v12 >> 19) ^ v13 ^ v12;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v10 + 8) = v12;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v10 + 12) = v14;
    v15 = v14 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    if ((float)(v9 * 0x1.3880000000000p+13f) <= (float)(v15 % 0xF4240)) {
    LABEL_9:
      v19 = 0;
      goto LABEL_10;
    }
    LODWORD(v8) = *v2 & 0xFFF;
  }
  if ((_DWORD)v8 == 0) {
    goto LABEL_9;
  }
  v16 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8LL * (unsigned int)v8);
  v17 = *(unsigned __int16*)(v16 + 656);
  if (*(_WORD*)(v16 + 656) == 0) {
    goto LABEL_9;
  }
  v18 = 8;
  v19 = 0;
  v20 = *GameData_212cfb8[0];
  do {
    v21 = GameRoutine_7c91c0(*(_QWORD*)(v20 + 16), v3, v5, v6,
                             *(_QWORD*)(*(_QWORD*)(v16 + 664) + v18));
    --v17;
    v18 += 16;
    v19 |= v21;
  } while (v17 != 0);
LABEL_10:
  **(_BYTE**)(a1 + 8) |= v19 & 1;
}

#pragma GCC visibility pop
