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
extern __int64 (*GameData_203a538)();
extern __int64 (*GameData_203a5d8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_anonymous_ProcHotelSeq_vtable[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_2243960;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
__int64 ProcHotelSeq_Destructor(__int64 a1);
__int64 ProcHotelSeq_DeletingDestructor(__int64 a1);

__int64 ProcHotelSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;

  *(_QWORD*)a1 = game_facility_anonymous_ProcHotelSeq_vtable;
  *(_QWORD*)(a1 + 208) = &GameData_203a538;
  v2 = a1 + 208;
  v3 = ui_Manager_instance_;
  v4 = *(_DWORD*)(ui_Manager_instance_ + 6148);
  v5 = __OFSUB__(v4--, 1);
  *(_DWORD*)(ui_Manager_instance_ + 6148) = v4;
  if ((v4 < 0) ^ v5 | (v4 == 0)) {
    if (*(_DWORD*)(v3 + 6144) == 0) {
      v6 = *(_QWORD*)(v3 + 5776);
      *(_DWORD*)(v3 + 6148) = 0;
      if (v6 != 0) {
        v7 = v2;
        if (*(_QWORD*)(v3 + 6024) != 0) {
          ArcResourceAccessor_Unknown4(v3 + 5784, GameRoutine_1369810, 0);
          ArcResourceAccessor_Unknown7(v3 + 5784,
                                       *game_g_frame_clock_ptr[0] + 568);
          ArcResourceAccessor_573800(v3 + 5784);
          v6 = *(_QWORD*)(v3 + 5776);
        }
        GameRoutine_634d80(*(_QWORD*)(v6 + 8));
        *(_QWORD*)(v3 + 5776) = 0;
        v2 = v7;
      }
    }
  }
  GameRoutine_195a5c0(v2);
  v8 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_203a5d8;
  if (v8 == (_QWORD*)(a1 + 160)) {
    v9 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_13;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
LABEL_13:
  GameData_2243960 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcHotelSeq_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = game_facility_anonymous_ProcHotelSeq_vtable;
  *(_QWORD*)(a1 + 208) = &GameData_203a538;
  v2 = a1 + 208;
  v3 = ui_Manager_instance_;
  v4 = *(_DWORD*)(ui_Manager_instance_ + 6148);
  v5 = __OFSUB__(v4--, 1);
  *(_DWORD*)(ui_Manager_instance_ + 6148) = v4;
  if ((v4 < 0) ^ v5 | (v4 == 0)) {
    if (*(_DWORD*)(v3 + 6144) == 0) {
      v6 = *(_QWORD*)(v3 + 5776);
      *(_DWORD*)(v3 + 6148) = 0;
      if (v6 != 0) {
        v7 = v2;
        if (*(_QWORD*)(v3 + 6024) != 0) {
          ArcResourceAccessor_Unknown4(v3 + 5784, GameRoutine_1369810, 0);
          ArcResourceAccessor_Unknown7(v3 + 5784,
                                       *game_g_frame_clock_ptr[0] + 568);
          ArcResourceAccessor_573800(v3 + 5784);
          v6 = *(_QWORD*)(v3 + 5776);
        }
        GameRoutine_634d80(*(_QWORD*)(v6 + 8));
        *(_QWORD*)(v3 + 5776) = 0;
        v2 = v7;
      }
    }
  }
  GameRoutine_195a5c0(v2);
  v8 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_203a5d8;
  if (v8 == (_QWORD*)(a1 + 160)) {
    v9 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_13;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
LABEL_13:
  GameData_2243960 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v10 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v10);
}

#pragma GCC visibility pop
