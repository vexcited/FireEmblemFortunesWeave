#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gxc_NvnStateCache_BindBlendState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212e738;
extern int GameData_21fdeb8;
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 TaskCharaMask_bfa6d0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                             unsigned int* a5);

__int64 TaskCharaMask_bfa6d0(__int64 a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                             unsigned int* a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  _QWORD v26[2];

  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49);
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v11, v12);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *a5, a5[1]);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *a5, a5[1]);
  v13 = *a4;
  v26[0] = 0;
  v26[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v13 + 144LL))(v13, 0, v26);
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v14 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v14, (unsigned int)GameData_21fdeb8);
  gxc_NvnStateCache_BindBlendState(v14, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v14, (unsigned int)GameData_21fdf08);
  gxc_NvnStateCache_BindMultisampleState(v14, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  v15 = *a4;
  v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16);
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v15 + 248LL))(v15, 3, 0, v17, v18, *(unsigned int*)(a1 + 144));
  v19 = *a4;
  v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v19 + 248LL))(v19, 3, 1, v21, v22, *(unsigned int*)(a1 + 144));
  v23 = *(_QWORD*)(a1 + 8);
  v24 = *(_QWORD*)(a1 + 16);
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(v23 + 144));
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak(v24);
    }
  }
  else {
    (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(v23 + 144));
  }
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
