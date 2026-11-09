#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2a4dc0(_QWORD);
__int64 Sound3DManager_Unknown2(__int64 a1, __int64 a2, unsigned int a3,
                                __int64 a4);
__int64 Sound3DManager_Unknown3(__int64 a1, __int64 a2, unsigned int a3);
__int64 Sound3DManager_Unknown5(__int64 result, __int64 a2);
__int64 Sound3DManager_278060(__int64 result, __int64 a2);
__int64 Sound3DManager_278080(__int64 result);
__int64 Sound3DManager_Unknown2(__int64 a1, __int64 a2, unsigned int a3,
                                __int64 a4)
{
  __int64 v5;
  __int64 result;

  v5 = a3;
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    return (*(__int64 (**)(__int64, __int64, __int64, __int64, __int64))(
        *(_QWORD*)result + 16LL))(result, a1, a2, v5, a4);
  }
  return result;
}

__int64 Sound3DManager_Unknown3(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  __int64 result;

  v3 = a3;
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    return (*(__int64 (**)(__int64, __int64, __int64, __int64))(
        *(_QWORD*)result + 24LL))(result, a1, a2, v3);
  }
  return result;
}

__int64 Sound3DManager_Unknown5(__int64 result, __int64 a2)
{
  if (a2 != 0) {
    return GameRoutine_2a4dc0(result + 16);
  }
  return result;
}

__int64 Sound3DManager_278060(__int64 result, __int64 a2)
{
  if (a2 != 0) {
    return GameRoutine_2a4dc0(result + 8);
  }
  return result;
}

__int64 Sound3DManager_278080(__int64 result)
{
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0x3F00000000000000LL;
  *(_WORD*)(result + 48) = 1;
  *(_DWORD*)(result + 52) = 1;
  return result;
}

#pragma GCC visibility pop
