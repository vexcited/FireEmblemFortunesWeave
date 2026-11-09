#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gxc_NvnStateCache_BindBlendState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e738;
extern __int64 game_g_frame_clock;
extern int GameData_21675c0;
extern int GameData_21675cc;
extern int GameData_21fdeb8;
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 FinalCompositeTask_Unknown3(__int64 a1, _QWORD* a2);

__int64 FinalCompositeTask_Unknown3(__int64 a1, _QWORD* a2)
{
  int v2;
  bool v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  float v14;
  float v15;
  int v16;
  float v17;
  __int64 v18;
  float v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;

  v2 = *(_DWORD*)(a1 + 176);
  v5 = v2 < -1;
  v6 = ((_BYTE)v2 + 1) & 1;
  if (v5) {
    v6 = -v6;
  }
  *(_DWORD*)(a1 + 176) = v6;
  v7 = *(_QWORD*)(a1 + 8LL * v6 + 160);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 56LL))(v7);
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(_DWORD*)(v9 + 13300);
  v11 = *(_DWORD*)(v9 + 13296);
  v12 = *(_DWORD*)(game_g_frame_clock + 13316);
  v13 = *(_DWORD*)(game_g_frame_clock + 13312);
  v14 = (float)v13;
  if (v11 < v13) {
    v13 = v11;
  }
  v15 = (float)v13;
  if (v10 >= v12) {
    v16 = *(_DWORD*)(game_g_frame_clock + 13316);
  }
  else {
    v16 = v10;
  }
  *(_QWORD*)(v8 + 24) = 0;
  *(_QWORD*)(v8 + 32) = 0x3F8000003F800000LL;
  *(float*)v8 = v14 / v15;
  *(float*)(v8 + 4) = (float)v12 / (float)v16;
  v17 = *(float*)&GameData_21675cc;
  v18 = *(_QWORD*)v8;
  v19 = *(float*)&GameData_21675c0;
  *(_QWORD*)(v8 + 8) = 0;
  *(_QWORD*)(v8 + 16) = v18;
  *(float*)(v8 + 40) = v17 / v19;
  *(float*)(v8 + 44) = v19;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7);
  ((void (*)(__int64, __int64))*GameData_212e738)(*a2 + 8LL, 18);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 96LL))(
      *a2, *(_QWORD*)(game_g_frame_clock + 440),
      *(_QWORD*)(game_g_frame_clock + 448));
  v20 = *(_DWORD*)(game_g_frame_clock + 13312);
  v21 = *(_DWORD*)(game_g_frame_clock + 13316);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, v20, v21);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, v20, v21);
  gxc_NvnStateCache_Reset(a2[1]);
  gxc_NvnStateCache_SetCommandList(a2[1], *a2);
  v22 = a2[1];
  gxc_NvnStateCache_BindDepthStencilState(v22, (unsigned int)GameData_21fdeb8);
  gxc_NvnStateCache_BindBlendState(v22, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v22, (unsigned int)GameData_21fdf08);
  gxc_NvnStateCache_BindMultisampleState(v22, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a2[1]);
  v23 = *a2;
  v24 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 456LL) +
                                 40LL))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 456LL));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v23 + 248LL))(v23, 3, 0, v24, v25, *(unsigned int*)(a1 + 136));
  v26 = a1 + 16LL * *(int*)(a1 + 176);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a2 + 224LL))(*a2, 3, 0, *(_QWORD*)(v26 + 184),
                              *(_QWORD*)(v26 + 192));
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
      *a2, 3, *(_QWORD*)(*(_QWORD*)(a1 + 144) + 144LL));
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, 1);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(
      *a2, 3, 0);
}

#pragma GCC visibility pop
