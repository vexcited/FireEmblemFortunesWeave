#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _DWORD* GameData_212c5b0;
extern _UNKNOWN* GameData_212c5a8;
extern char* GameData_1f90180;
void scene_scenes_66b740();

void scene_scenes_66b740()
{
  _DWORD* v0;
  __int64 v1;
  _QWORD* v2;

  v0 = (_DWORD*)GameData_212c5b0;
  v1 = (int)*GameData_212c5b0;
  v2 = GameData_212c5a8;
  *((_QWORD*)GameData_212c5a8 + v1++) = &GameData_1f90180;
  *(_DWORD*)v0 = v1;
  v2[v1] = 0;
}

#pragma GCC visibility pop
