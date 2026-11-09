#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SpineBuildCallbackForTalk_Unknown3(__int64 result);

__int64 SpineBuildCallbackForTalk_Unknown3(__int64 result)
{
  char v1;

  v1 = *(_BYTE*)(result + 56);
  *(_DWORD*)(result + 47) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_BYTE*)(result + 24) = 0;
  if ((v1 & 1) != 0) {
    **(_BYTE**)(result + 72) = 0;
    *(_QWORD*)(result + 64) = 0;
  }
  else {
    *(_WORD*)(result + 56) = 0;
  }
  *(_QWORD*)(result + 96) = 0;
  return result;
}

#pragma GCC visibility pop
