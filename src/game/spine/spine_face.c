#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563380(_QWORD, _QWORD, _QWORD);
__int64 SpineFace_Unknown2(__int64 result);

__int64 SpineFace_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  v1 = result;
  if (*(_BYTE*)(result + 221) == 1) {
    result = GameRoutine_1563380(*(_QWORD*)(result + 160), "Face_Switch", 0);
    if ((result & 1) != 0) {
      v2 = *(_QWORD*)(v1 + 160);
      *(_BYTE*)(v1 + 221) = 0;
      result = GameRoutine_1562680(v2, "Face_Wait", 1.0);
    }
  }
  if (*(_BYTE*)(v1 + 220) == 1) {
    v3 = *(unsigned __int8**)(v1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
