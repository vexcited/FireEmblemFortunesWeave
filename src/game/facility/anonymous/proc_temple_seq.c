#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ArcResourceAccessor_573800(_QWORD);
__int64 ArcResourceAccessor_Unknown4(_QWORD, _QWORD, _QWORD);
__int64 ArcResourceAccessor_Unknown7(_QWORD, _QWORD);
__int64 GameRoutine_1369810();
__int64 GameRoutine_195a5c0(_QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_203a720)();
extern __int64 (*GameData_203a7a0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_anonymous_ProcTempleSeq_vtable[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_2243f70;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
__int64 ProcTempleSeq_Destructor(__int64 a1);
__int64 ProcTempleSeq_DeletingDestructor(__int64 a1);

__int64 ProcTempleSeq_Destructor(__int64 a1)
{
  __int64 v2;
  int v3;
  bool v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  *(_QWORD*)a1 = game_facility_anonymous_ProcTempleSeq_vtable;
  *(_QWORD*)(a1 + 208) = &GameData_203a720;
  GameRoutine_195a5c0(a1 + 208);
  v2 = ui_Manager_instance_;
  v3 = *(_DWORD*)(ui_Manager_instance_ + 6524);
  v4 = __OFSUB__(v3--, 1);
  *(_DWORD*)(ui_Manager_instance_ + 6524) = v3;
  if ((v3 < 0) ^ v4 | (v3 == 0)) {
    if (*(_DWORD*)(v2 + 6520) == 0) {
      v5 = *(_QWORD*)(v2 + 6152);
      *(_DWORD*)(v2 + 6524) = 0;
      if (v5 != 0) {
        if (*(_QWORD*)(v2 + 6400) != 0) {
          ArcResourceAccessor_Unknown4(v2 + 6160, GameRoutine_1369810, 0);
          ArcResourceAccessor_Unknown7(v2 + 6160,
                                       *game_g_frame_clock_ptr[0] + 568);
          ArcResourceAccessor_573800(v2 + 6160);
          v5 = *(_QWORD*)(v2 + 6152);
        }
        GameRoutine_634d80(*(_QWORD*)(v5 + 8));
        *(_QWORD*)(v2 + 6152) = 0;
      }
    }
  }
  v6 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_203a7a0;
  if (v6 == (_QWORD*)(a1 + 160)) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_13;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_13:
  GameData_2243f70 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcTempleSeq_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  int v3;
  bool v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_facility_anonymous_ProcTempleSeq_vtable;
  *(_QWORD*)(a1 + 208) = &GameData_203a720;
  GameRoutine_195a5c0(a1 + 208);
  v2 = ui_Manager_instance_;
  v3 = *(_DWORD*)(ui_Manager_instance_ + 6524);
  v4 = __OFSUB__(v3--, 1);
  *(_DWORD*)(ui_Manager_instance_ + 6524) = v3;
  if ((v3 < 0) ^ v4 | (v3 == 0)) {
    if (*(_DWORD*)(v2 + 6520) == 0) {
      v5 = *(_QWORD*)(v2 + 6152);
      *(_DWORD*)(v2 + 6524) = 0;
      if (v5 != 0) {
        if (*(_QWORD*)(v2 + 6400) != 0) {
          ArcResourceAccessor_Unknown4(v2 + 6160, GameRoutine_1369810, 0);
          ArcResourceAccessor_Unknown7(v2 + 6160,
                                       *game_g_frame_clock_ptr[0] + 568);
          ArcResourceAccessor_573800(v2 + 6160);
          v5 = *(_QWORD*)(v2 + 6152);
        }
        GameRoutine_634d80(*(_QWORD*)(v5 + 8));
        *(_QWORD*)(v2 + 6152) = 0;
      }
    }
  }
  v6 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_203a7a0;
  if (v6 == (_QWORD*)(a1 + 160)) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_13;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_13:
  GameData_2243f70 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v8);
}

#pragma GCC visibility pop
