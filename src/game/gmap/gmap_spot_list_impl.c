#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_167b0c0(__int64, __int64, char);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* GmapSpotList_167b840(__int64 a1, __int64 a2, char a3);

_QWORD* GmapSpotList_167b840(__int64 a1, __int64 a2, char a3)
{
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;

  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1200, 16, 0);
  GameRoutine_167b0c0((__int64)v6, a2, a3);
  GameRoutine_657850(v6, GameData_212c730, "GmapSpotList", 1, a1);
  v8 = (_QWORD*)v6[32];
  v7 = (_QWORD*)v6[33];
  v6[42] = 0;
  while (v8 != v7) {
    if (*v8 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v8 + 8LL))(*v8);
      v7 = (_QWORD*)v6[33];
    }
    ++v8;
  }
  v9 = v6[43];
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
    v6[43] = 0;
  }
  v6[33] = v6[32];
  v6[30] = v6[29];
  (*(void (**)(_QWORD*))(*v6 + 1024LL))(v6);
  (*(void (**)(_QWORD*))(*v6 + 1032LL))(v6);
  return v6;
}

#pragma GCC visibility pop
