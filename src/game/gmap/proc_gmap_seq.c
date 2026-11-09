#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7c51c0(_QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_886c80(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _DWORD GameData_21d925c[32];
extern _DWORD* GameData_212d168;
extern __int64 (*GameData_1fa6ed0[])();
extern __int64 (*GameData_1fa6fb0[])();
extern __int64 (*game_gmap_ProcGmapSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21eea40;
extern __int64 GameData_21f1618;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d6d0;
extern int GameData_21d92dc;
__int64 ProcGmapSeq_Destructor(__int64 a1);

__int64 ProcGmapSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v10;

  *(_QWORD*)a1 = game_gmap_ProcGmapSeq_vtable;
  *(_QWORD*)(a1 + 208) = GameData_1fa6ed0;
  v2 = a1 + 208;
  v3 = GameRoutine_886c80();
  v4 = --GameData_21d92dc;
  *GameData_212d168 = GameData_21d925c[v4];
  GameRoutine_7c51c0(v3);
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 240);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  v10 = v2;
  *(_QWORD*)(a1 + 208) = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v10);
  v7 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fa6fb0;
  if (v7 == (_QWORD*)(a1 + 160)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_11;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);

LABEL_11:
  GameData_21f1618 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
