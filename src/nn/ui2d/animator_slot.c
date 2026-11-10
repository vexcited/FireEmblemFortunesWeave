#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* nn_ui2d_Layout_GetRuntimeTypeInfoStatic();
__int64 GameRoutine_582390(__int64);
__int64 LayoutEx_579180(__int64);
__int64 LayoutEx_584780(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_2136108;
extern _UNKNOWN GameData_1a0d058;
extern _UNKNOWN GameData_21a3968;
extern __int64* GameData_21360e0[3];
extern __int64 GameData_1a0d060;
extern __int64 GameData_21a3960;
__int64 AnimatorSlot_Destructor(__int64 a1);

__int64 AnimatorSlot_Destructor(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 16);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2136108,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a3968) != 0) {
    GameData_21a3960 = (__int64)nn_ui2d_Layout_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(&GameData_21a3968);
  }
  if (v1 == 0) {
    goto LABEL_13;
  }
  v2 = (__int64*)(**(__int64 (***)(__int64))v1)(v1);
  if (v2 == &GameData_21a3960) {
    goto LABEL_10;
  }
  do {
    v2 = (__int64*)*v2;
  } while (v2 != &GameData_21a3960 && v2 != nullptr);
  if (v2 != nullptr) {
  LABEL_10:
    result = LayoutEx_579180(112);
    if (result != 0) {
      v5 = result;
      LayoutEx_584780(result);
      v6 = *(_QWORD*)(v5 + 8);
      v8 = *(_QWORD*)(v1 + 8);
      v7 = v1 + 8;
      result = v5;
      *(_QWORD*)(v5 + 8) = v8;
      *(_QWORD*)(v6 + 8) = v7;
      *(_QWORD*)(*(_QWORD*)v7 + 8LL) = v5 + 8;
      *(_QWORD*)v7 = v6;
    }
  }
  else {
  LABEL_13:
    result = LayoutEx_579180(80);
    if (result != 0) {
      v9 = (_QWORD*)result;
      GameRoutine_582390(result);
      v10 = GameData_21360e0[0];
      v9[9] = 0;
      *v9 = v10 + 2;
      v11 = v9[1];
      v9[1] = &GameData_1a0d058;
      *(_QWORD*)(v11 + 8) = 8;
      GameData_1a0d060 = (__int64)(v9 + 1);
      (*(_UNKNOWN**)0x8LL) = (_UNKNOWN*)v11;
      return (__int64)v9;
    }
  }
  return result;
}

#pragma GCC visibility pop
