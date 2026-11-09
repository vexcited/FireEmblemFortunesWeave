#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_21771e8;
__int64 Bone_16b20(__int64 result);

__int64 Bone_16b30() { return (unsigned __int8)GameData_21771e8; }

__int64 GameHr_102520(__int64 a1, float* a2);

__int64 Bone_16b20(__int64 result)
{
  GameData_21771e8 = result;
  return result;
}

#pragma GCC visibility pop
