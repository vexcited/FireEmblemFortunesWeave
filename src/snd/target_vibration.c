#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6171e0(void);
__int64 nn_hid_VibrationNode_SetModulationTo(_QWORD, _QWORD, _QWORD);
__int64 nn_hid_VibrationPlayer_IsPlaying(_QWORD);
__int64 nn_hid_VibrationPlayer_Play(_QWORD);
__int64 nn_hid_VibrationPlayer_SetCurrentPosition(_QWORD, _QWORD);
__int64 nn_hid_VibrationPlayer_SetLoop(_QWORD);
__int64 nn_hid_VibrationPlayer_SetVibrationFileAddress(_QWORD);
__int64 nn_hid_VibrationPlayer_Stop(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*snd_TargetVibration_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TargetVibration_Destructor(_QWORD* a1);
__int64 TargetVibration_DeletingDestructor(_QWORD* a1);
__int64 TargetVibration_Unknown3(__int64 a1);
__int64 TargetVibration_Unknown8(__int64 result, __int64 a2, int a3, __int64 a4,
                                 int a5);
__int64 TargetVibration_Unknown9(__int64 a1);
__int64 TargetVibration_Unknown10(__int64 a1);
__int64 TargetVibration_Unknown11(__int64 a1);
__int64 TargetVibration_Unknown12(__int64 a1);
__int64 TargetVibration_Unknown13(__int64 a1);
__int64 TargetVibration_Unknown17(__int64 result);
__int64 TargetVibration_Unknown18(__int64 a1);
__int64 TargetVibration_Unknown19(__int64 a1);
__int64 TargetVibration_Unknown20(__int64 a1, __int64 a2);
__int64 TargetVibration_Unknown21(__int64 a1, __int64 a2, unsigned int a3);

__int64 TargetVibration_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = snd_TargetVibration_vtable;
  if (a1[4] != 0) {
    GameRoutine_6171e0();
    a1[4] = 0;
  }
  result = a1[5];
  if (result != 0) {
    result = GameRoutine_6171e0();
    a1[5] = 0;
  }
  return result;
}

__int64 TargetVibration_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = snd_TargetVibration_vtable;
  if (a1[4] != 0) {
    GameRoutine_6171e0();
    a1[4] = 0;
  }
  if (a1[5] != 0) {
    GameRoutine_6171e0();
    a1[5] = 0;
  }
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

__int64 TargetVibration_Unknown3(__int64 a1)
{
  float v1;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  _QWORD* v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  float v13;
  __int64 v15;
  __int64 v16;

  v1 = *(float*)(a1 + 16);
  v3 = *(_QWORD*)(a1 + 48);
  v4 = *(_QWORD*)(a1 + 56);
  if ((*(unsigned __int8*)(a1 + 65) | *(unsigned __int8*)(a1 + 64)) != 0) {
    v1 = 0.0;
  }
  v5 = v1 * v1;
  v15 = *(_QWORD*)(a1 + 48);
  v16 = v4;
  v6 = *(float*)(a1 + 24);
  v7 = *(_QWORD**)(a1 + 32);
  *(float*)&v15 = *(float*)&v3 * v5;
  *((float*)&v15 + 1) = v6 * *((float*)&v3 + 1);
  *(float*)&v16 = *(float*)&v4 * v5;
  *((float*)&v16 + 1) = v6 * *((float*)&v4 + 1);
  nn_hid_VibrationNode_SetModulationTo(v7 + 1, *v7 + 8LL, &v15);
  v8 = *(float*)(a1 + 20);
  v9 = *(float*)(a1 + 24);
  v11 = *(_QWORD*)(a1 + 48);
  v10 = *(_QWORD*)(a1 + 56);
  v12 = *(_QWORD**)(a1 + 40);
  if ((*(unsigned __int8*)(a1 + 65) | *(unsigned __int8*)(a1 + 64)) != 0) {
    v8 = 0.0;
  }
  v13 = v8 * v8;
  *(float*)&v15 = *(float*)&v11 * v13;
  *((float*)&v15 + 1) = v9 * *((float*)&v11 + 1);
  *(float*)&v16 = *(float*)&v10 * v13;
  *((float*)&v16 + 1) = v9 * *((float*)&v10 + 1);
  return nn_hid_VibrationNode_SetModulationTo(v12 + 1, *v12 + 8LL, &v15);
}

