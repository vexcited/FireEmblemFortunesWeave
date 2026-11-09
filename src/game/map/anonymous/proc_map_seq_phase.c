#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_849e70(__int64 result);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqPhase_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d238[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
__int64 ProcMapSeqPhase_Destructor(__int64 a1);
__int64 ProcMapSeqPhase_DeletingDestructor(__int64 a1);

__int64 ProcMapSeqPhase_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqPhase_vtable;
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v3 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v7 = v5 == v6;
    v8 = v3 - 1 + v4;
    v9 = v8 >> 7;
    v10 = v8 & 0x7F;
    v11 = 16 * (v5 - v6) - 1;
    v12 = *(_QWORD*)(v6 + 8 * v9);
    if (v7) {
      v11 = 0;
    }
    v13 = v12 + 32 * v10;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v13 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v13 + 24);
    v14 = *(_QWORD*)(v13 + 16);
    v2[27] = v3 - 1;
    v2[20] = v14;
    if ((unsigned __int64)(v11 - (v3 + v4) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v15 = *(_QWORD*)(v5 - 8);
      if (v15 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
        v5 = v2[24];
      }
      v2[24] = v5 - 8;
    }
  }
  *(_QWORD*)(a1 + 184) = game_map_BattleInfo_vtable;
  v17 = *(_QWORD*)(a1 + 11488);
  *(_QWORD*)(a1 + 11480) = game_map_BattleArea_vtable;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    *(_QWORD*)(a1 + 11488) = 0;
  }
  *(_QWORD*)(a1 + 192) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 2480);
  BattleSide_Destructor(a1 + 1720);
  BattleSide_Destructor(a1 + 960);
  BattleSide_Destructor(a1 + 200);
  v18 = *(_QWORD*)(a1 + 152);
  if (v18 != 0) {
    v19 = *(_QWORD*)(a1 + 160);
    if (v18 == v19) {
      goto LABEL_16;
    }
    do {
      v19 -= 176;
      GameRoutine_849e70(v19);
    } while (v19 != v18);
    v20 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v18;
    v18 = v20;
    if (v20 != 0) {
    LABEL_16:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v18);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqPhase_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqPhase_vtable;
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  v3 = fw_memory_g_heap_manager_ptr;
  if (game_ProcGameSkipView_instance_ != 0) {
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v8 = v6 == v7;
    v9 = v4 - 1 + v5;
    v10 = v9 >> 7;
    v11 = v9 & 0x7F;
    v12 = 16 * (v6 - v7) - 1;
    v13 = *(_QWORD*)(v7 + 8 * v10);
    if (v8) {
      v12 = 0;
    }
    v14 = v13 + 32 * v11;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v14 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v14 + 24);
    v15 = *(_QWORD*)(v14 + 16);
    v2[27] = v4 - 1;
    v2[20] = v15;
    if ((unsigned __int64)(v12 - (v4 + v5) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v16 = *(_QWORD*)(v6 - 8);
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17, v16);
        v6 = v2[24];
      }
      v2[24] = v6 - 8;
    }
  }
  *(_QWORD*)(a1 + 184) = GameData_212d238[0] + 16;
  v18 = *(_QWORD*)(a1 + 11488);
  *(_QWORD*)(a1 + 11480) = GameData_212da50[0] + 2;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    *(_QWORD*)(a1 + 11488) = 0;
  }
  *(_QWORD*)(a1 + 192) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 2480);
  BattleSide_Destructor(a1 + 1720);
  BattleSide_Destructor(a1 + 960);
  BattleSide_Destructor(a1 + 200);
  v19 = *(_QWORD*)(a1 + 152);
  if (v19 != 0) {
    v20 = *(_QWORD*)(a1 + 160);
    if (v19 == v20) {
      goto LABEL_16;
    }
    do {
      v20 -= 176;
      GameRoutine_849e70(v20);
    } while (v20 != v19);
    v21 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 160) = v19;
    v19 = v21;
    if (v21 != 0) {
    LABEL_16:
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v22, v19);
    }
  }
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v23 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v23 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23, a1);
}

#pragma GCC visibility pop
