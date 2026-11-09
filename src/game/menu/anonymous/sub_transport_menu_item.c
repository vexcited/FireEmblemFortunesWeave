#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
extern _UNKNOWN* GameData_21319e0;
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131a18[4];
__int64 SubTransportMenuItem_Unknown25(__int64 a1);

__int64 SubTransportMenuItem_Unknown25(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 144);
  v3 = 2 * *(unsigned __int8*)(a1 + 152);
  v4 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v4 + 152) != 0) {
    v5 = *(_QWORD*)(v4 + 152);
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
  }
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      392, 16, 0);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)v6 = v7 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  game_ProcInst_Register();
  *(_QWORD*)(v6 + 232) = 0;
  *(_QWORD*)(v6 + 224) = v6 + 232;
  v8 = GameData_2130240[0];
  *(_BYTE*)(v6 + 168) = 0;
  *(_BYTE*)(v6 + 172) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 200) = 0;
  *(_QWORD*)(v6 + 208) = 0;
  *(_QWORD*)(v6 + 216) = 0;
  *(_QWORD*)(v6 + 240) = 0;
  *(_QWORD*)(v6 + 248) = 0;
  *(_QWORD*)(v6 + 256) = 0;
  *(_QWORD*)(v6 + 264) = 0;
  *(_QWORD*)(v6 + 272) = 0;
  *(_QWORD*)(v6 + 336) = 0;
  *(_QWORD*)(v6 + 344) = 0;
  *(_QWORD*)(v6 + 320) = 0;
  *(_QWORD*)(v6 + 328) = 0;
  *(_QWORD*)(v6 + 304) = 0;
  *(_QWORD*)(v6 + 312) = 0;
  *(_QWORD*)(v6 + 288) = 0;
  *(_QWORD*)(v6 + 296) = 0;
  *(_QWORD*)(v6 + 352) = 0;
  *(_QWORD*)(v6 + 360) = v2;
  *(_QWORD*)(v6 + 368) = 0;
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 160) = v8 + 2;
  *(_DWORD*)(v6 + 280) = 1065353216;
  v9 = GameData_2131a18[0];
  *(_DWORD*)(v6 + 376) = v3;
  *(_QWORD*)(v6 + 176) = v9 + 56;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)v6 = v9 + 2;
  *(_QWORD*)(v6 + 380) = 0;
  *(_WORD*)(v6 + 388) = 257;
  GameRoutine_657850(v6, GameData_21319e0, "TransporterMenu", 1, v5);
  return 9;
}

#pragma GCC visibility pop
