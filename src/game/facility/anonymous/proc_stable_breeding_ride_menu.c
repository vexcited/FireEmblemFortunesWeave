#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
extern __int64 (*game_facility_anonymous_BreedingRideMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcStableBreedingRideMenu_Unknown96(_QWORD* a1);
__int64 ProcStableBreedingRideMenu_Unknown149(__int64 a1, __int64 a2,
                                              __int64 a3, __int64 a4, int a5,
                                              int a6);

__int64 ProcStableBreedingRideMenu_Unknown96(_QWORD* a1)
{
  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  (*(void (**)(_QWORD*))(*a1 + 1216LL))(a1);
  return (*(__int64 (**)(_QWORD*))(*a1 + 1112LL))(a1);
}

__int64 ProcStableBreedingRideMenu_Unknown149(__int64 a1, __int64 a2,
                                              __int64 a3, __int64 a4, int a5,
                                              int a6)
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
  *(_QWORD*)result = game_facility_anonymous_BreedingRideMenuItem_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

#pragma GCC visibility pop