__int64 TargetVibration_Unknown8(__int64 result, __int64 a2, int a3, __int64 a4,
                                 int a5)
{
  __int64 v7;

  v7 = result;
  if (a2 != 0 && a3 != 0) {
    result = nn_hid_VibrationPlayer_SetVibrationFileAddress(
        *(_QWORD*)(result + 32) + 8LL);
  }
  if (a4 != 0 && a5 != 0) {
    return nn_hid_VibrationPlayer_SetVibrationFileAddress(*(_QWORD*)(v7 + 40) +
                                                          8LL);
  }
  return result;
}

__int64 TargetVibration_Unknown9(__int64 a1)
{
  nn_hid_VibrationPlayer_SetLoop(*(_QWORD*)(a1 + 32) + 8LL);
  return nn_hid_VibrationPlayer_SetLoop(*(_QWORD*)(a1 + 40) + 8LL);
}

__int64 TargetVibration_Unknown10(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 32);
  nn_hid_VibrationPlayer_SetCurrentPosition(v1 + 8, 0);
  nn_hid_VibrationPlayer_Play(v1 + 8);
  v3 = *(_QWORD*)(a1 + 40);
  nn_hid_VibrationPlayer_SetCurrentPosition(v3 + 8, 0);
  return nn_hid_VibrationPlayer_Play(v3 + 8);
}

__int64 TargetVibration_Unknown11(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 32);
  nn_hid_VibrationPlayer_SetCurrentPosition(v1 + 8, 0);
  return nn_hid_VibrationPlayer_Play(v1 + 8);
}

__int64 TargetVibration_Unknown12(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 40);
  nn_hid_VibrationPlayer_SetCurrentPosition(v1 + 8, 0);
  return nn_hid_VibrationPlayer_Play(v1 + 8);
}

__int64 TargetVibration_Unknown13(__int64 a1)
{
  if ((nn_hid_VibrationPlayer_IsPlaying(*(_QWORD*)(a1 + 32) + 8LL) & 1) != 0) {
    return 1;
  }
  else {
    return nn_hid_VibrationPlayer_IsPlaying(*(_QWORD*)(a1 + 40) + 8LL);
  }
}

__int64 TargetVibration_Unknown17(__int64 result)
{
  *(_BYTE*)(result + 65) = 0;
  return result;
}

__int64 TargetVibration_Unknown18(__int64 a1)
{
  nn_hid_VibrationPlayer_Stop(*(_QWORD*)(a1 + 32) + 8LL);
  return nn_hid_VibrationPlayer_Stop(*(_QWORD*)(a1 + 40) + 8LL);
}

__int64 TargetVibration_Unknown19(__int64 a1)
{
  nn_hid_VibrationPlayer_Stop(*(_QWORD*)(a1 + 32) + 8LL);
  return nn_hid_VibrationPlayer_Stop(*(_QWORD*)(a1 + 40) + 8LL);
}

__int64 TargetVibration_Unknown20(__int64 a1, __int64 a2)
{
  unsigned int v3;

  v3 = a2;
  nn_hid_VibrationPlayer_SetCurrentPosition(*(_QWORD*)(a1 + 32) + 8LL, a2);
  return nn_hid_VibrationPlayer_SetCurrentPosition(*(_QWORD*)(a1 + 40) + 8LL,
                                                   v3);
}

__int64 TargetVibration_Unknown21(__int64 a1, __int64 a2, unsigned int a3)
{
  nn_hid_VibrationPlayer_SetCurrentPosition(*(_QWORD*)(a1 + 32) + 8LL, a2);
  return nn_hid_VibrationPlayer_SetCurrentPosition(*(_QWORD*)(a1 + 40) + 8LL,
                                                   a3);
}

#pragma GCC visibility pop
