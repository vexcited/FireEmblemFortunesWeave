#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_8f0320(_QWORD, _QWORD);
__int64
game_evt_demo_SceneObjectWork_SceneObjectWork_lambda0_Invoke(__int64 a1,
                                                             _QWORD* a2);
__int64
game_evt_demo_SceneObjectWork_SceneObjectWork_lambda1_Invoke(__int64 result);

__int64 game_evt_demo_SceneObjectWork_SceneObjectWork_lambda0_Invoke(__int64 a1,
                                                                     _QWORD* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  result = v2 + 32;
  if ((_QWORD*)(v2 + 32) != a2) {
    result = GameRoutine_8f0320(result, *a2);
  }
  *(_BYTE*)(v2 + 88) = 0;
  return result;
}

__int64

game_evt_demo_SceneObjectWork_SceneObjectWork_lambda1_Invoke(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 88LL) = 0;
  return result;
}

#pragma GCC visibility pop
