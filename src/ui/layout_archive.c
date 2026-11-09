#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ArchiveHandle_Destructor(_QWORD);
__int64 GameRoutine_1365120();
__int64 GameRoutine_572220(_QWORD, _QWORD);
__int64 GameRoutine_573390(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*ui_LayoutArchive_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64 LayoutArchive_Destructor(__int64 a1);
__int64 LayoutArchive_DeletingDestructor(__int64 a1);

__int64 LayoutArchive_Destructor(__int64 a1)
{
  *(_QWORD*)a1 = ui_LayoutArchive_vtable;
  GameRoutine_573390(a1 + 32, GameRoutine_1365120, 0);
  GameRoutine_572220(a1 + 32, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_634d80(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL));
  *(_QWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 20) = 0;
  return ArchiveHandle_Destructor(a1 + 32);
}

__int64 LayoutArchive_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = ui_LayoutArchive_vtable;
  GameRoutine_573390(a1 + 32, GameRoutine_1365120, 0);
  GameRoutine_572220(a1 + 32, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_634d80(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL));
  *(_QWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 20) = 0;
  ArchiveHandle_Destructor(a1 + 32);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
