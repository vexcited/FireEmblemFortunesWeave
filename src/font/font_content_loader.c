#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_634d80(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_AcquireWriteLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_ReleaseWriteLock(_QWORD);
extern char GameData_1a9f09e;
__int64 FontContentLoader_Unknown3(__int64 result);
char* FontContentLoader_Unknown4(__int64 a1);
__int64 FontContentLoader_Unknown5(__int64 a1);
__int64 FontContentLoader_Unknown6(__int64 a1);
__int64 FontContentLoader_Unknown7(__int64 a1);
__int64 FontContentLoader_Unknown8(__int64 result);

__int64 FontContentLoader_Unknown3(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 8);
  v2 = result;
  if (v1 != 0) {
    result = GameRoutine_634d80(*(_QWORD*)(v1 + 8));
  }
  *(_QWORD*)(v2 + 8) = 0;
  *(_BYTE*)(v2 + 16) = 0;
  return result;
}

char* FontContentLoader_Unknown4(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0) {
    return (char*)(v1 + 16);
  }
  else {
    return &GameData_1a9f09e;
  }
}

__int64 FontContentLoader_Unknown5(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0) {
    return *(_QWORD*)(v1 + 592);
  }
  else {
    return 0;
  }
}

__int64 FontContentLoader_Unknown6(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0) {
    return *(_QWORD*)(v1 + 576);
  }
  else {
    return 0;
  }
}

__int64 FontContentLoader_Unknown7(__int64 a1)
{
  __int64 v1;
  unsigned int v3;
  unsigned int v4;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0) {
    nn_os_AcquireReadLock(v1 + 696);
    v3 = *(unsigned __int8*)(v1 + 656);
    nn_os_ReleaseReadLock(v1 + 696);
    v4 = v3 >> 3;
    *(_BYTE*)(a1 + 16) = (v3 & 8) != 0;
  }
  else {
    LOBYTE(v4) = *(_BYTE*)(a1 + 16);
  }
  return v4 & 1;
}

__int64 FontContentLoader_Unknown8(__int64 result)
{
  __int64 v1;
  int v2;

  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0 && *(_QWORD*)(v1 + 592) != 0) {
    nn_os_AcquireReadLock(v1 + 696);
    v2 = *(_DWORD*)(v1 + 656);
    result = nn_os_ReleaseReadLock(v1 + 696);
    if ((v2 & 0x20) == 0) {
      nn_os_AcquireWriteLock(v1 + 696);
      *(_DWORD*)(v1 + 656) |= 0x20u;
      return nn_os_ReleaseWriteLock(v1 + 696);
    }
  }
  return result;
}

#pragma GCC visibility pop
