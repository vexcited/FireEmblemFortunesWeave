#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_gameui_DelayImageLoader_vtable[])();
extern __int64 (*game_gameui_ImageLoader_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 DelayImageLoader_Destructor(_QWORD* a1);
__int64 DelayImageLoader_DeletingDestructor(_QWORD* a1);

__int64 DelayImageLoader_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;

  *a1 = game_gameui_DelayImageLoader_vtable;
  result = a1[8];
  if (result != 0) {
    if ((*(_WORD*)(result + 136) & 1) == 0) {
      result = GameRoutine_657a50(result, 1);
    }
    a1[8] = 0;
  }
  v3 = a1[2];
  a1[1] = game_gameui_ImageLoader_vtable;
  if (v3 != 0) {
    result = GameRoutine_634d80(*(_QWORD*)(v3 + 8), v3);
    a1[2] = 0;
  }
  return result;
}

__int64 DelayImageLoader_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_gameui_DelayImageLoader_vtable;
  v2 = a1[8];
  if (v2 != 0) {
    if ((*(_WORD*)(v2 + 136) & 1) == 0) {
      GameRoutine_657a50(v2, 1);
    }
    a1[8] = 0;
  }
  v3 = a1[2];
  a1[1] = game_gameui_ImageLoader_vtable;
  if (v3 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v3 + 8), v3);
    a1[2] = 0;
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

#pragma GCC visibility pop
