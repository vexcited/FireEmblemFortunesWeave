#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 InitializeFileLock(__int64 result);
__int64 UnlockOpenFileList();
void* LockOpenFileList();
__int64 __ofl_add(__int64 a1);

__int64 __ofl_add(__int64 a1)
{
  __int64* v2;
  __int64 v3;

  InitializeFileLock(a1);
  v2 = (__int64*)LockOpenFileList();
  v3 = *v2;
  *(_QWORD*)(a1 + 112) = *v2;
  if (v3 != 0) {
    *(_QWORD*)(v3 + 104) = a1;
  }
  *v2 = a1;
  UnlockOpenFileList();
  return a1;
}

#pragma GCC visibility pop
