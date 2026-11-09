#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11ef240(_QWORD);
__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_1567280(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_743a00(_QWORD);
__int64 MapInfo_825790(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _DWORD* GameData_2130680;
extern __int64 (*game_map_anonymous_ProcMapSeqAI_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d290;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21d9180;
extern __int64 GameData_21ec7b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_gameui_Footer_instance_;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cfd8[7];
extern __int64* GameData_212cff8[3];
extern __int64* GameData_2130678;
__int64 ProcMapSeqAI_Destructor(__int64 a1);
__int64 ProcMapSeqAI_Unknown3(__int64 result);

__int64 ProcMapSeqAI_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqAI_vtable;
  if (*(_BYTE*)(a1 + 220) == 1) {
    if (game_gameui_Footer_instance_ != 0) {
      GameRoutine_1567000(game_gameui_Footer_instance_, 0);
    }
    *(_BYTE*)(a1 + 220) = 0;
  }
  v2 = (_QWORD*)GameData_212d290;
  v3 = *(_QWORD**)GameData_212d290;
  v4 = fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)GameData_212d290 != 0) {
    v5 = v3[2];
    v3[2] = 0;
    if (v5 != 0) {
      GameRoutine_11ef240(v5);
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, v5);
    }
    v7 = v3[1];
    v3[1] = 0;
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
    }
    *v3 = GameData_2130678 + 2;
    if ((_QWORD*)*v2 == v3) {
      *v2 = 0;
      *GameData_2130680 = 0;
    }
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v3);
  }
  *v2 = 0;
  v10 = *GameData_212ce90[0];
  v11 = *(_DWORD*)(*GameData_212ce90[0] + 20);
  if ((v11 & 0x20000000) != 0) {
    *(_BYTE*)(v10 + 25) = 0;
  }
  *(_DWORD*)(v10 + 20) = v11 & 0x9FFFFFFF;
  GameRoutine_743a00(*GameData_212cfd0[0]);
  v12 = *GameData_212cfd8[0];
  *(_DWORD*)(v12 + 168) = 1;
  *(_DWORD*)(v12 + 196) = 0;
  *(_BYTE*)(v12 + 200) = 0;
  *(_DWORD*)(v12 + 160) = 0;
  *(_BYTE*)(v12 + 164) = 9;
  v13 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v15 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v14 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v17 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v16 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v18 = v16 == v17;
    v19 = v14 - 1 + v15;
    v20 = v19 >> 7;
    v21 = v19 & 0x7F;
    v22 = 16 * (v16 - v17) - 1;
    v23 = *(_QWORD*)(v17 + 8 * v20);
    if (v18) {
      v22 = 0;
    }
    v24 = v23 + 32 * v21;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v24 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v13[21] = *(_QWORD*)(v24 + 24);
    v25 = *(_QWORD*)(v24 + 16);
    v13[27] = v14 - 1;
    v13[20] = v25;
    if ((unsigned __int64)(v22 - (v14 + v15) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v26 = *(_QWORD*)(v16 - 8);
      if (v26 != 0) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v27, v26);
        v16 = v13[24];
      }
      v13[24] = v16 - 8;
    }
  }
  if (*GameData_212cff8[0] != 0) {
    MapInfo_825790();
  }
  v28 = *(_QWORD*)(a1 + 192);
  if (v28 != 0) {
    v29 = *(_QWORD*)v4;
    *(_QWORD*)(a1 + 200) = v28;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(v29 + v30, v28);
  }
  v31 = *(_QWORD*)(a1 + 152);
  if (v31 != 0) {
    v32 = *(_QWORD*)v4;
    *(_QWORD*)(a1 + 160) = v31;
    v33 = 128;
    if (*(_QWORD*)(v32 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(v32 + v33, v31);
  }
  GameData_21d9180 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqAI_Unknown3(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;

  v1 = GameData_21ca2f8;
  v2 = *(_DWORD*)(GameData_21ca2f8 + 20);
  if ((v2 & 0x40000000) == 0) {
    goto LABEL_2;
  }
  if ((v2 & 0x20000000) == 0 &&
      *(_BYTE*)(GameData_21ca2f8 + *(unsigned __int8*)(GameData_21ca2f8 + 24) +
                16) == 1 &&
      (*(_BYTE*)(result + 176) & 1) == 0 && GameData_21ec7b8 == 0 &&
      (*(_BYTE*)(game_g_game_setting + 952) & 4) != 0) {
    v2 |= 0x20000000u;
    *(_DWORD*)(GameData_21ca2f8 + 20) = v2;
  }
  if (*(_BYTE*)(v1 + *(unsigned __int8*)(v1 + 24) + 16) != 1 ||
      (*(_BYTE*)(result + 176) & 1) != 0 || (v2 & 0x20000000) != 0 ||
      GameData_21ec7b8 != 0) {
  LABEL_2:
    if (*(_BYTE*)(result + 220) == 1) {
      if (game_gameui_Footer_instance_ != 0) {
        v3 = result;
        GameRoutine_1567000(game_gameui_Footer_instance_, 0);
        result = v3;
      }
      *(_BYTE*)(result + 220) = 0;
    }
  }
  else if ((*(_BYTE*)(result + 220) & 1) == 0) {
    v4 = result;
    GameRoutine_1566440(result + 152, 0);
    result = GameRoutine_1567280(v4 + 152, "Wait");
    *(_BYTE*)(v4 + 220) = 1;
  }
  return result;
}

#pragma GCC visibility pop
