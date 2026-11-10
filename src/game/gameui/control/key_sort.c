#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17a9aa0(__int64, __int64);
__int64 LayoutEx_579160(__int64, __int64);
extern __int64 (*GameData_20c9fa0[])();
extern __int64 (*GameData_20c9fe0[])();
extern __int64 (*GameData_20ca198[])();
extern __int64 (*game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr[])();
extern __int64 (*game_gameui_control_KeySort_vtable[])();
__attribute__((swiftcall)) void KeySort_1797030(PSEUDO_X8 x8_, __int64 a1);

__attribute__((swiftcall)) void KeySort_1797030(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 result;

  v4 = (_QWORD*)LayoutEx_579160(1072, 8);
  v5 = v4 + 3;
  v6 = v4;
  v4[1] = 0;
  v4[2] = 0;
  *v4 = GameData_20c9fe0;
  result = GameRoutine_17a9aa0((__int64)(v4 + 3), a1);
  *a2 = v5;
  a2[1] = v6;
  v6[3] = game_gameui_control_KeySort_vtable;
  v6[12] = GameData_20c9fa0;
  *(_BYTE*)(*(_QWORD*)(v6[4] + 24LL) + 88LL) &= ~1u;
  v6[3] = game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr;
  v6[12] = GameData_20ca198;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
