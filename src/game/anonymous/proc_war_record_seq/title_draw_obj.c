#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
const char* TitleDrawObj_Unknown2(__int64 a1);
__int64 TitleDrawObj_Unknown3(__int64 a1);

const char* TitleDrawObj_Unknown2(__int64 a1)
{
  if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32), "Frm") & 1) != 0) {
    return nullptr;
  }
  else {
    return "Frm";
  }
}

__int64 TitleDrawObj_Unknown3(__int64 a1)
{
  return ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 32),
                                          *(_QWORD*)(a1 + 40), 1);
}

#pragma GCC visibility pop
