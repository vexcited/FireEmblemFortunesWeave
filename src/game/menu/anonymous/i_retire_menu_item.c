#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_80cdc0(_QWORD);
__int64 game_menu_anonymous_IRetireMenuItem_ACall_closure_Invoke(__int64 a1);

__int64 game_menu_anonymous_IRetireMenuItem_ACall_closure_Invoke(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;

  v1 = *(_QWORD**)(a1 + 8);
  (*(void (**)(_QWORD*))(*v1 + 608LL))(v1);
  v2 = v1[16];
  if (v2 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  GameRoutine_80cdc0(v2);
  return 2;
}

#pragma GCC visibility pop
