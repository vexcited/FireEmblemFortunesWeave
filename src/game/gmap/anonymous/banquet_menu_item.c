#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_163fd00(void);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BanquetMenuItem_ACall(_QWORD* a1);

__int64 BanquetMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      448, 16, 0);
  GameRoutine_163fd00();
  GameRoutine_657850(v4, GameData_21319e0, "GmapBanquetMenu", 1, v3);
  return 9;
}

#pragma GCC visibility pop
