#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_21771e8;
extern unsigned int GameData_1b00670[49];
__int64 Bone_16b20(__int64 result);

__int64 Bone_16b30() { return (unsigned __int8)GameData_21771e8; }

void __attribute__((noreturn)) CurveTimeline_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) CurveTimeline1_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) CurveTimeline2_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) SpineExtension_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) AttachmentLoader_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) TextureLoader_DeletingDestructor()
{
  __udf(0x8002u);
}

void __attribute__((noreturn)) Updatable_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 GameHr_5d210(int a1) { return GameData_1b00670[a1]; }

__int64 GameHr_102520(__int64 a1, float* a2);

__int64 Bone_16b20(__int64 result)
{
  GameData_21771e8 = result;
  return result;
}

#pragma GCC visibility pop
