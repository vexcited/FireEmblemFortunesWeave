#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_18c51a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_6cb490(_QWORD);
__int64 GameRoutine_961420(_QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitAction_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitBlazeOn_vtable[])();
extern __int64 GameData_21cd100;
extern __int64 GameData_21d1e38;
extern __int64 GameData_21ed098;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d258[2];
struct PseudoSret GameRoutine_81d430(_QWORD);
__int64 ProcUnitBlazeOn_Destructor_770db0(__int64 a1);
__int64 ProcUnitBlazeOn_DeletingDestructor_770eb0(__int64 a1);
void ProcUnitBlazeOn_Unknown20();
__int64 ProcUnitBlazeOn_Unknown24(_QWORD* a1);
__int64 ProcUnitBlazeOn_7714d0(_QWORD* a1);
__int64 ProcUnitBlazeOn_Unknown26(__int64 a1);
__int64 ProcUnitBlazeOn_Unknown27(__int64 a1);

__int64 ProcUnitBlazeOn_Destructor_770db0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;

  *(_QWORD*)a1 = game_map_anonymous_ProcUnitBlazeOn_vtable;
  *(_QWORD*)(a1 + 160) = game_map_BattleInfo_vtable;
  *(_QWORD*)(a1 + 11456) = game_map_BattleArea_vtable;
  v2 = *(_QWORD*)(a1 + 11464);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    *(_QWORD*)(a1 + 11464) = 0;
  }
  *(_QWORD*)(a1 + 168) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 2456);
  BattleSide_Destructor(a1 + 1696);
  BattleSide_Destructor(a1 + 936);
  BattleSide_Destructor(a1 + 176);
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitAction_vtable;
  v3 = GameData_21cd100;
  v4 = *(_DWORD*)(GameData_21cd100 + 16) - 1;
  *(_DWORD*)(GameData_21cd100 + 16) = v4;
  if (v4 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v3 + 8) + 8LL))(v3 + 8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcUnitBlazeOn_DeletingDestructor_770eb0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;

  *(_QWORD*)a1 = game_map_anonymous_ProcUnitBlazeOn_vtable;
  *(_QWORD*)(a1 + 160) = game_map_BattleInfo_vtable;
  *(_QWORD*)(a1 + 11456) = game_map_BattleArea_vtable;
  v2 = *(_QWORD*)(a1 + 11464);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    *(_QWORD*)(a1 + 11464) = 0;
  }
  *(_QWORD*)(a1 + 168) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 2456);
  BattleSide_Destructor(a1 + 1696);
  BattleSide_Destructor(a1 + 936);
  BattleSide_Destructor(a1 + 176);
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitAction_vtable;
  v3 = GameData_21cd100;
  v4 = *(_DWORD*)(GameData_21cd100 + 16) - 1;
  *(_DWORD*)(GameData_21cd100 + 16) = v4;
  if (v4 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v3 + 8) + 8LL))(v3 + 8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

void ProcUnitBlazeOn_Unknown20()
{
  __int64 v0;

  v0 = GameData_21d1e38;
  if (GameData_21d1e38 != 0) {
    *(_QWORD*)(GameData_21d1e38 + 152) = 0;
    *(_BYTE*)(v0 + 289) = 1;
  }
}

__int64 ProcUnitBlazeOn_Unknown24(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[2];

  result = (*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1);
  if (result != 0) {
    v3 = a1[19];
    v6[0] = result;
    result = GameRoutine_961420(a1, v6, v3);
  }
  v4 = a1[19];
  if (v4 != 0) {
    v5 = GameData_21ed098;
    if (GameData_21ed098 != 0) {
      *(struct PseudoSret*)(v6) = GameRoutine_81d430(v4);
      return GameRoutine_18c51a0(v5, v6, v4, 0);
    }
  }
  return result;
}

__int64 ProcUnitBlazeOn_7714d0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 152LL))(a1);
  if (result != 0) {
    v3 = a1[19];
    v4 = result;
    return GameRoutine_961420(a1, &v4, v3);
  }
  return result;
}

__int64 ProcUnitBlazeOn_Unknown26(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = GameRoutine_6cb490(*(_QWORD*)(a1 + 152));
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v4 = 2)
           : (v4 = 3),
       (v4 & v3) != 0)) {
    v5 = *(float*)(a1 + 144);
    *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
    if (v5 < 15.0) {
      v5 = 15.0;
    }
    *(float*)(a1 + 144) = v5;
  }
  if (GameData_22400f8 != 0) {
    v6 = *(_QWORD*)(a1 + 152);
    if (v6 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      v7 = *(_QWORD*)(v6 + 440);
      if (v7 != 0 && *(unsigned __int8*)(v7 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v8 = *(unsigned __int8*)(v6 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v8) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v8) |= 2u;
        }
      }
    }
  }
  return result;
}

__int64 ProcUnitBlazeOn_Unknown27(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;

  v2 = GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    result = game_UnitPool_Get(*GameData_212cfd0[0] + 8);
  }
  else {
    result = 0;
  }
  if (result == *(_QWORD*)(a1 + 152)) {
    *(_QWORD*)(*v2 + 12672) |= 0x2000000000000uLL;
  }
  v4 = GameData_21d1e38;
  if (GameData_21d1e38 != 0) {
    *(_QWORD*)(GameData_21d1e38 + 152) = 0;
    *(_BYTE*)(v4 + 289) = 1;
  }
  return result;
}

#pragma GCC visibility pop
