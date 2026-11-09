#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 CmdBtlSkillMenuItem_Unknown71(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_map_anonymous_CmdBtlSkillMenuItem_vtable[])();
extern __int64 GameData_21c99b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
__int64 SkillMenuItem_15bf8a0(__int64 a1, _QWORD* a2, __int64* a3);
bool SkillMenuItem_15bfa20(__int64 a1, __int64 a2);
__int64 SkillMenuItem_15bfb50(__int64 a1, int* a2);

__int64 SkillMenuItem_15bf8a0(__int64 a1, _QWORD* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;

  v3 = *a2;
  v4 = *a3;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 464LL))(*a2) & 1) != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4) & 1) == 0) {
    return 1;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) & 1) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4);
  }
  return 0;
}

bool SkillMenuItem_15bfa20(__int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(*(_QWORD*)a2 + 84LL) & 0xFFF)) ==
         *(_QWORD*)(a1 + 8);
}

__int64 SkillMenuItem_15bfb50(__int64 a1, int* a2)
{
  __int64 v4;
  char v5;
  int v6;
  _DWORD* v7;
  int v8;

  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  v5 = **(_BYTE**)(a1 + 8);
  *(_WORD*)(v4 + 80) = 257;
  *(_WORD*)(v4 + 16) = 0;
  *(_DWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_BYTE*)(v4 + 90) = 0;
  *(_BYTE*)(v4 + 82) = 1;
  v6 = *a2;
  *(_BYTE*)(v4 + 88) = v5;
  *(_DWORD*)(v4 + 84) = v6;
  *(_QWORD*)v4 = game_map_anonymous_CmdBtlSkillMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_BYTE*)(v4 + 89) = *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                            8LL * (v6 & 0xFFF)) +
                                 249LL) &
                       1;
  *(_BYTE*)(v4 + 90) = CmdBtlSkillMenuItem_Unknown71() & 1;
  v7 = *(_DWORD**)(a1 + 16);
  v8 = (*v7)++;
  *(_DWORD*)(v4 + 40) = v8;
  return BasicMenuCursor_16e0c00(**(_QWORD**)(a1 + 24), v4);
}

#pragma GCC visibility pop
