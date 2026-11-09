#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_293b30(void);
__int64 GameRoutine_2a4da0(_QWORD);
__int64 GameRoutine_2a4dc0(_QWORD, _QWORD);
__int64 MmlSequenceTrackAllocator_Unknown2(__int64 a1, __int64 a2);
__int64 MmlSequenceTrackAllocator_Unknown3(__int64 a1, __int64 a2);
__int64 MmlSequenceTrackAllocator_Unknown4(__int64 result);

__int64 MmlSequenceTrackAllocator_Unknown2(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;

  result = GameRoutine_2a4da0(a1 + 16);
  if (result != 0) {
    v5 = result;
    GameRoutine_293b30();
    *(_QWORD*)(v5 + 600) = a2;
    *(_QWORD*)(v5 + 616) = *(_QWORD*)(a1 + 8);
    return v5;
  }
  return result;
}

__int64 MmlSequenceTrackAllocator_Unknown3(__int64 a1, __int64 a2)
{
  void (**v2)(__int64);

  v2 = *(void (***)(__int64))a2;
  *(_QWORD*)(a2 + 600) = 0;
  (*v2)(a2);
  return GameRoutine_2a4dc0(a1 + 16, a2);
}

__int64 MmlSequenceTrackAllocator_Unknown4(__int64 result)
{
  _QWORD* v1;

  v1 = (_QWORD*)(result + 16);
  LODWORD(result) = -1;
  do {
    v1 = (_QWORD*)*v1;
    result = (unsigned int)(result + 1);
  } while (v1 != nullptr);
  return result;
}

#pragma GCC visibility pop
