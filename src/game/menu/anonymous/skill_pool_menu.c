#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_204fdb0;
extern __int64* GameData_21319e8[10];
__int64 SkillPoolMenu_Unknown85(__int64 a1);
__int64 SkillPoolMenu_Unknown139(__int64 a1);

__int64 SkillPoolMenu_Unknown85(__int64 a1)
{
  __int64 result;
  __int64 i;

  result = ui_LayoutAccessor_FindPane(a1 + 952, "SubInfoList");
  if (result != 0) {
    for (i = *(_QWORD*)(result + 40); i != result + 32; i = *(_QWORD*)(i + 8)) {
      *(_BYTE*)(i + 80) &= ~1u;
    }
  }
  return result;
}

__int64 SkillPoolMenu_Unknown139(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(__dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                                 &GameData_204fdb0, 0) +
                  304);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 240LL))(v1, 1);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v1 + 248LL))(v1, 1);
}

#pragma GCC visibility pop
