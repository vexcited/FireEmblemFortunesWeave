#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_190200(__int64, char*);
__int64 GameRoutine_2b0();
__int64 nn_os_InitializeMutex(__int64, bool, int);
__int64 vsnprintf(_QWORD, _QWORD, _QWORD, _QWORD);
extern _WORD* GameData_2134bc0;
extern __int16* GameData_2134bd8[3];
extern __int16* GameData_2134be0[2];
extern __int16* GameData_2134be8;
__int64 snd_1056a0(__int64 a1, __int64 a2, __int64 a3, ...);
__int64 snd_17cb50();
__int64 snd_a2af20(__int64 a1, __int64 a2, char* a3, ...);

__int64 snd_1056a0(__int64 a1, __int64 a2, __int64 a3, ...)
{
  unsigned int v4;
  __builtin_va_list va;
  __builtin_va_list va1;
  char v8[1024];

  __builtin_va_start(va, a3);
  __builtin_va_start(va1, a3);
  v4 = vsnprintf(v8, a2, a3, (__int64)&va);
  GameRoutine_190200(a1, v8);
  return v4;
}

__int64 snd_17cb50()
{
  __int64 v0;
  __int16* v1;
  __int16* v2;
  __int16* v3;

  v0 = GameData_2134bc0;
  *GameData_2134bc0 = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + v0) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + v0) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + v0 + 8) = 0;
  nn_os_InitializeMutex(v0, true, 0);
  GameRoutine_2b0();
  v1 = GameData_2134be0[0];
  *GameData_2134be0[0] = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v1) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1 + 8) = 0;
  nn_os_InitializeMutex((__int64)v1, true, 0);
  GameRoutine_2b0();
  v2 = GameData_2134be8;
  *GameData_2134be8 = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v2) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v2 + 8) = 0;
  nn_os_InitializeMutex((__int64)v2, true, 0);
  GameRoutine_2b0();
  v3 = GameData_2134bd8[0];
  *GameData_2134bd8[0] = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v3) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8) = 0;
  nn_os_InitializeMutex((__int64)v3, true, 0);
  return GameRoutine_2b0();
}

__int64 snd_a2af20(__int64 a1, __int64 a2, char* a3, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a3);
  __builtin_va_start(va1, a3);
  return vsnprintf(a1, a2, a3, (__int64)&va);
}

#pragma GCC visibility pop
