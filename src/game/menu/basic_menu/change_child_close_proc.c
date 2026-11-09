#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ChangeChildCloseProc_Unknown2(__int64 result);

__int64 ChangeChildCloseProc_Unknown2(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = result;
  if ((*(_BYTE*)(result + 152) & 1) == 0) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(result + 160) + 1000LL))(
        *(_QWORD*)(result + 160));
    if ((result & 1) == 0) {
      return result;
    }
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v1 + 160) + 752LL))(
        *(_QWORD*)(v1 + 160));
  }
  v2 = *(unsigned __int8**)(v1 + 16);
  if (v2 != nullptr) {
    v3 = *v2;
    v4 = v3 > 0x10;
    v5 = (1 << v3) & 0x1CE00;
    if (!v4 && v5 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v1 + 136) |= 8u;
  return result;
}

#pragma GCC visibility pop
