#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a717a0(_QWORD*, __int64, int, _OWORD*);
__int64 GameRoutine_a738c0(__int64, __int64, int);
__int64 GameRoutine_a73d40(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindBlendState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212e3b0[2];
extern _UNKNOWN** GameData_212e738;
extern __int64 (*GameData_1fc6e90[])();
extern __int64 (*GameData_1fc6f10[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21fdec4;
extern int GameData_21fdee0;
extern int GameData_21fdf10;
extern int GameData_21fdf14;
__int64 gfxa_TaskLocalShadow_Execute(__int64 a1, __int64 a2, _QWORD* a3,
                                     __int64 a4);

__int64 gfxa_TaskLocalShadow_Execute(__int64 a1, __int64 a2, _QWORD* a3,
                                     __int64 a4)
{
  void* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  int v24;
  __int64 i;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  int v41;
  _QWORD v43[4];
  _QWORD* v44;

  ((void (*)(__int64, __int64))*GameData_212e738)(*a3 + 8LL, 49);
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a3 + 168LL))(*a3, 1);
  v6 = GameData_212e3b0[0];
  if (*(int*)(a4 + 272) >= 1) {
    v7 = 0;
    v8 = 0;
    while (1) {
      v10 = a4 + 8 * v7;
      v11 = *(_QWORD*)(v10 + 8);
      v12 = *(_DWORD*)(v11 + 400);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a3 + 72LL))(*a3, 0, 0, v12, v12);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a3 + 88LL))(*a3, 0, 0, v12, v12);
      v13 = *a3;
      v14 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v11 + 32) + 32LL))(
          *(_QWORD*)(v11 + 32));
      (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v13 + 112LL))(v13, v14,
                                                                       v15);
      (*(void (**)(_QWORD, _QWORD, _QWORD, float))(*(_QWORD*)*a3 + 152LL))(
          *a3, 0, 0, 1.0);
      v16 = *a3;
      v17 = *(_QWORD*)(v11 + 40);
      v18 = *(_QWORD*)(v11 + 48);
      (*(void (**)(__int64, _QWORD, _QWORD, __int64, __int64))v6)(*a3 + 8LL, 0,
                                                                  0, v17, v18);
      (*(void (**)(__int64, __int64, _QWORD, __int64, __int64))v6)(v16 + 8, 2,
                                                                   0, v17, v18);
      (*(void (**)(__int64, __int64, _QWORD, __int64, __int64))v6)(v16 + 8, 1,
                                                                   0, v17, v18);
      if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v10 + 8) + 8LL) + 96LL) & 2) == 0) {
        goto LABEL_6;
      }
      gxc_NvnStateCache_Reset(a3[1]);
      gxc_NvnStateCache_SetCommandList(a3[1], *a3);
      v19 = a3[1];
      gxc_NvnStateCache_BindDepthStencilState(v19,
                                              (unsigned int)GameData_21fdec4);
      gxc_NvnStateCache_BindBlendState(v19, (unsigned int)GameData_21fdee0);
      gxc_NvnStateCache_BindPolygonState(v19, (unsigned int)GameData_21fdf10);
      gxc_NvnStateCache_BindMultisampleState(v19,
                                             (unsigned int)GameData_21fdf14);
      gxc_NvnStateCache_ClearCommandList(a3[1]);
      v20 = *(_QWORD**)a4;
      v21 = *(_QWORD*)(v10 + 136);
      *(_OWORD*)v43 = *(_OWORD*)(*(_QWORD*)(v10 + 8) + 16LL);
      GameRoutine_a717a0(v20, v21, 0, v43);
      v22 = *(_QWORD*)(v10 + 136);
      v23 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
      *v23 = GameData_1fc6e90;
      memcpy(v23 + 1, a4, 280);
      v44 = v23;
      v24 = GameRoutine_a738c0(v22, (__int64)v43, 2);
      if (v44 == v43) {
        v9 = 32;
      }
      else {
        if (v44 == nullptr) {
          goto LABEL_5;
        }
        v9 = 40;
      }
      (*(void (**)(void*))(*v44 + v9))(v44);
    LABEL_5:
      v8 += v24;
      GameRoutine_a73d40(*(_QWORD*)(v10 + 136), (__int64)a3);
    LABEL_6:
      if (++v7 >= *(int*)(a4 + 272)) {
        goto LABEL_12;
      }
    }
  }
  v8 = 0;
LABEL_12:
  if (*(int*)(a4 + 276) >= 1) {
    for (i = 0; i < *(int*)(a4 + 276); ++i) {
      v27 = a4 + 8 * i;
      v28 = *(_QWORD*)(v27 + 72);
      v29 = *(_DWORD*)(v28 + 208);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a3 + 72LL))(*a3, 0, 0, v29, v29);
      (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)*a3 + 88LL))(*a3, 0, 0, v29, v29);
      v30 = *a3;
      v31 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v28 + 32) + 32LL))(
          *(_QWORD*)(v28 + 32));
      (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v30 + 112LL))(v30, v31,
                                                                       v32);
      (*(void (**)(_QWORD, _QWORD, _QWORD, float))(*(_QWORD*)*a3 + 152LL))(
          *a3, 0, 0, 1.0);
      v33 = *a3;
      v34 = *(_QWORD*)(v28 + 40);
      v35 = *(_QWORD*)(v28 + 48);
      (*(void (**)(__int64, _QWORD, _QWORD, __int64, __int64))v6)(*a3 + 8LL, 0,
                                                                  0, v34, v35);
      (*(void (**)(__int64, __int64, _QWORD, __int64, __int64))v6)(v33 + 8, 1,
                                                                   0, v34, v35);
      if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v27 + 72) + 8LL) + 96LL) & 2) == 0) {
        continue;
      }
      gxc_NvnStateCache_Reset(a3[1]);
      gxc_NvnStateCache_SetCommandList(a3[1], *a3);
      v36 = a3[1];
      gxc_NvnStateCache_BindDepthStencilState(v36,
                                              (unsigned int)GameData_21fdec4);
      gxc_NvnStateCache_BindBlendState(v36, (unsigned int)GameData_21fdee0);
      gxc_NvnStateCache_BindPolygonState(v36, (unsigned int)GameData_21fdf10);
      gxc_NvnStateCache_BindMultisampleState(v36,
                                             (unsigned int)GameData_21fdf14);
      gxc_NvnStateCache_ClearCommandList(a3[1]);
      v37 = *(_QWORD**)a4;
      v38 = *(_QWORD*)(v27 + 200);
      *(_OWORD*)v43 = *(_OWORD*)(*(_QWORD*)(v27 + 72) + 16LL);
      GameRoutine_a717a0(v37, v38, 0, v43);
      v39 = *(_QWORD*)(v27 + 200);
      v40 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
      *v40 = GameData_1fc6f10;
      memcpy(v40 + 1, a4, 280);
      v44 = v40;
      v41 = GameRoutine_a738c0(v39, (__int64)v43, 2);
      if (v44 == v43) {
        v26 = 32;
      }
      else {
        if (v44 == nullptr) {
          goto LABEL_16;
        }
        v26 = 40;
      }
      (*(void (**)(void*))(*v44 + v26))(v44);
    LABEL_16:
      v8 += v41;
      GameRoutine_a73d40(*(_QWORD*)(v27 + 200), (__int64)a3);
    }
  }
  (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)*a3 + 168LL))(*a3, 0);
  return v8;
}

#pragma GCC visibility pop
