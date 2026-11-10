#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a738c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a73d40(_QWORD, _QWORD);
__int64 GameRoutine_ad6000(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindBlendState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern _UNKNOWN** GameData_212e870[6];
extern __int64 (*GameData_1fc6ad0[])();
extern int GameData_21fded0;
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 gfxa_TaskForward_Impl_ExecuteDepth(__int64 a1, _QWORD* a2, _QWORD* a3,
                                           _QWORD* a4, __int64 a5);

__int64 gfxa_TaskForward_Impl_ExecuteDepth(__int64 a1, _QWORD* a2, _QWORD* a3,
                                           _QWORD* a4, __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int* v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  int v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 (**v37)(__int64);
  __int64 (**v38)(__int64);
  int v39;
  __int64 (*v40)(__int64);
  _QWORD v42[2];
  __int64 v43;
  __int64 (**v44)();
  __int64 v45;
  __int64 v46;
  __int64 (***v47)();

  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  v13 = (unsigned int*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v13 = (unsigned int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v15 = *v13;
  v14 = v13[1];
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 112LL))(*a4, v12,
                                                                  v11);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v15, v14);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v15, v14);
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v16 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v16, (unsigned int)GameData_21fded0);
  gxc_NvnStateCache_BindBlendState(v16, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v16, (unsigned int)GameData_21fdf08);
  gxc_NvnStateCache_BindMultisampleState(v16, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  v17 = *a4;
  v18 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v19 = v18 + 16LL * *(int*)(v18 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v17 + 224LL))(v17, 3, 0, *(_QWORD*)(v19 + 24),
                              *(_QWORD*)(v19 + 32));
  v20 = *a4;
  v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  v22 = v21 + 16LL * *(int*)(v21 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v20 + 224LL))(v20, 3, 1, *(_QWORD*)(v22 + 24),
                              *(_QWORD*)(v22 + 32));
  v23 = *a4;
  v24 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 40LL))(v24);
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)v23 + 240LL))(v23, 3, 9, v25, v26);
  v27 = GameRoutine_ad6000("TranslucencyDepth", 17);
  v28 = *(_QWORD*)(a5 + 8);
  LODWORD(v45) = v27;
  v44 = GameData_1fc6ad0;
  v47 = &v44;
  v29 = GameRoutine_a738c0(v28, &v44, 1);
  if (v47 == &v44) {
    v30 = 4;
    goto LABEL_7;
  }
  if (v47 != nullptr) {
    v30 = 5;
  LABEL_7:
    (*v47)[v30]();
  }
  v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 40LL))(v31);
  v33 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 40LL))(v33);
  LODWORD(v45) = 0;
  v44 = nullptr;
  v35 = *a4;
  v36 = v34;
  v37 = (__int64 (**)(__int64))GameData_212e778[0];
  HIDWORD(v45) = (*(__int64 (**)(void))GameData_212e778[0])();
  v38 = (__int64 (**)(__int64))GameData_212e780;
  v46 = ((unsigned int (*)(__int64))*GameData_212e780)(v36) | 0x100000000LL;
  v42[0] = v44;
  v42[1] = v45;
  v43 = v46;
  v39 = (*v37)(v32);
  v40 = *v38;
  HIDWORD(v42[1]) = v39;
  LODWORD(v43) = v40(v32);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD*, __int64, _QWORD,
               __int64 (***)(), _QWORD))GameData_212e870[0])(
      v35 + 8, v32, 0, v42, v36, 0, &v44, 0);
  GameRoutine_a73d40(*(_QWORD*)(a5 + 8), a4);
  return v29;
}

#pragma GCC visibility pop
