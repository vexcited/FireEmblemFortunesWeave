#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern int GameData_1bf52dc[];
const char* SkillUnitInfo_Unknown36(__int64 a1);

const char* SkillUnitInfo_Unknown36(__int64 a1)
{
  if ((unsigned int)*(unsigned __int8*)(a1 + 1072) - 2 > 4) {
    return "L_MenuItem_Skill";
  }
  else {
    return (char*)GameData_1bf52dc +
           GameData_1bf52dc[(unsigned __int8)(*(_BYTE*)(a1 + 1072) - 2)];
  }
}

#pragma GCC visibility pop
