#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ProcObeliskClearStatusMenu_Unknown85(__int64 a1);

__int64 ProcObeliskClearStatusMenu_Unknown85(__int64 a1)
{
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, "T_Get_Skill", 0);
  return ui_LayoutAccessor_SetPaneVisible(a1 + 848, "T_Get_CombatArts", 0);
}

#pragma GCC visibility pop
