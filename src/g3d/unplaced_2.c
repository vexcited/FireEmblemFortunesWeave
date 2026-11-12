#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern int* GameData_1fc0430[3];
extern int GameData_21fdee0;
__int64 g3d_a6bec0(_QWORD* a1, _QWORD* a2);

__int64 g3d_a6bec0(_QWORD* a1, _QWORD* a2)
{
  __int64 v4;
  unsigned int v5;
  int* v6;

  (*(void (**)(void*))(*(_QWORD*)*a2 + 200LL))((void*)*a2);
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 208LL))(*a2, *a1 + 72LL);
  gxc_NvnStateCache_SetCommandList(a2[1], *a2);
  v4 = a2[1];
  gxc_NvnStateCache_BindPolygonState(v4, *(_DWORD*)(a1[2] + 404LL));
  v5 = *(_DWORD*)(a1[2] + 400LL) - 1;
  if (v5 > 2) {
    v6 = &GameData_21fdee0;
  }
  else {
    v6 = GameData_1fc0430[v5];
  }
  gxc_NvnStateCache_BindBlendState(v4, *v6);
  return gxc_NvnStateCache_ClearCommandList(a2[1]);
}

#pragma GCC visibility pop
