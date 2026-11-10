#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_aoc_detail_GetObjectHolder_plt(_QWORD);
__int64 nn_aoc_UpdateCachedList(void* this_);

__int64 nn_aoc_UpdateCachedList(void* this_)
{
  _QWORD* v1;

  v1 = (_QWORD*)nn_aoc_detail_GetObjectHolder_plt(this_);
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v1 + 168LL))(*v1);
}

#pragma GCC visibility pop
