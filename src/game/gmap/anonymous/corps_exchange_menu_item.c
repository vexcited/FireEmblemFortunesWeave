#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131cd8[31];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130240[8];
__int64 CorpsExchangeMenuItem_Unknown25(_QWORD* a1);

__int64 CorpsExchangeMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;

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
                                      416, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  *(_BYTE*)(v4 + 168) = 0;
  v6 = GameData_2130240[0];
  *(_QWORD*)(v4 + 232) = 0;
  *(_BYTE*)(v4 + 172) = 0;
  *(_QWORD*)(v4 + 192) = 0;
  *(_QWORD*)(v4 + 200) = 0;
  *(_QWORD*)(v4 + 208) = 0;
  *(_QWORD*)(v4 + 216) = 0;
  *(_QWORD*)(v4 + 240) = 0;
  *(_QWORD*)(v4 + 248) = 0;
  *(_QWORD*)(v4 + 256) = 0;
  *(_QWORD*)(v4 + 264) = 0;
  *(_QWORD*)(v4 + 224) = v4 + 232;
  *(_QWORD*)(v4 + 272) = 0;
  *(_QWORD*)(v4 + 344) = 0;
  *(_QWORD*)(v4 + 352) = 0;
  *(_QWORD*)(v4 + 328) = 0;
  *(_QWORD*)(v4 + 336) = 0;
  *(_QWORD*)(v4 + 312) = 0;
  *(_QWORD*)(v4 + 320) = 0;
  *(_QWORD*)(v4 + 296) = 0;
  *(_QWORD*)(v4 + 304) = 0;
  *(_QWORD*)(v4 + 288) = 0;
  *(_QWORD*)(v4 + 152) = 0;
  *(_QWORD*)(v4 + 160) = v6 + 2;
  *(_DWORD*)(v4 + 280) = 1065353216;
  v7 = GameData_2131cd8[0];
  *(_QWORD*)(v4 + 368) = 0;
  *(_DWORD*)(v4 + 376) = 0;
  *(_QWORD*)(v4 + 384) = 0;
  *(_QWORD*)(v4 + 392) = 0;
  *(_QWORD*)(v4 + 400) = 0;
  *(_QWORD*)(v4 + 176) = v7 + 416;
  *(_QWORD*)(v4 + 184) = 0;
  *(_QWORD*)v4 = v7 + 16;
  *(_DWORD*)(v4 + 360) = 2;
  *(_DWORD*)(v4 + 407) = 0;
  GameRoutine_657850(v4, GameData_21319e0, "GmapCorpsMenu", 1, v3);
  return 9;
}

#pragma GCC visibility pop
