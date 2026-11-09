#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 MemoryStream_Destructor(__int64 a1, __int64 a2, unsigned int a3);

__int64 MemoryStream_Destructor(__int64 a1, __int64 a2, unsigned int a3)
{
  memcpy(a2, *(_QWORD*)(a1 + 8) + *(int*)(a1 + 20), a3);
  *(_DWORD*)(a1 + 20) += a3;
  return a3;
}

#pragma GCC visibility pop
