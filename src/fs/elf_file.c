#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_630ca0(__int64 result, __int64);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 ElfFile_Unknown2(__int64 a1);

__int64 ElfFile_Unknown2(__int64 a1)
{
  int v2;
  __int64 result;
  __int64 v4;

  nn_os_AcquireReadLock(a1 + 696);
  v2 = *(_DWORD*)(a1 + 656);
  result = nn_os_ReleaseReadLock(a1 + 696);
  if ((v2 & 0x10) == 0) {
    v4 = *(_QWORD*)(a1 + 592);
    if (v4 != 0) {
      return GameRoutine_630ca0(a1 + 800, v4);
    }
  }
  return result;
}

#pragma GCC visibility pop
