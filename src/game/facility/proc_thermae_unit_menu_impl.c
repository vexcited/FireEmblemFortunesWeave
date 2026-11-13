#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_950ec0(_QWORD);
__int64 GameRoutine_fa6720(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*game_facility_anonymous_ProcThermaeThermaeMenu_vtable[])();
extern __int64 (*game_facility_anonymous_ThermaeThermaeMenuItem_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212dcd0;
__int64 ProcThermaeUnitMenu_192bcc0(__int64 a1);

__int64 ProcThermaeUnitMenu_192bcc0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 result;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1072, 16, 0);
  GameRoutine_fa6720(v3, "ThermaeThermaeMenu");
  *v3 = game_facility_anonymous_ProcThermaeThermaeMenu_vtable;
  v3[22] = game_menu_MenuInput_InputUnknown00_ptr;
  v3[132] = game_menu_GameMenuImpl_ImplUnknown00_ptr;
  *(_DWORD*)(*GameData_212dcd0 + 8) = -1;
  GameRoutine_657850(v3, GameData_212c730, "ProcThermaeThermaeMenu", 1, a1);
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  result = GameRoutine_950ec0(v4);
  if (v10 != v11) {
    v6 = v10;
    do {
      v7 = *v6++;
      v8 = fw_memory_HeapManager_Allocate(*v2, 96, 16, 0);
      *(_WORD*)(v8 + 16) = 0;
      *(_DWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 48) = 0;
      *(_QWORD*)(v8 + 56) = 0;
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 0;
      *(_WORD*)(v8 + 80) = 257;
      *(_BYTE*)(v8 + 82) = 1;
      *(_QWORD*)v8 = game_facility_anonymous_ThermaeThermaeMenuItem_vtable;
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 88) = v7;
      result = BasicMenuCursor_16e0c00(v3, v8);
    } while (v6 != v11);
  }
  if (v10 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v2 + v9, (_QWORD)(v10));
  }
  return result;
}

#pragma GCC visibility pop
