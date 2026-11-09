#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_PoolCorpsMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CorpsMenuItem_1730510(__int64 result, __int64* a2);

__int64 CorpsMenuItem_1730510(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;

  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 418) & 0x18) == 0) {
    v3 = *(_QWORD*)(result + 8);
    v4 = result;
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        120, 16, 0);
    v6 = **(_QWORD**)(v4 + 16);
    v7 = **(_DWORD**)(v4 + 24);
    v8 = **(_DWORD**)(v4 + 32);
    *(_WORD*)(v5 + 80) = 257;
    *(_WORD*)(v5 + 16) = 0;
    *(_DWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_BYTE*)(v5 + 104) = 0;
    *(_BYTE*)(v5 + 116) = 0;
    *(_BYTE*)(v5 + 82) = 1;
    *(_QWORD*)(v5 + 88) = v6;
    *(_QWORD*)(v5 + 96) = v2;
    *(_DWORD*)(v5 + 108) = v7;
    *(_DWORD*)(v5 + 112) = v8;
    *(_QWORD*)v5 = game_gmap_anonymous_PoolCorpsMenuItem_vtable;
    *(_QWORD*)(v5 + 8) = 0;
    result = BasicMenuCursor_16e0c00(v3, v5);
    ++**(_DWORD**)(v4 + 32);
  }
  return result;
}

#pragma GCC visibility pop
