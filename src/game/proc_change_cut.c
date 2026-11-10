#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7a96a0(float);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*game_ProcChangeCut_vtable[])();
extern __int64 (*game_ProcInst_vtable[])();
__int64 ProcChangeCut_Destructor(__int64 a1);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ProcChangeCut_DeletingDestructor(__int64 a1);

__int64 ProcChangeCut_Destructor(__int64 a1)
{
  float v1;
  _QWORD* v3;
  __int64 v4;

  v1 = *(float*)(a1 + 160);
  *(_QWORD*)a1 = game_ProcChangeCut_vtable;
  if (v1 > 0.0f) {
    GameRoutine_7a96a0(1.0f);
  }
  v3 = *(_QWORD**)(a1 + 208);
  if (v3 == (_QWORD*)(a1 + 176)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);

LABEL_8:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__n128 ProcChangeCut_DeletingDestructor(__int64 a1)
{
  float v1;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v1 = *(float*)(a1 + 160);
  *(_QWORD*)a1 = game_ProcChangeCut_vtable;
  if (v1 > 0.0f) {
    GameRoutine_7a96a0(1.0f);
  }
  v3 = *(_QWORD**)(a1 + 208);
  if (v3 == (_QWORD*)(a1 + 176)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_8:
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

#pragma GCC visibility pop
