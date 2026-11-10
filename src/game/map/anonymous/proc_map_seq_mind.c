#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_80e6f0(_QWORD, _QWORD);
__int64 GameRoutine_80e800(_QWORD);
__int64 MapInfo_825790(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f95ba8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 (*game_map_BattleSides_vtable[])();
extern __int64 (*game_map_BattleTarget_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqMind_vtable[])();
extern __int64 GameData_21cd128;
extern __int64 GameData_21cd130;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cfd0[8];
extern __int64* game_g_empty_item_ptr;
__int64 ProcMapSeqMind_Destructor(__int64 a1);
__int64 ProcMapSeqMind_Unknown18();
__int64 ProcMapSeqMind_Unknown5();

__int64 ProcMapSeqMind_Destructor(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqMind_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1f95ba8;
  v2 = GameData_21cd130;
  v3 = *(_DWORD*)(GameData_21cd130 + 40) - 1;
  *(_DWORD*)(GameData_21cd130 + 40) = v3;
  if (v3 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v2 + 32) + 8LL))(v2 + 32);
  }
  if (*(_BYTE*)(a1 + 23881) == 1 && GameData_21cd128 != 0) {
    MapInfo_825790();
  }
  *(_QWORD*)(a1 + 12568) = game_map_BattleInfo_vtable;
  v4 = *(_QWORD*)(a1 + 23872);
  *(_QWORD*)(a1 + 23864) = game_map_BattleArea_vtable;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    *(_QWORD*)(a1 + 23872) = 0;
  }
  *(_QWORD*)(a1 + 12576) = game_map_BattleSides_vtable;
  BattleSide_Destructor(a1 + 14864);
  BattleSide_Destructor(a1 + 14104);
  BattleSide_Destructor(a1 + 13344);
  BattleSide_Destructor(a1 + 12584);
  v5 = *(_QWORD**)(a1 + 12536);
  *(_QWORD*)(a1 + 160) = game_map_BattleTarget_vtable;
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != nullptr) {
    do {
      v7 = (_QWORD*)*v5;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v8, v5);
      v5 = v7;
    } while (v7 != nullptr);
  }
  v9 = *(_QWORD*)(a1 + 12520);
  *(_QWORD*)(a1 + 12520) = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v10, v9);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqMind_Unknown18()
{
  unsigned int v0;
  __int64 v1;
  __int64 v2;

  v0 = *(unsigned __int16*)(*GameData_212cfd0[0] + 44);
  if (*(_WORD*)(*GameData_212cfd0[0] + 44) == 0) {
    v0 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  if ((*(_DWORD*)(*GameData_212cfd0[0] + 56) & 0xFFF) != 0) {
    v1 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(*GameData_212cfd0[0] + 56) & 0xFFF));
  }
  else {
    v1 = 0;
  }
  v2 = GameRoutine_80e6f0(
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v0), v1);
  return GameRoutine_80e800(v2);
}

__int64 ProcMapSeqMind_Unknown5()
{
  unsigned int v0;
  __int64 v1;
  __int64 v2;

  v0 = *(unsigned __int16*)(*GameData_212cfd0[0] + 44);
  if (*(_WORD*)(*GameData_212cfd0[0] + 44) == 0) {
    v0 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  if ((*(_DWORD*)(*GameData_212cfd0[0] + 56) & 0xFFF) != 0) {
    v1 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(*GameData_212cfd0[0] + 56) & 0xFFF));
  }
  else {
    v1 = 0;
  }
  v2 = GameRoutine_80e6f0(
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v0), v1);
  return GameRoutine_80e800(v2);
}

#pragma GCC visibility pop
