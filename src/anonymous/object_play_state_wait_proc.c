#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ObjectPlayStateWaitProc_Unknown2(__int64 a1);

__int64 ObjectPlayStateWaitProc_Unknown2(__int64 a1)
{
  __int64 v2;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;
  unsigned __int8* v8;
  unsigned int v9;
  int v10;
  __int64 result;
  unsigned __int8* v13;
  unsigned int v14;
  int v15;

  v2 = *(_QWORD*)(a1 + 152);
  if (v2 == 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2) & 1) == 0) {
    v8 = *(unsigned __int8**)(a1 + 16);
    if (v8 != nullptr) {
      v9 = *v8;
      v5 = v9 > 0x10;
      v10 = (1 << v9) & 0x1CE00;
      if (!v5 && v10 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 152) + 48LL))(
      *(_QWORD*)(a1 + 152));
  if ((result & 1) == 0) {
    v13 = *(unsigned __int8**)(a1 + 16);
    if (v13 != nullptr) {
      v14 = *v13;
      v5 = v14 > 0x10;
      v15 = (1 << v14) & 0x1CE00;
      if (!v5 && v15 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
