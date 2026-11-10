#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_604020(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, _QWORD*, __int64,
                                                   unsigned __int64, __int64,
                                                   unsigned __int64, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
extern __int64 (*GameData_1fc5dc0[])();
extern __int64* game_g_frame_clock_ptr[3];
_QWORD* gfxa_TaskCharaShadow_Impl_Impl(__int64 a1, __int64 a2);

_QWORD* gfxa_TaskCharaShadow_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  _QWORD* result;
  struct {
    __int64 (**v6)();
    int v7;
    char gap12_[20];
    __int64 (***v8)();
  } v6_;
  _QWORD v9[4];

  *(_QWORD*)a1 = a2;
  GameRoutine_604020((_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  memset(v9, 0, sizeof(v9));
  *(_QWORD*)(a1 + 128) = -1;
  *(_QWORD*)(a1 + 136) = 0;
  v6_.v8 = &v6_.v6;
  *(_DWORD*)(a1 + 200) = -1;
  v6_.v6 = GameData_1fc5dc0;
  GameRoutine_5fc230((__int64)v9);
  if (v6_.v8 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v6_.v8)[6])(v6_.v8, v9);
  }
  v3 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 8, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v9);
  *(_QWORD*)(a1 + 128) = GameRoutine_615760(*(_QWORD*)(*v3 + 552), a1 + 8);
  if (v6_.v8 == &v6_.v6) {
    v4 = 4;
    goto LABEL_7;
  }
  if (v6_.v8 != nullptr) {
    v4 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v6_.v8)[v4])((__int64)v6_.v8);
  }
  result = X8CALL_X0(
      _QWORD*,
      GameRoutine_b34420((void*)((__int64)&v6_.v6),
                         *(_QWORD**)(*(_QWORD*)a1 + 13424LL),
                         (__int64)"Graphics/Textures/character_default", 0x23u,
                         (__int64)"CMN_Character_Dissolve_Noise", 0x1Cu, 0));
  *(_QWORD*)(a1 + 192) = v6_.v6;
  *(_DWORD*)(a1 + 200) = v6_.v7;
  return result;
}

#pragma GCC visibility pop
