#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 merged_1v_upsample(__int64 a1, __int64 a2, _DWORD* a3, __int64 a4,
                           __int64 a5, _DWORD* a6);

__int64 merged_1v_upsample(__int64 a1, __int64 a2, _DWORD* a3, __int64 a4,
                           __int64 a5, _DWORD* a6)
{
  __int64 result;

  result = (*(__int64 (**)(void*))(*(_QWORD*)(a1 + 640) + 24LL))((void*)a1);
  ++*a6;
  ++*a3;
  return result;
}

#pragma GCC visibility pop
