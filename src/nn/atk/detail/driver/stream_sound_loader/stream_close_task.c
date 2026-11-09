#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 StreamCloseTask_Unknown2(__int64 a1);

__int64 StreamCloseTask_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 72);
  v2 = *(_QWORD*)(v1 + 13896);
  if (v2 != 0) {
    if (*(_QWORD*)(v1 + 13888) != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2);
      *(_QWORD*)(v1 + 13888) = 0;
    }
    *(_QWORD*)(v1 + 13896) = 0;
  }
  result = *(_QWORD*)(v1 + 40);
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    *(_QWORD*)(v1 + 40) = 0;
    *(_QWORD*)(v1 + 8) = 0;
    *(_QWORD*)(v1 + 16) = 0;
    *(_WORD*)(v1 + 24) = 0;
  }
  return result;
}

#pragma GCC visibility pop
