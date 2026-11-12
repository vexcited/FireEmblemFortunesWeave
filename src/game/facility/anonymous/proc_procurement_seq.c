#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_195a5c0(void);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_20023f0[])();
extern __int64 (*GameData_2002510[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_anonymous_ProcProcurementSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcProcurementSeq_DeletingDestructor_10217e0(__int64 a1);
__n128 ProcProcurementSeq_Unknown2_alt1(__int64 a1) __asm__(
    "ProcProcurementSeq_Unknown2");
__int64 GameRoutine_195a5c0_alt1(_QWORD) __asm__("GameRoutine_195a5c0");
__int64 ProcProcurementSeq_Destructor(__int64 a1);
__n128 ProcProcurementSeq_DeletingDestructor_1021a00_alt1(__int64 a1) __asm__(
    "ProcProcurementSeq_DeletingDestructor_1021a00");
__int64 GameHr_195a5c0();
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
extern __int64 (*ProcProcurementSeq_Destructor_ptr[])();
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcProcurementSeq_Unknown2(__int64 a1);
void ProcProcurementSeq_DeletingDestructor_1021a00(__int64 a1);

__int64 ProcProcurementSeq_DeletingDestructor_10217e0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  *(_QWORD*)a1 = game_facility_anonymous_ProcProcurementSeq_vtable;
  *(_QWORD*)(a1 + 16) = GameData_20023f0;
  v2 = (_QWORD*)(a1 + 16);
  GameRoutine_195a5c0();
  v3 = *(_QWORD**)(a1 + 208);
  *v2 = GameData_2002510;
  if (v3 == (_QWORD*)(a1 + 176)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  *(_QWORD*)(a1 + 16) = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 152) & 0x100) != 0) {
    *(_WORD*)(a1 + 152) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 + 104);
}

void ProcProcurementSeq_Unknown2(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_facility_anonymous_ProcProcurementSeq_vtable;
  *(_QWORD*)(a1 + 16) = ProcProcurementSeq_Destructor_ptr;
  v2 = (_QWORD*)(a1 + 16);
  GameHr_195a5c0();
  v3 = *(_QWORD**)(a1 + 208);
  *v2 = GameData_2002510;
  if (v3 == (_QWORD*)(a1 + 176)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  *(_QWORD*)(a1 + 16) = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 152) & 0x100) != 0) {
    *(_WORD*)(a1 + 152) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1((__int64)v2);
  GameRoutine_658c00_alt1((__int64*)(a1 + 104));
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

__int64 ProcProcurementSeq_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;

  *(_QWORD*)(a1 - 16) = game_facility_anonymous_ProcProcurementSeq_vtable;
  *(_QWORD*)a1 = GameData_20023f0;
  GameRoutine_195a5c0_alt1(a1 - 16);
  v2 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2002510;
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
  return GameRoutine_658c00(a1 + 88);
}

void ProcProcurementSeq_DeletingDestructor_1021a00(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)(a1 - 16) = game_facility_anonymous_ProcProcurementSeq_vtable;
  v2 = a1 - 16;
  *(_QWORD*)a1 = ProcProcurementSeq_Destructor_ptr;
  GameHr_195a5c0();
  v3 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2002510;
  if (v3 == (_QWORD*)(a1 + 160)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v2);
}

#pragma GCC visibility pop
