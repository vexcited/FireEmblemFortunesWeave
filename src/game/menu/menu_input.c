#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_menu_MenuInput_CheckMove_lambda0_Invoke(__int64 a1, _QWORD* a2);

__int64 game_menu_MenuInput_CheckMove_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 48LL))(*a2) & 1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2) & 1) == 0) {
    return 0;
  }
  **(_BYTE**)(a1 + 8) = 1;
  return 1;
}

#pragma GCC visibility pop
