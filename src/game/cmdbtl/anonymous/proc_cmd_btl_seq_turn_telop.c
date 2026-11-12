#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqTurnTelop_vtable[])();
extern __int64 GameData_222a058;
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcCmdBtlSeqTurnTelop_Destructor(__int64 a1);
__int64 ProcCmdBtlSeqTurnTelop_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcCmdBtlSeqTurnTelop_DeletingDestructor");
__int64 GameRoutine_137c970(__int64);
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
void ProcCmdBtlSeqTurnTelop_fac3a0(__int64 a1);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcCmdBtlSeqTurnTelop_DeletingDestructor(__int64 a1);

void ProcCmdBtlSeqTurnTelop_fac3a0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v3 = 2)
           : (v3 = 3),
       (v3 & v2) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_14;
    }
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_14:
      GameRoutine_137c970(a1);
    }
  }
}

__int64 ProcCmdBtlSeqTurnTelop_Destructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqTurnTelop_vtable;
  if (GameData_225ca88 != 0) {
    v2 = *(_QWORD*)(GameData_225ca88 + 1968);
    if (v2 != 0) {
      *(_BYTE*)(v2 + 411) = 0;
    }
  }
  GameData_222a058 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcCmdBtlSeqTurnTelop_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqTurnTelop_vtable;
  if (GameData_225ca88 != 0) {
    v2 = *(_QWORD*)(GameData_225ca88 + 1968);
    if (v2 != 0) {
      *(_BYTE*)(v2 + 411) = 0;
    }
  }
  GameData_222a058 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
