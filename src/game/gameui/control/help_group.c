#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21319a0;
extern __int64* GameData_2132090[4];
__int64
game_gameui_control_HelpGroup_HasTargetElement_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 Element_1884860(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576740(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
extern __int64 (*Element_1888840_ptr[])();
extern __int64 (*GameData_2105488[])();
extern __int64 (*GameData_21054b0[])();
extern __int64 (*GameData_2105668[])();
extern __int64 (*game_gameui_control_HelpGroup_vtable[])();
__attribute__((swiftcall)) void HelpGroup_18b3f00(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, __int64 a3);

__attribute__((swiftcall)) void HelpGroup_18b3f00(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 result;

  v8 = (_QWORD*)LayoutEx_579160(1064, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_21054b0;
  Element_1884860(v8 + 3, a1, a2, a3);
  v10[3] = game_gameui_control_HelpGroup_vtable;
  v10[12] = GameData_2105488;
  *((_DWORD*)v10 + 263) = 100;
  *((_BYTE*)v10 + 1056) = 1;
  v11 = Pane_58fac0(*(_QWORD*)(v10[4] + 24LL), "HelpPriority");
  if (v11 != 0 || (v11 = GameRoutine_576740(a1, "HelpPriority")) != 0) {
    *((_DWORD*)v10 + 263) = *(_DWORD*)(v11 + *(unsigned int*)(v11 + 4));
  }
  result = Pane_58fac0(*(_QWORD*)(v10[4] + 24LL), "HelpTarget");
  if (result != 0 || (result = GameRoutine_576740(a1, "HelpTarget")) != 0) {
    *((_BYTE*)v10 + 1056) =
        *(_DWORD*)(result + *(unsigned int*)(result + 4)) != 0;
  }
  *a4 = v9;
  a4[1] = v10;
  v10[3] = Element_1888840_ptr;
  v10[12] = GameData_2105668;
  {
    result;
    return;
  }
}

__int64

game_gameui_control_HelpGroup_HasTargetElement_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 result;
  __int64 v4;

  result = *a2;
  if (*a2 != 0) {
    v4 = a2[1];
    result = __dynamic_cast(result, GameData_21319a0, GameData_2132090[0], -2);
    if (result != 0) {
      if (v4 != 0) {
        result = 1;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        **(_BYTE**)(a1 + 8) = 1;
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v4);
          return 1;
        }
      }
      else {
        **(_BYTE**)(a1 + 8) = 1;
        return 1;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
