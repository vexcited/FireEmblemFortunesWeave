#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_2a4da0(_QWORD**);
__int64 GameRoutine_2a4dc0(_QWORD, _QWORD);
__int64 GameRoutine_2b9130(_QWORD);
__int64 GameRoutine_2b97b0(_QWORD);
__int64 OpusDecoderImpl_2b9fa0(_QWORD);
__int64 OpusDecoderImpl_2ba030(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitHeap_Unknown2(_QWORD, _QWORD, _QWORD);
__int64 UnitHeap_Unknown3(_QWORD, _QWORD);
extern __int64 (*GameData_1f80980[])();
extern __int64 (*nn_atk_detail_driver_HardwareOpusDecoderManager_vtable[])();
extern __int64 (*nn_atk_detail_fnd_UnitHeap_vtable[])();
__int64 HardwareOpusDecoderManager_Destructor(_QWORD* a1);
__int64 HardwareOpusDecoderManager_2b92e0(_QWORD* a1);
_QWORD* HardwareOpusDecoderManager_Unknown2(__int64 a1);
_QWORD* HardwareOpusDecoderManager_2b93e0(__int64 a1);
__int64 HardwareOpusDecoderManager_Unknown3(__int64 a1, __int64 a2);
__int64 HardwareOpusDecoderManager_2b94e0(__int64 a1, __int64 a2);

__int64 HardwareOpusDecoderManager_Destructor(_QWORD* a1)
{
  *a1 = nn_atk_detail_driver_HardwareOpusDecoderManager_vtable;
  a1[3] = GameData_1f80980;
  a1[9] = nn_atk_detail_fnd_UnitHeap_vtable;
  return GameRoutine_2b97b0(a1 + 9);
}

__int64 HardwareOpusDecoderManager_2b92e0(_QWORD* a1)
{
  *a1 = GameData_1f80980;
  a1[6] = nn_atk_detail_fnd_UnitHeap_vtable;
  return GameRoutine_2b97b0(a1 + 6);
}

_QWORD* HardwareOpusDecoderManager_Unknown2(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v2 = GameRoutine_2a4da0((_QWORD**)(a1 + 48));
  v3 = v2;
  if (v2 == nullptr) {
    return v3;
  }
  GameRoutine_2b9130(v2);
  v4 = UnitHeap_Unknown2(a1 + 72, 0, 4);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 120);
    v3[1] = v4;
    OpusDecoderImpl_2ba030(v3 + 10, v4, v5, 4096, v3 + 2);
    return v3;
  }
  (*(void (**)(_QWORD*))*v3)(v3);
  GameRoutine_2a4dc0(a1 + 48, v3);
  return nullptr;
}

_QWORD* HardwareOpusDecoderManager_2b93e0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v2 = GameRoutine_2a4da0((_QWORD**)(a1 + 24));
  v3 = v2;
  if (v2 == nullptr) {
    return v3;
  }
  GameRoutine_2b9130(v2);
  v4 = UnitHeap_Unknown2(a1 + 48, 0, 4);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 96);
    v3[1] = v4;
    OpusDecoderImpl_2ba030(v3 + 10, v4, v5, 4096, v3 + 2);
    return v3;
  }
  (*(void (**)(_QWORD*))*v3)(v3);
  GameRoutine_2a4dc0(a1 + 24, v3);
  return nullptr;
}

__int64 HardwareOpusDecoderManager_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v4;

  OpusDecoderImpl_2b9fa0(a2 + 80);
  v4 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a2 + 8) = 0;
  UnitHeap_Unknown3(a1 + 72, v4);
  (**(void (***)(__int64))a2)(a2);
  return GameRoutine_2a4dc0(a1 + 48, a2);
}

__int64 HardwareOpusDecoderManager_2b94e0(__int64 a1, __int64 a2)
{
  __int64 v4;

  OpusDecoderImpl_2b9fa0(a2 + 80);
  v4 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a2 + 8) = 0;
  UnitHeap_Unknown3(a1 + 48, v4);
  (**(void (***)(__int64))a2)(a2);
  return GameRoutine_2a4dc0(a1 + 24, a2);
}

#pragma GCC visibility pop
