#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_CombatPredictionBase_vtable[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqTarget_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 (*game_map_BattleSides_vtable[])();
extern __int64 GameData_221b2e0;
extern __int64 GameData_221b2e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212da50[3];
__int64 ProcCmdBtlSeqTarget_Destructor_alt1(__int64 a1) __asm__(
    "ProcCmdBtlSeqTarget_Destructor");
extern __int64 game_script_hub_g_frame_counter_ptr[3];
double ProcCmdBtlSeqTarget_Unknown3(__int64 a1);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
void BattleSide_Destructor_alt1(_QWORD*) __asm__("BattleSide_Destructor");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcCmdBtlSeqTarget_Destructor(__int64 a1);

void ProcCmdBtlSeqTarget_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
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
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqTarget_vtable;
  ui_LayoutAccessor_SetPaneVisible_alt1(GameData_221b2e8 + 24,
                                        (__int64)"N_Link_Gauge", 0);
  v2 = *(_QWORD*)(a1 + 23016);
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 23024) = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v2);
  }
  v6 = *(_QWORD*)(a1 + 22960);
  *(_QWORD*)(a1 + 22904) = game_CombatPredictionBase_vtable;
  if (v6 != 0) {
    v7 = *v3;
    *(_QWORD*)(a1 + 22968) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  v9 = *(_QWORD*)(a1 + 22936);
  if (v9 != 0) {
    v10 = *v3;
    *(_QWORD*)(a1 + 22944) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v10 + v11, v9);
  }
  v12 = *(_QWORD*)(a1 + 22912);
  if (v12 != 0) {
    v13 = *v3;
    *(_QWORD*)(a1 + 22920) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v13 + v14, v12);
  }
  v15 = *(_QWORD*)(a1 + 22848);
  *(_QWORD*)(a1 + 22792) = game_CombatPredictionBase_vtable;
  if (v15 != 0) {
    v16 = *v3;
    *(_QWORD*)(a1 + 22856) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v16 + v17, v15);
  }
  v18 = *(_QWORD*)(a1 + 22824);
  if (v18 != 0) {
    v19 = *v3;
    *(_QWORD*)(a1 + 22832) = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v19 + v20, v18);
  }
  v21 = *(_QWORD*)(a1 + 22800);
  if (v21 != 0) {
    v22 = *v3;
    *(_QWORD*)(a1 + 22808) = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v22 + v23, v21);
  }
  *(_QWORD*)(a1 + 11464) = game_map_BattleInfo_vtable;
  v24 = *(_QWORD*)(a1 + 22768);
  v25 = GameData_212da50[0] + 2;
  *(_QWORD*)(a1 + 22760) = GameData_212da50[0] + 2;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    *(_QWORD*)(a1 + 22768) = 0;
  }
  *(_QWORD*)(a1 + 11472) = game_map_BattleSides_vtable;
  BattleSide_Destructor_alt1((_QWORD*)(a1 + 13760));
  BattleSide_Destructor_alt1((_QWORD*)(a1 + 13000));
  BattleSide_Destructor_alt1((_QWORD*)(a1 + 12240));
  BattleSide_Destructor_alt1((_QWORD*)(a1 + 11480));
  v26 = *(_QWORD*)(a1 + 11456);
  *(_QWORD*)(a1 + 152) = game_map_BattleInfo_vtable;
  *(_QWORD*)(a1 + 11448) = v25;
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
    *(_QWORD*)(a1 + 11456) = 0;
  }
  *(_QWORD*)(a1 + 160) = game_map_BattleSides_vtable;
  BattleSide_Destructor_alt1((_QWORD*)(a1 + 2448));
  BattleSide_Destructor_alt1((_QWORD*)(a1 + 1688));
  BattleSide_Destructor_alt1((_QWORD*)(a1 + 928));
  BattleSide_Destructor_alt1((_QWORD*)(a1 + 168));
  GameData_221b2e0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

double ProcCmdBtlSeqTarget_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  _DWORD* v1;
  double result;
  float v3;

  v1 = (_DWORD*)(a1 + 23044);
  LODWORD(result) = *(_DWORD*)(a1 + 23044);
  v3 =
      fabsf((float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              160LL) *
                    0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f);
  if (*(float*)&result <= 0x0.0p+0f) {
    if (*(float*)&result >= 0x0.0p+0f) {
      goto LABEL_3;
    }
    *(float*)&result = *(float*)&result + v3;
    if (*(float*)&result <= 0x0.0p+0f) {
      goto LABEL_3;
    }
  }
  else {
    *(float*)&result = *(float*)&result - v3;
    if (*(float*)&result >= 0x0.0p+0f) {
    LABEL_3:
      *v1 = LODWORD(result);
      return result;
    }
  }
  *v1 = 0;
  return 0x0.0p+0;
}

#pragma GCC visibility pop
