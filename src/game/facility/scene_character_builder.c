#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SceneCharacterBuilder_Unknown3(__int64 a1);

__int64 SceneCharacterBuilder_Unknown3(__int64 a1)
{
  __int64 i;
  __int64 result;

  for (i = *(_QWORD*)(a1 + 16);; i = *(_QWORD*)(a1 + 16)) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)i + 8LL))(i, a1);
    if ((result & 1) == 0) {
      break;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 16LL))(
        *(_QWORD*)(a1 + 16), a1);
  }
  return result;
}

#pragma GCC visibility pop
