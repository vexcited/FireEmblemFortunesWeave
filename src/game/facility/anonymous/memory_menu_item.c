#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 TitleMenuItem_169ebd0(void);
__int64 game_facility_anonymous_MemoryMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                    _QWORD* a2);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_169e630(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 (*GameData_2077f90[])();
extern __int64 (*game_facility_anonymous_MemoryEventMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_MemoryMovieMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_MemoryRelianceMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_MemorySoundMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_facility_anonymous_MemoryMenuItem_ACall(__int64 a1);

__int64 game_facility_anonymous_MemoryMenuItem_ACall(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;

  v2 = (_QWORD*)GameRoutine_169e630(a1);
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_DWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_QWORD*)(v4 + 152) = a1;
  *(_WORD*)(v4 + 80) = 257;
  v13_.v13[0] = GameData_2077f90;
  v13_.v13[1] = a1;
  v13_.v14 = v13_.v13;
  *(_BYTE*)(v4 + 82) = 1;
  *(_QWORD*)(v4 + 144) = GameData_2077f90;
  *(_QWORD*)(v4 + 176) = v4 + 144;
  *(_QWORD*)v4 = game_facility_anonymous_MemoryMovieMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  BasicMenuCursor_16e0c00(v2, v4);
  if (v13_.v14 == v13_.v13) {
    v5 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v5))((__int64)v13_.v14);
LABEL_6:
  v6 = fw_memory_HeapManager_Allocate(*v3, 192, 16, 0);
  v13_.v13[0] = GameData_2077f90;
  v13_.v13[1] = a1;
  *(_WORD*)(v6 + 16) = 0;
  *(_DWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_QWORD*)(v6 + 152) = a1;
  *(_WORD*)(v6 + 80) = 257;
  v13_.v14 = v13_.v13;
  *(_BYTE*)(v6 + 82) = 1;
  *(_QWORD*)(v6 + 144) = GameData_2077f90;
  *(_QWORD*)(v6 + 176) = v6 + 144;
  *(_QWORD*)v6 = game_facility_anonymous_MemoryEventMenuItem_vtable;
  *(_QWORD*)(v6 + 8) = 0;
  BasicMenuCursor_16e0c00(v2, v6);
  if (v13_.v14 == v13_.v13) {
    v7 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_11;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v7))((__int64)v13_.v14);
LABEL_11:
  v8 = fw_memory_HeapManager_Allocate(*v3, 192, 16, 0);
  v13_.v13[0] = GameData_2077f90;
  v13_.v13[1] = a1;
  *(_WORD*)(v8 + 16) = 0;
  *(_DWORD*)(v8 + 40) = 0;
  *(_QWORD*)(v8 + 48) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  *(_QWORD*)(v8 + 64) = 0;
  *(_QWORD*)(v8 + 72) = 0;
  *(_QWORD*)(v8 + 128) = 0;
  *(_QWORD*)(v8 + 152) = a1;
  *(_WORD*)(v8 + 80) = 257;
  v13_.v14 = v13_.v13;
  *(_BYTE*)(v8 + 82) = 1;
  *(_QWORD*)(v8 + 144) = GameData_2077f90;
  *(_QWORD*)(v8 + 176) = v8 + 144;
  *(_QWORD*)v8 = game_facility_anonymous_MemorySoundMenuItem_vtable;
  *(_QWORD*)(v8 + 8) = 0;
  BasicMenuCursor_16e0c00(v2, v8);
  if (v13_.v14 == v13_.v13) {
    v9 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_16;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v9))((__int64)v13_.v14);
LABEL_16:
  v10 = fw_memory_HeapManager_Allocate(*v3, 192, 16, 0);
  v13_.v13[0] = GameData_2077f90;
  v13_.v13[1] = a1;
  *(_WORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 152) = a1;
  *(_WORD*)(v10 + 80) = 257;
  v13_.v14 = v13_.v13;
  *(_BYTE*)(v10 + 82) = 1;
  *(_QWORD*)(v10 + 144) = GameData_2077f90;
  *(_QWORD*)(v10 + 176) = v10 + 144;
  *(_QWORD*)v10 = game_facility_anonymous_MemoryRelianceMenuItem_vtable;
  *(_QWORD*)(v10 + 8) = 0;
  BasicMenuCursor_16e0c00(v2, v10);
  if (v13_.v14 == v13_.v13) {
    v11 = 32;
    goto LABEL_20;
  }
  if (v13_.v14 != nullptr) {
    v11 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v13_.v14 + v11))((__int64)v13_.v14);
  }
  return 10;
}

__int64 game_facility_anonymous_MemoryMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                    _QWORD* a2)
{
  *(_QWORD*)(*(_QWORD*)(a1 + 8) + 104LL) = *a2;
  return TitleMenuItem_169ebd0();
}

#pragma GCC visibility pop
