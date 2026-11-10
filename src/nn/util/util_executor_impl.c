#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void nn_util_Executable_TryGetResult(PSEUDO_X8 x8_,
                                                                __int64 this_);

__attribute__((swiftcall)) void nn_util_Executable_TryGetResult(PSEUDO_X8 x8_,
                                                                __int64 this_)
{
  _BYTE* a2 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  int v2;
  int v3;

  v2 = atomic_load((unsigned __int8*)(this_ + 80));
  if (v2 == 1) {
    v3 = *(unsigned __int8*)(this_ + 84);
    *a2 = 0;
    a2[4] = 0;
    if (v3 == 1) {
      *((_DWORD*)a2 + 1) = *(_DWORD*)(this_ + 88);
      *a2 = 1;
    }
  }
  else {
    *(_QWORD*)a2 = 0;
  }
  {
    this_;
    return;
  }
}

#pragma GCC visibility pop
