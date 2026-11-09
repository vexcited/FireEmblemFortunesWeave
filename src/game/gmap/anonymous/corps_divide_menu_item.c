#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131cd8[31];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130240[8];
__int64 CorpsDivideMenuItem_Unknown25(_QWORD* a1);
__int64 CorpsDivideMenuItem_Unknown70(_DWORD* a1, __int64 a2);

__int64 CorpsDivideMenuItem_Unknown25(_QWORD* a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;

  v2 = 1;
  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
    v3 = a1[1];
    if (*(_QWORD*)(v3 + 152) != 0) {
      v4 = *(_QWORD*)(v3 + 152);
    }
    else {
      v4 = a1[1];
    }
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        416, 16, 0);
    v6 = GameData_212c608[0];
    *(_QWORD*)(v5 + 96) = 0;
    *(_QWORD*)(v5 + 104) = 0;
    *(_QWORD*)(v5 + 112) = 0;
    *(_QWORD*)(v5 + 120) = 0;
    *(_QWORD*)(v5 + 128) = 0;
    *(_WORD*)(v5 + 136) = 0;
    *(_QWORD*)(v5 + 16) = 0;
    *(_QWORD*)(v5 + 24) = "NULL";
    *(_QWORD*)(v5 + 138) = 0;
    *(_QWORD*)(v5 + 144) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_QWORD*)(v5 + 88) = 0;
    *(_QWORD*)v5 = v6 + 16;
    *(_QWORD*)(v5 + 8) = 0;
    game_ProcInst_Register(v5);
    *(_BYTE*)(v5 + 168) = 0;
    v7 = GameData_2130240[0];
    *(_QWORD*)(v5 + 232) = 0;
    *(_BYTE*)(v5 + 172) = 0;
    *(_QWORD*)(v5 + 192) = 0;
    *(_QWORD*)(v5 + 200) = 0;
    *(_QWORD*)(v5 + 208) = 0;
    *(_QWORD*)(v5 + 216) = 0;
    *(_QWORD*)(v5 + 240) = 0;
    *(_QWORD*)(v5 + 248) = 0;
    *(_QWORD*)(v5 + 256) = 0;
    *(_QWORD*)(v5 + 264) = 0;
    *(_QWORD*)(v5 + 224) = v5 + 232;
    *(_QWORD*)(v5 + 272) = 0;
    *(_QWORD*)(v5 + 344) = 0;
    *(_QWORD*)(v5 + 352) = 0;
    *(_QWORD*)(v5 + 328) = 0;
    *(_QWORD*)(v5 + 336) = 0;
    *(_QWORD*)(v5 + 312) = 0;
    *(_QWORD*)(v5 + 320) = 0;
    *(_QWORD*)(v5 + 296) = 0;
    *(_QWORD*)(v5 + 304) = 0;
    *(_QWORD*)(v5 + 288) = 0;
    *(_QWORD*)(v5 + 152) = 0;
    *(_QWORD*)(v5 + 160) = v7 + 2;
    *(_DWORD*)(v5 + 280) = 1065353216;
    v8 = GameData_2131cd8[0];
    *(_DWORD*)(v5 + 360) = 1;
    *(_QWORD*)(v5 + 368) = 0;
    *(_DWORD*)(v5 + 376) = 0;
    *(_QWORD*)(v5 + 384) = 0;
    *(_QWORD*)(v5 + 392) = 0;
    *(_QWORD*)(v5 + 400) = 0;
    *(_QWORD*)(v5 + 176) = v8 + 416;
    *(_QWORD*)(v5 + 184) = 0;
    *(_QWORD*)v5 = v8 + 16;
    *(_DWORD*)(v5 + 407) = 0;
    GameRoutine_657850(v5, GameData_21319e0, "GmapCorpsMenu", 1, v4);
    return 9;
  }
  return v2;
}

__int64 CorpsDivideMenuItem_Unknown70(_DWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 result;

  v4 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 592LL))(a1);
  result = GameRoutine_60a020(a2 + 8, v4);
  *(_DWORD*)(a2 + 72) = a1[23] - a1[22];
  return result;
}

#pragma GCC visibility pop
