#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LayoutEx_5791a0(void);
extern __int64* GameData_21361f8[2];
_QWORD* Group_Destructor_578be0(_QWORD* a1);

_QWORD* Group_Destructor_578be0(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* result;
  _QWORD* v3;
  __int64 v4;

  v1 = a1 + 3;
  *a1 = GameData_21361f8[0] + 2;
  result = (_QWORD*)a1[4];
  if (result != v1) {
    do {
      v3 = (_QWORD*)result[1];
      v4 = *v3;
      *(_QWORD*)(*result + 8LL) = v3;
      *v3 = *result;
      *(_QWORD*)(v4 + 8) = result;
      *result = v4;
      LayoutEx_5791a0();
      result = v3;
    } while (v3 != v1);
  }
  return result;
}

#pragma GCC visibility pop
