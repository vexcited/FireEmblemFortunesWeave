#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 GameData_2259380;
extern __int64 GameData_2259388;
extern __int64 GameData_2259390;
extern __int64 GameData_2259398;
extern __int64 GameData_22593a0;
extern __int64 GameData_22593a8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_menu_15bcf10();
__attribute__((swiftcall)) void game_menu_16d1ac0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_menu_16d1ad0(PSEUDO_X8 x8_);

__int64 game_menu_15bcf10()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;

  v0 = (__int64*)fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      128, 16, 0);
  *(_QWORD*)(v1 + 40) = "Info01";
  *(_QWORD*)(v1 + 48) = "MID_Sys_Person";
  *(_BYTE*)v1 = 1;
  *(_DWORD*)(v1 + 56) = 1;
  *(_DWORD*)(v1 + 120) = 1;
  *(_BYTE*)(v1 + 64) = 11;
  *(_DWORD*)(v1 + 24) = -1;
  *(_QWORD*)(v1 + 72) = "Info02";
  *(_QWORD*)(v1 + 80) = "MID_Sys_Class";
  *(_BYTE*)(v1 + 32) = 10;
  GameData_2259390 = v1 + 128;
  *(_QWORD*)(v1 + 8) = "Info00";
  *(_QWORD*)(v1 + 16) = "MID_Sys_Equipped";
  GameData_2259380 = v1;
  GameData_2259388 = v1 + 128;
  *(_DWORD*)(v1 + 88) = 3;
  *(_BYTE*)(v1 + 96) = 12;
  *(_QWORD*)(v1 + 104) = "Info03";
  *(_QWORD*)(v1 + 112) = "MID_Sys_Ride";
  GameRoutine_2b0();
  v2 = fw_memory_HeapManager_Allocate(*v0, 64, 16, 0);
  *(_BYTE*)v2 = 1;
  *(_QWORD*)(v2 + 8) = "Info00";
  *(_QWORD*)(v2 + 16) = "MID_Sys_Equipped";
  *(_DWORD*)(v2 + 24) = -1;
  *(_BYTE*)(v2 + 32) = 10;
  *(_QWORD*)(v2 + 40) = "Info01";
  *(_QWORD*)(v2 + 48) = "MID_Sys_Proper";
  *(_DWORD*)(v2 + 56) = 1;
  GameData_2259398 = v2;
  GameData_22593a0 = v2 + 64;
  GameData_22593a8 = v2 + 64;
  return GameRoutine_2b0();
}

__attribute__((swiftcall)) void game_menu_16d1ac0(PSEUDO_X8 x8_)
{
  _DWORD* a1 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  *a1 = 0x8000;
}

__attribute__((swiftcall)) void game_menu_16d1ad0(PSEUDO_X8 x8_)
{
  _DWORD* a1 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  *a1 = 0x8000;
}

#pragma GCC visibility pop
