#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
__int64 math_RandomGetInt(int a1);

__int64 math_RandomGetInt(int a1)
{
  __int64* v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  int v7;

  nn_os_LockMutex(&game_g_random_mutex);
  v2 = game_map_MapRandom_instance__ptr[0];
  v3 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8);
  v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL)) ^
       (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL))
        << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2 + 4) = v3;
  v6 = (v5 >> 8) ^ (v4 >> 19) ^ v5 ^ v4;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2 + 8) = v4;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2 + 12) = v6;
  v7 = v6 & 0x7FFFFFFF;
  nn_os_UnlockMutex(&game_g_random_mutex);
  return (unsigned int)(v7 % a1);
}

#pragma GCC visibility pop
