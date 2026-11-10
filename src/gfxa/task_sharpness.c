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
extern int GameData_21fdeb8;
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 TaskSharpness_19a3ed0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                              int* a5);
void gfxa_TaskSharpness_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2);

__int64 TaskSharpness_19a3ed0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                              int* a5)
{
  int v5;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  _QWORD v34[2];

  v5 = *(_DWORD*)(a1 + 168);
  v11 = v5 < -1;
  v12 = ((_BYTE)v5 + 1) & 1;
  if (v11) {
    v12 = -v12;
  }
  *(_DWORD*)(a1 + 168) = v12;
  v13 = *(_QWORD*)(a1 + 8LL * v12 + 152);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13);
  v15 = (float)a5[7];
  v16 = (float)a5[4];
  v17 = (float)a5[5];
  v18 = v16 / (float)a5[6];
  *(float*)v14 = 1.0 / v16;
  *(float*)(v14 + 4) = 1.0 / v17;
  v19 = v17 / v15;
  *(float*)(v14 + 8) = v18;
  *(float*)(v14 + 12) = v19;
  v20 = a5[5];
  v21 = a5[8];
  *(float*)(v14 + 24) = v18;
  *(float*)(v14 + 28) = v19;
  *(_DWORD*)(v14 + 16) = v21;
  *(float*)(v14 + 20) = 1.0 / (float)v20;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13);
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 50);
  v22 = *a4;
  v23 = a3[1];
  if (v23 == 0) {
    v23 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  }
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 32LL))(v23);
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v22 + 96LL))(v22, v24,
                                                                  v25);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, (unsigned int)a5[4], (unsigned int)a5[5]);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, (unsigned int)a5[4], (unsigned int)a5[5]);
  v26 = *a4;
  v34[0] = 0;
  v34[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v26 + 144LL))(v26, 0, v34);
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v27 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v27, (unsigned int)GameData_21fdeb8);
  gxc_NvnStateCache_BindBlendState(v27, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v27, (unsigned int)GameData_21fdf08);
  gxc_NvnStateCache_BindMultisampleState(v27, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 144LL));
  v28 = a1 + 16LL * *(int*)(a1 + 168);
  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *(_QWORD*)(v28 + 176),
                              *(_QWORD*)(v28 + 184));
  v29 = *a4;
  v30 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 40LL))(v30);
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD))(
      *(_QWORD*)v29 + 240LL))(v29, 3, 0, v31, v32);
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

void gfxa_TaskSharpness_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 22;
}

#pragma GCC visibility pop
