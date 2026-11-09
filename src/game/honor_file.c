#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7d6200(_QWORD, _QWORD);
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 GameData_21f8138;
extern __int64 GameData_21f8140;
extern __int64* GameData_212c9a0[147];
extern int GameData_21f8110;
extern int GameData_21f8130;
__int64 HonorFile_Unknown4();
void HonorFile_Unknown5();
void HonorFile_9c6380();

__int64 HonorFile_Unknown4()
{
  __int64* v0;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  v0 = GameData_212c9a0[0];
  GameData_21f8110 = 0;
  v1 = *GameData_212c9a0[0];
  GameData_21f8120 = GameData_21f8118;
  v2 = *(__int64**)(v1 + 64);
  v3 = *(__int64**)(v1 + 72);
  if (v2 != v3) {
    do {
      v4 = *v2;
      if (*(_BYTE*)(*v2 + 32) != 0 && *(unsigned __int8*)(v4 + 33) <= 1u) {
        GameData_21f8110 += *(unsigned __int16*)(v4 + 34);
        result = GameRoutine_7d6200(&GameData_21f8118, &GameData_21f8110);
      }
      ++v2;
    } while (v2 != v3);
    v2 = *(__int64**)(*v0 + 64);
    v3 = *(__int64**)(*v0 + 72);
  }
  GameData_21f8130 = 0;
  GameData_21f8140 = GameData_21f8138;
  while (v2 != v3) {
    v6 = *v2;
    if (*(_BYTE*)(*v2 + 32) != 0 && *(unsigned __int8*)(v6 + 33) <= 3u) {
      GameData_21f8130 += *(unsigned __int16*)(v6 + 34);
      result = GameRoutine_7d6200(&GameData_21f8138, &GameData_21f8130);
    }
    ++v2;
  }
  return result;
}

void HonorFile_Unknown5()
{
  GameData_21f8110 = 0;
  GameData_21f8120 = GameData_21f8118;
  GameData_21f8130 = 0;
  GameData_21f8140 = GameData_21f8138;
}

void HonorFile_9c6380()
{
  GameData_21f8110 = 0;
  GameData_21f8120 = GameData_21f8118;
  GameData_21f8130 = 0;
  GameData_21f8140 = GameData_21f8138;
}

#pragma GCC visibility pop
