#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_ProcInst_Unregister(__int64 result);
extern __int64 (*GameData_211cfa8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_FacilitySeq_Unknown00_ptr)();
extern __int64 (*game_facility_anonymous_ProcIndividualSeq_vtable[])();
extern __int64* GameData_212dcd0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21f3ff4;
void GameRoutine_658c00(__int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ProcIndividualSeq_Destructor(__int64 a1);

void ProcIndividualSeq_Destructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;

  *(_QWORD*)a1 = game_facility_anonymous_ProcIndividualSeq_vtable;
  *(_QWORD*)(a1 + 208) = &game_facility_FacilitySeq_Unknown00_ptr;
  v2 = GameData_212dcd0;
  v3 = *GameData_212dcd0;
  if (*GameData_212dcd0 != 0 && GameData_21f3ff4-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
    if (*v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2);
    }
    *v2 = 0;
  }
  v5 = *(_QWORD*)(a1 + 216);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 224);
    v7 = fw_memory_g_heap_manager_ptr;
    if (v5 == v6) {
      goto LABEL_17;
    }
    do {
      v8 = *(_QWORD*)(v6 - 40);
      if (v8 != 0) {
        *(_QWORD*)(v6 - 32) = v8;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9, v8);
      }
      v6 -= 72;
    } while (v6 != v5);
    v10 = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(a1 + 224) = v5;
    v5 = v10;
    if (v10 != 0) {
    LABEL_17:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v11, v5);
    }
  }
  v12 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_211cfa8;
  if (v12 == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_25;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
LABEL_25:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
}

#pragma GCC visibility pop
