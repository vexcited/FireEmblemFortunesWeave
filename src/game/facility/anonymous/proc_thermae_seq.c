#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_195a5c0();
__int64 game_ProcInst_Unregister(__int64 result);
__n128 GameRoutine_658c00(_QWORD*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_20391b0)();
extern __int64 (*GameData_2039240[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_anonymous_ProcThermaeSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ProcThermaeSeq_Destructor(__int64 a1);
__n128 ProcThermaeSeq_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcThermaeSeq_DeletingDestructor");
extern __int64 (*GameData_203f8b0[])();
extern __int64 game_UnitListSet_instance_;
void FacilityUnitList_145d160(__int64, __int64);
__int64 ProcThermaeSeq_Unknown18();
__int64 ProcThermaeSeq_Destructor_1409ac0();
__int64 GameHr_195a5c0();
extern __int64 (*ProcThermaeSeq_Destructor_1409ac0_ptr)();
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcThermaeSeq_DeletingDestructor(__int64 a1);

__n128 ProcThermaeSeq_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;

  *(_QWORD*)a1 = game_facility_anonymous_ProcThermaeSeq_vtable;
  *(_QWORD*)(a1 + 208) = &GameData_20391b0;
  GameRoutine_195a5c0();
  v2 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2039240;
  if (v2 == (_QWORD*)(a1 + 160)) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);
LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

void ProcThermaeSeq_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_facility_anonymous_ProcThermaeSeq_vtable;
  *(_QWORD*)(a1 + 208) = &ProcThermaeSeq_Destructor_1409ac0_ptr;
  GameHr_195a5c0();
  v2 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2039240;
  if (v2 == (_QWORD*)(a1 + 160)) {
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v2 + v3))((__int64)v2);
LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 ProcThermaeSeq_Unknown18()
{
  __int64 v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  char v8[16];
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  v0 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v6_.v7 = v6_.v6;
  v6_.v6[0] = GameData_203f8b0;
  v9_.v9[0] = GameData_203f8b0;
  v9_.v10 = v9_.v9;
  v8[0] = 1;
  FacilityUnitList_145d160(v0, (__int64)v8);
  v1 = v9_.v10;
  v9_.v10 = nullptr;
  if (v1 == v9_.v9) {
    v2 = 32;
  }
  else {
    if (v1 == nullptr) {
      goto LABEL_10;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v1 + v2))((__int64)v1);
  if (v9_.v10 == v9_.v9) {
    v3 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_10;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v3))((__int64)v9_.v10);
LABEL_10:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

__int64 ProcThermaeSeq_Destructor_1409ac0()
{
  __int64 v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  char v8[16];
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  v0 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v6_.v7 = v6_.v6;
  v6_.v6[0] = GameData_203f8b0;
  v9_.v9[0] = GameData_203f8b0;
  v9_.v10 = v9_.v9;
  v8[0] = 1;
  FacilityUnitList_145d160(v0, (__int64)v8);
  v1 = v9_.v10;
  v9_.v10 = nullptr;
  if (v1 == v9_.v9) {
    v2 = 32;
  }
  else {
    if (v1 == nullptr) {
      goto LABEL_10;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v1 + v2))((__int64)v1);
  if (v9_.v10 == v9_.v9) {
    v3 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_10;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v3))((__int64)v9_.v10);
LABEL_10:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

#pragma GCC visibility pop
