#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 GameData_21ca310;
bool MapSortieMenuItem_Unknown89();

bool MapSortieMenuItem_Unknown89()
{
  unsigned __int64 v0;
  __int64 v1;
  int v2;

  v0 = (unsigned __int64)(GameData_21ca248 - GameData_21ca240) >> 3;
  if ((_DWORD)v0 == 0) {
    return false;
  }
  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v1 != 0) {
    v2 = 0;
    do {
      v1 = *(_QWORD*)(v1 + 432);
      ++v2;
    } while (v1 != 0);
  }
  else {
    v2 = 0;
  }
  return v2 >= (int)v0;
}

#pragma GCC visibility pop
