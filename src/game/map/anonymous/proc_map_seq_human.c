#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 GameRoutine_182ae70(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_739f00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f94888[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqHuman_vtable[])();
extern __int64 GameData_212d0d0[2];
extern __int64 GameData_21cf830;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcMapSeqHuman_Destructor(__int64 a1);
__int64 ProcMapSeqHuman_Unknown9(__int64 a1);
__int64 ProcMapSeqHuman_Unknown12(__int64 result);

__int64 ProcMapSeqHuman_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqHuman_vtable;
  GameRoutine_739f00(a1);
  v2 = *(_QWORD*)(a1 + 208);
  if (v2 != 0) {
    *(_QWORD*)(a1 + 216) = v2;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v2);
  }
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1f94888;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_10;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);

LABEL_10:
  GameData_21cf830 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqHuman_Unknown9(__int64 a1)
{
  if (*(_BYTE*)(a1 + 232) == 1) {
    GameRoutine_1566440(a1 + 208, 0);
    *(_BYTE*)(a1 + 232) = 0;
  }
  return GameRoutine_182ae70(*(_QWORD*)GameData_212d0d0[0], 1);
}

__int64 ProcMapSeqHuman_Unknown12(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _BOOL4 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  if (v1 > v2) {
  LABEL_4:
    v3 = true;
  }
  else {
    while (*(_BYTE*)v2 != 2) {
      v2 -= 64LL;
      if (v1 > v2) {
        goto LABEL_4;
      }
    }
    v3 = *(_DWORD*)(v2 + 32) != 28;
  }
  if (v1 != 0 && v3) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 28) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64LL;
    }
  }
  return result;
}

#pragma GCC visibility pop
