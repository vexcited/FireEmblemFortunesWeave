#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1647ee0(__int64);
__int64 GameRoutine_1648380(__int64);
__int64 Pane_58df20(_QWORD, _QWORD);
__int64 Pane_58df60(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ExchangeNumDialog_Unknown85(__int64 a1);

__int64 ExchangeNumDialog_Unknown85(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;

  v2 = ui_LayoutAccessor_FindPane(a1 + 952, "L_MenuItem00");
  if (v2 != 0) {
    v3 = v2;
    Pane_58df60(*(_QWORD*)(v2 + 24), v2);
    v4 = ui_LayoutAccessor_FindPane(a1 + 952, "N_Target");
    Pane_58df20(v4, v3);
    v5 = *(_BYTE*)(v3 + 88);
    *(_QWORD*)(v3 + 52) = 0;
    *(_BYTE*)(v3 + 88) = v5 | 0x10;
  }
  GameRoutine_1647ee0(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1080LL))(a1);
  return GameRoutine_1648380(a1);
}

#pragma GCC visibility pop
