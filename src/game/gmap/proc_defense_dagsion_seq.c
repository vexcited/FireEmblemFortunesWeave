#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_ProcDefenseDagsionSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcDefenseDagsionSeq_Destructor(__int64 a1);
__int64 ProcDefenseDagsionSeq_DeletingDestructor(__int64 a1);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_HashString32_alt1(_QWORD, _QWORD) __asm__("game_HashString32");
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN GameData_216de68;
extern __int64* GameData_212d460[6];
extern __int64* GameData_2130e70;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_22416c0;
extern __int64 game_GameModeData_instance_;
__int64 ProcDefenseDagsionSeq_1521b80(__int64 a1);
__int64 ProcDefenseDagsionSeq_1521ce0(__int64 result);
__int64 ProcDefenseDagsionSeq_1521e50(__int64 result);

__int64 ProcDefenseDagsionSeq_1521b80(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  char v6;

  if (game_GameModeData_instance_ == 0 ||
      (result = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), a1 + 192)) == 0 ||
      *(_DWORD*)(result + 32) == 0) {
    if (GameData_21ec7b8 == 0) {
      v3 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v3, "MID_DefenseBattle_e09", 0);
      v4 = *(_QWORD*)(a1 + 40);
      if (v4 != 0) {
        *(_QWORD*)(v4 + 48) = v3;
        *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v3;
      *(_QWORD*)(v3 + 24) = "talk::Seq";
      *(_QWORD*)(v3 + 32) = a1;
      *(_DWORD*)(v3 + 140) = game_HashString32();
      *(_QWORD*)(v3 + 64) = 0;
      *(_QWORD*)(v3 + 72) = 24;
      *(_QWORD*)(v3 + 80) = 1;
      *(_QWORD*)(v3 + 8) = &GameData_216de68;
      *(_QWORD*)(v3 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3) & 1) != 0 &&
          (*(_WORD*)(v3 + 136) & 0x100) == 0) {
        *(_WORD*)(v3 + 136) |= 0x100u;
      }
      v5 = *(_BYTE**)(v3 + 32);
      v6 = v5[138];
      if (v6 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v5 + 64LL))(*(_QWORD*)(v3 + 32));
        v6 = v5[138];
      }
      v5[138] = v6 + 1;
      *(_WORD*)(v3 + 136) |= 2u;
    }
    return game_VariableManager_SetFlag(a1 + 192, 1);
  }
  return result;
}

__int64 ProcDefenseDagsionSeq_1521ce0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  char v5;

  v1 = result;
  if ((game_GameModeData_instance_ == 0 ||
       (result = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), result + 208)) == 0 ||
       *(_DWORD*)(result + 32) == 0) &&
      *(_DWORD*)(GameData_22416c0 + 48) == 1) {
    if (GameData_21ec7b8 == 0) {
      v2 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v2, "MID_DefenseBattle_e10", 0);
      v3 = *(_QWORD*)(v1 + 40);
      if (v3 != 0) {
        *(_QWORD*)(v3 + 48) = v2;
        *(_QWORD*)(v2 + 56) = *(_QWORD*)(v1 + 40);
      }
      *(_QWORD*)(v1 + 40) = v2;
      *(_QWORD*)(v2 + 24) = "talk::Seq";
      *(_QWORD*)(v2 + 32) = v1;
      *(_DWORD*)(v2 + 140) = game_HashString32();
      *(_QWORD*)(v2 + 64) = 0;
      *(_QWORD*)(v2 + 72) = 24;
      *(_QWORD*)(v2 + 80) = 1;
      *(_QWORD*)(v2 + 8) = &GameData_216de68;
      *(_QWORD*)(v2 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2) & 1) != 0 &&
          (*(_WORD*)(v2 + 136) & 0x100) == 0) {
        *(_WORD*)(v2 + 136) |= 0x100u;
      }
      v4 = *(_BYTE**)(v2 + 32);
      v5 = v4[138];
      if (v5 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v4 + 64LL))(*(_QWORD*)(v2 + 32));
        v5 = v4[138];
      }
      v4[138] = v5 + 1;
      *(_WORD*)(v2 + 136) |= 2u;
    }
    return game_VariableManager_SetFlag(v1 + 208, 1);
  }
  return result;
}

__int64 ProcDefenseDagsionSeq_1521e50(__int64 result)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;

  if (*(_DWORD*)(*GameData_2130e70 + 48) == 0 && *GameData_212d460[0] == 0) {
    v2 = result;
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v3, "MID_DefenseBattle_e11", 0);
    v5 = *(_QWORD*)(v2 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(v2 + 40);
    }
    *(_QWORD*)(v2 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "talk::Seq";
    *(_QWORD*)(v3 + 32) = v2;
    *(_DWORD*)(v3 + 140) = game_HashString32_alt1("talk::Seq", v4);
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v3 + 8) = GameData_2130228;
    *(_QWORD*)(v3 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3);
    if ((result & 1) != 0 && (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v3 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v3 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v3 + 136) |= 2u;
  }
  return result;
}

__int64 ProcDefenseDagsionSeq_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)a1 = game_gmap_ProcDefenseDagsionSeq_vtable;
  if (v1 != 0) {
    *(_QWORD*)(a1 + 168) = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcDefenseDagsionSeq_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)a1 = game_gmap_ProcDefenseDagsionSeq_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 168) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

#pragma GCC visibility pop
