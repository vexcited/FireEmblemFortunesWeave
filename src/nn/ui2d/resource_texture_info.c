#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6064a0(_QWORD);
__int64 GameRoutine_606650(_QWORD, _QWORD);
__int64 ResourceTextureInfo_Unknown3(__int64 result, __int64 a2);

__int64 ResourceTextureInfo_Unknown3(__int64 result, __int64 a2)
{
  __int64 v2;
  _BYTE* v3;
  __int64 v4;

  v2 = *(_QWORD*)(result + 16);
  if (v2 != 0) {
    v3 = *(_BYTE**)(v2 + 128);
    if (v3 != nullptr && *v3 != 0) {
      v4 = result;
      GameRoutine_6064a0(*(_QWORD*)(v2 + 128));
      result = GameRoutine_606650(*(_QWORD*)(v2 + 136), a2);
      *(_QWORD*)(v4 + 16) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
