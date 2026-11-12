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
__int64 LayoutArchive_DeletingDestructor_alt1(__int64 a1) __asm__(
    "LayoutArchive_DeletingDestructor");
_QWORD*
ArchiveHandle_Destructor_alt1(_QWORD*) __asm__("ArchiveHandle_Destructor");
__int64 GameRoutine_634d80_alt1(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 LayoutArchive_572220(_QWORD*, __int64);
__int64 LayoutArchive_573390(__int64, __int64, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void LayoutArchive_DeletingDestructor(__int64 a1);

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

void LayoutArchive_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = ui_LayoutArchive_vtable;
  LayoutArchive_573390(a1 + 32, (__int64)GameRoutine_1365120, 0);
  LayoutArchive_572220((_QWORD*)(a1 + 32), *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_634d80_alt1(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL),
                          *(_QWORD*)(a1 + 24));
  *(_QWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 20) = 0;
  ArchiveHandle_Destructor_alt1((_QWORD*)(a1 + 32));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
