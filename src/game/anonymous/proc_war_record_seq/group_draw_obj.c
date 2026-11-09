#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
const char* GroupDrawObj_Unknown2(__int64 a1);

const char* GroupDrawObj_Unknown2(__int64 a1)
{
  const char* v2;

  v2 = "L_Chapter00";
  if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32), "L_Chapter00") &
       1) != 0) {
    v2 = "L_Chapter01";
    if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32), "L_Chapter01") &
         1) != 0) {
      if ((ui_LayoutAccessor_IsPaneVisible(*(_QWORD*)(a1 + 32), "L_Chapter02") &
           1) != 0) {
        return nullptr;
      }
      else {
        return "L_Chapter02";
      }
    }
  }
  return v2;
}

#pragma GCC visibility pop
