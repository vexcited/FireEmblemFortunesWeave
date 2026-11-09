#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e2a60(_QWORD);
__int64 GameRoutine_7bb560(_QWORD);
__int64 GameRoutine_8234c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*game_map_Camera_Impl_vtable[])();
extern __int64 GameData_21c9648;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Impl_Destructor_7c2110(__int64 a1);
__int64 Impl_DeletingDestructor_7c21c0(__int64 a1);

__int64 Impl_Destructor_7c2110(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  _BYTE v7[200];

  *(_QWORD*)a1 = game_map_Camera_Impl_vtable;
  v2 = snd_fnd_WeakHandle_isValid(a1 + 416);
  if ((v2 & 1) != 0) {
    snd_Fade_Fade_10c830(v7, 0.0f);
    snd_stop_ffc40(a1 + 416, v7);
    snd_Fade_Destroy_Fade(v7);
    v2 = snd_fnd_WeakHandle_reset(a1 + 416);
  }
  v3 = GameRoutine_8234c0(v2);
  GameRoutine_15e2a60(v3);
  if (*(_BYTE*)(a1 + 481) != 0) {
    v4 = GameData_21c9648;
    v5 = *(_DWORD*)(GameData_21c9648 + 16) - 1;
    *(_DWORD*)(GameData_21c9648 + 16) = v5;
    if (v5 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v4 + 8) + 8LL))(v4 + 8);
    }
    *(_BYTE*)(a1 + 481) = 0;
  }
  return GameRoutine_7bb560(a1 + 432);
}

__int64 Impl_DeletingDestructor_7c21c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  _BYTE v8[200];

  *(_QWORD*)a1 = game_map_Camera_Impl_vtable;
  v2 = snd_fnd_WeakHandle_isValid(a1 + 416);
  if ((v2 & 1) != 0) {
    snd_Fade_Fade_10c830(v8, 0.0f);
    snd_stop_ffc40(a1 + 416, v8);
    snd_Fade_Destroy_Fade(v8);
    v2 = snd_fnd_WeakHandle_reset(a1 + 416);
  }
  v3 = GameRoutine_8234c0(v2);
  GameRoutine_15e2a60(v3);
  if (*(_BYTE*)(a1 + 481) != 0) {
    v4 = GameData_21c9648;
    v5 = *(_DWORD*)(GameData_21c9648 + 16) - 1;
    *(_DWORD*)(GameData_21c9648 + 16) = v5;
    if (v5 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v4 + 8) + 8LL))(v4 + 8);
    }
    *(_BYTE*)(a1 + 481) = 0;
  }
  GameRoutine_7bb560(a1 + 432);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, a1);
}

#pragma GCC visibility pop
