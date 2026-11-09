#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ProcTitleTopMenu_Unknown101(__int64 a1);

__int64 ProcTitleTopMenu_Unknown101(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 1152);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 208LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
