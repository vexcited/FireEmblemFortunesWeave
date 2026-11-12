#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_AssistMenuItem_NextTimeline_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SystemMenuItem_Assist_Gmap_Unknown25(__int64 a1);
__int64 GameRoutine_16eb960_alt1(__int64,
                                 _QWORD*) __asm__("GameRoutine_16eb960");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void BasicMenuCursor_16e0c00(_QWORD*, __int64);

__int64 SystemMenuItem_Assist_Gmap_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v6;
  int v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 8);
  v6 = a1;
  v8 = 0;
  v2 = *(_QWORD*)(v1 + 152);
  v7 = 1;
  if (v2 != 0) {
    v1 = v2;
  }
  v3 = (_QWORD*)GameRoutine_16eb960_alt1(v1, &v6);
  v4 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_QWORD*)(v4 + 136) = 0;
  *(_BYTE*)(v4 + 17) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_BYTE*)(v4 + 82) = 1;
  *(_WORD*)(v4 + 80) = 257;
  *(_QWORD*)v4 = game_menu_AssistMenuItem_NextTimeline_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  BasicMenuCursor_16e0c00(v3, v4);
  return 10;
}

#pragma GCC visibility pop
