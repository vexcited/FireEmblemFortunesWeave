#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e8f0[3];
extern _UNKNOWN** GameData_212e8f8[2];
extern int GameData_21fdeb8[];
extern int GameData_21fdefc;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskSpine_Impl_draw_lambda0_Invoke(_QWORD* a1);

__int64 gfxa_TaskSpine_Impl_draw_lambda0_Invoke(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v2 = a1[1];
  gxc_NvnStateCache_Reset(*(_QWORD*)(a1[3] + 8LL));
  v3 = (_QWORD*)a1[3];
  gxc_NvnStateCache_SetCommandList(v3[1], *v3);
  v4 = v3[1];
  gxc_NvnStateCache_BindDepthStencilState(v4, GameData_21fdeb8[0]);
  gxc_NvnStateCache_BindBlendState(v4, GameData_21fdefc);
  gxc_NvnStateCache_BindPolygonState(v4, GameData_21fdf08);
  gxc_NvnStateCache_BindMultisampleState(v4, GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(*(_QWORD*)(a1[3] + 8LL));
  (*(void (**)(_QWORD, __int64, __int64))GameData_212e8f0[0])(a1[2], 3, v2 + 8);
  (*(void (**)(_QWORD, __int64, __int64))GameData_212e8f8[0])(a1[2], 1,
                                                              v2 + 24);
  v5 = v2 + 16LL * *(int*)(v2 + 40);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      **(_QWORD**)a1[3] + 224LL))(*(_QWORD*)a1[3], 1, 0, *(_QWORD*)(v5 + 48),
                                  *(_QWORD*)(v5 + 56));
}

#pragma GCC visibility pop
