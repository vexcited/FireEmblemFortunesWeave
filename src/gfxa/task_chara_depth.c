#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a738c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a73e50(__int64 result, _QWORD*);
__int64 gxc_NvnStateCache_BindBlendState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e738;
extern __int64 (*GameData_1fd2fe8[])();
extern int GameData_21fded0;
extern int GameData_21fdee0;
extern int GameData_21fdf10;
extern int GameData_21fdf14;
__int64 gfxa_TaskCharaDepth_Impl_Execute(__int64 a1, _QWORD* a2, _QWORD* a3,
                                         _QWORD* a4, unsigned int* a5);
void gfxa_TaskCharaDepth_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2);
bool gfxa_TaskCharaDepth_Impl_Execute_lambda0_Invoke(__int64 a1, __int64 a2);
_QWORD* GameRoutine_604020(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, _QWORD*, __int64,
                                                   unsigned __int64, __int64,
                                                   unsigned __int64, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
extern __int64 (*GameData_1fd2f68[])();
extern __int64* game_g_frame_clock_ptr[3];
_QWORD* gfxa_TaskCharaDepth_Impl_Impl(__int64 a1, __int64 a2);

_QWORD* gfxa_TaskCharaDepth_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  _QWORD* result;
  struct {
    __int64 (**v7)();
    int v8;
    char gap12_[20];
    __int64 (***v9)();
  } v7_;
  _QWORD v10[4];

  *(_QWORD*)a1 = a2;
  v2 = a1 + 8;
  GameRoutine_604020((_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 136) = 0;
  memset(v10, 0, sizeof(v10));
  *(_QWORD*)(a1 + 128) = -1;
  v7_.v9 = &v7_.v7;
  *(_DWORD*)(a1 + 144) = -1;
  v7_.v7 = GameData_1fd2f68;
  GameRoutine_5fc230((__int64)v10);
  if (v7_.v9 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v7_.v9)[6])(v7_.v9, v10);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(v2, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v10);
  *(_QWORD*)(a1 + 128) = GameRoutine_615760(*(_QWORD*)(*v4 + 552), v2);
  if (v7_.v9 == &v7_.v7) {
    v5 = 4;
    goto LABEL_7;
  }
  if (v7_.v9 != nullptr) {
    v5 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v7_.v9)[v5])((__int64)v7_.v9);
  }
  result = X8CALL_X0(
      _QWORD*,
      GameRoutine_b34420((void*)((__int64)&v7_.v7),
                         *(_QWORD**)(*(_QWORD*)a1 + 13424LL),
                         (__int64)"Graphics/Textures/character_default", 0x23u,
                         (__int64)"CMN_Character_Dissolve_Noise", 0x1Cu, 0));
  *(_QWORD*)(a1 + 136) = v7_.v7;
  *(_DWORD*)(a1 + 144) = v7_.v8;
  return result;
}

__int64 gfxa_TaskCharaDepth_Impl_Execute(__int64 a1, _QWORD* a2, _QWORD* a3,
                                         _QWORD* a4, unsigned int* a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  _QWORD v27[4];
  _QWORD* v28;

  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8LL, 49);
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 112LL))(*a4, v11,
                                                                  v12);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *a5, a5[1]);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *a5, a5[1]);
  gxc_NvnStateCache_Reset(a4[1]);
  gxc_NvnStateCache_SetCommandList(a4[1], *a4);
  v13 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v13, (unsigned int)GameData_21fded0);
  gxc_NvnStateCache_BindBlendState(v13, (unsigned int)GameData_21fdee0);
  gxc_NvnStateCache_BindPolygonState(v13, (unsigned int)GameData_21fdf10);
  gxc_NvnStateCache_BindMultisampleState(v13, (unsigned int)GameData_21fdf14);
  gxc_NvnStateCache_ClearCommandList(a4[1]);
  v14 = *a4;
  v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v16 = v15 + 16LL * *(int*)(v15 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v14 + 224LL))(v14, 3, 0, *(_QWORD*)(v16 + 24),
                              *(_QWORD*)(v16 + 32));
  v17 = *a4;
  v18 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  v19 = v18 + 16LL * *(int*)(v18 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v17 + 224LL))(v17, 3, 1, *(_QWORD*)(v19 + 24),
                              *(_QWORD*)(v19 + 32));
  v20 = *a4;
  v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  v22 = v21 + 16LL * *(int*)(v21 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v20 + 224LL))(v20, 3, 9, *(_QWORD*)(v22 + 24),
                              *(_QWORD*)(v22 + 32));
  (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 248LL))(*a4, 3, 13, *(_QWORD*)(a1 + 136),
                              *(_QWORD*)(a1 + 144), *(unsigned int*)(a1 + 128));
  v23 = *((_QWORD*)a5 + 1);
  v27[0] = GameData_1fd2fe8;
  v27[1] = a5;
  v28 = v27;
  v24 = GameRoutine_a738c0(v23, v27, 2);
  if (v28 == v27) {
    v25 = 32;
    goto LABEL_5;
  }
  if (v28 != nullptr) {
    v25 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v28 + v25))((__int64)v28);
  }
  GameRoutine_a73e50(*((_QWORD*)a5 + 1), a4);
  return v24;
}

void gfxa_TaskCharaDepth_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

bool gfxa_TaskCharaDepth_Impl_Execute_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return (*(_DWORD*)(a2 + 16) & 0x10) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 16LL) &&
         (*(_DWORD*)(a2 + 16) & 4) == 0;
}

#pragma GCC visibility pop
