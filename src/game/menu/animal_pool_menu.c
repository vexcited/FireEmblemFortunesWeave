#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_EquipMenuItem_AnimalPool_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 AnimalPoolMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, int a5, int a6);
__int64 AnimalPoolMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, int a5, int a6)
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *(_DWORD*)(result + 40) = a5;
  *(_QWORD*)(result + 88) = a4;
  *(_QWORD*)(result + 96) = a3;
  *(_DWORD*)(result + 104) = a6;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_menu_EquipMenuItem_AnimalPool_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

#pragma GCC visibility pop
