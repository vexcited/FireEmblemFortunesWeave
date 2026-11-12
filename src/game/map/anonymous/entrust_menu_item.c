#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64* GameRoutine_820d50(int);
extern __int64 (*game_map_anonymous_EntrustKindMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
bool EntrustMenuItem_Unknown6();
__int64 EntrustMenuItem_Unknown25(__int64 a1);
__int64 GameRoutine_16eb960_alt1(__int64,
                                 _QWORD*) __asm__("GameRoutine_16eb960");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void BasicMenuCursor_16e0c00(_QWORD*, __int64);

bool EntrustMenuItem_Unknown6()
{
  __int64* v0;
  __int64 v1;

  v0 = GameRoutine_820d50(4);
  return game_GameModeData_instance_ == 0 ||
         (v1 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) == 0 ||
         *(_DWORD*)(v1 + 32) == 0;
}

__int64 EntrustMenuItem_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  int v11;
  __int64 v12;

  v1 = *(_QWORD*)(a1 + 8);
  v10 = a1;
  v12 = 0;
  v2 = *(_QWORD*)(v1 + 152);
  v11 = 1;
  if (v2 != 0) {
    v1 = v2;
  }
  v3 = (_QWORD*)GameRoutine_16eb960_alt1(v1, &v10);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
  *(_WORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_BYTE*)(v5 + 82) = 1;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 80) = 257;
  *(_QWORD*)v5 = game_map_anonymous_EntrustKindMenuItem_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  *(_BYTE*)(v5 + 144) = 2;
  BasicMenuCursor_16e0c00(v3, v5);
  v6 = fw_memory_HeapManager_Allocate_alt1(*v4, 160, 16, 0);
  *(_WORD*)(v6 + 16) = 0;
  *(_DWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_WORD*)(v6 + 80) = 257;
  *(_BYTE*)(v6 + 82) = 1;
  *(_QWORD*)(v6 + 128) = 0;
  *(_QWORD*)v6 = game_map_anonymous_EntrustKindMenuItem_vtable;
  *(_QWORD*)(v6 + 8) = 0;
  *(_BYTE*)(v6 + 144) = 1;
  BasicMenuCursor_16e0c00(v3, v6);
  v7 = fw_memory_HeapManager_Allocate_alt1(*v4, 160, 16, 0);
  *(_WORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_WORD*)(v7 + 80) = 257;
  *(_BYTE*)(v7 + 82) = 1;
  *(_QWORD*)(v7 + 128) = 0;
  *(_QWORD*)v7 = game_map_anonymous_EntrustKindMenuItem_vtable;
  *(_QWORD*)(v7 + 8) = 0;
  *(_BYTE*)(v7 + 144) = 3;
  BasicMenuCursor_16e0c00(v3, v7);
  v8 = fw_memory_HeapManager_Allocate_alt1(*v4, 160, 16, 0);
  *(_WORD*)(v8 + 16) = 0;
  *(_DWORD*)(v8 + 40) = 0;
  *(_QWORD*)(v8 + 48) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  *(_QWORD*)(v8 + 64) = 0;
  *(_QWORD*)(v8 + 72) = 0;
  *(_WORD*)(v8 + 80) = 257;
  *(_BYTE*)(v8 + 82) = 1;
  *(_QWORD*)(v8 + 128) = 0;
  *(_QWORD*)v8 = game_map_anonymous_EntrustKindMenuItem_vtable;
  *(_QWORD*)(v8 + 8) = 0;
  *(_BYTE*)(v8 + 144) = 4;
  BasicMenuCursor_16e0c00(v3, v8);
  return 10;
}

#pragma GCC visibility pop
