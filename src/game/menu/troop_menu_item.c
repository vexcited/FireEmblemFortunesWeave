#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131d78[11];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130240[8];
__int64 TroopMenuItem_Unknown25_18558b0(__int64 a1);

__int64 TroopMenuItem_Unknown25_18558b0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = *(_QWORD*)(a1 + 8);
  }
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      512, 16, 0);
  memset(v3 + 144, 0, 368, v4, v5, v6);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = "NULL";
  *(_QWORD*)(v3 + 138) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = v7 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  game_ProcInst_Register(v3);
  *(_BYTE*)(v3 + 168) = 0;
  v8 = GameData_2130240[0];
  *(_QWORD*)(v3 + 232) = 0;
  *(_BYTE*)(v3 + 172) = 0;
  *(_QWORD*)(v3 + 192) = 0;
  *(_QWORD*)(v3 + 200) = 0;
  *(_QWORD*)(v3 + 208) = 0;
  *(_QWORD*)(v3 + 216) = 0;
  *(_QWORD*)(v3 + 240) = 0;
  *(_QWORD*)(v3 + 248) = 0;
  *(_QWORD*)(v3 + 256) = 0;
  *(_QWORD*)(v3 + 264) = 0;
  *(_QWORD*)(v3 + 224) = v3 + 232;
  *(_QWORD*)(v3 + 272) = 0;
  *(_QWORD*)(v3 + 336) = 0;
  *(_QWORD*)(v3 + 344) = 0;
  *(_QWORD*)(v3 + 320) = 0;
  *(_QWORD*)(v3 + 328) = 0;
  *(_QWORD*)(v3 + 304) = 0;
  *(_QWORD*)(v3 + 312) = 0;
  *(_QWORD*)(v3 + 288) = 0;
  *(_QWORD*)(v3 + 296) = 0;
  *(_DWORD*)(v3 + 376) = 0;
  *(_QWORD*)(v3 + 384) = 0;
  *(_QWORD*)(v3 + 392) = 0;
  *(_QWORD*)(v3 + 400) = 0;
  *(_QWORD*)(v3 + 448) = 0;
  *(_QWORD*)(v3 + 464) = 0;
  *(_QWORD*)(v3 + 472) = 0;
  *(_BYTE*)(v3 + 480) = 0;
  *(_QWORD*)(v3 + 496) = 0;
  *(_QWORD*)(v3 + 152) = 0;
  *(_QWORD*)(v3 + 160) = v8 + 2;
  *(_DWORD*)(v3 + 280) = 1065353216;
  *(_QWORD*)(v3 + 352) = 1;
  *(_QWORD*)(v3 + 368) = 0xFFFFFFFFLL;
  *(_DWORD*)(v3 + 408) = 2;
  v9 = GameData_2131d78[0] + 440;
  *(_QWORD*)v3 = GameData_2131d78[0] + 16;
  *(_QWORD*)(v3 + 176) = v9;
  *(_QWORD*)(v3 + 184) = 0;
  GameRoutine_657850(v3, GameData_21319e0, "InfoUnitTroopSequence", 1, v2);
  return 9;
}

#pragma GCC visibility pop
