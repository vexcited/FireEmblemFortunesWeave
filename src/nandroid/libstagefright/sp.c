#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
_QWORD* sp_4d4810(_QWORD* a1, __int64 a2);

_QWORD* sp_4d4810(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;

  v2 = *a1;
  v4 = a1;
  if (a2 != 0) {
    a1 = (_QWORD*)nandroid_RefBase_incStrong_plt(a2, a1);
  }
  if (v2 != 0) {
    a1 = (_QWORD*)nandroid_RefBase_decStrong_plt(v2, v4);
  }
  if (v2 != *v4) {
    nandroid_sp_report_race_plt(a1);
  }
  *v4 = a2;
  return v4;
}

#pragma GCC visibility pop
