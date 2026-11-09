#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_184e6b0(__int64, unsigned int);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* RelianceUnitSelectMenu_184f060(__int64 a1, unsigned int a2);

_QWORD* RelianceUnitSelectMenu_184f060(__int64 a1, unsigned int a2)
{
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;

  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1200, 16, 0);
  GameRoutine_184e6b0((__int64)v4, a2);
  GameRoutine_657850(v4, GameData_212c730, "RelianceUnitSelectMenu", 1, a1);
  v6 = (_QWORD*)v4[32];
  v5 = (_QWORD*)v4[33];
  v4[42] = 0;
  while (v6 != v5) {
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
      v5 = (_QWORD*)v4[33];
    }
    ++v6;
  }
  v7 = v4[43];
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    v4[43] = 0;
  }
  v4[33] = v4[32];
  v4[30] = v4[29];
  (*(void (**)(_QWORD*))(*v4 + 1024LL))(v4);
  (*(void (**)(_QWORD*))(*v4 + 1032LL))(v4);
  return v4;
}

#pragma GCC visibility pop
