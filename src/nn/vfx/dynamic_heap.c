#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5c0280(__int64, __int64, __int64);
__int64 GameRoutine_5c02d0(__int64, char);
__int64 DynamicHeap_Unknown2(__int64 a1, __int64 a2, __int64 a3);
__int64 DynamicHeap_Unknown3(__int64 a1, __int64 a2);

__int64 DynamicHeap_Unknown2(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  result = GameRoutine_5c0280(a2, a3, 256);
  if (result != 0) {
    *(_QWORD*)(a1 + 8) += (a2 + 255) & 0xFFFFFFFFFFFFFF00LL;
    ++*(_DWORD*)(a1 + 16);
  }
  return result;
}

__int64 DynamicHeap_Unknown3(__int64 a1, __int64 a2)
{
  --*(_DWORD*)(a1 + 16);
  return GameRoutine_5c02d0(a2, 1);
}

#pragma GCC visibility pop
