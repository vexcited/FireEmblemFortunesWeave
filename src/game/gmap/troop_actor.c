#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 TroopActor_Unknown2(__int64 a1);

__int64 TroopActor_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned int v4;

  v1 = *(_QWORD*)(a1 + 392);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 96);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(unsigned __int8*)(v2 + 32);
  if (v3 == 2) {
    v4 = 4;
  }
  else {
    v4 = 0;
  }
  if (v3 == 1) {
    return 2;
  }
  else {
    return v4;
  }
}

#pragma GCC visibility pop
