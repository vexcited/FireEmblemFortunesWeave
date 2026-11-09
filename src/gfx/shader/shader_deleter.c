#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5fc040(_QWORD, _QWORD);
__int64 ShaderDeleter_Unknown2(__int64 a1);
__int64 GameRoutine_5fb980(__int64, __int64);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 ShaderDeleter_5fc040(__int64 result, __int64 a2);

__int64 ShaderDeleter_5fc040(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  __int16 v7;

  v2 = result;
  if (*(_WORD*)(result + 64) != 0) {
    v3 = *(_QWORD*)(result + 48);
    v4 = (unsigned __int64)*(unsigned __int16*)(result + 64) << 8;
    v6 = 0;
    do {
      result = GameRoutine_5fb980(*(_QWORD*)(v2 + 16) + v6, a2);
      if (*(_QWORD*)(v2 + 48) != 0) {
        result = nn_os_FinalizeMutex(v3);
        v3 += 32;
      }
      v6 += 256;
    } while (v4 != v6);
  }
  v7 = *(_WORD*)(v2 + 66);
  *(_QWORD*)(v2 + 48) = 0;
  *(_WORD*)(v2 + 66) = v7 & 0xFF7F;
  return result;
}

__int64 ShaderDeleter_Unknown2(__int64 a1)
{
  return GameRoutine_5fc040(*(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
}

#pragma GCC visibility pop
