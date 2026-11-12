#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_145d8a0(__int64*);
__n128 FacilityUnitList_145d420(__int64, __int64);
extern __int64 (*GameData_203fab0[])();
extern __int64 game_UnitListSet_instance_;
void FacilityUnitList_145e2c0(__int64**, __int64, char);
__int64 ProcClassExaminerSeq_Unknown18();
__int64 ProcClassExaminerSeq_Destructor();
__int64 GameRoutine_195a5c0();
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_facility_ReleaseGroups();
extern __int64 (*GameData_203cb48[])();
extern __int64 (*ProcClassExaminerSeq_Destructor_ptr)();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_anonymous_ProcClassExaminerSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_658c00(__int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ProcClassExaminerSeq_Destructor_1435990(__int64 a1);

void ProcClassExaminerSeq_Destructor_1435990(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  *(_QWORD*)a1 = game_facility_anonymous_ProcClassExaminerSeq_vtable;
  *(_QWORD*)(a1 + 208) = &ProcClassExaminerSeq_Destructor_ptr;
  game_facility_ReleaseGroups();
  GameRoutine_195a5c0();
  v2 = *(_QWORD*)(a1 + 248);
  if (v2 != 0) {
    *(_QWORD*)(a1 + 256) = v2;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v2);
  }
  if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 232);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  v6 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_203cb48;
  if (v6 == (_QWORD*)(a1 + 160)) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_15;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_15:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
}

__int64 ProcClassExaminerSeq_Unknown18()
{
  __int64 v0;
  __int64** v1;
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
    char gap40_[8];
    __int64 v6;
  } v4_;

  LOBYTE(v4_.v4[0]) = 0;
  v0 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v4_.v6 = 0;
  FacilityUnitList_145d420(v0, (__int64)v4_.v4);
  v1 = *(__int64***)(game_UnitListSet_instance_ + 24);
  v4_.v5 = v4_.v4;
  v4_.v4[0] = GameData_203fab0;
  FacilityUnitList_145e2c0(v1, (__int64)v4_.v4, 0);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  return GameRoutine_145d8a0(*(__int64**)(game_UnitListSet_instance_ + 24));
}

__int64 ProcClassExaminerSeq_Destructor()
{
  __int64 v0;
  __int64** v1;
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
    char gap40_[8];
    __int64 v6;
  } v4_;

  LOBYTE(v4_.v4[0]) = 0;
  v0 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v4_.v6 = 0;
  FacilityUnitList_145d420(v0, (__int64)v4_.v4);
  v1 = *(__int64***)(game_UnitListSet_instance_ + 24);
  v4_.v5 = v4_.v4;
  v4_.v4[0] = GameData_203fab0;
  FacilityUnitList_145e2c0(v1, (__int64)v4_.v4, 0);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_5;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  return GameRoutine_145d8a0(*(__int64**)(game_UnitListSet_instance_ + 24));
}

#pragma GCC visibility pop
