#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int GameData_2260e88;
extern int GameData_2260e8c;
extern int GameData_2260e90;
extern int GameData_2260e94;
extern int GameData_2260e98;
extern int GameData_2260e9c;
extern int GameData_2260ea0;
extern int GameData_2260ea4;
extern int GameData_2260ea8;
extern int GameData_2260eac;
extern int GameData_2260eb0;
extern int GameData_2260eb4;
extern unsigned __int8 GameData_1a8ab53[];
extern unsigned __int8 GameData_1aad7f1[];
extern unsigned __int8 GameData_1ad84d5[];
extern unsigned __int8 GameData_1aeb8c4[];
extern unsigned __int8 GameData_1af2841[];
extern unsigned __int8 GameData_1af66ca[];
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
unsigned __int8* game_facility_anonymous_16ac4f0();

unsigned __int8* game_facility_anonymous_16ac4f0()
{
  unsigned __int8* result;

  GameData_2260e88 = (unsigned int)snd_fnd_calcCrc32(GameData_1aeb8c4, 0);
  GameData_2260e8c = 1;
  GameData_2260e90 = (unsigned int)snd_fnd_calcCrc32(GameData_1ad84d5, 0);
  GameData_2260e94 = 2;
  GameData_2260e98 = (unsigned int)snd_fnd_calcCrc32(GameData_1af66ca, 0);
  GameData_2260e9c = 3;
  GameData_2260ea0 = (unsigned int)snd_fnd_calcCrc32(GameData_1a8ab53, 0);
  GameData_2260ea4 = 4;
  GameData_2260ea8 = (unsigned int)snd_fnd_calcCrc32(GameData_1aad7f1, 0);
  GameData_2260eac = 5;
  result = snd_fnd_calcCrc32(GameData_1af2841, 0);
  GameData_2260eb0 = (int)result;
  GameData_2260eb4 = 6;
  return result;
}

#pragma GCC visibility pop
