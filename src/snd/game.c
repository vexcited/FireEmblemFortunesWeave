#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* snd_g_memory_ptr[2];
__int64 Game_e7af0(__int64 result);

__int64 Game_e7af0(__int64 result)
{
  if ((*(_BYTE*)result & 1) != 0) {
    return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] +
                                            24LL))(*snd_g_memory_ptr[0],
                                                   *(_QWORD*)(result + 16));
  }
  return result;
}

#pragma GCC visibility pop
