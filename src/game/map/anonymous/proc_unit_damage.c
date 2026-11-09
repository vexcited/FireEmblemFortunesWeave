#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64dfe0(void);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN* GameData_21d21d0;
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitAction_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitDamage_vtable[])();
extern __int64 GameData_21cd100;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_map_Action_targets_;
extern __int64 game_script_unit_g_damage_sequence;
__int64 ProcUnitDamage_Destructor(__int64 a1);

__int64 ProcUnitDamage_Destructor(__int64 a1)
{
  unsigned __int8* v2;
  _UNKNOWN** v3;
  unsigned int v4;
  unsigned int v5;
  bool v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;

  *(_QWORD*)a1 = game_map_anonymous_ProcUnitDamage_vtable;
  if (GameData_21d21d0 != nullptr) {
    v2 = (unsigned __int8*)GameData_21d21d0;
    v3 = &GameData_21d21d0;
    v4 = *(unsigned __int8*)(*(_QWORD*)(a1 + 152) + 2088LL);
    do {
      v5 = v2[25];
      v6 = v5 >= v4;
      if (v5 >= v4) {
        v7 = 0;
      }
      else {
        v7 = 8;
      }
      if (v6) {
        v3 = (_UNKNOWN**)v2;
      }
      v2 = *(unsigned __int8**)&v2[v7];
    } while (v2 != nullptr);
    if (v3 != &GameData_21d21d0 && v4 >= *((unsigned __int8*)v3 + 25)) {
      v8 = v3[1];
      if (v8 != nullptr) {
        do {
          v9 = v8;
          v8 = (_QWORD*)*v8;
        } while (v8 != nullptr);
      }
      else {
        v10 = v3;
        do {
          v9 = (_QWORD*)v10[2];
          v11 = v10 == (_QWORD*)*v9;
          v10 = v9;
        } while (!v11);
      }
      if ((_UNKNOWN**)game_map_Action_targets_ == v3) {
        game_map_Action_targets_ = (__int64)v9;
      }
      --game_script_unit_g_damage_sequence;
      GameRoutine_64dfe0();
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 168) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 184);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
    }
  }
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitAction_vtable;
  v15 = GameData_21cd100;
  v16 = *(_DWORD*)(GameData_21cd100 + 16) - 1;
  *(_DWORD*)(GameData_21cd100 + 16) = v16;
  if (v16 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v15 + 8) + 8LL))(v15 + 8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
