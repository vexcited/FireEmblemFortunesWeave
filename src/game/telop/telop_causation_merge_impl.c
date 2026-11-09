#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1384e90(void);
__int64 GameRoutine_173fe30(void);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 TelopCausationMerge_1384e10(_QWORD* a1);

__int64 TelopCausationMerge_1384e10(_QWORD* a1)
{
  __int64 v2;
  char v3;

  GameRoutine_1384e90();
  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 208LL))(a1);
  if (a1[99] != 0 && (GameRoutine_173fe30() & 1) != 0 ||
      (LayoutAccessor_1563280(a1 + 21, v2, 0) & 1) != 0) {
    v3 = 0;
  }
  else {
    v3 = LayoutAccessor_1563280(a1 + 21, "Title_In", 0) ^ 1;
  }
  return v3 & 1;
}

#pragma GCC visibility pop
