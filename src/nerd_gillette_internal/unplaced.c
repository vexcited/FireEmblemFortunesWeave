#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_OnAssertionFailure_plt_859bb0(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_OnAssertionFailure_plt_859bc0(_QWORD, _QWORD, _QWORD,
                                                     _QWORD, _QWORD);
__int64 nerd_gillette_internal_OnAssertionFailed(
    long double a1, long double a2, long double a3, long double a4,
    long double a5, long double a6, long double a7, long double a8, __int64 a9,
    __int64 a10, unsigned int a11, __int64 a12, __int64 a13, __int64 a14,
    __int64 a15, __int64 a16, char a17);

__int64 nerd_gillette_internal_OnAssertionFailed(
    long double a1, long double a2, long double a3, long double a4,
    long double a5, long double a6, long double a7, long double a8, __int64 a9,
    __int64 a10, unsigned int a11, __int64 a12, __int64 a13, __int64 a14,
    __int64 a15, __int64 a16, char a17)
{

#pragma clang fp contract(off)
  _QWORD v18[4];
  _QWORD v19[8];

  v18[1] = a14;
  v18[2] = a15;
  v18[3] = a16;
  if (a13 != 0) {
    v19[4] = &a17;
    v19[5] = v19;
    v19[6] = v18;
    v19[7] = 0xFFFFFF80FFFFFFE8LL;
    v19[2] = v18;
    v19[3] = 0xFFFFFF80FFFFFFE8LL;
    v19[0] = &a17;
    v19[1] = v19;
    nn_diag_detail_OnAssertionFailure_plt_859bb0(
        0, a12, "<Function Unknown>", a10, a11, a13, v19, a16, *(_QWORD*)&a1,
        *((_QWORD*)&a1 + 1), *(_QWORD*)&a2, *((_QWORD*)&a2 + 1), *(_QWORD*)&a3,
        *((_QWORD*)&a3 + 1), *(_QWORD*)&a4, *((_QWORD*)&a4 + 1), *(_QWORD*)&a5,
        *((_QWORD*)&a5 + 1), *(_QWORD*)&a6, *((_QWORD*)&a6 + 1), *(_QWORD*)&a7,
        *((_QWORD*)&a7 + 1), *(_QWORD*)&a8, *((_QWORD*)&a8 + 1));
  }
  else {
    nn_diag_detail_OnAssertionFailure_plt_859bc0(0, a12, "<Function Unknown>",
                                                 a10, a11);
  }
  return 0;
}

#pragma GCC visibility pop
