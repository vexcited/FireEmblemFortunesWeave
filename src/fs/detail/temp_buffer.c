#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fs_detail_TempBuffer_CreateBuffer_closure_Invoke(__int64 a1,
                                                         _QWORD* a2);

__int64 fs_detail_TempBuffer_CreateBuffer_closure_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
      **(_QWORD**)(a1 + 8) + 24LL))(*(_QWORD*)(a1 + 8), *a2, 0, 16);
}

#pragma GCC visibility pop
