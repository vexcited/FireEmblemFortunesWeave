#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_hub_anonymous_SystemMenuItem_Info_Hub_vtable[])();
extern __int64 (*game_menu_SystemMenuItem_Inventory_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 HubSystemMenu_Unknown143();
__int64 HubSystemMenu_Unknown144();

__int64 HubSystemMenu_Unknown143()
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_BYTE*)(result + 17) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_menu_SystemMenuItem_Inventory_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 HubSystemMenu_Unknown144()
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_BYTE*)(result + 17) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_hub_anonymous_SystemMenuItem_Info_Hub_vtable;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 88) = 5;
  return result;
}

#pragma GCC visibility pop
