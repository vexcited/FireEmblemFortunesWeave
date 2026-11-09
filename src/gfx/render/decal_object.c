#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*gfx_render_DecalObject_vtable[])();
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64 DecalObject_Destructor(__int64 a1);

__int64 DecalObject_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = gfx_render_DecalObject_vtable;
  GameRoutine_6040f0(a1 + 288, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_604050(a1 + 288);
  v2 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  result = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  v4 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)a1 = gfx_render_Object_vtable;
  if (v4 != 0) {
    *(_QWORD*)(a1 + 88) = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 24);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
