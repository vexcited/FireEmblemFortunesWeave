#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_169e630(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 (*game_facility_anonymous_LegionDepositoryMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_MaterialDepositoryMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_RideDepositoryMenuItem_vtable[])();
extern __int64 (
    *game_facility_anonymous_TransporterDepositoryMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 CausationTransporterMenuItem_Unknown25(__int64 a1);

__int64 CausationTransporterMenuItem_Unknown25(__int64 a1)
{
  _QWORD* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = (_QWORD*)GameRoutine_169e630(a1);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  *(_WORD*)(v3 + 16) = 0;
  *(_DWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_QWORD*)v3 = game_facility_anonymous_TransporterDepositoryMenuItem_vtable;
  *(_QWORD*)(v3 + 8) = 0;
  v4 = game_GameModeData_instance_;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) =
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 176) + 2472LL) + 84LL) > 0;
  BasicMenuCursor_16e0c00(v1, v3);
  v5 = fw_memory_HeapManager_Allocate(*v2, 144, 16, 0);
  *(_WORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_WORD*)(v5 + 80) = 257;
  *(_QWORD*)(v5 + 128) = 0;
  *(_QWORD*)v5 = game_facility_anonymous_MaterialDepositoryMenuItem_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  *(_BYTE*)(v5 + 82) =
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 176) +
                            2472LL) +
                 88LL) > 0;
  BasicMenuCursor_16e0c00(v1, v5);
  v6 = fw_memory_HeapManager_Allocate(*v2, 144, 16, 0);
  *(_WORD*)(v6 + 16) = 0;
  *(_DWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_WORD*)(v6 + 80) = 257;
  *(_QWORD*)(v6 + 128) = 0;
  *(_QWORD*)v6 = game_facility_anonymous_LegionDepositoryMenuItem_vtable;
  *(_QWORD*)(v6 + 8) = 0;
  *(_BYTE*)(v6 + 82) =
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 176) +
                            2504LL) +
                 72LL) > 0;
  BasicMenuCursor_16e0c00(v1, v6);
  v7 = fw_memory_HeapManager_Allocate(*v2, 144, 16, 0);
  *(_WORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_WORD*)(v7 + 80) = 257;
  *(_QWORD*)(v7 + 128) = 0;
  *(_QWORD*)v7 = game_facility_anonymous_RideDepositoryMenuItem_vtable;
  *(_QWORD*)(v7 + 8) = 0;
  *(_BYTE*)(v7 + 82) =
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 176) +
                            2488LL) +
                 144LL) > 0;
  BasicMenuCursor_16e0c00(v1, v7);
  return 10;
}

#pragma GCC visibility pop
