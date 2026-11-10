#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21319a0;
extern __int64* GameData_2132090[4];
__int64
game_gameui_control_HelpGroup_HasTargetElement_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
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
